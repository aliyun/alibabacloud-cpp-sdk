// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cloudauth_20190307.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_platform_20191219.hpp>
#include <alibabacloud/oss.hpp>
#include <alibabacloud/ossutil.hpp>
#include <alibabacloud/rpc.hpp>
#include <alibabacloud/rpcutil.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/file_form.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Cloudauth20190307;

Alibabacloud_Cloudauth20190307::Client::Client(const shared_ptr<Alibabacloud_RPC::Config>& config) : Alibabacloud_RPC::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("cloudauth"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

DescribeWhitelistSettingResponse Alibabacloud_Cloudauth20190307::Client::describeWhitelistSetting(shared_ptr<DescribeWhitelistSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DescribeWhitelistSettingResponse(doRequest(make_shared<string>("DescribeWhitelistSetting"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DescribeWhitelistSettingResponse Alibabacloud_Cloudauth20190307::Client::describeWhitelistSettingSimply(shared_ptr<DescribeWhitelistSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWhitelistSetting(request, runtime);
}

DeleteWhitelistSettingResponse Alibabacloud_Cloudauth20190307::Client::deleteWhitelistSetting(shared_ptr<DeleteWhitelistSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteWhitelistSettingResponse(doRequest(make_shared<string>("DeleteWhitelistSetting"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteWhitelistSettingResponse Alibabacloud_Cloudauth20190307::Client::deleteWhitelistSettingSimply(shared_ptr<DeleteWhitelistSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWhitelistSetting(request, runtime);
}

CreateWhitelistSettingResponse Alibabacloud_Cloudauth20190307::Client::createWhitelistSetting(shared_ptr<CreateWhitelistSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateWhitelistSettingResponse(doRequest(make_shared<string>("CreateWhitelistSetting"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateWhitelistSettingResponse Alibabacloud_Cloudauth20190307::Client::createWhitelistSettingSimply(shared_ptr<CreateWhitelistSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWhitelistSetting(request, runtime);
}

DescribeWhitelistResponse Alibabacloud_Cloudauth20190307::Client::describeWhitelist(shared_ptr<DescribeWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DescribeWhitelistResponse(doRequest(make_shared<string>("DescribeWhitelist"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DescribeWhitelistResponse Alibabacloud_Cloudauth20190307::Client::describeWhitelistSimply(shared_ptr<DescribeWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWhitelist(request, runtime);
}

DeleteWhitelistResponse Alibabacloud_Cloudauth20190307::Client::deleteWhitelist(shared_ptr<DeleteWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DeleteWhitelistResponse(doRequest(make_shared<string>("DeleteWhitelist"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DeleteWhitelistResponse Alibabacloud_Cloudauth20190307::Client::deleteWhitelistSimply(shared_ptr<DeleteWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWhitelist(request, runtime);
}

CreateWhitelistResponse Alibabacloud_Cloudauth20190307::Client::createWhitelist(shared_ptr<CreateWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateWhitelistResponse(doRequest(make_shared<string>("CreateWhitelist"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateWhitelistResponse Alibabacloud_Cloudauth20190307::Client::createWhitelistSimply(shared_ptr<CreateWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWhitelist(request, runtime);
}

DescribeFaceConfigResponse Alibabacloud_Cloudauth20190307::Client::describeFaceConfig(shared_ptr<DescribeFaceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DescribeFaceConfigResponse(doRequest(make_shared<string>("DescribeFaceConfig"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DescribeFaceConfigResponse Alibabacloud_Cloudauth20190307::Client::describeFaceConfigSimply(shared_ptr<DescribeFaceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFaceConfig(request, runtime);
}

UpdateFaceConfigResponse Alibabacloud_Cloudauth20190307::Client::updateFaceConfig(shared_ptr<UpdateFaceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateFaceConfigResponse(doRequest(make_shared<string>("UpdateFaceConfig"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateFaceConfigResponse Alibabacloud_Cloudauth20190307::Client::updateFaceConfigSimply(shared_ptr<UpdateFaceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFaceConfig(request, runtime);
}

CreateFaceConfigResponse Alibabacloud_Cloudauth20190307::Client::createFaceConfig(shared_ptr<CreateFaceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateFaceConfigResponse(doRequest(make_shared<string>("CreateFaceConfig"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateFaceConfigResponse Alibabacloud_Cloudauth20190307::Client::createFaceConfigSimply(shared_ptr<CreateFaceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFaceConfig(request, runtime);
}

LivenessFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::livenessFaceVerify(shared_ptr<LivenessFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return LivenessFaceVerifyResponse(doRequest(make_shared<string>("LivenessFaceVerify"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

LivenessFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::livenessFaceVerifySimply(shared_ptr<LivenessFaceVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return livenessFaceVerify(request, runtime);
}

CompareFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::compareFaceVerify(shared_ptr<CompareFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CompareFaceVerifyResponse(doRequest(make_shared<string>("CompareFaceVerify"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CompareFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::compareFaceVerifySimply(shared_ptr<CompareFaceVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return compareFaceVerify(request, runtime);
}

DescribeSdkUrlResponse Alibabacloud_Cloudauth20190307::Client::describeSdkUrl(shared_ptr<DescribeSdkUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DescribeSdkUrlResponse(doRequest(make_shared<string>("DescribeSdkUrl"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DescribeSdkUrlResponse Alibabacloud_Cloudauth20190307::Client::describeSdkUrlSimply(shared_ptr<DescribeSdkUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSdkUrl(request, runtime);
}

DescribeUpdatePackageResultResponse Alibabacloud_Cloudauth20190307::Client::describeUpdatePackageResult(shared_ptr<DescribeUpdatePackageResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DescribeUpdatePackageResultResponse(doRequest(make_shared<string>("DescribeUpdatePackageResult"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DescribeUpdatePackageResultResponse Alibabacloud_Cloudauth20190307::Client::describeUpdatePackageResultSimply(shared_ptr<DescribeUpdatePackageResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUpdatePackageResult(request, runtime);
}

UpdateAppPackageResponse Alibabacloud_Cloudauth20190307::Client::updateAppPackage(shared_ptr<UpdateAppPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateAppPackageResponse(doRequest(make_shared<string>("UpdateAppPackage"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateAppPackageResponse Alibabacloud_Cloudauth20190307::Client::updateAppPackageSimply(shared_ptr<UpdateAppPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAppPackage(request, runtime);
}

DescribeAppInfoResponse Alibabacloud_Cloudauth20190307::Client::describeAppInfo(shared_ptr<DescribeAppInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DescribeAppInfoResponse(doRequest(make_shared<string>("DescribeAppInfo"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DescribeAppInfoResponse Alibabacloud_Cloudauth20190307::Client::describeAppInfoSimply(shared_ptr<DescribeAppInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppInfo(request, runtime);
}

ContrastFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::contrastFaceVerify(shared_ptr<ContrastFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ContrastFaceVerifyResponse(doRequest(make_shared<string>("ContrastFaceVerify"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ContrastFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::contrastFaceVerifySimply(shared_ptr<ContrastFaceVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return contrastFaceVerify(request, runtime);
}

ContrastFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::contrastFaceVerifyAdvance(shared_ptr<ContrastFaceVerifyAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  // Step 0: init client
  shared_ptr<string> accessKeyId = make_shared<string>(_credential->getAccessKeyId());
  shared_ptr<string> accessKeySecret = make_shared<string>(_credential->getAccessKeySecret());
  shared_ptr<string> openPlatformEndpoint = _openPlatformEndpoint;
  shared_ptr<string> securityToken = make_shared<string>(_credential->getSecurityToken());
  shared_ptr<string> credentialType = make_shared<string>(_credential->getType());
  if (Darabonba_Util::Client::isUnset<string>(openPlatformEndpoint)) {
    openPlatformEndpoint = make_shared<string>("openplatform.aliyuncs.com");
  }
  if (Darabonba_Util::Client::isUnset<string>(credentialType)) {
    credentialType = make_shared<string>("access_key");
  }
  shared_ptr<Alibabacloud_RPC::Config> authConfig = make_shared<Alibabacloud_RPC::Config>(map<string, boost::any>({
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
  Alibabacloud_RPCUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<ContrastFaceVerifyRequest> contrastFaceVerifyReq = make_shared<ContrastFaceVerifyRequest>();
  Alibabacloud_RPCUtil::Client::convert(request, contrastFaceVerifyReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->faceContrastFileObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_RPCUtil::Client::getEndpoint(authResponse->endpoint, authResponse->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->objectKey ? boost::any() : boost::any(*authResponse->objectKey)},
      {"content", !request->faceContrastFileObject ? boost::any() : boost::any(*request->faceContrastFileObject)},
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
    contrastFaceVerifyReq->faceContrastFile = make_shared<string>(string("http://") + string(*authResponse->bucket) + string(".") + string(*authResponse->endpoint) + string("/") + string(*authResponse->objectKey));
  }
  shared_ptr<ContrastFaceVerifyResponse> contrastFaceVerifyResp = make_shared<ContrastFaceVerifyResponse>(contrastFaceVerify(contrastFaceVerifyReq, runtime));
  return *contrastFaceVerifyResp;
}

InitDeviceResponse Alibabacloud_Cloudauth20190307::Client::initDevice(shared_ptr<InitDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return InitDeviceResponse(doRequest(make_shared<string>("InitDevice"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

InitDeviceResponse Alibabacloud_Cloudauth20190307::Client::initDeviceSimply(shared_ptr<InitDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initDevice(request, runtime);
}

InitFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::initFaceVerify(shared_ptr<InitFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return InitFaceVerifyResponse(doRequest(make_shared<string>("InitFaceVerify"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

InitFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::initFaceVerifySimply(shared_ptr<InitFaceVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initFaceVerify(request, runtime);
}

DescribeFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::describeFaceVerify(shared_ptr<DescribeFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DescribeFaceVerifyResponse(doRequest(make_shared<string>("DescribeFaceVerify"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DescribeFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::describeFaceVerifySimply(shared_ptr<DescribeFaceVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFaceVerify(request, runtime);
}

VerifyDeviceResponse Alibabacloud_Cloudauth20190307::Client::verifyDevice(shared_ptr<VerifyDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return VerifyDeviceResponse(doRequest(make_shared<string>("VerifyDevice"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

VerifyDeviceResponse Alibabacloud_Cloudauth20190307::Client::verifyDeviceSimply(shared_ptr<VerifyDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyDevice(request, runtime);
}

ModifyDeviceInfoResponse Alibabacloud_Cloudauth20190307::Client::modifyDeviceInfo(shared_ptr<ModifyDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return ModifyDeviceInfoResponse(doRequest(make_shared<string>("ModifyDeviceInfo"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

ModifyDeviceInfoResponse Alibabacloud_Cloudauth20190307::Client::modifyDeviceInfoSimply(shared_ptr<ModifyDeviceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDeviceInfo(request, runtime);
}

DescribeVerifySDKResponse Alibabacloud_Cloudauth20190307::Client::describeVerifySDK(shared_ptr<DescribeVerifySDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DescribeVerifySDKResponse(doRequest(make_shared<string>("DescribeVerifySDK"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DescribeVerifySDKResponse Alibabacloud_Cloudauth20190307::Client::describeVerifySDKSimply(shared_ptr<DescribeVerifySDKRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVerifySDK(request, runtime);
}

DescribeDeviceInfoResponse Alibabacloud_Cloudauth20190307::Client::describeDeviceInfo(shared_ptr<DescribeDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DescribeDeviceInfoResponse(doRequest(make_shared<string>("DescribeDeviceInfo"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DescribeDeviceInfoResponse Alibabacloud_Cloudauth20190307::Client::describeDeviceInfoSimply(shared_ptr<DescribeDeviceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeviceInfo(request, runtime);
}

CreateVerifySDKResponse Alibabacloud_Cloudauth20190307::Client::createVerifySDK(shared_ptr<CreateVerifySDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateVerifySDKResponse(doRequest(make_shared<string>("CreateVerifySDK"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateVerifySDKResponse Alibabacloud_Cloudauth20190307::Client::createVerifySDKSimply(shared_ptr<CreateVerifySDKRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVerifySDK(request, runtime);
}

CreateAuthKeyResponse Alibabacloud_Cloudauth20190307::Client::createAuthKey(shared_ptr<CreateAuthKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateAuthKeyResponse(doRequest(make_shared<string>("CreateAuthKey"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateAuthKeyResponse Alibabacloud_Cloudauth20190307::Client::createAuthKeySimply(shared_ptr<CreateAuthKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAuthKey(request, runtime);
}

DetectFaceAttributesResponse Alibabacloud_Cloudauth20190307::Client::detectFaceAttributes(shared_ptr<DetectFaceAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DetectFaceAttributesResponse(doRequest(make_shared<string>("DetectFaceAttributes"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DetectFaceAttributesResponse Alibabacloud_Cloudauth20190307::Client::detectFaceAttributesSimply(shared_ptr<DetectFaceAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectFaceAttributes(request, runtime);
}

CompareFacesResponse Alibabacloud_Cloudauth20190307::Client::compareFaces(shared_ptr<CompareFacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CompareFacesResponse(doRequest(make_shared<string>("CompareFaces"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CompareFacesResponse Alibabacloud_Cloudauth20190307::Client::compareFacesSimply(shared_ptr<CompareFacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return compareFaces(request, runtime);
}

DescribeFaceUsageResponse Alibabacloud_Cloudauth20190307::Client::describeFaceUsage(shared_ptr<DescribeFaceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DescribeFaceUsageResponse(doRequest(make_shared<string>("DescribeFaceUsage"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DescribeFaceUsageResponse Alibabacloud_Cloudauth20190307::Client::describeFaceUsageSimply(shared_ptr<DescribeFaceUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFaceUsage(request, runtime);
}

DescribeVerifyRecordsResponse Alibabacloud_Cloudauth20190307::Client::describeVerifyRecords(shared_ptr<DescribeVerifyRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DescribeVerifyRecordsResponse(doRequest(make_shared<string>("DescribeVerifyRecords"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DescribeVerifyRecordsResponse Alibabacloud_Cloudauth20190307::Client::describeVerifyRecordsSimply(shared_ptr<DescribeVerifyRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVerifyRecords(request, runtime);
}

UpdateVerifySettingResponse Alibabacloud_Cloudauth20190307::Client::updateVerifySetting(shared_ptr<UpdateVerifySettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return UpdateVerifySettingResponse(doRequest(make_shared<string>("UpdateVerifySetting"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

UpdateVerifySettingResponse Alibabacloud_Cloudauth20190307::Client::updateVerifySettingSimply(shared_ptr<UpdateVerifySettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateVerifySetting(request, runtime);
}

CreateVerifySettingResponse Alibabacloud_Cloudauth20190307::Client::createVerifySetting(shared_ptr<CreateVerifySettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateVerifySettingResponse(doRequest(make_shared<string>("CreateVerifySetting"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateVerifySettingResponse Alibabacloud_Cloudauth20190307::Client::createVerifySettingSimply(shared_ptr<CreateVerifySettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVerifySetting(request, runtime);
}

DescribeVerifySettingResponse Alibabacloud_Cloudauth20190307::Client::describeVerifySetting(shared_ptr<DescribeVerifySettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DescribeVerifySettingResponse(doRequest(make_shared<string>("DescribeVerifySetting"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DescribeVerifySettingResponse Alibabacloud_Cloudauth20190307::Client::describeVerifySettingSimply(shared_ptr<DescribeVerifySettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVerifySetting(request, runtime);
}

DescribeVerifyUsageResponse Alibabacloud_Cloudauth20190307::Client::describeVerifyUsage(shared_ptr<DescribeVerifyUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DescribeVerifyUsageResponse(doRequest(make_shared<string>("DescribeVerifyUsage"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DescribeVerifyUsageResponse Alibabacloud_Cloudauth20190307::Client::describeVerifyUsageSimply(shared_ptr<DescribeVerifyUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVerifyUsage(request, runtime);
}

DescribeUserStatusResponse Alibabacloud_Cloudauth20190307::Client::describeUserStatus(shared_ptr<DescribeUserStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DescribeUserStatusResponse(doRequest(make_shared<string>("DescribeUserStatus"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DescribeUserStatusResponse Alibabacloud_Cloudauth20190307::Client::describeUserStatusSimply(shared_ptr<DescribeUserStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserStatus(request, runtime);
}

DescribeUploadInfoResponse Alibabacloud_Cloudauth20190307::Client::describeUploadInfo(shared_ptr<DescribeUploadInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DescribeUploadInfoResponse(doRequest(make_shared<string>("DescribeUploadInfo"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DescribeUploadInfoResponse Alibabacloud_Cloudauth20190307::Client::describeUploadInfoSimply(shared_ptr<DescribeUploadInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUploadInfo(request, runtime);
}

DescribeRPSDKResponse Alibabacloud_Cloudauth20190307::Client::describeRPSDK(shared_ptr<DescribeRPSDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DescribeRPSDKResponse(doRequest(make_shared<string>("DescribeRPSDK"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DescribeRPSDKResponse Alibabacloud_Cloudauth20190307::Client::describeRPSDKSimply(shared_ptr<DescribeRPSDKRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRPSDK(request, runtime);
}

CreateRPSDKResponse Alibabacloud_Cloudauth20190307::Client::createRPSDK(shared_ptr<CreateRPSDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return CreateRPSDKResponse(doRequest(make_shared<string>("CreateRPSDK"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

CreateRPSDKResponse Alibabacloud_Cloudauth20190307::Client::createRPSDKSimply(shared_ptr<CreateRPSDKRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRPSDK(request, runtime);
}

VerifyMaterialResponse Alibabacloud_Cloudauth20190307::Client::verifyMaterial(shared_ptr<VerifyMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return VerifyMaterialResponse(doRequest(make_shared<string>("VerifyMaterial"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

VerifyMaterialResponse Alibabacloud_Cloudauth20190307::Client::verifyMaterialSimply(shared_ptr<VerifyMaterialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyMaterial(request, runtime);
}

DescribeVerifyResultResponse Alibabacloud_Cloudauth20190307::Client::describeVerifyResult(shared_ptr<DescribeVerifyResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DescribeVerifyResultResponse(doRequest(make_shared<string>("DescribeVerifyResult"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DescribeVerifyResultResponse Alibabacloud_Cloudauth20190307::Client::describeVerifyResultSimply(shared_ptr<DescribeVerifyResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVerifyResult(request, runtime);
}

DescribeOssUploadTokenResponse Alibabacloud_Cloudauth20190307::Client::describeOssUploadToken(shared_ptr<DescribeOssUploadTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DescribeOssUploadTokenResponse(doRequest(make_shared<string>("DescribeOssUploadToken"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DescribeOssUploadTokenResponse Alibabacloud_Cloudauth20190307::Client::describeOssUploadTokenSimply(shared_ptr<DescribeOssUploadTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOssUploadToken(request, runtime);
}

DescribeVerifyTokenResponse Alibabacloud_Cloudauth20190307::Client::describeVerifyToken(shared_ptr<DescribeVerifyTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  return DescribeVerifyTokenResponse(doRequest(make_shared<string>("DescribeVerifyToken"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("2019-03-07"), make_shared<string>("AK"), nullptr, make_shared<map<string, boost::any>>(request->toMap()), runtime));
}

DescribeVerifyTokenResponse Alibabacloud_Cloudauth20190307::Client::describeVerifyTokenSimply(shared_ptr<DescribeVerifyTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVerifyToken(request, runtime);
}

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

