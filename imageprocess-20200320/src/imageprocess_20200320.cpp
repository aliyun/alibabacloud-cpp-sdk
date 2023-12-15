// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/imageprocess_20200320.hpp>
#include <algorithm>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <alibabacloud/open_platform_20191219.hpp>
#include <alibabacloud/oss.hpp>
#include <alibabacloud/ossutil.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/file_form.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Imageprocess20200320;

Alibabacloud_Imageprocess20200320::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("imageprocess"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Imageprocess20200320::Client::getEndpoint(shared_ptr<string> productId,
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

AnalyzeChestVesselResponse Alibabacloud_Imageprocess20200320::Client::analyzeChestVesselWithOptions(shared_ptr<AnalyzeChestVesselRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    body->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AnalyzeChestVesselRequestURLList>>(request->URLList)) {
    body->insert(pair<string, vector<AnalyzeChestVesselRequestURLList>>("URLList", *request->URLList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AnalyzeChestVessel"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AnalyzeChestVesselResponse(callApi(params, req, runtime));
}

AnalyzeChestVesselResponse Alibabacloud_Imageprocess20200320::Client::analyzeChestVessel(shared_ptr<AnalyzeChestVesselRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return analyzeChestVesselWithOptions(request, runtime);
}

AnalyzeChestVesselResponse Alibabacloud_Imageprocess20200320::Client::analyzeChestVesselAdvance(shared_ptr<AnalyzeChestVesselAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<AnalyzeChestVesselRequest> analyzeChestVesselReq = make_shared<AnalyzeChestVesselRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, analyzeChestVesselReq);
  if (!Darabonba_Util::Client::isUnset<vector<AnalyzeChestVesselAdvanceRequestURLList>>(request->URLList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->URLList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.URLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.URLObject ? boost::any() : boost::any(*item0.URLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<AnalyzeChestVesselRequestURLList> tmp = make_shared<AnalyzeChestVesselRequestURLList>((*analyzeChestVesselReq->URLList)[[object Object]]);
        tmp->URL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  shared_ptr<AnalyzeChestVesselResponse> analyzeChestVesselResp = make_shared<AnalyzeChestVesselResponse>(analyzeChestVesselWithOptions(analyzeChestVesselReq, runtime));
  return *analyzeChestVesselResp;
}

CalcBMDResponse Alibabacloud_Imageprocess20200320::Client::calcBMDWithOptions(shared_ptr<CalcBMDRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    body->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CalcBMDRequestURLList>>(request->URLList)) {
    body->insert(pair<string, vector<CalcBMDRequestURLList>>("URLList", *request->URLList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CalcBMD"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CalcBMDResponse(callApi(params, req, runtime));
}

CalcBMDResponse Alibabacloud_Imageprocess20200320::Client::calcBMD(shared_ptr<CalcBMDRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return calcBMDWithOptions(request, runtime);
}

CalcBMDResponse Alibabacloud_Imageprocess20200320::Client::calcBMDAdvance(shared_ptr<CalcBMDAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<CalcBMDRequest> calcBMDReq = make_shared<CalcBMDRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, calcBMDReq);
  if (!Darabonba_Util::Client::isUnset<vector<CalcBMDAdvanceRequestURLList>>(request->URLList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->URLList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.URLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.URLObject ? boost::any() : boost::any(*item0.URLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<CalcBMDRequestURLList> tmp = make_shared<CalcBMDRequestURLList>((*calcBMDReq->URLList)[[object Object]]);
        tmp->URL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  shared_ptr<CalcBMDResponse> calcBMDResp = make_shared<CalcBMDResponse>(calcBMDWithOptions(calcBMDReq, runtime));
  return *calcBMDResp;
}

CalcCACSResponse Alibabacloud_Imageprocess20200320::Client::calcCACSWithOptions(shared_ptr<CalcCACSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    body->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CalcCACSRequestURLList>>(request->URLList)) {
    body->insert(pair<string, vector<CalcCACSRequestURLList>>("URLList", *request->URLList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CalcCACS"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CalcCACSResponse(callApi(params, req, runtime));
}

CalcCACSResponse Alibabacloud_Imageprocess20200320::Client::calcCACS(shared_ptr<CalcCACSRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return calcCACSWithOptions(request, runtime);
}

CalcCACSResponse Alibabacloud_Imageprocess20200320::Client::calcCACSAdvance(shared_ptr<CalcCACSAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<CalcCACSRequest> calcCACSReq = make_shared<CalcCACSRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, calcCACSReq);
  if (!Darabonba_Util::Client::isUnset<vector<CalcCACSAdvanceRequestURLList>>(request->URLList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->URLList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.URLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.URLObject ? boost::any() : boost::any(*item0.URLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<CalcCACSRequestURLList> tmp = make_shared<CalcCACSRequestURLList>((*calcCACSReq->URLList)[[object Object]]);
        tmp->URL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  shared_ptr<CalcCACSResponse> calcCACSResp = make_shared<CalcCACSResponse>(calcCACSWithOptions(calcCACSReq, runtime));
  return *calcCACSResp;
}

ClassifyFNFResponse Alibabacloud_Imageprocess20200320::Client::classifyFNFWithOptions(shared_ptr<ClassifyFNFRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    body->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tracerId)) {
    body->insert(pair<string, string>("TracerId", *request->tracerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ClassifyFNF"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ClassifyFNFResponse(callApi(params, req, runtime));
}

ClassifyFNFResponse Alibabacloud_Imageprocess20200320::Client::classifyFNF(shared_ptr<ClassifyFNFRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return classifyFNFWithOptions(request, runtime);
}

ClassifyFNFResponse Alibabacloud_Imageprocess20200320::Client::classifyFNFAdvance(shared_ptr<ClassifyFNFAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<ClassifyFNFRequest> classifyFNFReq = make_shared<ClassifyFNFRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, classifyFNFReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->imageUrlObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->body->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"content", !request->imageUrlObject ? boost::any() : boost::any(*request->imageUrlObject)},
      {"contentType", boost::any(string(""))}
    }));
    ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
      {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
      {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
      {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
      {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
      {"successActionStatus", boost::any(string("201"))}
    }));
    uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
      {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
      {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
    }));
    ossClient->postObject(uploadRequest, ossRuntime);
    classifyFNFReq->imageUrl = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<ClassifyFNFResponse> classifyFNFResp = make_shared<ClassifyFNFResponse>(classifyFNFWithOptions(classifyFNFReq, runtime));
  return *classifyFNFResp;
}

DetectCovid19CadResponse Alibabacloud_Imageprocess20200320::Client::detectCovid19CadWithOptions(shared_ptr<DetectCovid19CadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DetectCovid19CadRequestURLList>>(request->URLList)) {
    body->insert(pair<string, vector<DetectCovid19CadRequestURLList>>("URLList", *request->URLList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectCovid19Cad"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectCovid19CadResponse(callApi(params, req, runtime));
}

DetectCovid19CadResponse Alibabacloud_Imageprocess20200320::Client::detectCovid19Cad(shared_ptr<DetectCovid19CadRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectCovid19CadWithOptions(request, runtime);
}

DetectCovid19CadResponse Alibabacloud_Imageprocess20200320::Client::detectCovid19CadAdvance(shared_ptr<DetectCovid19CadAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<DetectCovid19CadRequest> detectCovid19CadReq = make_shared<DetectCovid19CadRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, detectCovid19CadReq);
  if (!Darabonba_Util::Client::isUnset<vector<DetectCovid19CadAdvanceRequestURLList>>(request->URLList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->URLList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.URLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.URLObject ? boost::any() : boost::any(*item0.URLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<DetectCovid19CadRequestURLList> tmp = make_shared<DetectCovid19CadRequestURLList>((*detectCovid19CadReq->URLList)[[object Object]]);
        tmp->URL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  shared_ptr<DetectCovid19CadResponse> detectCovid19CadResp = make_shared<DetectCovid19CadResponse>(detectCovid19CadWithOptions(detectCovid19CadReq, runtime));
  return *detectCovid19CadResp;
}

DetectHipKeypointXRayResponse Alibabacloud_Imageprocess20200320::Client::detectHipKeypointXRayWithOptions(shared_ptr<DetectHipKeypointXRayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    body->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tracerId)) {
    body->insert(pair<string, string>("TracerId", *request->tracerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectHipKeypointXRay"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectHipKeypointXRayResponse(callApi(params, req, runtime));
}

DetectHipKeypointXRayResponse Alibabacloud_Imageprocess20200320::Client::detectHipKeypointXRay(shared_ptr<DetectHipKeypointXRayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectHipKeypointXRayWithOptions(request, runtime);
}

DetectHipKeypointXRayResponse Alibabacloud_Imageprocess20200320::Client::detectHipKeypointXRayAdvance(shared_ptr<DetectHipKeypointXRayAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<DetectHipKeypointXRayRequest> detectHipKeypointXRayReq = make_shared<DetectHipKeypointXRayRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, detectHipKeypointXRayReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->imageUrlObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->body->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"content", !request->imageUrlObject ? boost::any() : boost::any(*request->imageUrlObject)},
      {"contentType", boost::any(string(""))}
    }));
    ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
      {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
      {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
      {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
      {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
      {"successActionStatus", boost::any(string("201"))}
    }));
    uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
      {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
      {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
    }));
    ossClient->postObject(uploadRequest, ossRuntime);
    detectHipKeypointXRayReq->imageUrl = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<DetectHipKeypointXRayResponse> detectHipKeypointXRayResp = make_shared<DetectHipKeypointXRayResponse>(detectHipKeypointXRayWithOptions(detectHipKeypointXRayReq, runtime));
  return *detectHipKeypointXRayResp;
}

DetectKneeKeypointXRayResponse Alibabacloud_Imageprocess20200320::Client::detectKneeKeypointXRayWithOptions(shared_ptr<DetectKneeKeypointXRayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    body->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tracerId)) {
    body->insert(pair<string, string>("TracerId", *request->tracerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectKneeKeypointXRay"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectKneeKeypointXRayResponse(callApi(params, req, runtime));
}

DetectKneeKeypointXRayResponse Alibabacloud_Imageprocess20200320::Client::detectKneeKeypointXRay(shared_ptr<DetectKneeKeypointXRayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectKneeKeypointXRayWithOptions(request, runtime);
}

DetectKneeKeypointXRayResponse Alibabacloud_Imageprocess20200320::Client::detectKneeKeypointXRayAdvance(shared_ptr<DetectKneeKeypointXRayAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<DetectKneeKeypointXRayRequest> detectKneeKeypointXRayReq = make_shared<DetectKneeKeypointXRayRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, detectKneeKeypointXRayReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->imageUrlObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->body->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"content", !request->imageUrlObject ? boost::any() : boost::any(*request->imageUrlObject)},
      {"contentType", boost::any(string(""))}
    }));
    ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
      {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
      {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
      {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
      {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
      {"successActionStatus", boost::any(string("201"))}
    }));
    uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
      {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
      {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
    }));
    ossClient->postObject(uploadRequest, ossRuntime);
    detectKneeKeypointXRayReq->imageUrl = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<DetectKneeKeypointXRayResponse> detectKneeKeypointXRayResp = make_shared<DetectKneeKeypointXRayResponse>(detectKneeKeypointXRayWithOptions(detectKneeKeypointXRayReq, runtime));
  return *detectKneeKeypointXRayResp;
}

DetectKneeXRayResponse Alibabacloud_Imageprocess20200320::Client::detectKneeXRayWithOptions(shared_ptr<DetectKneeXRayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectKneeXRay"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectKneeXRayResponse(callApi(params, req, runtime));
}

DetectKneeXRayResponse Alibabacloud_Imageprocess20200320::Client::detectKneeXRay(shared_ptr<DetectKneeXRayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectKneeXRayWithOptions(request, runtime);
}

DetectKneeXRayResponse Alibabacloud_Imageprocess20200320::Client::detectKneeXRayAdvance(shared_ptr<DetectKneeXRayAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<DetectKneeXRayRequest> detectKneeXRayReq = make_shared<DetectKneeXRayRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, detectKneeXRayReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->urlObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->body->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"content", !request->urlObject ? boost::any() : boost::any(*request->urlObject)},
      {"contentType", boost::any(string(""))}
    }));
    ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
      {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
      {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
      {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
      {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
      {"successActionStatus", boost::any(string("201"))}
    }));
    uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
      {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
      {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
    }));
    ossClient->postObject(uploadRequest, ossRuntime);
    detectKneeXRayReq->url = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<DetectKneeXRayResponse> detectKneeXRayResp = make_shared<DetectKneeXRayResponse>(detectKneeXRayWithOptions(detectKneeXRayReq, runtime));
  return *detectKneeXRayResp;
}

DetectLiverSteatosisResponse Alibabacloud_Imageprocess20200320::Client::detectLiverSteatosisWithOptions(shared_ptr<DetectLiverSteatosisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    body->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DetectLiverSteatosisRequestURLList>>(request->URLList)) {
    body->insert(pair<string, vector<DetectLiverSteatosisRequestURLList>>("URLList", *request->URLList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectLiverSteatosis"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectLiverSteatosisResponse(callApi(params, req, runtime));
}

DetectLiverSteatosisResponse Alibabacloud_Imageprocess20200320::Client::detectLiverSteatosis(shared_ptr<DetectLiverSteatosisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectLiverSteatosisWithOptions(request, runtime);
}

DetectLiverSteatosisResponse Alibabacloud_Imageprocess20200320::Client::detectLiverSteatosisAdvance(shared_ptr<DetectLiverSteatosisAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<DetectLiverSteatosisRequest> detectLiverSteatosisReq = make_shared<DetectLiverSteatosisRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, detectLiverSteatosisReq);
  if (!Darabonba_Util::Client::isUnset<vector<DetectLiverSteatosisAdvanceRequestURLList>>(request->URLList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->URLList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.URLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.URLObject ? boost::any() : boost::any(*item0.URLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<DetectLiverSteatosisRequestURLList> tmp = make_shared<DetectLiverSteatosisRequestURLList>((*detectLiverSteatosisReq->URLList)[[object Object]]);
        tmp->URL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  shared_ptr<DetectLiverSteatosisResponse> detectLiverSteatosisResp = make_shared<DetectLiverSteatosisResponse>(detectLiverSteatosisWithOptions(detectLiverSteatosisReq, runtime));
  return *detectLiverSteatosisResp;
}

DetectLungNoduleResponse Alibabacloud_Imageprocess20200320::Client::detectLungNoduleWithOptions(shared_ptr<DetectLungNoduleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->threshold)) {
    body->insert(pair<string, double>("Threshold", *request->threshold));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DetectLungNoduleRequestURLList>>(request->URLList)) {
    body->insert(pair<string, vector<DetectLungNoduleRequestURLList>>("URLList", *request->URLList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectLungNodule"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectLungNoduleResponse(callApi(params, req, runtime));
}

DetectLungNoduleResponse Alibabacloud_Imageprocess20200320::Client::detectLungNodule(shared_ptr<DetectLungNoduleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectLungNoduleWithOptions(request, runtime);
}

DetectLungNoduleResponse Alibabacloud_Imageprocess20200320::Client::detectLungNoduleAdvance(shared_ptr<DetectLungNoduleAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<DetectLungNoduleRequest> detectLungNoduleReq = make_shared<DetectLungNoduleRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, detectLungNoduleReq);
  if (!Darabonba_Util::Client::isUnset<vector<DetectLungNoduleAdvanceRequestURLList>>(request->URLList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->URLList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.URLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.URLObject ? boost::any() : boost::any(*item0.URLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<DetectLungNoduleRequestURLList> tmp = make_shared<DetectLungNoduleRequestURLList>((*detectLungNoduleReq->URLList)[[object Object]]);
        tmp->URL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  shared_ptr<DetectLungNoduleResponse> detectLungNoduleResp = make_shared<DetectLungNoduleResponse>(detectLungNoduleWithOptions(detectLungNoduleReq, runtime));
  return *detectLungNoduleResp;
}

DetectLymphResponse Alibabacloud_Imageprocess20200320::Client::detectLymphWithOptions(shared_ptr<DetectLymphRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    body->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DetectLymphRequestURLList>>(request->URLList)) {
    body->insert(pair<string, vector<DetectLymphRequestURLList>>("URLList", *request->URLList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectLymph"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectLymphResponse(callApi(params, req, runtime));
}

DetectLymphResponse Alibabacloud_Imageprocess20200320::Client::detectLymph(shared_ptr<DetectLymphRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectLymphWithOptions(request, runtime);
}

DetectLymphResponse Alibabacloud_Imageprocess20200320::Client::detectLymphAdvance(shared_ptr<DetectLymphAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<DetectLymphRequest> detectLymphReq = make_shared<DetectLymphRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, detectLymphReq);
  if (!Darabonba_Util::Client::isUnset<vector<DetectLymphAdvanceRequestURLList>>(request->URLList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->URLList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.URLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.URLObject ? boost::any() : boost::any(*item0.URLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<DetectLymphRequestURLList> tmp = make_shared<DetectLymphRequestURLList>((*detectLymphReq->URLList)[[object Object]]);
        tmp->URL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  shared_ptr<DetectLymphResponse> detectLymphResp = make_shared<DetectLymphResponse>(detectLymphWithOptions(detectLymphReq, runtime));
  return *detectLymphResp;
}

DetectPancResponse Alibabacloud_Imageprocess20200320::Client::detectPancWithOptions(shared_ptr<DetectPancRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    body->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DetectPancRequestURLList>>(request->URLList)) {
    body->insert(pair<string, vector<DetectPancRequestURLList>>("URLList", *request->URLList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectPanc"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectPancResponse(callApi(params, req, runtime));
}

DetectPancResponse Alibabacloud_Imageprocess20200320::Client::detectPanc(shared_ptr<DetectPancRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectPancWithOptions(request, runtime);
}

DetectPancResponse Alibabacloud_Imageprocess20200320::Client::detectPancAdvance(shared_ptr<DetectPancAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<DetectPancRequest> detectPancReq = make_shared<DetectPancRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, detectPancReq);
  if (!Darabonba_Util::Client::isUnset<vector<DetectPancAdvanceRequestURLList>>(request->URLList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->URLList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.URLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.URLObject ? boost::any() : boost::any(*item0.URLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<DetectPancRequestURLList> tmp = make_shared<DetectPancRequestURLList>((*detectPancReq->URLList)[[object Object]]);
        tmp->URL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  shared_ptr<DetectPancResponse> detectPancResp = make_shared<DetectPancResponse>(detectPancWithOptions(detectPancReq, runtime));
  return *detectPancResp;
}

DetectRibFractureResponse Alibabacloud_Imageprocess20200320::Client::detectRibFractureWithOptions(shared_ptr<DetectRibFractureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    body->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DetectRibFractureRequestURLList>>(request->URLList)) {
    body->insert(pair<string, vector<DetectRibFractureRequestURLList>>("URLList", *request->URLList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectRibFracture"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectRibFractureResponse(callApi(params, req, runtime));
}

DetectRibFractureResponse Alibabacloud_Imageprocess20200320::Client::detectRibFracture(shared_ptr<DetectRibFractureRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectRibFractureWithOptions(request, runtime);
}

DetectRibFractureResponse Alibabacloud_Imageprocess20200320::Client::detectRibFractureAdvance(shared_ptr<DetectRibFractureAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<DetectRibFractureRequest> detectRibFractureReq = make_shared<DetectRibFractureRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, detectRibFractureReq);
  if (!Darabonba_Util::Client::isUnset<vector<DetectRibFractureAdvanceRequestURLList>>(request->URLList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->URLList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.URLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.URLObject ? boost::any() : boost::any(*item0.URLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<DetectRibFractureRequestURLList> tmp = make_shared<DetectRibFractureRequestURLList>((*detectRibFractureReq->URLList)[[object Object]]);
        tmp->URL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  shared_ptr<DetectRibFractureResponse> detectRibFractureResp = make_shared<DetectRibFractureResponse>(detectRibFractureWithOptions(detectRibFractureReq, runtime));
  return *detectRibFractureResp;
}

DetectSkinDiseaseResponse Alibabacloud_Imageprocess20200320::Client::detectSkinDiseaseWithOptions(shared_ptr<DetectSkinDiseaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectSkinDisease"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectSkinDiseaseResponse(callApi(params, req, runtime));
}

DetectSkinDiseaseResponse Alibabacloud_Imageprocess20200320::Client::detectSkinDisease(shared_ptr<DetectSkinDiseaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectSkinDiseaseWithOptions(request, runtime);
}

DetectSkinDiseaseResponse Alibabacloud_Imageprocess20200320::Client::detectSkinDiseaseAdvance(shared_ptr<DetectSkinDiseaseAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<DetectSkinDiseaseRequest> detectSkinDiseaseReq = make_shared<DetectSkinDiseaseRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, detectSkinDiseaseReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->urlObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->body->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"content", !request->urlObject ? boost::any() : boost::any(*request->urlObject)},
      {"contentType", boost::any(string(""))}
    }));
    ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
      {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
      {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
      {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
      {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
      {"successActionStatus", boost::any(string("201"))}
    }));
    uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
      {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
      {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
    }));
    ossClient->postObject(uploadRequest, ossRuntime);
    detectSkinDiseaseReq->url = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<DetectSkinDiseaseResponse> detectSkinDiseaseResp = make_shared<DetectSkinDiseaseResponse>(detectSkinDiseaseWithOptions(detectSkinDiseaseReq, runtime));
  return *detectSkinDiseaseResp;
}

DetectSpineMRIResponse Alibabacloud_Imageprocess20200320::Client::detectSpineMRIWithOptions(shared_ptr<DetectSpineMRIRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DetectSpineMRIRequestURLList>>(request->URLList)) {
    body->insert(pair<string, vector<DetectSpineMRIRequestURLList>>("URLList", *request->URLList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectSpineMRI"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectSpineMRIResponse(callApi(params, req, runtime));
}

DetectSpineMRIResponse Alibabacloud_Imageprocess20200320::Client::detectSpineMRI(shared_ptr<DetectSpineMRIRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectSpineMRIWithOptions(request, runtime);
}

DetectSpineMRIResponse Alibabacloud_Imageprocess20200320::Client::detectSpineMRIAdvance(shared_ptr<DetectSpineMRIAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<DetectSpineMRIRequest> detectSpineMRIReq = make_shared<DetectSpineMRIRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, detectSpineMRIReq);
  if (!Darabonba_Util::Client::isUnset<vector<DetectSpineMRIAdvanceRequestURLList>>(request->URLList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->URLList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.URLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.URLObject ? boost::any() : boost::any(*item0.URLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<DetectSpineMRIRequestURLList> tmp = make_shared<DetectSpineMRIRequestURLList>((*detectSpineMRIReq->URLList)[[object Object]]);
        tmp->URL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  shared_ptr<DetectSpineMRIResponse> detectSpineMRIResp = make_shared<DetectSpineMRIResponse>(detectSpineMRIWithOptions(detectSpineMRIReq, runtime));
  return *detectSpineMRIResp;
}

FeedbackSessionResponse Alibabacloud_Imageprocess20200320::Client::feedbackSessionWithOptions(shared_ptr<FeedbackSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->feedback)) {
    body->insert(pair<string, string>("Feedback", *request->feedback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FeedbackSession"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FeedbackSessionResponse(callApi(params, req, runtime));
}

FeedbackSessionResponse Alibabacloud_Imageprocess20200320::Client::feedbackSession(shared_ptr<FeedbackSessionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return feedbackSessionWithOptions(request, runtime);
}

GetAsyncJobResultResponse Alibabacloud_Imageprocess20200320::Client::getAsyncJobResultWithOptions(shared_ptr<GetAsyncJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAsyncJobResult"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAsyncJobResultResponse(callApi(params, req, runtime));
}

GetAsyncJobResultResponse Alibabacloud_Imageprocess20200320::Client::getAsyncJobResult(shared_ptr<GetAsyncJobResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAsyncJobResultWithOptions(request, runtime);
}

PredictCVDResponse Alibabacloud_Imageprocess20200320::Client::predictCVDWithOptions(shared_ptr<PredictCVDRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    body->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<PredictCVDRequestURLList>>(request->URLList)) {
    body->insert(pair<string, vector<PredictCVDRequestURLList>>("URLList", *request->URLList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PredictCVD"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PredictCVDResponse(callApi(params, req, runtime));
}

PredictCVDResponse Alibabacloud_Imageprocess20200320::Client::predictCVD(shared_ptr<PredictCVDRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return predictCVDWithOptions(request, runtime);
}

PredictCVDResponse Alibabacloud_Imageprocess20200320::Client::predictCVDAdvance(shared_ptr<PredictCVDAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<PredictCVDRequest> predictCVDReq = make_shared<PredictCVDRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, predictCVDReq);
  if (!Darabonba_Util::Client::isUnset<vector<PredictCVDAdvanceRequestURLList>>(request->URLList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->URLList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.URLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.URLObject ? boost::any() : boost::any(*item0.URLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<PredictCVDRequestURLList> tmp = make_shared<PredictCVDRequestURLList>((*predictCVDReq->URLList)[[object Object]]);
        tmp->URL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  shared_ptr<PredictCVDResponse> predictCVDResp = make_shared<PredictCVDResponse>(predictCVDWithOptions(predictCVDReq, runtime));
  return *predictCVDResp;
}

RunCTRegistrationResponse Alibabacloud_Imageprocess20200320::Client::runCTRegistrationWithOptions(shared_ptr<RunCTRegistrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    body->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RunCTRegistrationRequestFloatingList>>(request->floatingList)) {
    body->insert(pair<string, vector<RunCTRegistrationRequestFloatingList>>("FloatingList", *request->floatingList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RunCTRegistrationRequestReferenceList>>(request->referenceList)) {
    body->insert(pair<string, vector<RunCTRegistrationRequestReferenceList>>("ReferenceList", *request->referenceList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunCTRegistration"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunCTRegistrationResponse(callApi(params, req, runtime));
}

RunCTRegistrationResponse Alibabacloud_Imageprocess20200320::Client::runCTRegistration(shared_ptr<RunCTRegistrationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runCTRegistrationWithOptions(request, runtime);
}

RunCTRegistrationResponse Alibabacloud_Imageprocess20200320::Client::runCTRegistrationAdvance(shared_ptr<RunCTRegistrationAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<RunCTRegistrationRequest> runCTRegistrationReq = make_shared<RunCTRegistrationRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, runCTRegistrationReq);
  if (!Darabonba_Util::Client::isUnset<vector<RunCTRegistrationAdvanceRequestFloatingList>>(request->floatingList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->floatingList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.floatingURLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.floatingURLObject ? boost::any() : boost::any(*item0.floatingURLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<RunCTRegistrationRequestFloatingList> tmp = make_shared<RunCTRegistrationRequestFloatingList>((*runCTRegistrationReq->floatingList)[[object Object]]);
        tmp->floatingURL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  if (!Darabonba_Util::Client::isUnset<vector<RunCTRegistrationAdvanceRequestReferenceList>>(request->referenceList)) {
    shared_ptr<int> i1 = make_shared<int>(0);
    for(auto item0 : *request->referenceList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.referenceURLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.referenceURLObject ? boost::any() : boost::any(*item0.referenceURLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        tmp = make_shared<RunCTRegistrationRequestReferenceList>((*runCTRegistrationReq->referenceList)[[object Object]]);
        tmp->referenceURL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i1 = make_shared<int>(std::ltoi(std::itol(*i1) + std::itol(1)));
      }
    }
  }
  shared_ptr<RunCTRegistrationResponse> runCTRegistrationResp = make_shared<RunCTRegistrationResponse>(runCTRegistrationWithOptions(runCTRegistrationReq, runtime));
  return *runCTRegistrationResp;
}

RunMedQAResponse Alibabacloud_Imageprocess20200320::Client::runMedQAWithOptions(shared_ptr<RunMedQARequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<RunMedQARequestAnswerImageDataList>>(request->answerImageDataList)) {
    body->insert(pair<string, vector<RunMedQARequestAnswerImageDataList>>("AnswerImageDataList", *request->answerImageDataList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RunMedQARequestAnswerImageURLList>>(request->answerImageURLList)) {
    body->insert(pair<string, vector<RunMedQARequestAnswerImageURLList>>("AnswerImageURLList", *request->answerImageURLList));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RunMedQARequestAnswerTextList>>(request->answerTextList)) {
    body->insert(pair<string, vector<RunMedQARequestAnswerTextList>>("AnswerTextList", *request->answerTextList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->department)) {
    body->insert(pair<string, string>("Department", *request->department));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->questionType)) {
    body->insert(pair<string, string>("QuestionType", *request->questionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    body->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunMedQA"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunMedQAResponse(callApi(params, req, runtime));
}

RunMedQAResponse Alibabacloud_Imageprocess20200320::Client::runMedQA(shared_ptr<RunMedQARequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runMedQAWithOptions(request, runtime);
}

RunMedQAResponse Alibabacloud_Imageprocess20200320::Client::runMedQAAdvance(shared_ptr<RunMedQAAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<RunMedQARequest> runMedQAReq = make_shared<RunMedQARequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, runMedQAReq);
  if (!Darabonba_Util::Client::isUnset<vector<RunMedQAAdvanceRequestAnswerImageURLList>>(request->answerImageURLList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->answerImageURLList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.answerImageURLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.answerImageURLObject ? boost::any() : boost::any(*item0.answerImageURLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<RunMedQARequestAnswerImageURLList> tmp = make_shared<RunMedQARequestAnswerImageURLList>((*runMedQAReq->answerImageURLList)[[object Object]]);
        tmp->answerImageURL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  shared_ptr<RunMedQAResponse> runMedQAResp = make_shared<RunMedQAResponse>(runMedQAWithOptions(runMedQAReq, runtime));
  return *runMedQAResp;
}

ScreenCRCResponse Alibabacloud_Imageprocess20200320::Client::screenCRCWithOptions(shared_ptr<ScreenCRCRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    body->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ScreenCRCRequestURLList>>(request->URLList)) {
    body->insert(pair<string, vector<ScreenCRCRequestURLList>>("URLList", *request->URLList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScreenCRC"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScreenCRCResponse(callApi(params, req, runtime));
}

ScreenCRCResponse Alibabacloud_Imageprocess20200320::Client::screenCRC(shared_ptr<ScreenCRCRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return screenCRCWithOptions(request, runtime);
}

ScreenCRCResponse Alibabacloud_Imageprocess20200320::Client::screenCRCAdvance(shared_ptr<ScreenCRCAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<ScreenCRCRequest> screenCRCReq = make_shared<ScreenCRCRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, screenCRCReq);
  if (!Darabonba_Util::Client::isUnset<vector<ScreenCRCAdvanceRequestURLList>>(request->URLList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->URLList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.URLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.URLObject ? boost::any() : boost::any(*item0.URLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<ScreenCRCRequestURLList> tmp = make_shared<ScreenCRCRequestURLList>((*screenCRCReq->URLList)[[object Object]]);
        tmp->URL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  shared_ptr<ScreenCRCResponse> screenCRCResp = make_shared<ScreenCRCResponse>(screenCRCWithOptions(screenCRCReq, runtime));
  return *screenCRCResp;
}

ScreenChestCTResponse Alibabacloud_Imageprocess20200320::Client::screenChestCTWithOptions(shared_ptr<ScreenChestCTRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mask)) {
    body->insert(pair<string, long>("Mask", *request->mask));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ScreenChestCTRequestURLList>>(request->URLList)) {
    body->insert(pair<string, vector<ScreenChestCTRequestURLList>>("URLList", *request->URLList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->verbose)) {
    body->insert(pair<string, long>("Verbose", *request->verbose));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScreenChestCT"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScreenChestCTResponse(callApi(params, req, runtime));
}

ScreenChestCTResponse Alibabacloud_Imageprocess20200320::Client::screenChestCT(shared_ptr<ScreenChestCTRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return screenChestCTWithOptions(request, runtime);
}

ScreenChestCTResponse Alibabacloud_Imageprocess20200320::Client::screenChestCTAdvance(shared_ptr<ScreenChestCTAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<ScreenChestCTRequest> screenChestCTReq = make_shared<ScreenChestCTRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, screenChestCTReq);
  if (!Darabonba_Util::Client::isUnset<vector<ScreenChestCTAdvanceRequestURLList>>(request->URLList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->URLList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.URLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.URLObject ? boost::any() : boost::any(*item0.URLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<ScreenChestCTRequestURLList> tmp = make_shared<ScreenChestCTRequestURLList>((*screenChestCTReq->URLList)[[object Object]]);
        tmp->URL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  shared_ptr<ScreenChestCTResponse> screenChestCTResp = make_shared<ScreenChestCTResponse>(screenChestCTWithOptions(screenChestCTReq, runtime));
  return *screenChestCTResp;
}

ScreenECResponse Alibabacloud_Imageprocess20200320::Client::screenECWithOptions(shared_ptr<ScreenECRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    body->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ScreenECRequestURLList>>(request->URLList)) {
    body->insert(pair<string, vector<ScreenECRequestURLList>>("URLList", *request->URLList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScreenEC"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScreenECResponse(callApi(params, req, runtime));
}

ScreenECResponse Alibabacloud_Imageprocess20200320::Client::screenEC(shared_ptr<ScreenECRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return screenECWithOptions(request, runtime);
}

ScreenECResponse Alibabacloud_Imageprocess20200320::Client::screenECAdvance(shared_ptr<ScreenECAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<ScreenECRequest> screenECReq = make_shared<ScreenECRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, screenECReq);
  if (!Darabonba_Util::Client::isUnset<vector<ScreenECAdvanceRequestURLList>>(request->URLList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->URLList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.URLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.URLObject ? boost::any() : boost::any(*item0.URLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<ScreenECRequestURLList> tmp = make_shared<ScreenECRequestURLList>((*screenECReq->URLList)[[object Object]]);
        tmp->URL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  shared_ptr<ScreenECResponse> screenECResp = make_shared<ScreenECResponse>(screenECWithOptions(screenECReq, runtime));
  return *screenECResp;
}

ScreenGCResponse Alibabacloud_Imageprocess20200320::Client::screenGCWithOptions(shared_ptr<ScreenGCRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    body->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ScreenGCRequestURLList>>(request->URLList)) {
    body->insert(pair<string, vector<ScreenGCRequestURLList>>("URLList", *request->URLList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScreenGC"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScreenGCResponse(callApi(params, req, runtime));
}

ScreenGCResponse Alibabacloud_Imageprocess20200320::Client::screenGC(shared_ptr<ScreenGCRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return screenGCWithOptions(request, runtime);
}

ScreenGCResponse Alibabacloud_Imageprocess20200320::Client::screenGCAdvance(shared_ptr<ScreenGCAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<ScreenGCRequest> screenGCReq = make_shared<ScreenGCRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, screenGCReq);
  if (!Darabonba_Util::Client::isUnset<vector<ScreenGCAdvanceRequestURLList>>(request->URLList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->URLList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.URLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.URLObject ? boost::any() : boost::any(*item0.URLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<ScreenGCRequestURLList> tmp = make_shared<ScreenGCRequestURLList>((*screenGCReq->URLList)[[object Object]]);
        tmp->URL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  shared_ptr<ScreenGCResponse> screenGCResp = make_shared<ScreenGCResponse>(screenGCWithOptions(screenGCReq, runtime));
  return *screenGCResp;
}

ScreenLCResponse Alibabacloud_Imageprocess20200320::Client::screenLCWithOptions(shared_ptr<ScreenLCRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceType)) {
    body->insert(pair<string, string>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ScreenLCRequestURLList>>(request->URLList)) {
    body->insert(pair<string, vector<ScreenLCRequestURLList>>("URLList", *request->URLList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScreenLC"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScreenLCResponse(callApi(params, req, runtime));
}

ScreenLCResponse Alibabacloud_Imageprocess20200320::Client::screenLC(shared_ptr<ScreenLCRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return screenLCWithOptions(request, runtime);
}

ScreenLCResponse Alibabacloud_Imageprocess20200320::Client::screenLCAdvance(shared_ptr<ScreenLCAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<ScreenLCRequest> screenLCReq = make_shared<ScreenLCRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, screenLCReq);
  if (!Darabonba_Util::Client::isUnset<vector<ScreenLCAdvanceRequestURLList>>(request->URLList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->URLList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.URLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.URLObject ? boost::any() : boost::any(*item0.URLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<ScreenLCRequestURLList> tmp = make_shared<ScreenLCRequestURLList>((*screenLCReq->URLList)[[object Object]]);
        tmp->URL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  shared_ptr<ScreenLCResponse> screenLCResp = make_shared<ScreenLCResponse>(screenLCWithOptions(screenLCReq, runtime));
  return *screenLCResp;
}

SegmentLymphNodeResponse Alibabacloud_Imageprocess20200320::Client::segmentLymphNodeWithOptions(shared_ptr<SegmentLymphNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bodyPart)) {
    body->insert(pair<string, string>("BodyPart", *request->bodyPart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SegmentLymphNodeRequestURLList>>(request->URLList)) {
    body->insert(pair<string, vector<SegmentLymphNodeRequestURLList>>("URLList", *request->URLList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SegmentLymphNode"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SegmentLymphNodeResponse(callApi(params, req, runtime));
}

SegmentLymphNodeResponse Alibabacloud_Imageprocess20200320::Client::segmentLymphNode(shared_ptr<SegmentLymphNodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return segmentLymphNodeWithOptions(request, runtime);
}

SegmentLymphNodeResponse Alibabacloud_Imageprocess20200320::Client::segmentLymphNodeAdvance(shared_ptr<SegmentLymphNodeAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<SegmentLymphNodeRequest> segmentLymphNodeReq = make_shared<SegmentLymphNodeRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, segmentLymphNodeReq);
  if (!Darabonba_Util::Client::isUnset<vector<SegmentLymphNodeAdvanceRequestURLList>>(request->URLList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->URLList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.URLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.URLObject ? boost::any() : boost::any(*item0.URLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<SegmentLymphNodeRequestURLList> tmp = make_shared<SegmentLymphNodeRequestURLList>((*segmentLymphNodeReq->URLList)[[object Object]]);
        tmp->URL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  shared_ptr<SegmentLymphNodeResponse> segmentLymphNodeResp = make_shared<SegmentLymphNodeResponse>(segmentLymphNodeWithOptions(segmentLymphNodeReq, runtime));
  return *segmentLymphNodeResp;
}

SegmentOARResponse Alibabacloud_Imageprocess20200320::Client::segmentOARWithOptions(shared_ptr<SegmentOARRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bodyPart)) {
    body->insert(pair<string, string>("BodyPart", *request->bodyPart));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->contrast)) {
    body->insert(pair<string, bool>("Contrast", *request->contrast));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->maskList)) {
    body->insert(pair<string, vector<long>>("MaskList", *request->maskList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SegmentOARRequestURLList>>(request->URLList)) {
    body->insert(pair<string, vector<SegmentOARRequestURLList>>("URLList", *request->URLList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SegmentOAR"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SegmentOARResponse(callApi(params, req, runtime));
}

SegmentOARResponse Alibabacloud_Imageprocess20200320::Client::segmentOAR(shared_ptr<SegmentOARRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return segmentOARWithOptions(request, runtime);
}

SegmentOARResponse Alibabacloud_Imageprocess20200320::Client::segmentOARAdvance(shared_ptr<SegmentOARAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<SegmentOARRequest> segmentOARReq = make_shared<SegmentOARRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, segmentOARReq);
  if (!Darabonba_Util::Client::isUnset<vector<SegmentOARAdvanceRequestURLList>>(request->URLList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->URLList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.URLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.URLObject ? boost::any() : boost::any(*item0.URLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<SegmentOARRequestURLList> tmp = make_shared<SegmentOARRequestURLList>((*segmentOARReq->URLList)[[object Object]]);
        tmp->URL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  shared_ptr<SegmentOARResponse> segmentOARResp = make_shared<SegmentOARResponse>(segmentOARWithOptions(segmentOARReq, runtime));
  return *segmentOARResp;
}

TargetVolumeSegmentResponse Alibabacloud_Imageprocess20200320::Client::targetVolumeSegmentWithOptions(shared_ptr<TargetVolumeSegmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cancerType)) {
    body->insert(pair<string, string>("CancerType", *request->cancerType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataFormat)) {
    body->insert(pair<string, string>("DataFormat", *request->dataFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgId)) {
    body->insert(pair<string, string>("OrgId", *request->orgId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orgName)) {
    body->insert(pair<string, string>("OrgName", *request->orgName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetVolumeType)) {
    body->insert(pair<string, string>("TargetVolumeType", *request->targetVolumeType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TargetVolumeSegmentRequestURLList>>(request->URLList)) {
    body->insert(pair<string, vector<TargetVolumeSegmentRequestURLList>>("URLList", *request->URLList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TargetVolumeSegment"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TargetVolumeSegmentResponse(callApi(params, req, runtime));
}

TargetVolumeSegmentResponse Alibabacloud_Imageprocess20200320::Client::targetVolumeSegment(shared_ptr<TargetVolumeSegmentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return targetVolumeSegmentWithOptions(request, runtime);
}

TargetVolumeSegmentResponse Alibabacloud_Imageprocess20200320::Client::targetVolumeSegmentAdvance(shared_ptr<TargetVolumeSegmentAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_OpenApi::Config> authConfig = make_shared<Alibabacloud_OpenApi::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"securityToken", !securityToken ? boost::any() : boost::any(*securityToken)},
    {"type", !credentialType ? boost::any() : boost::any(*credentialType)},
    {"endpoint", !openPlatformEndpoint ? boost::any() : boost::any(*openPlatformEndpoint)},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("imageprocess"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient;
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<TargetVolumeSegmentRequest> targetVolumeSegmentReq = make_shared<TargetVolumeSegmentRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, targetVolumeSegmentReq);
  if (!Darabonba_Util::Client::isUnset<vector<TargetVolumeSegmentAdvanceRequestURLList>>(request->URLList)) {
    shared_ptr<int> i0 = make_shared<int>(0);
    for(auto item0 : *request->URLList) {
      if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(item0.URLObject)) {
        authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
        ossConfig->accessKeyId = authResponse->body->accessKeyId;
        ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
        ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
        fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
          {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"content", !item0.URLObject ? boost::any() : boost::any(*item0.URLObject)},
          {"contentType", boost::any(string(""))}
        }));
        ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
          {"accessKeyId", !authResponse->body->accessKeyId ? boost::any() : boost::any(*authResponse->body->accessKeyId)},
          {"policy", !authResponse->body->encodedPolicy ? boost::any() : boost::any(*authResponse->body->encodedPolicy)},
          {"signature", !authResponse->body->signature ? boost::any() : boost::any(*authResponse->body->signature)},
          {"key", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
          {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
          {"successActionStatus", boost::any(string("201"))}
        }));
        uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
          {"bucketName", !authResponse->body->bucket ? boost::any() : boost::any(*authResponse->body->bucket)},
          {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
        }));
        ossClient->postObject(uploadRequest, ossRuntime);
        shared_ptr<TargetVolumeSegmentRequestURLList> tmp = make_shared<TargetVolumeSegmentRequestURLList>((*targetVolumeSegmentReq->URLList)[[object Object]]);
        tmp->URL = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
        i0 = make_shared<int>(std::ltoi(std::itol(*i0) + std::itol(1)));
      }
    }
  }
  shared_ptr<TargetVolumeSegmentResponse> targetVolumeSegmentResp = make_shared<TargetVolumeSegmentResponse>(targetVolumeSegmentWithOptions(targetVolumeSegmentReq, runtime));
  return *targetVolumeSegmentResp;
}

TranslateMedResponse Alibabacloud_Imageprocess20200320::Client::translateMedWithOptions(shared_ptr<TranslateMedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fromLanguage)) {
    body->insert(pair<string, string>("FromLanguage", *request->fromLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    body->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toLanguage)) {
    body->insert(pair<string, string>("ToLanguage", *request->toLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TranslateMed"))},
    {"version", boost::any(string("2020-03-20"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TranslateMedResponse(callApi(params, req, runtime));
}

TranslateMedResponse Alibabacloud_Imageprocess20200320::Client::translateMed(shared_ptr<TranslateMedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return translateMedWithOptions(request, runtime);
}

