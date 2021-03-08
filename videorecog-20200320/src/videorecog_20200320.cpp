// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/videorecog_20200320.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <alibabacloud/open_platform_20191219.hpp>
#include <alibabacloud/oss.hpp>
#include <alibabacloud/ossutil.hpp>
#include <alibabacloud/rpc.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/file_form.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Videorecog20200320;

Alibabacloud_Videorecog20200320::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("videorecog"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Videorecog20200320::Client::getEndpoint(shared_ptr<string> productId,
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

GetAsyncJobResultResponse Alibabacloud_Videorecog20200320::Client::getAsyncJobResultWithOptions(shared_ptr<GetAsyncJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAsyncJobResultResponse(doRPCRequest(make_shared<string>("GetAsyncJobResult"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAsyncJobResultResponse Alibabacloud_Videorecog20200320::Client::getAsyncJobResult(shared_ptr<GetAsyncJobResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAsyncJobResultWithOptions(request, runtime);
}

DetectVideoShotResponse Alibabacloud_Videorecog20200320::Client::detectVideoShotWithOptions(shared_ptr<DetectVideoShotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetectVideoShotResponse(doRPCRequest(make_shared<string>("DetectVideoShot"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetectVideoShotResponse Alibabacloud_Videorecog20200320::Client::detectVideoShot(shared_ptr<DetectVideoShotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectVideoShotWithOptions(request, runtime);
}

DetectVideoShotResponse Alibabacloud_Videorecog20200320::Client::detectVideoShotAdvance(shared_ptr<DetectVideoShotAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<Alibabacloud_RPC::Config> authConfig = make_shared<Alibabacloud_RPC::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"endpoint", boost::any(string("openplatform.aliyuncs.com"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("videorecog"))},
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
  shared_ptr<DetectVideoShotRequest> detectVideoShotReq = make_shared<DetectVideoShotRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, detectVideoShotReq);
  authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
  ossConfig->accessKeyId = authResponse->accessKeyId;
  ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->endpoint, authResponse->useAccelerate, _endpointType));
  ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
    {"filename", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
    {"content", !request->videoUrlObject ? boost::any() : boost::any(*request->videoUrlObject)},
    {"contentType", boost::any(string(""))}
  }));
  ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
    {"accessKeyId", !authResponse->accessKeyId ? boost::any() : boost::any(*authResponse->accessKeyId)},
    {"policy", !authResponse->encodedPolicy ? boost::any() : boost::any(*authResponse->encodedPolicy)},
    {"signature", !authResponse->signature ? boost::any() : boost::any(*authResponse->signature)},
    {"key", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
    {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
    {"successActionStatus", boost::any(string("201"))}
  }));
  uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
    {"bucketName", !authResponse->bucket ? boost::any() : boost::any(*authResponse->bucket)},
    {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
  }));
  ossClient->postObject(uploadRequest, ossRuntime);
  detectVideoShotReq->videoUrl = make_shared<string>(string("http://") + string(*authResponse->bucket) + string(".") + string(*authResponse->endpoint) + string("/") + string(*authResponse->objectKey));
  shared_ptr<DetectVideoShotResponse> detectVideoShotResp = make_shared<DetectVideoShotResponse>(detectVideoShotWithOptions(detectVideoShotReq, runtime));
  return *detectVideoShotResp;
}

GenerateVideoCoverResponse Alibabacloud_Videorecog20200320::Client::generateVideoCoverWithOptions(shared_ptr<GenerateVideoCoverRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GenerateVideoCoverResponse(doRPCRequest(make_shared<string>("GenerateVideoCover"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GenerateVideoCoverResponse Alibabacloud_Videorecog20200320::Client::generateVideoCover(shared_ptr<GenerateVideoCoverRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateVideoCoverWithOptions(request, runtime);
}

GenerateVideoCoverResponse Alibabacloud_Videorecog20200320::Client::generateVideoCoverAdvance(shared_ptr<GenerateVideoCoverAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<Alibabacloud_RPC::Config> authConfig = make_shared<Alibabacloud_RPC::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"endpoint", boost::any(string("openplatform.aliyuncs.com"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("videorecog"))},
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
  shared_ptr<GenerateVideoCoverRequest> generateVideoCoverReq = make_shared<GenerateVideoCoverRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, generateVideoCoverReq);
  authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
  ossConfig->accessKeyId = authResponse->accessKeyId;
  ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->endpoint, authResponse->useAccelerate, _endpointType));
  ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
    {"filename", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
    {"content", !request->videoUrlObject ? boost::any() : boost::any(*request->videoUrlObject)},
    {"contentType", boost::any(string(""))}
  }));
  ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
    {"accessKeyId", !authResponse->accessKeyId ? boost::any() : boost::any(*authResponse->accessKeyId)},
    {"policy", !authResponse->encodedPolicy ? boost::any() : boost::any(*authResponse->encodedPolicy)},
    {"signature", !authResponse->signature ? boost::any() : boost::any(*authResponse->signature)},
    {"key", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
    {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
    {"successActionStatus", boost::any(string("201"))}
  }));
  uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
    {"bucketName", !authResponse->bucket ? boost::any() : boost::any(*authResponse->bucket)},
    {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
  }));
  ossClient->postObject(uploadRequest, ossRuntime);
  generateVideoCoverReq->videoUrl = make_shared<string>(string("http://") + string(*authResponse->bucket) + string(".") + string(*authResponse->endpoint) + string("/") + string(*authResponse->objectKey));
  shared_ptr<GenerateVideoCoverResponse> generateVideoCoverResp = make_shared<GenerateVideoCoverResponse>(generateVideoCoverWithOptions(generateVideoCoverReq, runtime));
  return *generateVideoCoverResp;
}

UnderstandVideoContentResponse Alibabacloud_Videorecog20200320::Client::understandVideoContentWithOptions(shared_ptr<UnderstandVideoContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UnderstandVideoContentResponse(doRPCRequest(make_shared<string>("UnderstandVideoContent"), make_shared<string>("2020-03-20"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UnderstandVideoContentResponse Alibabacloud_Videorecog20200320::Client::understandVideoContent(shared_ptr<UnderstandVideoContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return understandVideoContentWithOptions(request, runtime);
}

UnderstandVideoContentResponse Alibabacloud_Videorecog20200320::Client::understandVideoContentAdvance(shared_ptr<UnderstandVideoContentAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<Alibabacloud_RPC::Config> authConfig = make_shared<Alibabacloud_RPC::Config>(map<string, boost::any>({
    {"accessKeyId", !accessKeyId ? boost::any() : boost::any(*accessKeyId)},
    {"accessKeySecret", !accessKeySecret ? boost::any() : boost::any(*accessKeySecret)},
    {"type", boost::any(string("access_key"))},
    {"endpoint", boost::any(string("openplatform.aliyuncs.com"))},
    {"protocol", !_protocol ? boost::any() : boost::any(*_protocol)},
    {"regionId", !_regionId ? boost::any() : boost::any(*_regionId)}
  }));
  shared_ptr<Alibabacloud_OpenPlatform20191219::Client> authClient = make_shared<Alibabacloud_OpenPlatform20191219::Client>(authConfig);
  shared_ptr<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest> authRequest = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadRequest>(map<string, boost::any>({
    {"product", boost::any(string("videorecog"))},
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
  shared_ptr<UnderstandVideoContentRequest> understandVideoContentReq = make_shared<UnderstandVideoContentRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, understandVideoContentReq);
  authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
  ossConfig->accessKeyId = authResponse->accessKeyId;
  ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->endpoint, authResponse->useAccelerate, _endpointType));
  ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
    {"filename", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
    {"content", !request->videoURLObject ? boost::any() : boost::any(*request->videoURLObject)},
    {"contentType", boost::any(string(""))}
  }));
  ossHeader = make_shared<Alibabacloud_OSS::PostObjectRequestHeader>(map<string, boost::any>({
    {"accessKeyId", !authResponse->accessKeyId ? boost::any() : boost::any(*authResponse->accessKeyId)},
    {"policy", !authResponse->encodedPolicy ? boost::any() : boost::any(*authResponse->encodedPolicy)},
    {"signature", !authResponse->signature ? boost::any() : boost::any(*authResponse->signature)},
    {"key", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
    {"file", !fileObj ? boost::any() : boost::any(*fileObj)},
    {"successActionStatus", boost::any(string("201"))}
  }));
  uploadRequest = make_shared<Alibabacloud_OSS::PostObjectRequest>(map<string, boost::any>({
    {"bucketName", !authResponse->bucket ? boost::any() : boost::any(*authResponse->bucket)},
    {"header", !ossHeader ? boost::any() : boost::any(*ossHeader)}
  }));
  ossClient->postObject(uploadRequest, ossRuntime);
  understandVideoContentReq->videoURL = make_shared<string>(string("http://") + string(*authResponse->bucket) + string(".") + string(*authResponse->endpoint) + string("/") + string(*authResponse->objectKey));
  shared_ptr<UnderstandVideoContentResponse> understandVideoContentResp = make_shared<UnderstandVideoContentResponse>(understandVideoContentWithOptions(understandVideoContentReq, runtime));
  return *understandVideoContentResp;
}

