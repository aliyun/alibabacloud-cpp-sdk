// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/threedvision_20210131.hpp>
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

using namespace std;

using namespace Alibabacloud_Threedvision20210131;

Alibabacloud_Threedvision20210131::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("threedvision"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Threedvision20210131::Client::getEndpoint(shared_ptr<string> productId,
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

ReconstructBodyBySingleImageResponse Alibabacloud_Threedvision20210131::Client::reconstructBodyBySingleImageWithOptions(shared_ptr<ReconstructBodyBySingleImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReconstructBodyBySingleImageResponse(doRPCRequest(make_shared<string>("ReconstructBodyBySingleImage"), make_shared<string>("2021-01-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReconstructBodyBySingleImageResponse Alibabacloud_Threedvision20210131::Client::reconstructBodyBySingleImage(shared_ptr<ReconstructBodyBySingleImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reconstructBodyBySingleImageWithOptions(request, runtime);
}

ReconstructBodyBySingleImageResponse Alibabacloud_Threedvision20210131::Client::reconstructBodyBySingleImageAdvance(shared_ptr<ReconstructBodyBySingleImageAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"product", boost::any(string("threedvision"))},
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
  shared_ptr<ReconstructBodyBySingleImageRequest> reconstructBodyBySingleImageReq = make_shared<ReconstructBodyBySingleImageRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, reconstructBodyBySingleImageReq);
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
  reconstructBodyBySingleImageReq->imageURL = make_shared<string>(string("http://") + string(*authResponse->bucket) + string(".") + string(*authResponse->endpoint) + string("/") + string(*authResponse->objectKey));
  shared_ptr<ReconstructBodyBySingleImageResponse> reconstructBodyBySingleImageResp = make_shared<ReconstructBodyBySingleImageResponse>(reconstructBodyBySingleImageWithOptions(reconstructBodyBySingleImageReq, runtime));
  return *reconstructBodyBySingleImageResp;
}

ReconstructThreeDMultiViewResponse Alibabacloud_Threedvision20210131::Client::reconstructThreeDMultiViewWithOptions(shared_ptr<ReconstructThreeDMultiViewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ReconstructThreeDMultiViewResponse(doRPCRequest(make_shared<string>("ReconstructThreeDMultiView"), make_shared<string>("2021-01-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ReconstructThreeDMultiViewResponse Alibabacloud_Threedvision20210131::Client::reconstructThreeDMultiView(shared_ptr<ReconstructThreeDMultiViewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reconstructThreeDMultiViewWithOptions(request, runtime);
}

ReconstructThreeDMultiViewResponse Alibabacloud_Threedvision20210131::Client::reconstructThreeDMultiViewAdvance(shared_ptr<ReconstructThreeDMultiViewAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"product", boost::any(string("threedvision"))},
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
  shared_ptr<ReconstructThreeDMultiViewRequest> reconstructThreeDMultiViewReq = make_shared<ReconstructThreeDMultiViewRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, reconstructThreeDMultiViewReq);
  authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
  ossConfig->accessKeyId = authResponse->accessKeyId;
  ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->endpoint, authResponse->useAccelerate, _endpointType));
  ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
  fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
    {"filename", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
    {"content", !request->zipFileUrlObject ? boost::any() : boost::any(*request->zipFileUrlObject)},
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
  reconstructThreeDMultiViewReq->zipFileUrl = make_shared<string>(string("http://") + string(*authResponse->bucket) + string(".") + string(*authResponse->endpoint) + string("/") + string(*authResponse->objectKey));
  shared_ptr<ReconstructThreeDMultiViewResponse> reconstructThreeDMultiViewResp = make_shared<ReconstructThreeDMultiViewResponse>(reconstructThreeDMultiViewWithOptions(reconstructThreeDMultiViewReq, runtime));
  return *reconstructThreeDMultiViewResp;
}

GetAsyncJobResultResponse Alibabacloud_Threedvision20210131::Client::getAsyncJobResultWithOptions(shared_ptr<GetAsyncJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return GetAsyncJobResultResponse(doRPCRequest(make_shared<string>("GetAsyncJobResult"), make_shared<string>("2021-01-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

GetAsyncJobResultResponse Alibabacloud_Threedvision20210131::Client::getAsyncJobResult(shared_ptr<GetAsyncJobResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAsyncJobResultWithOptions(request, runtime);
}

EstimateMonocularImageDepthResponse Alibabacloud_Threedvision20210131::Client::estimateMonocularImageDepthWithOptions(shared_ptr<EstimateMonocularImageDepthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EstimateMonocularImageDepthResponse(doRPCRequest(make_shared<string>("EstimateMonocularImageDepth"), make_shared<string>("2021-01-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EstimateMonocularImageDepthResponse Alibabacloud_Threedvision20210131::Client::estimateMonocularImageDepth(shared_ptr<EstimateMonocularImageDepthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return estimateMonocularImageDepthWithOptions(request, runtime);
}

EstimateMonocularImageDepthResponse Alibabacloud_Threedvision20210131::Client::estimateMonocularImageDepthAdvance(shared_ptr<EstimateMonocularImageDepthAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"product", boost::any(string("threedvision"))},
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
  shared_ptr<EstimateMonocularImageDepthRequest> estimateMonocularImageDepthReq = make_shared<EstimateMonocularImageDepthRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, estimateMonocularImageDepthReq);
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
  estimateMonocularImageDepthReq->imageURL = make_shared<string>(string("http://") + string(*authResponse->bucket) + string(".") + string(*authResponse->endpoint) + string("/") + string(*authResponse->objectKey));
  shared_ptr<EstimateMonocularImageDepthResponse> estimateMonocularImageDepthResp = make_shared<EstimateMonocularImageDepthResponse>(estimateMonocularImageDepthWithOptions(estimateMonocularImageDepthReq, runtime));
  return *estimateMonocularImageDepthResp;
}

EstimateStereoImageDepthResponse Alibabacloud_Threedvision20210131::Client::estimateStereoImageDepthWithOptions(shared_ptr<EstimateStereoImageDepthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return EstimateStereoImageDepthResponse(doRPCRequest(make_shared<string>("EstimateStereoImageDepth"), make_shared<string>("2021-01-31"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

EstimateStereoImageDepthResponse Alibabacloud_Threedvision20210131::Client::estimateStereoImageDepth(shared_ptr<EstimateStereoImageDepthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return estimateStereoImageDepthWithOptions(request, runtime);
}

