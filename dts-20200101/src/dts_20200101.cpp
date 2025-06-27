// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/dts_20200101.hpp>
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

using namespace Alibabacloud_Dts20200101;

Alibabacloud_Dts20200101::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "dts.aliyuncs.com"},
    {"cn-beijing", "dts.aliyuncs.com"},
    {"cn-zhangjiakou", "dts.aliyuncs.com"},
    {"cn-huhehaote", "dts.aliyuncs.com"},
    {"cn-hangzhou", "dts.aliyuncs.com"},
    {"cn-shanghai", "dts.aliyuncs.com"},
    {"cn-shenzhen", "dts.aliyuncs.com"},
    {"cn-hongkong", "dts.aliyuncs.com"},
    {"ap-southeast-1", "dts.aliyuncs.com"},
    {"ap-southeast-2", "dts.aliyuncs.com"},
    {"ap-southeast-3", "dts.aliyuncs.com"},
    {"ap-southeast-5", "dts.aliyuncs.com"},
    {"eu-west-1", "dts.aliyuncs.com"},
    {"us-west-1", "dts.aliyuncs.com"},
    {"us-east-1", "dts.aliyuncs.com"},
    {"eu-central-1", "dts.aliyuncs.com"},
    {"me-east-1", "dts.aliyuncs.com"},
    {"ap-south-1", "dts.aliyuncs.com"},
    {"cn-hangzhou-finance", "dts.aliyuncs.com"},
    {"cn-shanghai-finance-1", "dts.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "dts.aliyuncs.com"},
    {"cn-north-2-gov-1", "dts.aliyuncs.com"},
    {"ap-northeast-2-pop", "dts.aliyuncs.com"},
    {"cn-beijing-finance-1", "dts.aliyuncs.com"},
    {"cn-beijing-finance-pop", "dts.aliyuncs.com"},
    {"cn-beijing-gov-1", "dts.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "dts.aliyuncs.com"},
    {"cn-chengdu", "dts.aliyuncs.com"},
    {"cn-edge-1", "dts.aliyuncs.com"},
    {"cn-fujian", "dts.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "dts.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "dts.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "dts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "dts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "dts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "dts.aliyuncs.com"},
    {"cn-hangzhou-test-306", "dts.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "dts.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "dts.aliyuncs.com"},
    {"cn-qingdao-nebula", "dts.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "dts.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "dts.aliyuncs.com"},
    {"cn-shanghai-inner", "dts.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "dts.aliyuncs.com"},
    {"cn-shenzhen-inner", "dts.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "dts.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "dts.aliyuncs.com"},
    {"cn-wuhan", "dts.aliyuncs.com"},
    {"cn-wulanchabu", "dts.aliyuncs.com"},
    {"cn-yushanfang", "dts.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "dts.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "dts.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "dts.aliyuncs.com"},
    {"eu-west-1-oxs", "dts.aliyuncs.com"},
    {"rus-west-1-pop", "dts.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("dts"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Dts20200101::Client::getEndpoint(shared_ptr<string> productId,
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

ConfigureDtsJobResponse Alibabacloud_Dts20200101::Client::configureDtsJobWithOptions(shared_ptr<ConfigureDtsJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkpoint)) {
    query->insert(pair<string, string>("Checkpoint", *request->checkpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataCheckConfigure)) {
    query->insert(pair<string, string>("DataCheckConfigure", *request->dataCheckConfigure));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dataInitialization)) {
    query->insert(pair<string, bool>("DataInitialization", *request->dataInitialization));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dataSynchronization)) {
    query->insert(pair<string, bool>("DataSynchronization", *request->dataSynchronization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedClusterId)) {
    query->insert(pair<string, string>("DedicatedClusterId", *request->dedicatedClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->delayNotice)) {
    query->insert(pair<string, bool>("DelayNotice", *request->delayNotice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->delayPhone)) {
    query->insert(pair<string, string>("DelayPhone", *request->delayPhone));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->delayRuleTime)) {
    query->insert(pair<string, long>("DelayRuleTime", *request->delayRuleTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destCaCertificateOssUrl)) {
    query->insert(pair<string, string>("DestCaCertificateOssUrl", *request->destCaCertificateOssUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destCaCertificatePassword)) {
    query->insert(pair<string, string>("DestCaCertificatePassword", *request->destCaCertificatePassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destClientCertOssUrl)) {
    query->insert(pair<string, string>("DestClientCertOssUrl", *request->destClientCertOssUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destClientKeyOssUrl)) {
    query->insert(pair<string, string>("DestClientKeyOssUrl", *request->destClientKeyOssUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destClientPassword)) {
    query->insert(pair<string, string>("DestClientPassword", *request->destClientPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destPrimaryVswId)) {
    query->insert(pair<string, string>("DestPrimaryVswId", *request->destPrimaryVswId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destSecondaryVswId)) {
    query->insert(pair<string, string>("DestSecondaryVswId", *request->destSecondaryVswId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointDataBaseName)) {
    query->insert(pair<string, string>("DestinationEndpointDataBaseName", *request->destinationEndpointDataBaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointEngineName)) {
    query->insert(pair<string, string>("DestinationEndpointEngineName", *request->destinationEndpointEngineName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointIP)) {
    query->insert(pair<string, string>("DestinationEndpointIP", *request->destinationEndpointIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointInstanceID)) {
    query->insert(pair<string, string>("DestinationEndpointInstanceID", *request->destinationEndpointInstanceID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointInstanceType)) {
    query->insert(pair<string, string>("DestinationEndpointInstanceType", *request->destinationEndpointInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointOracleSID)) {
    query->insert(pair<string, string>("DestinationEndpointOracleSID", *request->destinationEndpointOracleSID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointOwnerID)) {
    query->insert(pair<string, string>("DestinationEndpointOwnerID", *request->destinationEndpointOwnerID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointPassword)) {
    query->insert(pair<string, string>("DestinationEndpointPassword", *request->destinationEndpointPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointPort)) {
    query->insert(pair<string, string>("DestinationEndpointPort", *request->destinationEndpointPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointRegion)) {
    query->insert(pair<string, string>("DestinationEndpointRegion", *request->destinationEndpointRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointRole)) {
    query->insert(pair<string, string>("DestinationEndpointRole", *request->destinationEndpointRole));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointUserName)) {
    query->insert(pair<string, string>("DestinationEndpointUserName", *request->destinationEndpointUserName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->disasterRecoveryJob)) {
    query->insert(pair<string, bool>("DisasterRecoveryJob", *request->disasterRecoveryJob));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsBisLabel)) {
    query->insert(pair<string, string>("DtsBisLabel", *request->dtsBisLabel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobName)) {
    query->insert(pair<string, string>("DtsJobName", *request->dtsJobName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->errorNotice)) {
    query->insert(pair<string, bool>("ErrorNotice", *request->errorNotice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorPhone)) {
    query->insert(pair<string, string>("ErrorPhone", *request->errorPhone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileOssUrl)) {
    query->insert(pair<string, string>("FileOssUrl", *request->fileOssUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobType)) {
    query->insert(pair<string, string>("JobType", *request->jobType));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->maxDu)) {
    query->insert(pair<string, double>("MaxDu", *request->maxDu));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->minDu)) {
    query->insert(pair<string, double>("MinDu", *request->minDu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointDatabaseName)) {
    query->insert(pair<string, string>("SourceEndpointDatabaseName", *request->sourceEndpointDatabaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointEngineName)) {
    query->insert(pair<string, string>("SourceEndpointEngineName", *request->sourceEndpointEngineName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointIP)) {
    query->insert(pair<string, string>("SourceEndpointIP", *request->sourceEndpointIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointInstanceID)) {
    query->insert(pair<string, string>("SourceEndpointInstanceID", *request->sourceEndpointInstanceID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointInstanceType)) {
    query->insert(pair<string, string>("SourceEndpointInstanceType", *request->sourceEndpointInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointOracleSID)) {
    query->insert(pair<string, string>("SourceEndpointOracleSID", *request->sourceEndpointOracleSID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointOwnerID)) {
    query->insert(pair<string, string>("SourceEndpointOwnerID", *request->sourceEndpointOwnerID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointPassword)) {
    query->insert(pair<string, string>("SourceEndpointPassword", *request->sourceEndpointPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointPort)) {
    query->insert(pair<string, string>("SourceEndpointPort", *request->sourceEndpointPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointRegion)) {
    query->insert(pair<string, string>("SourceEndpointRegion", *request->sourceEndpointRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointRole)) {
    query->insert(pair<string, string>("SourceEndpointRole", *request->sourceEndpointRole));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointUserName)) {
    query->insert(pair<string, string>("SourceEndpointUserName", *request->sourceEndpointUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointVSwitchID)) {
    query->insert(pair<string, string>("SourceEndpointVSwitchID", *request->sourceEndpointVSwitchID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcCaCertificateOssUrl)) {
    query->insert(pair<string, string>("SrcCaCertificateOssUrl", *request->srcCaCertificateOssUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcCaCertificatePassword)) {
    query->insert(pair<string, string>("SrcCaCertificatePassword", *request->srcCaCertificatePassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcClientCertOssUrl)) {
    query->insert(pair<string, string>("SrcClientCertOssUrl", *request->srcClientCertOssUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcClientKeyOssUrl)) {
    query->insert(pair<string, string>("SrcClientKeyOssUrl", *request->srcClientKeyOssUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcClientPassword)) {
    query->insert(pair<string, string>("SrcClientPassword", *request->srcClientPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcPrimaryVswId)) {
    query->insert(pair<string, string>("SrcPrimaryVswId", *request->srcPrimaryVswId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcSecondaryVswId)) {
    query->insert(pair<string, string>("SrcSecondaryVswId", *request->srcSecondaryVswId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->structureInitialization)) {
    query->insert(pair<string, bool>("StructureInitialization", *request->structureInitialization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbList)) {
    body->insert(pair<string, string>("DbList", *request->dbList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reserve)) {
    body->insert(pair<string, string>("Reserve", *request->reserve));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigureDtsJob"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigureDtsJobResponse(callApi(params, req, runtime));
}

ConfigureDtsJobResponse Alibabacloud_Dts20200101::Client::configureDtsJob(shared_ptr<ConfigureDtsJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configureDtsJobWithOptions(request, runtime);
}

ConfigureDtsJobResponse Alibabacloud_Dts20200101::Client::configureDtsJobAdvance(shared_ptr<ConfigureDtsJobAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"product", boost::any(string("Dts"))},
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
  shared_ptr<ConfigureDtsJobRequest> configureDtsJobReq = make_shared<ConfigureDtsJobRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, configureDtsJobReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->fileOssUrlObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->body->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"content", !request->fileOssUrlObject ? boost::any() : boost::any(*request->fileOssUrlObject)},
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
    configureDtsJobReq->fileOssUrl = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<ConfigureDtsJobResponse> configureDtsJobResp = make_shared<ConfigureDtsJobResponse>(configureDtsJobWithOptions(configureDtsJobReq, runtime));
  return *configureDtsJobResp;
}

ConfigureMigrationJobResponse Alibabacloud_Dts20200101::Client::configureMigrationJobWithOptions(shared_ptr<ConfigureMigrationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkpoint)) {
    query->insert(pair<string, string>("Checkpoint", *request->checkpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobId)) {
    query->insert(pair<string, string>("MigrationJobId", *request->migrationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobName)) {
    query->insert(pair<string, string>("MigrationJobName", *request->migrationJobName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationReserved)) {
    query->insert(pair<string, string>("MigrationReserved", *request->migrationReserved));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<ConfigureMigrationJobRequestDestinationEndpoint>(request->destinationEndpoint)) {
    query->insert(pair<string, ConfigureMigrationJobRequestDestinationEndpoint>("DestinationEndpoint", *request->destinationEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<ConfigureMigrationJobRequestMigrationMode>(request->migrationMode)) {
    query->insert(pair<string, ConfigureMigrationJobRequestMigrationMode>("MigrationMode", *request->migrationMode));
  }
  if (!Darabonba_Util::Client::isUnset<ConfigureMigrationJobRequestSourceEndpoint>(request->sourceEndpoint)) {
    query->insert(pair<string, ConfigureMigrationJobRequestSourceEndpoint>("SourceEndpoint", *request->sourceEndpoint));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationObject)) {
    body->insert(pair<string, string>("MigrationObject", *request->migrationObject));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigureMigrationJob"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigureMigrationJobResponse(callApi(params, req, runtime));
}

ConfigureMigrationJobResponse Alibabacloud_Dts20200101::Client::configureMigrationJob(shared_ptr<ConfigureMigrationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configureMigrationJobWithOptions(request, runtime);
}

ConfigureMigrationJobAlertResponse Alibabacloud_Dts20200101::Client::configureMigrationJobAlertWithOptions(shared_ptr<ConfigureMigrationJobAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->delayAlertPhone)) {
    query->insert(pair<string, string>("DelayAlertPhone", *request->delayAlertPhone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->delayAlertStatus)) {
    query->insert(pair<string, string>("DelayAlertStatus", *request->delayAlertStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->delayOverSeconds)) {
    query->insert(pair<string, string>("DelayOverSeconds", *request->delayOverSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorAlertPhone)) {
    query->insert(pair<string, string>("ErrorAlertPhone", *request->errorAlertPhone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorAlertStatus)) {
    query->insert(pair<string, string>("ErrorAlertStatus", *request->errorAlertStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobId)) {
    query->insert(pair<string, string>("MigrationJobId", *request->migrationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigureMigrationJobAlert"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigureMigrationJobAlertResponse(callApi(params, req, runtime));
}

ConfigureMigrationJobAlertResponse Alibabacloud_Dts20200101::Client::configureMigrationJobAlert(shared_ptr<ConfigureMigrationJobAlertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configureMigrationJobAlertWithOptions(request, runtime);
}

ConfigureSubscriptionResponse Alibabacloud_Dts20200101::Client::configureSubscriptionWithOptions(shared_ptr<ConfigureSubscriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkpoint)) {
    query->insert(pair<string, string>("Checkpoint", *request->checkpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbList)) {
    query->insert(pair<string, string>("DbList", *request->dbList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedClusterId)) {
    query->insert(pair<string, string>("DedicatedClusterId", *request->dedicatedClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->delayNotice)) {
    query->insert(pair<string, bool>("DelayNotice", *request->delayNotice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->delayPhone)) {
    query->insert(pair<string, string>("DelayPhone", *request->delayPhone));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->delayRuleTime)) {
    query->insert(pair<string, long>("DelayRuleTime", *request->delayRuleTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsBisLabel)) {
    query->insert(pair<string, string>("DtsBisLabel", *request->dtsBisLabel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobName)) {
    query->insert(pair<string, string>("DtsJobName", *request->dtsJobName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->errorNotice)) {
    query->insert(pair<string, bool>("ErrorNotice", *request->errorNotice));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorPhone)) {
    query->insert(pair<string, string>("ErrorPhone", *request->errorPhone));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->maxDu)) {
    query->insert(pair<string, double>("MaxDu", *request->maxDu));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->minDu)) {
    query->insert(pair<string, double>("MinDu", *request->minDu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reserve)) {
    query->insert(pair<string, string>("Reserve", *request->reserve));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointDatabaseName)) {
    query->insert(pair<string, string>("SourceEndpointDatabaseName", *request->sourceEndpointDatabaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointEngineName)) {
    query->insert(pair<string, string>("SourceEndpointEngineName", *request->sourceEndpointEngineName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointIP)) {
    query->insert(pair<string, string>("SourceEndpointIP", *request->sourceEndpointIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointInstanceID)) {
    query->insert(pair<string, string>("SourceEndpointInstanceID", *request->sourceEndpointInstanceID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointInstanceType)) {
    query->insert(pair<string, string>("SourceEndpointInstanceType", *request->sourceEndpointInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointOracleSID)) {
    query->insert(pair<string, string>("SourceEndpointOracleSID", *request->sourceEndpointOracleSID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointOwnerID)) {
    query->insert(pair<string, string>("SourceEndpointOwnerID", *request->sourceEndpointOwnerID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointPassword)) {
    query->insert(pair<string, string>("SourceEndpointPassword", *request->sourceEndpointPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointPort)) {
    query->insert(pair<string, string>("SourceEndpointPort", *request->sourceEndpointPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointRegion)) {
    query->insert(pair<string, string>("SourceEndpointRegion", *request->sourceEndpointRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointRole)) {
    query->insert(pair<string, string>("SourceEndpointRole", *request->sourceEndpointRole));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointUserName)) {
    query->insert(pair<string, string>("SourceEndpointUserName", *request->sourceEndpointUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcCaCertificateOssUrl)) {
    query->insert(pair<string, string>("SrcCaCertificateOssUrl", *request->srcCaCertificateOssUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcCaCertificatePassword)) {
    query->insert(pair<string, string>("SrcCaCertificatePassword", *request->srcCaCertificatePassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcClientCertOssUrl)) {
    query->insert(pair<string, string>("SrcClientCertOssUrl", *request->srcClientCertOssUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcClientKeyOssUrl)) {
    query->insert(pair<string, string>("SrcClientKeyOssUrl", *request->srcClientKeyOssUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcClientPassword)) {
    query->insert(pair<string, string>("SrcClientPassword", *request->srcClientPassword));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->subscriptionDataTypeDDL)) {
    query->insert(pair<string, bool>("SubscriptionDataTypeDDL", *request->subscriptionDataTypeDDL));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->subscriptionDataTypeDML)) {
    query->insert(pair<string, bool>("SubscriptionDataTypeDML", *request->subscriptionDataTypeDML));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceNetworkType)) {
    query->insert(pair<string, string>("SubscriptionInstanceNetworkType", *request->subscriptionInstanceNetworkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceVPCId)) {
    query->insert(pair<string, string>("SubscriptionInstanceVPCId", *request->subscriptionInstanceVPCId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceVSwitchId)) {
    query->insert(pair<string, string>("SubscriptionInstanceVSwitchId", *request->subscriptionInstanceVSwitchId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigureSubscription"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigureSubscriptionResponse(callApi(params, req, runtime));
}

ConfigureSubscriptionResponse Alibabacloud_Dts20200101::Client::configureSubscription(shared_ptr<ConfigureSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configureSubscriptionWithOptions(request, runtime);
}

ConfigureSubscriptionInstanceResponse Alibabacloud_Dts20200101::Client::configureSubscriptionInstanceWithOptions(shared_ptr<ConfigureSubscriptionInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceId)) {
    query->insert(pair<string, string>("SubscriptionInstanceId", *request->subscriptionInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceName)) {
    query->insert(pair<string, string>("SubscriptionInstanceName", *request->subscriptionInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceNetworkType)) {
    query->insert(pair<string, string>("SubscriptionInstanceNetworkType", *request->subscriptionInstanceNetworkType));
  }
  if (!Darabonba_Util::Client::isUnset<ConfigureSubscriptionInstanceRequestSourceEndpoint>(request->sourceEndpoint)) {
    query->insert(pair<string, ConfigureSubscriptionInstanceRequestSourceEndpoint>("SourceEndpoint", *request->sourceEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<ConfigureSubscriptionInstanceRequestSubscriptionDataType>(request->subscriptionDataType)) {
    query->insert(pair<string, ConfigureSubscriptionInstanceRequestSubscriptionDataType>("SubscriptionDataType", *request->subscriptionDataType));
  }
  if (!Darabonba_Util::Client::isUnset<ConfigureSubscriptionInstanceRequestSubscriptionInstance>(request->subscriptionInstance)) {
    query->insert(pair<string, ConfigureSubscriptionInstanceRequestSubscriptionInstance>("SubscriptionInstance", *request->subscriptionInstance));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionObject)) {
    body->insert(pair<string, string>("SubscriptionObject", *request->subscriptionObject));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigureSubscriptionInstance"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigureSubscriptionInstanceResponse(callApi(params, req, runtime));
}

ConfigureSubscriptionInstanceResponse Alibabacloud_Dts20200101::Client::configureSubscriptionInstance(shared_ptr<ConfigureSubscriptionInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configureSubscriptionInstanceWithOptions(request, runtime);
}

ConfigureSubscriptionInstanceAlertResponse Alibabacloud_Dts20200101::Client::configureSubscriptionInstanceAlertWithOptions(shared_ptr<ConfigureSubscriptionInstanceAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->delayAlertPhone)) {
    query->insert(pair<string, string>("DelayAlertPhone", *request->delayAlertPhone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->delayAlertStatus)) {
    query->insert(pair<string, string>("DelayAlertStatus", *request->delayAlertStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->delayOverSeconds)) {
    query->insert(pair<string, string>("DelayOverSeconds", *request->delayOverSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorAlertPhone)) {
    query->insert(pair<string, string>("ErrorAlertPhone", *request->errorAlertPhone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorAlertStatus)) {
    query->insert(pair<string, string>("ErrorAlertStatus", *request->errorAlertStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceId)) {
    query->insert(pair<string, string>("SubscriptionInstanceId", *request->subscriptionInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigureSubscriptionInstanceAlert"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigureSubscriptionInstanceAlertResponse(callApi(params, req, runtime));
}

ConfigureSubscriptionInstanceAlertResponse Alibabacloud_Dts20200101::Client::configureSubscriptionInstanceAlert(shared_ptr<ConfigureSubscriptionInstanceAlertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configureSubscriptionInstanceAlertWithOptions(request, runtime);
}

ConfigureSynchronizationJobResponse Alibabacloud_Dts20200101::Client::configureSynchronizationJobWithOptions(shared_ptr<ConfigureSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->checkpoint)) {
    query->insert(pair<string, string>("Checkpoint", *request->checkpoint));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dataInitialization)) {
    query->insert(pair<string, bool>("DataInitialization", *request->dataInitialization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationReserved)) {
    query->insert(pair<string, string>("MigrationReserved", *request->migrationReserved));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->structureInitialization)) {
    query->insert(pair<string, bool>("StructureInitialization", *request->structureInitialization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobName)) {
    query->insert(pair<string, string>("SynchronizationJobName", *request->synchronizationJobName));
  }
  if (!Darabonba_Util::Client::isUnset<ConfigureSynchronizationJobRequestDestinationEndpoint>(request->destinationEndpoint)) {
    query->insert(pair<string, ConfigureSynchronizationJobRequestDestinationEndpoint>("DestinationEndpoint", *request->destinationEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<ConfigureSynchronizationJobRequestPartitionKey>(request->partitionKey)) {
    query->insert(pair<string, ConfigureSynchronizationJobRequestPartitionKey>("PartitionKey", *request->partitionKey));
  }
  if (!Darabonba_Util::Client::isUnset<ConfigureSynchronizationJobRequestSourceEndpoint>(request->sourceEndpoint)) {
    query->insert(pair<string, ConfigureSynchronizationJobRequestSourceEndpoint>("SourceEndpoint", *request->sourceEndpoint));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationObjects)) {
    body->insert(pair<string, string>("SynchronizationObjects", *request->synchronizationObjects));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigureSynchronizationJob"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigureSynchronizationJobResponse(callApi(params, req, runtime));
}

ConfigureSynchronizationJobResponse Alibabacloud_Dts20200101::Client::configureSynchronizationJob(shared_ptr<ConfigureSynchronizationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configureSynchronizationJobWithOptions(request, runtime);
}

ConfigureSynchronizationJobAlertResponse Alibabacloud_Dts20200101::Client::configureSynchronizationJobAlertWithOptions(shared_ptr<ConfigureSynchronizationJobAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->delayAlertPhone)) {
    query->insert(pair<string, string>("DelayAlertPhone", *request->delayAlertPhone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->delayAlertStatus)) {
    query->insert(pair<string, string>("DelayAlertStatus", *request->delayAlertStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->delayOverSeconds)) {
    query->insert(pair<string, string>("DelayOverSeconds", *request->delayOverSeconds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorAlertPhone)) {
    query->insert(pair<string, string>("ErrorAlertPhone", *request->errorAlertPhone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->errorAlertStatus)) {
    query->insert(pair<string, string>("ErrorAlertStatus", *request->errorAlertStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigureSynchronizationJobAlert"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigureSynchronizationJobAlertResponse(callApi(params, req, runtime));
}

ConfigureSynchronizationJobAlertResponse Alibabacloud_Dts20200101::Client::configureSynchronizationJobAlert(shared_ptr<ConfigureSynchronizationJobAlertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configureSynchronizationJobAlertWithOptions(request, runtime);
}

ConfigureSynchronizationJobReplicatorCompareResponse Alibabacloud_Dts20200101::Client::configureSynchronizationJobReplicatorCompareWithOptions(shared_ptr<ConfigureSynchronizationJobReplicatorCompareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->synchronizationReplicatorCompareEnable)) {
    query->insert(pair<string, bool>("SynchronizationReplicatorCompareEnable", *request->synchronizationReplicatorCompareEnable));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfigureSynchronizationJobReplicatorCompare"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfigureSynchronizationJobReplicatorCompareResponse(callApi(params, req, runtime));
}

ConfigureSynchronizationJobReplicatorCompareResponse Alibabacloud_Dts20200101::Client::configureSynchronizationJobReplicatorCompare(shared_ptr<ConfigureSynchronizationJobReplicatorCompareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return configureSynchronizationJobReplicatorCompareWithOptions(request, runtime);
}

ConvertInstanceResourceGroupResponse Alibabacloud_Dts20200101::Client::convertInstanceResourceGroupWithOptions(shared_ptr<ConvertInstanceResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->newResourceGroupId)) {
    query->insert(pair<string, string>("NewResourceGroupId", *request->newResourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConvertInstanceResourceGroup"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConvertInstanceResourceGroupResponse(callApi(params, req, runtime));
}

ConvertInstanceResourceGroupResponse Alibabacloud_Dts20200101::Client::convertInstanceResourceGroup(shared_ptr<ConvertInstanceResourceGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return convertInstanceResourceGroupWithOptions(request, runtime);
}

CountJobByConditionResponse Alibabacloud_Dts20200101::Client::countJobByConditionWithOptions(shared_ptr<CountJobByConditionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destDbType)) {
    query->insert(pair<string, string>("DestDbType", *request->destDbType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobType)) {
    query->insert(pair<string, string>("JobType", *request->jobType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcDbType)) {
    query->insert(pair<string, string>("SrcDbType", *request->srcDbType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CountJobByCondition"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CountJobByConditionResponse(callApi(params, req, runtime));
}

CountJobByConditionResponse Alibabacloud_Dts20200101::Client::countJobByCondition(shared_ptr<CountJobByConditionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return countJobByConditionWithOptions(request, runtime);
}

CreateConsumerChannelResponse Alibabacloud_Dts20200101::Client::createConsumerChannelWithOptions(shared_ptr<CreateConsumerChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerGroupName)) {
    query->insert(pair<string, string>("ConsumerGroupName", *request->consumerGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerGroupPassword)) {
    query->insert(pair<string, string>("ConsumerGroupPassword", *request->consumerGroupPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerGroupUserName)) {
    query->insert(pair<string, string>("ConsumerGroupUserName", *request->consumerGroupUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConsumerChannel"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConsumerChannelResponse(callApi(params, req, runtime));
}

CreateConsumerChannelResponse Alibabacloud_Dts20200101::Client::createConsumerChannel(shared_ptr<CreateConsumerChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConsumerChannelWithOptions(request, runtime);
}

CreateConsumerGroupResponse Alibabacloud_Dts20200101::Client::createConsumerGroupWithOptions(shared_ptr<CreateConsumerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerGroupName)) {
    query->insert(pair<string, string>("ConsumerGroupName", *request->consumerGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerGroupPassword)) {
    query->insert(pair<string, string>("ConsumerGroupPassword", *request->consumerGroupPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerGroupUserName)) {
    query->insert(pair<string, string>("ConsumerGroupUserName", *request->consumerGroupUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceId)) {
    query->insert(pair<string, string>("SubscriptionInstanceId", *request->subscriptionInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConsumerGroup"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConsumerGroupResponse(callApi(params, req, runtime));
}

CreateConsumerGroupResponse Alibabacloud_Dts20200101::Client::createConsumerGroup(shared_ptr<CreateConsumerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConsumerGroupWithOptions(request, runtime);
}

CreateDedicatedClusterMonitorRuleResponse Alibabacloud_Dts20200101::Client::createDedicatedClusterMonitorRuleWithOptions(shared_ptr<CreateDedicatedClusterMonitorRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cpuAlarmThreshold)) {
    query->insert(pair<string, long>("CpuAlarmThreshold", *request->cpuAlarmThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedClusterId)) {
    query->insert(pair<string, string>("DedicatedClusterId", *request->dedicatedClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->diskAlarmThreshold)) {
    query->insert(pair<string, long>("DiskAlarmThreshold", *request->diskAlarmThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duAlarmThreshold)) {
    query->insert(pair<string, long>("DuAlarmThreshold", *request->duAlarmThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memAlarmThreshold)) {
    query->insert(pair<string, long>("MemAlarmThreshold", *request->memAlarmThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->noticeSwitch)) {
    query->insert(pair<string, long>("NoticeSwitch", *request->noticeSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phones)) {
    query->insert(pair<string, string>("Phones", *request->phones));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDedicatedClusterMonitorRule"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDedicatedClusterMonitorRuleResponse(callApi(params, req, runtime));
}

CreateDedicatedClusterMonitorRuleResponse Alibabacloud_Dts20200101::Client::createDedicatedClusterMonitorRule(shared_ptr<CreateDedicatedClusterMonitorRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDedicatedClusterMonitorRuleWithOptions(request, runtime);
}

CreateDtsInstanceResponse Alibabacloud_Dts20200101::Client::createDtsInstanceWithOptions(shared_ptr<CreateDtsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoStart)) {
    query->insert(pair<string, bool>("AutoStart", *request->autoStart));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->computeUnit)) {
    query->insert(pair<string, long>("ComputeUnit", *request->computeUnit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->databaseCount)) {
    query->insert(pair<string, long>("DatabaseCount", *request->databaseCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointEngineName)) {
    query->insert(pair<string, string>("DestinationEndpointEngineName", *request->destinationEndpointEngineName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationRegion)) {
    query->insert(pair<string, string>("DestinationRegion", *request->destinationRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsRegion)) {
    query->insert(pair<string, string>("DtsRegion", *request->dtsRegion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->du)) {
    query->insert(pair<string, long>("Du", *request->du));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->feeType)) {
    query->insert(pair<string, string>("FeeType", *request->feeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceClass)) {
    query->insert(pair<string, string>("InstanceClass", *request->instanceClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->maxDu)) {
    query->insert(pair<string, double>("MaxDu", *request->maxDu));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->minDu)) {
    query->insert(pair<string, double>("MinDu", *request->minDu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    query->insert(pair<string, string>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->quantity)) {
    query->insert(pair<string, long>("Quantity", *request->quantity));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointEngineName)) {
    query->insert(pair<string, string>("SourceEndpointEngineName", *request->sourceEndpointEngineName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceRegion)) {
    query->insert(pair<string, string>("SourceRegion", *request->sourceRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->syncArchitecture)) {
    query->insert(pair<string, string>("SyncArchitecture", *request->syncArchitecture));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->usedTime)) {
    query->insert(pair<string, long>("UsedTime", *request->usedTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDtsInstance"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDtsInstanceResponse(callApi(params, req, runtime));
}

CreateDtsInstanceResponse Alibabacloud_Dts20200101::Client::createDtsInstance(shared_ptr<CreateDtsInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDtsInstanceWithOptions(request, runtime);
}

CreateJobMonitorRuleResponse Alibabacloud_Dts20200101::Client::createJobMonitorRuleWithOptions(shared_ptr<CreateJobMonitorRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->delayRuleTime)) {
    query->insert(pair<string, long>("DelayRuleTime", *request->delayRuleTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->noticeValue)) {
    query->insert(pair<string, long>("NoticeValue", *request->noticeValue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    query->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    query->insert(pair<string, string>("Phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->times)) {
    query->insert(pair<string, long>("Times", *request->times));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateJobMonitorRule"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateJobMonitorRuleResponse(callApi(params, req, runtime));
}

CreateJobMonitorRuleResponse Alibabacloud_Dts20200101::Client::createJobMonitorRule(shared_ptr<CreateJobMonitorRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createJobMonitorRuleWithOptions(request, runtime);
}

CreateMigrationJobResponse Alibabacloud_Dts20200101::Client::createMigrationJobWithOptions(shared_ptr<CreateMigrationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobClass)) {
    query->insert(pair<string, string>("MigrationJobClass", *request->migrationJobClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMigrationJob"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMigrationJobResponse(callApi(params, req, runtime));
}

CreateMigrationJobResponse Alibabacloud_Dts20200101::Client::createMigrationJob(shared_ptr<CreateMigrationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMigrationJobWithOptions(request, runtime);
}

CreateReverseDtsJobResponse Alibabacloud_Dts20200101::Client::createReverseDtsJobWithOptions(shared_ptr<CreateReverseDtsJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shardPassword)) {
    query->insert(pair<string, string>("ShardPassword", *request->shardPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shardUsername)) {
    query->insert(pair<string, string>("ShardUsername", *request->shardUsername));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateReverseDtsJob"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateReverseDtsJobResponse(callApi(params, req, runtime));
}

CreateReverseDtsJobResponse Alibabacloud_Dts20200101::Client::createReverseDtsJob(shared_ptr<CreateReverseDtsJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createReverseDtsJobWithOptions(request, runtime);
}

CreateSubscriptionInstanceResponse Alibabacloud_Dts20200101::Client::createSubscriptionInstanceWithOptions(shared_ptr<CreateSubscriptionInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    query->insert(pair<string, string>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->usedTime)) {
    query->insert(pair<string, long>("UsedTime", *request->usedTime));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSubscriptionInstanceRequestSourceEndpoint>(request->sourceEndpoint)) {
    query->insert(pair<string, CreateSubscriptionInstanceRequestSourceEndpoint>("SourceEndpoint", *request->sourceEndpoint));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSubscriptionInstance"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSubscriptionInstanceResponse(callApi(params, req, runtime));
}

CreateSubscriptionInstanceResponse Alibabacloud_Dts20200101::Client::createSubscriptionInstance(shared_ptr<CreateSubscriptionInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSubscriptionInstanceWithOptions(request, runtime);
}

CreateSynchronizationJobResponse Alibabacloud_Dts20200101::Client::createSynchronizationJobWithOptions(shared_ptr<CreateSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->DBInstanceCount)) {
    query->insert(pair<string, long>("DBInstanceCount", *request->DBInstanceCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destRegion)) {
    query->insert(pair<string, string>("DestRegion", *request->destRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->payType)) {
    query->insert(pair<string, string>("PayType", *request->payType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    query->insert(pair<string, string>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceRegion)) {
    query->insert(pair<string, string>("SourceRegion", *request->sourceRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobClass)) {
    query->insert(pair<string, string>("SynchronizationJobClass", *request->synchronizationJobClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topology)) {
    query->insert(pair<string, string>("Topology", *request->topology));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->usedTime)) {
    query->insert(pair<string, long>("UsedTime", *request->usedTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkType)) {
    query->insert(pair<string, string>("networkType", *request->networkType));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSynchronizationJobRequestDestinationEndpoint>(request->destinationEndpoint)) {
    query->insert(pair<string, CreateSynchronizationJobRequestDestinationEndpoint>("DestinationEndpoint", *request->destinationEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<CreateSynchronizationJobRequestSourceEndpoint>(request->sourceEndpoint)) {
    query->insert(pair<string, CreateSynchronizationJobRequestSourceEndpoint>("SourceEndpoint", *request->sourceEndpoint));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSynchronizationJob"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSynchronizationJobResponse(callApi(params, req, runtime));
}

CreateSynchronizationJobResponse Alibabacloud_Dts20200101::Client::createSynchronizationJob(shared_ptr<CreateSynchronizationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSynchronizationJobWithOptions(request, runtime);
}

DeleteConsumerChannelResponse Alibabacloud_Dts20200101::Client::deleteConsumerChannelWithOptions(shared_ptr<DeleteConsumerChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerGroupId)) {
    query->insert(pair<string, string>("ConsumerGroupId", *request->consumerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConsumerChannel"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConsumerChannelResponse(callApi(params, req, runtime));
}

DeleteConsumerChannelResponse Alibabacloud_Dts20200101::Client::deleteConsumerChannel(shared_ptr<DeleteConsumerChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConsumerChannelWithOptions(request, runtime);
}

DeleteConsumerGroupResponse Alibabacloud_Dts20200101::Client::deleteConsumerGroupWithOptions(shared_ptr<DeleteConsumerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerGroupID)) {
    query->insert(pair<string, string>("ConsumerGroupID", *request->consumerGroupID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceId)) {
    query->insert(pair<string, string>("SubscriptionInstanceId", *request->subscriptionInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConsumerGroup"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConsumerGroupResponse(callApi(params, req, runtime));
}

DeleteConsumerGroupResponse Alibabacloud_Dts20200101::Client::deleteConsumerGroup(shared_ptr<DeleteConsumerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConsumerGroupWithOptions(request, runtime);
}

DeleteDtsJobResponse Alibabacloud_Dts20200101::Client::deleteDtsJobWithOptions(shared_ptr<DeleteDtsJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobType)) {
    query->insert(pair<string, string>("JobType", *request->jobType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDtsJob"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDtsJobResponse(callApi(params, req, runtime));
}

DeleteDtsJobResponse Alibabacloud_Dts20200101::Client::deleteDtsJob(shared_ptr<DeleteDtsJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDtsJobWithOptions(request, runtime);
}

DeleteDtsJobsResponse Alibabacloud_Dts20200101::Client::deleteDtsJobsWithOptions(shared_ptr<DeleteDtsJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobIds)) {
    query->insert(pair<string, string>("DtsJobIds", *request->dtsJobIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDtsJobs"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDtsJobsResponse(callApi(params, req, runtime));
}

DeleteDtsJobsResponse Alibabacloud_Dts20200101::Client::deleteDtsJobs(shared_ptr<DeleteDtsJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDtsJobsWithOptions(request, runtime);
}

DeleteMigrationJobResponse Alibabacloud_Dts20200101::Client::deleteMigrationJobWithOptions(shared_ptr<DeleteMigrationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobId)) {
    query->insert(pair<string, string>("MigrationJobId", *request->migrationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMigrationJob"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMigrationJobResponse(callApi(params, req, runtime));
}

DeleteMigrationJobResponse Alibabacloud_Dts20200101::Client::deleteMigrationJob(shared_ptr<DeleteMigrationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMigrationJobWithOptions(request, runtime);
}

DeleteSubscriptionInstanceResponse Alibabacloud_Dts20200101::Client::deleteSubscriptionInstanceWithOptions(shared_ptr<DeleteSubscriptionInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceId)) {
    query->insert(pair<string, string>("SubscriptionInstanceId", *request->subscriptionInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSubscriptionInstance"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSubscriptionInstanceResponse(callApi(params, req, runtime));
}

DeleteSubscriptionInstanceResponse Alibabacloud_Dts20200101::Client::deleteSubscriptionInstance(shared_ptr<DeleteSubscriptionInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSubscriptionInstanceWithOptions(request, runtime);
}

DeleteSynchronizationJobResponse Alibabacloud_Dts20200101::Client::deleteSynchronizationJobWithOptions(shared_ptr<DeleteSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSynchronizationJob"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSynchronizationJobResponse(callApi(params, req, runtime));
}

DeleteSynchronizationJobResponse Alibabacloud_Dts20200101::Client::deleteSynchronizationJob(shared_ptr<DeleteSynchronizationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSynchronizationJobWithOptions(request, runtime);
}

DescribeChannelAccountResponse Alibabacloud_Dts20200101::Client::describeChannelAccountWithOptions(shared_ptr<DescribeChannelAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChannelAccount"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelAccountResponse(callApi(params, req, runtime));
}

DescribeChannelAccountResponse Alibabacloud_Dts20200101::Client::describeChannelAccount(shared_ptr<DescribeChannelAccountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChannelAccountWithOptions(request, runtime);
}

DescribeCheckJobsResponse Alibabacloud_Dts20200101::Client::describeCheckJobsWithOptions(shared_ptr<DescribeCheckJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkJobId)) {
    query->insert(pair<string, string>("CheckJobId", *request->checkJobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->checkType)) {
    query->insert(pair<string, long>("CheckType", *request->checkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobName)) {
    query->insert(pair<string, string>("JobName", *request->jobName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCheckJobs"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCheckJobsResponse(callApi(params, req, runtime));
}

DescribeCheckJobsResponse Alibabacloud_Dts20200101::Client::describeCheckJobs(shared_ptr<DescribeCheckJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCheckJobsWithOptions(request, runtime);
}

DescribeClusterOperateLogsResponse Alibabacloud_Dts20200101::Client::describeClusterOperateLogsWithOptions(shared_ptr<DescribeClusterOperateLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedClusterId)) {
    body->insert(pair<string, string>("DedicatedClusterId", *request->dedicatedClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    body->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerID)) {
    body->insert(pair<string, string>("OwnerID", *request->ownerID));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    body->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterOperateLogs"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterOperateLogsResponse(callApi(params, req, runtime));
}

DescribeClusterOperateLogsResponse Alibabacloud_Dts20200101::Client::describeClusterOperateLogs(shared_ptr<DescribeClusterOperateLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterOperateLogsWithOptions(request, runtime);
}

DescribeClusterUsedUtilizationResponse Alibabacloud_Dts20200101::Client::describeClusterUsedUtilizationWithOptions(shared_ptr<DescribeClusterUsedUtilizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedClusterId)) {
    body->insert(pair<string, string>("DedicatedClusterId", *request->dedicatedClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    body->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    body->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    body->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerID)) {
    body->insert(pair<string, string>("OwnerID", *request->ownerID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    body->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    body->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeClusterUsedUtilization"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeClusterUsedUtilizationResponse(callApi(params, req, runtime));
}

DescribeClusterUsedUtilizationResponse Alibabacloud_Dts20200101::Client::describeClusterUsedUtilization(shared_ptr<DescribeClusterUsedUtilizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeClusterUsedUtilizationWithOptions(request, runtime);
}

DescribeConnectionStatusResponse Alibabacloud_Dts20200101::Client::describeConnectionStatusWithOptions(shared_ptr<DescribeConnectionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointArchitecture)) {
    query->insert(pair<string, string>("DestinationEndpointArchitecture", *request->destinationEndpointArchitecture));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointDatabaseName)) {
    query->insert(pair<string, string>("DestinationEndpointDatabaseName", *request->destinationEndpointDatabaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointEngineName)) {
    query->insert(pair<string, string>("DestinationEndpointEngineName", *request->destinationEndpointEngineName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointIP)) {
    query->insert(pair<string, string>("DestinationEndpointIP", *request->destinationEndpointIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointInstanceID)) {
    query->insert(pair<string, string>("DestinationEndpointInstanceID", *request->destinationEndpointInstanceID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointInstanceType)) {
    query->insert(pair<string, string>("DestinationEndpointInstanceType", *request->destinationEndpointInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointOracleSID)) {
    query->insert(pair<string, string>("DestinationEndpointOracleSID", *request->destinationEndpointOracleSID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointPassword)) {
    query->insert(pair<string, string>("DestinationEndpointPassword", *request->destinationEndpointPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointPort)) {
    query->insert(pair<string, string>("DestinationEndpointPort", *request->destinationEndpointPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointRegion)) {
    query->insert(pair<string, string>("DestinationEndpointRegion", *request->destinationEndpointRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointUserName)) {
    query->insert(pair<string, string>("DestinationEndpointUserName", *request->destinationEndpointUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointArchitecture)) {
    query->insert(pair<string, string>("SourceEndpointArchitecture", *request->sourceEndpointArchitecture));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointDatabaseName)) {
    query->insert(pair<string, string>("SourceEndpointDatabaseName", *request->sourceEndpointDatabaseName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointEngineName)) {
    query->insert(pair<string, string>("SourceEndpointEngineName", *request->sourceEndpointEngineName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointIP)) {
    query->insert(pair<string, string>("SourceEndpointIP", *request->sourceEndpointIP));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointInstanceID)) {
    query->insert(pair<string, string>("SourceEndpointInstanceID", *request->sourceEndpointInstanceID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointInstanceType)) {
    query->insert(pair<string, string>("SourceEndpointInstanceType", *request->sourceEndpointInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointOracleSID)) {
    query->insert(pair<string, string>("SourceEndpointOracleSID", *request->sourceEndpointOracleSID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointPassword)) {
    query->insert(pair<string, string>("SourceEndpointPassword", *request->sourceEndpointPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointPort)) {
    query->insert(pair<string, string>("SourceEndpointPort", *request->sourceEndpointPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointRegion)) {
    query->insert(pair<string, string>("SourceEndpointRegion", *request->sourceEndpointRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointUserName)) {
    query->insert(pair<string, string>("SourceEndpointUserName", *request->sourceEndpointUserName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeConnectionStatus"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeConnectionStatusResponse(callApi(params, req, runtime));
}

DescribeConnectionStatusResponse Alibabacloud_Dts20200101::Client::describeConnectionStatus(shared_ptr<DescribeConnectionStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConnectionStatusWithOptions(request, runtime);
}

DescribeConsumerChannelResponse Alibabacloud_Dts20200101::Client::describeConsumerChannelWithOptions(shared_ptr<DescribeConsumerChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentChannelId)) {
    query->insert(pair<string, string>("ParentChannelId", *request->parentChannelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeConsumerChannel"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeConsumerChannelResponse(callApi(params, req, runtime));
}

DescribeConsumerChannelResponse Alibabacloud_Dts20200101::Client::describeConsumerChannel(shared_ptr<DescribeConsumerChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConsumerChannelWithOptions(request, runtime);
}

DescribeConsumerGroupResponse Alibabacloud_Dts20200101::Client::describeConsumerGroupWithOptions(shared_ptr<DescribeConsumerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceId)) {
    query->insert(pair<string, string>("SubscriptionInstanceId", *request->subscriptionInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeConsumerGroup"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeConsumerGroupResponse(callApi(params, req, runtime));
}

DescribeConsumerGroupResponse Alibabacloud_Dts20200101::Client::describeConsumerGroup(shared_ptr<DescribeConsumerGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeConsumerGroupWithOptions(request, runtime);
}

DescribeDTSIPResponse Alibabacloud_Dts20200101::Client::describeDTSIPWithOptions(shared_ptr<DescribeDTSIPRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationEndpointRegion)) {
    query->insert(pair<string, string>("DestinationEndpointRegion", *request->destinationEndpointRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceEndpointRegion)) {
    query->insert(pair<string, string>("SourceEndpointRegion", *request->sourceEndpointRegion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDTSIP"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDTSIPResponse(callApi(params, req, runtime));
}

DescribeDTSIPResponse Alibabacloud_Dts20200101::Client::describeDTSIP(shared_ptr<DescribeDTSIPRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDTSIPWithOptions(request, runtime);
}

DescribeDataCheckReportUrlResponse Alibabacloud_Dts20200101::Client::describeDataCheckReportUrlWithOptions(shared_ptr<DescribeDataCheckReportUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->checkType)) {
    query->insert(pair<string, long>("CheckType", *request->checkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbName)) {
    query->insert(pair<string, string>("TbName", *request->tbName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataCheckReportUrl"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataCheckReportUrlResponse(callApi(params, req, runtime));
}

DescribeDataCheckReportUrlResponse Alibabacloud_Dts20200101::Client::describeDataCheckReportUrl(shared_ptr<DescribeDataCheckReportUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataCheckReportUrlWithOptions(request, runtime);
}

DescribeDataCheckTableDetailsResponse Alibabacloud_Dts20200101::Client::describeDataCheckTableDetailsWithOptions(shared_ptr<DescribeDataCheckTableDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->checkType)) {
    query->insert(pair<string, long>("CheckType", *request->checkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->schemaName)) {
    query->insert(pair<string, string>("SchemaName", *request->schemaName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tableName)) {
    query->insert(pair<string, string>("TableName", *request->tableName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataCheckTableDetails"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataCheckTableDetailsResponse(callApi(params, req, runtime));
}

DescribeDataCheckTableDetailsResponse Alibabacloud_Dts20200101::Client::describeDataCheckTableDetails(shared_ptr<DescribeDataCheckTableDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataCheckTableDetailsWithOptions(request, runtime);
}

DescribeDataCheckTableDiffDetailsResponse Alibabacloud_Dts20200101::Client::describeDataCheckTableDiffDetailsWithOptions(shared_ptr<DescribeDataCheckTableDiffDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->checkType)) {
    query->insert(pair<string, long>("CheckType", *request->checkType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dbName)) {
    query->insert(pair<string, string>("DbName", *request->dbName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tbName)) {
    query->insert(pair<string, string>("TbName", *request->tbName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDataCheckTableDiffDetails"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDataCheckTableDiffDetailsResponse(callApi(params, req, runtime));
}

DescribeDataCheckTableDiffDetailsResponse Alibabacloud_Dts20200101::Client::describeDataCheckTableDiffDetails(shared_ptr<DescribeDataCheckTableDiffDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDataCheckTableDiffDetailsWithOptions(request, runtime);
}

DescribeDedicatedClusterResponse Alibabacloud_Dts20200101::Client::describeDedicatedClusterWithOptions(shared_ptr<DescribeDedicatedClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedClusterId)) {
    query->insert(pair<string, string>("DedicatedClusterId", *request->dedicatedClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDedicatedCluster"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDedicatedClusterResponse(callApi(params, req, runtime));
}

DescribeDedicatedClusterResponse Alibabacloud_Dts20200101::Client::describeDedicatedCluster(shared_ptr<DescribeDedicatedClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedClusterWithOptions(request, runtime);
}

DescribeDedicatedClusterMonitorRuleResponse Alibabacloud_Dts20200101::Client::describeDedicatedClusterMonitorRuleWithOptions(shared_ptr<DescribeDedicatedClusterMonitorRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedClusterId)) {
    query->insert(pair<string, string>("DedicatedClusterId", *request->dedicatedClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDedicatedClusterMonitorRule"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDedicatedClusterMonitorRuleResponse(callApi(params, req, runtime));
}

DescribeDedicatedClusterMonitorRuleResponse Alibabacloud_Dts20200101::Client::describeDedicatedClusterMonitorRule(shared_ptr<DescribeDedicatedClusterMonitorRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDedicatedClusterMonitorRuleWithOptions(request, runtime);
}

DescribeDtsEtlJobVersionInfoResponse Alibabacloud_Dts20200101::Client::describeDtsEtlJobVersionInfoWithOptions(shared_ptr<DescribeDtsEtlJobVersionInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDtsEtlJobVersionInfo"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDtsEtlJobVersionInfoResponse(callApi(params, req, runtime));
}

DescribeDtsEtlJobVersionInfoResponse Alibabacloud_Dts20200101::Client::describeDtsEtlJobVersionInfo(shared_ptr<DescribeDtsEtlJobVersionInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDtsEtlJobVersionInfoWithOptions(request, runtime);
}

DescribeDtsJobConfigResponse Alibabacloud_Dts20200101::Client::describeDtsJobConfigWithOptions(shared_ptr<DescribeDtsJobConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->forAcceleration)) {
    query->insert(pair<string, string>("ForAcceleration", *request->forAcceleration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->module)) {
    query->insert(pair<string, string>("Module", *request->module));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDtsJobConfig"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDtsJobConfigResponse(callApi(params, req, runtime));
}

DescribeDtsJobConfigResponse Alibabacloud_Dts20200101::Client::describeDtsJobConfig(shared_ptr<DescribeDtsJobConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDtsJobConfigWithOptions(request, runtime);
}

DescribeDtsJobDetailResponse Alibabacloud_Dts20200101::Client::describeDtsJobDetailWithOptions(shared_ptr<DescribeDtsJobDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceID)) {
    query->insert(pair<string, string>("DtsInstanceID", *request->dtsInstanceID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->syncSubJobHistory)) {
    query->insert(pair<string, bool>("SyncSubJobHistory", *request->syncSubJobHistory));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDtsJobDetail"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDtsJobDetailResponse(callApi(params, req, runtime));
}

DescribeDtsJobDetailResponse Alibabacloud_Dts20200101::Client::describeDtsJobDetail(shared_ptr<DescribeDtsJobDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDtsJobDetailWithOptions(request, runtime);
}

DescribeDtsJobsResponse Alibabacloud_Dts20200101::Client::describeDtsJobsWithOptions(shared_ptr<DescribeDtsJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedClusterId)) {
    query->insert(pair<string, string>("DedicatedClusterId", *request->dedicatedClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destProductType)) {
    query->insert(pair<string, string>("DestProductType", *request->destProductType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsBisLabel)) {
    query->insert(pair<string, string>("DtsBisLabel", *request->dtsBisLabel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    query->insert(pair<string, string>("InstanceType", *request->instanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobType)) {
    query->insert(pair<string, string>("JobType", *request->jobType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderColumn)) {
    query->insert(pair<string, string>("OrderColumn", *request->orderColumn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderDirection)) {
    query->insert(pair<string, string>("OrderDirection", *request->orderDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcProductType)) {
    query->insert(pair<string, string>("SrcProductType", *request->srcProductType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withoutDbList)) {
    query->insert(pair<string, bool>("WithoutDbList", *request->withoutDbList));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDtsJobs"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDtsJobsResponse(callApi(params, req, runtime));
}

DescribeDtsJobsResponse Alibabacloud_Dts20200101::Client::describeDtsJobs(shared_ptr<DescribeDtsJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDtsJobsWithOptions(request, runtime);
}

DescribeDtsServiceLogResponse Alibabacloud_Dts20200101::Client::describeDtsServiceLogWithOptions(shared_ptr<DescribeDtsServiceLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subJobType)) {
    query->insert(pair<string, string>("SubJobType", *request->subJobType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDtsServiceLog"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDtsServiceLogResponse(callApi(params, req, runtime));
}

DescribeDtsServiceLogResponse Alibabacloud_Dts20200101::Client::describeDtsServiceLog(shared_ptr<DescribeDtsServiceLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDtsServiceLogWithOptions(request, runtime);
}

DescribeEndpointSwitchStatusResponse Alibabacloud_Dts20200101::Client::describeEndpointSwitchStatusWithOptions(shared_ptr<DescribeEndpointSwitchStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEndpointSwitchStatus"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEndpointSwitchStatusResponse(callApi(params, req, runtime));
}

DescribeEndpointSwitchStatusResponse Alibabacloud_Dts20200101::Client::describeEndpointSwitchStatus(shared_ptr<DescribeEndpointSwitchStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEndpointSwitchStatusWithOptions(request, runtime);
}

DescribeEtlJobLogsResponse Alibabacloud_Dts20200101::Client::describeEtlJobLogsWithOptions(shared_ptr<DescribeEtlJobLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEtlJobLogs"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEtlJobLogsResponse(callApi(params, req, runtime));
}

DescribeEtlJobLogsResponse Alibabacloud_Dts20200101::Client::describeEtlJobLogs(shared_ptr<DescribeEtlJobLogsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEtlJobLogsWithOptions(request, runtime);
}

DescribeFullProcessListResponse Alibabacloud_Dts20200101::Client::describeFullProcessListWithOptions(shared_ptr<DescribeFullProcessListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFullProcessList"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFullProcessListResponse(callApi(params, req, runtime));
}

DescribeFullProcessListResponse Alibabacloud_Dts20200101::Client::describeFullProcessList(shared_ptr<DescribeFullProcessListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFullProcessListWithOptions(request, runtime);
}

DescribeGadInstancesResponse Alibabacloud_Dts20200101::Client::describeGadInstancesWithOptions(shared_ptr<DescribeGadInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterDbInstanceId)) {
    query->insert(pair<string, string>("MasterDbInstanceId", *request->masterDbInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slaveDbInstanceId)) {
    query->insert(pair<string, string>("SlaveDbInstanceId", *request->slaveDbInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeGadInstances"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeGadInstancesResponse(callApi(params, req, runtime));
}

DescribeGadInstancesResponse Alibabacloud_Dts20200101::Client::describeGadInstances(shared_ptr<DescribeGadInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeGadInstancesWithOptions(request, runtime);
}

DescribeInitializationStatusResponse Alibabacloud_Dts20200101::Client::describeInitializationStatusWithOptions(shared_ptr<DescribeInitializationStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInitializationStatus"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInitializationStatusResponse(callApi(params, req, runtime));
}

DescribeInitializationStatusResponse Alibabacloud_Dts20200101::Client::describeInitializationStatus(shared_ptr<DescribeInitializationStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInitializationStatusWithOptions(request, runtime);
}

DescribeJobMonitorRuleResponse Alibabacloud_Dts20200101::Client::describeJobMonitorRuleWithOptions(shared_ptr<DescribeJobMonitorRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeJobMonitorRule"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeJobMonitorRuleResponse(callApi(params, req, runtime));
}

DescribeJobMonitorRuleResponse Alibabacloud_Dts20200101::Client::describeJobMonitorRule(shared_ptr<DescribeJobMonitorRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeJobMonitorRuleWithOptions(request, runtime);
}

DescribeMetricListResponse Alibabacloud_Dts20200101::Client::describeMetricListWithOptions(shared_ptr<DescribeMetricListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    body->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    body->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    body->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->env)) {
    body->insert(pair<string, string>("Env", *request->env));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricName)) {
    body->insert(pair<string, string>("MetricName", *request->metricName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    body->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerID)) {
    body->insert(pair<string, string>("OwnerID", *request->ownerID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->param)) {
    body->insert(pair<string, string>("Param", *request->param));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->period)) {
    body->insert(pair<string, long>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    body->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMetricList"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMetricListResponse(callApi(params, req, runtime));
}

DescribeMetricListResponse Alibabacloud_Dts20200101::Client::describeMetricList(shared_ptr<DescribeMetricListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMetricListWithOptions(request, runtime);
}

DescribeMigrationJobAlertResponse Alibabacloud_Dts20200101::Client::describeMigrationJobAlertWithOptions(shared_ptr<DescribeMigrationJobAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobId)) {
    query->insert(pair<string, string>("MigrationJobId", *request->migrationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMigrationJobAlert"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMigrationJobAlertResponse(callApi(params, req, runtime));
}

DescribeMigrationJobAlertResponse Alibabacloud_Dts20200101::Client::describeMigrationJobAlert(shared_ptr<DescribeMigrationJobAlertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMigrationJobAlertWithOptions(request, runtime);
}

DescribeMigrationJobDetailResponse Alibabacloud_Dts20200101::Client::describeMigrationJobDetailWithOptions(shared_ptr<DescribeMigrationJobDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobId)) {
    query->insert(pair<string, string>("MigrationJobId", *request->migrationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<DescribeMigrationJobDetailRequestMigrationMode>(request->migrationMode)) {
    query->insert(pair<string, DescribeMigrationJobDetailRequestMigrationMode>("MigrationMode", *request->migrationMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMigrationJobDetail"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMigrationJobDetailResponse(callApi(params, req, runtime));
}

DescribeMigrationJobDetailResponse Alibabacloud_Dts20200101::Client::describeMigrationJobDetail(shared_ptr<DescribeMigrationJobDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMigrationJobDetailWithOptions(request, runtime);
}

DescribeMigrationJobStatusResponse Alibabacloud_Dts20200101::Client::describeMigrationJobStatusWithOptions(shared_ptr<DescribeMigrationJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobId)) {
    query->insert(pair<string, string>("MigrationJobId", *request->migrationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMigrationJobStatus"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMigrationJobStatusResponse(callApi(params, req, runtime));
}

DescribeMigrationJobStatusResponse Alibabacloud_Dts20200101::Client::describeMigrationJobStatus(shared_ptr<DescribeMigrationJobStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMigrationJobStatusWithOptions(request, runtime);
}

DescribeMigrationJobsResponse Alibabacloud_Dts20200101::Client::describeMigrationJobsWithOptions(shared_ptr<DescribeMigrationJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobName)) {
    query->insert(pair<string, string>("MigrationJobName", *request->migrationJobName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeMigrationJobsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeMigrationJobsRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMigrationJobs"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMigrationJobsResponse(callApi(params, req, runtime));
}

DescribeMigrationJobsResponse Alibabacloud_Dts20200101::Client::describeMigrationJobs(shared_ptr<DescribeMigrationJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMigrationJobsWithOptions(request, runtime);
}

DescribePreCheckCreateGadOrderResultResponse Alibabacloud_Dts20200101::Client::describePreCheckCreateGadOrderResultWithOptions(shared_ptr<DescribePreCheckCreateGadOrderResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePreCheckCreateGadOrderResult"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePreCheckCreateGadOrderResultResponse(callApi(params, req, runtime));
}

DescribePreCheckCreateGadOrderResultResponse Alibabacloud_Dts20200101::Client::describePreCheckCreateGadOrderResult(shared_ptr<DescribePreCheckCreateGadOrderResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePreCheckCreateGadOrderResultWithOptions(request, runtime);
}

DescribePreCheckStatusResponse Alibabacloud_Dts20200101::Client::describePreCheckStatusWithOptions(shared_ptr<DescribePreCheckStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobCode)) {
    query->insert(pair<string, string>("JobCode", *request->jobCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNo)) {
    query->insert(pair<string, string>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->structPhase)) {
    query->insert(pair<string, string>("StructPhase", *request->structPhase));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->structType)) {
    query->insert(pair<string, string>("StructType", *request->structType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePreCheckStatus"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePreCheckStatusResponse(callApi(params, req, runtime));
}

DescribePreCheckStatusResponse Alibabacloud_Dts20200101::Client::describePreCheckStatus(shared_ptr<DescribePreCheckStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePreCheckStatusWithOptions(request, runtime);
}

DescribeSubscriptionInstanceAlertResponse Alibabacloud_Dts20200101::Client::describeSubscriptionInstanceAlertWithOptions(shared_ptr<DescribeSubscriptionInstanceAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceId)) {
    query->insert(pair<string, string>("SubscriptionInstanceId", *request->subscriptionInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSubscriptionInstanceAlert"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSubscriptionInstanceAlertResponse(callApi(params, req, runtime));
}

DescribeSubscriptionInstanceAlertResponse Alibabacloud_Dts20200101::Client::describeSubscriptionInstanceAlert(shared_ptr<DescribeSubscriptionInstanceAlertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSubscriptionInstanceAlertWithOptions(request, runtime);
}

DescribeSubscriptionInstanceStatusResponse Alibabacloud_Dts20200101::Client::describeSubscriptionInstanceStatusWithOptions(shared_ptr<DescribeSubscriptionInstanceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceId)) {
    query->insert(pair<string, string>("SubscriptionInstanceId", *request->subscriptionInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSubscriptionInstanceStatus"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSubscriptionInstanceStatusResponse(callApi(params, req, runtime));
}

DescribeSubscriptionInstanceStatusResponse Alibabacloud_Dts20200101::Client::describeSubscriptionInstanceStatus(shared_ptr<DescribeSubscriptionInstanceStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSubscriptionInstanceStatusWithOptions(request, runtime);
}

DescribeSubscriptionInstancesResponse Alibabacloud_Dts20200101::Client::describeSubscriptionInstancesWithOptions(shared_ptr<DescribeSubscriptionInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceName)) {
    query->insert(pair<string, string>("SubscriptionInstanceName", *request->subscriptionInstanceName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeSubscriptionInstancesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeSubscriptionInstancesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSubscriptionInstances"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSubscriptionInstancesResponse(callApi(params, req, runtime));
}

DescribeSubscriptionInstancesResponse Alibabacloud_Dts20200101::Client::describeSubscriptionInstances(shared_ptr<DescribeSubscriptionInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSubscriptionInstancesWithOptions(request, runtime);
}

DescribeSubscriptionMetaResponse Alibabacloud_Dts20200101::Client::describeSubscriptionMetaWithOptions(shared_ptr<DescribeSubscriptionMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeSubscriptionMetaShrinkRequest> request = make_shared<DescribeSubscriptionMetaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->subMigrationJobIds)) {
    request->subMigrationJobIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->subMigrationJobIds, make_shared<string>("SubMigrationJobIds"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->topics)) {
    request->topicsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->topics, make_shared<string>("Topics"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sid)) {
    query->insert(pair<string, string>("Sid", *request->sid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subMigrationJobIdsShrink)) {
    query->insert(pair<string, string>("SubMigrationJobIds", *request->subMigrationJobIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicsShrink)) {
    query->insert(pair<string, string>("Topics", *request->topicsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSubscriptionMeta"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSubscriptionMetaResponse(callApi(params, req, runtime));
}

DescribeSubscriptionMetaResponse Alibabacloud_Dts20200101::Client::describeSubscriptionMeta(shared_ptr<DescribeSubscriptionMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSubscriptionMetaWithOptions(request, runtime);
}

DescribeSyncStatusResponse Alibabacloud_Dts20200101::Client::describeSyncStatusWithOptions(shared_ptr<DescribeSyncStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    query->insert(pair<string, string>("Direction", *request->direction));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSyncStatus"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSyncStatusResponse(callApi(params, req, runtime));
}

DescribeSyncStatusResponse Alibabacloud_Dts20200101::Client::describeSyncStatus(shared_ptr<DescribeSyncStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSyncStatusWithOptions(request, runtime);
}

DescribeSynchronizationJobAlertResponse Alibabacloud_Dts20200101::Client::describeSynchronizationJobAlertWithOptions(shared_ptr<DescribeSynchronizationJobAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSynchronizationJobAlert"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSynchronizationJobAlertResponse(callApi(params, req, runtime));
}

DescribeSynchronizationJobAlertResponse Alibabacloud_Dts20200101::Client::describeSynchronizationJobAlert(shared_ptr<DescribeSynchronizationJobAlertRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSynchronizationJobAlertWithOptions(request, runtime);
}

DescribeSynchronizationJobReplicatorCompareResponse Alibabacloud_Dts20200101::Client::describeSynchronizationJobReplicatorCompareWithOptions(shared_ptr<DescribeSynchronizationJobReplicatorCompareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSynchronizationJobReplicatorCompare"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSynchronizationJobReplicatorCompareResponse(callApi(params, req, runtime));
}

DescribeSynchronizationJobReplicatorCompareResponse Alibabacloud_Dts20200101::Client::describeSynchronizationJobReplicatorCompare(shared_ptr<DescribeSynchronizationJobReplicatorCompareRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSynchronizationJobReplicatorCompareWithOptions(request, runtime);
}

DescribeSynchronizationJobStatusResponse Alibabacloud_Dts20200101::Client::describeSynchronizationJobStatusWithOptions(shared_ptr<DescribeSynchronizationJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSynchronizationJobStatus"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSynchronizationJobStatusResponse(callApi(params, req, runtime));
}

DescribeSynchronizationJobStatusResponse Alibabacloud_Dts20200101::Client::describeSynchronizationJobStatus(shared_ptr<DescribeSynchronizationJobStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSynchronizationJobStatusWithOptions(request, runtime);
}

DescribeSynchronizationJobStatusListResponse Alibabacloud_Dts20200101::Client::describeSynchronizationJobStatusListWithOptions(shared_ptr<DescribeSynchronizationJobStatusListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobIdListJsonStr)) {
    query->insert(pair<string, string>("SynchronizationJobIdListJsonStr", *request->synchronizationJobIdListJsonStr));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSynchronizationJobStatusList"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSynchronizationJobStatusListResponse(callApi(params, req, runtime));
}

DescribeSynchronizationJobStatusListResponse Alibabacloud_Dts20200101::Client::describeSynchronizationJobStatusList(shared_ptr<DescribeSynchronizationJobStatusListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSynchronizationJobStatusListWithOptions(request, runtime);
}

DescribeSynchronizationJobsResponse Alibabacloud_Dts20200101::Client::describeSynchronizationJobsWithOptions(shared_ptr<DescribeSynchronizationJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobName)) {
    query->insert(pair<string, string>("SynchronizationJobName", *request->synchronizationJobName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeSynchronizationJobsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeSynchronizationJobsRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSynchronizationJobs"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSynchronizationJobsResponse(callApi(params, req, runtime));
}

DescribeSynchronizationJobsResponse Alibabacloud_Dts20200101::Client::describeSynchronizationJobs(shared_ptr<DescribeSynchronizationJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSynchronizationJobsWithOptions(request, runtime);
}

DescribeSynchronizationObjectModifyStatusResponse Alibabacloud_Dts20200101::Client::describeSynchronizationObjectModifyStatusWithOptions(shared_ptr<DescribeSynchronizationObjectModifyStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSynchronizationObjectModifyStatus"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSynchronizationObjectModifyStatusResponse(callApi(params, req, runtime));
}

DescribeSynchronizationObjectModifyStatusResponse Alibabacloud_Dts20200101::Client::describeSynchronizationObjectModifyStatus(shared_ptr<DescribeSynchronizationObjectModifyStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSynchronizationObjectModifyStatusWithOptions(request, runtime);
}

DescribeTagKeysResponse Alibabacloud_Dts20200101::Client::describeTagKeysWithOptions(shared_ptr<DescribeTagKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTagKeys"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTagKeysResponse(callApi(params, req, runtime));
}

DescribeTagKeysResponse Alibabacloud_Dts20200101::Client::describeTagKeys(shared_ptr<DescribeTagKeysRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTagKeysWithOptions(request, runtime);
}

DescribeTagValuesResponse Alibabacloud_Dts20200101::Client::describeTagValuesWithOptions(shared_ptr<DescribeTagValuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->key)) {
    query->insert(pair<string, string>("Key", *request->key));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeTagValues"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeTagValuesResponse(callApi(params, req, runtime));
}

DescribeTagValuesResponse Alibabacloud_Dts20200101::Client::describeTagValues(shared_ptr<DescribeTagValuesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeTagValuesWithOptions(request, runtime);
}

DetachGadInstanceDbMemberResponse Alibabacloud_Dts20200101::Client::detachGadInstanceDbMemberWithOptions(shared_ptr<DetachGadInstanceDbMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slaveDbInstanceId)) {
    query->insert(pair<string, string>("SlaveDbInstanceId", *request->slaveDbInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetachGadInstanceDbMember"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetachGadInstanceDbMemberResponse(callApi(params, req, runtime));
}

DetachGadInstanceDbMemberResponse Alibabacloud_Dts20200101::Client::detachGadInstanceDbMember(shared_ptr<DetachGadInstanceDbMemberRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detachGadInstanceDbMemberWithOptions(request, runtime);
}

InitDtsRdsInstanceResponse Alibabacloud_Dts20200101::Client::initDtsRdsInstanceWithOptions(shared_ptr<InitDtsRdsInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointCenId)) {
    query->insert(pair<string, string>("EndpointCenId", *request->endpointCenId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointInstanceId)) {
    query->insert(pair<string, string>("EndpointInstanceId", *request->endpointInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointInstanceType)) {
    query->insert(pair<string, string>("EndpointInstanceType", *request->endpointInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointRegion)) {
    query->insert(pair<string, string>("EndpointRegion", *request->endpointRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitDtsRdsInstance"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitDtsRdsInstanceResponse(callApi(params, req, runtime));
}

InitDtsRdsInstanceResponse Alibabacloud_Dts20200101::Client::initDtsRdsInstance(shared_ptr<InitDtsRdsInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initDtsRdsInstanceWithOptions(request, runtime);
}

ListDedicatedClusterResponse Alibabacloud_Dts20200101::Client::listDedicatedClusterWithOptions(shared_ptr<ListDedicatedClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->orderColumn)) {
    query->insert(pair<string, string>("OrderColumn", *request->orderColumn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderDirection)) {
    query->insert(pair<string, string>("OrderDirection", *request->orderDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDedicatedCluster"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDedicatedClusterResponse(callApi(params, req, runtime));
}

ListDedicatedClusterResponse Alibabacloud_Dts20200101::Client::listDedicatedCluster(shared_ptr<ListDedicatedClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDedicatedClusterWithOptions(request, runtime);
}

ListTagResourcesResponse Alibabacloud_Dts20200101::Client::listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ListTagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<ListTagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTagResources"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTagResourcesResponse(callApi(params, req, runtime));
}

ListTagResourcesResponse Alibabacloud_Dts20200101::Client::listTagResources(shared_ptr<ListTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTagResourcesWithOptions(request, runtime);
}

ModifyConsumerChannelResponse Alibabacloud_Dts20200101::Client::modifyConsumerChannelWithOptions(shared_ptr<ModifyConsumerChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerGroupId)) {
    query->insert(pair<string, string>("ConsumerGroupId", *request->consumerGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerGroupName)) {
    query->insert(pair<string, string>("ConsumerGroupName", *request->consumerGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerGroupPassword)) {
    query->insert(pair<string, string>("ConsumerGroupPassword", *request->consumerGroupPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerGroupUserName)) {
    query->insert(pair<string, string>("ConsumerGroupUserName", *request->consumerGroupUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyConsumerChannel"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyConsumerChannelResponse(callApi(params, req, runtime));
}

ModifyConsumerChannelResponse Alibabacloud_Dts20200101::Client::modifyConsumerChannel(shared_ptr<ModifyConsumerChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyConsumerChannelWithOptions(request, runtime);
}

ModifyConsumerGroupPasswordResponse Alibabacloud_Dts20200101::Client::modifyConsumerGroupPasswordWithOptions(shared_ptr<ModifyConsumerGroupPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerGroupID)) {
    query->insert(pair<string, string>("ConsumerGroupID", *request->consumerGroupID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerGroupName)) {
    query->insert(pair<string, string>("ConsumerGroupName", *request->consumerGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerGroupPassword)) {
    query->insert(pair<string, string>("ConsumerGroupPassword", *request->consumerGroupPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerGroupUserName)) {
    query->insert(pair<string, string>("ConsumerGroupUserName", *request->consumerGroupUserName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceId)) {
    query->insert(pair<string, string>("SubscriptionInstanceId", *request->subscriptionInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumerGroupNewPassword)) {
    query->insert(pair<string, string>("consumerGroupNewPassword", *request->consumerGroupNewPassword));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyConsumerGroupPassword"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyConsumerGroupPasswordResponse(callApi(params, req, runtime));
}

ModifyConsumerGroupPasswordResponse Alibabacloud_Dts20200101::Client::modifyConsumerGroupPassword(shared_ptr<ModifyConsumerGroupPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyConsumerGroupPasswordWithOptions(request, runtime);
}

ModifyConsumptionTimestampResponse Alibabacloud_Dts20200101::Client::modifyConsumptionTimestampWithOptions(shared_ptr<ModifyConsumptionTimestampRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->consumptionTimestamp)) {
    query->insert(pair<string, string>("ConsumptionTimestamp", *request->consumptionTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceId)) {
    query->insert(pair<string, string>("SubscriptionInstanceId", *request->subscriptionInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyConsumptionTimestamp"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyConsumptionTimestampResponse(callApi(params, req, runtime));
}

ModifyConsumptionTimestampResponse Alibabacloud_Dts20200101::Client::modifyConsumptionTimestamp(shared_ptr<ModifyConsumptionTimestampRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyConsumptionTimestampWithOptions(request, runtime);
}

ModifyDedicatedClusterResponse Alibabacloud_Dts20200101::Client::modifyDedicatedClusterWithOptions(shared_ptr<ModifyDedicatedClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedClusterId)) {
    query->insert(pair<string, string>("DedicatedClusterId", *request->dedicatedClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedClusterName)) {
    query->insert(pair<string, string>("DedicatedClusterName", *request->dedicatedClusterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->oversoldRatio)) {
    query->insert(pair<string, long>("OversoldRatio", *request->oversoldRatio));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDedicatedCluster"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDedicatedClusterResponse(callApi(params, req, runtime));
}

ModifyDedicatedClusterResponse Alibabacloud_Dts20200101::Client::modifyDedicatedCluster(shared_ptr<ModifyDedicatedClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDedicatedClusterWithOptions(request, runtime);
}

ModifyDtsJobResponse Alibabacloud_Dts20200101::Client::modifyDtsJobWithOptions(shared_ptr<ModifyDtsJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyDtsJobShrinkRequest> request = make_shared<ModifyDtsJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, boost::any>>(tmpReq->dbList)) {
    request->dbListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->dbList, make_shared<string>("DbList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dataInitialization)) {
    query->insert(pair<string, bool>("DataInitialization", *request->dataInitialization));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dataSynchronization)) {
    query->insert(pair<string, bool>("DataSynchronization", *request->dataSynchronization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileOssUrl)) {
    query->insert(pair<string, string>("FileOssUrl", *request->fileOssUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->structureInitialization)) {
    query->insert(pair<string, bool>("StructureInitialization", *request->structureInitialization));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbListShrink)) {
    body->insert(pair<string, string>("DbList", *request->dbListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->etlOperatorColumnReference)) {
    body->insert(pair<string, string>("EtlOperatorColumnReference", *request->etlOperatorColumnReference));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterTableName)) {
    body->insert(pair<string, string>("FilterTableName", *request->filterTableName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyTypeEnum)) {
    body->insert(pair<string, string>("ModifyTypeEnum", *request->modifyTypeEnum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reserved)) {
    body->insert(pair<string, string>("Reserved", *request->reserved));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDtsJob"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDtsJobResponse(callApi(params, req, runtime));
}

ModifyDtsJobResponse Alibabacloud_Dts20200101::Client::modifyDtsJob(shared_ptr<ModifyDtsJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDtsJobWithOptions(request, runtime);
}

ModifyDtsJobResponse Alibabacloud_Dts20200101::Client::modifyDtsJobAdvance(shared_ptr<ModifyDtsJobAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
    {"product", boost::any(string("Dts"))},
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
  shared_ptr<ModifyDtsJobRequest> modifyDtsJobReq = make_shared<ModifyDtsJobRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(request, modifyDtsJobReq);
  if (!Darabonba_Util::Client::isUnset<Darabonba::Stream>(request->fileOssUrlObject)) {
    authResponse = make_shared<Alibabacloud_OpenPlatform20191219::AuthorizeFileUploadResponse>(authClient->authorizeFileUploadWithOptions(authRequest, runtime));
    ossConfig->accessKeyId = authResponse->body->accessKeyId;
    ossConfig->endpoint = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEndpoint(authResponse->body->endpoint, authResponse->body->useAccelerate, _endpointType));
    ossClient = make_shared<Alibabacloud_OSS::Client>(ossConfig);
    fileObj = make_shared<Darabonba_FileForm::FileField>(map<string, boost::any>({
      {"filename", !authResponse->body->objectKey ? boost::any() : boost::any(*authResponse->body->objectKey)},
      {"content", !request->fileOssUrlObject ? boost::any() : boost::any(*request->fileOssUrlObject)},
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
    modifyDtsJobReq->fileOssUrl = make_shared<string>(string("http://") + string(*authResponse->body->bucket) + string(".") + string(*authResponse->body->endpoint) + string("/") + string(*authResponse->body->objectKey));
  }
  shared_ptr<ModifyDtsJobResponse> modifyDtsJobResp = make_shared<ModifyDtsJobResponse>(modifyDtsJobWithOptions(modifyDtsJobReq, runtime));
  return *modifyDtsJobResp;
}

ModifyDtsJobConfigResponse Alibabacloud_Dts20200101::Client::modifyDtsJobConfigWithOptions(shared_ptr<ModifyDtsJobConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parameters)) {
    query->insert(pair<string, string>("Parameters", *request->parameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDtsJobConfig"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDtsJobConfigResponse(callApi(params, req, runtime));
}

ModifyDtsJobConfigResponse Alibabacloud_Dts20200101::Client::modifyDtsJobConfig(shared_ptr<ModifyDtsJobConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDtsJobConfigWithOptions(request, runtime);
}

ModifyDtsJobDedicatedClusterResponse Alibabacloud_Dts20200101::Client::modifyDtsJobDedicatedClusterWithOptions(shared_ptr<ModifyDtsJobDedicatedClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedClusterId)) {
    query->insert(pair<string, string>("DedicatedClusterId", *request->dedicatedClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobIds)) {
    query->insert(pair<string, string>("DtsJobIds", *request->dtsJobIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDtsJobDedicatedCluster"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDtsJobDedicatedClusterResponse(callApi(params, req, runtime));
}

ModifyDtsJobDedicatedClusterResponse Alibabacloud_Dts20200101::Client::modifyDtsJobDedicatedCluster(shared_ptr<ModifyDtsJobDedicatedClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDtsJobDedicatedClusterWithOptions(request, runtime);
}

ModifyDtsJobDuLimitResponse Alibabacloud_Dts20200101::Client::modifyDtsJobDuLimitWithOptions(shared_ptr<ModifyDtsJobDuLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duLimit)) {
    query->insert(pair<string, long>("DuLimit", *request->duLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDtsJobDuLimit"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDtsJobDuLimitResponse(callApi(params, req, runtime));
}

ModifyDtsJobDuLimitResponse Alibabacloud_Dts20200101::Client::modifyDtsJobDuLimit(shared_ptr<ModifyDtsJobDuLimitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDtsJobDuLimitWithOptions(request, runtime);
}

ModifyDtsJobEndpointResponse Alibabacloud_Dts20200101::Client::modifyDtsJobEndpointWithOptions(shared_ptr<ModifyDtsJobEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliyunUid)) {
    query->insert(pair<string, string>("AliyunUid", *request->aliyunUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->database)) {
    query->insert(pair<string, string>("Database", *request->database));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dryRun)) {
    query->insert(pair<string, bool>("DryRun", *request->dryRun));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpoint)) {
    query->insert(pair<string, string>("Endpoint", *request->endpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointInstanceId)) {
    query->insert(pair<string, string>("EndpointInstanceId", *request->endpointInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointInstanceType)) {
    query->insert(pair<string, string>("EndpointInstanceType", *request->endpointInstanceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointIp)) {
    query->insert(pair<string, string>("EndpointIp", *request->endpointIp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointPort)) {
    query->insert(pair<string, string>("EndpointPort", *request->endpointPort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointRegionId)) {
    query->insert(pair<string, string>("EndpointRegionId", *request->endpointRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->modifyAccount)) {
    query->insert(pair<string, bool>("ModifyAccount", *request->modifyAccount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roleName)) {
    query->insert(pair<string, string>("RoleName", *request->roleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shardPassword)) {
    query->insert(pair<string, string>("ShardPassword", *request->shardPassword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shardUsername)) {
    query->insert(pair<string, string>("ShardUsername", *request->shardUsername));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->username)) {
    query->insert(pair<string, string>("Username", *request->username));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDtsJobEndpoint"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDtsJobEndpointResponse(callApi(params, req, runtime));
}

ModifyDtsJobEndpointResponse Alibabacloud_Dts20200101::Client::modifyDtsJobEndpoint(shared_ptr<ModifyDtsJobEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDtsJobEndpointWithOptions(request, runtime);
}

ModifyDtsJobNameResponse Alibabacloud_Dts20200101::Client::modifyDtsJobNameWithOptions(shared_ptr<ModifyDtsJobNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobName)) {
    query->insert(pair<string, string>("DtsJobName", *request->dtsJobName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDtsJobName"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDtsJobNameResponse(callApi(params, req, runtime));
}

ModifyDtsJobNameResponse Alibabacloud_Dts20200101::Client::modifyDtsJobName(shared_ptr<ModifyDtsJobNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDtsJobNameWithOptions(request, runtime);
}

ModifyDtsJobPasswordResponse Alibabacloud_Dts20200101::Client::modifyDtsJobPasswordWithOptions(shared_ptr<ModifyDtsJobPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpoint)) {
    query->insert(pair<string, string>("Endpoint", *request->endpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->password)) {
    query->insert(pair<string, string>("Password", *request->password));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userName)) {
    query->insert(pair<string, string>("UserName", *request->userName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDtsJobPassword"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDtsJobPasswordResponse(callApi(params, req, runtime));
}

ModifyDtsJobPasswordResponse Alibabacloud_Dts20200101::Client::modifyDtsJobPassword(shared_ptr<ModifyDtsJobPasswordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDtsJobPasswordWithOptions(request, runtime);
}

ModifyDynamicConfigResponse Alibabacloud_Dts20200101::Client::modifyDynamicConfigWithOptions(shared_ptr<ModifyDynamicConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configList)) {
    query->insert(pair<string, string>("ConfigList", *request->configList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableLimit)) {
    query->insert(pair<string, bool>("EnableLimit", *request->enableLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobCode)) {
    query->insert(pair<string, string>("JobCode", *request->jobCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyDynamicConfig"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyDynamicConfigResponse(callApi(params, req, runtime));
}

ModifyDynamicConfigResponse Alibabacloud_Dts20200101::Client::modifyDynamicConfig(shared_ptr<ModifyDynamicConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyDynamicConfigWithOptions(request, runtime);
}

ModifyGadInstanceNameResponse Alibabacloud_Dts20200101::Client::modifyGadInstanceNameWithOptions(shared_ptr<ModifyGadInstanceNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyGadInstanceName"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyGadInstanceNameResponse(callApi(params, req, runtime));
}

ModifyGadInstanceNameResponse Alibabacloud_Dts20200101::Client::modifyGadInstanceName(shared_ptr<ModifyGadInstanceNameRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyGadInstanceNameWithOptions(request, runtime);
}

ModifySubscriptionResponse Alibabacloud_Dts20200101::Client::modifySubscriptionWithOptions(shared_ptr<ModifySubscriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dbList)) {
    query->insert(pair<string, string>("DbList", *request->dbList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modifyType)) {
    query->insert(pair<string, string>("ModifyType", *request->modifyType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reserved)) {
    query->insert(pair<string, string>("Reserved", *request->reserved));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->subscriptionDataTypeDDL)) {
    query->insert(pair<string, bool>("SubscriptionDataTypeDDL", *request->subscriptionDataTypeDDL));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->subscriptionDataTypeDML)) {
    query->insert(pair<string, bool>("SubscriptionDataTypeDML", *request->subscriptionDataTypeDML));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySubscription"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySubscriptionResponse(callApi(params, req, runtime));
}

ModifySubscriptionResponse Alibabacloud_Dts20200101::Client::modifySubscription(shared_ptr<ModifySubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySubscriptionWithOptions(request, runtime);
}

ModifySubscriptionObjectResponse Alibabacloud_Dts20200101::Client::modifySubscriptionObjectWithOptions(shared_ptr<ModifySubscriptionObjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceId)) {
    query->insert(pair<string, string>("SubscriptionInstanceId", *request->subscriptionInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionObject)) {
    query->insert(pair<string, string>("SubscriptionObject", *request->subscriptionObject));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySubscriptionObject"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySubscriptionObjectResponse(callApi(params, req, runtime));
}

ModifySubscriptionObjectResponse Alibabacloud_Dts20200101::Client::modifySubscriptionObject(shared_ptr<ModifySubscriptionObjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySubscriptionObjectWithOptions(request, runtime);
}

ModifySynchronizationObjectResponse Alibabacloud_Dts20200101::Client::modifySynchronizationObjectWithOptions(shared_ptr<ModifySynchronizationObjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationObjects)) {
    body->insert(pair<string, string>("SynchronizationObjects", *request->synchronizationObjects));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifySynchronizationObject"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifySynchronizationObjectResponse(callApi(params, req, runtime));
}

ModifySynchronizationObjectResponse Alibabacloud_Dts20200101::Client::modifySynchronizationObject(shared_ptr<ModifySynchronizationObjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifySynchronizationObjectWithOptions(request, runtime);
}

PreCheckCreateGadOrderResponse Alibabacloud_Dts20200101::Client::preCheckCreateGadOrderWithOptions(shared_ptr<PreCheckCreateGadOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slaveDbInstanceId)) {
    query->insert(pair<string, string>("SlaveDbInstanceId", *request->slaveDbInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slaveDbInstanceRegion)) {
    query->insert(pair<string, string>("SlaveDbInstanceRegion", *request->slaveDbInstanceRegion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PreCheckCreateGadOrder"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PreCheckCreateGadOrderResponse(callApi(params, req, runtime));
}

PreCheckCreateGadOrderResponse Alibabacloud_Dts20200101::Client::preCheckCreateGadOrder(shared_ptr<PreCheckCreateGadOrderRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return preCheckCreateGadOrderWithOptions(request, runtime);
}

RenewInstanceResponse Alibabacloud_Dts20200101::Client::renewInstanceWithOptions(shared_ptr<RenewInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->buyCount)) {
    query->insert(pair<string, string>("BuyCount", *request->buyCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    query->insert(pair<string, string>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RenewInstance"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RenewInstanceResponse(callApi(params, req, runtime));
}

RenewInstanceResponse Alibabacloud_Dts20200101::Client::renewInstance(shared_ptr<RenewInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return renewInstanceWithOptions(request, runtime);
}

ResetDtsJobResponse Alibabacloud_Dts20200101::Client::resetDtsJobWithOptions(shared_ptr<ResetDtsJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetDtsJob"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetDtsJobResponse(callApi(params, req, runtime));
}

ResetDtsJobResponse Alibabacloud_Dts20200101::Client::resetDtsJob(shared_ptr<ResetDtsJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetDtsJobWithOptions(request, runtime);
}

ResetSynchronizationJobResponse Alibabacloud_Dts20200101::Client::resetSynchronizationJobWithOptions(shared_ptr<ResetSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResetSynchronizationJob"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResetSynchronizationJobResponse(callApi(params, req, runtime));
}

ResetSynchronizationJobResponse Alibabacloud_Dts20200101::Client::resetSynchronizationJob(shared_ptr<ResetSynchronizationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resetSynchronizationJobWithOptions(request, runtime);
}

ReverseTwoWayDirectionResponse Alibabacloud_Dts20200101::Client::reverseTwoWayDirectionWithOptions(shared_ptr<ReverseTwoWayDirectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreErrorSubJob)) {
    query->insert(pair<string, bool>("IgnoreErrorSubJob", *request->ignoreErrorSubJob));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReverseTwoWayDirection"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReverseTwoWayDirectionResponse(callApi(params, req, runtime));
}

ReverseTwoWayDirectionResponse Alibabacloud_Dts20200101::Client::reverseTwoWayDirection(shared_ptr<ReverseTwoWayDirectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return reverseTwoWayDirectionWithOptions(request, runtime);
}

ShieldPrecheckResponse Alibabacloud_Dts20200101::Client::shieldPrecheckWithOptions(shared_ptr<ShieldPrecheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->precheckItems)) {
    query->insert(pair<string, string>("PrecheckItems", *request->precheckItems));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ShieldPrecheck"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ShieldPrecheckResponse(callApi(params, req, runtime));
}

ShieldPrecheckResponse Alibabacloud_Dts20200101::Client::shieldPrecheck(shared_ptr<ShieldPrecheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return shieldPrecheckWithOptions(request, runtime);
}

SkipFullJobTableResponse Alibabacloud_Dts20200101::Client::skipFullJobTableWithOptions(shared_ptr<SkipFullJobTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobProgressId)) {
    query->insert(pair<string, string>("JobProgressId", *request->jobProgressId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SkipFullJobTable"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SkipFullJobTableResponse(callApi(params, req, runtime));
}

SkipFullJobTableResponse Alibabacloud_Dts20200101::Client::skipFullJobTable(shared_ptr<SkipFullJobTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return skipFullJobTableWithOptions(request, runtime);
}

SkipPreCheckResponse Alibabacloud_Dts20200101::Client::skipPreCheckWithOptions(shared_ptr<SkipPreCheckRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->skip)) {
    query->insert(pair<string, bool>("Skip", *request->skip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->skipPreCheckItems)) {
    query->insert(pair<string, string>("SkipPreCheckItems", *request->skipPreCheckItems));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->skipPreCheckNames)) {
    query->insert(pair<string, string>("SkipPreCheckNames", *request->skipPreCheckNames));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SkipPreCheck"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SkipPreCheckResponse(callApi(params, req, runtime));
}

SkipPreCheckResponse Alibabacloud_Dts20200101::Client::skipPreCheck(shared_ptr<SkipPreCheckRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return skipPreCheckWithOptions(request, runtime);
}

StartDtsJobResponse Alibabacloud_Dts20200101::Client::startDtsJobWithOptions(shared_ptr<StartDtsJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartDtsJob"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartDtsJobResponse(callApi(params, req, runtime));
}

StartDtsJobResponse Alibabacloud_Dts20200101::Client::startDtsJob(shared_ptr<StartDtsJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDtsJobWithOptions(request, runtime);
}

StartDtsJobsResponse Alibabacloud_Dts20200101::Client::startDtsJobsWithOptions(shared_ptr<StartDtsJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobIds)) {
    query->insert(pair<string, string>("DtsJobIds", *request->dtsJobIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartDtsJobs"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartDtsJobsResponse(callApi(params, req, runtime));
}

StartDtsJobsResponse Alibabacloud_Dts20200101::Client::startDtsJobs(shared_ptr<StartDtsJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startDtsJobsWithOptions(request, runtime);
}

StartMigrationJobResponse Alibabacloud_Dts20200101::Client::startMigrationJobWithOptions(shared_ptr<StartMigrationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobId)) {
    query->insert(pair<string, string>("MigrationJobId", *request->migrationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartMigrationJob"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartMigrationJobResponse(callApi(params, req, runtime));
}

StartMigrationJobResponse Alibabacloud_Dts20200101::Client::startMigrationJob(shared_ptr<StartMigrationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startMigrationJobWithOptions(request, runtime);
}

StartReverseWriterResponse Alibabacloud_Dts20200101::Client::startReverseWriterWithOptions(shared_ptr<StartReverseWriterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkPoint)) {
    query->insert(pair<string, string>("CheckPoint", *request->checkPoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartReverseWriter"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartReverseWriterResponse(callApi(params, req, runtime));
}

StartReverseWriterResponse Alibabacloud_Dts20200101::Client::startReverseWriter(shared_ptr<StartReverseWriterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startReverseWriterWithOptions(request, runtime);
}

StartSubscriptionInstanceResponse Alibabacloud_Dts20200101::Client::startSubscriptionInstanceWithOptions(shared_ptr<StartSubscriptionInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscriptionInstanceId)) {
    query->insert(pair<string, string>("SubscriptionInstanceId", *request->subscriptionInstanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartSubscriptionInstance"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartSubscriptionInstanceResponse(callApi(params, req, runtime));
}

StartSubscriptionInstanceResponse Alibabacloud_Dts20200101::Client::startSubscriptionInstance(shared_ptr<StartSubscriptionInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startSubscriptionInstanceWithOptions(request, runtime);
}

StartSynchronizationJobResponse Alibabacloud_Dts20200101::Client::startSynchronizationJobWithOptions(shared_ptr<StartSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartSynchronizationJob"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartSynchronizationJobResponse(callApi(params, req, runtime));
}

StartSynchronizationJobResponse Alibabacloud_Dts20200101::Client::startSynchronizationJob(shared_ptr<StartSynchronizationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startSynchronizationJobWithOptions(request, runtime);
}

StopDedicatedClusterResponse Alibabacloud_Dts20200101::Client::stopDedicatedClusterWithOptions(shared_ptr<StopDedicatedClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedClusterId)) {
    query->insert(pair<string, string>("DedicatedClusterId", *request->dedicatedClusterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dedicatedClusterName)) {
    query->insert(pair<string, string>("DedicatedClusterName", *request->dedicatedClusterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopDedicatedCluster"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopDedicatedClusterResponse(callApi(params, req, runtime));
}

StopDedicatedClusterResponse Alibabacloud_Dts20200101::Client::stopDedicatedCluster(shared_ptr<StopDedicatedClusterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDedicatedClusterWithOptions(request, runtime);
}

StopDtsJobResponse Alibabacloud_Dts20200101::Client::stopDtsJobWithOptions(shared_ptr<StopDtsJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopDtsJob"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopDtsJobResponse(callApi(params, req, runtime));
}

StopDtsJobResponse Alibabacloud_Dts20200101::Client::stopDtsJob(shared_ptr<StopDtsJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDtsJobWithOptions(request, runtime);
}

StopDtsJobsResponse Alibabacloud_Dts20200101::Client::stopDtsJobsWithOptions(shared_ptr<StopDtsJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobIds)) {
    query->insert(pair<string, string>("DtsJobIds", *request->dtsJobIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopDtsJobs"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopDtsJobsResponse(callApi(params, req, runtime));
}

StopDtsJobsResponse Alibabacloud_Dts20200101::Client::stopDtsJobs(shared_ptr<StopDtsJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopDtsJobsWithOptions(request, runtime);
}

StopMigrationJobResponse Alibabacloud_Dts20200101::Client::stopMigrationJobWithOptions(shared_ptr<StopMigrationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobId)) {
    query->insert(pair<string, string>("MigrationJobId", *request->migrationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopMigrationJob"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopMigrationJobResponse(callApi(params, req, runtime));
}

StopMigrationJobResponse Alibabacloud_Dts20200101::Client::stopMigrationJob(shared_ptr<StopMigrationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopMigrationJobWithOptions(request, runtime);
}

SummaryJobDetailResponse Alibabacloud_Dts20200101::Client::summaryJobDetailWithOptions(shared_ptr<SummaryJobDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobCode)) {
    query->insert(pair<string, string>("JobCode", *request->jobCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->structType)) {
    query->insert(pair<string, string>("StructType", *request->structType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SummaryJobDetail"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SummaryJobDetailResponse(callApi(params, req, runtime));
}

SummaryJobDetailResponse Alibabacloud_Dts20200101::Client::summaryJobDetail(shared_ptr<SummaryJobDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return summaryJobDetailWithOptions(request, runtime);
}

SuspendDtsJobResponse Alibabacloud_Dts20200101::Client::suspendDtsJobWithOptions(shared_ptr<SuspendDtsJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendDtsJob"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SuspendDtsJobResponse(callApi(params, req, runtime));
}

SuspendDtsJobResponse Alibabacloud_Dts20200101::Client::suspendDtsJob(shared_ptr<SuspendDtsJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendDtsJobWithOptions(request, runtime);
}

SuspendDtsJobsResponse Alibabacloud_Dts20200101::Client::suspendDtsJobsWithOptions(shared_ptr<SuspendDtsJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobIds)) {
    query->insert(pair<string, string>("DtsJobIds", *request->dtsJobIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendDtsJobs"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SuspendDtsJobsResponse(callApi(params, req, runtime));
}

SuspendDtsJobsResponse Alibabacloud_Dts20200101::Client::suspendDtsJobs(shared_ptr<SuspendDtsJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendDtsJobsWithOptions(request, runtime);
}

SuspendMigrationJobResponse Alibabacloud_Dts20200101::Client::suspendMigrationJobWithOptions(shared_ptr<SuspendMigrationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->migrationJobId)) {
    query->insert(pair<string, string>("MigrationJobId", *request->migrationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendMigrationJob"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SuspendMigrationJobResponse(callApi(params, req, runtime));
}

SuspendMigrationJobResponse Alibabacloud_Dts20200101::Client::suspendMigrationJob(shared_ptr<SuspendMigrationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendMigrationJobWithOptions(request, runtime);
}

SuspendSynchronizationJobResponse Alibabacloud_Dts20200101::Client::suspendSynchronizationJobWithOptions(shared_ptr<SuspendSynchronizationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SuspendSynchronizationJob"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SuspendSynchronizationJobResponse(callApi(params, req, runtime));
}

SuspendSynchronizationJobResponse Alibabacloud_Dts20200101::Client::suspendSynchronizationJob(shared_ptr<SuspendSynchronizationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return suspendSynchronizationJobWithOptions(request, runtime);
}

SwitchPhysicalDtsJobToCloudResponse Alibabacloud_Dts20200101::Client::switchPhysicalDtsJobToCloudWithOptions(shared_ptr<SwitchPhysicalDtsJobToCloudRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsInstanceId)) {
    query->insert(pair<string, string>("DtsInstanceId", *request->dtsInstanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchPhysicalDtsJobToCloud"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchPhysicalDtsJobToCloudResponse(callApi(params, req, runtime));
}

SwitchPhysicalDtsJobToCloudResponse Alibabacloud_Dts20200101::Client::switchPhysicalDtsJobToCloud(shared_ptr<SwitchPhysicalDtsJobToCloudRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchPhysicalDtsJobToCloudWithOptions(request, runtime);
}

SwitchSynchronizationEndpointResponse Alibabacloud_Dts20200101::Client::switchSynchronizationEndpointWithOptions(shared_ptr<SwitchSynchronizationEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountId)) {
    query->insert(pair<string, string>("AccountId", *request->accountId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerId)) {
    query->insert(pair<string, string>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationDirection)) {
    query->insert(pair<string, string>("SynchronizationDirection", *request->synchronizationDirection));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->synchronizationJobId)) {
    query->insert(pair<string, string>("SynchronizationJobId", *request->synchronizationJobId));
  }
  if (!Darabonba_Util::Client::isUnset<SwitchSynchronizationEndpointRequestEndpoint>(request->endpoint)) {
    query->insert(pair<string, SwitchSynchronizationEndpointRequestEndpoint>("Endpoint", *request->endpoint));
  }
  if (!Darabonba_Util::Client::isUnset<SwitchSynchronizationEndpointRequestSourceEndpoint>(request->sourceEndpoint)) {
    query->insert(pair<string, SwitchSynchronizationEndpointRequestSourceEndpoint>("SourceEndpoint", *request->sourceEndpoint));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchSynchronizationEndpoint"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchSynchronizationEndpointResponse(callApi(params, req, runtime));
}

SwitchSynchronizationEndpointResponse Alibabacloud_Dts20200101::Client::switchSynchronizationEndpoint(shared_ptr<SwitchSynchronizationEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchSynchronizationEndpointWithOptions(request, runtime);
}

TagResourcesResponse Alibabacloud_Dts20200101::Client::tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResources"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagResourcesResponse(callApi(params, req, runtime));
}

TagResourcesResponse Alibabacloud_Dts20200101::Client::tagResources(shared_ptr<TagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagResourcesWithOptions(request, runtime);
}

TransferInstanceClassResponse Alibabacloud_Dts20200101::Client::transferInstanceClassWithOptions(shared_ptr<TransferInstanceClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceClass)) {
    query->insert(pair<string, string>("InstanceClass", *request->instanceClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TransferInstanceClass"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TransferInstanceClassResponse(callApi(params, req, runtime));
}

TransferInstanceClassResponse Alibabacloud_Dts20200101::Client::transferInstanceClass(shared_ptr<TransferInstanceClassRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transferInstanceClassWithOptions(request, runtime);
}

TransferPayTypeResponse Alibabacloud_Dts20200101::Client::transferPayTypeWithOptions(shared_ptr<TransferPayTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoPay)) {
    query->insert(pair<string, bool>("AutoPay", *request->autoPay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->buyCount)) {
    query->insert(pair<string, string>("BuyCount", *request->buyCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dtsJobId)) {
    query->insert(pair<string, string>("DtsJobId", *request->dtsJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceClass)) {
    query->insert(pair<string, string>("InstanceClass", *request->instanceClass));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxDu)) {
    query->insert(pair<string, long>("MaxDu", *request->maxDu));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->minDu)) {
    query->insert(pair<string, long>("MinDu", *request->minDu));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->period)) {
    query->insert(pair<string, string>("Period", *request->period));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TransferPayType"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TransferPayTypeResponse(callApi(params, req, runtime));
}

TransferPayTypeResponse Alibabacloud_Dts20200101::Client::transferPayType(shared_ptr<TransferPayTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return transferPayTypeWithOptions(request, runtime);
}

UntagResourcesResponse Alibabacloud_Dts20200101::Client::untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKey)) {
    query->insert(pair<string, vector<string>>("TagKey", *request->tagKey));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResources"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UntagResourcesResponse(callApi(params, req, runtime));
}

UntagResourcesResponse Alibabacloud_Dts20200101::Client::untagResources(shared_ptr<UntagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return untagResourcesWithOptions(request, runtime);
}

UpgradeTwoWayResponse Alibabacloud_Dts20200101::Client::upgradeTwoWayWithOptions(shared_ptr<UpgradeTwoWayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceClass)) {
    query->insert(pair<string, string>("InstanceClass", *request->instanceClass));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpgradeTwoWay"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpgradeTwoWayResponse(callApi(params, req, runtime));
}

UpgradeTwoWayResponse Alibabacloud_Dts20200101::Client::upgradeTwoWay(shared_ptr<UpgradeTwoWayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return upgradeTwoWayWithOptions(request, runtime);
}

WhiteIpListResponse Alibabacloud_Dts20200101::Client::whiteIpListWithOptions(shared_ptr<WhiteIpListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->destAliyunUid)) {
    query->insert(pair<string, string>("DestAliyunUid", *request->destAliyunUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destPrimaryVswId)) {
    query->insert(pair<string, string>("DestPrimaryVswId", *request->destPrimaryVswId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destRoleName)) {
    query->insert(pair<string, string>("DestRoleName", *request->destRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destSecondaryVswId)) {
    query->insert(pair<string, string>("DestSecondaryVswId", *request->destSecondaryVswId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destVpcId)) {
    query->insert(pair<string, string>("DestVpcId", *request->destVpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->destinationRegion)) {
    query->insert(pair<string, string>("DestinationRegion", *request->destinationRegion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceGroupId)) {
    query->insert(pair<string, string>("ResourceGroupId", *request->resourceGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcAliyunUid)) {
    query->insert(pair<string, string>("SrcAliyunUid", *request->srcAliyunUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcPrimaryVswId)) {
    query->insert(pair<string, string>("SrcPrimaryVswId", *request->srcPrimaryVswId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcRoleName)) {
    query->insert(pair<string, string>("SrcRoleName", *request->srcRoleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcSecondaryVswId)) {
    query->insert(pair<string, string>("SrcSecondaryVswId", *request->srcSecondaryVswId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcVpcId)) {
    query->insert(pair<string, string>("SrcVpcId", *request->srcVpcId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->zeroEtlJob)) {
    query->insert(pair<string, bool>("ZeroEtlJob", *request->zeroEtlJob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("WhiteIpList"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return WhiteIpListResponse(callApi(params, req, runtime));
}

WhiteIpListResponse Alibabacloud_Dts20200101::Client::whiteIpList(shared_ptr<WhiteIpListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return whiteIpListWithOptions(request, runtime);
}

