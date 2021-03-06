// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/imagerecog_20190930.hpp>
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

using namespace Alibabacloud_Imagerecog20190930;

Alibabacloud_Imagerecog20190930::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("imagerecog"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Imagerecog20190930::Client::getEndpoint(shared_ptr<string> productId,
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

GetAsyncJobResultResponse Alibabacloud_Imagerecog20190930::Client::getAsyncJobResultWithOptions(shared_ptr<GetAsyncJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", !query ? boost::any() : boost::any(*query)}
  }));
  return GetAsyncJobResultResponse(doRPCRequest(make_shared<string>("GetAsyncJobResult"), make_shared<string>("2019-09-30"), make_shared<string>("HTTPS"), make_shared<string>("GET"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAsyncJobResultResponse Alibabacloud_Imagerecog20190930::Client::getAsyncJobResult(shared_ptr<GetAsyncJobResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAsyncJobResultWithOptions(request, runtime);
}

DetectImageElementsResponse Alibabacloud_Imagerecog20190930::Client::detectImageElementsWithOptions(shared_ptr<DetectImageElementsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetectImageElementsResponse(doRPCRequest(make_shared<string>("DetectImageElements"), make_shared<string>("2019-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetectImageElementsResponse Alibabacloud_Imagerecog20190930::Client::detectImageElements(shared_ptr<DetectImageElementsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectImageElementsWithOptions(request, runtime);
}

DetectImageElementsResponse Alibabacloud_Imagerecog20190930::Client::detectImageElementsAdvance(shared_ptr<DetectImageElementsAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"product", boost::any(string("imagerecog"))},
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
  shared_ptr<DetectImageElementsRequest> detectImageElementsReq = make_shared<DetectImageElementsRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, detectImageElementsReq);
  authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
  ossConfig->accessKeyId = authResponse->accessKeyId;
  ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->endpoint, authResponse->useAccelerate, _endpointType));
  ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
    {"filename", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
    {"content", !request->urlObject ? boost::any() : boost::any(*request->urlObject)},
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
  detectImageElementsReq->url = make_shared<string>(string("http://") + string(*authResponse->bucket) + string(".") + string(*authResponse->endpoint) + string("/") + string(*authResponse->objectKey));
  shared_ptr<DetectImageElementsResponse> detectImageElementsResp = make_shared<DetectImageElementsResponse>(detectImageElementsWithOptions(detectImageElementsReq, runtime));
  return *detectImageElementsResp;
}

RecognizeVehicleTypeResponse Alibabacloud_Imagerecog20190930::Client::recognizeVehicleTypeWithOptions(shared_ptr<RecognizeVehicleTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RecognizeVehicleTypeResponse(doRPCRequest(make_shared<string>("RecognizeVehicleType"), make_shared<string>("2019-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeVehicleTypeResponse Alibabacloud_Imagerecog20190930::Client::recognizeVehicleType(shared_ptr<RecognizeVehicleTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeVehicleTypeWithOptions(request, runtime);
}

RecognizeVehicleTypeResponse Alibabacloud_Imagerecog20190930::Client::recognizeVehicleTypeAdvance(shared_ptr<RecognizeVehicleTypeAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"product", boost::any(string("imagerecog"))},
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
  shared_ptr<RecognizeVehicleTypeRequest> recognizeVehicleTypeReq = make_shared<RecognizeVehicleTypeRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, recognizeVehicleTypeReq);
  authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
  ossConfig->accessKeyId = authResponse->accessKeyId;
  ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->endpoint, authResponse->useAccelerate, _endpointType));
  ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
    {"filename", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
    {"content", !request->imageURLObject ? boost::any() : boost::any(*request->imageURLObject)},
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
  recognizeVehicleTypeReq->imageURL = make_shared<string>(string("http://") + string(*authResponse->bucket) + string(".") + string(*authResponse->endpoint) + string("/") + string(*authResponse->objectKey));
  shared_ptr<RecognizeVehicleTypeResponse> recognizeVehicleTypeResp = make_shared<RecognizeVehicleTypeResponse>(recognizeVehicleTypeWithOptions(recognizeVehicleTypeReq, runtime));
  return *recognizeVehicleTypeResp;
}

RecognizeFoodResponse Alibabacloud_Imagerecog20190930::Client::recognizeFoodWithOptions(shared_ptr<RecognizeFoodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RecognizeFoodResponse(doRPCRequest(make_shared<string>("RecognizeFood"), make_shared<string>("2019-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeFoodResponse Alibabacloud_Imagerecog20190930::Client::recognizeFood(shared_ptr<RecognizeFoodRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeFoodWithOptions(request, runtime);
}

RecognizeFoodResponse Alibabacloud_Imagerecog20190930::Client::recognizeFoodAdvance(shared_ptr<RecognizeFoodAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"product", boost::any(string("imagerecog"))},
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
  shared_ptr<RecognizeFoodRequest> recognizeFoodReq = make_shared<RecognizeFoodRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, recognizeFoodReq);
  authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
  ossConfig->accessKeyId = authResponse->accessKeyId;
  ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->endpoint, authResponse->useAccelerate, _endpointType));
  ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
    {"filename", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
    {"content", !request->imageURLObject ? boost::any() : boost::any(*request->imageURLObject)},
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
  recognizeFoodReq->imageURL = make_shared<string>(string("http://") + string(*authResponse->bucket) + string(".") + string(*authResponse->endpoint) + string("/") + string(*authResponse->objectKey));
  shared_ptr<RecognizeFoodResponse> recognizeFoodResp = make_shared<RecognizeFoodResponse>(recognizeFoodWithOptions(recognizeFoodReq, runtime));
  return *recognizeFoodResp;
}

RecognizeImageStyleResponse Alibabacloud_Imagerecog20190930::Client::recognizeImageStyleWithOptions(shared_ptr<RecognizeImageStyleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RecognizeImageStyleResponse(doRPCRequest(make_shared<string>("RecognizeImageStyle"), make_shared<string>("2019-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeImageStyleResponse Alibabacloud_Imagerecog20190930::Client::recognizeImageStyle(shared_ptr<RecognizeImageStyleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeImageStyleWithOptions(request, runtime);
}

RecognizeImageStyleResponse Alibabacloud_Imagerecog20190930::Client::recognizeImageStyleAdvance(shared_ptr<RecognizeImageStyleAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"product", boost::any(string("imagerecog"))},
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
  shared_ptr<RecognizeImageStyleRequest> recognizeImageStyleReq = make_shared<RecognizeImageStyleRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, recognizeImageStyleReq);
  authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
  ossConfig->accessKeyId = authResponse->accessKeyId;
  ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->endpoint, authResponse->useAccelerate, _endpointType));
  ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
    {"filename", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
    {"content", !request->urlObject ? boost::any() : boost::any(*request->urlObject)},
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
  recognizeImageStyleReq->url = make_shared<string>(string("http://") + string(*authResponse->bucket) + string(".") + string(*authResponse->endpoint) + string("/") + string(*authResponse->objectKey));
  shared_ptr<RecognizeImageStyleResponse> recognizeImageStyleResp = make_shared<RecognizeImageStyleResponse>(recognizeImageStyleWithOptions(recognizeImageStyleReq, runtime));
  return *recognizeImageStyleResp;
}

RecognizeSceneResponse Alibabacloud_Imagerecog20190930::Client::recognizeSceneWithOptions(shared_ptr<RecognizeSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RecognizeSceneResponse(doRPCRequest(make_shared<string>("RecognizeScene"), make_shared<string>("2019-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeSceneResponse Alibabacloud_Imagerecog20190930::Client::recognizeScene(shared_ptr<RecognizeSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeSceneWithOptions(request, runtime);
}

RecognizeSceneResponse Alibabacloud_Imagerecog20190930::Client::recognizeSceneAdvance(shared_ptr<RecognizeSceneAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"product", boost::any(string("imagerecog"))},
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
  shared_ptr<RecognizeSceneRequest> recognizeSceneReq = make_shared<RecognizeSceneRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, recognizeSceneReq);
  authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
  ossConfig->accessKeyId = authResponse->accessKeyId;
  ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->endpoint, authResponse->useAccelerate, _endpointType));
  ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
    {"filename", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
    {"content", !request->imageURLObject ? boost::any() : boost::any(*request->imageURLObject)},
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
  recognizeSceneReq->imageURL = make_shared<string>(string("http://") + string(*authResponse->bucket) + string(".") + string(*authResponse->endpoint) + string("/") + string(*authResponse->objectKey));
  shared_ptr<RecognizeSceneResponse> recognizeSceneResp = make_shared<RecognizeSceneResponse>(recognizeSceneWithOptions(recognizeSceneReq, runtime));
  return *recognizeSceneResp;
}

ClassifyingRubbishResponse Alibabacloud_Imagerecog20190930::Client::classifyingRubbishWithOptions(shared_ptr<ClassifyingRubbishRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ClassifyingRubbishResponse(doRPCRequest(make_shared<string>("ClassifyingRubbish"), make_shared<string>("2019-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ClassifyingRubbishResponse Alibabacloud_Imagerecog20190930::Client::classifyingRubbish(shared_ptr<ClassifyingRubbishRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return classifyingRubbishWithOptions(request, runtime);
}

ClassifyingRubbishResponse Alibabacloud_Imagerecog20190930::Client::classifyingRubbishAdvance(shared_ptr<ClassifyingRubbishAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"product", boost::any(string("imagerecog"))},
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
  shared_ptr<ClassifyingRubbishRequest> classifyingRubbishReq = make_shared<ClassifyingRubbishRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, classifyingRubbishReq);
  authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
  ossConfig->accessKeyId = authResponse->accessKeyId;
  ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->endpoint, authResponse->useAccelerate, _endpointType));
  ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
    {"filename", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
    {"content", !request->imageURLObject ? boost::any() : boost::any(*request->imageURLObject)},
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
  classifyingRubbishReq->imageURL = make_shared<string>(string("http://") + string(*authResponse->bucket) + string(".") + string(*authResponse->endpoint) + string("/") + string(*authResponse->objectKey));
  shared_ptr<ClassifyingRubbishResponse> classifyingRubbishResp = make_shared<ClassifyingRubbishResponse>(classifyingRubbishWithOptions(classifyingRubbishReq, runtime));
  return *classifyingRubbishResp;
}

DetectFruitsResponse Alibabacloud_Imagerecog20190930::Client::detectFruitsWithOptions(shared_ptr<DetectFruitsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetectFruitsResponse(doRPCRequest(make_shared<string>("DetectFruits"), make_shared<string>("2019-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetectFruitsResponse Alibabacloud_Imagerecog20190930::Client::detectFruits(shared_ptr<DetectFruitsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectFruitsWithOptions(request, runtime);
}

DetectFruitsResponse Alibabacloud_Imagerecog20190930::Client::detectFruitsAdvance(shared_ptr<DetectFruitsAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"product", boost::any(string("imagerecog"))},
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
  shared_ptr<DetectFruitsRequest> detectFruitsReq = make_shared<DetectFruitsRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, detectFruitsReq);
  authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
  ossConfig->accessKeyId = authResponse->accessKeyId;
  ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->endpoint, authResponse->useAccelerate, _endpointType));
  ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
    {"filename", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
    {"content", !request->imageURLObject ? boost::any() : boost::any(*request->imageURLObject)},
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
  detectFruitsReq->imageURL = make_shared<string>(string("http://") + string(*authResponse->bucket) + string(".") + string(*authResponse->endpoint) + string("/") + string(*authResponse->objectKey));
  shared_ptr<DetectFruitsResponse> detectFruitsResp = make_shared<DetectFruitsResponse>(detectFruitsWithOptions(detectFruitsReq, runtime));
  return *detectFruitsResp;
}

RecognizeImageColorResponse Alibabacloud_Imagerecog20190930::Client::recognizeImageColorWithOptions(shared_ptr<RecognizeImageColorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RecognizeImageColorResponse(doRPCRequest(make_shared<string>("RecognizeImageColor"), make_shared<string>("2019-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeImageColorResponse Alibabacloud_Imagerecog20190930::Client::recognizeImageColor(shared_ptr<RecognizeImageColorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeImageColorWithOptions(request, runtime);
}

RecognizeImageColorResponse Alibabacloud_Imagerecog20190930::Client::recognizeImageColorAdvance(shared_ptr<RecognizeImageColorAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"product", boost::any(string("imagerecog"))},
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
  shared_ptr<RecognizeImageColorRequest> recognizeImageColorReq = make_shared<RecognizeImageColorRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, recognizeImageColorReq);
  authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
  ossConfig->accessKeyId = authResponse->accessKeyId;
  ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->endpoint, authResponse->useAccelerate, _endpointType));
  ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
    {"filename", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
    {"content", !request->urlObject ? boost::any() : boost::any(*request->urlObject)},
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
  recognizeImageColorReq->url = make_shared<string>(string("http://") + string(*authResponse->bucket) + string(".") + string(*authResponse->endpoint) + string("/") + string(*authResponse->objectKey));
  shared_ptr<RecognizeImageColorResponse> recognizeImageColorResp = make_shared<RecognizeImageColorResponse>(recognizeImageColorWithOptions(recognizeImageColorReq, runtime));
  return *recognizeImageColorResp;
}

RecognizeLogoResponse Alibabacloud_Imagerecog20190930::Client::recognizeLogoWithOptions(shared_ptr<RecognizeLogoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return RecognizeLogoResponse(doRPCRequest(make_shared<string>("RecognizeLogo"), make_shared<string>("2019-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

RecognizeLogoResponse Alibabacloud_Imagerecog20190930::Client::recognizeLogo(shared_ptr<RecognizeLogoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recognizeLogoWithOptions(request, runtime);
}

TaggingImageResponse Alibabacloud_Imagerecog20190930::Client::taggingImageWithOptions(shared_ptr<TaggingImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return TaggingImageResponse(doRPCRequest(make_shared<string>("TaggingImage"), make_shared<string>("2019-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

TaggingImageResponse Alibabacloud_Imagerecog20190930::Client::taggingImage(shared_ptr<TaggingImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return taggingImageWithOptions(request, runtime);
}

TaggingImageResponse Alibabacloud_Imagerecog20190930::Client::taggingImageAdvance(shared_ptr<TaggingImageAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"product", boost::any(string("imagerecog"))},
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
  shared_ptr<TaggingImageRequest> taggingImageReq = make_shared<TaggingImageRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, taggingImageReq);
  authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
  ossConfig->accessKeyId = authResponse->accessKeyId;
  ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->endpoint, authResponse->useAccelerate, _endpointType));
  ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
    {"filename", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
    {"content", !request->imageURLObject ? boost::any() : boost::any(*request->imageURLObject)},
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
  taggingImageReq->imageURL = make_shared<string>(string("http://") + string(*authResponse->bucket) + string(".") + string(*authResponse->endpoint) + string("/") + string(*authResponse->objectKey));
  shared_ptr<TaggingImageResponse> taggingImageResp = make_shared<TaggingImageResponse>(taggingImageWithOptions(taggingImageReq, runtime));
  return *taggingImageResp;
}

EvaluateCertificateQualityResponse Alibabacloud_Imagerecog20190930::Client::evaluateCertificateQualityWithOptions(shared_ptr<EvaluateCertificateQualityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EvaluateCertificateQualityResponse(doRPCRequest(make_shared<string>("EvaluateCertificateQuality"), make_shared<string>("2019-09-30"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EvaluateCertificateQualityResponse Alibabacloud_Imagerecog20190930::Client::evaluateCertificateQuality(shared_ptr<EvaluateCertificateQualityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return evaluateCertificateQualityWithOptions(request, runtime);
}

EvaluateCertificateQualityResponse Alibabacloud_Imagerecog20190930::Client::evaluateCertificateQualityAdvance(shared_ptr<EvaluateCertificateQualityAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"product", boost::any(string("imagerecog"))},
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
  shared_ptr<EvaluateCertificateQualityRequest> evaluateCertificateQualityReq = make_shared<EvaluateCertificateQualityRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, evaluateCertificateQualityReq);
  authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
  ossConfig->accessKeyId = authResponse->accessKeyId;
  ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->endpoint, authResponse->useAccelerate, _endpointType));
  ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
    {"filename", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
    {"content", !request->imageURLObject ? boost::any() : boost::any(*request->imageURLObject)},
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
  evaluateCertificateQualityReq->imageURL = make_shared<string>(string("http://") + string(*authResponse->bucket) + string(".") + string(*authResponse->endpoint) + string("/") + string(*authResponse->objectKey));
  shared_ptr<EvaluateCertificateQualityResponse> evaluateCertificateQualityResp = make_shared<EvaluateCertificateQualityResponse>(evaluateCertificateQualityWithOptions(evaluateCertificateQualityReq, runtime));
  return *evaluateCertificateQualityResp;
}

