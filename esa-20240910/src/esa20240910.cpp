// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/esa20240910.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <alibabacloud/open_platform_20191219.hpp>
#include <alibabacloud/oss.hpp>
#include <alibabacloud/ossutil.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/file_form.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_ESA20240910;

Alibabacloud_ESA20240910::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("esa"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_ESA20240910::Client::getEndpoint(shared_ptr<string> productId,
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

ActivateClientCertificateResponse Alibabacloud_ESA20240910::Client::activateClientCertificateWithOptions(shared_ptr<ActivateClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ActivateClientCertificate"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ActivateClientCertificateResponse(callApi(params, req, runtime));
  }
  else {
    return ActivateClientCertificateResponse(execute(params, req, runtime));
  }
}

ActivateClientCertificateResponse Alibabacloud_ESA20240910::Client::activateClientCertificate(shared_ptr<ActivateClientCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activateClientCertificateWithOptions(request, runtime);
}

ActivateVersionManagementResponse Alibabacloud_ESA20240910::Client::activateVersionManagementWithOptions(shared_ptr<ActivateVersionManagementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ActivateVersionManagement"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ActivateVersionManagementResponse(callApi(params, req, runtime));
  }
  else {
    return ActivateVersionManagementResponse(execute(params, req, runtime));
  }
}

ActivateVersionManagementResponse Alibabacloud_ESA20240910::Client::activateVersionManagement(shared_ptr<ActivateVersionManagementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return activateVersionManagementWithOptions(request, runtime);
}

ApplyCertificateResponse Alibabacloud_ESA20240910::Client::applyCertificateWithOptions(shared_ptr<ApplyCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyCertificate"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ApplyCertificateResponse(callApi(params, req, runtime));
  }
  else {
    return ApplyCertificateResponse(execute(params, req, runtime));
  }
}

ApplyCertificateResponse Alibabacloud_ESA20240910::Client::applyCertificate(shared_ptr<ApplyCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyCertificateWithOptions(request, runtime);
}

BatchCreateRecordsResponse Alibabacloud_ESA20240910::Client::batchCreateRecordsWithOptions(shared_ptr<BatchCreateRecordsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchCreateRecordsShrinkRequest> request = make_shared<BatchCreateRecordsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<BatchCreateRecordsRequestRecordList>>(tmpReq->recordList)) {
    request->recordListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->recordList, make_shared<string>("RecordList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->recordListShrink)) {
    query->insert(pair<string, string>("RecordList", *request->recordListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchCreateRecords"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BatchCreateRecordsResponse(callApi(params, req, runtime));
  }
  else {
    return BatchCreateRecordsResponse(execute(params, req, runtime));
  }
}

BatchCreateRecordsResponse Alibabacloud_ESA20240910::Client::batchCreateRecords(shared_ptr<BatchCreateRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchCreateRecordsWithOptions(request, runtime);
}

BatchDeleteKvResponse Alibabacloud_ESA20240910::Client::batchDeleteKvWithOptions(shared_ptr<BatchDeleteKvRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchDeleteKvShrinkRequest> request = make_shared<BatchDeleteKvShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->keys)) {
    request->keysShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->keys, make_shared<string>("Keys"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keysShrink)) {
    body->insert(pair<string, string>("Keys", *request->keysShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchDeleteKv"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BatchDeleteKvResponse(callApi(params, req, runtime));
  }
  else {
    return BatchDeleteKvResponse(execute(params, req, runtime));
  }
}

BatchDeleteKvResponse Alibabacloud_ESA20240910::Client::batchDeleteKv(shared_ptr<BatchDeleteKvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeleteKvWithOptions(request, runtime);
}

BatchDeleteKvWithHighCapacityResponse Alibabacloud_ESA20240910::Client::batchDeleteKvWithHighCapacityWithOptions(shared_ptr<BatchDeleteKvWithHighCapacityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchDeleteKvWithHighCapacity"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BatchDeleteKvWithHighCapacityResponse(callApi(params, req, runtime));
  }
  else {
    return BatchDeleteKvWithHighCapacityResponse(execute(params, req, runtime));
  }
}

BatchDeleteKvWithHighCapacityResponse Alibabacloud_ESA20240910::Client::batchDeleteKvWithHighCapacity(shared_ptr<BatchDeleteKvWithHighCapacityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeleteKvWithHighCapacityWithOptions(request, runtime);
}

BatchDeleteKvWithHighCapacityResponse Alibabacloud_ESA20240910::Client::batchDeleteKvWithHighCapacityAdvance(shared_ptr<BatchDeleteKvWithHighCapacityAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::empty(openPlatformEndpoint)) {
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
    {"product", boost::any(string("ESA"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<BatchDeleteKvWithHighCapacityRequest> batchDeleteKvWithHighCapacityReq = make_shared<BatchDeleteKvWithHighCapacityRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, batchDeleteKvWithHighCapacityReq);
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
    batchDeleteKvWithHighCapacityReq->url = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<BatchDeleteKvWithHighCapacityResponse> batchDeleteKvWithHighCapacityResp = make_shared<BatchDeleteKvWithHighCapacityResponse>(batchDeleteKvWithHighCapacityWithOptions(batchDeleteKvWithHighCapacityReq, runtime));
  return *batchDeleteKvWithHighCapacityResp;
}

BatchGetExpressionFieldsResponse Alibabacloud_ESA20240910::Client::batchGetExpressionFieldsWithOptions(shared_ptr<BatchGetExpressionFieldsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchGetExpressionFieldsShrinkRequest> request = make_shared<BatchGetExpressionFieldsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<BatchGetExpressionFieldsRequestExpressions>>(tmpReq->expressions)) {
    request->expressionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->expressions, make_shared<string>("Expressions"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->expressionsShrink)) {
    body->insert(pair<string, string>("Expressions", *request->expressionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phase)) {
    body->insert(pair<string, string>("Phase", *request->phase));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchGetExpressionFields"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BatchGetExpressionFieldsResponse(callApi(params, req, runtime));
  }
  else {
    return BatchGetExpressionFieldsResponse(execute(params, req, runtime));
  }
}

BatchGetExpressionFieldsResponse Alibabacloud_ESA20240910::Client::batchGetExpressionFields(shared_ptr<BatchGetExpressionFieldsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetExpressionFieldsWithOptions(request, runtime);
}

BatchPutKvResponse Alibabacloud_ESA20240910::Client::batchPutKvWithOptions(shared_ptr<BatchPutKvRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchPutKvShrinkRequest> request = make_shared<BatchPutKvShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<BatchPutKvRequestKvList>>(tmpReq->kvList)) {
    request->kvListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->kvList, make_shared<string>("KvList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->kvListShrink)) {
    body->insert(pair<string, string>("KvList", *request->kvListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchPutKv"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BatchPutKvResponse(callApi(params, req, runtime));
  }
  else {
    return BatchPutKvResponse(execute(params, req, runtime));
  }
}

BatchPutKvResponse Alibabacloud_ESA20240910::Client::batchPutKv(shared_ptr<BatchPutKvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchPutKvWithOptions(request, runtime);
}

BatchPutKvWithHighCapacityResponse Alibabacloud_ESA20240910::Client::batchPutKvWithHighCapacityWithOptions(shared_ptr<BatchPutKvWithHighCapacityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchPutKvWithHighCapacity"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BatchPutKvWithHighCapacityResponse(callApi(params, req, runtime));
  }
  else {
    return BatchPutKvWithHighCapacityResponse(execute(params, req, runtime));
  }
}

BatchPutKvWithHighCapacityResponse Alibabacloud_ESA20240910::Client::batchPutKvWithHighCapacity(shared_ptr<BatchPutKvWithHighCapacityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchPutKvWithHighCapacityWithOptions(request, runtime);
}

BatchPutKvWithHighCapacityResponse Alibabacloud_ESA20240910::Client::batchPutKvWithHighCapacityAdvance(shared_ptr<BatchPutKvWithHighCapacityAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::empty(openPlatformEndpoint)) {
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
    {"product", boost::any(string("ESA"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<BatchPutKvWithHighCapacityRequest> batchPutKvWithHighCapacityReq = make_shared<BatchPutKvWithHighCapacityRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, batchPutKvWithHighCapacityReq);
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
    batchPutKvWithHighCapacityReq->url = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<BatchPutKvWithHighCapacityResponse> batchPutKvWithHighCapacityResp = make_shared<BatchPutKvWithHighCapacityResponse>(batchPutKvWithHighCapacityWithOptions(batchPutKvWithHighCapacityReq, runtime));
  return *batchPutKvWithHighCapacityResp;
}

BlockObjectResponse Alibabacloud_ESA20240910::Client::blockObjectWithOptions(shared_ptr<BlockObjectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BlockObjectShrinkRequest> request = make_shared<BlockObjectShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->content)) {
    request->contentShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->content, make_shared<string>("Content"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contentShrink)) {
    query->insert(pair<string, string>("Content", *request->contentShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extension)) {
    query->insert(pair<string, string>("Extension", *request->extension));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxage)) {
    query->insert(pair<string, long>("Maxage", *request->maxage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BlockObject"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BlockObjectResponse(callApi(params, req, runtime));
  }
  else {
    return BlockObjectResponse(execute(params, req, runtime));
  }
}

BlockObjectResponse Alibabacloud_ESA20240910::Client::blockObject(shared_ptr<BlockObjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return blockObjectWithOptions(request, runtime);
}

CheckAssumeSlrRoleResponse Alibabacloud_ESA20240910::Client::checkAssumeSlrRoleWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckAssumeSlrRole"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CheckAssumeSlrRoleResponse(callApi(params, req, runtime));
  }
  else {
    return CheckAssumeSlrRoleResponse(execute(params, req, runtime));
  }
}

CheckAssumeSlrRoleResponse Alibabacloud_ESA20240910::Client::checkAssumeSlrRole() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkAssumeSlrRoleWithOptions(runtime);
}

CheckSiteNameResponse Alibabacloud_ESA20240910::Client::checkSiteNameWithOptions(shared_ptr<CheckSiteNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->siteName)) {
    query->insert(pair<string, string>("SiteName", *request->siteName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckSiteName"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CheckSiteNameResponse(callApi(params, req, runtime));
  }
  else {
    return CheckSiteNameResponse(execute(params, req, runtime));
  }
}

CheckSiteNameResponse Alibabacloud_ESA20240910::Client::checkSiteName(shared_ptr<CheckSiteNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkSiteNameWithOptions(request, runtime);
}

CheckSiteProjectNameResponse Alibabacloud_ESA20240910::Client::checkSiteProjectNameWithOptions(shared_ptr<CheckSiteProjectNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckSiteProjectName"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CheckSiteProjectNameResponse(callApi(params, req, runtime));
  }
  else {
    return CheckSiteProjectNameResponse(execute(params, req, runtime));
  }
}

CheckSiteProjectNameResponse Alibabacloud_ESA20240910::Client::checkSiteProjectName(shared_ptr<CheckSiteProjectNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkSiteProjectNameWithOptions(request, runtime);
}

CheckUserProjectNameResponse Alibabacloud_ESA20240910::Client::checkUserProjectNameWithOptions(shared_ptr<CheckUserProjectNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckUserProjectName"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CheckUserProjectNameResponse(callApi(params, req, runtime));
  }
  else {
    return CheckUserProjectNameResponse(execute(params, req, runtime));
  }
}

CheckUserProjectNameResponse Alibabacloud_ESA20240910::Client::checkUserProjectName(shared_ptr<CheckUserProjectNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkUserProjectNameWithOptions(request, runtime);
}

CommitRoutineStagingCodeResponse Alibabacloud_ESA20240910::Client::commitRoutineStagingCodeWithOptions(shared_ptr<CommitRoutineStagingCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->codeDescription)) {
    body->insert(pair<string, string>("CodeDescription", *request->codeDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CommitRoutineStagingCode"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CommitRoutineStagingCodeResponse(callApi(params, req, runtime));
  }
  else {
    return CommitRoutineStagingCodeResponse(execute(params, req, runtime));
  }
}

CommitRoutineStagingCodeResponse Alibabacloud_ESA20240910::Client::commitRoutineStagingCode(shared_ptr<CommitRoutineStagingCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return commitRoutineStagingCodeWithOptions(request, runtime);
}

CreateCacheRuleResponse Alibabacloud_ESA20240910::Client::createCacheRuleWithOptions(shared_ptr<CreateCacheRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->additionalCacheablePorts)) {
    query->insert(pair<string, string>("AdditionalCacheablePorts", *request->additionalCacheablePorts));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->browserCacheMode)) {
    query->insert(pair<string, string>("BrowserCacheMode", *request->browserCacheMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->browserCacheTtl)) {
    query->insert(pair<string, string>("BrowserCacheTtl", *request->browserCacheTtl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bypassCache)) {
    query->insert(pair<string, string>("BypassCache", *request->bypassCache));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cacheDeceptionArmor)) {
    query->insert(pair<string, string>("CacheDeceptionArmor", *request->cacheDeceptionArmor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cacheReserveEligibility)) {
    query->insert(pair<string, string>("CacheReserveEligibility", *request->cacheReserveEligibility));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkPresenceCookie)) {
    query->insert(pair<string, string>("CheckPresenceCookie", *request->checkPresenceCookie));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkPresenceHeader)) {
    query->insert(pair<string, string>("CheckPresenceHeader", *request->checkPresenceHeader));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edgeCacheMode)) {
    query->insert(pair<string, string>("EdgeCacheMode", *request->edgeCacheMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edgeCacheTtl)) {
    query->insert(pair<string, string>("EdgeCacheTtl", *request->edgeCacheTtl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edgeStatusCodeCacheTtl)) {
    query->insert(pair<string, string>("EdgeStatusCodeCacheTtl", *request->edgeStatusCodeCacheTtl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->includeCookie)) {
    query->insert(pair<string, string>("IncludeCookie", *request->includeCookie));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->includeHeader)) {
    query->insert(pair<string, string>("IncludeHeader", *request->includeHeader));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryString)) {
    query->insert(pair<string, string>("QueryString", *request->queryString));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryStringMode)) {
    query->insert(pair<string, string>("QueryStringMode", *request->queryStringMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serveStale)) {
    query->insert(pair<string, string>("ServeStale", *request->serveStale));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteVersion)) {
    query->insert(pair<string, long>("SiteVersion", *request->siteVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortQueryStringForCache)) {
    query->insert(pair<string, string>("SortQueryStringForCache", *request->sortQueryStringForCache));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userDeviceType)) {
    query->insert(pair<string, string>("UserDeviceType", *request->userDeviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGeo)) {
    query->insert(pair<string, string>("UserGeo", *request->userGeo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userLanguage)) {
    query->insert(pair<string, string>("UserLanguage", *request->userLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCacheRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateCacheRuleResponse(callApi(params, req, runtime));
  }
  else {
    return CreateCacheRuleResponse(execute(params, req, runtime));
  }
}

CreateCacheRuleResponse Alibabacloud_ESA20240910::Client::createCacheRule(shared_ptr<CreateCacheRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCacheRuleWithOptions(request, runtime);
}

CreateClientCertificateResponse Alibabacloud_ESA20240910::Client::createClientCertificateWithOptions(shared_ptr<CreateClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->CSR)) {
    body->insert(pair<string, string>("CSR", *request->CSR));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pkeyType)) {
    body->insert(pair<string, string>("PkeyType", *request->pkeyType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->validityDays)) {
    body->insert(pair<string, long>("ValidityDays", *request->validityDays));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateClientCertificate"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateClientCertificateResponse(callApi(params, req, runtime));
  }
  else {
    return CreateClientCertificateResponse(execute(params, req, runtime));
  }
}

CreateClientCertificateResponse Alibabacloud_ESA20240910::Client::createClientCertificate(shared_ptr<CreateClientCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createClientCertificateWithOptions(request, runtime);
}

CreateCompressionRuleResponse Alibabacloud_ESA20240910::Client::createCompressionRuleWithOptions(shared_ptr<CreateCompressionRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->brotli)) {
    query->insert(pair<string, string>("Brotli", *request->brotli));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gzip)) {
    query->insert(pair<string, string>("Gzip", *request->gzip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteVersion)) {
    query->insert(pair<string, long>("SiteVersion", *request->siteVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zstd)) {
    query->insert(pair<string, string>("Zstd", *request->zstd));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCompressionRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateCompressionRuleResponse(callApi(params, req, runtime));
  }
  else {
    return CreateCompressionRuleResponse(execute(params, req, runtime));
  }
}

CreateCompressionRuleResponse Alibabacloud_ESA20240910::Client::createCompressionRule(shared_ptr<CreateCompressionRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCompressionRuleWithOptions(request, runtime);
}

CreateCustomScenePolicyResponse Alibabacloud_ESA20240910::Client::createCustomScenePolicyWithOptions(shared_ptr<CreateCustomScenePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objects)) {
    query->insert(pair<string, string>("Objects", *request->objects));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->template_)) {
    query->insert(pair<string, string>("Template_", *request->template_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCustomScenePolicy"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateCustomScenePolicyResponse(callApi(params, req, runtime));
  }
  else {
    return CreateCustomScenePolicyResponse(execute(params, req, runtime));
  }
}

CreateCustomScenePolicyResponse Alibabacloud_ESA20240910::Client::createCustomScenePolicy(shared_ptr<CreateCustomScenePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomScenePolicyWithOptions(request, runtime);
}

CreateEdgeContainerAppResponse Alibabacloud_ESA20240910::Client::createEdgeContainerAppWithOptions(shared_ptr<CreateEdgeContainerAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckFailTimes)) {
    body->insert(pair<string, long>("HealthCheckFailTimes", *request->healthCheckFailTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckHost)) {
    body->insert(pair<string, string>("HealthCheckHost", *request->healthCheckHost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckHttpCode)) {
    body->insert(pair<string, string>("HealthCheckHttpCode", *request->healthCheckHttpCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckInterval)) {
    body->insert(pair<string, long>("HealthCheckInterval", *request->healthCheckInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckMethod)) {
    body->insert(pair<string, string>("HealthCheckMethod", *request->healthCheckMethod));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckPort)) {
    body->insert(pair<string, long>("HealthCheckPort", *request->healthCheckPort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckSuccTimes)) {
    body->insert(pair<string, long>("HealthCheckSuccTimes", *request->healthCheckSuccTimes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->healthCheckTimeout)) {
    body->insert(pair<string, long>("HealthCheckTimeout", *request->healthCheckTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckType)) {
    body->insert(pair<string, string>("HealthCheckType", *request->healthCheckType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->healthCheckURI)) {
    body->insert(pair<string, string>("HealthCheckURI", *request->healthCheckURI));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarks)) {
    body->insert(pair<string, string>("Remarks", *request->remarks));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->servicePort)) {
    body->insert(pair<string, long>("ServicePort", *request->servicePort));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->targetPort)) {
    body->insert(pair<string, long>("TargetPort", *request->targetPort));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEdgeContainerApp"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateEdgeContainerAppResponse(callApi(params, req, runtime));
  }
  else {
    return CreateEdgeContainerAppResponse(execute(params, req, runtime));
  }
}

CreateEdgeContainerAppResponse Alibabacloud_ESA20240910::Client::createEdgeContainerApp(shared_ptr<CreateEdgeContainerAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeContainerAppWithOptions(request, runtime);
}

CreateEdgeContainerAppRecordResponse Alibabacloud_ESA20240910::Client::createEdgeContainerAppRecordWithOptions(shared_ptr<CreateEdgeContainerAppRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordName)) {
    body->insert(pair<string, string>("RecordName", *request->recordName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    body->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEdgeContainerAppRecord"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateEdgeContainerAppRecordResponse(callApi(params, req, runtime));
  }
  else {
    return CreateEdgeContainerAppRecordResponse(execute(params, req, runtime));
  }
}

CreateEdgeContainerAppRecordResponse Alibabacloud_ESA20240910::Client::createEdgeContainerAppRecord(shared_ptr<CreateEdgeContainerAppRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeContainerAppRecordWithOptions(request, runtime);
}

CreateEdgeContainerAppVersionResponse Alibabacloud_ESA20240910::Client::createEdgeContainerAppVersionWithOptions(shared_ptr<CreateEdgeContainerAppVersionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateEdgeContainerAppVersionShrinkRequest> request = make_shared<CreateEdgeContainerAppVersionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateEdgeContainerAppVersionRequestContainers>>(tmpReq->containers)) {
    request->containersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->containers, make_shared<string>("Containers"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->containersShrink)) {
    body->insert(pair<string, string>("Containers", *request->containersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarks)) {
    body->insert(pair<string, string>("Remarks", *request->remarks));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEdgeContainerAppVersion"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateEdgeContainerAppVersionResponse(callApi(params, req, runtime));
  }
  else {
    return CreateEdgeContainerAppVersionResponse(execute(params, req, runtime));
  }
}

CreateEdgeContainerAppVersionResponse Alibabacloud_ESA20240910::Client::createEdgeContainerAppVersion(shared_ptr<CreateEdgeContainerAppVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEdgeContainerAppVersionWithOptions(request, runtime);
}

CreateHttpRequestHeaderModificationRuleResponse Alibabacloud_ESA20240910::Client::createHttpRequestHeaderModificationRuleWithOptions(shared_ptr<CreateHttpRequestHeaderModificationRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateHttpRequestHeaderModificationRuleShrinkRequest> request = make_shared<CreateHttpRequestHeaderModificationRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateHttpRequestHeaderModificationRuleRequestRequestHeaderModification>>(tmpReq->requestHeaderModification)) {
    request->requestHeaderModificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->requestHeaderModification, make_shared<string>("RequestHeaderModification"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->requestHeaderModificationShrink)) {
    query->insert(pair<string, string>("RequestHeaderModification", *request->requestHeaderModificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteVersion)) {
    query->insert(pair<string, long>("SiteVersion", *request->siteVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateHttpRequestHeaderModificationRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateHttpRequestHeaderModificationRuleResponse(callApi(params, req, runtime));
  }
  else {
    return CreateHttpRequestHeaderModificationRuleResponse(execute(params, req, runtime));
  }
}

CreateHttpRequestHeaderModificationRuleResponse Alibabacloud_ESA20240910::Client::createHttpRequestHeaderModificationRule(shared_ptr<CreateHttpRequestHeaderModificationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHttpRequestHeaderModificationRuleWithOptions(request, runtime);
}

CreateHttpResponseHeaderModificationRuleResponse Alibabacloud_ESA20240910::Client::createHttpResponseHeaderModificationRuleWithOptions(shared_ptr<CreateHttpResponseHeaderModificationRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateHttpResponseHeaderModificationRuleShrinkRequest> request = make_shared<CreateHttpResponseHeaderModificationRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateHttpResponseHeaderModificationRuleRequestResponseHeaderModification>>(tmpReq->responseHeaderModification)) {
    request->responseHeaderModificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->responseHeaderModification, make_shared<string>("ResponseHeaderModification"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->responseHeaderModificationShrink)) {
    query->insert(pair<string, string>("ResponseHeaderModification", *request->responseHeaderModificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteVersion)) {
    query->insert(pair<string, long>("SiteVersion", *request->siteVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateHttpResponseHeaderModificationRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateHttpResponseHeaderModificationRuleResponse(callApi(params, req, runtime));
  }
  else {
    return CreateHttpResponseHeaderModificationRuleResponse(execute(params, req, runtime));
  }
}

CreateHttpResponseHeaderModificationRuleResponse Alibabacloud_ESA20240910::Client::createHttpResponseHeaderModificationRule(shared_ptr<CreateHttpResponseHeaderModificationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHttpResponseHeaderModificationRuleWithOptions(request, runtime);
}

CreateHttpsApplicationConfigurationResponse Alibabacloud_ESA20240910::Client::createHttpsApplicationConfigurationWithOptions(shared_ptr<CreateHttpsApplicationConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->altSvc)) {
    query->insert(pair<string, string>("AltSvc", *request->altSvc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->altSvcClear)) {
    query->insert(pair<string, string>("AltSvcClear", *request->altSvcClear));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->altSvcMa)) {
    query->insert(pair<string, string>("AltSvcMa", *request->altSvcMa));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->altSvcPersist)) {
    query->insert(pair<string, string>("AltSvcPersist", *request->altSvcPersist));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hsts)) {
    query->insert(pair<string, string>("Hsts", *request->hsts));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hstsIncludeSubdomains)) {
    query->insert(pair<string, string>("HstsIncludeSubdomains", *request->hstsIncludeSubdomains));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hstsMaxAge)) {
    query->insert(pair<string, string>("HstsMaxAge", *request->hstsMaxAge));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hstsPreload)) {
    query->insert(pair<string, string>("HstsPreload", *request->hstsPreload));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpsForce)) {
    query->insert(pair<string, string>("HttpsForce", *request->httpsForce));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpsForceCode)) {
    query->insert(pair<string, string>("HttpsForceCode", *request->httpsForceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteVersion)) {
    query->insert(pair<string, long>("SiteVersion", *request->siteVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateHttpsApplicationConfiguration"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateHttpsApplicationConfigurationResponse(callApi(params, req, runtime));
  }
  else {
    return CreateHttpsApplicationConfigurationResponse(execute(params, req, runtime));
  }
}

CreateHttpsApplicationConfigurationResponse Alibabacloud_ESA20240910::Client::createHttpsApplicationConfiguration(shared_ptr<CreateHttpsApplicationConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHttpsApplicationConfigurationWithOptions(request, runtime);
}

CreateHttpsBasicConfigurationResponse Alibabacloud_ESA20240910::Client::createHttpsBasicConfigurationWithOptions(shared_ptr<CreateHttpsBasicConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ciphersuite)) {
    query->insert(pair<string, string>("Ciphersuite", *request->ciphersuite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ciphersuiteGroup)) {
    query->insert(pair<string, string>("CiphersuiteGroup", *request->ciphersuiteGroup));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->http2)) {
    query->insert(pair<string, string>("Http2", *request->http2));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->http3)) {
    query->insert(pair<string, string>("Http3", *request->http3));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->https)) {
    query->insert(pair<string, string>("Https", *request->https));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ocspStapling)) {
    query->insert(pair<string, string>("OcspStapling", *request->ocspStapling));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tls10)) {
    query->insert(pair<string, string>("Tls10", *request->tls10));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tls11)) {
    query->insert(pair<string, string>("Tls11", *request->tls11));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tls12)) {
    query->insert(pair<string, string>("Tls12", *request->tls12));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tls13)) {
    query->insert(pair<string, string>("Tls13", *request->tls13));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateHttpsBasicConfiguration"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateHttpsBasicConfigurationResponse(callApi(params, req, runtime));
  }
  else {
    return CreateHttpsBasicConfigurationResponse(execute(params, req, runtime));
  }
}

CreateHttpsBasicConfigurationResponse Alibabacloud_ESA20240910::Client::createHttpsBasicConfiguration(shared_ptr<CreateHttpsBasicConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createHttpsBasicConfigurationWithOptions(request, runtime);
}

CreateImageTransformResponse Alibabacloud_ESA20240910::Client::createImageTransformWithOptions(shared_ptr<CreateImageTransformRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->enable)) {
    query->insert(pair<string, string>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteVersion)) {
    query->insert(pair<string, long>("SiteVersion", *request->siteVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateImageTransform"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateImageTransformResponse(callApi(params, req, runtime));
  }
  else {
    return CreateImageTransformResponse(execute(params, req, runtime));
  }
}

CreateImageTransformResponse Alibabacloud_ESA20240910::Client::createImageTransform(shared_ptr<CreateImageTransformRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createImageTransformWithOptions(request, runtime);
}

CreateKvNamespaceResponse Alibabacloud_ESA20240910::Client::createKvNamespaceWithOptions(shared_ptr<CreateKvNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    body->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateKvNamespace"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateKvNamespaceResponse(callApi(params, req, runtime));
  }
  else {
    return CreateKvNamespaceResponse(execute(params, req, runtime));
  }
}

CreateKvNamespaceResponse Alibabacloud_ESA20240910::Client::createKvNamespace(shared_ptr<CreateKvNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createKvNamespaceWithOptions(request, runtime);
}

CreateListResponse Alibabacloud_ESA20240910::Client::createListWithOptions(shared_ptr<CreateListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateListShrinkRequest> request = make_shared<CreateListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->items)) {
    request->itemsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->items, make_shared<string>("Items"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemsShrink)) {
    body->insert(pair<string, string>("Items", *request->itemsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kind)) {
    body->insert(pair<string, string>("Kind", *request->kind));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateList"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateListResponse(callApi(params, req, runtime));
  }
  else {
    return CreateListResponse(execute(params, req, runtime));
  }
}

CreateListResponse Alibabacloud_ESA20240910::Client::createList(shared_ptr<CreateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createListWithOptions(request, runtime);
}

CreateLoadBalancerResponse Alibabacloud_ESA20240910::Client::createLoadBalancerWithOptions(shared_ptr<CreateLoadBalancerRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateLoadBalancerShrinkRequest> request = make_shared<CreateLoadBalancerShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateLoadBalancerRequestAdaptiveRouting>(tmpReq->adaptiveRouting)) {
    request->adaptiveRoutingShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->adaptiveRouting, make_shared<string>("AdaptiveRouting"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->defaultPools)) {
    request->defaultPoolsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->defaultPools, make_shared<string>("DefaultPools"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateLoadBalancerRequestMonitor>(tmpReq->monitor)) {
    request->monitorShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->monitor, make_shared<string>("Monitor"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateLoadBalancerRequestRandomSteering>(tmpReq->randomSteering)) {
    request->randomSteeringShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->randomSteering, make_shared<string>("RandomSteering"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateLoadBalancerRequestRules>>(tmpReq->rules)) {
    request->rulesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->rules, make_shared<string>("Rules"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adaptiveRoutingShrink)) {
    query->insert(pair<string, string>("AdaptiveRouting", *request->adaptiveRoutingShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultPoolsShrink)) {
    query->insert(pair<string, string>("DefaultPools", *request->defaultPoolsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    query->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fallbackPool)) {
    query->insert(pair<string, long>("FallbackPool", *request->fallbackPool));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorShrink)) {
    query->insert(pair<string, string>("Monitor", *request->monitorShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->randomSteeringShrink)) {
    query->insert(pair<string, string>("RandomSteering", *request->randomSteeringShrink));
  }
  if (!Darabonba_Util::Client::isUnset<boost::any>(request->regionPools)) {
    query->insert(pair<string, boost::any>("RegionPools", *request->regionPools));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rulesShrink)) {
    query->insert(pair<string, string>("Rules", *request->rulesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionAffinity)) {
    query->insert(pair<string, string>("SessionAffinity", *request->sessionAffinity));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->steeringPolicy)) {
    query->insert(pair<string, string>("SteeringPolicy", *request->steeringPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<boost::any>(request->subRegionPools)) {
    query->insert(pair<string, boost::any>("SubRegionPools", *request->subRegionPools));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ttl)) {
    query->insert(pair<string, long>("Ttl", *request->ttl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLoadBalancer"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateLoadBalancerResponse(callApi(params, req, runtime));
  }
  else {
    return CreateLoadBalancerResponse(execute(params, req, runtime));
  }
}

CreateLoadBalancerResponse Alibabacloud_ESA20240910::Client::createLoadBalancer(shared_ptr<CreateLoadBalancerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLoadBalancerWithOptions(request, runtime);
}

CreateNetworkOptimizationResponse Alibabacloud_ESA20240910::Client::createNetworkOptimizationWithOptions(shared_ptr<CreateNetworkOptimizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->grpc)) {
    query->insert(pair<string, string>("Grpc", *request->grpc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->http2Origin)) {
    query->insert(pair<string, string>("Http2Origin", *request->http2Origin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteVersion)) {
    query->insert(pair<string, long>("SiteVersion", *request->siteVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smartRouting)) {
    query->insert(pair<string, string>("SmartRouting", *request->smartRouting));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadMaxFilesize)) {
    query->insert(pair<string, string>("UploadMaxFilesize", *request->uploadMaxFilesize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->websocket)) {
    query->insert(pair<string, string>("Websocket", *request->websocket));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateNetworkOptimization"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateNetworkOptimizationResponse(callApi(params, req, runtime));
  }
  else {
    return CreateNetworkOptimizationResponse(execute(params, req, runtime));
  }
}

CreateNetworkOptimizationResponse Alibabacloud_ESA20240910::Client::createNetworkOptimization(shared_ptr<CreateNetworkOptimizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createNetworkOptimizationWithOptions(request, runtime);
}

CreateOriginPoolResponse Alibabacloud_ESA20240910::Client::createOriginPoolWithOptions(shared_ptr<CreateOriginPoolRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateOriginPoolShrinkRequest> request = make_shared<CreateOriginPoolShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateOriginPoolRequestOrigins>>(tmpReq->origins)) {
    request->originsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->origins, make_shared<string>("Origins"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    query->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originsShrink)) {
    query->insert(pair<string, string>("Origins", *request->originsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOriginPool"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateOriginPoolResponse(callApi(params, req, runtime));
  }
  else {
    return CreateOriginPoolResponse(execute(params, req, runtime));
  }
}

CreateOriginPoolResponse Alibabacloud_ESA20240910::Client::createOriginPool(shared_ptr<CreateOriginPoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOriginPoolWithOptions(request, runtime);
}

CreateOriginProtectionResponse Alibabacloud_ESA20240910::Client::createOriginProtectionWithOptions(shared_ptr<CreateOriginProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOriginProtection"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateOriginProtectionResponse(callApi(params, req, runtime));
  }
  else {
    return CreateOriginProtectionResponse(execute(params, req, runtime));
  }
}

CreateOriginProtectionResponse Alibabacloud_ESA20240910::Client::createOriginProtection(shared_ptr<CreateOriginProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOriginProtectionWithOptions(request, runtime);
}

CreateOriginRuleResponse Alibabacloud_ESA20240910::Client::createOriginRuleWithOptions(shared_ptr<CreateOriginRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dnsRecord)) {
    query->insert(pair<string, string>("DnsRecord", *request->dnsRecord));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originHost)) {
    query->insert(pair<string, string>("OriginHost", *request->originHost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originHttpPort)) {
    query->insert(pair<string, string>("OriginHttpPort", *request->originHttpPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originHttpsPort)) {
    query->insert(pair<string, string>("OriginHttpsPort", *request->originHttpsPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originScheme)) {
    query->insert(pair<string, string>("OriginScheme", *request->originScheme));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originSni)) {
    query->insert(pair<string, string>("OriginSni", *request->originSni));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->range)) {
    query->insert(pair<string, string>("Range", *request->range));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteVersion)) {
    query->insert(pair<string, long>("SiteVersion", *request->siteVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateOriginRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateOriginRuleResponse(callApi(params, req, runtime));
  }
  else {
    return CreateOriginRuleResponse(execute(params, req, runtime));
  }
}

CreateOriginRuleResponse Alibabacloud_ESA20240910::Client::createOriginRule(shared_ptr<CreateOriginRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createOriginRuleWithOptions(request, runtime);
}

CreatePageResponse Alibabacloud_ESA20240910::Client::createPageWithOptions(shared_ptr<CreatePageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentType)) {
    body->insert(pair<string, string>("ContentType", *request->contentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePage"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreatePageResponse(callApi(params, req, runtime));
  }
  else {
    return CreatePageResponse(execute(params, req, runtime));
  }
}

CreatePageResponse Alibabacloud_ESA20240910::Client::createPage(shared_ptr<CreatePageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPageWithOptions(request, runtime);
}

CreateRecordResponse Alibabacloud_ESA20240910::Client::createRecordWithOptions(shared_ptr<CreateRecordRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateRecordShrinkRequest> request = make_shared<CreateRecordShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateRecordRequestAuthConf>(tmpReq->authConf)) {
    request->authConfShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->authConf, make_shared<string>("AuthConf"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateRecordRequestData>(tmpReq->data)) {
    request->dataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->data, make_shared<string>("Data"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authConfShrink)) {
    query->insert(pair<string, string>("AuthConf", *request->authConfShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizName)) {
    query->insert(pair<string, string>("BizName", *request->bizName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataShrink)) {
    query->insert(pair<string, string>("Data", *request->dataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostPolicy)) {
    query->insert(pair<string, string>("HostPolicy", *request->hostPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->proxied)) {
    query->insert(pair<string, bool>("Proxied", *request->proxied));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordName)) {
    query->insert(pair<string, string>("RecordName", *request->recordName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ttl)) {
    query->insert(pair<string, long>("Ttl", *request->ttl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRecord"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateRecordResponse(callApi(params, req, runtime));
  }
  else {
    return CreateRecordResponse(execute(params, req, runtime));
  }
}

CreateRecordResponse Alibabacloud_ESA20240910::Client::createRecord(shared_ptr<CreateRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRecordWithOptions(request, runtime);
}

CreateRedirectRuleResponse Alibabacloud_ESA20240910::Client::createRedirectRuleWithOptions(shared_ptr<CreateRedirectRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->reserveQueryString)) {
    query->insert(pair<string, string>("ReserveQueryString", *request->reserveQueryString));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteVersion)) {
    query->insert(pair<string, long>("SiteVersion", *request->siteVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusCode)) {
    query->insert(pair<string, string>("StatusCode", *request->statusCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUrl)) {
    query->insert(pair<string, string>("TargetUrl", *request->targetUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRedirectRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateRedirectRuleResponse(callApi(params, req, runtime));
  }
  else {
    return CreateRedirectRuleResponse(execute(params, req, runtime));
  }
}

CreateRedirectRuleResponse Alibabacloud_ESA20240910::Client::createRedirectRule(shared_ptr<CreateRedirectRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRedirectRuleWithOptions(request, runtime);
}

CreateRewriteUrlRuleResponse Alibabacloud_ESA20240910::Client::createRewriteUrlRuleWithOptions(shared_ptr<CreateRewriteUrlRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->queryString)) {
    query->insert(pair<string, string>("QueryString", *request->queryString));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rewriteQueryStringType)) {
    query->insert(pair<string, string>("RewriteQueryStringType", *request->rewriteQueryStringType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rewriteUriType)) {
    query->insert(pair<string, string>("RewriteUriType", *request->rewriteUriType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteVersion)) {
    query->insert(pair<string, long>("SiteVersion", *request->siteVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uri)) {
    query->insert(pair<string, string>("Uri", *request->uri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRewriteUrlRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateRewriteUrlRuleResponse(callApi(params, req, runtime));
  }
  else {
    return CreateRewriteUrlRuleResponse(execute(params, req, runtime));
  }
}

CreateRewriteUrlRuleResponse Alibabacloud_ESA20240910::Client::createRewriteUrlRule(shared_ptr<CreateRewriteUrlRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRewriteUrlRuleWithOptions(request, runtime);
}

CreateRoutineResponse Alibabacloud_ESA20240910::Client::createRoutineWithOptions(shared_ptr<CreateRoutineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->specName)) {
    body->insert(pair<string, string>("SpecName", *request->specName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRoutine"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateRoutineResponse(callApi(params, req, runtime));
  }
  else {
    return CreateRoutineResponse(execute(params, req, runtime));
  }
}

CreateRoutineResponse Alibabacloud_ESA20240910::Client::createRoutine(shared_ptr<CreateRoutineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRoutineWithOptions(request, runtime);
}

CreateRoutineRelatedRecordResponse Alibabacloud_ESA20240910::Client::createRoutineRelatedRecordWithOptions(shared_ptr<CreateRoutineRelatedRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordName)) {
    body->insert(pair<string, string>("RecordName", *request->recordName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    body->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRoutineRelatedRecord"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateRoutineRelatedRecordResponse(callApi(params, req, runtime));
  }
  else {
    return CreateRoutineRelatedRecordResponse(execute(params, req, runtime));
  }
}

CreateRoutineRelatedRecordResponse Alibabacloud_ESA20240910::Client::createRoutineRelatedRecord(shared_ptr<CreateRoutineRelatedRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRoutineRelatedRecordWithOptions(request, runtime);
}

CreateRoutineRelatedRouteResponse Alibabacloud_ESA20240910::Client::createRoutineRelatedRouteWithOptions(shared_ptr<CreateRoutineRelatedRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->byPass)) {
    body->insert(pair<string, string>("ByPass", *request->byPass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->route)) {
    body->insert(pair<string, string>("Route", *request->route));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    body->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRoutineRelatedRoute"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateRoutineRelatedRouteResponse(callApi(params, req, runtime));
  }
  else {
    return CreateRoutineRelatedRouteResponse(execute(params, req, runtime));
  }
}

CreateRoutineRelatedRouteResponse Alibabacloud_ESA20240910::Client::createRoutineRelatedRoute(shared_ptr<CreateRoutineRelatedRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRoutineRelatedRouteWithOptions(request, runtime);
}

CreateScheduledPreloadExecutionsResponse Alibabacloud_ESA20240910::Client::createScheduledPreloadExecutionsWithOptions(shared_ptr<CreateScheduledPreloadExecutionsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateScheduledPreloadExecutionsShrinkRequest> request = make_shared<CreateScheduledPreloadExecutionsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateScheduledPreloadExecutionsRequestExecutions>>(tmpReq->executions)) {
    request->executionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->executions, make_shared<string>("Executions"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->executionsShrink)) {
    body->insert(pair<string, string>("Executions", *request->executionsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScheduledPreloadExecutions"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateScheduledPreloadExecutionsResponse(callApi(params, req, runtime));
  }
  else {
    return CreateScheduledPreloadExecutionsResponse(execute(params, req, runtime));
  }
}

CreateScheduledPreloadExecutionsResponse Alibabacloud_ESA20240910::Client::createScheduledPreloadExecutions(shared_ptr<CreateScheduledPreloadExecutionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScheduledPreloadExecutionsWithOptions(request, runtime);
}

CreateScheduledPreloadJobResponse Alibabacloud_ESA20240910::Client::createScheduledPreloadJobWithOptions(shared_ptr<CreateScheduledPreloadJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->insertWay)) {
    body->insert(pair<string, string>("InsertWay", *request->insertWay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossUrl)) {
    body->insert(pair<string, string>("OssUrl", *request->ossUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    body->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->urlList)) {
    body->insert(pair<string, string>("UrlList", *request->urlList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScheduledPreloadJob"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateScheduledPreloadJobResponse(callApi(params, req, runtime));
  }
  else {
    return CreateScheduledPreloadJobResponse(execute(params, req, runtime));
  }
}

CreateScheduledPreloadJobResponse Alibabacloud_ESA20240910::Client::createScheduledPreloadJob(shared_ptr<CreateScheduledPreloadJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createScheduledPreloadJobWithOptions(request, runtime);
}

CreateSiteResponse Alibabacloud_ESA20240910::Client::createSiteWithOptions(shared_ptr<CreateSiteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessType)) {
    query->insert(pair<string, string>("AccessType", *request->accessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverage)) {
    query->insert(pair<string, string>("Coverage", *request->coverage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->siteName)) {
    query->insert(pair<string, string>("SiteName", *request->siteName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSite"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSiteResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSiteResponse(execute(params, req, runtime));
  }
}

CreateSiteResponse Alibabacloud_ESA20240910::Client::createSite(shared_ptr<CreateSiteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSiteWithOptions(request, runtime);
}

CreateSiteCustomLogResponse Alibabacloud_ESA20240910::Client::createSiteCustomLogWithOptions(shared_ptr<CreateSiteCustomLogRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSiteCustomLogShrinkRequest> request = make_shared<CreateSiteCustomLogShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->cookies)) {
    request->cookiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->cookies, make_shared<string>("Cookies"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->requestHeaders)) {
    request->requestHeadersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->requestHeaders, make_shared<string>("RequestHeaders"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->responseHeaders)) {
    request->responseHeadersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->responseHeaders, make_shared<string>("ResponseHeaders"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cookiesShrink)) {
    body->insert(pair<string, string>("Cookies", *request->cookiesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestHeadersShrink)) {
    body->insert(pair<string, string>("RequestHeaders", *request->requestHeadersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseHeadersShrink)) {
    body->insert(pair<string, string>("ResponseHeaders", *request->responseHeadersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    body->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSiteCustomLog"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSiteCustomLogResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSiteCustomLogResponse(execute(params, req, runtime));
  }
}

CreateSiteCustomLogResponse Alibabacloud_ESA20240910::Client::createSiteCustomLog(shared_ptr<CreateSiteCustomLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSiteCustomLogWithOptions(request, runtime);
}

CreateSiteDeliveryTaskResponse Alibabacloud_ESA20240910::Client::createSiteDeliveryTaskWithOptions(shared_ptr<CreateSiteDeliveryTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateSiteDeliveryTaskShrinkRequest> request = make_shared<CreateSiteDeliveryTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateSiteDeliveryTaskRequestHttpDelivery>(tmpReq->httpDelivery)) {
    request->httpDeliveryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->httpDelivery, make_shared<string>("HttpDelivery"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSiteDeliveryTaskRequestKafkaDelivery>(tmpReq->kafkaDelivery)) {
    request->kafkaDeliveryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->kafkaDelivery, make_shared<string>("KafkaDelivery"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSiteDeliveryTaskRequestOssDelivery>(tmpReq->ossDelivery)) {
    request->ossDeliveryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ossDelivery, make_shared<string>("OssDelivery"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSiteDeliveryTaskRequestS3Delivery>(tmpReq->s3Delivery)) {
    request->s3DeliveryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->s3Delivery, make_shared<string>("S3Delivery"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSiteDeliveryTaskRequestSlsDelivery>(tmpReq->slsDelivery)) {
    request->slsDeliveryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->slsDelivery, make_shared<string>("SlsDelivery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    body->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataCenter)) {
    body->insert(pair<string, string>("DataCenter", *request->dataCenter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryType)) {
    body->insert(pair<string, string>("DeliveryType", *request->deliveryType));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->discardRate)) {
    body->insert(pair<string, double>("DiscardRate", *request->discardRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldName)) {
    body->insert(pair<string, string>("FieldName", *request->fieldName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpDeliveryShrink)) {
    body->insert(pair<string, string>("HttpDelivery", *request->httpDeliveryShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kafkaDeliveryShrink)) {
    body->insert(pair<string, string>("KafkaDelivery", *request->kafkaDeliveryShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossDeliveryShrink)) {
    body->insert(pair<string, string>("OssDelivery", *request->ossDeliveryShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->s3DeliveryShrink)) {
    body->insert(pair<string, string>("S3Delivery", *request->s3DeliveryShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    body->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsDeliveryShrink)) {
    body->insert(pair<string, string>("SlsDelivery", *request->slsDeliveryShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    body->insert(pair<string, string>("TaskName", *request->taskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSiteDeliveryTask"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSiteDeliveryTaskResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSiteDeliveryTaskResponse(execute(params, req, runtime));
  }
}

CreateSiteDeliveryTaskResponse Alibabacloud_ESA20240910::Client::createSiteDeliveryTask(shared_ptr<CreateSiteDeliveryTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSiteDeliveryTaskWithOptions(request, runtime);
}

CreateSlrRoleForRealtimeLogResponse Alibabacloud_ESA20240910::Client::createSlrRoleForRealtimeLogWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSlrRoleForRealtimeLog"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSlrRoleForRealtimeLogResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSlrRoleForRealtimeLogResponse(execute(params, req, runtime));
  }
}

CreateSlrRoleForRealtimeLogResponse Alibabacloud_ESA20240910::Client::createSlrRoleForRealtimeLog() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSlrRoleForRealtimeLogWithOptions(runtime);
}

CreateUserDeliveryTaskResponse Alibabacloud_ESA20240910::Client::createUserDeliveryTaskWithOptions(shared_ptr<CreateUserDeliveryTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateUserDeliveryTaskShrinkRequest> request = make_shared<CreateUserDeliveryTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateUserDeliveryTaskRequestHttpDelivery>(tmpReq->httpDelivery)) {
    request->httpDeliveryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->httpDelivery, make_shared<string>("HttpDelivery"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateUserDeliveryTaskRequestKafkaDelivery>(tmpReq->kafkaDelivery)) {
    request->kafkaDeliveryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->kafkaDelivery, make_shared<string>("KafkaDelivery"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateUserDeliveryTaskRequestOssDelivery>(tmpReq->ossDelivery)) {
    request->ossDeliveryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ossDelivery, make_shared<string>("OssDelivery"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateUserDeliveryTaskRequestS3Delivery>(tmpReq->s3Delivery)) {
    request->s3DeliveryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->s3Delivery, make_shared<string>("S3Delivery"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateUserDeliveryTaskRequestSlsDelivery>(tmpReq->slsDelivery)) {
    request->slsDeliveryShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->slsDelivery, make_shared<string>("SlsDelivery"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    body->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataCenter)) {
    body->insert(pair<string, string>("DataCenter", *request->dataCenter));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deliveryType)) {
    body->insert(pair<string, string>("DeliveryType", *request->deliveryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->details)) {
    body->insert(pair<string, string>("Details", *request->details));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->discardRate)) {
    body->insert(pair<string, double>("DiscardRate", *request->discardRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldName)) {
    body->insert(pair<string, string>("FieldName", *request->fieldName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpDeliveryShrink)) {
    body->insert(pair<string, string>("HttpDelivery", *request->httpDeliveryShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kafkaDeliveryShrink)) {
    body->insert(pair<string, string>("KafkaDelivery", *request->kafkaDeliveryShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossDeliveryShrink)) {
    body->insert(pair<string, string>("OssDelivery", *request->ossDeliveryShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->s3DeliveryShrink)) {
    body->insert(pair<string, string>("S3Delivery", *request->s3DeliveryShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slsDeliveryShrink)) {
    body->insert(pair<string, string>("SlsDelivery", *request->slsDeliveryShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    body->insert(pair<string, string>("TaskName", *request->taskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUserDeliveryTask"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateUserDeliveryTaskResponse(callApi(params, req, runtime));
  }
  else {
    return CreateUserDeliveryTaskResponse(execute(params, req, runtime));
  }
}

CreateUserDeliveryTaskResponse Alibabacloud_ESA20240910::Client::createUserDeliveryTask(shared_ptr<CreateUserDeliveryTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUserDeliveryTaskWithOptions(request, runtime);
}

CreateWaitingRoomResponse Alibabacloud_ESA20240910::Client::createWaitingRoomWithOptions(shared_ptr<CreateWaitingRoomRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateWaitingRoomShrinkRequest> request = make_shared<CreateWaitingRoomShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateWaitingRoomRequestHostNameAndPath>>(tmpReq->hostNameAndPath)) {
    request->hostNameAndPathShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hostNameAndPath, make_shared<string>("HostNameAndPath"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cookieName)) {
    query->insert(pair<string, string>("CookieName", *request->cookieName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customPageHtml)) {
    query->insert(pair<string, string>("CustomPageHtml", *request->customPageHtml));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disableSessionRenewalEnable)) {
    query->insert(pair<string, string>("DisableSessionRenewalEnable", *request->disableSessionRenewalEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enable)) {
    query->insert(pair<string, string>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostNameAndPathShrink)) {
    query->insert(pair<string, string>("HostNameAndPath", *request->hostNameAndPathShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonResponseEnable)) {
    query->insert(pair<string, string>("JsonResponseEnable", *request->jsonResponseEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newUsersPerMinute)) {
    query->insert(pair<string, string>("NewUsersPerMinute", *request->newUsersPerMinute));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueAllEnable)) {
    query->insert(pair<string, string>("QueueAllEnable", *request->queueAllEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queuingMethod)) {
    query->insert(pair<string, string>("QueuingMethod", *request->queuingMethod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queuingStatusCode)) {
    query->insert(pair<string, string>("QueuingStatusCode", *request->queuingStatusCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionDuration)) {
    query->insert(pair<string, string>("SessionDuration", *request->sessionDuration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->totalActiveUsers)) {
    query->insert(pair<string, string>("TotalActiveUsers", *request->totalActiveUsers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->waitingRoomType)) {
    query->insert(pair<string, string>("WaitingRoomType", *request->waitingRoomType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWaitingRoom"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateWaitingRoomResponse(callApi(params, req, runtime));
  }
  else {
    return CreateWaitingRoomResponse(execute(params, req, runtime));
  }
}

CreateWaitingRoomResponse Alibabacloud_ESA20240910::Client::createWaitingRoom(shared_ptr<CreateWaitingRoomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWaitingRoomWithOptions(request, runtime);
}

CreateWaitingRoomEventResponse Alibabacloud_ESA20240910::Client::createWaitingRoomEventWithOptions(shared_ptr<CreateWaitingRoomEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customPageHtml)) {
    query->insert(pair<string, string>("CustomPageHtml", *request->customPageHtml));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disableSessionRenewalEnable)) {
    query->insert(pair<string, string>("DisableSessionRenewalEnable", *request->disableSessionRenewalEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enable)) {
    query->insert(pair<string, string>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonResponseEnable)) {
    query->insert(pair<string, string>("JsonResponseEnable", *request->jsonResponseEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newUsersPerMinute)) {
    query->insert(pair<string, string>("NewUsersPerMinute", *request->newUsersPerMinute));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preQueueEnable)) {
    query->insert(pair<string, string>("PreQueueEnable", *request->preQueueEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preQueueStartTime)) {
    query->insert(pair<string, string>("PreQueueStartTime", *request->preQueueStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queuingMethod)) {
    query->insert(pair<string, string>("QueuingMethod", *request->queuingMethod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queuingStatusCode)) {
    query->insert(pair<string, string>("QueuingStatusCode", *request->queuingStatusCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->randomPreQueueEnable)) {
    query->insert(pair<string, string>("RandomPreQueueEnable", *request->randomPreQueueEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionDuration)) {
    query->insert(pair<string, string>("SessionDuration", *request->sessionDuration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->totalActiveUsers)) {
    query->insert(pair<string, string>("TotalActiveUsers", *request->totalActiveUsers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->waitingRoomId)) {
    query->insert(pair<string, string>("WaitingRoomId", *request->waitingRoomId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->waitingRoomType)) {
    query->insert(pair<string, string>("WaitingRoomType", *request->waitingRoomType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWaitingRoomEvent"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateWaitingRoomEventResponse(callApi(params, req, runtime));
  }
  else {
    return CreateWaitingRoomEventResponse(execute(params, req, runtime));
  }
}

CreateWaitingRoomEventResponse Alibabacloud_ESA20240910::Client::createWaitingRoomEvent(shared_ptr<CreateWaitingRoomEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWaitingRoomEventWithOptions(request, runtime);
}

CreateWaitingRoomRuleResponse Alibabacloud_ESA20240910::Client::createWaitingRoomRuleWithOptions(shared_ptr<CreateWaitingRoomRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->waitingRoomId)) {
    query->insert(pair<string, string>("WaitingRoomId", *request->waitingRoomId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateWaitingRoomRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateWaitingRoomRuleResponse(callApi(params, req, runtime));
  }
  else {
    return CreateWaitingRoomRuleResponse(execute(params, req, runtime));
  }
}

CreateWaitingRoomRuleResponse Alibabacloud_ESA20240910::Client::createWaitingRoomRule(shared_ptr<CreateWaitingRoomRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWaitingRoomRuleWithOptions(request, runtime);
}

DeactivateVersionManagementResponse Alibabacloud_ESA20240910::Client::deactivateVersionManagementWithOptions(shared_ptr<DeactivateVersionManagementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeactivateVersionManagement"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeactivateVersionManagementResponse(callApi(params, req, runtime));
  }
  else {
    return DeactivateVersionManagementResponse(execute(params, req, runtime));
  }
}

DeactivateVersionManagementResponse Alibabacloud_ESA20240910::Client::deactivateVersionManagement(shared_ptr<DeactivateVersionManagementRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deactivateVersionManagementWithOptions(request, runtime);
}

DeleteCacheRuleResponse Alibabacloud_ESA20240910::Client::deleteCacheRuleWithOptions(shared_ptr<DeleteCacheRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCacheRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteCacheRuleResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteCacheRuleResponse(execute(params, req, runtime));
  }
}

DeleteCacheRuleResponse Alibabacloud_ESA20240910::Client::deleteCacheRule(shared_ptr<DeleteCacheRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCacheRuleWithOptions(request, runtime);
}

DeleteCertificateResponse Alibabacloud_ESA20240910::Client::deleteCertificateWithOptions(shared_ptr<DeleteCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCertificate"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteCertificateResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteCertificateResponse(execute(params, req, runtime));
  }
}

DeleteCertificateResponse Alibabacloud_ESA20240910::Client::deleteCertificate(shared_ptr<DeleteCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCertificateWithOptions(request, runtime);
}

DeleteClientCaCertificateResponse Alibabacloud_ESA20240910::Client::deleteClientCaCertificateWithOptions(shared_ptr<DeleteClientCaCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteClientCaCertificate"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteClientCaCertificateResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteClientCaCertificateResponse(execute(params, req, runtime));
  }
}

DeleteClientCaCertificateResponse Alibabacloud_ESA20240910::Client::deleteClientCaCertificate(shared_ptr<DeleteClientCaCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteClientCaCertificateWithOptions(request, runtime);
}

DeleteClientCertificateResponse Alibabacloud_ESA20240910::Client::deleteClientCertificateWithOptions(shared_ptr<DeleteClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteClientCertificate"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteClientCertificateResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteClientCertificateResponse(execute(params, req, runtime));
  }
}

DeleteClientCertificateResponse Alibabacloud_ESA20240910::Client::deleteClientCertificate(shared_ptr<DeleteClientCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteClientCertificateWithOptions(request, runtime);
}

DeleteCompressionRuleResponse Alibabacloud_ESA20240910::Client::deleteCompressionRuleWithOptions(shared_ptr<DeleteCompressionRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCompressionRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteCompressionRuleResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteCompressionRuleResponse(execute(params, req, runtime));
  }
}

DeleteCompressionRuleResponse Alibabacloud_ESA20240910::Client::deleteCompressionRule(shared_ptr<DeleteCompressionRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCompressionRuleWithOptions(request, runtime);
}

DeleteCustomScenePolicyResponse Alibabacloud_ESA20240910::Client::deleteCustomScenePolicyWithOptions(shared_ptr<DeleteCustomScenePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->policyId)) {
    query->insert(pair<string, long>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCustomScenePolicy"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteCustomScenePolicyResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteCustomScenePolicyResponse(execute(params, req, runtime));
  }
}

DeleteCustomScenePolicyResponse Alibabacloud_ESA20240910::Client::deleteCustomScenePolicy(shared_ptr<DeleteCustomScenePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustomScenePolicyWithOptions(request, runtime);
}

DeleteEdgeContainerAppResponse Alibabacloud_ESA20240910::Client::deleteEdgeContainerAppWithOptions(shared_ptr<DeleteEdgeContainerAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEdgeContainerApp"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteEdgeContainerAppResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteEdgeContainerAppResponse(execute(params, req, runtime));
  }
}

DeleteEdgeContainerAppResponse Alibabacloud_ESA20240910::Client::deleteEdgeContainerApp(shared_ptr<DeleteEdgeContainerAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEdgeContainerAppWithOptions(request, runtime);
}

DeleteEdgeContainerAppRecordResponse Alibabacloud_ESA20240910::Client::deleteEdgeContainerAppRecordWithOptions(shared_ptr<DeleteEdgeContainerAppRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordName)) {
    body->insert(pair<string, string>("RecordName", *request->recordName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    body->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEdgeContainerAppRecord"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteEdgeContainerAppRecordResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteEdgeContainerAppRecordResponse(execute(params, req, runtime));
  }
}

DeleteEdgeContainerAppRecordResponse Alibabacloud_ESA20240910::Client::deleteEdgeContainerAppRecord(shared_ptr<DeleteEdgeContainerAppRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEdgeContainerAppRecordWithOptions(request, runtime);
}

DeleteEdgeContainerAppVersionResponse Alibabacloud_ESA20240910::Client::deleteEdgeContainerAppVersionWithOptions(shared_ptr<DeleteEdgeContainerAppVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEdgeContainerAppVersion"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteEdgeContainerAppVersionResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteEdgeContainerAppVersionResponse(execute(params, req, runtime));
  }
}

DeleteEdgeContainerAppVersionResponse Alibabacloud_ESA20240910::Client::deleteEdgeContainerAppVersion(shared_ptr<DeleteEdgeContainerAppVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEdgeContainerAppVersionWithOptions(request, runtime);
}

DeleteHttpRequestHeaderModificationRuleResponse Alibabacloud_ESA20240910::Client::deleteHttpRequestHeaderModificationRuleWithOptions(shared_ptr<DeleteHttpRequestHeaderModificationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHttpRequestHeaderModificationRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteHttpRequestHeaderModificationRuleResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteHttpRequestHeaderModificationRuleResponse(execute(params, req, runtime));
  }
}

DeleteHttpRequestHeaderModificationRuleResponse Alibabacloud_ESA20240910::Client::deleteHttpRequestHeaderModificationRule(shared_ptr<DeleteHttpRequestHeaderModificationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHttpRequestHeaderModificationRuleWithOptions(request, runtime);
}

DeleteHttpResponseHeaderModificationRuleResponse Alibabacloud_ESA20240910::Client::deleteHttpResponseHeaderModificationRuleWithOptions(shared_ptr<DeleteHttpResponseHeaderModificationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHttpResponseHeaderModificationRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteHttpResponseHeaderModificationRuleResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteHttpResponseHeaderModificationRuleResponse(execute(params, req, runtime));
  }
}

DeleteHttpResponseHeaderModificationRuleResponse Alibabacloud_ESA20240910::Client::deleteHttpResponseHeaderModificationRule(shared_ptr<DeleteHttpResponseHeaderModificationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHttpResponseHeaderModificationRuleWithOptions(request, runtime);
}

DeleteHttpsApplicationConfigurationResponse Alibabacloud_ESA20240910::Client::deleteHttpsApplicationConfigurationWithOptions(shared_ptr<DeleteHttpsApplicationConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHttpsApplicationConfiguration"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteHttpsApplicationConfigurationResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteHttpsApplicationConfigurationResponse(execute(params, req, runtime));
  }
}

DeleteHttpsApplicationConfigurationResponse Alibabacloud_ESA20240910::Client::deleteHttpsApplicationConfiguration(shared_ptr<DeleteHttpsApplicationConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHttpsApplicationConfigurationWithOptions(request, runtime);
}

DeleteHttpsBasicConfigurationResponse Alibabacloud_ESA20240910::Client::deleteHttpsBasicConfigurationWithOptions(shared_ptr<DeleteHttpsBasicConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteHttpsBasicConfiguration"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteHttpsBasicConfigurationResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteHttpsBasicConfigurationResponse(execute(params, req, runtime));
  }
}

DeleteHttpsBasicConfigurationResponse Alibabacloud_ESA20240910::Client::deleteHttpsBasicConfiguration(shared_ptr<DeleteHttpsBasicConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteHttpsBasicConfigurationWithOptions(request, runtime);
}

DeleteImageTransformResponse Alibabacloud_ESA20240910::Client::deleteImageTransformWithOptions(shared_ptr<DeleteImageTransformRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteImageTransform"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteImageTransformResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteImageTransformResponse(execute(params, req, runtime));
  }
}

DeleteImageTransformResponse Alibabacloud_ESA20240910::Client::deleteImageTransform(shared_ptr<DeleteImageTransformRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteImageTransformWithOptions(request, runtime);
}

DeleteKvResponse Alibabacloud_ESA20240910::Client::deleteKvWithOptions(shared_ptr<DeleteKvRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteKv"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteKvResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteKvResponse(execute(params, req, runtime));
  }
}

DeleteKvResponse Alibabacloud_ESA20240910::Client::deleteKv(shared_ptr<DeleteKvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteKvWithOptions(request, runtime);
}

DeleteKvNamespaceResponse Alibabacloud_ESA20240910::Client::deleteKvNamespaceWithOptions(shared_ptr<DeleteKvNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteKvNamespace"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteKvNamespaceResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteKvNamespaceResponse(execute(params, req, runtime));
  }
}

DeleteKvNamespaceResponse Alibabacloud_ESA20240910::Client::deleteKvNamespace(shared_ptr<DeleteKvNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteKvNamespaceWithOptions(request, runtime);
}

DeleteListResponse Alibabacloud_ESA20240910::Client::deleteListWithOptions(shared_ptr<DeleteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteList"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteListResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteListResponse(execute(params, req, runtime));
  }
}

DeleteListResponse Alibabacloud_ESA20240910::Client::deleteList(shared_ptr<DeleteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteListWithOptions(request, runtime);
}

DeleteLoadBalancerResponse Alibabacloud_ESA20240910::Client::deleteLoadBalancerWithOptions(shared_ptr<DeleteLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLoadBalancer"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteLoadBalancerResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteLoadBalancerResponse(execute(params, req, runtime));
  }
}

DeleteLoadBalancerResponse Alibabacloud_ESA20240910::Client::deleteLoadBalancer(shared_ptr<DeleteLoadBalancerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLoadBalancerWithOptions(request, runtime);
}

DeleteNetworkOptimizationResponse Alibabacloud_ESA20240910::Client::deleteNetworkOptimizationWithOptions(shared_ptr<DeleteNetworkOptimizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteNetworkOptimization"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteNetworkOptimizationResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteNetworkOptimizationResponse(execute(params, req, runtime));
  }
}

DeleteNetworkOptimizationResponse Alibabacloud_ESA20240910::Client::deleteNetworkOptimization(shared_ptr<DeleteNetworkOptimizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteNetworkOptimizationWithOptions(request, runtime);
}

DeleteOriginPoolResponse Alibabacloud_ESA20240910::Client::deleteOriginPoolWithOptions(shared_ptr<DeleteOriginPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteOriginPool"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteOriginPoolResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteOriginPoolResponse(execute(params, req, runtime));
  }
}

DeleteOriginPoolResponse Alibabacloud_ESA20240910::Client::deleteOriginPool(shared_ptr<DeleteOriginPoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOriginPoolWithOptions(request, runtime);
}

DeleteOriginProtectionResponse Alibabacloud_ESA20240910::Client::deleteOriginProtectionWithOptions(shared_ptr<DeleteOriginProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteOriginProtection"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteOriginProtectionResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteOriginProtectionResponse(execute(params, req, runtime));
  }
}

DeleteOriginProtectionResponse Alibabacloud_ESA20240910::Client::deleteOriginProtection(shared_ptr<DeleteOriginProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOriginProtectionWithOptions(request, runtime);
}

DeleteOriginRuleResponse Alibabacloud_ESA20240910::Client::deleteOriginRuleWithOptions(shared_ptr<DeleteOriginRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteOriginRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteOriginRuleResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteOriginRuleResponse(execute(params, req, runtime));
  }
}

DeleteOriginRuleResponse Alibabacloud_ESA20240910::Client::deleteOriginRule(shared_ptr<DeleteOriginRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteOriginRuleWithOptions(request, runtime);
}

DeletePageResponse Alibabacloud_ESA20240910::Client::deletePageWithOptions(shared_ptr<DeletePageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePage"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeletePageResponse(callApi(params, req, runtime));
  }
  else {
    return DeletePageResponse(execute(params, req, runtime));
  }
}

DeletePageResponse Alibabacloud_ESA20240910::Client::deletePage(shared_ptr<DeletePageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePageWithOptions(request, runtime);
}

DeleteRecordResponse Alibabacloud_ESA20240910::Client::deleteRecordWithOptions(shared_ptr<DeleteRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->recordId)) {
    query->insert(pair<string, long>("RecordId", *request->recordId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRecord"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteRecordResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteRecordResponse(execute(params, req, runtime));
  }
}

DeleteRecordResponse Alibabacloud_ESA20240910::Client::deleteRecord(shared_ptr<DeleteRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRecordWithOptions(request, runtime);
}

DeleteRedirectRuleResponse Alibabacloud_ESA20240910::Client::deleteRedirectRuleWithOptions(shared_ptr<DeleteRedirectRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRedirectRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteRedirectRuleResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteRedirectRuleResponse(execute(params, req, runtime));
  }
}

DeleteRedirectRuleResponse Alibabacloud_ESA20240910::Client::deleteRedirectRule(shared_ptr<DeleteRedirectRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRedirectRuleWithOptions(request, runtime);
}

DeleteRewriteUrlRuleResponse Alibabacloud_ESA20240910::Client::deleteRewriteUrlRuleWithOptions(shared_ptr<DeleteRewriteUrlRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRewriteUrlRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteRewriteUrlRuleResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteRewriteUrlRuleResponse(execute(params, req, runtime));
  }
}

DeleteRewriteUrlRuleResponse Alibabacloud_ESA20240910::Client::deleteRewriteUrlRule(shared_ptr<DeleteRewriteUrlRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRewriteUrlRuleWithOptions(request, runtime);
}

DeleteRoutineResponse Alibabacloud_ESA20240910::Client::deleteRoutineWithOptions(shared_ptr<DeleteRoutineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRoutine"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteRoutineResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteRoutineResponse(execute(params, req, runtime));
  }
}

DeleteRoutineResponse Alibabacloud_ESA20240910::Client::deleteRoutine(shared_ptr<DeleteRoutineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRoutineWithOptions(request, runtime);
}

DeleteRoutineCodeVersionResponse Alibabacloud_ESA20240910::Client::deleteRoutineCodeVersionWithOptions(shared_ptr<DeleteRoutineCodeVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->codeVersion)) {
    body->insert(pair<string, string>("CodeVersion", *request->codeVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRoutineCodeVersion"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteRoutineCodeVersionResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteRoutineCodeVersionResponse(execute(params, req, runtime));
  }
}

DeleteRoutineCodeVersionResponse Alibabacloud_ESA20240910::Client::deleteRoutineCodeVersion(shared_ptr<DeleteRoutineCodeVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRoutineCodeVersionWithOptions(request, runtime);
}

DeleteRoutineRelatedRecordResponse Alibabacloud_ESA20240910::Client::deleteRoutineRelatedRecordWithOptions(shared_ptr<DeleteRoutineRelatedRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recordId)) {
    body->insert(pair<string, long>("RecordId", *request->recordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordName)) {
    body->insert(pair<string, string>("RecordName", *request->recordName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRoutineRelatedRecord"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteRoutineRelatedRecordResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteRoutineRelatedRecordResponse(execute(params, req, runtime));
  }
}

DeleteRoutineRelatedRecordResponse Alibabacloud_ESA20240910::Client::deleteRoutineRelatedRecord(shared_ptr<DeleteRoutineRelatedRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRoutineRelatedRecordWithOptions(request, runtime);
}

DeleteRoutineRelatedRouteResponse Alibabacloud_ESA20240910::Client::deleteRoutineRelatedRouteWithOptions(shared_ptr<DeleteRoutineRelatedRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->route)) {
    body->insert(pair<string, string>("Route", *request->route));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->routeId)) {
    body->insert(pair<string, string>("RouteId", *request->routeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    body->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRoutineRelatedRoute"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteRoutineRelatedRouteResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteRoutineRelatedRouteResponse(execute(params, req, runtime));
  }
}

DeleteRoutineRelatedRouteResponse Alibabacloud_ESA20240910::Client::deleteRoutineRelatedRoute(shared_ptr<DeleteRoutineRelatedRouteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRoutineRelatedRouteWithOptions(request, runtime);
}

DeleteScheduledPreloadExecutionResponse Alibabacloud_ESA20240910::Client::deleteScheduledPreloadExecutionWithOptions(shared_ptr<DeleteScheduledPreloadExecutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteScheduledPreloadExecution"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteScheduledPreloadExecutionResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteScheduledPreloadExecutionResponse(execute(params, req, runtime));
  }
}

DeleteScheduledPreloadExecutionResponse Alibabacloud_ESA20240910::Client::deleteScheduledPreloadExecution(shared_ptr<DeleteScheduledPreloadExecutionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScheduledPreloadExecutionWithOptions(request, runtime);
}

DeleteScheduledPreloadJobResponse Alibabacloud_ESA20240910::Client::deleteScheduledPreloadJobWithOptions(shared_ptr<DeleteScheduledPreloadJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteScheduledPreloadJob"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteScheduledPreloadJobResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteScheduledPreloadJobResponse(execute(params, req, runtime));
  }
}

DeleteScheduledPreloadJobResponse Alibabacloud_ESA20240910::Client::deleteScheduledPreloadJob(shared_ptr<DeleteScheduledPreloadJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScheduledPreloadJobWithOptions(request, runtime);
}

DeleteSiteResponse Alibabacloud_ESA20240910::Client::deleteSiteWithOptions(shared_ptr<DeleteSiteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSite"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteSiteResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteSiteResponse(execute(params, req, runtime));
  }
}

DeleteSiteResponse Alibabacloud_ESA20240910::Client::deleteSite(shared_ptr<DeleteSiteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSiteWithOptions(request, runtime);
}

DeleteSiteDeliveryTaskResponse Alibabacloud_ESA20240910::Client::deleteSiteDeliveryTaskWithOptions(shared_ptr<DeleteSiteDeliveryTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    body->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    body->insert(pair<string, string>("TaskName", *request->taskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSiteDeliveryTask"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteSiteDeliveryTaskResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteSiteDeliveryTaskResponse(execute(params, req, runtime));
  }
}

DeleteSiteDeliveryTaskResponse Alibabacloud_ESA20240910::Client::deleteSiteDeliveryTask(shared_ptr<DeleteSiteDeliveryTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSiteDeliveryTaskWithOptions(request, runtime);
}

DeleteUserDeliveryTaskResponse Alibabacloud_ESA20240910::Client::deleteUserDeliveryTaskWithOptions(shared_ptr<DeleteUserDeliveryTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    body->insert(pair<string, string>("TaskName", *request->taskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteUserDeliveryTask"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteUserDeliveryTaskResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteUserDeliveryTaskResponse(execute(params, req, runtime));
  }
}

DeleteUserDeliveryTaskResponse Alibabacloud_ESA20240910::Client::deleteUserDeliveryTask(shared_ptr<DeleteUserDeliveryTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteUserDeliveryTaskWithOptions(request, runtime);
}

DeleteWaitingRoomResponse Alibabacloud_ESA20240910::Client::deleteWaitingRoomWithOptions(shared_ptr<DeleteWaitingRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->waitingRoomId)) {
    query->insert(pair<string, string>("WaitingRoomId", *request->waitingRoomId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWaitingRoom"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteWaitingRoomResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteWaitingRoomResponse(execute(params, req, runtime));
  }
}

DeleteWaitingRoomResponse Alibabacloud_ESA20240910::Client::deleteWaitingRoom(shared_ptr<DeleteWaitingRoomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWaitingRoomWithOptions(request, runtime);
}

DeleteWaitingRoomEventResponse Alibabacloud_ESA20240910::Client::deleteWaitingRoomEventWithOptions(shared_ptr<DeleteWaitingRoomEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->waitingRoomEventId)) {
    query->insert(pair<string, long>("WaitingRoomEventId", *request->waitingRoomEventId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWaitingRoomEvent"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteWaitingRoomEventResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteWaitingRoomEventResponse(execute(params, req, runtime));
  }
}

DeleteWaitingRoomEventResponse Alibabacloud_ESA20240910::Client::deleteWaitingRoomEvent(shared_ptr<DeleteWaitingRoomEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWaitingRoomEventWithOptions(request, runtime);
}

DeleteWaitingRoomRuleResponse Alibabacloud_ESA20240910::Client::deleteWaitingRoomRuleWithOptions(shared_ptr<DeleteWaitingRoomRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->waitingRoomRuleId)) {
    query->insert(pair<string, long>("WaitingRoomRuleId", *request->waitingRoomRuleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteWaitingRoomRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteWaitingRoomRuleResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteWaitingRoomRuleResponse(execute(params, req, runtime));
  }
}

DeleteWaitingRoomRuleResponse Alibabacloud_ESA20240910::Client::deleteWaitingRoomRule(shared_ptr<DeleteWaitingRoomRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWaitingRoomRuleWithOptions(request, runtime);
}

DescribeCustomScenePoliciesResponse Alibabacloud_ESA20240910::Client::describeCustomScenePoliciesWithOptions(shared_ptr<DescribeCustomScenePoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->policyId)) {
    query->insert(pair<string, long>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCustomScenePolicies"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeCustomScenePoliciesResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeCustomScenePoliciesResponse(execute(params, req, runtime));
  }
}

DescribeCustomScenePoliciesResponse Alibabacloud_ESA20240910::Client::describeCustomScenePolicies(shared_ptr<DescribeCustomScenePoliciesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCustomScenePoliciesWithOptions(request, runtime);
}

DescribeDDoSAllEventListResponse Alibabacloud_ESA20240910::Client::describeDDoSAllEventListWithOptions(shared_ptr<DescribeDDoSAllEventListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventType)) {
    query->insert(pair<string, string>("EventType", *request->eventType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDDoSAllEventList"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDDoSAllEventListResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDDoSAllEventListResponse(execute(params, req, runtime));
  }
}

DescribeDDoSAllEventListResponse Alibabacloud_ESA20240910::Client::describeDDoSAllEventList(shared_ptr<DescribeDDoSAllEventListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDDoSAllEventListWithOptions(request, runtime);
}

DescribeDDoSBpsListResponse Alibabacloud_ESA20240910::Client::describeDDoSBpsListWithOptions(shared_ptr<DescribeDDoSBpsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDDoSBpsList"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDDoSBpsListResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDDoSBpsListResponse(execute(params, req, runtime));
  }
}

DescribeDDoSBpsListResponse Alibabacloud_ESA20240910::Client::describeDDoSBpsList(shared_ptr<DescribeDDoSBpsListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDDoSBpsListWithOptions(request, runtime);
}

DescribeDDoSL7QpsListResponse Alibabacloud_ESA20240910::Client::describeDDoSL7QpsListWithOptions(shared_ptr<DescribeDDoSL7QpsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interval)) {
    query->insert(pair<string, long>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recordId)) {
    query->insert(pair<string, long>("RecordId", *request->recordId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDDoSL7QpsList"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeDDoSL7QpsListResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeDDoSL7QpsListResponse(execute(params, req, runtime));
  }
}

DescribeDDoSL7QpsListResponse Alibabacloud_ESA20240910::Client::describeDDoSL7QpsList(shared_ptr<DescribeDDoSL7QpsListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDDoSL7QpsListWithOptions(request, runtime);
}

DescribeEdgeContainerAppStatsResponse Alibabacloud_ESA20240910::Client::describeEdgeContainerAppStatsWithOptions(shared_ptr<DescribeEdgeContainerAppStatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEdgeContainerAppStats"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeEdgeContainerAppStatsResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeEdgeContainerAppStatsResponse(execute(params, req, runtime));
  }
}

DescribeEdgeContainerAppStatsResponse Alibabacloud_ESA20240910::Client::describeEdgeContainerAppStats(shared_ptr<DescribeEdgeContainerAppStatsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEdgeContainerAppStatsWithOptions(request, runtime);
}

DescribeHttpDDoSAttackIntelligentProtectionResponse Alibabacloud_ESA20240910::Client::describeHttpDDoSAttackIntelligentProtectionWithOptions(shared_ptr<DescribeHttpDDoSAttackIntelligentProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHttpDDoSAttackIntelligentProtection"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeHttpDDoSAttackIntelligentProtectionResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeHttpDDoSAttackIntelligentProtectionResponse(execute(params, req, runtime));
  }
}

DescribeHttpDDoSAttackIntelligentProtectionResponse Alibabacloud_ESA20240910::Client::describeHttpDDoSAttackIntelligentProtection(shared_ptr<DescribeHttpDDoSAttackIntelligentProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHttpDDoSAttackIntelligentProtectionWithOptions(request, runtime);
}

DescribeHttpDDoSAttackProtectionResponse Alibabacloud_ESA20240910::Client::describeHttpDDoSAttackProtectionWithOptions(shared_ptr<DescribeHttpDDoSAttackProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHttpDDoSAttackProtection"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeHttpDDoSAttackProtectionResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeHttpDDoSAttackProtectionResponse(execute(params, req, runtime));
  }
}

DescribeHttpDDoSAttackProtectionResponse Alibabacloud_ESA20240910::Client::describeHttpDDoSAttackProtection(shared_ptr<DescribeHttpDDoSAttackProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHttpDDoSAttackProtectionWithOptions(request, runtime);
}

DescribeKvAccountStatusResponse Alibabacloud_ESA20240910::Client::describeKvAccountStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeKvAccountStatus"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeKvAccountStatusResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeKvAccountStatusResponse(execute(params, req, runtime));
  }
}

DescribeKvAccountStatusResponse Alibabacloud_ESA20240910::Client::describeKvAccountStatus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeKvAccountStatusWithOptions(runtime);
}

DescribePreloadTasksResponse Alibabacloud_ESA20240910::Client::describePreloadTasksWithOptions(shared_ptr<DescribePreloadTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePreloadTasks"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribePreloadTasksResponse(callApi(params, req, runtime));
  }
  else {
    return DescribePreloadTasksResponse(execute(params, req, runtime));
  }
}

DescribePreloadTasksResponse Alibabacloud_ESA20240910::Client::describePreloadTasks(shared_ptr<DescribePreloadTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePreloadTasksWithOptions(request, runtime);
}

DescribePurgeTasksResponse Alibabacloud_ESA20240910::Client::describePurgeTasksWithOptions(shared_ptr<DescribePurgeTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePurgeTasks"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribePurgeTasksResponse(callApi(params, req, runtime));
  }
  else {
    return DescribePurgeTasksResponse(execute(params, req, runtime));
  }
}

DescribePurgeTasksResponse Alibabacloud_ESA20240910::Client::describePurgeTasks(shared_ptr<DescribePurgeTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePurgeTasksWithOptions(request, runtime);
}

DescribeRatePlanInstanceStatusResponse Alibabacloud_ESA20240910::Client::describeRatePlanInstanceStatusWithOptions(shared_ptr<DescribeRatePlanInstanceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRatePlanInstanceStatus"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeRatePlanInstanceStatusResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeRatePlanInstanceStatusResponse(execute(params, req, runtime));
  }
}

DescribeRatePlanInstanceStatusResponse Alibabacloud_ESA20240910::Client::describeRatePlanInstanceStatus(shared_ptr<DescribeRatePlanInstanceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRatePlanInstanceStatusWithOptions(request, runtime);
}

DisableCustomScenePolicyResponse Alibabacloud_ESA20240910::Client::disableCustomScenePolicyWithOptions(shared_ptr<DisableCustomScenePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->policyId)) {
    query->insert(pair<string, long>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableCustomScenePolicy"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DisableCustomScenePolicyResponse(callApi(params, req, runtime));
  }
  else {
    return DisableCustomScenePolicyResponse(execute(params, req, runtime));
  }
}

DisableCustomScenePolicyResponse Alibabacloud_ESA20240910::Client::disableCustomScenePolicy(shared_ptr<DisableCustomScenePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableCustomScenePolicyWithOptions(request, runtime);
}

EditSiteWafSettingsResponse Alibabacloud_ESA20240910::Client::editSiteWafSettingsWithOptions(shared_ptr<EditSiteWafSettingsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<EditSiteWafSettingsShrinkRequest> request = make_shared<EditSiteWafSettingsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<WafSiteSettings>(tmpReq->settings)) {
    request->settingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->settings, make_shared<string>("Settings"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteVersion)) {
    query->insert(pair<string, long>("SiteVersion", *request->siteVersion));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->settingsShrink)) {
    body->insert(pair<string, string>("Settings", *request->settingsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EditSiteWafSettings"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return EditSiteWafSettingsResponse(callApi(params, req, runtime));
  }
  else {
    return EditSiteWafSettingsResponse(execute(params, req, runtime));
  }
}

EditSiteWafSettingsResponse Alibabacloud_ESA20240910::Client::editSiteWafSettings(shared_ptr<EditSiteWafSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return editSiteWafSettingsWithOptions(request, runtime);
}

EnableCustomScenePolicyResponse Alibabacloud_ESA20240910::Client::enableCustomScenePolicyWithOptions(shared_ptr<EnableCustomScenePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->policyId)) {
    query->insert(pair<string, long>("PolicyId", *request->policyId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableCustomScenePolicy"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return EnableCustomScenePolicyResponse(callApi(params, req, runtime));
  }
  else {
    return EnableCustomScenePolicyResponse(execute(params, req, runtime));
  }
}

EnableCustomScenePolicyResponse Alibabacloud_ESA20240910::Client::enableCustomScenePolicy(shared_ptr<EnableCustomScenePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableCustomScenePolicyWithOptions(request, runtime);
}

ExportRecordsResponse Alibabacloud_ESA20240910::Client::exportRecordsWithOptions(shared_ptr<ExportRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportRecords"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ExportRecordsResponse(callApi(params, req, runtime));
  }
  else {
    return ExportRecordsResponse(execute(params, req, runtime));
  }
}

ExportRecordsResponse Alibabacloud_ESA20240910::Client::exportRecords(shared_ptr<ExportRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return exportRecordsWithOptions(request, runtime);
}

GetCacheReserveSpecificationResponse Alibabacloud_ESA20240910::Client::getCacheReserveSpecificationWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCacheReserveSpecification"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetCacheReserveSpecificationResponse(callApi(params, req, runtime));
  }
  else {
    return GetCacheReserveSpecificationResponse(execute(params, req, runtime));
  }
}

GetCacheReserveSpecificationResponse Alibabacloud_ESA20240910::Client::getCacheReserveSpecification() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCacheReserveSpecificationWithOptions(runtime);
}

GetCacheRuleResponse Alibabacloud_ESA20240910::Client::getCacheRuleWithOptions(shared_ptr<GetCacheRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCacheRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetCacheRuleResponse(callApi(params, req, runtime));
  }
  else {
    return GetCacheRuleResponse(execute(params, req, runtime));
  }
}

GetCacheRuleResponse Alibabacloud_ESA20240910::Client::getCacheRule(shared_ptr<GetCacheRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCacheRuleWithOptions(request, runtime);
}

GetCacheTagResponse Alibabacloud_ESA20240910::Client::getCacheTagWithOptions(shared_ptr<GetCacheTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCacheTag"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetCacheTagResponse(callApi(params, req, runtime));
  }
  else {
    return GetCacheTagResponse(execute(params, req, runtime));
  }
}

GetCacheTagResponse Alibabacloud_ESA20240910::Client::getCacheTag(shared_ptr<GetCacheTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCacheTagWithOptions(request, runtime);
}

GetCertificateResponse Alibabacloud_ESA20240910::Client::getCertificateWithOptions(shared_ptr<GetCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCertificate"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetCertificateResponse(callApi(params, req, runtime));
  }
  else {
    return GetCertificateResponse(execute(params, req, runtime));
  }
}

GetCertificateResponse Alibabacloud_ESA20240910::Client::getCertificate(shared_ptr<GetCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCertificateWithOptions(request, runtime);
}

GetCertificateQuotaResponse Alibabacloud_ESA20240910::Client::getCertificateQuotaWithOptions(shared_ptr<GetCertificateQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCertificateQuota"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetCertificateQuotaResponse(callApi(params, req, runtime));
  }
  else {
    return GetCertificateQuotaResponse(execute(params, req, runtime));
  }
}

GetCertificateQuotaResponse Alibabacloud_ESA20240910::Client::getCertificateQuota(shared_ptr<GetCertificateQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCertificateQuotaWithOptions(request, runtime);
}

GetClientCaCertificateResponse Alibabacloud_ESA20240910::Client::getClientCaCertificateWithOptions(shared_ptr<GetClientCaCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetClientCaCertificate"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetClientCaCertificateResponse(callApi(params, req, runtime));
  }
  else {
    return GetClientCaCertificateResponse(execute(params, req, runtime));
  }
}

GetClientCaCertificateResponse Alibabacloud_ESA20240910::Client::getClientCaCertificate(shared_ptr<GetClientCaCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getClientCaCertificateWithOptions(request, runtime);
}

GetClientCertificateResponse Alibabacloud_ESA20240910::Client::getClientCertificateWithOptions(shared_ptr<GetClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetClientCertificate"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetClientCertificateResponse(callApi(params, req, runtime));
  }
  else {
    return GetClientCertificateResponse(execute(params, req, runtime));
  }
}

GetClientCertificateResponse Alibabacloud_ESA20240910::Client::getClientCertificate(shared_ptr<GetClientCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getClientCertificateWithOptions(request, runtime);
}

GetClientCertificateHostnamesResponse Alibabacloud_ESA20240910::Client::getClientCertificateHostnamesWithOptions(shared_ptr<GetClientCertificateHostnamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetClientCertificateHostnames"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetClientCertificateHostnamesResponse(callApi(params, req, runtime));
  }
  else {
    return GetClientCertificateHostnamesResponse(execute(params, req, runtime));
  }
}

GetClientCertificateHostnamesResponse Alibabacloud_ESA20240910::Client::getClientCertificateHostnames(shared_ptr<GetClientCertificateHostnamesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getClientCertificateHostnamesWithOptions(request, runtime);
}

GetCnameFlatteningResponse Alibabacloud_ESA20240910::Client::getCnameFlatteningWithOptions(shared_ptr<GetCnameFlatteningRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCnameFlattening"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetCnameFlatteningResponse(callApi(params, req, runtime));
  }
  else {
    return GetCnameFlatteningResponse(execute(params, req, runtime));
  }
}

GetCnameFlatteningResponse Alibabacloud_ESA20240910::Client::getCnameFlattening(shared_ptr<GetCnameFlatteningRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCnameFlatteningWithOptions(request, runtime);
}

GetCompressionRuleResponse Alibabacloud_ESA20240910::Client::getCompressionRuleWithOptions(shared_ptr<GetCompressionRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCompressionRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetCompressionRuleResponse(callApi(params, req, runtime));
  }
  else {
    return GetCompressionRuleResponse(execute(params, req, runtime));
  }
}

GetCompressionRuleResponse Alibabacloud_ESA20240910::Client::getCompressionRule(shared_ptr<GetCompressionRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCompressionRuleWithOptions(request, runtime);
}

GetDevelopmentModeResponse Alibabacloud_ESA20240910::Client::getDevelopmentModeWithOptions(shared_ptr<GetDevelopmentModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDevelopmentMode"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetDevelopmentModeResponse(callApi(params, req, runtime));
  }
  else {
    return GetDevelopmentModeResponse(execute(params, req, runtime));
  }
}

GetDevelopmentModeResponse Alibabacloud_ESA20240910::Client::getDevelopmentMode(shared_ptr<GetDevelopmentModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDevelopmentModeWithOptions(request, runtime);
}

GetEdgeContainerAppResponse Alibabacloud_ESA20240910::Client::getEdgeContainerAppWithOptions(shared_ptr<GetEdgeContainerAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEdgeContainerApp"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetEdgeContainerAppResponse(callApi(params, req, runtime));
  }
  else {
    return GetEdgeContainerAppResponse(execute(params, req, runtime));
  }
}

GetEdgeContainerAppResponse Alibabacloud_ESA20240910::Client::getEdgeContainerApp(shared_ptr<GetEdgeContainerAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEdgeContainerAppWithOptions(request, runtime);
}

GetEdgeContainerAppLogRiverResponse Alibabacloud_ESA20240910::Client::getEdgeContainerAppLogRiverWithOptions(shared_ptr<GetEdgeContainerAppLogRiverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEdgeContainerAppLogRiver"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetEdgeContainerAppLogRiverResponse(callApi(params, req, runtime));
  }
  else {
    return GetEdgeContainerAppLogRiverResponse(execute(params, req, runtime));
  }
}

GetEdgeContainerAppLogRiverResponse Alibabacloud_ESA20240910::Client::getEdgeContainerAppLogRiver(shared_ptr<GetEdgeContainerAppLogRiverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEdgeContainerAppLogRiverWithOptions(request, runtime);
}

GetEdgeContainerAppStatusResponse Alibabacloud_ESA20240910::Client::getEdgeContainerAppStatusWithOptions(shared_ptr<GetEdgeContainerAppStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publishEnv)) {
    query->insert(pair<string, string>("PublishEnv", *request->publishEnv));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEdgeContainerAppStatus"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetEdgeContainerAppStatusResponse(callApi(params, req, runtime));
  }
  else {
    return GetEdgeContainerAppStatusResponse(execute(params, req, runtime));
  }
}

GetEdgeContainerAppStatusResponse Alibabacloud_ESA20240910::Client::getEdgeContainerAppStatus(shared_ptr<GetEdgeContainerAppStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEdgeContainerAppStatusWithOptions(request, runtime);
}

GetEdgeContainerAppVersionResponse Alibabacloud_ESA20240910::Client::getEdgeContainerAppVersionWithOptions(shared_ptr<GetEdgeContainerAppVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEdgeContainerAppVersion"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetEdgeContainerAppVersionResponse(callApi(params, req, runtime));
  }
  else {
    return GetEdgeContainerAppVersionResponse(execute(params, req, runtime));
  }
}

GetEdgeContainerAppVersionResponse Alibabacloud_ESA20240910::Client::getEdgeContainerAppVersion(shared_ptr<GetEdgeContainerAppVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEdgeContainerAppVersionWithOptions(request, runtime);
}

GetEdgeContainerDeployRegionsResponse Alibabacloud_ESA20240910::Client::getEdgeContainerDeployRegionsWithOptions(shared_ptr<GetEdgeContainerDeployRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEdgeContainerDeployRegions"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetEdgeContainerDeployRegionsResponse(callApi(params, req, runtime));
  }
  else {
    return GetEdgeContainerDeployRegionsResponse(execute(params, req, runtime));
  }
}

GetEdgeContainerDeployRegionsResponse Alibabacloud_ESA20240910::Client::getEdgeContainerDeployRegions(shared_ptr<GetEdgeContainerDeployRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEdgeContainerDeployRegionsWithOptions(request, runtime);
}

GetEdgeContainerLogsResponse Alibabacloud_ESA20240910::Client::getEdgeContainerLogsWithOptions(shared_ptr<GetEdgeContainerLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEdgeContainerLogs"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetEdgeContainerLogsResponse(callApi(params, req, runtime));
  }
  else {
    return GetEdgeContainerLogsResponse(execute(params, req, runtime));
  }
}

GetEdgeContainerLogsResponse Alibabacloud_ESA20240910::Client::getEdgeContainerLogs(shared_ptr<GetEdgeContainerLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEdgeContainerLogsWithOptions(request, runtime);
}

GetEdgeContainerStagingDeployStatusResponse Alibabacloud_ESA20240910::Client::getEdgeContainerStagingDeployStatusWithOptions(shared_ptr<GetEdgeContainerStagingDeployStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEdgeContainerStagingDeployStatus"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetEdgeContainerStagingDeployStatusResponse(callApi(params, req, runtime));
  }
  else {
    return GetEdgeContainerStagingDeployStatusResponse(execute(params, req, runtime));
  }
}

GetEdgeContainerStagingDeployStatusResponse Alibabacloud_ESA20240910::Client::getEdgeContainerStagingDeployStatus(shared_ptr<GetEdgeContainerStagingDeployStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEdgeContainerStagingDeployStatusWithOptions(request, runtime);
}

GetEdgeContainerTerminalResponse Alibabacloud_ESA20240910::Client::getEdgeContainerTerminalWithOptions(shared_ptr<GetEdgeContainerTerminalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEdgeContainerTerminal"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetEdgeContainerTerminalResponse(callApi(params, req, runtime));
  }
  else {
    return GetEdgeContainerTerminalResponse(execute(params, req, runtime));
  }
}

GetEdgeContainerTerminalResponse Alibabacloud_ESA20240910::Client::getEdgeContainerTerminal(shared_ptr<GetEdgeContainerTerminalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEdgeContainerTerminalWithOptions(request, runtime);
}

GetHttpRequestHeaderModificationRuleResponse Alibabacloud_ESA20240910::Client::getHttpRequestHeaderModificationRuleWithOptions(shared_ptr<GetHttpRequestHeaderModificationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHttpRequestHeaderModificationRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHttpRequestHeaderModificationRuleResponse(callApi(params, req, runtime));
  }
  else {
    return GetHttpRequestHeaderModificationRuleResponse(execute(params, req, runtime));
  }
}

GetHttpRequestHeaderModificationRuleResponse Alibabacloud_ESA20240910::Client::getHttpRequestHeaderModificationRule(shared_ptr<GetHttpRequestHeaderModificationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHttpRequestHeaderModificationRuleWithOptions(request, runtime);
}

GetHttpResponseHeaderModificationRuleResponse Alibabacloud_ESA20240910::Client::getHttpResponseHeaderModificationRuleWithOptions(shared_ptr<GetHttpResponseHeaderModificationRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHttpResponseHeaderModificationRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHttpResponseHeaderModificationRuleResponse(callApi(params, req, runtime));
  }
  else {
    return GetHttpResponseHeaderModificationRuleResponse(execute(params, req, runtime));
  }
}

GetHttpResponseHeaderModificationRuleResponse Alibabacloud_ESA20240910::Client::getHttpResponseHeaderModificationRule(shared_ptr<GetHttpResponseHeaderModificationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHttpResponseHeaderModificationRuleWithOptions(request, runtime);
}

GetHttpsApplicationConfigurationResponse Alibabacloud_ESA20240910::Client::getHttpsApplicationConfigurationWithOptions(shared_ptr<GetHttpsApplicationConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHttpsApplicationConfiguration"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHttpsApplicationConfigurationResponse(callApi(params, req, runtime));
  }
  else {
    return GetHttpsApplicationConfigurationResponse(execute(params, req, runtime));
  }
}

GetHttpsApplicationConfigurationResponse Alibabacloud_ESA20240910::Client::getHttpsApplicationConfiguration(shared_ptr<GetHttpsApplicationConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHttpsApplicationConfigurationWithOptions(request, runtime);
}

GetHttpsBasicConfigurationResponse Alibabacloud_ESA20240910::Client::getHttpsBasicConfigurationWithOptions(shared_ptr<GetHttpsBasicConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHttpsBasicConfiguration"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetHttpsBasicConfigurationResponse(callApi(params, req, runtime));
  }
  else {
    return GetHttpsBasicConfigurationResponse(execute(params, req, runtime));
  }
}

GetHttpsBasicConfigurationResponse Alibabacloud_ESA20240910::Client::getHttpsBasicConfiguration(shared_ptr<GetHttpsBasicConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHttpsBasicConfigurationWithOptions(request, runtime);
}

GetIPv6Response Alibabacloud_ESA20240910::Client::getIPv6WithOptions(shared_ptr<GetIPv6Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIPv6"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetIPv6Response(callApi(params, req, runtime));
  }
  else {
    return GetIPv6Response(execute(params, req, runtime));
  }
}

GetIPv6Response Alibabacloud_ESA20240910::Client::getIPv6(shared_ptr<GetIPv6Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIPv6WithOptions(request, runtime);
}

GetImageTransformResponse Alibabacloud_ESA20240910::Client::getImageTransformWithOptions(shared_ptr<GetImageTransformRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetImageTransform"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetImageTransformResponse(callApi(params, req, runtime));
  }
  else {
    return GetImageTransformResponse(execute(params, req, runtime));
  }
}

GetImageTransformResponse Alibabacloud_ESA20240910::Client::getImageTransform(shared_ptr<GetImageTransformRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getImageTransformWithOptions(request, runtime);
}

GetKvResponse Alibabacloud_ESA20240910::Client::getKvWithOptions(shared_ptr<GetKvRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetKv"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetKvResponse(callApi(params, req, runtime));
  }
  else {
    return GetKvResponse(execute(params, req, runtime));
  }
}

GetKvResponse Alibabacloud_ESA20240910::Client::getKv(shared_ptr<GetKvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getKvWithOptions(request, runtime);
}

GetKvAccountResponse Alibabacloud_ESA20240910::Client::getKvAccountWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetKvAccount"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetKvAccountResponse(callApi(params, req, runtime));
  }
  else {
    return GetKvAccountResponse(execute(params, req, runtime));
  }
}

GetKvAccountResponse Alibabacloud_ESA20240910::Client::getKvAccount() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getKvAccountWithOptions(runtime);
}

GetKvNamespaceResponse Alibabacloud_ESA20240910::Client::getKvNamespaceWithOptions(shared_ptr<GetKvNamespaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetKvNamespace"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetKvNamespaceResponse(callApi(params, req, runtime));
  }
  else {
    return GetKvNamespaceResponse(execute(params, req, runtime));
  }
}

GetKvNamespaceResponse Alibabacloud_ESA20240910::Client::getKvNamespace(shared_ptr<GetKvNamespaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getKvNamespaceWithOptions(request, runtime);
}

GetListResponse Alibabacloud_ESA20240910::Client::getListWithOptions(shared_ptr<GetListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetList"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetListResponse(callApi(params, req, runtime));
  }
  else {
    return GetListResponse(execute(params, req, runtime));
  }
}

GetListResponse Alibabacloud_ESA20240910::Client::getList(shared_ptr<GetListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getListWithOptions(request, runtime);
}

GetLoadBalancerResponse Alibabacloud_ESA20240910::Client::getLoadBalancerWithOptions(shared_ptr<GetLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLoadBalancer"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetLoadBalancerResponse(callApi(params, req, runtime));
  }
  else {
    return GetLoadBalancerResponse(execute(params, req, runtime));
  }
}

GetLoadBalancerResponse Alibabacloud_ESA20240910::Client::getLoadBalancer(shared_ptr<GetLoadBalancerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLoadBalancerWithOptions(request, runtime);
}

GetManagedTransformResponse Alibabacloud_ESA20240910::Client::getManagedTransformWithOptions(shared_ptr<GetManagedTransformRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetManagedTransform"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetManagedTransformResponse(callApi(params, req, runtime));
  }
  else {
    return GetManagedTransformResponse(execute(params, req, runtime));
  }
}

GetManagedTransformResponse Alibabacloud_ESA20240910::Client::getManagedTransform(shared_ptr<GetManagedTransformRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getManagedTransformWithOptions(request, runtime);
}

GetNetworkOptimizationResponse Alibabacloud_ESA20240910::Client::getNetworkOptimizationWithOptions(shared_ptr<GetNetworkOptimizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNetworkOptimization"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetNetworkOptimizationResponse(callApi(params, req, runtime));
  }
  else {
    return GetNetworkOptimizationResponse(execute(params, req, runtime));
  }
}

GetNetworkOptimizationResponse Alibabacloud_ESA20240910::Client::getNetworkOptimization(shared_ptr<GetNetworkOptimizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNetworkOptimizationWithOptions(request, runtime);
}

GetOriginPoolResponse Alibabacloud_ESA20240910::Client::getOriginPoolWithOptions(shared_ptr<GetOriginPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOriginPool"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetOriginPoolResponse(callApi(params, req, runtime));
  }
  else {
    return GetOriginPoolResponse(execute(params, req, runtime));
  }
}

GetOriginPoolResponse Alibabacloud_ESA20240910::Client::getOriginPool(shared_ptr<GetOriginPoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOriginPoolWithOptions(request, runtime);
}

GetOriginProtectionResponse Alibabacloud_ESA20240910::Client::getOriginProtectionWithOptions(shared_ptr<GetOriginProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOriginProtection"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetOriginProtectionResponse(callApi(params, req, runtime));
  }
  else {
    return GetOriginProtectionResponse(execute(params, req, runtime));
  }
}

GetOriginProtectionResponse Alibabacloud_ESA20240910::Client::getOriginProtection(shared_ptr<GetOriginProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOriginProtectionWithOptions(request, runtime);
}

GetOriginRuleResponse Alibabacloud_ESA20240910::Client::getOriginRuleWithOptions(shared_ptr<GetOriginRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOriginRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetOriginRuleResponse(callApi(params, req, runtime));
  }
  else {
    return GetOriginRuleResponse(execute(params, req, runtime));
  }
}

GetOriginRuleResponse Alibabacloud_ESA20240910::Client::getOriginRule(shared_ptr<GetOriginRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOriginRuleWithOptions(request, runtime);
}

GetPageResponse Alibabacloud_ESA20240910::Client::getPageWithOptions(shared_ptr<GetPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPage"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetPageResponse(callApi(params, req, runtime));
  }
  else {
    return GetPageResponse(execute(params, req, runtime));
  }
}

GetPageResponse Alibabacloud_ESA20240910::Client::getPage(shared_ptr<GetPageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPageWithOptions(request, runtime);
}

GetPurgeQuotaResponse Alibabacloud_ESA20240910::Client::getPurgeQuotaWithOptions(shared_ptr<GetPurgeQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPurgeQuota"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetPurgeQuotaResponse(callApi(params, req, runtime));
  }
  else {
    return GetPurgeQuotaResponse(execute(params, req, runtime));
  }
}

GetPurgeQuotaResponse Alibabacloud_ESA20240910::Client::getPurgeQuota(shared_ptr<GetPurgeQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPurgeQuotaWithOptions(request, runtime);
}

GetRealtimeDeliveryFieldResponse Alibabacloud_ESA20240910::Client::getRealtimeDeliveryFieldWithOptions(shared_ptr<GetRealtimeDeliveryFieldRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRealtimeDeliveryField"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetRealtimeDeliveryFieldResponse(callApi(params, req, runtime));
  }
  else {
    return GetRealtimeDeliveryFieldResponse(execute(params, req, runtime));
  }
}

GetRealtimeDeliveryFieldResponse Alibabacloud_ESA20240910::Client::getRealtimeDeliveryField(shared_ptr<GetRealtimeDeliveryFieldRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRealtimeDeliveryFieldWithOptions(request, runtime);
}

GetRecordResponse Alibabacloud_ESA20240910::Client::getRecordWithOptions(shared_ptr<GetRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRecord"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetRecordResponse(callApi(params, req, runtime));
  }
  else {
    return GetRecordResponse(execute(params, req, runtime));
  }
}

GetRecordResponse Alibabacloud_ESA20240910::Client::getRecord(shared_ptr<GetRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRecordWithOptions(request, runtime);
}

GetRedirectRuleResponse Alibabacloud_ESA20240910::Client::getRedirectRuleWithOptions(shared_ptr<GetRedirectRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRedirectRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetRedirectRuleResponse(callApi(params, req, runtime));
  }
  else {
    return GetRedirectRuleResponse(execute(params, req, runtime));
  }
}

GetRedirectRuleResponse Alibabacloud_ESA20240910::Client::getRedirectRule(shared_ptr<GetRedirectRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRedirectRuleWithOptions(request, runtime);
}

GetRewriteUrlRuleResponse Alibabacloud_ESA20240910::Client::getRewriteUrlRuleWithOptions(shared_ptr<GetRewriteUrlRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRewriteUrlRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetRewriteUrlRuleResponse(callApi(params, req, runtime));
  }
  else {
    return GetRewriteUrlRuleResponse(execute(params, req, runtime));
  }
}

GetRewriteUrlRuleResponse Alibabacloud_ESA20240910::Client::getRewriteUrlRule(shared_ptr<GetRewriteUrlRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRewriteUrlRuleWithOptions(request, runtime);
}

GetRoutineResponse Alibabacloud_ESA20240910::Client::getRoutineWithOptions(shared_ptr<GetRoutineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRoutine"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetRoutineResponse(callApi(params, req, runtime));
  }
  else {
    return GetRoutineResponse(execute(params, req, runtime));
  }
}

GetRoutineResponse Alibabacloud_ESA20240910::Client::getRoutine(shared_ptr<GetRoutineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRoutineWithOptions(request, runtime);
}

GetRoutineStagingCodeUploadInfoResponse Alibabacloud_ESA20240910::Client::getRoutineStagingCodeUploadInfoWithOptions(shared_ptr<GetRoutineStagingCodeUploadInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->codeDescription)) {
    body->insert(pair<string, string>("CodeDescription", *request->codeDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRoutineStagingCodeUploadInfo"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetRoutineStagingCodeUploadInfoResponse(callApi(params, req, runtime));
  }
  else {
    return GetRoutineStagingCodeUploadInfoResponse(execute(params, req, runtime));
  }
}

GetRoutineStagingCodeUploadInfoResponse Alibabacloud_ESA20240910::Client::getRoutineStagingCodeUploadInfo(shared_ptr<GetRoutineStagingCodeUploadInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRoutineStagingCodeUploadInfoWithOptions(request, runtime);
}

GetRoutineStagingEnvIpResponse Alibabacloud_ESA20240910::Client::getRoutineStagingEnvIpWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRoutineStagingEnvIp"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetRoutineStagingEnvIpResponse(callApi(params, req, runtime));
  }
  else {
    return GetRoutineStagingEnvIpResponse(execute(params, req, runtime));
  }
}

GetRoutineStagingEnvIpResponse Alibabacloud_ESA20240910::Client::getRoutineStagingEnvIp() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRoutineStagingEnvIpWithOptions(runtime);
}

GetRoutineUserInfoResponse Alibabacloud_ESA20240910::Client::getRoutineUserInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRoutineUserInfo"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetRoutineUserInfoResponse(callApi(params, req, runtime));
  }
  else {
    return GetRoutineUserInfoResponse(execute(params, req, runtime));
  }
}

GetRoutineUserInfoResponse Alibabacloud_ESA20240910::Client::getRoutineUserInfo() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRoutineUserInfoWithOptions(runtime);
}

GetScheduledPreloadJobResponse Alibabacloud_ESA20240910::Client::getScheduledPreloadJobWithOptions(shared_ptr<GetScheduledPreloadJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetScheduledPreloadJob"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetScheduledPreloadJobResponse(callApi(params, req, runtime));
  }
  else {
    return GetScheduledPreloadJobResponse(execute(params, req, runtime));
  }
}

GetScheduledPreloadJobResponse Alibabacloud_ESA20240910::Client::getScheduledPreloadJob(shared_ptr<GetScheduledPreloadJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getScheduledPreloadJobWithOptions(request, runtime);
}

GetSeoBypassResponse Alibabacloud_ESA20240910::Client::getSeoBypassWithOptions(shared_ptr<GetSeoBypassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSeoBypass"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSeoBypassResponse(callApi(params, req, runtime));
  }
  else {
    return GetSeoBypassResponse(execute(params, req, runtime));
  }
}

GetSeoBypassResponse Alibabacloud_ESA20240910::Client::getSeoBypass(shared_ptr<GetSeoBypassRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSeoBypassWithOptions(request, runtime);
}

GetSiteResponse Alibabacloud_ESA20240910::Client::getSiteWithOptions(shared_ptr<GetSiteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSite"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSiteResponse(callApi(params, req, runtime));
  }
  else {
    return GetSiteResponse(execute(params, req, runtime));
  }
}

GetSiteResponse Alibabacloud_ESA20240910::Client::getSite(shared_ptr<GetSiteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSiteWithOptions(request, runtime);
}

GetSiteCurrentNSResponse Alibabacloud_ESA20240910::Client::getSiteCurrentNSWithOptions(shared_ptr<GetSiteCurrentNSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSiteCurrentNS"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSiteCurrentNSResponse(callApi(params, req, runtime));
  }
  else {
    return GetSiteCurrentNSResponse(execute(params, req, runtime));
  }
}

GetSiteCurrentNSResponse Alibabacloud_ESA20240910::Client::getSiteCurrentNS(shared_ptr<GetSiteCurrentNSRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSiteCurrentNSWithOptions(request, runtime);
}

GetSiteCustomLogResponse Alibabacloud_ESA20240910::Client::getSiteCustomLogWithOptions(shared_ptr<GetSiteCustomLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSiteCustomLog"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSiteCustomLogResponse(callApi(params, req, runtime));
  }
  else {
    return GetSiteCustomLogResponse(execute(params, req, runtime));
  }
}

GetSiteCustomLogResponse Alibabacloud_ESA20240910::Client::getSiteCustomLog(shared_ptr<GetSiteCustomLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSiteCustomLogWithOptions(request, runtime);
}

GetSiteDeliveryTaskResponse Alibabacloud_ESA20240910::Client::getSiteDeliveryTaskWithOptions(shared_ptr<GetSiteDeliveryTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSiteDeliveryTask"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSiteDeliveryTaskResponse(callApi(params, req, runtime));
  }
  else {
    return GetSiteDeliveryTaskResponse(execute(params, req, runtime));
  }
}

GetSiteDeliveryTaskResponse Alibabacloud_ESA20240910::Client::getSiteDeliveryTask(shared_ptr<GetSiteDeliveryTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSiteDeliveryTaskWithOptions(request, runtime);
}

GetSiteLogDeliveryQuotaResponse Alibabacloud_ESA20240910::Client::getSiteLogDeliveryQuotaWithOptions(shared_ptr<GetSiteLogDeliveryQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSiteLogDeliveryQuota"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSiteLogDeliveryQuotaResponse(callApi(params, req, runtime));
  }
  else {
    return GetSiteLogDeliveryQuotaResponse(execute(params, req, runtime));
  }
}

GetSiteLogDeliveryQuotaResponse Alibabacloud_ESA20240910::Client::getSiteLogDeliveryQuota(shared_ptr<GetSiteLogDeliveryQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSiteLogDeliveryQuotaWithOptions(request, runtime);
}

GetSiteNameExclusiveResponse Alibabacloud_ESA20240910::Client::getSiteNameExclusiveWithOptions(shared_ptr<GetSiteNameExclusiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSiteNameExclusive"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSiteNameExclusiveResponse(callApi(params, req, runtime));
  }
  else {
    return GetSiteNameExclusiveResponse(execute(params, req, runtime));
  }
}

GetSiteNameExclusiveResponse Alibabacloud_ESA20240910::Client::getSiteNameExclusive(shared_ptr<GetSiteNameExclusiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSiteNameExclusiveWithOptions(request, runtime);
}

GetSitePauseResponse Alibabacloud_ESA20240910::Client::getSitePauseWithOptions(shared_ptr<GetSitePauseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSitePause"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSitePauseResponse(callApi(params, req, runtime));
  }
  else {
    return GetSitePauseResponse(execute(params, req, runtime));
  }
}

GetSitePauseResponse Alibabacloud_ESA20240910::Client::getSitePause(shared_ptr<GetSitePauseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSitePauseWithOptions(request, runtime);
}

GetSiteWafSettingsResponse Alibabacloud_ESA20240910::Client::getSiteWafSettingsWithOptions(shared_ptr<GetSiteWafSettingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteVersion)) {
    query->insert(pair<string, long>("SiteVersion", *request->siteVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSiteWafSettings"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSiteWafSettingsResponse(callApi(params, req, runtime));
  }
  else {
    return GetSiteWafSettingsResponse(execute(params, req, runtime));
  }
}

GetSiteWafSettingsResponse Alibabacloud_ESA20240910::Client::getSiteWafSettings(shared_ptr<GetSiteWafSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSiteWafSettingsWithOptions(request, runtime);
}

GetTieredCacheResponse Alibabacloud_ESA20240910::Client::getTieredCacheWithOptions(shared_ptr<GetTieredCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTieredCache"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetTieredCacheResponse(callApi(params, req, runtime));
  }
  else {
    return GetTieredCacheResponse(execute(params, req, runtime));
  }
}

GetTieredCacheResponse Alibabacloud_ESA20240910::Client::getTieredCache(shared_ptr<GetTieredCacheRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTieredCacheWithOptions(request, runtime);
}

GetUploadTaskResponse Alibabacloud_ESA20240910::Client::getUploadTaskWithOptions(shared_ptr<GetUploadTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUploadTask"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetUploadTaskResponse(callApi(params, req, runtime));
  }
  else {
    return GetUploadTaskResponse(execute(params, req, runtime));
  }
}

GetUploadTaskResponse Alibabacloud_ESA20240910::Client::getUploadTask(shared_ptr<GetUploadTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUploadTaskWithOptions(request, runtime);
}

GetUserDeliveryTaskResponse Alibabacloud_ESA20240910::Client::getUserDeliveryTaskWithOptions(shared_ptr<GetUserDeliveryTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserDeliveryTask"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetUserDeliveryTaskResponse(callApi(params, req, runtime));
  }
  else {
    return GetUserDeliveryTaskResponse(execute(params, req, runtime));
  }
}

GetUserDeliveryTaskResponse Alibabacloud_ESA20240910::Client::getUserDeliveryTask(shared_ptr<GetUserDeliveryTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserDeliveryTaskWithOptions(request, runtime);
}

GetUserLogDeliveryQuotaResponse Alibabacloud_ESA20240910::Client::getUserLogDeliveryQuotaWithOptions(shared_ptr<GetUserLogDeliveryQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserLogDeliveryQuota"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetUserLogDeliveryQuotaResponse(callApi(params, req, runtime));
  }
  else {
    return GetUserLogDeliveryQuotaResponse(execute(params, req, runtime));
  }
}

GetUserLogDeliveryQuotaResponse Alibabacloud_ESA20240910::Client::getUserLogDeliveryQuota(shared_ptr<GetUserLogDeliveryQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserLogDeliveryQuotaWithOptions(request, runtime);
}

GetWafBotAppKeyResponse Alibabacloud_ESA20240910::Client::getWafBotAppKeyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWafBotAppKey"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetWafBotAppKeyResponse(callApi(params, req, runtime));
  }
  else {
    return GetWafBotAppKeyResponse(execute(params, req, runtime));
  }
}

GetWafBotAppKeyResponse Alibabacloud_ESA20240910::Client::getWafBotAppKey() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWafBotAppKeyWithOptions(runtime);
}

GetWafFilterResponse Alibabacloud_ESA20240910::Client::getWafFilterWithOptions(shared_ptr<GetWafFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->phase)) {
    query->insert(pair<string, string>("Phase", *request->phase));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->target)) {
    query->insert(pair<string, string>("Target", *request->target));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWafFilter"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetWafFilterResponse(callApi(params, req, runtime));
  }
  else {
    return GetWafFilterResponse(execute(params, req, runtime));
  }
}

GetWafFilterResponse Alibabacloud_ESA20240910::Client::getWafFilter(shared_ptr<GetWafFilterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWafFilterWithOptions(request, runtime);
}

GetWafQuotaResponse Alibabacloud_ESA20240910::Client::getWafQuotaWithOptions(shared_ptr<GetWafQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->paths)) {
    query->insert(pair<string, string>("Paths", *request->paths));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWafQuota"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetWafQuotaResponse(callApi(params, req, runtime));
  }
  else {
    return GetWafQuotaResponse(execute(params, req, runtime));
  }
}

GetWafQuotaResponse Alibabacloud_ESA20240910::Client::getWafQuota(shared_ptr<GetWafQuotaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWafQuotaWithOptions(request, runtime);
}

ListCacheReserveInstancesResponse Alibabacloud_ESA20240910::Client::listCacheReserveInstancesWithOptions(shared_ptr<ListCacheReserveInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCacheReserveInstances"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListCacheReserveInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return ListCacheReserveInstancesResponse(execute(params, req, runtime));
  }
}

ListCacheReserveInstancesResponse Alibabacloud_ESA20240910::Client::listCacheReserveInstances(shared_ptr<ListCacheReserveInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCacheReserveInstancesWithOptions(request, runtime);
}

ListCacheRulesResponse Alibabacloud_ESA20240910::Client::listCacheRulesWithOptions(shared_ptr<ListCacheRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCacheRules"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListCacheRulesResponse(callApi(params, req, runtime));
  }
  else {
    return ListCacheRulesResponse(execute(params, req, runtime));
  }
}

ListCacheRulesResponse Alibabacloud_ESA20240910::Client::listCacheRules(shared_ptr<ListCacheRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCacheRulesWithOptions(request, runtime);
}

ListCertificatesResponse Alibabacloud_ESA20240910::Client::listCertificatesWithOptions(shared_ptr<ListCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCertificates"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListCertificatesResponse(callApi(params, req, runtime));
  }
  else {
    return ListCertificatesResponse(execute(params, req, runtime));
  }
}

ListCertificatesResponse Alibabacloud_ESA20240910::Client::listCertificates(shared_ptr<ListCertificatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCertificatesWithOptions(request, runtime);
}

ListCiphersResponse Alibabacloud_ESA20240910::Client::listCiphersWithOptions(shared_ptr<ListCiphersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCiphers"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListCiphersResponse(callApi(params, req, runtime));
  }
  else {
    return ListCiphersResponse(execute(params, req, runtime));
  }
}

ListCiphersResponse Alibabacloud_ESA20240910::Client::listCiphers(shared_ptr<ListCiphersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCiphersWithOptions(request, runtime);
}

ListClientCaCertificatesResponse Alibabacloud_ESA20240910::Client::listClientCaCertificatesWithOptions(shared_ptr<ListClientCaCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClientCaCertificates"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListClientCaCertificatesResponse(callApi(params, req, runtime));
  }
  else {
    return ListClientCaCertificatesResponse(execute(params, req, runtime));
  }
}

ListClientCaCertificatesResponse Alibabacloud_ESA20240910::Client::listClientCaCertificates(shared_ptr<ListClientCaCertificatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClientCaCertificatesWithOptions(request, runtime);
}

ListClientCertificatesResponse Alibabacloud_ESA20240910::Client::listClientCertificatesWithOptions(shared_ptr<ListClientCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListClientCertificates"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListClientCertificatesResponse(callApi(params, req, runtime));
  }
  else {
    return ListClientCertificatesResponse(execute(params, req, runtime));
  }
}

ListClientCertificatesResponse Alibabacloud_ESA20240910::Client::listClientCertificates(shared_ptr<ListClientCertificatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listClientCertificatesWithOptions(request, runtime);
}

ListCompressionRulesResponse Alibabacloud_ESA20240910::Client::listCompressionRulesWithOptions(shared_ptr<ListCompressionRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCompressionRules"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListCompressionRulesResponse(callApi(params, req, runtime));
  }
  else {
    return ListCompressionRulesResponse(execute(params, req, runtime));
  }
}

ListCompressionRulesResponse Alibabacloud_ESA20240910::Client::listCompressionRules(shared_ptr<ListCompressionRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCompressionRulesWithOptions(request, runtime);
}

ListEdgeContainerAppRecordsResponse Alibabacloud_ESA20240910::Client::listEdgeContainerAppRecordsWithOptions(shared_ptr<ListEdgeContainerAppRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEdgeContainerAppRecords"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListEdgeContainerAppRecordsResponse(callApi(params, req, runtime));
  }
  else {
    return ListEdgeContainerAppRecordsResponse(execute(params, req, runtime));
  }
}

ListEdgeContainerAppRecordsResponse Alibabacloud_ESA20240910::Client::listEdgeContainerAppRecords(shared_ptr<ListEdgeContainerAppRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEdgeContainerAppRecordsWithOptions(request, runtime);
}

ListEdgeContainerAppVersionsResponse Alibabacloud_ESA20240910::Client::listEdgeContainerAppVersionsWithOptions(shared_ptr<ListEdgeContainerAppVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEdgeContainerAppVersions"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListEdgeContainerAppVersionsResponse(callApi(params, req, runtime));
  }
  else {
    return ListEdgeContainerAppVersionsResponse(execute(params, req, runtime));
  }
}

ListEdgeContainerAppVersionsResponse Alibabacloud_ESA20240910::Client::listEdgeContainerAppVersions(shared_ptr<ListEdgeContainerAppVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEdgeContainerAppVersionsWithOptions(request, runtime);
}

ListEdgeContainerAppsResponse Alibabacloud_ESA20240910::Client::listEdgeContainerAppsWithOptions(shared_ptr<ListEdgeContainerAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orderKey)) {
    query->insert(pair<string, string>("OrderKey", *request->orderKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKey)) {
    query->insert(pair<string, string>("SearchKey", *request->searchKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchType)) {
    query->insert(pair<string, string>("SearchType", *request->searchType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEdgeContainerApps"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListEdgeContainerAppsResponse(callApi(params, req, runtime));
  }
  else {
    return ListEdgeContainerAppsResponse(execute(params, req, runtime));
  }
}

ListEdgeContainerAppsResponse Alibabacloud_ESA20240910::Client::listEdgeContainerApps(shared_ptr<ListEdgeContainerAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEdgeContainerAppsWithOptions(request, runtime);
}

ListEdgeContainerRecordsResponse Alibabacloud_ESA20240910::Client::listEdgeContainerRecordsWithOptions(shared_ptr<ListEdgeContainerRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEdgeContainerRecords"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListEdgeContainerRecordsResponse(callApi(params, req, runtime));
  }
  else {
    return ListEdgeContainerRecordsResponse(execute(params, req, runtime));
  }
}

ListEdgeContainerRecordsResponse Alibabacloud_ESA20240910::Client::listEdgeContainerRecords(shared_ptr<ListEdgeContainerRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEdgeContainerRecordsWithOptions(request, runtime);
}

ListEdgeRoutinePlansResponse Alibabacloud_ESA20240910::Client::listEdgeRoutinePlansWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEdgeRoutinePlans"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListEdgeRoutinePlansResponse(callApi(params, req, runtime));
  }
  else {
    return ListEdgeRoutinePlansResponse(execute(params, req, runtime));
  }
}

ListEdgeRoutinePlansResponse Alibabacloud_ESA20240910::Client::listEdgeRoutinePlans() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEdgeRoutinePlansWithOptions(runtime);
}

ListEdgeRoutineRecordsResponse Alibabacloud_ESA20240910::Client::listEdgeRoutineRecordsWithOptions(shared_ptr<ListEdgeRoutineRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEdgeRoutineRecords"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListEdgeRoutineRecordsResponse(callApi(params, req, runtime));
  }
  else {
    return ListEdgeRoutineRecordsResponse(execute(params, req, runtime));
  }
}

ListEdgeRoutineRecordsResponse Alibabacloud_ESA20240910::Client::listEdgeRoutineRecords(shared_ptr<ListEdgeRoutineRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEdgeRoutineRecordsWithOptions(request, runtime);
}

ListHttpRequestHeaderModificationRulesResponse Alibabacloud_ESA20240910::Client::listHttpRequestHeaderModificationRulesWithOptions(shared_ptr<ListHttpRequestHeaderModificationRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHttpRequestHeaderModificationRules"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHttpRequestHeaderModificationRulesResponse(callApi(params, req, runtime));
  }
  else {
    return ListHttpRequestHeaderModificationRulesResponse(execute(params, req, runtime));
  }
}

ListHttpRequestHeaderModificationRulesResponse Alibabacloud_ESA20240910::Client::listHttpRequestHeaderModificationRules(shared_ptr<ListHttpRequestHeaderModificationRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHttpRequestHeaderModificationRulesWithOptions(request, runtime);
}

ListHttpResponseHeaderModificationRulesResponse Alibabacloud_ESA20240910::Client::listHttpResponseHeaderModificationRulesWithOptions(shared_ptr<ListHttpResponseHeaderModificationRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHttpResponseHeaderModificationRules"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHttpResponseHeaderModificationRulesResponse(callApi(params, req, runtime));
  }
  else {
    return ListHttpResponseHeaderModificationRulesResponse(execute(params, req, runtime));
  }
}

ListHttpResponseHeaderModificationRulesResponse Alibabacloud_ESA20240910::Client::listHttpResponseHeaderModificationRules(shared_ptr<ListHttpResponseHeaderModificationRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHttpResponseHeaderModificationRulesWithOptions(request, runtime);
}

ListHttpsApplicationConfigurationsResponse Alibabacloud_ESA20240910::Client::listHttpsApplicationConfigurationsWithOptions(shared_ptr<ListHttpsApplicationConfigurationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHttpsApplicationConfigurations"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHttpsApplicationConfigurationsResponse(callApi(params, req, runtime));
  }
  else {
    return ListHttpsApplicationConfigurationsResponse(execute(params, req, runtime));
  }
}

ListHttpsApplicationConfigurationsResponse Alibabacloud_ESA20240910::Client::listHttpsApplicationConfigurations(shared_ptr<ListHttpsApplicationConfigurationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHttpsApplicationConfigurationsWithOptions(request, runtime);
}

ListHttpsBasicConfigurationsResponse Alibabacloud_ESA20240910::Client::listHttpsBasicConfigurationsWithOptions(shared_ptr<ListHttpsBasicConfigurationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHttpsBasicConfigurations"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListHttpsBasicConfigurationsResponse(callApi(params, req, runtime));
  }
  else {
    return ListHttpsBasicConfigurationsResponse(execute(params, req, runtime));
  }
}

ListHttpsBasicConfigurationsResponse Alibabacloud_ESA20240910::Client::listHttpsBasicConfigurations(shared_ptr<ListHttpsBasicConfigurationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listHttpsBasicConfigurationsWithOptions(request, runtime);
}

ListImageTransformsResponse Alibabacloud_ESA20240910::Client::listImageTransformsWithOptions(shared_ptr<ListImageTransformsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListImageTransforms"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListImageTransformsResponse(callApi(params, req, runtime));
  }
  else {
    return ListImageTransformsResponse(execute(params, req, runtime));
  }
}

ListImageTransformsResponse Alibabacloud_ESA20240910::Client::listImageTransforms(shared_ptr<ListImageTransformsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listImageTransformsWithOptions(request, runtime);
}

ListInstanceQuotasResponse Alibabacloud_ESA20240910::Client::listInstanceQuotasWithOptions(shared_ptr<ListInstanceQuotasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstanceQuotas"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListInstanceQuotasResponse(callApi(params, req, runtime));
  }
  else {
    return ListInstanceQuotasResponse(execute(params, req, runtime));
  }
}

ListInstanceQuotasResponse Alibabacloud_ESA20240910::Client::listInstanceQuotas(shared_ptr<ListInstanceQuotasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstanceQuotasWithOptions(request, runtime);
}

ListInstanceQuotasWithUsageResponse Alibabacloud_ESA20240910::Client::listInstanceQuotasWithUsageWithOptions(shared_ptr<ListInstanceQuotasWithUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstanceQuotasWithUsage"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListInstanceQuotasWithUsageResponse(callApi(params, req, runtime));
  }
  else {
    return ListInstanceQuotasWithUsageResponse(execute(params, req, runtime));
  }
}

ListInstanceQuotasWithUsageResponse Alibabacloud_ESA20240910::Client::listInstanceQuotasWithUsage(shared_ptr<ListInstanceQuotasWithUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listInstanceQuotasWithUsageWithOptions(request, runtime);
}

ListKvsResponse Alibabacloud_ESA20240910::Client::listKvsWithOptions(shared_ptr<ListKvsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListKvs"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListKvsResponse(callApi(params, req, runtime));
  }
  else {
    return ListKvsResponse(execute(params, req, runtime));
  }
}

ListKvsResponse Alibabacloud_ESA20240910::Client::listKvs(shared_ptr<ListKvsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listKvsWithOptions(request, runtime);
}

ListListsResponse Alibabacloud_ESA20240910::Client::listListsWithOptions(shared_ptr<ListListsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListListsShrinkRequest> request = make_shared<ListListsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListListsRequestQueryArgs>(tmpReq->queryArgs)) {
    request->queryArgsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->queryArgs, make_shared<string>("QueryArgs"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryArgsShrink)) {
    query->insert(pair<string, string>("QueryArgs", *request->queryArgsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLists"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListListsResponse(callApi(params, req, runtime));
  }
  else {
    return ListListsResponse(execute(params, req, runtime));
  }
}

ListListsResponse Alibabacloud_ESA20240910::Client::listLists(shared_ptr<ListListsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listListsWithOptions(request, runtime);
}

ListLoadBalancerOriginStatusResponse Alibabacloud_ESA20240910::Client::listLoadBalancerOriginStatusWithOptions(shared_ptr<ListLoadBalancerOriginStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLoadBalancerOriginStatus"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListLoadBalancerOriginStatusResponse(callApi(params, req, runtime));
  }
  else {
    return ListLoadBalancerOriginStatusResponse(execute(params, req, runtime));
  }
}

ListLoadBalancerOriginStatusResponse Alibabacloud_ESA20240910::Client::listLoadBalancerOriginStatus(shared_ptr<ListLoadBalancerOriginStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLoadBalancerOriginStatusWithOptions(request, runtime);
}

ListLoadBalancerRegionsResponse Alibabacloud_ESA20240910::Client::listLoadBalancerRegionsWithOptions(shared_ptr<ListLoadBalancerRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLoadBalancerRegions"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListLoadBalancerRegionsResponse(callApi(params, req, runtime));
  }
  else {
    return ListLoadBalancerRegionsResponse(execute(params, req, runtime));
  }
}

ListLoadBalancerRegionsResponse Alibabacloud_ESA20240910::Client::listLoadBalancerRegions(shared_ptr<ListLoadBalancerRegionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLoadBalancerRegionsWithOptions(request, runtime);
}

ListLoadBalancersResponse Alibabacloud_ESA20240910::Client::listLoadBalancersWithOptions(shared_ptr<ListLoadBalancersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLoadBalancers"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListLoadBalancersResponse(callApi(params, req, runtime));
  }
  else {
    return ListLoadBalancersResponse(execute(params, req, runtime));
  }
}

ListLoadBalancersResponse Alibabacloud_ESA20240910::Client::listLoadBalancers(shared_ptr<ListLoadBalancersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLoadBalancersWithOptions(request, runtime);
}

ListManagedRulesGroupsResponse Alibabacloud_ESA20240910::Client::listManagedRulesGroupsWithOptions(shared_ptr<ListManagedRulesGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListManagedRulesGroups"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListManagedRulesGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return ListManagedRulesGroupsResponse(execute(params, req, runtime));
  }
}

ListManagedRulesGroupsResponse Alibabacloud_ESA20240910::Client::listManagedRulesGroups(shared_ptr<ListManagedRulesGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listManagedRulesGroupsWithOptions(request, runtime);
}

ListNetworkOptimizationsResponse Alibabacloud_ESA20240910::Client::listNetworkOptimizationsWithOptions(shared_ptr<ListNetworkOptimizationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNetworkOptimizations"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListNetworkOptimizationsResponse(callApi(params, req, runtime));
  }
  else {
    return ListNetworkOptimizationsResponse(execute(params, req, runtime));
  }
}

ListNetworkOptimizationsResponse Alibabacloud_ESA20240910::Client::listNetworkOptimizations(shared_ptr<ListNetworkOptimizationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNetworkOptimizationsWithOptions(request, runtime);
}

ListOriginPoolsResponse Alibabacloud_ESA20240910::Client::listOriginPoolsWithOptions(shared_ptr<ListOriginPoolsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOriginPools"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListOriginPoolsResponse(callApi(params, req, runtime));
  }
  else {
    return ListOriginPoolsResponse(execute(params, req, runtime));
  }
}

ListOriginPoolsResponse Alibabacloud_ESA20240910::Client::listOriginPools(shared_ptr<ListOriginPoolsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOriginPoolsWithOptions(request, runtime);
}

ListOriginRulesResponse Alibabacloud_ESA20240910::Client::listOriginRulesWithOptions(shared_ptr<ListOriginRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOriginRules"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListOriginRulesResponse(callApi(params, req, runtime));
  }
  else {
    return ListOriginRulesResponse(execute(params, req, runtime));
  }
}

ListOriginRulesResponse Alibabacloud_ESA20240910::Client::listOriginRules(shared_ptr<ListOriginRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listOriginRulesWithOptions(request, runtime);
}

ListPagesResponse Alibabacloud_ESA20240910::Client::listPagesWithOptions(shared_ptr<ListPagesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListPagesShrinkRequest> request = make_shared<ListPagesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListPagesRequestQueryArgs>(tmpReq->queryArgs)) {
    request->queryArgsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->queryArgs, make_shared<string>("QueryArgs"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryArgsShrink)) {
    query->insert(pair<string, string>("QueryArgs", *request->queryArgsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPages"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListPagesResponse(callApi(params, req, runtime));
  }
  else {
    return ListPagesResponse(execute(params, req, runtime));
  }
}

ListPagesResponse Alibabacloud_ESA20240910::Client::listPages(shared_ptr<ListPagesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPagesWithOptions(request, runtime);
}

ListRecordsResponse Alibabacloud_ESA20240910::Client::listRecordsWithOptions(shared_ptr<ListRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRecords"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListRecordsResponse(callApi(params, req, runtime));
  }
  else {
    return ListRecordsResponse(execute(params, req, runtime));
  }
}

ListRecordsResponse Alibabacloud_ESA20240910::Client::listRecords(shared_ptr<ListRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRecordsWithOptions(request, runtime);
}

ListRedirectRulesResponse Alibabacloud_ESA20240910::Client::listRedirectRulesWithOptions(shared_ptr<ListRedirectRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRedirectRules"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListRedirectRulesResponse(callApi(params, req, runtime));
  }
  else {
    return ListRedirectRulesResponse(execute(params, req, runtime));
  }
}

ListRedirectRulesResponse Alibabacloud_ESA20240910::Client::listRedirectRules(shared_ptr<ListRedirectRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRedirectRulesWithOptions(request, runtime);
}

ListRewriteUrlRulesResponse Alibabacloud_ESA20240910::Client::listRewriteUrlRulesWithOptions(shared_ptr<ListRewriteUrlRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRewriteUrlRules"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListRewriteUrlRulesResponse(callApi(params, req, runtime));
  }
  else {
    return ListRewriteUrlRulesResponse(execute(params, req, runtime));
  }
}

ListRewriteUrlRulesResponse Alibabacloud_ESA20240910::Client::listRewriteUrlRules(shared_ptr<ListRewriteUrlRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRewriteUrlRulesWithOptions(request, runtime);
}

ListRoutineCanaryAreasResponse Alibabacloud_ESA20240910::Client::listRoutineCanaryAreasWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRoutineCanaryAreas"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListRoutineCanaryAreasResponse(callApi(params, req, runtime));
  }
  else {
    return ListRoutineCanaryAreasResponse(execute(params, req, runtime));
  }
}

ListRoutineCanaryAreasResponse Alibabacloud_ESA20240910::Client::listRoutineCanaryAreas() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRoutineCanaryAreasWithOptions(runtime);
}

ListRoutineOptionalSpecsResponse Alibabacloud_ESA20240910::Client::listRoutineOptionalSpecsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRoutineOptionalSpecs"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListRoutineOptionalSpecsResponse(callApi(params, req, runtime));
  }
  else {
    return ListRoutineOptionalSpecsResponse(execute(params, req, runtime));
  }
}

ListRoutineOptionalSpecsResponse Alibabacloud_ESA20240910::Client::listRoutineOptionalSpecs() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRoutineOptionalSpecsWithOptions(runtime);
}

ListScheduledPreloadExecutionsResponse Alibabacloud_ESA20240910::Client::listScheduledPreloadExecutionsWithOptions(shared_ptr<ListScheduledPreloadExecutionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListScheduledPreloadExecutions"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListScheduledPreloadExecutionsResponse(callApi(params, req, runtime));
  }
  else {
    return ListScheduledPreloadExecutionsResponse(execute(params, req, runtime));
  }
}

ListScheduledPreloadExecutionsResponse Alibabacloud_ESA20240910::Client::listScheduledPreloadExecutions(shared_ptr<ListScheduledPreloadExecutionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listScheduledPreloadExecutionsWithOptions(request, runtime);
}

ListScheduledPreloadJobsResponse Alibabacloud_ESA20240910::Client::listScheduledPreloadJobsWithOptions(shared_ptr<ListScheduledPreloadJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListScheduledPreloadJobs"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListScheduledPreloadJobsResponse(callApi(params, req, runtime));
  }
  else {
    return ListScheduledPreloadJobsResponse(execute(params, req, runtime));
  }
}

ListScheduledPreloadJobsResponse Alibabacloud_ESA20240910::Client::listScheduledPreloadJobs(shared_ptr<ListScheduledPreloadJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listScheduledPreloadJobsWithOptions(request, runtime);
}

ListSiteDeliveryTasksResponse Alibabacloud_ESA20240910::Client::listSiteDeliveryTasksWithOptions(shared_ptr<ListSiteDeliveryTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSiteDeliveryTasks"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSiteDeliveryTasksResponse(callApi(params, req, runtime));
  }
  else {
    return ListSiteDeliveryTasksResponse(execute(params, req, runtime));
  }
}

ListSiteDeliveryTasksResponse Alibabacloud_ESA20240910::Client::listSiteDeliveryTasks(shared_ptr<ListSiteDeliveryTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSiteDeliveryTasksWithOptions(request, runtime);
}

ListSitesResponse Alibabacloud_ESA20240910::Client::listSitesWithOptions(shared_ptr<ListSitesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListSitesShrinkRequest> request = make_shared<ListSitesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<ListSitesRequestTagFilter>>(tmpReq->tagFilter)) {
    request->tagFilterShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tagFilter, make_shared<string>("TagFilter"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSites"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSitesResponse(callApi(params, req, runtime));
  }
  else {
    return ListSitesResponse(execute(params, req, runtime));
  }
}

ListSitesResponse Alibabacloud_ESA20240910::Client::listSites(shared_ptr<ListSitesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSitesWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_ESA20240910::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxItem)) {
    query->insert(pair<string, long>("MaxItem", *request->maxItem));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTagResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return ListTagResourcesResponse(execute(params, req, runtime));
  }
}

ListTagResourcesResponse Alibabacloud_ESA20240910::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ListUploadTasksResponse Alibabacloud_ESA20240910::Client::listUploadTasksWithOptions(shared_ptr<ListUploadTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUploadTasks"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListUploadTasksResponse(callApi(params, req, runtime));
  }
  else {
    return ListUploadTasksResponse(execute(params, req, runtime));
  }
}

ListUploadTasksResponse Alibabacloud_ESA20240910::Client::listUploadTasks(shared_ptr<ListUploadTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUploadTasksWithOptions(request, runtime);
}

ListUserDeliveryTasksResponse Alibabacloud_ESA20240910::Client::listUserDeliveryTasksWithOptions(shared_ptr<ListUserDeliveryTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserDeliveryTasks"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListUserDeliveryTasksResponse(callApi(params, req, runtime));
  }
  else {
    return ListUserDeliveryTasksResponse(execute(params, req, runtime));
  }
}

ListUserDeliveryTasksResponse Alibabacloud_ESA20240910::Client::listUserDeliveryTasks(shared_ptr<ListUserDeliveryTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserDeliveryTasksWithOptions(request, runtime);
}

ListUserRatePlanInstancesResponse Alibabacloud_ESA20240910::Client::listUserRatePlanInstancesWithOptions(shared_ptr<ListUserRatePlanInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserRatePlanInstances"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListUserRatePlanInstancesResponse(callApi(params, req, runtime));
  }
  else {
    return ListUserRatePlanInstancesResponse(execute(params, req, runtime));
  }
}

ListUserRatePlanInstancesResponse Alibabacloud_ESA20240910::Client::listUserRatePlanInstances(shared_ptr<ListUserRatePlanInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserRatePlanInstancesWithOptions(request, runtime);
}

ListWafManagedRulesResponse Alibabacloud_ESA20240910::Client::listWafManagedRulesWithOptions(shared_ptr<ListWafManagedRulesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListWafManagedRulesShrinkRequest> request = make_shared<ListWafManagedRulesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListWafManagedRulesRequestQueryArgs>(tmpReq->queryArgs)) {
    request->queryArgsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->queryArgs, make_shared<string>("QueryArgs"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->attackType)) {
    query->insert(pair<string, long>("AttackType", *request->attackType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->protectionLevel)) {
    query->insert(pair<string, long>("ProtectionLevel", *request->protectionLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryArgsShrink)) {
    query->insert(pair<string, string>("QueryArgs", *request->queryArgsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWafManagedRules"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListWafManagedRulesResponse(callApi(params, req, runtime));
  }
  else {
    return ListWafManagedRulesResponse(execute(params, req, runtime));
  }
}

ListWafManagedRulesResponse Alibabacloud_ESA20240910::Client::listWafManagedRules(shared_ptr<ListWafManagedRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWafManagedRulesWithOptions(request, runtime);
}

ListWafPhasesResponse Alibabacloud_ESA20240910::Client::listWafPhasesWithOptions(shared_ptr<ListWafPhasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteVersion)) {
    query->insert(pair<string, long>("SiteVersion", *request->siteVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWafPhases"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListWafPhasesResponse(callApi(params, req, runtime));
  }
  else {
    return ListWafPhasesResponse(execute(params, req, runtime));
  }
}

ListWafPhasesResponse Alibabacloud_ESA20240910::Client::listWafPhases(shared_ptr<ListWafPhasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWafPhasesWithOptions(request, runtime);
}

ListWafTemplateRulesResponse Alibabacloud_ESA20240910::Client::listWafTemplateRulesWithOptions(shared_ptr<ListWafTemplateRulesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListWafTemplateRulesShrinkRequest> request = make_shared<ListWafTemplateRulesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ListWafTemplateRulesRequestQueryArgs>(tmpReq->queryArgs)) {
    request->queryArgsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->queryArgs, make_shared<string>("QueryArgs"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->phase)) {
    query->insert(pair<string, string>("Phase", *request->phase));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryArgsShrink)) {
    query->insert(pair<string, string>("QueryArgs", *request->queryArgsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWafTemplateRules"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListWafTemplateRulesResponse(callApi(params, req, runtime));
  }
  else {
    return ListWafTemplateRulesResponse(execute(params, req, runtime));
  }
}

ListWafTemplateRulesResponse Alibabacloud_ESA20240910::Client::listWafTemplateRules(shared_ptr<ListWafTemplateRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWafTemplateRulesWithOptions(request, runtime);
}

ListWafUsageOfRulesResponse Alibabacloud_ESA20240910::Client::listWafUsageOfRulesWithOptions(shared_ptr<ListWafUsageOfRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->phase)) {
    query->insert(pair<string, string>("Phase", *request->phase));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWafUsageOfRules"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListWafUsageOfRulesResponse(callApi(params, req, runtime));
  }
  else {
    return ListWafUsageOfRulesResponse(execute(params, req, runtime));
  }
}

ListWafUsageOfRulesResponse Alibabacloud_ESA20240910::Client::listWafUsageOfRules(shared_ptr<ListWafUsageOfRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWafUsageOfRulesWithOptions(request, runtime);
}

ListWaitingRoomEventsResponse Alibabacloud_ESA20240910::Client::listWaitingRoomEventsWithOptions(shared_ptr<ListWaitingRoomEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWaitingRoomEvents"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListWaitingRoomEventsResponse(callApi(params, req, runtime));
  }
  else {
    return ListWaitingRoomEventsResponse(execute(params, req, runtime));
  }
}

ListWaitingRoomEventsResponse Alibabacloud_ESA20240910::Client::listWaitingRoomEvents(shared_ptr<ListWaitingRoomEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWaitingRoomEventsWithOptions(request, runtime);
}

ListWaitingRoomRulesResponse Alibabacloud_ESA20240910::Client::listWaitingRoomRulesWithOptions(shared_ptr<ListWaitingRoomRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWaitingRoomRules"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListWaitingRoomRulesResponse(callApi(params, req, runtime));
  }
  else {
    return ListWaitingRoomRulesResponse(execute(params, req, runtime));
  }
}

ListWaitingRoomRulesResponse Alibabacloud_ESA20240910::Client::listWaitingRoomRules(shared_ptr<ListWaitingRoomRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWaitingRoomRulesWithOptions(request, runtime);
}

ListWaitingRoomsResponse Alibabacloud_ESA20240910::Client::listWaitingRoomsWithOptions(shared_ptr<ListWaitingRoomsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListWaitingRooms"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListWaitingRoomsResponse(callApi(params, req, runtime));
  }
  else {
    return ListWaitingRoomsResponse(execute(params, req, runtime));
  }
}

ListWaitingRoomsResponse Alibabacloud_ESA20240910::Client::listWaitingRooms(shared_ptr<ListWaitingRoomsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listWaitingRoomsWithOptions(request, runtime);
}

PreloadCachesResponse Alibabacloud_ESA20240910::Client::preloadCachesWithOptions(shared_ptr<PreloadCachesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PreloadCachesShrinkRequest> request = make_shared<PreloadCachesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->content)) {
    request->contentShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->content, make_shared<string>("Content"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->headers)) {
    request->headersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->headers, make_shared<string>("Headers"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contentShrink)) {
    query->insert(pair<string, string>("Content", *request->contentShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->headersShrink)) {
    query->insert(pair<string, string>("Headers", *request->headersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PreloadCaches"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PreloadCachesResponse(callApi(params, req, runtime));
  }
  else {
    return PreloadCachesResponse(execute(params, req, runtime));
  }
}

PreloadCachesResponse Alibabacloud_ESA20240910::Client::preloadCaches(shared_ptr<PreloadCachesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return preloadCachesWithOptions(request, runtime);
}

PublishEdgeContainerAppVersionResponse Alibabacloud_ESA20240910::Client::publishEdgeContainerAppVersionWithOptions(shared_ptr<PublishEdgeContainerAppVersionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PublishEdgeContainerAppVersionShrinkRequest> request = make_shared<PublishEdgeContainerAppVersionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->regions)) {
    request->regionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->regions, make_shared<string>("Regions"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->fullRelease)) {
    query->insert(pair<string, bool>("FullRelease", *request->fullRelease));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publishType)) {
    query->insert(pair<string, string>("PublishType", *request->publishType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionsShrink)) {
    query->insert(pair<string, string>("Regions", *request->regionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->percentage)) {
    body->insert(pair<string, long>("Percentage", *request->percentage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->publishEnv)) {
    body->insert(pair<string, string>("PublishEnv", *request->publishEnv));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarks)) {
    body->insert(pair<string, string>("Remarks", *request->remarks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishEdgeContainerAppVersion"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PublishEdgeContainerAppVersionResponse(callApi(params, req, runtime));
  }
  else {
    return PublishEdgeContainerAppVersionResponse(execute(params, req, runtime));
  }
}

PublishEdgeContainerAppVersionResponse Alibabacloud_ESA20240910::Client::publishEdgeContainerAppVersion(shared_ptr<PublishEdgeContainerAppVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishEdgeContainerAppVersionWithOptions(request, runtime);
}

PublishRoutineCodeVersionResponse Alibabacloud_ESA20240910::Client::publishRoutineCodeVersionWithOptions(shared_ptr<PublishRoutineCodeVersionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PublishRoutineCodeVersionShrinkRequest> request = make_shared<PublishRoutineCodeVersionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->canaryAreaList)) {
    request->canaryAreaListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->canaryAreaList, make_shared<string>("CanaryAreaList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->canaryAreaListShrink)) {
    body->insert(pair<string, string>("CanaryAreaList", *request->canaryAreaListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->canaryCodeVersion)) {
    body->insert(pair<string, string>("CanaryCodeVersion", *request->canaryCodeVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->codeVersion)) {
    body->insert(pair<string, string>("CodeVersion", *request->codeVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    body->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishRoutineCodeVersion"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PublishRoutineCodeVersionResponse(callApi(params, req, runtime));
  }
  else {
    return PublishRoutineCodeVersionResponse(execute(params, req, runtime));
  }
}

PublishRoutineCodeVersionResponse Alibabacloud_ESA20240910::Client::publishRoutineCodeVersion(shared_ptr<PublishRoutineCodeVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishRoutineCodeVersionWithOptions(request, runtime);
}

PurchaseRatePlanResponse Alibabacloud_ESA20240910::Client::purchaseRatePlanWithOptions(shared_ptr<PurchaseRatePlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoRenew)) {
    query->insert(pair<string, bool>("AutoRenew", *request->autoRenew));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverage)) {
    query->insert(pair<string, string>("Coverage", *request->coverage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planCode)) {
    query->insert(pair<string, string>("PlanCode", *request->planCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planName)) {
    query->insert(pair<string, string>("PlanName", *request->planName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->siteName)) {
    query->insert(pair<string, string>("SiteName", *request->siteName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PurchaseRatePlan"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PurchaseRatePlanResponse(callApi(params, req, runtime));
  }
  else {
    return PurchaseRatePlanResponse(execute(params, req, runtime));
  }
}

PurchaseRatePlanResponse Alibabacloud_ESA20240910::Client::purchaseRatePlan(shared_ptr<PurchaseRatePlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return purchaseRatePlanWithOptions(request, runtime);
}

PurgeCachesResponse Alibabacloud_ESA20240910::Client::purgeCachesWithOptions(shared_ptr<PurgeCachesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PurgeCachesShrinkRequest> request = make_shared<PurgeCachesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<PurgeCachesRequestContent>(tmpReq->content)) {
    request->contentShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->content, make_shared<string>("Content"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contentShrink)) {
    query->insert(pair<string, string>("Content", *request->contentShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->edgeComputePurge)) {
    query->insert(pair<string, bool>("EdgeComputePurge", *request->edgeComputePurge));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->force)) {
    query->insert(pair<string, bool>("Force", *request->force));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PurgeCaches"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PurgeCachesResponse(callApi(params, req, runtime));
  }
  else {
    return PurgeCachesResponse(execute(params, req, runtime));
  }
}

PurgeCachesResponse Alibabacloud_ESA20240910::Client::purgeCaches(shared_ptr<PurgeCachesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return purgeCachesWithOptions(request, runtime);
}

PutKvResponse Alibabacloud_ESA20240910::Client::putKvWithOptions(shared_ptr<PutKvRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->base64)) {
    query->insert(pair<string, bool>("Base64", *request->base64));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expiration)) {
    query->insert(pair<string, long>("Expiration", *request->expiration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expirationTtl)) {
    query->insert(pair<string, long>("ExpirationTtl", *request->expirationTtl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->value)) {
    body->insert(pair<string, string>("Value", *request->value));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutKv"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PutKvResponse(callApi(params, req, runtime));
  }
  else {
    return PutKvResponse(execute(params, req, runtime));
  }
}

PutKvResponse Alibabacloud_ESA20240910::Client::putKv(shared_ptr<PutKvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putKvWithOptions(request, runtime);
}

PutKvWithHighCapacityResponse Alibabacloud_ESA20240910::Client::putKvWithHighCapacityWithOptions(shared_ptr<PutKvWithHighCapacityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namespace_)) {
    query->insert(pair<string, string>("Namespace_", *request->namespace_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutKvWithHighCapacity"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return PutKvWithHighCapacityResponse(callApi(params, req, runtime));
  }
  else {
    return PutKvWithHighCapacityResponse(execute(params, req, runtime));
  }
}

PutKvWithHighCapacityResponse Alibabacloud_ESA20240910::Client::putKvWithHighCapacity(shared_ptr<PutKvWithHighCapacityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putKvWithHighCapacityWithOptions(request, runtime);
}

PutKvWithHighCapacityResponse Alibabacloud_ESA20240910::Client::putKvWithHighCapacityAdvance(shared_ptr<PutKvWithHighCapacityAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::empty(openPlatformEndpoint)) {
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
    {"product", boost::any(string("ESA"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<PutKvWithHighCapacityRequest> putKvWithHighCapacityReq = make_shared<PutKvWithHighCapacityRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, putKvWithHighCapacityReq);
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
    putKvWithHighCapacityReq->url = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<PutKvWithHighCapacityResponse> putKvWithHighCapacityResp = make_shared<PutKvWithHighCapacityResponse>(putKvWithHighCapacityWithOptions(putKvWithHighCapacityReq, runtime));
  return *putKvWithHighCapacityResp;
}

RebuildEdgeContainerAppStagingEnvResponse Alibabacloud_ESA20240910::Client::rebuildEdgeContainerAppStagingEnvWithOptions(shared_ptr<RebuildEdgeContainerAppStagingEnvRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RebuildEdgeContainerAppStagingEnv"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RebuildEdgeContainerAppStagingEnvResponse(callApi(params, req, runtime));
  }
  else {
    return RebuildEdgeContainerAppStagingEnvResponse(execute(params, req, runtime));
  }
}

RebuildEdgeContainerAppStagingEnvResponse Alibabacloud_ESA20240910::Client::rebuildEdgeContainerAppStagingEnv(shared_ptr<RebuildEdgeContainerAppStagingEnvRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rebuildEdgeContainerAppStagingEnvWithOptions(request, runtime);
}

ResetScheduledPreloadJobResponse Alibabacloud_ESA20240910::Client::resetScheduledPreloadJobWithOptions(shared_ptr<ResetScheduledPreloadJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetScheduledPreloadJob"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ResetScheduledPreloadJobResponse(callApi(params, req, runtime));
  }
  else {
    return ResetScheduledPreloadJobResponse(execute(params, req, runtime));
  }
}

ResetScheduledPreloadJobResponse Alibabacloud_ESA20240910::Client::resetScheduledPreloadJob(shared_ptr<ResetScheduledPreloadJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetScheduledPreloadJobWithOptions(request, runtime);
}

RevokeClientCertificateResponse Alibabacloud_ESA20240910::Client::revokeClientCertificateWithOptions(shared_ptr<RevokeClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeClientCertificate"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RevokeClientCertificateResponse(callApi(params, req, runtime));
  }
  else {
    return RevokeClientCertificateResponse(execute(params, req, runtime));
  }
}

RevokeClientCertificateResponse Alibabacloud_ESA20240910::Client::revokeClientCertificate(shared_ptr<RevokeClientCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeClientCertificateWithOptions(request, runtime);
}

RollbackEdgeContainerAppVersionResponse Alibabacloud_ESA20240910::Client::rollbackEdgeContainerAppVersionWithOptions(shared_ptr<RollbackEdgeContainerAppVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    query->insert(pair<string, string>("VersionId", *request->versionId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remarks)) {
    body->insert(pair<string, string>("Remarks", *request->remarks));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RollbackEdgeContainerAppVersion"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RollbackEdgeContainerAppVersionResponse(callApi(params, req, runtime));
  }
  else {
    return RollbackEdgeContainerAppVersionResponse(execute(params, req, runtime));
  }
}

RollbackEdgeContainerAppVersionResponse Alibabacloud_ESA20240910::Client::rollbackEdgeContainerAppVersion(shared_ptr<RollbackEdgeContainerAppVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rollbackEdgeContainerAppVersionWithOptions(request, runtime);
}

SetCertificateResponse Alibabacloud_ESA20240910::Client::setCertificateWithOptions(shared_ptr<SetCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->casId)) {
    body->insert(pair<string, long>("CasId", *request->casId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certificate)) {
    body->insert(pair<string, string>("Certificate", *request->certificate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateKey)) {
    body->insert(pair<string, string>("PrivateKey", *request->privateKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    body->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    body->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetCertificate"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetCertificateResponse(callApi(params, req, runtime));
  }
  else {
    return SetCertificateResponse(execute(params, req, runtime));
  }
}

SetCertificateResponse Alibabacloud_ESA20240910::Client::setCertificate(shared_ptr<SetCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setCertificateWithOptions(request, runtime);
}

SetClientCertificateHostnamesResponse Alibabacloud_ESA20240910::Client::setClientCertificateHostnamesWithOptions(shared_ptr<SetClientCertificateHostnamesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SetClientCertificateHostnamesShrinkRequest> request = make_shared<SetClientCertificateHostnamesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->hostnames)) {
    request->hostnamesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hostnames, make_shared<string>("Hostnames"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hostnamesShrink)) {
    body->insert(pair<string, string>("Hostnames", *request->hostnamesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    body->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetClientCertificateHostnames"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetClientCertificateHostnamesResponse(callApi(params, req, runtime));
  }
  else {
    return SetClientCertificateHostnamesResponse(execute(params, req, runtime));
  }
}

SetClientCertificateHostnamesResponse Alibabacloud_ESA20240910::Client::setClientCertificateHostnames(shared_ptr<SetClientCertificateHostnamesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setClientCertificateHostnamesWithOptions(request, runtime);
}

SetHttpDDoSAttackIntelligentProtectionResponse Alibabacloud_ESA20240910::Client::setHttpDDoSAttackIntelligentProtectionWithOptions(shared_ptr<SetHttpDDoSAttackIntelligentProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aiMode)) {
    query->insert(pair<string, string>("AiMode", *request->aiMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aiTemplate)) {
    query->insert(pair<string, string>("AiTemplate", *request->aiTemplate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetHttpDDoSAttackIntelligentProtection"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetHttpDDoSAttackIntelligentProtectionResponse(callApi(params, req, runtime));
  }
  else {
    return SetHttpDDoSAttackIntelligentProtectionResponse(execute(params, req, runtime));
  }
}

SetHttpDDoSAttackIntelligentProtectionResponse Alibabacloud_ESA20240910::Client::setHttpDDoSAttackIntelligentProtection(shared_ptr<SetHttpDDoSAttackIntelligentProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setHttpDDoSAttackIntelligentProtectionWithOptions(request, runtime);
}

SetHttpDDoSAttackProtectionResponse Alibabacloud_ESA20240910::Client::setHttpDDoSAttackProtectionWithOptions(shared_ptr<SetHttpDDoSAttackProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->globalMode)) {
    query->insert(pair<string, string>("GlobalMode", *request->globalMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetHttpDDoSAttackProtection"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetHttpDDoSAttackProtectionResponse(callApi(params, req, runtime));
  }
  else {
    return SetHttpDDoSAttackProtectionResponse(execute(params, req, runtime));
  }
}

SetHttpDDoSAttackProtectionResponse Alibabacloud_ESA20240910::Client::setHttpDDoSAttackProtection(shared_ptr<SetHttpDDoSAttackProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setHttpDDoSAttackProtectionWithOptions(request, runtime);
}

StartScheduledPreloadExecutionResponse Alibabacloud_ESA20240910::Client::startScheduledPreloadExecutionWithOptions(shared_ptr<StartScheduledPreloadExecutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartScheduledPreloadExecution"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartScheduledPreloadExecutionResponse(callApi(params, req, runtime));
  }
  else {
    return StartScheduledPreloadExecutionResponse(execute(params, req, runtime));
  }
}

StartScheduledPreloadExecutionResponse Alibabacloud_ESA20240910::Client::startScheduledPreloadExecution(shared_ptr<StartScheduledPreloadExecutionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startScheduledPreloadExecutionWithOptions(request, runtime);
}

StopScheduledPreloadExecutionResponse Alibabacloud_ESA20240910::Client::stopScheduledPreloadExecutionWithOptions(shared_ptr<StopScheduledPreloadExecutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopScheduledPreloadExecution"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopScheduledPreloadExecutionResponse(callApi(params, req, runtime));
  }
  else {
    return StopScheduledPreloadExecutionResponse(execute(params, req, runtime));
  }
}

StopScheduledPreloadExecutionResponse Alibabacloud_ESA20240910::Client::stopScheduledPreloadExecution(shared_ptr<StopScheduledPreloadExecutionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopScheduledPreloadExecutionWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_ESA20240910::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UntagResourcesResponse(callApi(params, req, runtime));
  }
  else {
    return UntagResourcesResponse(execute(params, req, runtime));
  }
}

UntagResourcesResponse Alibabacloud_ESA20240910::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpdateCacheRuleResponse Alibabacloud_ESA20240910::Client::updateCacheRuleWithOptions(shared_ptr<UpdateCacheRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->additionalCacheablePorts)) {
    query->insert(pair<string, string>("AdditionalCacheablePorts", *request->additionalCacheablePorts));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->browserCacheMode)) {
    query->insert(pair<string, string>("BrowserCacheMode", *request->browserCacheMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->browserCacheTtl)) {
    query->insert(pair<string, string>("BrowserCacheTtl", *request->browserCacheTtl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bypassCache)) {
    query->insert(pair<string, string>("BypassCache", *request->bypassCache));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cacheDeceptionArmor)) {
    query->insert(pair<string, string>("CacheDeceptionArmor", *request->cacheDeceptionArmor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cacheReserveEligibility)) {
    query->insert(pair<string, string>("CacheReserveEligibility", *request->cacheReserveEligibility));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkPresenceCookie)) {
    query->insert(pair<string, string>("CheckPresenceCookie", *request->checkPresenceCookie));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkPresenceHeader)) {
    query->insert(pair<string, string>("CheckPresenceHeader", *request->checkPresenceHeader));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edgeCacheMode)) {
    query->insert(pair<string, string>("EdgeCacheMode", *request->edgeCacheMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edgeCacheTtl)) {
    query->insert(pair<string, string>("EdgeCacheTtl", *request->edgeCacheTtl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->edgeStatusCodeCacheTtl)) {
    query->insert(pair<string, string>("EdgeStatusCodeCacheTtl", *request->edgeStatusCodeCacheTtl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->includeCookie)) {
    query->insert(pair<string, string>("IncludeCookie", *request->includeCookie));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->includeHeader)) {
    query->insert(pair<string, string>("IncludeHeader", *request->includeHeader));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryString)) {
    query->insert(pair<string, string>("QueryString", *request->queryString));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryStringMode)) {
    query->insert(pair<string, string>("QueryStringMode", *request->queryStringMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serveStale)) {
    query->insert(pair<string, string>("ServeStale", *request->serveStale));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortQueryStringForCache)) {
    query->insert(pair<string, string>("SortQueryStringForCache", *request->sortQueryStringForCache));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userDeviceType)) {
    query->insert(pair<string, string>("UserDeviceType", *request->userDeviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userGeo)) {
    query->insert(pair<string, string>("UserGeo", *request->userGeo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userLanguage)) {
    query->insert(pair<string, string>("UserLanguage", *request->userLanguage));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCacheRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateCacheRuleResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateCacheRuleResponse(execute(params, req, runtime));
  }
}

UpdateCacheRuleResponse Alibabacloud_ESA20240910::Client::updateCacheRule(shared_ptr<UpdateCacheRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCacheRuleWithOptions(request, runtime);
}

UpdateCacheTagResponse Alibabacloud_ESA20240910::Client::updateCacheTagWithOptions(shared_ptr<UpdateCacheTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->caseInsensitive)) {
    query->insert(pair<string, string>("CaseInsensitive", *request->caseInsensitive));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteVersion)) {
    query->insert(pair<string, long>("SiteVersion", *request->siteVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagName)) {
    query->insert(pair<string, string>("TagName", *request->tagName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCacheTag"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateCacheTagResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateCacheTagResponse(execute(params, req, runtime));
  }
}

UpdateCacheTagResponse Alibabacloud_ESA20240910::Client::updateCacheTag(shared_ptr<UpdateCacheTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCacheTagWithOptions(request, runtime);
}

UpdateCnameFlatteningResponse Alibabacloud_ESA20240910::Client::updateCnameFlatteningWithOptions(shared_ptr<UpdateCnameFlatteningRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->flattenMode)) {
    query->insert(pair<string, string>("FlattenMode", *request->flattenMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCnameFlattening"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateCnameFlatteningResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateCnameFlatteningResponse(execute(params, req, runtime));
  }
}

UpdateCnameFlatteningResponse Alibabacloud_ESA20240910::Client::updateCnameFlattening(shared_ptr<UpdateCnameFlatteningRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCnameFlatteningWithOptions(request, runtime);
}

UpdateCompressionRuleResponse Alibabacloud_ESA20240910::Client::updateCompressionRuleWithOptions(shared_ptr<UpdateCompressionRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->brotli)) {
    query->insert(pair<string, string>("Brotli", *request->brotli));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gzip)) {
    query->insert(pair<string, string>("Gzip", *request->gzip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->zstd)) {
    query->insert(pair<string, string>("Zstd", *request->zstd));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCompressionRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateCompressionRuleResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateCompressionRuleResponse(execute(params, req, runtime));
  }
}

UpdateCompressionRuleResponse Alibabacloud_ESA20240910::Client::updateCompressionRule(shared_ptr<UpdateCompressionRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCompressionRuleWithOptions(request, runtime);
}

UpdateCustomScenePolicyResponse Alibabacloud_ESA20240910::Client::updateCustomScenePolicyWithOptions(shared_ptr<UpdateCustomScenePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->objects)) {
    query->insert(pair<string, string>("Objects", *request->objects));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->policyId)) {
    query->insert(pair<string, long>("PolicyId", *request->policyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->template_)) {
    query->insert(pair<string, string>("Template_", *request->template_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCustomScenePolicy"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateCustomScenePolicyResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateCustomScenePolicyResponse(execute(params, req, runtime));
  }
}

UpdateCustomScenePolicyResponse Alibabacloud_ESA20240910::Client::updateCustomScenePolicy(shared_ptr<UpdateCustomScenePolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCustomScenePolicyWithOptions(request, runtime);
}

UpdateDevelopmentModeResponse Alibabacloud_ESA20240910::Client::updateDevelopmentModeWithOptions(shared_ptr<UpdateDevelopmentModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->enable)) {
    query->insert(pair<string, string>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDevelopmentMode"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateDevelopmentModeResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateDevelopmentModeResponse(execute(params, req, runtime));
  }
}

UpdateDevelopmentModeResponse Alibabacloud_ESA20240910::Client::updateDevelopmentMode(shared_ptr<UpdateDevelopmentModeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDevelopmentModeWithOptions(request, runtime);
}

UpdateEdgeContainerAppLogRiverResponse Alibabacloud_ESA20240910::Client::updateEdgeContainerAppLogRiverWithOptions(shared_ptr<UpdateEdgeContainerAppLogRiverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->stdout)) {
    query->insert(pair<string, bool>("Stdout", *request->stdout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEdgeContainerAppLogRiver"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateEdgeContainerAppLogRiverResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateEdgeContainerAppLogRiverResponse(execute(params, req, runtime));
  }
}

UpdateEdgeContainerAppLogRiverResponse Alibabacloud_ESA20240910::Client::updateEdgeContainerAppLogRiver(shared_ptr<UpdateEdgeContainerAppLogRiverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEdgeContainerAppLogRiverWithOptions(request, runtime);
}

UpdateHttpRequestHeaderModificationRuleResponse Alibabacloud_ESA20240910::Client::updateHttpRequestHeaderModificationRuleWithOptions(shared_ptr<UpdateHttpRequestHeaderModificationRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateHttpRequestHeaderModificationRuleShrinkRequest> request = make_shared<UpdateHttpRequestHeaderModificationRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateHttpRequestHeaderModificationRuleRequestRequestHeaderModification>>(tmpReq->requestHeaderModification)) {
    request->requestHeaderModificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->requestHeaderModification, make_shared<string>("RequestHeaderModification"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestHeaderModificationShrink)) {
    query->insert(pair<string, string>("RequestHeaderModification", *request->requestHeaderModificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHttpRequestHeaderModificationRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateHttpRequestHeaderModificationRuleResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateHttpRequestHeaderModificationRuleResponse(execute(params, req, runtime));
  }
}

UpdateHttpRequestHeaderModificationRuleResponse Alibabacloud_ESA20240910::Client::updateHttpRequestHeaderModificationRule(shared_ptr<UpdateHttpRequestHeaderModificationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateHttpRequestHeaderModificationRuleWithOptions(request, runtime);
}

UpdateHttpResponseHeaderModificationRuleResponse Alibabacloud_ESA20240910::Client::updateHttpResponseHeaderModificationRuleWithOptions(shared_ptr<UpdateHttpResponseHeaderModificationRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateHttpResponseHeaderModificationRuleShrinkRequest> request = make_shared<UpdateHttpResponseHeaderModificationRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateHttpResponseHeaderModificationRuleRequestResponseHeaderModification>>(tmpReq->responseHeaderModification)) {
    request->responseHeaderModificationShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->responseHeaderModification, make_shared<string>("ResponseHeaderModification"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseHeaderModificationShrink)) {
    query->insert(pair<string, string>("ResponseHeaderModification", *request->responseHeaderModificationShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHttpResponseHeaderModificationRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateHttpResponseHeaderModificationRuleResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateHttpResponseHeaderModificationRuleResponse(execute(params, req, runtime));
  }
}

UpdateHttpResponseHeaderModificationRuleResponse Alibabacloud_ESA20240910::Client::updateHttpResponseHeaderModificationRule(shared_ptr<UpdateHttpResponseHeaderModificationRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateHttpResponseHeaderModificationRuleWithOptions(request, runtime);
}

UpdateHttpsApplicationConfigurationResponse Alibabacloud_ESA20240910::Client::updateHttpsApplicationConfigurationWithOptions(shared_ptr<UpdateHttpsApplicationConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->altSvc)) {
    query->insert(pair<string, string>("AltSvc", *request->altSvc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->altSvcClear)) {
    query->insert(pair<string, string>("AltSvcClear", *request->altSvcClear));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->altSvcMa)) {
    query->insert(pair<string, string>("AltSvcMa", *request->altSvcMa));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->altSvcPersist)) {
    query->insert(pair<string, string>("AltSvcPersist", *request->altSvcPersist));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hsts)) {
    query->insert(pair<string, string>("Hsts", *request->hsts));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hstsIncludeSubdomains)) {
    query->insert(pair<string, string>("HstsIncludeSubdomains", *request->hstsIncludeSubdomains));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hstsMaxAge)) {
    query->insert(pair<string, string>("HstsMaxAge", *request->hstsMaxAge));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hstsPreload)) {
    query->insert(pair<string, string>("HstsPreload", *request->hstsPreload));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpsForce)) {
    query->insert(pair<string, string>("HttpsForce", *request->httpsForce));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpsForceCode)) {
    query->insert(pair<string, string>("HttpsForceCode", *request->httpsForceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHttpsApplicationConfiguration"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateHttpsApplicationConfigurationResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateHttpsApplicationConfigurationResponse(execute(params, req, runtime));
  }
}

UpdateHttpsApplicationConfigurationResponse Alibabacloud_ESA20240910::Client::updateHttpsApplicationConfiguration(shared_ptr<UpdateHttpsApplicationConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateHttpsApplicationConfigurationWithOptions(request, runtime);
}

UpdateHttpsBasicConfigurationResponse Alibabacloud_ESA20240910::Client::updateHttpsBasicConfigurationWithOptions(shared_ptr<UpdateHttpsBasicConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ciphersuite)) {
    query->insert(pair<string, string>("Ciphersuite", *request->ciphersuite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ciphersuiteGroup)) {
    query->insert(pair<string, string>("CiphersuiteGroup", *request->ciphersuiteGroup));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->http2)) {
    query->insert(pair<string, string>("Http2", *request->http2));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->http3)) {
    query->insert(pair<string, string>("Http3", *request->http3));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->https)) {
    query->insert(pair<string, string>("Https", *request->https));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ocspStapling)) {
    query->insert(pair<string, string>("OcspStapling", *request->ocspStapling));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tls10)) {
    query->insert(pair<string, string>("Tls10", *request->tls10));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tls11)) {
    query->insert(pair<string, string>("Tls11", *request->tls11));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tls12)) {
    query->insert(pair<string, string>("Tls12", *request->tls12));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tls13)) {
    query->insert(pair<string, string>("Tls13", *request->tls13));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHttpsBasicConfiguration"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateHttpsBasicConfigurationResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateHttpsBasicConfigurationResponse(execute(params, req, runtime));
  }
}

UpdateHttpsBasicConfigurationResponse Alibabacloud_ESA20240910::Client::updateHttpsBasicConfiguration(shared_ptr<UpdateHttpsBasicConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateHttpsBasicConfigurationWithOptions(request, runtime);
}

UpdateIPv6Response Alibabacloud_ESA20240910::Client::updateIPv6WithOptions(shared_ptr<UpdateIPv6Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->enable)) {
    query->insert(pair<string, string>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIPv6"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateIPv6Response(callApi(params, req, runtime));
  }
  else {
    return UpdateIPv6Response(execute(params, req, runtime));
  }
}

UpdateIPv6Response Alibabacloud_ESA20240910::Client::updateIPv6(shared_ptr<UpdateIPv6Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIPv6WithOptions(request, runtime);
}

UpdateImageTransformResponse Alibabacloud_ESA20240910::Client::updateImageTransformWithOptions(shared_ptr<UpdateImageTransformRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enable)) {
    query->insert(pair<string, string>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateImageTransform"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateImageTransformResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateImageTransformResponse(execute(params, req, runtime));
  }
}

UpdateImageTransformResponse Alibabacloud_ESA20240910::Client::updateImageTransform(shared_ptr<UpdateImageTransformRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateImageTransformWithOptions(request, runtime);
}

UpdateListResponse Alibabacloud_ESA20240910::Client::updateListWithOptions(shared_ptr<UpdateListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateListShrinkRequest> request = make_shared<UpdateListShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->items)) {
    request->itemsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->items, make_shared<string>("Items"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemsShrink)) {
    body->insert(pair<string, string>("Items", *request->itemsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateList"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateListResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateListResponse(execute(params, req, runtime));
  }
}

UpdateListResponse Alibabacloud_ESA20240910::Client::updateList(shared_ptr<UpdateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateListWithOptions(request, runtime);
}

UpdateLoadBalancerResponse Alibabacloud_ESA20240910::Client::updateLoadBalancerWithOptions(shared_ptr<UpdateLoadBalancerRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateLoadBalancerShrinkRequest> request = make_shared<UpdateLoadBalancerShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateLoadBalancerRequestAdaptiveRouting>(tmpReq->adaptiveRouting)) {
    request->adaptiveRoutingShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->adaptiveRouting, make_shared<string>("AdaptiveRouting"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->defaultPools)) {
    request->defaultPoolsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->defaultPools, make_shared<string>("DefaultPools"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateLoadBalancerRequestMonitor>(tmpReq->monitor)) {
    request->monitorShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->monitor, make_shared<string>("Monitor"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateLoadBalancerRequestRandomSteering>(tmpReq->randomSteering)) {
    request->randomSteeringShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->randomSteering, make_shared<string>("RandomSteering"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateLoadBalancerRequestRules>>(tmpReq->rules)) {
    request->rulesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->rules, make_shared<string>("Rules"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adaptiveRoutingShrink)) {
    query->insert(pair<string, string>("AdaptiveRouting", *request->adaptiveRoutingShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->defaultPoolsShrink)) {
    query->insert(pair<string, string>("DefaultPools", *request->defaultPoolsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    query->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fallbackPool)) {
    query->insert(pair<string, long>("FallbackPool", *request->fallbackPool));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorShrink)) {
    query->insert(pair<string, string>("Monitor", *request->monitorShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->randomSteeringShrink)) {
    query->insert(pair<string, string>("RandomSteering", *request->randomSteeringShrink));
  }
  if (!Darabonba_Util::Client::isUnset<boost::any>(request->regionPools)) {
    query->insert(pair<string, boost::any>("RegionPools", *request->regionPools));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rulesShrink)) {
    query->insert(pair<string, string>("Rules", *request->rulesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionAffinity)) {
    query->insert(pair<string, string>("SessionAffinity", *request->sessionAffinity));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->steeringPolicy)) {
    query->insert(pair<string, string>("SteeringPolicy", *request->steeringPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<boost::any>(request->subRegionPools)) {
    query->insert(pair<string, boost::any>("SubRegionPools", *request->subRegionPools));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ttl)) {
    query->insert(pair<string, long>("Ttl", *request->ttl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLoadBalancer"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateLoadBalancerResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateLoadBalancerResponse(execute(params, req, runtime));
  }
}

UpdateLoadBalancerResponse Alibabacloud_ESA20240910::Client::updateLoadBalancer(shared_ptr<UpdateLoadBalancerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLoadBalancerWithOptions(request, runtime);
}

UpdateManagedTransformResponse Alibabacloud_ESA20240910::Client::updateManagedTransformWithOptions(shared_ptr<UpdateManagedTransformRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->addClientGeolocationHeader)) {
    query->insert(pair<string, string>("AddClientGeolocationHeader", *request->addClientGeolocationHeader));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->addRealClientIpHeader)) {
    query->insert(pair<string, string>("AddRealClientIpHeader", *request->addRealClientIpHeader));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteVersion)) {
    query->insert(pair<string, long>("SiteVersion", *request->siteVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateManagedTransform"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateManagedTransformResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateManagedTransformResponse(execute(params, req, runtime));
  }
}

UpdateManagedTransformResponse Alibabacloud_ESA20240910::Client::updateManagedTransform(shared_ptr<UpdateManagedTransformRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateManagedTransformWithOptions(request, runtime);
}

UpdateNetworkOptimizationResponse Alibabacloud_ESA20240910::Client::updateNetworkOptimizationWithOptions(shared_ptr<UpdateNetworkOptimizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grpc)) {
    query->insert(pair<string, string>("Grpc", *request->grpc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->http2Origin)) {
    query->insert(pair<string, string>("Http2Origin", *request->http2Origin));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smartRouting)) {
    query->insert(pair<string, string>("SmartRouting", *request->smartRouting));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadMaxFilesize)) {
    query->insert(pair<string, string>("UploadMaxFilesize", *request->uploadMaxFilesize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->websocket)) {
    query->insert(pair<string, string>("Websocket", *request->websocket));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateNetworkOptimization"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateNetworkOptimizationResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateNetworkOptimizationResponse(execute(params, req, runtime));
  }
}

UpdateNetworkOptimizationResponse Alibabacloud_ESA20240910::Client::updateNetworkOptimization(shared_ptr<UpdateNetworkOptimizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateNetworkOptimizationWithOptions(request, runtime);
}

UpdateOriginPoolResponse Alibabacloud_ESA20240910::Client::updateOriginPoolWithOptions(shared_ptr<UpdateOriginPoolRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateOriginPoolShrinkRequest> request = make_shared<UpdateOriginPoolShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateOriginPoolRequestOrigins>>(tmpReq->origins)) {
    request->originsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->origins, make_shared<string>("Origins"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    query->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originsShrink)) {
    query->insert(pair<string, string>("Origins", *request->originsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateOriginPool"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateOriginPoolResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateOriginPoolResponse(execute(params, req, runtime));
  }
}

UpdateOriginPoolResponse Alibabacloud_ESA20240910::Client::updateOriginPool(shared_ptr<UpdateOriginPoolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateOriginPoolWithOptions(request, runtime);
}

UpdateOriginProtectionResponse Alibabacloud_ESA20240910::Client::updateOriginProtectionWithOptions(shared_ptr<UpdateOriginProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->originConverge)) {
    query->insert(pair<string, string>("OriginConverge", *request->originConverge));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateOriginProtection"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateOriginProtectionResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateOriginProtectionResponse(execute(params, req, runtime));
  }
}

UpdateOriginProtectionResponse Alibabacloud_ESA20240910::Client::updateOriginProtection(shared_ptr<UpdateOriginProtectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateOriginProtectionWithOptions(request, runtime);
}

UpdateOriginProtectionIpWhiteListResponse Alibabacloud_ESA20240910::Client::updateOriginProtectionIpWhiteListWithOptions(shared_ptr<UpdateOriginProtectionIpWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateOriginProtectionIpWhiteList"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateOriginProtectionIpWhiteListResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateOriginProtectionIpWhiteListResponse(execute(params, req, runtime));
  }
}

UpdateOriginProtectionIpWhiteListResponse Alibabacloud_ESA20240910::Client::updateOriginProtectionIpWhiteList(shared_ptr<UpdateOriginProtectionIpWhiteListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateOriginProtectionIpWhiteListWithOptions(request, runtime);
}

UpdateOriginRuleResponse Alibabacloud_ESA20240910::Client::updateOriginRuleWithOptions(shared_ptr<UpdateOriginRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dnsRecord)) {
    query->insert(pair<string, string>("DnsRecord", *request->dnsRecord));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originHost)) {
    query->insert(pair<string, string>("OriginHost", *request->originHost));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originHttpPort)) {
    query->insert(pair<string, string>("OriginHttpPort", *request->originHttpPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originHttpsPort)) {
    query->insert(pair<string, string>("OriginHttpsPort", *request->originHttpsPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originScheme)) {
    query->insert(pair<string, string>("OriginScheme", *request->originScheme));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originSni)) {
    query->insert(pair<string, string>("OriginSni", *request->originSni));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->range)) {
    query->insert(pair<string, string>("Range", *request->range));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateOriginRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateOriginRuleResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateOriginRuleResponse(execute(params, req, runtime));
  }
}

UpdateOriginRuleResponse Alibabacloud_ESA20240910::Client::updateOriginRule(shared_ptr<UpdateOriginRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateOriginRuleWithOptions(request, runtime);
}

UpdatePageResponse Alibabacloud_ESA20240910::Client::updatePageWithOptions(shared_ptr<UpdatePageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentType)) {
    body->insert(pair<string, string>("ContentType", *request->contentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePage"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdatePageResponse(callApi(params, req, runtime));
  }
  else {
    return UpdatePageResponse(execute(params, req, runtime));
  }
}

UpdatePageResponse Alibabacloud_ESA20240910::Client::updatePage(shared_ptr<UpdatePageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePageWithOptions(request, runtime);
}

UpdateRatePlanSpecResponse Alibabacloud_ESA20240910::Client::updateRatePlanSpecWithOptions(shared_ptr<UpdateRatePlanSpecRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetPlanCode)) {
    query->insert(pair<string, string>("TargetPlanCode", *request->targetPlanCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetPlanName)) {
    query->insert(pair<string, string>("TargetPlanName", *request->targetPlanName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRatePlanSpec"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateRatePlanSpecResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateRatePlanSpecResponse(execute(params, req, runtime));
  }
}

UpdateRatePlanSpecResponse Alibabacloud_ESA20240910::Client::updateRatePlanSpec(shared_ptr<UpdateRatePlanSpecRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRatePlanSpecWithOptions(request, runtime);
}

UpdateRecordResponse Alibabacloud_ESA20240910::Client::updateRecordWithOptions(shared_ptr<UpdateRecordRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateRecordShrinkRequest> request = make_shared<UpdateRecordShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateRecordRequestAuthConf>(tmpReq->authConf)) {
    request->authConfShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->authConf, make_shared<string>("AuthConf"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateRecordRequestData>(tmpReq->data)) {
    request->dataShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->data, make_shared<string>("Data"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authConfShrink)) {
    query->insert(pair<string, string>("AuthConf", *request->authConfShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizName)) {
    query->insert(pair<string, string>("BizName", *request->bizName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->comment)) {
    query->insert(pair<string, string>("Comment", *request->comment));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataShrink)) {
    query->insert(pair<string, string>("Data", *request->dataShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostPolicy)) {
    query->insert(pair<string, string>("HostPolicy", *request->hostPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->proxied)) {
    query->insert(pair<string, bool>("Proxied", *request->proxied));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->recordId)) {
    query->insert(pair<string, long>("RecordId", *request->recordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ttl)) {
    query->insert(pair<string, long>("Ttl", *request->ttl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRecord"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateRecordResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateRecordResponse(execute(params, req, runtime));
  }
}

UpdateRecordResponse Alibabacloud_ESA20240910::Client::updateRecord(shared_ptr<UpdateRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRecordWithOptions(request, runtime);
}

UpdateRedirectRuleResponse Alibabacloud_ESA20240910::Client::updateRedirectRuleWithOptions(shared_ptr<UpdateRedirectRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reserveQueryString)) {
    query->insert(pair<string, string>("ReserveQueryString", *request->reserveQueryString));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statusCode)) {
    query->insert(pair<string, string>("StatusCode", *request->statusCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetUrl)) {
    query->insert(pair<string, string>("TargetUrl", *request->targetUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRedirectRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateRedirectRuleResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateRedirectRuleResponse(execute(params, req, runtime));
  }
}

UpdateRedirectRuleResponse Alibabacloud_ESA20240910::Client::updateRedirectRule(shared_ptr<UpdateRedirectRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRedirectRuleWithOptions(request, runtime);
}

UpdateRewriteUrlRuleResponse Alibabacloud_ESA20240910::Client::updateRewriteUrlRuleWithOptions(shared_ptr<UpdateRewriteUrlRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configId)) {
    query->insert(pair<string, long>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryString)) {
    query->insert(pair<string, string>("QueryString", *request->queryString));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rewriteQueryStringType)) {
    query->insert(pair<string, string>("RewriteQueryStringType", *request->rewriteQueryStringType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rewriteUriType)) {
    query->insert(pair<string, string>("RewriteUriType", *request->rewriteUriType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uri)) {
    query->insert(pair<string, string>("Uri", *request->uri));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRewriteUrlRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateRewriteUrlRuleResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateRewriteUrlRuleResponse(execute(params, req, runtime));
  }
}

UpdateRewriteUrlRuleResponse Alibabacloud_ESA20240910::Client::updateRewriteUrlRule(shared_ptr<UpdateRewriteUrlRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRewriteUrlRuleWithOptions(request, runtime);
}

UpdateScheduledPreloadExecutionResponse Alibabacloud_ESA20240910::Client::updateScheduledPreloadExecutionWithOptions(shared_ptr<UpdateScheduledPreloadExecutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    body->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interval)) {
    body->insert(pair<string, long>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sliceLen)) {
    body->insert(pair<string, long>("SliceLen", *request->sliceLen));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    body->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateScheduledPreloadExecution"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateScheduledPreloadExecutionResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateScheduledPreloadExecutionResponse(execute(params, req, runtime));
  }
}

UpdateScheduledPreloadExecutionResponse Alibabacloud_ESA20240910::Client::updateScheduledPreloadExecution(shared_ptr<UpdateScheduledPreloadExecutionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateScheduledPreloadExecutionWithOptions(request, runtime);
}

UpdateSeoBypassResponse Alibabacloud_ESA20240910::Client::updateSeoBypassWithOptions(shared_ptr<UpdateSeoBypassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->enable)) {
    query->insert(pair<string, string>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSeoBypass"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateSeoBypassResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateSeoBypassResponse(execute(params, req, runtime));
  }
}

UpdateSeoBypassResponse Alibabacloud_ESA20240910::Client::updateSeoBypass(shared_ptr<UpdateSeoBypassRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSeoBypassWithOptions(request, runtime);
}

UpdateSiteAccessTypeResponse Alibabacloud_ESA20240910::Client::updateSiteAccessTypeWithOptions(shared_ptr<UpdateSiteAccessTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accessType)) {
    query->insert(pair<string, string>("AccessType", *request->accessType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSiteAccessType"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateSiteAccessTypeResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateSiteAccessTypeResponse(execute(params, req, runtime));
  }
}

UpdateSiteAccessTypeResponse Alibabacloud_ESA20240910::Client::updateSiteAccessType(shared_ptr<UpdateSiteAccessTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSiteAccessTypeWithOptions(request, runtime);
}

UpdateSiteCoverageResponse Alibabacloud_ESA20240910::Client::updateSiteCoverageWithOptions(shared_ptr<UpdateSiteCoverageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->coverage)) {
    query->insert(pair<string, string>("Coverage", *request->coverage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSiteCoverage"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateSiteCoverageResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateSiteCoverageResponse(execute(params, req, runtime));
  }
}

UpdateSiteCoverageResponse Alibabacloud_ESA20240910::Client::updateSiteCoverage(shared_ptr<UpdateSiteCoverageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSiteCoverageWithOptions(request, runtime);
}

UpdateSiteCustomLogResponse Alibabacloud_ESA20240910::Client::updateSiteCustomLogWithOptions(shared_ptr<UpdateSiteCustomLogRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateSiteCustomLogShrinkRequest> request = make_shared<UpdateSiteCustomLogShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->cookies)) {
    request->cookiesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->cookies, make_shared<string>("Cookies"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->requestHeaders)) {
    request->requestHeadersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->requestHeaders, make_shared<string>("RequestHeaders"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->responseHeaders)) {
    request->responseHeadersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->responseHeaders, make_shared<string>("ResponseHeaders"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cookiesShrink)) {
    body->insert(pair<string, string>("Cookies", *request->cookiesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestHeadersShrink)) {
    body->insert(pair<string, string>("RequestHeaders", *request->requestHeadersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->responseHeadersShrink)) {
    body->insert(pair<string, string>("ResponseHeaders", *request->responseHeadersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    body->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSiteCustomLog"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateSiteCustomLogResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateSiteCustomLogResponse(execute(params, req, runtime));
  }
}

UpdateSiteCustomLogResponse Alibabacloud_ESA20240910::Client::updateSiteCustomLog(shared_ptr<UpdateSiteCustomLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSiteCustomLogWithOptions(request, runtime);
}

UpdateSiteDeliveryTaskResponse Alibabacloud_ESA20240910::Client::updateSiteDeliveryTaskWithOptions(shared_ptr<UpdateSiteDeliveryTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    body->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->discardRate)) {
    body->insert(pair<string, double>("DiscardRate", *request->discardRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldName)) {
    body->insert(pair<string, string>("FieldName", *request->fieldName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    body->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    body->insert(pair<string, string>("TaskName", *request->taskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSiteDeliveryTask"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateSiteDeliveryTaskResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateSiteDeliveryTaskResponse(execute(params, req, runtime));
  }
}

UpdateSiteDeliveryTaskResponse Alibabacloud_ESA20240910::Client::updateSiteDeliveryTask(shared_ptr<UpdateSiteDeliveryTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSiteDeliveryTaskWithOptions(request, runtime);
}

UpdateSiteDeliveryTaskStatusResponse Alibabacloud_ESA20240910::Client::updateSiteDeliveryTaskStatusWithOptions(shared_ptr<UpdateSiteDeliveryTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSiteDeliveryTaskStatus"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateSiteDeliveryTaskStatusResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateSiteDeliveryTaskStatusResponse(execute(params, req, runtime));
  }
}

UpdateSiteDeliveryTaskStatusResponse Alibabacloud_ESA20240910::Client::updateSiteDeliveryTaskStatus(shared_ptr<UpdateSiteDeliveryTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSiteDeliveryTaskStatusWithOptions(request, runtime);
}

UpdateSiteNameExclusiveResponse Alibabacloud_ESA20240910::Client::updateSiteNameExclusiveWithOptions(shared_ptr<UpdateSiteNameExclusiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->enable)) {
    query->insert(pair<string, string>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSiteNameExclusive"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateSiteNameExclusiveResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateSiteNameExclusiveResponse(execute(params, req, runtime));
  }
}

UpdateSiteNameExclusiveResponse Alibabacloud_ESA20240910::Client::updateSiteNameExclusive(shared_ptr<UpdateSiteNameExclusiveRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSiteNameExclusiveWithOptions(request, runtime);
}

UpdateSitePauseResponse Alibabacloud_ESA20240910::Client::updateSitePauseWithOptions(shared_ptr<UpdateSitePauseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->paused)) {
    query->insert(pair<string, bool>("Paused", *request->paused));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSitePause"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateSitePauseResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateSitePauseResponse(execute(params, req, runtime));
  }
}

UpdateSitePauseResponse Alibabacloud_ESA20240910::Client::updateSitePause(shared_ptr<UpdateSitePauseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSitePauseWithOptions(request, runtime);
}

UpdateSiteVanityNSResponse Alibabacloud_ESA20240910::Client::updateSiteVanityNSWithOptions(shared_ptr<UpdateSiteVanityNSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vanityNSList)) {
    query->insert(pair<string, string>("VanityNSList", *request->vanityNSList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSiteVanityNS"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateSiteVanityNSResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateSiteVanityNSResponse(execute(params, req, runtime));
  }
}

UpdateSiteVanityNSResponse Alibabacloud_ESA20240910::Client::updateSiteVanityNS(shared_ptr<UpdateSiteVanityNSRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSiteVanityNSWithOptions(request, runtime);
}

UpdateTieredCacheResponse Alibabacloud_ESA20240910::Client::updateTieredCacheWithOptions(shared_ptr<UpdateTieredCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cacheArchitectureMode)) {
    query->insert(pair<string, string>("CacheArchitectureMode", *request->cacheArchitectureMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTieredCache"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateTieredCacheResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateTieredCacheResponse(execute(params, req, runtime));
  }
}

UpdateTieredCacheResponse Alibabacloud_ESA20240910::Client::updateTieredCache(shared_ptr<UpdateTieredCacheRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTieredCacheWithOptions(request, runtime);
}

UpdateUserDeliveryTaskResponse Alibabacloud_ESA20240910::Client::updateUserDeliveryTaskWithOptions(shared_ptr<UpdateUserDeliveryTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    body->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->details)) {
    body->insert(pair<string, string>("Details", *request->details));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->discardRate)) {
    body->insert(pair<string, double>("DiscardRate", *request->discardRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fieldName)) {
    body->insert(pair<string, string>("FieldName", *request->fieldName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskName)) {
    body->insert(pair<string, string>("TaskName", *request->taskName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUserDeliveryTask"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateUserDeliveryTaskResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateUserDeliveryTaskResponse(execute(params, req, runtime));
  }
}

UpdateUserDeliveryTaskResponse Alibabacloud_ESA20240910::Client::updateUserDeliveryTask(shared_ptr<UpdateUserDeliveryTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserDeliveryTaskWithOptions(request, runtime);
}

UpdateUserDeliveryTaskStatusResponse Alibabacloud_ESA20240910::Client::updateUserDeliveryTaskStatusWithOptions(shared_ptr<UpdateUserDeliveryTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUserDeliveryTaskStatus"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateUserDeliveryTaskStatusResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateUserDeliveryTaskStatusResponse(execute(params, req, runtime));
  }
}

UpdateUserDeliveryTaskStatusResponse Alibabacloud_ESA20240910::Client::updateUserDeliveryTaskStatus(shared_ptr<UpdateUserDeliveryTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserDeliveryTaskStatusWithOptions(request, runtime);
}

UpdateWaitingRoomResponse Alibabacloud_ESA20240910::Client::updateWaitingRoomWithOptions(shared_ptr<UpdateWaitingRoomRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateWaitingRoomShrinkRequest> request = make_shared<UpdateWaitingRoomShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateWaitingRoomRequestHostNameAndPath>>(tmpReq->hostNameAndPath)) {
    request->hostNameAndPathShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hostNameAndPath, make_shared<string>("HostNameAndPath"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cookieName)) {
    query->insert(pair<string, string>("CookieName", *request->cookieName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customPageHtml)) {
    query->insert(pair<string, string>("CustomPageHtml", *request->customPageHtml));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disableSessionRenewalEnable)) {
    query->insert(pair<string, string>("DisableSessionRenewalEnable", *request->disableSessionRenewalEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enable)) {
    query->insert(pair<string, string>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hostNameAndPathShrink)) {
    query->insert(pair<string, string>("HostNameAndPath", *request->hostNameAndPathShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonResponseEnable)) {
    query->insert(pair<string, string>("JsonResponseEnable", *request->jsonResponseEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newUsersPerMinute)) {
    query->insert(pair<string, string>("NewUsersPerMinute", *request->newUsersPerMinute));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queueAllEnable)) {
    query->insert(pair<string, string>("QueueAllEnable", *request->queueAllEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queuingMethod)) {
    query->insert(pair<string, string>("QueuingMethod", *request->queuingMethod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queuingStatusCode)) {
    query->insert(pair<string, string>("QueuingStatusCode", *request->queuingStatusCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionDuration)) {
    query->insert(pair<string, string>("SessionDuration", *request->sessionDuration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->totalActiveUsers)) {
    query->insert(pair<string, string>("TotalActiveUsers", *request->totalActiveUsers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->waitingRoomId)) {
    query->insert(pair<string, string>("WaitingRoomId", *request->waitingRoomId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->waitingRoomType)) {
    query->insert(pair<string, string>("WaitingRoomType", *request->waitingRoomType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWaitingRoom"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateWaitingRoomResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateWaitingRoomResponse(execute(params, req, runtime));
  }
}

UpdateWaitingRoomResponse Alibabacloud_ESA20240910::Client::updateWaitingRoom(shared_ptr<UpdateWaitingRoomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateWaitingRoomWithOptions(request, runtime);
}

UpdateWaitingRoomEventResponse Alibabacloud_ESA20240910::Client::updateWaitingRoomEventWithOptions(shared_ptr<UpdateWaitingRoomEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customPageHtml)) {
    query->insert(pair<string, string>("CustomPageHtml", *request->customPageHtml));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->disableSessionRenewalEnable)) {
    query->insert(pair<string, string>("DisableSessionRenewalEnable", *request->disableSessionRenewalEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->enable)) {
    query->insert(pair<string, string>("Enable", *request->enable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jsonResponseEnable)) {
    query->insert(pair<string, string>("JsonResponseEnable", *request->jsonResponseEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    query->insert(pair<string, string>("Language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newUsersPerMinute)) {
    query->insert(pair<string, string>("NewUsersPerMinute", *request->newUsersPerMinute));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preQueueEnable)) {
    query->insert(pair<string, string>("PreQueueEnable", *request->preQueueEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->preQueueStartTime)) {
    query->insert(pair<string, string>("PreQueueStartTime", *request->preQueueStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queuingMethod)) {
    query->insert(pair<string, string>("QueuingMethod", *request->queuingMethod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queuingStatusCode)) {
    query->insert(pair<string, string>("QueuingStatusCode", *request->queuingStatusCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->randomPreQueueEnable)) {
    query->insert(pair<string, string>("RandomPreQueueEnable", *request->randomPreQueueEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionDuration)) {
    query->insert(pair<string, string>("SessionDuration", *request->sessionDuration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->totalActiveUsers)) {
    query->insert(pair<string, string>("TotalActiveUsers", *request->totalActiveUsers));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->waitingRoomEventId)) {
    query->insert(pair<string, long>("WaitingRoomEventId", *request->waitingRoomEventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->waitingRoomType)) {
    query->insert(pair<string, string>("WaitingRoomType", *request->waitingRoomType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWaitingRoomEvent"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateWaitingRoomEventResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateWaitingRoomEventResponse(execute(params, req, runtime));
  }
}

UpdateWaitingRoomEventResponse Alibabacloud_ESA20240910::Client::updateWaitingRoomEvent(shared_ptr<UpdateWaitingRoomEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateWaitingRoomEventWithOptions(request, runtime);
}

UpdateWaitingRoomRuleResponse Alibabacloud_ESA20240910::Client::updateWaitingRoomRuleWithOptions(shared_ptr<UpdateWaitingRoomRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->rule)) {
    query->insert(pair<string, string>("Rule", *request->rule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleEnable)) {
    query->insert(pair<string, string>("RuleEnable", *request->ruleEnable));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->waitingRoomRuleId)) {
    query->insert(pair<string, long>("WaitingRoomRuleId", *request->waitingRoomRuleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateWaitingRoomRule"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateWaitingRoomRuleResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateWaitingRoomRuleResponse(execute(params, req, runtime));
  }
}

UpdateWaitingRoomRuleResponse Alibabacloud_ESA20240910::Client::updateWaitingRoomRule(shared_ptr<UpdateWaitingRoomRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateWaitingRoomRuleWithOptions(request, runtime);
}

UploadClientCaCertificateResponse Alibabacloud_ESA20240910::Client::uploadClientCaCertificateWithOptions(shared_ptr<UploadClientCaCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certificate)) {
    body->insert(pair<string, string>("Certificate", *request->certificate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadClientCaCertificate"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UploadClientCaCertificateResponse(callApi(params, req, runtime));
  }
  else {
    return UploadClientCaCertificateResponse(execute(params, req, runtime));
  }
}

UploadClientCaCertificateResponse Alibabacloud_ESA20240910::Client::uploadClientCaCertificate(shared_ptr<UploadClientCaCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadClientCaCertificateWithOptions(request, runtime);
}

UploadFileResponse Alibabacloud_ESA20240910::Client::uploadFileWithOptions(shared_ptr<UploadFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadTaskName)) {
    query->insert(pair<string, string>("UploadTaskName", *request->uploadTaskName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadFile"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UploadFileResponse(callApi(params, req, runtime));
  }
  else {
    return UploadFileResponse(execute(params, req, runtime));
  }
}

UploadFileResponse Alibabacloud_ESA20240910::Client::uploadFile(shared_ptr<UploadFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadFileWithOptions(request, runtime);
}

UploadFileResponse Alibabacloud_ESA20240910::Client::uploadFileAdvance(shared_ptr<UploadFileAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba_Util::Client::empty(openPlatformEndpoint)) {
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
    {"product", boost::any(string("ESA"))},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse> authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>();
  shared_ptr<Alibabacloud_OSS::Config> ossConfig = make_shared<Alibabacloud_OSS::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OSS::Client> ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  shared_ptr<Darabonba_FileForm::FileField> fileObj = make_shared<Darabonba_FileForm::FileField>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequestHeader> ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>();
  shared_ptr<Alibabacloud_OSS::PostObjectRequest> uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>();
  shared_ptr<Alibabacloud_OSSUtil::RuntimeOptions> ossRuntime = make_shared<Alibabacloud_OSSUtil::RuntimeOptions>();
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<UploadFileRequest> uploadFileReq = make_shared<UploadFileRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, uploadFileReq);
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
    uploadFileReq->url = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<UploadFileResponse> uploadFileResp = make_shared<UploadFileResponse>(uploadFileWithOptions(uploadFileReq, runtime));
  return *uploadFileResp;
}

VerifySiteResponse Alibabacloud_ESA20240910::Client::verifySiteWithOptions(shared_ptr<VerifySiteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->siteId)) {
    query->insert(pair<string, long>("SiteId", *request->siteId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifySite"))},
    {"version", boost::any(string("2024-09-10"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return VerifySiteResponse(callApi(params, req, runtime));
  }
  else {
    return VerifySiteResponse(execute(params, req, runtime));
  }
}

VerifySiteResponse Alibabacloud_ESA20240910::Client::verifySite(shared_ptr<VerifySiteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifySiteWithOptions(request, runtime);
}

