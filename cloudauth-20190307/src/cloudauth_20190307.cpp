// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/cloudauth_20190307.hpp>
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

VerifyMaterialResponse Alibabacloud_Cloudauth20190307::Client::verifyMaterialWithOptions(shared_ptr<VerifyMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return VerifyMaterialResponse(doRPCRequest(make_shared<string>("VerifyMaterial"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

VerifyMaterialResponse Alibabacloud_Cloudauth20190307::Client::verifyMaterial(shared_ptr<VerifyMaterialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyMaterialWithOptions(request, runtime);
}

DescribeWhitelistResponse Alibabacloud_Cloudauth20190307::Client::describeWhitelistWithOptions(shared_ptr<DescribeWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeWhitelistResponse(doRPCRequest(make_shared<string>("DescribeWhitelist"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeWhitelistResponse Alibabacloud_Cloudauth20190307::Client::describeWhitelist(shared_ptr<DescribeWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWhitelistWithOptions(request, runtime);
}

UpdateAppPackageResponse Alibabacloud_Cloudauth20190307::Client::updateAppPackageWithOptions(shared_ptr<UpdateAppPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateAppPackageResponse(doRPCRequest(make_shared<string>("UpdateAppPackage"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateAppPackageResponse Alibabacloud_Cloudauth20190307::Client::updateAppPackage(shared_ptr<UpdateAppPackageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAppPackageWithOptions(request, runtime);
}

DescribeVerifyTokenResponse Alibabacloud_Cloudauth20190307::Client::describeVerifyTokenWithOptions(shared_ptr<DescribeVerifyTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVerifyTokenResponse(doRPCRequest(make_shared<string>("DescribeVerifyToken"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVerifyTokenResponse Alibabacloud_Cloudauth20190307::Client::describeVerifyToken(shared_ptr<DescribeVerifyTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVerifyTokenWithOptions(request, runtime);
}

DescribeRPSDKResponse Alibabacloud_Cloudauth20190307::Client::describeRPSDKWithOptions(shared_ptr<DescribeRPSDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeRPSDKResponse(doRPCRequest(make_shared<string>("DescribeRPSDK"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeRPSDKResponse Alibabacloud_Cloudauth20190307::Client::describeRPSDK(shared_ptr<DescribeRPSDKRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRPSDKWithOptions(request, runtime);
}

DescribeFaceUsageResponse Alibabacloud_Cloudauth20190307::Client::describeFaceUsageWithOptions(shared_ptr<DescribeFaceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeFaceUsageResponse(doRPCRequest(make_shared<string>("DescribeFaceUsage"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeFaceUsageResponse Alibabacloud_Cloudauth20190307::Client::describeFaceUsage(shared_ptr<DescribeFaceUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFaceUsageWithOptions(request, runtime);
}

DescribeVerifyUsageResponse Alibabacloud_Cloudauth20190307::Client::describeVerifyUsageWithOptions(shared_ptr<DescribeVerifyUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVerifyUsageResponse(doRPCRequest(make_shared<string>("DescribeVerifyUsage"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVerifyUsageResponse Alibabacloud_Cloudauth20190307::Client::describeVerifyUsage(shared_ptr<DescribeVerifyUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVerifyUsageWithOptions(request, runtime);
}

DescribeUpdatePackageResultResponse Alibabacloud_Cloudauth20190307::Client::describeUpdatePackageResultWithOptions(shared_ptr<DescribeUpdatePackageResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUpdatePackageResultResponse(doRPCRequest(make_shared<string>("DescribeUpdatePackageResult"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUpdatePackageResultResponse Alibabacloud_Cloudauth20190307::Client::describeUpdatePackageResult(shared_ptr<DescribeUpdatePackageResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUpdatePackageResultWithOptions(request, runtime);
}

CreateWhitelistResponse Alibabacloud_Cloudauth20190307::Client::createWhitelistWithOptions(shared_ptr<CreateWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateWhitelistResponse(doRPCRequest(make_shared<string>("CreateWhitelist"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateWhitelistResponse Alibabacloud_Cloudauth20190307::Client::createWhitelist(shared_ptr<CreateWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWhitelistWithOptions(request, runtime);
}

DeleteWhitelistResponse Alibabacloud_Cloudauth20190307::Client::deleteWhitelistWithOptions(shared_ptr<DeleteWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteWhitelistResponse(doRPCRequest(make_shared<string>("DeleteWhitelist"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteWhitelistResponse Alibabacloud_Cloudauth20190307::Client::deleteWhitelist(shared_ptr<DeleteWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWhitelistWithOptions(request, runtime);
}

CreateAuthKeyResponse Alibabacloud_Cloudauth20190307::Client::createAuthKeyWithOptions(shared_ptr<CreateAuthKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateAuthKeyResponse(doRPCRequest(make_shared<string>("CreateAuthKey"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateAuthKeyResponse Alibabacloud_Cloudauth20190307::Client::createAuthKey(shared_ptr<CreateAuthKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAuthKeyWithOptions(request, runtime);
}

DescribeUploadInfoResponse Alibabacloud_Cloudauth20190307::Client::describeUploadInfoWithOptions(shared_ptr<DescribeUploadInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeUploadInfoResponse(doRPCRequest(make_shared<string>("DescribeUploadInfo"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUploadInfoResponse Alibabacloud_Cloudauth20190307::Client::describeUploadInfo(shared_ptr<DescribeUploadInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUploadInfoWithOptions(request, runtime);
}

DescribeVerifySettingResponse Alibabacloud_Cloudauth20190307::Client::describeVerifySettingWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeVerifySettingResponse(doRPCRequest(make_shared<string>("DescribeVerifySetting"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVerifySettingResponse Alibabacloud_Cloudauth20190307::Client::describeVerifySetting() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVerifySettingWithOptions(runtime);
}

DescribeVerifyRecordsResponse Alibabacloud_Cloudauth20190307::Client::describeVerifyRecordsWithOptions(shared_ptr<DescribeVerifyRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVerifyRecordsResponse(doRPCRequest(make_shared<string>("DescribeVerifyRecords"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVerifyRecordsResponse Alibabacloud_Cloudauth20190307::Client::describeVerifyRecords(shared_ptr<DescribeVerifyRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVerifyRecordsWithOptions(request, runtime);
}

DescribeWhitelistSettingResponse Alibabacloud_Cloudauth20190307::Client::describeWhitelistSettingWithOptions(shared_ptr<DescribeWhitelistSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeWhitelistSettingResponse(doRPCRequest(make_shared<string>("DescribeWhitelistSetting"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeWhitelistSettingResponse Alibabacloud_Cloudauth20190307::Client::describeWhitelistSetting(shared_ptr<DescribeWhitelistSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWhitelistSettingWithOptions(request, runtime);
}

CreateRPSDKResponse Alibabacloud_Cloudauth20190307::Client::createRPSDKWithOptions(shared_ptr<CreateRPSDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateRPSDKResponse(doRPCRequest(make_shared<string>("CreateRPSDK"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateRPSDKResponse Alibabacloud_Cloudauth20190307::Client::createRPSDK(shared_ptr<CreateRPSDKRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRPSDKWithOptions(request, runtime);
}

UpdateFaceConfigResponse Alibabacloud_Cloudauth20190307::Client::updateFaceConfigWithOptions(shared_ptr<UpdateFaceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateFaceConfigResponse(doRPCRequest(make_shared<string>("UpdateFaceConfig"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateFaceConfigResponse Alibabacloud_Cloudauth20190307::Client::updateFaceConfig(shared_ptr<UpdateFaceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateFaceConfigWithOptions(request, runtime);
}

DescribeFaceConfigResponse Alibabacloud_Cloudauth20190307::Client::describeFaceConfigWithOptions(shared_ptr<DescribeFaceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeFaceConfigResponse(doRPCRequest(make_shared<string>("DescribeFaceConfig"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeFaceConfigResponse Alibabacloud_Cloudauth20190307::Client::describeFaceConfig(shared_ptr<DescribeFaceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFaceConfigWithOptions(request, runtime);
}

LivenessFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::livenessFaceVerifyWithOptions(shared_ptr<LivenessFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return LivenessFaceVerifyResponse(doRPCRequest(make_shared<string>("LivenessFaceVerify"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

LivenessFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::livenessFaceVerify(shared_ptr<LivenessFaceVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return livenessFaceVerifyWithOptions(request, runtime);
}

DescribeAppInfoResponse Alibabacloud_Cloudauth20190307::Client::describeAppInfoWithOptions(shared_ptr<DescribeAppInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeAppInfoResponse(doRPCRequest(make_shared<string>("DescribeAppInfo"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeAppInfoResponse Alibabacloud_Cloudauth20190307::Client::describeAppInfo(shared_ptr<DescribeAppInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppInfoWithOptions(request, runtime);
}

ModifyDeviceInfoResponse Alibabacloud_Cloudauth20190307::Client::modifyDeviceInfoWithOptions(shared_ptr<ModifyDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ModifyDeviceInfoResponse(doRPCRequest(make_shared<string>("ModifyDeviceInfo"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

ModifyDeviceInfoResponse Alibabacloud_Cloudauth20190307::Client::modifyDeviceInfo(shared_ptr<ModifyDeviceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDeviceInfoWithOptions(request, runtime);
}

ContrastFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::contrastFaceVerifyWithOptions(shared_ptr<ContrastFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return ContrastFaceVerifyResponse(doRPCRequest(make_shared<string>("ContrastFaceVerify"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
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
  Alibabacloud_OpenApiUtil::Client::convert(runtime, ossRuntime);
  shared_ptr<ContrastFaceVerifyRequest> contrastFaceVerifyReq = make_shared<ContrastFaceVerifyRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, contrastFaceVerifyReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->faceContrastFileObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->endpoint, authResponse->useAccelerate, _endpointType));
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
  shared_ptr<ContrastFaceVerifyResponse> contrastFaceVerifyResp = make_shared<ContrastFaceVerifyResponse>(contrastFaceVerifyWithOptions(contrastFaceVerifyReq, runtime));
  return *contrastFaceVerifyResp;
}

VerifyDeviceResponse Alibabacloud_Cloudauth20190307::Client::verifyDeviceWithOptions(shared_ptr<VerifyDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return VerifyDeviceResponse(doRPCRequest(make_shared<string>("VerifyDevice"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

VerifyDeviceResponse Alibabacloud_Cloudauth20190307::Client::verifyDevice(shared_ptr<VerifyDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyDeviceWithOptions(request, runtime);
}

CompareFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::compareFaceVerifyWithOptions(shared_ptr<CompareFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CompareFaceVerifyResponse(doRPCRequest(make_shared<string>("CompareFaceVerify"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CompareFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::compareFaceVerify(shared_ptr<CompareFaceVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return compareFaceVerifyWithOptions(request, runtime);
}

DescribeVerifySDKResponse Alibabacloud_Cloudauth20190307::Client::describeVerifySDKWithOptions(shared_ptr<DescribeVerifySDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVerifySDKResponse(doRPCRequest(make_shared<string>("DescribeVerifySDK"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVerifySDKResponse Alibabacloud_Cloudauth20190307::Client::describeVerifySDK(shared_ptr<DescribeVerifySDKRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVerifySDKWithOptions(request, runtime);
}

DescribeDeviceInfoResponse Alibabacloud_Cloudauth20190307::Client::describeDeviceInfoWithOptions(shared_ptr<DescribeDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeDeviceInfoResponse(doRPCRequest(make_shared<string>("DescribeDeviceInfo"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeDeviceInfoResponse Alibabacloud_Cloudauth20190307::Client::describeDeviceInfo(shared_ptr<DescribeDeviceInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDeviceInfoWithOptions(request, runtime);
}

DescribeFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::describeFaceVerifyWithOptions(shared_ptr<DescribeFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeFaceVerifyResponse(doRPCRequest(make_shared<string>("DescribeFaceVerify"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::describeFaceVerify(shared_ptr<DescribeFaceVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFaceVerifyWithOptions(request, runtime);
}

DescribeOssUploadTokenResponse Alibabacloud_Cloudauth20190307::Client::describeOssUploadTokenWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeOssUploadTokenResponse(doRPCRequest(make_shared<string>("DescribeOssUploadToken"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeOssUploadTokenResponse Alibabacloud_Cloudauth20190307::Client::describeOssUploadToken() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeOssUploadTokenWithOptions(runtime);
}

DetectFaceAttributesResponse Alibabacloud_Cloudauth20190307::Client::detectFaceAttributesWithOptions(shared_ptr<DetectFaceAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DetectFaceAttributesResponse(doRPCRequest(make_shared<string>("DetectFaceAttributes"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DetectFaceAttributesResponse Alibabacloud_Cloudauth20190307::Client::detectFaceAttributes(shared_ptr<DetectFaceAttributesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectFaceAttributesWithOptions(request, runtime);
}

DescribeSdkUrlResponse Alibabacloud_Cloudauth20190307::Client::describeSdkUrlWithOptions(shared_ptr<DescribeSdkUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeSdkUrlResponse(doRPCRequest(make_shared<string>("DescribeSdkUrl"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeSdkUrlResponse Alibabacloud_Cloudauth20190307::Client::describeSdkUrl(shared_ptr<DescribeSdkUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSdkUrlWithOptions(request, runtime);
}

DeleteWhitelistSettingResponse Alibabacloud_Cloudauth20190307::Client::deleteWhitelistSettingWithOptions(shared_ptr<DeleteWhitelistSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DeleteWhitelistSettingResponse(doRPCRequest(make_shared<string>("DeleteWhitelistSetting"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DeleteWhitelistSettingResponse Alibabacloud_Cloudauth20190307::Client::deleteWhitelistSetting(shared_ptr<DeleteWhitelistSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteWhitelistSettingWithOptions(request, runtime);
}

UpdateVerifySettingResponse Alibabacloud_Cloudauth20190307::Client::updateVerifySettingWithOptions(shared_ptr<UpdateVerifySettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return UpdateVerifySettingResponse(doRPCRequest(make_shared<string>("UpdateVerifySetting"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

UpdateVerifySettingResponse Alibabacloud_Cloudauth20190307::Client::updateVerifySetting(shared_ptr<UpdateVerifySettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateVerifySettingWithOptions(request, runtime);
}

DescribeVerifyResultResponse Alibabacloud_Cloudauth20190307::Client::describeVerifyResultWithOptions(shared_ptr<DescribeVerifyResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return DescribeVerifyResultResponse(doRPCRequest(make_shared<string>("DescribeVerifyResult"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeVerifyResultResponse Alibabacloud_Cloudauth20190307::Client::describeVerifyResult(shared_ptr<DescribeVerifyResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeVerifyResultWithOptions(request, runtime);
}

CompareFacesResponse Alibabacloud_Cloudauth20190307::Client::compareFacesWithOptions(shared_ptr<CompareFacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CompareFacesResponse(doRPCRequest(make_shared<string>("CompareFaces"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CompareFacesResponse Alibabacloud_Cloudauth20190307::Client::compareFaces(shared_ptr<CompareFacesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return compareFacesWithOptions(request, runtime);
}

CreateFaceConfigResponse Alibabacloud_Cloudauth20190307::Client::createFaceConfigWithOptions(shared_ptr<CreateFaceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateFaceConfigResponse(doRPCRequest(make_shared<string>("CreateFaceConfig"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateFaceConfigResponse Alibabacloud_Cloudauth20190307::Client::createFaceConfig(shared_ptr<CreateFaceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createFaceConfigWithOptions(request, runtime);
}

CreateVerifySDKResponse Alibabacloud_Cloudauth20190307::Client::createVerifySDKWithOptions(shared_ptr<CreateVerifySDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateVerifySDKResponse(doRPCRequest(make_shared<string>("CreateVerifySDK"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateVerifySDKResponse Alibabacloud_Cloudauth20190307::Client::createVerifySDK(shared_ptr<CreateVerifySDKRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVerifySDKWithOptions(request, runtime);
}

InitDeviceResponse Alibabacloud_Cloudauth20190307::Client::initDeviceWithOptions(shared_ptr<InitDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InitDeviceResponse(doRPCRequest(make_shared<string>("InitDevice"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InitDeviceResponse Alibabacloud_Cloudauth20190307::Client::initDevice(shared_ptr<InitDeviceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initDeviceWithOptions(request, runtime);
}

CreateWhitelistSettingResponse Alibabacloud_Cloudauth20190307::Client::createWhitelistSettingWithOptions(shared_ptr<CreateWhitelistSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateWhitelistSettingResponse(doRPCRequest(make_shared<string>("CreateWhitelistSetting"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateWhitelistSettingResponse Alibabacloud_Cloudauth20190307::Client::createWhitelistSetting(shared_ptr<CreateWhitelistSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createWhitelistSettingWithOptions(request, runtime);
}

DescribeUserStatusResponse Alibabacloud_Cloudauth20190307::Client::describeUserStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  return DescribeUserStatusResponse(doRPCRequest(make_shared<string>("DescribeUserStatus"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

DescribeUserStatusResponse Alibabacloud_Cloudauth20190307::Client::describeUserStatus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserStatusWithOptions(runtime);
}

CreateVerifySettingResponse Alibabacloud_Cloudauth20190307::Client::createVerifySettingWithOptions(shared_ptr<CreateVerifySettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return CreateVerifySettingResponse(doRPCRequest(make_shared<string>("CreateVerifySetting"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

CreateVerifySettingResponse Alibabacloud_Cloudauth20190307::Client::createVerifySetting(shared_ptr<CreateVerifySettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVerifySettingWithOptions(request, runtime);
}

InitFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::initFaceVerifyWithOptions(shared_ptr<InitFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  return InitFaceVerifyResponse(doRPCRequest(make_shared<string>("InitFaceVerify"), make_shared<string>("2019-03-07"), make_shared<string>("HTTPS"), make_shared<string>("POST"), make_shared<string>("AK"), make_shared<string>("json"), req, runtime));
}

InitFaceVerifyResponse Alibabacloud_Cloudauth20190307::Client::initFaceVerify(shared_ptr<InitFaceVerifyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initFaceVerifyWithOptions(request, runtime);
}

