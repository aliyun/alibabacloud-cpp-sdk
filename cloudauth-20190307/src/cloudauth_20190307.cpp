// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cloudauth_20190307.hpp>
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

using namespace Alibabacloud_Cloudauth20190307;

Alibabacloud_Cloudauth20190307::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cloudauth"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Cloudauth20190307::Client::getEndpoint(shared_ptr<string> productId,
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

AIGCFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::aIGCFaceVerifyWithOptions(shared_ptr<AIGCFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->faceContrastPictureUrl)) {
    query->insert(pair<string, string>("FaceContrastPictureUrl", *request->faceContrastPictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucketName)) {
    query->insert(pair<string, string>("OssBucketName", *request->ossBucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossObjectName)) {
    query->insert(pair<string, string>("OssObjectName", *request->ossObjectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerOrderNo)) {
    query->insert(pair<string, string>("OuterOrderNo", *request->outerOrderNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sceneId)) {
    query->insert(pair<string, long>("SceneId", *request->sceneId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->faceContrastPicture)) {
    body->insert(pair<string, string>("FaceContrastPicture", *request->faceContrastPicture));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AIGCFaceVerify"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AIGCFaceVerifyResponse(callApi(params, req, runtime));
}

AIGCFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::aIGCFaceVerify(shared_ptr<AIGCFaceVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return aIGCFaceVerifyWithOptions(request, runtime);
}

BankMetaVerifyResponse Alibabacloud_Cloudauth20190307::Client::bankMetaVerifyWithOptions(shared_ptr<BankMetaVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bankCard)) {
    query->insert(pair<string, string>("BankCard", *request->bankCard));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifyNum)) {
    query->insert(pair<string, string>("IdentifyNum", *request->identifyNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identityType)) {
    query->insert(pair<string, string>("IdentityType", *request->identityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mobile)) {
    query->insert(pair<string, string>("Mobile", *request->mobile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramType)) {
    query->insert(pair<string, string>("ParamType", *request->paramType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verifyMode)) {
    query->insert(pair<string, string>("VerifyMode", *request->verifyMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BankMetaVerify"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BankMetaVerifyResponse(callApi(params, req, runtime));
}

BankMetaVerifyResponse Alibabacloud_Cloudauth20190307::Client::bankMetaVerify(shared_ptr<BankMetaVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return bankMetaVerifyWithOptions(request, runtime);
}

CompareFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::compareFaceVerifyWithOptions(shared_ptr<CompareFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->crop)) {
    body->insert(pair<string, string>("Crop", *request->crop));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerOrderNo)) {
    body->insert(pair<string, string>("OuterOrderNo", *request->outerOrderNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sceneId)) {
    body->insert(pair<string, long>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceCertifyId)) {
    body->insert(pair<string, string>("SourceCertifyId", *request->sourceCertifyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceFaceContrastPicture)) {
    body->insert(pair<string, string>("SourceFaceContrastPicture", *request->sourceFaceContrastPicture));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceFaceContrastPictureUrl)) {
    body->insert(pair<string, string>("SourceFaceContrastPictureUrl", *request->sourceFaceContrastPictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOssBucketName)) {
    body->insert(pair<string, string>("SourceOssBucketName", *request->sourceOssBucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceOssObjectName)) {
    body->insert(pair<string, string>("SourceOssObjectName", *request->sourceOssObjectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetCertifyId)) {
    body->insert(pair<string, string>("TargetCertifyId", *request->targetCertifyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetFaceContrastPicture)) {
    body->insert(pair<string, string>("TargetFaceContrastPicture", *request->targetFaceContrastPicture));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetFaceContrastPictureUrl)) {
    body->insert(pair<string, string>("TargetFaceContrastPictureUrl", *request->targetFaceContrastPictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetOssBucketName)) {
    body->insert(pair<string, string>("TargetOssBucketName", *request->targetOssBucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetOssObjectName)) {
    body->insert(pair<string, string>("TargetOssObjectName", *request->targetOssObjectName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CompareFaceVerify"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CompareFaceVerifyResponse(callApi(params, req, runtime));
}

CompareFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::compareFaceVerify(shared_ptr<CompareFaceVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return compareFaceVerifyWithOptions(request, runtime);
}

CompareFacesResponse Alibabacloud_Cloudauth20190307::Client::compareFacesWithOptions(shared_ptr<CompareFacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceImageType)) {
    body->insert(pair<string, string>("SourceImageType", *request->sourceImageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceImageValue)) {
    body->insert(pair<string, string>("SourceImageValue", *request->sourceImageValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetImageType)) {
    body->insert(pair<string, string>("TargetImageType", *request->targetImageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetImageValue)) {
    body->insert(pair<string, string>("TargetImageValue", *request->targetImageValue));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CompareFaces"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CompareFacesResponse(callApi(params, req, runtime));
}

CompareFacesResponse Alibabacloud_Cloudauth20190307::Client::compareFaces(shared_ptr<CompareFacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return compareFacesWithOptions(request, runtime);
}

ContrastFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::contrastFaceVerifyWithOptions(shared_ptr<ContrastFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    query->insert(pair<string, string>("Model", *request->model));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certName)) {
    body->insert(pair<string, string>("CertName", *request->certName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certNo)) {
    body->insert(pair<string, string>("CertNo", *request->certNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certType)) {
    body->insert(pair<string, string>("CertType", *request->certType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certifyId)) {
    body->insert(pair<string, string>("CertifyId", *request->certifyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crop)) {
    body->insert(pair<string, string>("Crop", *request->crop));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceToken)) {
    body->insert(pair<string, string>("DeviceToken", *request->deviceToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptType)) {
    body->insert(pair<string, string>("EncryptType", *request->encryptType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faceContrastFile)) {
    body->insert(pair<string, string>("FaceContrastFile", *request->faceContrastFile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faceContrastPicture)) {
    body->insert(pair<string, string>("FaceContrastPicture", *request->faceContrastPicture));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faceContrastPictureUrl)) {
    body->insert(pair<string, string>("FaceContrastPictureUrl", *request->faceContrastPictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    body->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mobile)) {
    body->insert(pair<string, string>("Mobile", *request->mobile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucketName)) {
    body->insert(pair<string, string>("OssBucketName", *request->ossBucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossObjectName)) {
    body->insert(pair<string, string>("OssObjectName", *request->ossObjectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerOrderNo)) {
    body->insert(pair<string, string>("OuterOrderNo", *request->outerOrderNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sceneId)) {
    body->insert(pair<string, long>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ContrastFaceVerify"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ContrastFaceVerifyResponse(callApi(params, req, runtime));
}

ContrastFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::contrastFaceVerify(shared_ptr<ContrastFaceVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return contrastFaceVerifyWithOptions(request, runtime);
}

ContrastFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::contrastFaceVerifyAdvance(shared_ptr<ContrastFaceVerifyAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"product", boost::any(string("Cloudauth"))},
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
  shared_ptr<ContrastFaceVerifyRequest> contrastFaceVerifyReq = make_shared<ContrastFaceVerifyRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, contrastFaceVerifyReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->faceContrastFileObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->body->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"content", !request->faceContrastFileObject ? boost::any() : boost::any(*request->faceContrastFileObject)},
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
    contrastFaceVerifyReq->faceContrastFile = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<ContrastFaceVerifyResponse> contrastFaceVerifyResp = make_shared<ContrastFaceVerifyResponse>(contrastFaceVerifyWithOptions(contrastFaceVerifyReq, runtime));
  return *contrastFaceVerifyResp;
}

CreateAuthKeyResponse Alibabacloud_Cloudauth20190307::Client::createAuthKeyWithOptions(shared_ptr<CreateAuthKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->authYears)) {
    query->insert(pair<string, long>("AuthYears", *request->authYears));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->test)) {
    query->insert(pair<string, bool>("Test", *request->test));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userDeviceId)) {
    query->insert(pair<string, string>("UserDeviceId", *request->userDeviceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAuthKey"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAuthKeyResponse(callApi(params, req, runtime));
}

CreateAuthKeyResponse Alibabacloud_Cloudauth20190307::Client::createAuthKey(shared_ptr<CreateAuthKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAuthKeyWithOptions(request, runtime);
}

CreateVerifySettingResponse Alibabacloud_Cloudauth20190307::Client::createVerifySettingWithOptions(shared_ptr<CreateVerifySettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizName)) {
    query->insert(pair<string, string>("BizName", *request->bizName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->guideStep)) {
    query->insert(pair<string, bool>("GuideStep", *request->guideStep));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->privacyStep)) {
    query->insert(pair<string, bool>("PrivacyStep", *request->privacyStep));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->resultStep)) {
    query->insert(pair<string, bool>("ResultStep", *request->resultStep));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->solution)) {
    query->insert(pair<string, string>("Solution", *request->solution));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVerifySetting"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateVerifySettingResponse(callApi(params, req, runtime));
}

CreateVerifySettingResponse Alibabacloud_Cloudauth20190307::Client::createVerifySetting(shared_ptr<CreateVerifySettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVerifySettingWithOptions(request, runtime);
}

CredentialVerifyResponse Alibabacloud_Cloudauth20190307::Client::credentialVerifyWithOptions(shared_ptr<CredentialVerifyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CredentialVerifyShrinkRequest> request = make_shared<CredentialVerifyShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CredentialVerifyRequestMerchantDetail>>(tmpReq->merchantDetail)) {
    request->merchantDetailShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->merchantDetail, make_shared<string>("MerchantDetail"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certNum)) {
    query->insert(pair<string, string>("CertNum", *request->certNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->credName)) {
    query->insert(pair<string, string>("CredName", *request->credName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->credType)) {
    query->insert(pair<string, string>("CredType", *request->credType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->identifyNum)) {
    query->insert(pair<string, string>("IdentifyNum", *request->identifyNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    query->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isCheck)) {
    query->insert(pair<string, string>("IsCheck", *request->isCheck));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isOCR)) {
    query->insert(pair<string, string>("IsOCR", *request->isOCR));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantDetailShrink)) {
    query->insert(pair<string, string>("MerchantDetail", *request->merchantDetailShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->merchantId)) {
    query->insert(pair<string, string>("MerchantId", *request->merchantId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    query->insert(pair<string, string>("Prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->promptModel)) {
    query->insert(pair<string, string>("PromptModel", *request->promptModel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageContext)) {
    body->insert(pair<string, string>("ImageContext", *request->imageContext));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CredentialVerify"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CredentialVerifyResponse(callApi(params, req, runtime));
}

CredentialVerifyResponse Alibabacloud_Cloudauth20190307::Client::credentialVerify(shared_ptr<CredentialVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return credentialVerifyWithOptions(request, runtime);
}

DeepfakeDetectResponse Alibabacloud_Cloudauth20190307::Client::deepfakeDetectWithOptions(shared_ptr<DeepfakeDetectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->faceInputType)) {
    query->insert(pair<string, string>("FaceInputType", *request->faceInputType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faceUrl)) {
    query->insert(pair<string, string>("FaceUrl", *request->faceUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerOrderNo)) {
    query->insert(pair<string, string>("OuterOrderNo", *request->outerOrderNo));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->faceBase64)) {
    body->insert(pair<string, string>("FaceBase64", *request->faceBase64));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeepfakeDetect"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeepfakeDetectResponse(callApi(params, req, runtime));
}

DeepfakeDetectResponse Alibabacloud_Cloudauth20190307::Client::deepfakeDetect(shared_ptr<DeepfakeDetectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deepfakeDetectWithOptions(request, runtime);
}

DeleteFaceVerifyResultResponse Alibabacloud_Cloudauth20190307::Client::deleteFaceVerifyResultWithOptions(shared_ptr<DeleteFaceVerifyResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certifyId)) {
    query->insert(pair<string, string>("CertifyId", *request->certifyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteAfterQuery)) {
    query->insert(pair<string, string>("DeleteAfterQuery", *request->deleteAfterQuery));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFaceVerifyResult"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteFaceVerifyResultResponse(callApi(params, req, runtime));
}

DeleteFaceVerifyResultResponse Alibabacloud_Cloudauth20190307::Client::deleteFaceVerifyResult(shared_ptr<DeleteFaceVerifyResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteFaceVerifyResultWithOptions(request, runtime);
}

DescribeDeviceInfoResponse Alibabacloud_Cloudauth20190307::Client::describeDeviceInfoWithOptions(shared_ptr<DescribeDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiredEndDay)) {
    query->insert(pair<string, string>("ExpiredEndDay", *request->expiredEndDay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiredStartDay)) {
    query->insert(pair<string, string>("ExpiredStartDay", *request->expiredStartDay));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userDeviceId)) {
    query->insert(pair<string, string>("UserDeviceId", *request->userDeviceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDeviceInfo"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDeviceInfoResponse(callApi(params, req, runtime));
}

DescribeDeviceInfoResponse Alibabacloud_Cloudauth20190307::Client::describeDeviceInfo(shared_ptr<DescribeDeviceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeviceInfoWithOptions(request, runtime);
}

DescribeFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::describeFaceVerifyWithOptions(shared_ptr<DescribeFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certifyId)) {
    query->insert(pair<string, string>("CertifyId", *request->certifyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pictureReturnType)) {
    query->insert(pair<string, string>("PictureReturnType", *request->pictureReturnType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sceneId)) {
    query->insert(pair<string, long>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFaceVerify"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFaceVerifyResponse(callApi(params, req, runtime));
}

DescribeFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::describeFaceVerify(shared_ptr<DescribeFaceVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFaceVerifyWithOptions(request, runtime);
}

DescribeOssUploadTokenResponse Alibabacloud_Cloudauth20190307::Client::describeOssUploadTokenWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeOssUploadToken"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeOssUploadTokenResponse(callApi(params, req, runtime));
}

DescribeOssUploadTokenResponse Alibabacloud_Cloudauth20190307::Client::describeOssUploadToken() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOssUploadTokenWithOptions(runtime);
}

DescribePageFaceVerifyDataResponse Alibabacloud_Cloudauth20190307::Client::describePageFaceVerifyDataWithOptions(shared_ptr<DescribePageFaceVerifyDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sceneId)) {
    query->insert(pair<string, long>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePageFaceVerifyData"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePageFaceVerifyDataResponse(callApi(params, req, runtime));
}

DescribePageFaceVerifyDataResponse Alibabacloud_Cloudauth20190307::Client::describePageFaceVerifyData(shared_ptr<DescribePageFaceVerifyDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePageFaceVerifyDataWithOptions(request, runtime);
}

DescribeSmartStatisticsPageListResponse Alibabacloud_Cloudauth20190307::Client::describeSmartStatisticsPageListWithOptions(shared_ptr<DescribeSmartStatisticsPageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPage)) {
    query->insert(pair<string, string>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    query->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSmartStatisticsPageList"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSmartStatisticsPageListResponse(callApi(params, req, runtime));
}

DescribeSmartStatisticsPageListResponse Alibabacloud_Cloudauth20190307::Client::describeSmartStatisticsPageList(shared_ptr<DescribeSmartStatisticsPageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSmartStatisticsPageListWithOptions(request, runtime);
}

DescribeVerifyResultResponse Alibabacloud_Cloudauth20190307::Client::describeVerifyResultWithOptions(shared_ptr<DescribeVerifyResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVerifyResult"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVerifyResultResponse(callApi(params, req, runtime));
}

DescribeVerifyResultResponse Alibabacloud_Cloudauth20190307::Client::describeVerifyResult(shared_ptr<DescribeVerifyResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVerifyResultWithOptions(request, runtime);
}

DescribeVerifySDKResponse Alibabacloud_Cloudauth20190307::Client::describeVerifySDKWithOptions(shared_ptr<DescribeVerifySDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVerifySDK"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVerifySDKResponse(callApi(params, req, runtime));
}

DescribeVerifySDKResponse Alibabacloud_Cloudauth20190307::Client::describeVerifySDK(shared_ptr<DescribeVerifySDKRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVerifySDKWithOptions(request, runtime);
}

DescribeVerifyTokenResponse Alibabacloud_Cloudauth20190307::Client::describeVerifyTokenWithOptions(shared_ptr<DescribeVerifyTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackSeed)) {
    query->insert(pair<string, string>("CallbackSeed", *request->callbackSeed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackUrl)) {
    query->insert(pair<string, string>("CallbackUrl", *request->callbackUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faceRetainedImageUrl)) {
    query->insert(pair<string, string>("FaceRetainedImageUrl", *request->faceRetainedImageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->failedRedirectUrl)) {
    query->insert(pair<string, string>("FailedRedirectUrl", *request->failedRedirectUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idCardBackImageUrl)) {
    query->insert(pair<string, string>("IdCardBackImageUrl", *request->idCardBackImageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idCardFrontImageUrl)) {
    query->insert(pair<string, string>("IdCardFrontImageUrl", *request->idCardFrontImageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idCardNumber)) {
    query->insert(pair<string, string>("IdCardNumber", *request->idCardNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->passedRedirectUrl)) {
    query->insert(pair<string, string>("PassedRedirectUrl", *request->passedRedirectUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIp)) {
    query->insert(pair<string, string>("UserIp", *request->userIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userPhoneNumber)) {
    query->insert(pair<string, string>("UserPhoneNumber", *request->userPhoneNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->userRegistTime)) {
    query->insert(pair<string, long>("UserRegistTime", *request->userRegistTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeVerifyToken"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeVerifyTokenResponse(callApi(params, req, runtime));
}

DescribeVerifyTokenResponse Alibabacloud_Cloudauth20190307::Client::describeVerifyToken(shared_ptr<DescribeVerifyTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVerifyTokenWithOptions(request, runtime);
}

DetectFaceAttributesResponse Alibabacloud_Cloudauth20190307::Client::detectFaceAttributesWithOptions(shared_ptr<DetectFaceAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    body->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialValue)) {
    body->insert(pair<string, string>("MaterialValue", *request->materialValue));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectFaceAttributes"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetectFaceAttributesResponse(callApi(params, req, runtime));
}

DetectFaceAttributesResponse Alibabacloud_Cloudauth20190307::Client::detectFaceAttributes(shared_ptr<DetectFaceAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectFaceAttributesWithOptions(request, runtime);
}

Id2MetaVerifyResponse Alibabacloud_Cloudauth20190307::Client::id2MetaVerifyWithOptions(shared_ptr<Id2MetaVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identifyNum)) {
    query->insert(pair<string, string>("IdentifyNum", *request->identifyNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramType)) {
    query->insert(pair<string, string>("ParamType", *request->paramType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Id2MetaVerify"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return Id2MetaVerifyResponse(callApi(params, req, runtime));
}

Id2MetaVerifyResponse Alibabacloud_Cloudauth20190307::Client::id2MetaVerify(shared_ptr<Id2MetaVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return id2MetaVerifyWithOptions(request, runtime);
}

InitFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::initFaceVerifyWithOptions(shared_ptr<InitFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appQualityCheck)) {
    query->insert(pair<string, string>("AppQualityCheck", *request->appQualityCheck));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->birthday)) {
    query->insert(pair<string, string>("Birthday", *request->birthday));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackToken)) {
    query->insert(pair<string, string>("CallbackToken", *request->callbackToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackUrl)) {
    query->insert(pair<string, string>("CallbackUrl", *request->callbackUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certName)) {
    query->insert(pair<string, string>("CertName", *request->certName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certNo)) {
    query->insert(pair<string, string>("CertNo", *request->certNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certType)) {
    query->insert(pair<string, string>("CertType", *request->certType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certifyId)) {
    query->insert(pair<string, string>("CertifyId", *request->certifyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certifyUrlStyle)) {
    query->insert(pair<string, string>("CertifyUrlStyle", *request->certifyUrlStyle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certifyUrlType)) {
    query->insert(pair<string, string>("CertifyUrlType", *request->certifyUrlType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptType)) {
    query->insert(pair<string, string>("EncryptType", *request->encryptType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faceContrastPictureUrl)) {
    query->insert(pair<string, string>("FaceContrastPictureUrl", *request->faceContrastPictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faceGuardOutput)) {
    query->insert(pair<string, string>("FaceGuardOutput", *request->faceGuardOutput));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    query->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metaInfo)) {
    query->insert(pair<string, string>("MetaInfo", *request->metaInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mobile)) {
    query->insert(pair<string, string>("Mobile", *request->mobile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    query->insert(pair<string, string>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucketName)) {
    query->insert(pair<string, string>("OssBucketName", *request->ossBucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossObjectName)) {
    query->insert(pair<string, string>("OssObjectName", *request->ossObjectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerOrderNo)) {
    query->insert(pair<string, string>("OuterOrderNo", *request->outerOrderNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->procedurePriority)) {
    query->insert(pair<string, string>("ProcedurePriority", *request->procedurePriority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rarelyCharacters)) {
    query->insert(pair<string, string>("RarelyCharacters", *request->rarelyCharacters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->readImg)) {
    query->insert(pair<string, string>("ReadImg", *request->readImg));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->returnUrl)) {
    query->insert(pair<string, string>("ReturnUrl", *request->returnUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sceneId)) {
    query->insert(pair<string, long>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->suitableType)) {
    query->insert(pair<string, string>("SuitableType", *request->suitableType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uiCustomUrl)) {
    query->insert(pair<string, string>("UiCustomUrl", *request->uiCustomUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->validityDate)) {
    query->insert(pair<string, string>("ValidityDate", *request->validityDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoEvidence)) {
    query->insert(pair<string, string>("VideoEvidence", *request->videoEvidence));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voluntaryCustomizedContent)) {
    query->insert(pair<string, string>("VoluntaryCustomizedContent", *request->voluntaryCustomizedContent));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authId)) {
    body->insert(pair<string, string>("AuthId", *request->authId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crop)) {
    body->insert(pair<string, string>("Crop", *request->crop));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faceContrastPicture)) {
    body->insert(pair<string, string>("FaceContrastPicture", *request->faceContrastPicture));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    body->insert(pair<string, string>("Model", *request->model));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitFaceVerify"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitFaceVerifyResponse(callApi(params, req, runtime));
}

InitFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::initFaceVerify(shared_ptr<InitFaceVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initFaceVerifyWithOptions(request, runtime);
}

InsertWhiteListSettingResponse Alibabacloud_Cloudauth20190307::Client::insertWhiteListSettingWithOptions(shared_ptr<InsertWhiteListSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certNo)) {
    query->insert(pair<string, string>("CertNo", *request->certNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certifyId)) {
    query->insert(pair<string, string>("CertifyId", *request->certifyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->remark)) {
    query->insert(pair<string, string>("Remark", *request->remark));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sceneId)) {
    query->insert(pair<string, long>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    query->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->validDay)) {
    query->insert(pair<string, long>("ValidDay", *request->validDay));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertWhiteListSetting"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InsertWhiteListSettingResponse(callApi(params, req, runtime));
}

InsertWhiteListSettingResponse Alibabacloud_Cloudauth20190307::Client::insertWhiteListSetting(shared_ptr<InsertWhiteListSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return insertWhiteListSettingWithOptions(request, runtime);
}

LivenessFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::livenessFaceVerifyWithOptions(shared_ptr<LivenessFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    query->insert(pair<string, string>("Model", *request->model));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certifyId)) {
    body->insert(pair<string, string>("CertifyId", *request->certifyId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->crop)) {
    body->insert(pair<string, string>("Crop", *request->crop));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceToken)) {
    body->insert(pair<string, string>("DeviceToken", *request->deviceToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faceContrastPicture)) {
    body->insert(pair<string, string>("FaceContrastPicture", *request->faceContrastPicture));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faceContrastPictureUrl)) {
    body->insert(pair<string, string>("FaceContrastPictureUrl", *request->faceContrastPictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ip)) {
    body->insert(pair<string, string>("Ip", *request->ip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mobile)) {
    body->insert(pair<string, string>("Mobile", *request->mobile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucketName)) {
    body->insert(pair<string, string>("OssBucketName", *request->ossBucketName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossObjectName)) {
    body->insert(pair<string, string>("OssObjectName", *request->ossObjectName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outerOrderNo)) {
    body->insert(pair<string, string>("OuterOrderNo", *request->outerOrderNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sceneId)) {
    body->insert(pair<string, long>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LivenessFaceVerify"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LivenessFaceVerifyResponse(callApi(params, req, runtime));
}

LivenessFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::livenessFaceVerify(shared_ptr<LivenessFaceVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return livenessFaceVerifyWithOptions(request, runtime);
}

Mobile3MetaDetailVerifyResponse Alibabacloud_Cloudauth20190307::Client::mobile3MetaDetailVerifyWithOptions(shared_ptr<Mobile3MetaDetailVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identifyNum)) {
    query->insert(pair<string, string>("IdentifyNum", *request->identifyNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mobile)) {
    query->insert(pair<string, string>("Mobile", *request->mobile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramType)) {
    query->insert(pair<string, string>("ParamType", *request->paramType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Mobile3MetaDetailVerify"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return Mobile3MetaDetailVerifyResponse(callApi(params, req, runtime));
}

Mobile3MetaDetailVerifyResponse Alibabacloud_Cloudauth20190307::Client::mobile3MetaDetailVerify(shared_ptr<Mobile3MetaDetailVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return mobile3MetaDetailVerifyWithOptions(request, runtime);
}

Mobile3MetaSimpleVerifyResponse Alibabacloud_Cloudauth20190307::Client::mobile3MetaSimpleVerifyWithOptions(shared_ptr<Mobile3MetaSimpleVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identifyNum)) {
    query->insert(pair<string, string>("IdentifyNum", *request->identifyNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mobile)) {
    query->insert(pair<string, string>("Mobile", *request->mobile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramType)) {
    query->insert(pair<string, string>("ParamType", *request->paramType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Mobile3MetaSimpleVerify"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return Mobile3MetaSimpleVerifyResponse(callApi(params, req, runtime));
}

Mobile3MetaSimpleVerifyResponse Alibabacloud_Cloudauth20190307::Client::mobile3MetaSimpleVerify(shared_ptr<Mobile3MetaSimpleVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return mobile3MetaSimpleVerifyWithOptions(request, runtime);
}

MobileDetectResponse Alibabacloud_Cloudauth20190307::Client::mobileDetectWithOptions(shared_ptr<MobileDetectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mobiles)) {
    query->insert(pair<string, string>("Mobiles", *request->mobiles));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramType)) {
    query->insert(pair<string, string>("ParamType", *request->paramType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MobileDetect"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MobileDetectResponse(callApi(params, req, runtime));
}

MobileDetectResponse Alibabacloud_Cloudauth20190307::Client::mobileDetect(shared_ptr<MobileDetectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return mobileDetectWithOptions(request, runtime);
}

MobileOnlineStatusResponse Alibabacloud_Cloudauth20190307::Client::mobileOnlineStatusWithOptions(shared_ptr<MobileOnlineStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mobile)) {
    query->insert(pair<string, string>("Mobile", *request->mobile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramType)) {
    query->insert(pair<string, string>("ParamType", *request->paramType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MobileOnlineStatus"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MobileOnlineStatusResponse(callApi(params, req, runtime));
}

MobileOnlineStatusResponse Alibabacloud_Cloudauth20190307::Client::mobileOnlineStatus(shared_ptr<MobileOnlineStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return mobileOnlineStatusWithOptions(request, runtime);
}

MobileOnlineTimeResponse Alibabacloud_Cloudauth20190307::Client::mobileOnlineTimeWithOptions(shared_ptr<MobileOnlineTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mobile)) {
    query->insert(pair<string, string>("Mobile", *request->mobile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramType)) {
    query->insert(pair<string, string>("ParamType", *request->paramType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("MobileOnlineTime"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return MobileOnlineTimeResponse(callApi(params, req, runtime));
}

MobileOnlineTimeResponse Alibabacloud_Cloudauth20190307::Client::mobileOnlineTime(shared_ptr<MobileOnlineTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return mobileOnlineTimeWithOptions(request, runtime);
}

ModifyDeviceInfoResponse Alibabacloud_Cloudauth20190307::Client::modifyDeviceInfoWithOptions(shared_ptr<ModifyDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    query->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->duration)) {
    query->insert(pair<string, string>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expiredDay)) {
    query->insert(pair<string, string>("ExpiredDay", *request->expiredDay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userDeviceId)) {
    query->insert(pair<string, string>("UserDeviceId", *request->userDeviceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDeviceInfo"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDeviceInfoResponse(callApi(params, req, runtime));
}

ModifyDeviceInfoResponse Alibabacloud_Cloudauth20190307::Client::modifyDeviceInfo(shared_ptr<ModifyDeviceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDeviceInfoWithOptions(request, runtime);
}

PageQueryWhiteListSettingResponse Alibabacloud_Cloudauth20190307::Client::pageQueryWhiteListSettingWithOptions(shared_ptr<PageQueryWhiteListSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certNo)) {
    query->insert(pair<string, string>("CertNo", *request->certNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certifyId)) {
    query->insert(pair<string, string>("CertifyId", *request->certifyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sceneId)) {
    query->insert(pair<string, long>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    query->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->validEndDate)) {
    query->insert(pair<string, string>("ValidEndDate", *request->validEndDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->validStartDate)) {
    query->insert(pair<string, string>("ValidStartDate", *request->validStartDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PageQueryWhiteListSetting"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PageQueryWhiteListSettingResponse(callApi(params, req, runtime));
}

PageQueryWhiteListSettingResponse Alibabacloud_Cloudauth20190307::Client::pageQueryWhiteListSetting(shared_ptr<PageQueryWhiteListSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pageQueryWhiteListSettingWithOptions(request, runtime);
}

RemoveWhiteListSettingResponse Alibabacloud_Cloudauth20190307::Client::removeWhiteListSettingWithOptions(shared_ptr<RemoveWhiteListSettingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RemoveWhiteListSettingShrinkRequest> request = make_shared<RemoveWhiteListSettingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->ids)) {
    request->idsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->ids, make_shared<string>("Ids"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->idsShrink)) {
    query->insert(pair<string, string>("Ids", *request->idsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceCode)) {
    query->insert(pair<string, string>("ServiceCode", *request->serviceCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveWhiteListSetting"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveWhiteListSettingResponse(callApi(params, req, runtime));
}

RemoveWhiteListSettingResponse Alibabacloud_Cloudauth20190307::Client::removeWhiteListSetting(shared_ptr<RemoveWhiteListSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeWhiteListSettingWithOptions(request, runtime);
}

Vehicle5ItemQueryResponse Alibabacloud_Cloudauth20190307::Client::vehicle5ItemQueryWithOptions(shared_ptr<Vehicle5ItemQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->paramType)) {
    query->insert(pair<string, string>("ParamType", *request->paramType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vehicleNum)) {
    query->insert(pair<string, string>("VehicleNum", *request->vehicleNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vehicleType)) {
    query->insert(pair<string, string>("VehicleType", *request->vehicleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Vehicle5ItemQuery"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return Vehicle5ItemQueryResponse(callApi(params, req, runtime));
}

Vehicle5ItemQueryResponse Alibabacloud_Cloudauth20190307::Client::vehicle5ItemQuery(shared_ptr<Vehicle5ItemQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return vehicle5ItemQueryWithOptions(request, runtime);
}

VehicleInsureQueryResponse Alibabacloud_Cloudauth20190307::Client::vehicleInsureQueryWithOptions(shared_ptr<VehicleInsureQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->paramType)) {
    query->insert(pair<string, string>("ParamType", *request->paramType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vehicleNum)) {
    query->insert(pair<string, string>("VehicleNum", *request->vehicleNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vehicleType)) {
    query->insert(pair<string, string>("VehicleType", *request->vehicleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vin)) {
    query->insert(pair<string, string>("Vin", *request->vin));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VehicleInsureQuery"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VehicleInsureQueryResponse(callApi(params, req, runtime));
}

VehicleInsureQueryResponse Alibabacloud_Cloudauth20190307::Client::vehicleInsureQuery(shared_ptr<VehicleInsureQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return vehicleInsureQueryWithOptions(request, runtime);
}

VehicleMetaVerifyResponse Alibabacloud_Cloudauth20190307::Client::vehicleMetaVerifyWithOptions(shared_ptr<VehicleMetaVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identifyNum)) {
    query->insert(pair<string, string>("IdentifyNum", *request->identifyNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramType)) {
    query->insert(pair<string, string>("ParamType", *request->paramType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vehicleNum)) {
    query->insert(pair<string, string>("VehicleNum", *request->vehicleNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vehicleType)) {
    query->insert(pair<string, string>("VehicleType", *request->vehicleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verifyMetaType)) {
    query->insert(pair<string, string>("VerifyMetaType", *request->verifyMetaType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VehicleMetaVerify"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VehicleMetaVerifyResponse(callApi(params, req, runtime));
}

VehicleMetaVerifyResponse Alibabacloud_Cloudauth20190307::Client::vehicleMetaVerify(shared_ptr<VehicleMetaVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return vehicleMetaVerifyWithOptions(request, runtime);
}

VehicleMetaVerifyV2Response Alibabacloud_Cloudauth20190307::Client::vehicleMetaVerifyV2WithOptions(shared_ptr<VehicleMetaVerifyV2Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->identifyNum)) {
    query->insert(pair<string, string>("IdentifyNum", *request->identifyNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->paramType)) {
    query->insert(pair<string, string>("ParamType", *request->paramType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vehicleNum)) {
    query->insert(pair<string, string>("VehicleNum", *request->vehicleNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vehicleType)) {
    query->insert(pair<string, string>("VehicleType", *request->vehicleType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verifyMetaType)) {
    query->insert(pair<string, string>("VerifyMetaType", *request->verifyMetaType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VehicleMetaVerifyV2"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VehicleMetaVerifyV2Response(callApi(params, req, runtime));
}

VehicleMetaVerifyV2Response Alibabacloud_Cloudauth20190307::Client::vehicleMetaVerifyV2(shared_ptr<VehicleMetaVerifyV2Request> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return vehicleMetaVerifyV2WithOptions(request, runtime);
}

VehicleQueryResponse Alibabacloud_Cloudauth20190307::Client::vehicleQueryWithOptions(shared_ptr<VehicleQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->paramType)) {
    query->insert(pair<string, string>("ParamType", *request->paramType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vehicleNum)) {
    query->insert(pair<string, string>("VehicleNum", *request->vehicleNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vehicleType)) {
    query->insert(pair<string, string>("VehicleType", *request->vehicleType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VehicleQuery"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VehicleQueryResponse(callApi(params, req, runtime));
}

VehicleQueryResponse Alibabacloud_Cloudauth20190307::Client::vehicleQuery(shared_ptr<VehicleQueryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return vehicleQueryWithOptions(request, runtime);
}

VerifyMaterialResponse Alibabacloud_Cloudauth20190307::Client::verifyMaterialWithOptions(shared_ptr<VerifyMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizId)) {
    query->insert(pair<string, string>("BizId", *request->bizId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faceImageUrl)) {
    query->insert(pair<string, string>("FaceImageUrl", *request->faceImageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idCardBackImageUrl)) {
    query->insert(pair<string, string>("IdCardBackImageUrl", *request->idCardBackImageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idCardFrontImageUrl)) {
    query->insert(pair<string, string>("IdCardFrontImageUrl", *request->idCardFrontImageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->idCardNumber)) {
    query->insert(pair<string, string>("IdCardNumber", *request->idCardNumber));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyMaterial"))},
    {"version", boost::any(string("2019-03-07"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifyMaterialResponse(callApi(params, req, runtime));
}

VerifyMaterialResponse Alibabacloud_Cloudauth20190307::Client::verifyMaterial(shared_ptr<VerifyMaterialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyMaterialWithOptions(request, runtime);
}

