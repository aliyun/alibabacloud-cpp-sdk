#include <darabonba/Core.hpp>
#include <alibabacloud/Dts20200101.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/policy/Retry.hpp>
#include <darabonba/Exception.hpp>
#include <darabonba/Convert.hpp>
#include <darabonba/http/Form.hpp>
#include <darabonba/Stream.hpp>
#include <darabonba/XML.hpp>
#include <alibabacloud/credential/Credential.hpp>
#include <darabonba/http/FileField.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace Darabonba::Http;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Credential::Models;
using namespace AlibabaCloud::OpenApi::Exceptions;
using namespace AlibabaCloud::Dts20200101::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Dts20200101
{

AlibabaCloud::Dts20200101::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-qingdao" , "dts.aliyuncs.com"},
    {"cn-beijing" , "dts.aliyuncs.com"},
    {"cn-zhangjiakou" , "dts.aliyuncs.com"},
    {"cn-huhehaote" , "dts.aliyuncs.com"},
    {"cn-hangzhou" , "dts.aliyuncs.com"},
    {"cn-shanghai" , "dts.aliyuncs.com"},
    {"cn-shenzhen" , "dts.aliyuncs.com"},
    {"cn-hongkong" , "dts.aliyuncs.com"},
    {"ap-southeast-1" , "dts.aliyuncs.com"},
    {"ap-southeast-2" , "dts.aliyuncs.com"},
    {"ap-southeast-3" , "dts.aliyuncs.com"},
    {"ap-southeast-5" , "dts.aliyuncs.com"},
    {"eu-west-1" , "dts.aliyuncs.com"},
    {"us-west-1" , "dts.aliyuncs.com"},
    {"us-east-1" , "dts.aliyuncs.com"},
    {"eu-central-1" , "dts.aliyuncs.com"},
    {"me-east-1" , "dts.aliyuncs.com"},
    {"ap-south-1" , "dts.aliyuncs.com"},
    {"cn-hangzhou-finance" , "dts.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "dts.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "dts.aliyuncs.com"},
    {"cn-north-2-gov-1" , "dts.aliyuncs.com"},
    {"ap-northeast-2-pop" , "dts.aliyuncs.com"},
    {"cn-beijing-finance-1" , "dts.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "dts.aliyuncs.com"},
    {"cn-beijing-gov-1" , "dts.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "dts.aliyuncs.com"},
    {"cn-chengdu" , "dts.aliyuncs.com"},
    {"cn-edge-1" , "dts.aliyuncs.com"},
    {"cn-fujian" , "dts.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "dts.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "dts.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "dts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "dts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "dts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "dts.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "dts.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "dts.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "dts.aliyuncs.com"},
    {"cn-qingdao-nebula" , "dts.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "dts.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "dts.aliyuncs.com"},
    {"cn-shanghai-inner" , "dts.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "dts.aliyuncs.com"},
    {"cn-shenzhen-inner" , "dts.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "dts.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "dts.aliyuncs.com"},
    {"cn-wuhan" , "dts.aliyuncs.com"},
    {"cn-wulanchabu" , "dts.aliyuncs.com"},
    {"cn-yushanfang" , "dts.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "dts.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "dts.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "dts.aliyuncs.com"},
    {"eu-west-1-oxs" , "dts.aliyuncs.com"},
    {"rus-west-1-pop" , "dts.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("dts", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


Darabonba::Json Client::_postOSSObject(const string &bucketName, const Darabonba::Json &form, const Darabonba::RuntimeOptions &runtime) {
  Darabonba::RuntimeOptions runtime_(json({
    {"key", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.key(), _key))},
    {"cert", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.cert(), _cert))},
    {"ca", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.ca(), _ca))},
    {"readTimeout", Darabonba::Convert::int64Val(Darabonba::defaultVal(runtime.readTimeout(), _readTimeout))},
    {"connectTimeout", Darabonba::Convert::int64Val(Darabonba::defaultVal(runtime.connectTimeout(), _connectTimeout))},
    {"httpProxy", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.httpProxy(), _httpProxy))},
    {"httpsProxy", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.httpsProxy(), _httpsProxy))},
    {"noProxy", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.noProxy(), _noProxy))},
    {"socks5Proxy", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.socks5Proxy(), _socks5Proxy))},
    {"socks5NetWork", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.socks5NetWork(), _socks5NetWork))},
    {"maxIdleConns", Darabonba::Convert::int64Val(Darabonba::defaultVal(runtime.maxIdleConns(), _maxIdleConns))},
    {"retryOptions", _retryOptions},
    {"ignoreSSL", Darabonba::Convert::boolVal(Darabonba::defaultVal(runtime.ignoreSSL(), false))},
    {"tlsMinVersion", _tlsMinVersion}
    }));

  shared_ptr<Darabonba::Http::Request> _lastRequest = nullptr;
  shared_ptr<Darabonba::Http::MCurlResponse> _lastResponse = nullptr;
  Darabonba::Exception _lastException;
  int _retriesAttempted = 0;
  Darabonba::Policy::RetryPolicyContext _context = json({
    {"retriesAttempted" , _retriesAttempted}
  });
  while (Darabonba::allowRetry(runtime_.retryOptions(), _context)) {
    if (_retriesAttempted > 0) {
      int _backoffTime = Darabonba::getBackoffTime(runtime_.retryOptions(), _context);
      if (_backoffTime > 0) {
        Darabonba::sleep(_backoffTime);
      }
    }
    _retriesAttempted++;
    try {
      Darabonba::Http::Request request_ = Darabonba::Http::Request();
      string boundary = Darabonba::Http::Form::getBoundary();
      request_.setProtocol("HTTPS");
      request_.setMethod("POST");
      request_.setPathname(DARA_STRING_TEMPLATE("/"));
      request_.setHeaders(json({
        {"host" , Darabonba::Convert::stringVal(form["host"])},
        {"date" , Utils::Utils::getDateUTCString()},
        {"user-agent" , Utils::Utils::getUserAgent("")}
      }).get<map<string, string>>());
      request_.addHeader("content-type", DARA_STRING_TEMPLATE("multipart/form-data; boundary=" , boundary));
      request_.setBody(Darabonba::Http::Form::toFileForm(form, boundary));
      _lastRequest = make_shared<Darabonba::Http::Request>(request_);
      auto futureResp_ = Darabonba::Core::doAction(request_, runtime_);
      shared_ptr<Darabonba::Http::MCurlResponse> response_ = futureResp_.get();
      _lastResponse  = response_;

      json respMap = nullptr;
      string bodyStr = Darabonba::Stream::readAsString(response_->body());
      if ((response_->statusCode() >= 400) && (response_->statusCode() < 600)) {
        respMap = Darabonba::XML::parseXml(bodyStr, nullptr);
        json err = json(respMap["Error"]);
        throw ClientException(json({
          {"code" , Darabonba::Convert::stringVal(err["Code"])},
          {"message" , Darabonba::Convert::stringVal(err["Message"])},
          {"data" , json({
            {"httpCode" , response_->statusCode()},
            {"requestId" , Darabonba::Convert::stringVal(err["RequestId"])},
            {"hostId" , Darabonba::Convert::stringVal(err["HostId"])}
          })}
        }));
      }

      respMap = Darabonba::XML::parseXml(bodyStr, nullptr);
      return Darabonba::Core::merge(respMap
      );
    } catch (const Darabonba::Exception& ex) {
      _context = Darabonba::Policy::RetryPolicyContext(json({
        {"retriesAttempted" , _retriesAttempted},
        {"lastRequest" , _lastRequest},
        {"lastResponse" , _lastResponse},
        {"exception" , ex},
      }));
      continue;
    }
  }

  throw *_context.exception();
}

string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Configures a data migration or synchronization task.
 *
 * @param request ConfigureDtsJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigureDtsJobResponse
 */
ConfigureDtsJobResponse Client::configureDtsJobWithOptions(const ConfigureDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckpoint()) {
    query["Checkpoint"] = request.checkpoint();
  }

  if (!!request.hasDataCheckConfigure()) {
    query["DataCheckConfigure"] = request.dataCheckConfigure();
  }

  if (!!request.hasDataInitialization()) {
    query["DataInitialization"] = request.dataInitialization();
  }

  if (!!request.hasDataSynchronization()) {
    query["DataSynchronization"] = request.dataSynchronization();
  }

  if (!!request.hasDedicatedClusterId()) {
    query["DedicatedClusterId"] = request.dedicatedClusterId();
  }

  if (!!request.hasDelayNotice()) {
    query["DelayNotice"] = request.delayNotice();
  }

  if (!!request.hasDelayPhone()) {
    query["DelayPhone"] = request.delayPhone();
  }

  if (!!request.hasDelayRuleTime()) {
    query["DelayRuleTime"] = request.delayRuleTime();
  }

  if (!!request.hasDestCaCertificateOssUrl()) {
    query["DestCaCertificateOssUrl"] = request.destCaCertificateOssUrl();
  }

  if (!!request.hasDestCaCertificatePassword()) {
    query["DestCaCertificatePassword"] = request.destCaCertificatePassword();
  }

  if (!!request.hasDestClientCertOssUrl()) {
    query["DestClientCertOssUrl"] = request.destClientCertOssUrl();
  }

  if (!!request.hasDestClientKeyOssUrl()) {
    query["DestClientKeyOssUrl"] = request.destClientKeyOssUrl();
  }

  if (!!request.hasDestClientPassword()) {
    query["DestClientPassword"] = request.destClientPassword();
  }

  if (!!request.hasDestPrimaryVswId()) {
    query["DestPrimaryVswId"] = request.destPrimaryVswId();
  }

  if (!!request.hasDestSecondaryVswId()) {
    query["DestSecondaryVswId"] = request.destSecondaryVswId();
  }

  if (!!request.hasDestinationEndpointDataBaseName()) {
    query["DestinationEndpointDataBaseName"] = request.destinationEndpointDataBaseName();
  }

  if (!!request.hasDestinationEndpointEngineName()) {
    query["DestinationEndpointEngineName"] = request.destinationEndpointEngineName();
  }

  if (!!request.hasDestinationEndpointIP()) {
    query["DestinationEndpointIP"] = request.destinationEndpointIP();
  }

  if (!!request.hasDestinationEndpointInstanceID()) {
    query["DestinationEndpointInstanceID"] = request.destinationEndpointInstanceID();
  }

  if (!!request.hasDestinationEndpointInstanceType()) {
    query["DestinationEndpointInstanceType"] = request.destinationEndpointInstanceType();
  }

  if (!!request.hasDestinationEndpointOracleSID()) {
    query["DestinationEndpointOracleSID"] = request.destinationEndpointOracleSID();
  }

  if (!!request.hasDestinationEndpointOwnerID()) {
    query["DestinationEndpointOwnerID"] = request.destinationEndpointOwnerID();
  }

  if (!!request.hasDestinationEndpointPassword()) {
    query["DestinationEndpointPassword"] = request.destinationEndpointPassword();
  }

  if (!!request.hasDestinationEndpointPort()) {
    query["DestinationEndpointPort"] = request.destinationEndpointPort();
  }

  if (!!request.hasDestinationEndpointRegion()) {
    query["DestinationEndpointRegion"] = request.destinationEndpointRegion();
  }

  if (!!request.hasDestinationEndpointRole()) {
    query["DestinationEndpointRole"] = request.destinationEndpointRole();
  }

  if (!!request.hasDestinationEndpointUserName()) {
    query["DestinationEndpointUserName"] = request.destinationEndpointUserName();
  }

  if (!!request.hasDisasterRecoveryJob()) {
    query["DisasterRecoveryJob"] = request.disasterRecoveryJob();
  }

  if (!!request.hasDtsBisLabel()) {
    query["DtsBisLabel"] = request.dtsBisLabel();
  }

  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasDtsJobName()) {
    query["DtsJobName"] = request.dtsJobName();
  }

  if (!!request.hasErrorNotice()) {
    query["ErrorNotice"] = request.errorNotice();
  }

  if (!!request.hasErrorPhone()) {
    query["ErrorPhone"] = request.errorPhone();
  }

  if (!!request.hasFileOssUrl()) {
    query["FileOssUrl"] = request.fileOssUrl();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.jobType();
  }

  if (!!request.hasMaxDu()) {
    query["MaxDu"] = request.maxDu();
  }

  if (!!request.hasMinDu()) {
    query["MinDu"] = request.minDu();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceEndpointDatabaseName()) {
    query["SourceEndpointDatabaseName"] = request.sourceEndpointDatabaseName();
  }

  if (!!request.hasSourceEndpointEngineName()) {
    query["SourceEndpointEngineName"] = request.sourceEndpointEngineName();
  }

  if (!!request.hasSourceEndpointIP()) {
    query["SourceEndpointIP"] = request.sourceEndpointIP();
  }

  if (!!request.hasSourceEndpointInstanceID()) {
    query["SourceEndpointInstanceID"] = request.sourceEndpointInstanceID();
  }

  if (!!request.hasSourceEndpointInstanceType()) {
    query["SourceEndpointInstanceType"] = request.sourceEndpointInstanceType();
  }

  if (!!request.hasSourceEndpointOracleSID()) {
    query["SourceEndpointOracleSID"] = request.sourceEndpointOracleSID();
  }

  if (!!request.hasSourceEndpointOwnerID()) {
    query["SourceEndpointOwnerID"] = request.sourceEndpointOwnerID();
  }

  if (!!request.hasSourceEndpointPassword()) {
    query["SourceEndpointPassword"] = request.sourceEndpointPassword();
  }

  if (!!request.hasSourceEndpointPort()) {
    query["SourceEndpointPort"] = request.sourceEndpointPort();
  }

  if (!!request.hasSourceEndpointRegion()) {
    query["SourceEndpointRegion"] = request.sourceEndpointRegion();
  }

  if (!!request.hasSourceEndpointRole()) {
    query["SourceEndpointRole"] = request.sourceEndpointRole();
  }

  if (!!request.hasSourceEndpointUserName()) {
    query["SourceEndpointUserName"] = request.sourceEndpointUserName();
  }

  if (!!request.hasSourceEndpointVSwitchID()) {
    query["SourceEndpointVSwitchID"] = request.sourceEndpointVSwitchID();
  }

  if (!!request.hasSrcCaCertificateOssUrl()) {
    query["SrcCaCertificateOssUrl"] = request.srcCaCertificateOssUrl();
  }

  if (!!request.hasSrcCaCertificatePassword()) {
    query["SrcCaCertificatePassword"] = request.srcCaCertificatePassword();
  }

  if (!!request.hasSrcClientCertOssUrl()) {
    query["SrcClientCertOssUrl"] = request.srcClientCertOssUrl();
  }

  if (!!request.hasSrcClientKeyOssUrl()) {
    query["SrcClientKeyOssUrl"] = request.srcClientKeyOssUrl();
  }

  if (!!request.hasSrcClientPassword()) {
    query["SrcClientPassword"] = request.srcClientPassword();
  }

  if (!!request.hasSrcPrimaryVswId()) {
    query["SrcPrimaryVswId"] = request.srcPrimaryVswId();
  }

  if (!!request.hasSrcSecondaryVswId()) {
    query["SrcSecondaryVswId"] = request.srcSecondaryVswId();
  }

  if (!!request.hasStructureInitialization()) {
    query["StructureInitialization"] = request.structureInitialization();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  json body = {};
  if (!!request.hasDbList()) {
    body["DbList"] = request.dbList();
  }

  if (!!request.hasReserve()) {
    body["Reserve"] = request.reserve();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ConfigureDtsJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigureDtsJobResponse>();
}

/**
 * @summary Configures a data migration or synchronization task.
 *
 * @param request ConfigureDtsJobRequest
 * @return ConfigureDtsJobResponse
 */
ConfigureDtsJobResponse Client::configureDtsJob(const ConfigureDtsJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configureDtsJobWithOptions(request, runtime);
}

ConfigureDtsJobResponse Client::configureDtsJobAdvance(const ConfigureDtsJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "Dts"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  ConfigureDtsJobRequest configureDtsJobReq = ConfigureDtsJobRequest();
  Utils::Utils::convert(request, configureDtsJobReq);
  if (!!request.hasFileOssUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.fileOssUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    configureDtsJobReq.setFileOssUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  ConfigureDtsJobResponse configureDtsJobResp = configureDtsJobWithOptions(configureDtsJobReq, runtime);
  return configureDtsJobResp;
}

/**
 * @summary Configures a data migration task.
 *
 * @param request ConfigureMigrationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigureMigrationJobResponse
 */
ConfigureMigrationJobResponse Client::configureMigrationJobWithOptions(const ConfigureMigrationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasCheckpoint()) {
    query["Checkpoint"] = request.checkpoint();
  }

  if (!!request.hasMigrationJobId()) {
    query["MigrationJobId"] = request.migrationJobId();
  }

  if (!!request.hasMigrationJobName()) {
    query["MigrationJobName"] = request.migrationJobName();
  }

  if (!!request.hasMigrationReserved()) {
    query["MigrationReserved"] = request.migrationReserved();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasDestinationEndpoint()) {
    query["DestinationEndpoint"] = request.destinationEndpoint();
  }

  if (!!request.hasMigrationMode()) {
    query["MigrationMode"] = request.migrationMode();
  }

  if (!!request.hasSourceEndpoint()) {
    query["SourceEndpoint"] = request.sourceEndpoint();
  }

  json body = {};
  if (!!request.hasMigrationObject()) {
    body["MigrationObject"] = request.migrationObject();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ConfigureMigrationJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigureMigrationJobResponse>();
}

/**
 * @summary Configures a data migration task.
 *
 * @param request ConfigureMigrationJobRequest
 * @return ConfigureMigrationJobResponse
 */
ConfigureMigrationJobResponse Client::configureMigrationJob(const ConfigureMigrationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configureMigrationJobWithOptions(request, runtime);
}

/**
 * @summary Configures alert settings to monitor a data migration instance.
 *
 * @param request ConfigureMigrationJobAlertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigureMigrationJobAlertResponse
 */
ConfigureMigrationJobAlertResponse Client::configureMigrationJobAlertWithOptions(const ConfigureMigrationJobAlertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasDelayAlertPhone()) {
    query["DelayAlertPhone"] = request.delayAlertPhone();
  }

  if (!!request.hasDelayAlertStatus()) {
    query["DelayAlertStatus"] = request.delayAlertStatus();
  }

  if (!!request.hasDelayOverSeconds()) {
    query["DelayOverSeconds"] = request.delayOverSeconds();
  }

  if (!!request.hasErrorAlertPhone()) {
    query["ErrorAlertPhone"] = request.errorAlertPhone();
  }

  if (!!request.hasErrorAlertStatus()) {
    query["ErrorAlertStatus"] = request.errorAlertStatus();
  }

  if (!!request.hasMigrationJobId()) {
    query["MigrationJobId"] = request.migrationJobId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigureMigrationJobAlert"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigureMigrationJobAlertResponse>();
}

/**
 * @summary Configures alert settings to monitor a data migration instance.
 *
 * @param request ConfigureMigrationJobAlertRequest
 * @return ConfigureMigrationJobAlertResponse
 */
ConfigureMigrationJobAlertResponse Client::configureMigrationJobAlert(const ConfigureMigrationJobAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configureMigrationJobAlertWithOptions(request, runtime);
}

/**
 * @summary Configures a change tracking task.
 *
 * @description >  You can preview related API operation parameters when you configure a change tracking task in the Data Transmission Service (DTS) console. This helps you configure the request parameters of this API operation. For more information, see [Preview the request parameters of API operations](https://help.aliyun.com/document_detail/2851612.html).
 *
 * @param request ConfigureSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigureSubscriptionResponse
 */
ConfigureSubscriptionResponse Client::configureSubscriptionWithOptions(const ConfigureSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckpoint()) {
    query["Checkpoint"] = request.checkpoint();
  }

  if (!!request.hasDbList()) {
    query["DbList"] = request.dbList();
  }

  if (!!request.hasDedicatedClusterId()) {
    query["DedicatedClusterId"] = request.dedicatedClusterId();
  }

  if (!!request.hasDelayNotice()) {
    query["DelayNotice"] = request.delayNotice();
  }

  if (!!request.hasDelayPhone()) {
    query["DelayPhone"] = request.delayPhone();
  }

  if (!!request.hasDelayRuleTime()) {
    query["DelayRuleTime"] = request.delayRuleTime();
  }

  if (!!request.hasDtsBisLabel()) {
    query["DtsBisLabel"] = request.dtsBisLabel();
  }

  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasDtsJobName()) {
    query["DtsJobName"] = request.dtsJobName();
  }

  if (!!request.hasErrorNotice()) {
    query["ErrorNotice"] = request.errorNotice();
  }

  if (!!request.hasErrorPhone()) {
    query["ErrorPhone"] = request.errorPhone();
  }

  if (!!request.hasMaxDu()) {
    query["MaxDu"] = request.maxDu();
  }

  if (!!request.hasMinDu()) {
    query["MinDu"] = request.minDu();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReserve()) {
    query["Reserve"] = request.reserve();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceEndpointDatabaseName()) {
    query["SourceEndpointDatabaseName"] = request.sourceEndpointDatabaseName();
  }

  if (!!request.hasSourceEndpointEngineName()) {
    query["SourceEndpointEngineName"] = request.sourceEndpointEngineName();
  }

  if (!!request.hasSourceEndpointIP()) {
    query["SourceEndpointIP"] = request.sourceEndpointIP();
  }

  if (!!request.hasSourceEndpointInstanceID()) {
    query["SourceEndpointInstanceID"] = request.sourceEndpointInstanceID();
  }

  if (!!request.hasSourceEndpointInstanceType()) {
    query["SourceEndpointInstanceType"] = request.sourceEndpointInstanceType();
  }

  if (!!request.hasSourceEndpointOracleSID()) {
    query["SourceEndpointOracleSID"] = request.sourceEndpointOracleSID();
  }

  if (!!request.hasSourceEndpointOwnerID()) {
    query["SourceEndpointOwnerID"] = request.sourceEndpointOwnerID();
  }

  if (!!request.hasSourceEndpointPassword()) {
    query["SourceEndpointPassword"] = request.sourceEndpointPassword();
  }

  if (!!request.hasSourceEndpointPort()) {
    query["SourceEndpointPort"] = request.sourceEndpointPort();
  }

  if (!!request.hasSourceEndpointRegion()) {
    query["SourceEndpointRegion"] = request.sourceEndpointRegion();
  }

  if (!!request.hasSourceEndpointRole()) {
    query["SourceEndpointRole"] = request.sourceEndpointRole();
  }

  if (!!request.hasSourceEndpointUserName()) {
    query["SourceEndpointUserName"] = request.sourceEndpointUserName();
  }

  if (!!request.hasSrcCaCertificateOssUrl()) {
    query["SrcCaCertificateOssUrl"] = request.srcCaCertificateOssUrl();
  }

  if (!!request.hasSrcCaCertificatePassword()) {
    query["SrcCaCertificatePassword"] = request.srcCaCertificatePassword();
  }

  if (!!request.hasSrcClientCertOssUrl()) {
    query["SrcClientCertOssUrl"] = request.srcClientCertOssUrl();
  }

  if (!!request.hasSrcClientKeyOssUrl()) {
    query["SrcClientKeyOssUrl"] = request.srcClientKeyOssUrl();
  }

  if (!!request.hasSrcClientPassword()) {
    query["SrcClientPassword"] = request.srcClientPassword();
  }

  if (!!request.hasSubscriptionDataTypeDDL()) {
    query["SubscriptionDataTypeDDL"] = request.subscriptionDataTypeDDL();
  }

  if (!!request.hasSubscriptionDataTypeDML()) {
    query["SubscriptionDataTypeDML"] = request.subscriptionDataTypeDML();
  }

  if (!!request.hasSubscriptionInstanceNetworkType()) {
    query["SubscriptionInstanceNetworkType"] = request.subscriptionInstanceNetworkType();
  }

  if (!!request.hasSubscriptionInstanceVPCId()) {
    query["SubscriptionInstanceVPCId"] = request.subscriptionInstanceVPCId();
  }

  if (!!request.hasSubscriptionInstanceVSwitchId()) {
    query["SubscriptionInstanceVSwitchId"] = request.subscriptionInstanceVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigureSubscription"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigureSubscriptionResponse>();
}

/**
 * @summary Configures a change tracking task.
 *
 * @description >  You can preview related API operation parameters when you configure a change tracking task in the Data Transmission Service (DTS) console. This helps you configure the request parameters of this API operation. For more information, see [Preview the request parameters of API operations](https://help.aliyun.com/document_detail/2851612.html).
 *
 * @param request ConfigureSubscriptionRequest
 * @return ConfigureSubscriptionResponse
 */
ConfigureSubscriptionResponse Client::configureSubscription(const ConfigureSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configureSubscriptionWithOptions(request, runtime);
}

/**
 * @summary Configures a change tracking instance of the previous version.
 *
 * @description Before you call this operation, you must call the [CreateSubscriptionInstance](https://help.aliyun.com/document_detail/49436.html) operation to create a change tracking instance.
 *
 * @param request ConfigureSubscriptionInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigureSubscriptionInstanceResponse
 */
ConfigureSubscriptionInstanceResponse Client::configureSubscriptionInstanceWithOptions(const ConfigureSubscriptionInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSubscriptionInstanceId()) {
    query["SubscriptionInstanceId"] = request.subscriptionInstanceId();
  }

  if (!!request.hasSubscriptionInstanceName()) {
    query["SubscriptionInstanceName"] = request.subscriptionInstanceName();
  }

  if (!!request.hasSubscriptionInstanceNetworkType()) {
    query["SubscriptionInstanceNetworkType"] = request.subscriptionInstanceNetworkType();
  }

  if (!!request.hasSourceEndpoint()) {
    query["SourceEndpoint"] = request.sourceEndpoint();
  }

  if (!!request.hasSubscriptionDataType()) {
    query["SubscriptionDataType"] = request.subscriptionDataType();
  }

  if (!!request.hasSubscriptionInstance()) {
    query["SubscriptionInstance"] = request.subscriptionInstance();
  }

  json body = {};
  if (!!request.hasSubscriptionObject()) {
    body["SubscriptionObject"] = request.subscriptionObject();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ConfigureSubscriptionInstance"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigureSubscriptionInstanceResponse>();
}

/**
 * @summary Configures a change tracking instance of the previous version.
 *
 * @description Before you call this operation, you must call the [CreateSubscriptionInstance](https://help.aliyun.com/document_detail/49436.html) operation to create a change tracking instance.
 *
 * @param request ConfigureSubscriptionInstanceRequest
 * @return ConfigureSubscriptionInstanceResponse
 */
ConfigureSubscriptionInstanceResponse Client::configureSubscriptionInstance(const ConfigureSubscriptionInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configureSubscriptionInstanceWithOptions(request, runtime);
}

/**
 * @summary Configures alert settings to monitor a change tracking instance.
 *
 * @param request ConfigureSubscriptionInstanceAlertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigureSubscriptionInstanceAlertResponse
 */
ConfigureSubscriptionInstanceAlertResponse Client::configureSubscriptionInstanceAlertWithOptions(const ConfigureSubscriptionInstanceAlertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasDelayAlertPhone()) {
    query["DelayAlertPhone"] = request.delayAlertPhone();
  }

  if (!!request.hasDelayAlertStatus()) {
    query["DelayAlertStatus"] = request.delayAlertStatus();
  }

  if (!!request.hasDelayOverSeconds()) {
    query["DelayOverSeconds"] = request.delayOverSeconds();
  }

  if (!!request.hasErrorAlertPhone()) {
    query["ErrorAlertPhone"] = request.errorAlertPhone();
  }

  if (!!request.hasErrorAlertStatus()) {
    query["ErrorAlertStatus"] = request.errorAlertStatus();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSubscriptionInstanceId()) {
    query["SubscriptionInstanceId"] = request.subscriptionInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigureSubscriptionInstanceAlert"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigureSubscriptionInstanceAlertResponse>();
}

/**
 * @summary Configures alert settings to monitor a change tracking instance.
 *
 * @param request ConfigureSubscriptionInstanceAlertRequest
 * @return ConfigureSubscriptionInstanceAlertResponse
 */
ConfigureSubscriptionInstanceAlertResponse Client::configureSubscriptionInstanceAlert(const ConfigureSubscriptionInstanceAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configureSubscriptionInstanceAlertWithOptions(request, runtime);
}

/**
 * @summary Configures a data synchronization task.
 *
 * @description Before you call this operation, you must call the [CreateSynchronizationJob](https://help.aliyun.com/document_detail/49446.html) operation to create a data synchronization instance.
 * > 
 * *   After you call this operation to configure a data synchronization task, the task will be automatically started and prechecked. You do not need to call the [StartSynchronizationJob](https://help.aliyun.com/document_detail/49448.html) operation to start the task.
 * *   A data synchronization task may fail to be started due to precheck failures. You can call the [DescribeSynchronizationJobStatus](https://help.aliyun.com/document_detail/49453.html) operation to query the status of the task. Then, you can change parameter settings based on the error messages about the precheck failures. After you fix the issue, you must call the [StartSynchronizationJob](https://help.aliyun.com/document_detail/49448.html) operation to restart the data synchronization task.
 *
 * @param request ConfigureSynchronizationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigureSynchronizationJobResponse
 */
ConfigureSynchronizationJobResponse Client::configureSynchronizationJobWithOptions(const ConfigureSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasCheckpoint()) {
    query["Checkpoint"] = request.checkpoint();
  }

  if (!!request.hasDataInitialization()) {
    query["DataInitialization"] = request.dataInitialization();
  }

  if (!!request.hasMigrationReserved()) {
    query["MigrationReserved"] = request.migrationReserved();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStructureInitialization()) {
    query["StructureInitialization"] = request.structureInitialization();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  if (!!request.hasSynchronizationJobId()) {
    query["SynchronizationJobId"] = request.synchronizationJobId();
  }

  if (!!request.hasSynchronizationJobName()) {
    query["SynchronizationJobName"] = request.synchronizationJobName();
  }

  if (!!request.hasDestinationEndpoint()) {
    query["DestinationEndpoint"] = request.destinationEndpoint();
  }

  if (!!request.hasPartitionKey()) {
    query["PartitionKey"] = request.partitionKey();
  }

  if (!!request.hasSourceEndpoint()) {
    query["SourceEndpoint"] = request.sourceEndpoint();
  }

  json body = {};
  if (!!request.hasSynchronizationObjects()) {
    body["SynchronizationObjects"] = request.synchronizationObjects();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ConfigureSynchronizationJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigureSynchronizationJobResponse>();
}

/**
 * @summary Configures a data synchronization task.
 *
 * @description Before you call this operation, you must call the [CreateSynchronizationJob](https://help.aliyun.com/document_detail/49446.html) operation to create a data synchronization instance.
 * > 
 * *   After you call this operation to configure a data synchronization task, the task will be automatically started and prechecked. You do not need to call the [StartSynchronizationJob](https://help.aliyun.com/document_detail/49448.html) operation to start the task.
 * *   A data synchronization task may fail to be started due to precheck failures. You can call the [DescribeSynchronizationJobStatus](https://help.aliyun.com/document_detail/49453.html) operation to query the status of the task. Then, you can change parameter settings based on the error messages about the precheck failures. After you fix the issue, you must call the [StartSynchronizationJob](https://help.aliyun.com/document_detail/49448.html) operation to restart the data synchronization task.
 *
 * @param request ConfigureSynchronizationJobRequest
 * @return ConfigureSynchronizationJobResponse
 */
ConfigureSynchronizationJobResponse Client::configureSynchronizationJob(const ConfigureSynchronizationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configureSynchronizationJobWithOptions(request, runtime);
}

/**
 * @summary Configures alert settings to monitor a data synchronization instance.
 *
 * @param request ConfigureSynchronizationJobAlertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigureSynchronizationJobAlertResponse
 */
ConfigureSynchronizationJobAlertResponse Client::configureSynchronizationJobAlertWithOptions(const ConfigureSynchronizationJobAlertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasDelayAlertPhone()) {
    query["DelayAlertPhone"] = request.delayAlertPhone();
  }

  if (!!request.hasDelayAlertStatus()) {
    query["DelayAlertStatus"] = request.delayAlertStatus();
  }

  if (!!request.hasDelayOverSeconds()) {
    query["DelayOverSeconds"] = request.delayOverSeconds();
  }

  if (!!request.hasErrorAlertPhone()) {
    query["ErrorAlertPhone"] = request.errorAlertPhone();
  }

  if (!!request.hasErrorAlertStatus()) {
    query["ErrorAlertStatus"] = request.errorAlertStatus();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  if (!!request.hasSynchronizationJobId()) {
    query["SynchronizationJobId"] = request.synchronizationJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigureSynchronizationJobAlert"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigureSynchronizationJobAlertResponse>();
}

/**
 * @summary Configures alert settings to monitor a data synchronization instance.
 *
 * @param request ConfigureSynchronizationJobAlertRequest
 * @return ConfigureSynchronizationJobAlertResponse
 */
ConfigureSynchronizationJobAlertResponse Client::configureSynchronizationJobAlert(const ConfigureSynchronizationJobAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configureSynchronizationJobAlertWithOptions(request, runtime);
}

/**
 * @summary Enables or disables image matching for a data synchronization instance.
 *
 * @param request ConfigureSynchronizationJobReplicatorCompareRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigureSynchronizationJobReplicatorCompareResponse
 */
ConfigureSynchronizationJobReplicatorCompareResponse Client::configureSynchronizationJobReplicatorCompareWithOptions(const ConfigureSynchronizationJobReplicatorCompareRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  if (!!request.hasSynchronizationJobId()) {
    query["SynchronizationJobId"] = request.synchronizationJobId();
  }

  if (!!request.hasSynchronizationReplicatorCompareEnable()) {
    query["SynchronizationReplicatorCompareEnable"] = request.synchronizationReplicatorCompareEnable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigureSynchronizationJobReplicatorCompare"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigureSynchronizationJobReplicatorCompareResponse>();
}

/**
 * @summary Enables or disables image matching for a data synchronization instance.
 *
 * @param request ConfigureSynchronizationJobReplicatorCompareRequest
 * @return ConfigureSynchronizationJobReplicatorCompareResponse
 */
ConfigureSynchronizationJobReplicatorCompareResponse Client::configureSynchronizationJobReplicatorCompare(const ConfigureSynchronizationJobReplicatorCompareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configureSynchronizationJobReplicatorCompareWithOptions(request, runtime);
}

/**
 * @summary Transfers resource groups of instance resources.
 *
 * @param request ConvertInstanceResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConvertInstanceResourceGroupResponse
 */
ConvertInstanceResourceGroupResponse Client::convertInstanceResourceGroupWithOptions(const ConvertInstanceResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConvertInstanceResourceGroup"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConvertInstanceResourceGroupResponse>();
}

/**
 * @summary Transfers resource groups of instance resources.
 *
 * @param request ConvertInstanceResourceGroupRequest
 * @return ConvertInstanceResourceGroupResponse
 */
ConvertInstanceResourceGroupResponse Client::convertInstanceResourceGroup(const ConvertInstanceResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return convertInstanceResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Counts tasks by condition.
 *
 * @param request CountJobByConditionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CountJobByConditionResponse
 */
CountJobByConditionResponse Client::countJobByConditionWithOptions(const CountJobByConditionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestDbType()) {
    query["DestDbType"] = request.destDbType();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.jobType();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSrcDbType()) {
    query["SrcDbType"] = request.srcDbType();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CountJobByCondition"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CountJobByConditionResponse>();
}

/**
 * @summary Counts tasks by condition.
 *
 * @param request CountJobByConditionRequest
 * @return CountJobByConditionResponse
 */
CountJobByConditionResponse Client::countJobByCondition(const CountJobByConditionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return countJobByConditionWithOptions(request, runtime);
}

/**
 * @summary Creates a consumer group for a change tracking task. Downstream clients can use the consumer group to consume tracked data.
 *
 * @param request CreateConsumerChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConsumerChannelResponse
 */
CreateConsumerChannelResponse Client::createConsumerChannelWithOptions(const CreateConsumerChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerGroupName()) {
    query["ConsumerGroupName"] = request.consumerGroupName();
  }

  if (!!request.hasConsumerGroupPassword()) {
    query["ConsumerGroupPassword"] = request.consumerGroupPassword();
  }

  if (!!request.hasConsumerGroupUserName()) {
    query["ConsumerGroupUserName"] = request.consumerGroupUserName();
  }

  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateConsumerChannel"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConsumerChannelResponse>();
}

/**
 * @summary Creates a consumer group for a change tracking task. Downstream clients can use the consumer group to consume tracked data.
 *
 * @param request CreateConsumerChannelRequest
 * @return CreateConsumerChannelResponse
 */
CreateConsumerChannelResponse Client::createConsumerChannel(const CreateConsumerChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createConsumerChannelWithOptions(request, runtime);
}

/**
 * @summary Creates a consumer group for a change tracking instance.
 *
 * @param request CreateConsumerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConsumerGroupResponse
 */
CreateConsumerGroupResponse Client::createConsumerGroupWithOptions(const CreateConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasConsumerGroupName()) {
    query["ConsumerGroupName"] = request.consumerGroupName();
  }

  if (!!request.hasConsumerGroupPassword()) {
    query["ConsumerGroupPassword"] = request.consumerGroupPassword();
  }

  if (!!request.hasConsumerGroupUserName()) {
    query["ConsumerGroupUserName"] = request.consumerGroupUserName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSubscriptionInstanceId()) {
    query["SubscriptionInstanceId"] = request.subscriptionInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateConsumerGroup"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConsumerGroupResponse>();
}

/**
 * @summary Creates a consumer group for a change tracking instance.
 *
 * @param request CreateConsumerGroupRequest
 * @return CreateConsumerGroupResponse
 */
CreateConsumerGroupResponse Client::createConsumerGroup(const CreateConsumerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createConsumerGroupWithOptions(request, runtime);
}

/**
 * @summary Creates an alert rule.
 *
 * @param request CreateDedicatedClusterMonitorRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDedicatedClusterMonitorRuleResponse
 */
CreateDedicatedClusterMonitorRuleResponse Client::createDedicatedClusterMonitorRuleWithOptions(const CreateDedicatedClusterMonitorRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCpuAlarmThreshold()) {
    query["CpuAlarmThreshold"] = request.cpuAlarmThreshold();
  }

  if (!!request.hasDedicatedClusterId()) {
    query["DedicatedClusterId"] = request.dedicatedClusterId();
  }

  if (!!request.hasDiskAlarmThreshold()) {
    query["DiskAlarmThreshold"] = request.diskAlarmThreshold();
  }

  if (!!request.hasDuAlarmThreshold()) {
    query["DuAlarmThreshold"] = request.duAlarmThreshold();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMemAlarmThreshold()) {
    query["MemAlarmThreshold"] = request.memAlarmThreshold();
  }

  if (!!request.hasNoticeSwitch()) {
    query["NoticeSwitch"] = request.noticeSwitch();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhones()) {
    query["Phones"] = request.phones();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDedicatedClusterMonitorRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDedicatedClusterMonitorRuleResponse>();
}

/**
 * @summary Creates an alert rule.
 *
 * @param request CreateDedicatedClusterMonitorRuleRequest
 * @return CreateDedicatedClusterMonitorRuleResponse
 */
CreateDedicatedClusterMonitorRuleResponse Client::createDedicatedClusterMonitorRule(const CreateDedicatedClusterMonitorRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDedicatedClusterMonitorRuleWithOptions(request, runtime);
}

/**
 * @summary 查看工作流任务结果
 *
 * @param request CreateDocParserJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDocParserJobResponse
 */
CreateDocParserJobResponse Client::createDocParserJobWithOptions(const CreateDocParserJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasRagInstanceId()) {
    query["RagInstanceId"] = request.ragInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResultType()) {
    query["ResultType"] = request.resultType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDocParserJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDocParserJobResponse>();
}

/**
 * @summary 查看工作流任务结果
 *
 * @param request CreateDocParserJobRequest
 * @return CreateDocParserJobResponse
 */
CreateDocParserJobResponse Client::createDocParserJob(const CreateDocParserJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDocParserJobWithOptions(request, runtime);
}

CreateDocParserJobResponse Client::createDocParserJobAdvance(const CreateDocParserJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "Dts"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  CreateDocParserJobRequest createDocParserJobReq = CreateDocParserJobRequest();
  Utils::Utils::convert(request, createDocParserJobReq);
  if (!!request.hasFileUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.fileUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    createDocParserJobReq.setFileUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  CreateDocParserJobResponse createDocParserJobResp = createDocParserJobWithOptions(createDocParserJobReq, runtime);
  return createDocParserJobResp;
}

/**
 * @summary Purchases a Data Transmission Service (DTS) instance.
 *
 * @description *   Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of DTS.
 * *   If you want to run a DTS task on a DTS dedicated cluster, you must configure the task before you purchase a DTS instance. You can call the [ConfigureDtsJob](https://help.aliyun.com/document_detail/208399.html) operation to configure a DTS task.
 *
 * @param request CreateDtsInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDtsInstanceResponse
 */
CreateDtsInstanceResponse Client::createDtsInstanceWithOptions(const CreateDtsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.autoPay();
  }

  if (!!request.hasAutoStart()) {
    query["AutoStart"] = request.autoStart();
  }

  if (!!request.hasComputeUnit()) {
    query["ComputeUnit"] = request.computeUnit();
  }

  if (!!request.hasDatabaseCount()) {
    query["DatabaseCount"] = request.databaseCount();
  }

  if (!!request.hasDestinationEndpointEngineName()) {
    query["DestinationEndpointEngineName"] = request.destinationEndpointEngineName();
  }

  if (!!request.hasDestinationRegion()) {
    query["DestinationRegion"] = request.destinationRegion();
  }

  if (!!request.hasDtsRegion()) {
    query["DtsRegion"] = request.dtsRegion();
  }

  if (!!request.hasDu()) {
    query["Du"] = request.du();
  }

  if (!!request.hasFeeType()) {
    query["FeeType"] = request.feeType();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.instanceClass();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasMaxDu()) {
    query["MaxDu"] = request.maxDu();
  }

  if (!!request.hasMinDu()) {
    query["MinDu"] = request.minDu();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasQuantity()) {
    query["Quantity"] = request.quantity();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceEndpointEngineName()) {
    query["SourceEndpointEngineName"] = request.sourceEndpointEngineName();
  }

  if (!!request.hasSourceRegion()) {
    query["SourceRegion"] = request.sourceRegion();
  }

  if (!!request.hasSyncArchitecture()) {
    query["SyncArchitecture"] = request.syncArchitecture();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.usedTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDtsInstance"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDtsInstanceResponse>();
}

/**
 * @summary Purchases a Data Transmission Service (DTS) instance.
 *
 * @description *   Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/apsaradb-for-mongodb/pricing) of DTS.
 * *   If you want to run a DTS task on a DTS dedicated cluster, you must configure the task before you purchase a DTS instance. You can call the [ConfigureDtsJob](https://help.aliyun.com/document_detail/208399.html) operation to configure a DTS task.
 *
 * @param request CreateDtsInstanceRequest
 * @return CreateDtsInstanceResponse
 */
CreateDtsInstanceResponse Client::createDtsInstance(const CreateDtsInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDtsInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates or modifies an alert rule for a Data Transmission Service (DTS) task.
 *
 * @description DTS provides the following metrics for DTS tasks:************
 * *   **Latency**: DTS monitors the latency of a DTS task. If the latency of the task exceeds the specified threshold, an alert is triggered. The threshold is specified in units of seconds.
 * *   **Status**: DTS monitors the status of a DTS task. If the state of the task changes to **Error** or **Restore**, an alert is triggered.
 * *   **Full Timeout**: DTS monitors the duration of a DTS task. If the duration of the task exceeds the specified threshold, an alert is triggered. The threshold is specified in units of hours.
 *
 * @param request CreateJobMonitorRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateJobMonitorRuleResponse
 */
CreateJobMonitorRuleResponse Client::createJobMonitorRuleWithOptions(const CreateJobMonitorRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDelayRuleTime()) {
    query["DelayRuleTime"] = request.delayRuleTime();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasNoticeValue()) {
    query["NoticeValue"] = request.noticeValue();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.phone();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  if (!!request.hasTimes()) {
    query["Times"] = request.times();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateJobMonitorRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateJobMonitorRuleResponse>();
}

/**
 * @summary Creates or modifies an alert rule for a Data Transmission Service (DTS) task.
 *
 * @description DTS provides the following metrics for DTS tasks:************
 * *   **Latency**: DTS monitors the latency of a DTS task. If the latency of the task exceeds the specified threshold, an alert is triggered. The threshold is specified in units of seconds.
 * *   **Status**: DTS monitors the status of a DTS task. If the state of the task changes to **Error** or **Restore**, an alert is triggered.
 * *   **Full Timeout**: DTS monitors the duration of a DTS task. If the duration of the task exceeds the specified threshold, an alert is triggered. The threshold is specified in units of hours.
 *
 * @param request CreateJobMonitorRuleRequest
 * @return CreateJobMonitorRuleResponse
 */
CreateJobMonitorRuleResponse Client::createJobMonitorRule(const CreateJobMonitorRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createJobMonitorRuleWithOptions(request, runtime);
}

/**
 * @summary Purchases a data migration instance.
 *
 * @param request CreateMigrationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMigrationJobResponse
 */
CreateMigrationJobResponse Client::createMigrationJobWithOptions(const CreateMigrationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasMigrationJobClass()) {
    query["MigrationJobClass"] = request.migrationJobClass();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMigrationJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMigrationJobResponse>();
}

/**
 * @summary Purchases a data migration instance.
 *
 * @param request CreateMigrationJobRequest
 * @return CreateMigrationJobResponse
 */
CreateMigrationJobResponse Client::createMigrationJob(const CreateMigrationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMigrationJobWithOptions(request, runtime);
}

/**
 * @summary Creates a reverse task for a data synchronization or migration task.
 *
 * @description 调用接口创建的反向任务会立即进行预检查，预检查通过后会进行增量数据采集，增量数据写入模块不会运行（需要调用**StartReverseWriter**接口运行）。
 * > 创建的反向任务固定为同步任务，且只有增量写入模块。
 *
 * @param request CreateReverseDtsJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateReverseDtsJobResponse
 */
CreateReverseDtsJobResponse Client::createReverseDtsJobWithOptions(const CreateReverseDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasShardPassword()) {
    query["ShardPassword"] = request.shardPassword();
  }

  if (!!request.hasShardUsername()) {
    query["ShardUsername"] = request.shardUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateReverseDtsJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateReverseDtsJobResponse>();
}

/**
 * @summary Creates a reverse task for a data synchronization or migration task.
 *
 * @description 调用接口创建的反向任务会立即进行预检查，预检查通过后会进行增量数据采集，增量数据写入模块不会运行（需要调用**StartReverseWriter**接口运行）。
 * > 创建的反向任务固定为同步任务，且只有增量写入模块。
 *
 * @param request CreateReverseDtsJobRequest
 * @return CreateReverseDtsJobResponse
 */
CreateReverseDtsJobResponse Client::createReverseDtsJob(const CreateReverseDtsJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createReverseDtsJobWithOptions(request, runtime);
}

/**
 * @summary Purchases a change tracking instance.
 *
 * @param request CreateSubscriptionInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSubscriptionInstanceResponse
 */
CreateSubscriptionInstanceResponse Client::createSubscriptionInstanceWithOptions(const CreateSubscriptionInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.usedTime();
  }

  if (!!request.hasSourceEndpoint()) {
    query["SourceEndpoint"] = request.sourceEndpoint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSubscriptionInstance"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSubscriptionInstanceResponse>();
}

/**
 * @summary Purchases a change tracking instance.
 *
 * @param request CreateSubscriptionInstanceRequest
 * @return CreateSubscriptionInstanceResponse
 */
CreateSubscriptionInstanceResponse Client::createSubscriptionInstance(const CreateSubscriptionInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSubscriptionInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a data synchronization instance.
 *
 * @param request CreateSynchronizationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSynchronizationJobResponse
 */
CreateSynchronizationJobResponse Client::createSynchronizationJobWithOptions(const CreateSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBInstanceCount()) {
    query["DBInstanceCount"] = request.DBInstanceCount();
  }

  if (!!request.hasDestRegion()) {
    query["DestRegion"] = request.destRegion();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceRegion()) {
    query["SourceRegion"] = request.sourceRegion();
  }

  if (!!request.hasSynchronizationJobClass()) {
    query["SynchronizationJobClass"] = request.synchronizationJobClass();
  }

  if (!!request.hasTopology()) {
    query["Topology"] = request.topology();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.usedTime();
  }

  if (!!request.hasNetworkType()) {
    query["networkType"] = request.networkType();
  }

  if (!!request.hasDestinationEndpoint()) {
    query["DestinationEndpoint"] = request.destinationEndpoint();
  }

  if (!!request.hasSourceEndpoint()) {
    query["SourceEndpoint"] = request.sourceEndpoint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSynchronizationJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSynchronizationJobResponse>();
}

/**
 * @summary Creates a data synchronization instance.
 *
 * @param request CreateSynchronizationJobRequest
 * @return CreateSynchronizationJobResponse
 */
CreateSynchronizationJobResponse Client::createSynchronizationJob(const CreateSynchronizationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSynchronizationJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a consumer group.
 *
 * @param request DeleteConsumerChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConsumerChannelResponse
 */
DeleteConsumerChannelResponse Client::deleteConsumerChannelWithOptions(const DeleteConsumerChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerGroupId()) {
    query["ConsumerGroupId"] = request.consumerGroupId();
  }

  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConsumerChannel"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConsumerChannelResponse>();
}

/**
 * @summary Deletes a consumer group.
 *
 * @param request DeleteConsumerChannelRequest
 * @return DeleteConsumerChannelResponse
 */
DeleteConsumerChannelResponse Client::deleteConsumerChannel(const DeleteConsumerChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteConsumerChannelWithOptions(request, runtime);
}

/**
 * @summary Deletes a consumer group.
 *
 * @param request DeleteConsumerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConsumerGroupResponse
 */
DeleteConsumerGroupResponse Client::deleteConsumerGroupWithOptions(const DeleteConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasConsumerGroupID()) {
    query["ConsumerGroupID"] = request.consumerGroupID();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSubscriptionInstanceId()) {
    query["SubscriptionInstanceId"] = request.subscriptionInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConsumerGroup"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConsumerGroupResponse>();
}

/**
 * @summary Deletes a consumer group.
 *
 * @param request DeleteConsumerGroupRequest
 * @return DeleteConsumerGroupResponse
 */
DeleteConsumerGroupResponse Client::deleteConsumerGroup(const DeleteConsumerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteConsumerGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a data migration, data synchronization, or change tracking task.
 *
 * @param request DeleteDtsJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDtsJobResponse
 */
DeleteDtsJobResponse Client::deleteDtsJobWithOptions(const DeleteDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.jobType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDtsJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDtsJobResponse>();
}

/**
 * @summary Deletes a data migration, data synchronization, or change tracking task.
 *
 * @param request DeleteDtsJobRequest
 * @return DeleteDtsJobResponse
 */
DeleteDtsJobResponse Client::deleteDtsJob(const DeleteDtsJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDtsJobWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple data migration, data synchronization, or change tracking tasks.
 *
 * @param request DeleteDtsJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDtsJobsResponse
 */
DeleteDtsJobsResponse Client::deleteDtsJobsWithOptions(const DeleteDtsJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobIds()) {
    query["DtsJobIds"] = request.dtsJobIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDtsJobs"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDtsJobsResponse>();
}

/**
 * @summary Deletes multiple data migration, data synchronization, or change tracking tasks.
 *
 * @param request DeleteDtsJobsRequest
 * @return DeleteDtsJobsResponse
 */
DeleteDtsJobsResponse Client::deleteDtsJobs(const DeleteDtsJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDtsJobsWithOptions(request, runtime);
}

/**
 * @summary Releases a data migration instance.
 *
 * @param request DeleteMigrationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMigrationJobResponse
 */
DeleteMigrationJobResponse Client::deleteMigrationJobWithOptions(const DeleteMigrationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasMigrationJobId()) {
    query["MigrationJobId"] = request.migrationJobId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMigrationJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMigrationJobResponse>();
}

/**
 * @summary Releases a data migration instance.
 *
 * @param request DeleteMigrationJobRequest
 * @return DeleteMigrationJobResponse
 */
DeleteMigrationJobResponse Client::deleteMigrationJob(const DeleteMigrationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMigrationJobWithOptions(request, runtime);
}

/**
 * @summary Releases a change tracking instance.
 *
 * @param request DeleteSubscriptionInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSubscriptionInstanceResponse
 */
DeleteSubscriptionInstanceResponse Client::deleteSubscriptionInstanceWithOptions(const DeleteSubscriptionInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSubscriptionInstanceId()) {
    query["SubscriptionInstanceId"] = request.subscriptionInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSubscriptionInstance"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSubscriptionInstanceResponse>();
}

/**
 * @summary Releases a change tracking instance.
 *
 * @param request DeleteSubscriptionInstanceRequest
 * @return DeleteSubscriptionInstanceResponse
 */
DeleteSubscriptionInstanceResponse Client::deleteSubscriptionInstance(const DeleteSubscriptionInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSubscriptionInstanceWithOptions(request, runtime);
}

/**
 * @summary Releases a data synchronization instance.
 *
 * @param request DeleteSynchronizationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSynchronizationJobResponse
 */
DeleteSynchronizationJobResponse Client::deleteSynchronizationJobWithOptions(const DeleteSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationJobId()) {
    query["SynchronizationJobId"] = request.synchronizationJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSynchronizationJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSynchronizationJobResponse>();
}

/**
 * @summary Releases a data synchronization instance.
 *
 * @param request DeleteSynchronizationJobRequest
 * @return DeleteSynchronizationJobResponse
 */
DeleteSynchronizationJobResponse Client::deleteSynchronizationJob(const DeleteSynchronizationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSynchronizationJobWithOptions(request, runtime);
}

/**
 * @summary 查询数据投递链路store账号
 *
 * @param request DescribeChannelAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelAccountResponse
 */
DescribeChannelAccountResponse Client::describeChannelAccountWithOptions(const DescribeChannelAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeChannelAccount"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeChannelAccountResponse>();
}

/**
 * @summary 查询数据投递链路store账号
 *
 * @param request DescribeChannelAccountRequest
 * @return DescribeChannelAccountResponse
 */
DescribeChannelAccountResponse Client::describeChannelAccount(const DescribeChannelAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelAccountWithOptions(request, runtime);
}

/**
 * @summary 请求所有数据校验任务数据
 *
 * @param request DescribeCheckJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCheckJobsResponse
 */
DescribeCheckJobsResponse Client::describeCheckJobsWithOptions(const DescribeCheckJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckJobId()) {
    query["CheckJobId"] = request.checkJobId();
  }

  if (!!request.hasCheckType()) {
    query["CheckType"] = request.checkType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.jobName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCheckJobs"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCheckJobsResponse>();
}

/**
 * @summary 请求所有数据校验任务数据
 *
 * @param request DescribeCheckJobsRequest
 * @return DescribeCheckJobsResponse
 */
DescribeCheckJobsResponse Client::describeCheckJobs(const DescribeCheckJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCheckJobsWithOptions(request, runtime);
}

/**
 * @summary Queries operation logs of a Data Transmission Service (DTS) dedicated cluster.
 *
 * @param request DescribeClusterOperateLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterOperateLogsResponse
 */
DescribeClusterOperateLogsResponse Client::describeClusterOperateLogsWithOptions(const DescribeClusterOperateLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  json body = {};
  if (!!request.hasAccountId()) {
    body["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDedicatedClusterId()) {
    body["DedicatedClusterId"] = request.dedicatedClusterId();
  }

  if (!!request.hasDtsJobId()) {
    body["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerID()) {
    body["OwnerID"] = request.ownerID();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeClusterOperateLogs"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterOperateLogsResponse>();
}

/**
 * @summary Queries operation logs of a Data Transmission Service (DTS) dedicated cluster.
 *
 * @param request DescribeClusterOperateLogsRequest
 * @return DescribeClusterOperateLogsResponse
 */
DescribeClusterOperateLogsResponse Client::describeClusterOperateLogs(const DescribeClusterOperateLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterOperateLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the resource usage of a cluster.
 *
 * @param request DescribeClusterUsedUtilizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterUsedUtilizationResponse
 */
DescribeClusterUsedUtilizationResponse Client::describeClusterUsedUtilizationWithOptions(const DescribeClusterUsedUtilizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  json body = {};
  if (!!request.hasAccountId()) {
    body["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDedicatedClusterId()) {
    body["DedicatedClusterId"] = request.dedicatedClusterId();
  }

  if (!!request.hasDtsJobId()) {
    body["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasEnv()) {
    body["Env"] = request.env();
  }

  if (!!request.hasMetricType()) {
    body["MetricType"] = request.metricType();
  }

  if (!!request.hasOwnerID()) {
    body["OwnerID"] = request.ownerID();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasSecurityToken()) {
    body["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeClusterUsedUtilization"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterUsedUtilizationResponse>();
}

/**
 * @summary Queries the resource usage of a cluster.
 *
 * @param request DescribeClusterUsedUtilizationRequest
 * @return DescribeClusterUsedUtilizationResponse
 */
DescribeClusterUsedUtilizationResponse Client::describeClusterUsedUtilization(const DescribeClusterUsedUtilizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterUsedUtilizationWithOptions(request, runtime);
}

/**
 * @summary Queries the connectivity of Data Transmission Service (DTS) servers to the source and destination databases.
 *
 * @param request DescribeConnectionStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeConnectionStatusResponse
 */
DescribeConnectionStatusResponse Client::describeConnectionStatusWithOptions(const DescribeConnectionStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestinationEndpointArchitecture()) {
    query["DestinationEndpointArchitecture"] = request.destinationEndpointArchitecture();
  }

  if (!!request.hasDestinationEndpointDatabaseName()) {
    query["DestinationEndpointDatabaseName"] = request.destinationEndpointDatabaseName();
  }

  if (!!request.hasDestinationEndpointEngineName()) {
    query["DestinationEndpointEngineName"] = request.destinationEndpointEngineName();
  }

  if (!!request.hasDestinationEndpointIP()) {
    query["DestinationEndpointIP"] = request.destinationEndpointIP();
  }

  if (!!request.hasDestinationEndpointInstanceID()) {
    query["DestinationEndpointInstanceID"] = request.destinationEndpointInstanceID();
  }

  if (!!request.hasDestinationEndpointInstanceType()) {
    query["DestinationEndpointInstanceType"] = request.destinationEndpointInstanceType();
  }

  if (!!request.hasDestinationEndpointOracleSID()) {
    query["DestinationEndpointOracleSID"] = request.destinationEndpointOracleSID();
  }

  if (!!request.hasDestinationEndpointPassword()) {
    query["DestinationEndpointPassword"] = request.destinationEndpointPassword();
  }

  if (!!request.hasDestinationEndpointPort()) {
    query["DestinationEndpointPort"] = request.destinationEndpointPort();
  }

  if (!!request.hasDestinationEndpointRegion()) {
    query["DestinationEndpointRegion"] = request.destinationEndpointRegion();
  }

  if (!!request.hasDestinationEndpointUserName()) {
    query["DestinationEndpointUserName"] = request.destinationEndpointUserName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceEndpointArchitecture()) {
    query["SourceEndpointArchitecture"] = request.sourceEndpointArchitecture();
  }

  if (!!request.hasSourceEndpointDatabaseName()) {
    query["SourceEndpointDatabaseName"] = request.sourceEndpointDatabaseName();
  }

  if (!!request.hasSourceEndpointEngineName()) {
    query["SourceEndpointEngineName"] = request.sourceEndpointEngineName();
  }

  if (!!request.hasSourceEndpointIP()) {
    query["SourceEndpointIP"] = request.sourceEndpointIP();
  }

  if (!!request.hasSourceEndpointInstanceID()) {
    query["SourceEndpointInstanceID"] = request.sourceEndpointInstanceID();
  }

  if (!!request.hasSourceEndpointInstanceType()) {
    query["SourceEndpointInstanceType"] = request.sourceEndpointInstanceType();
  }

  if (!!request.hasSourceEndpointOracleSID()) {
    query["SourceEndpointOracleSID"] = request.sourceEndpointOracleSID();
  }

  if (!!request.hasSourceEndpointPassword()) {
    query["SourceEndpointPassword"] = request.sourceEndpointPassword();
  }

  if (!!request.hasSourceEndpointPort()) {
    query["SourceEndpointPort"] = request.sourceEndpointPort();
  }

  if (!!request.hasSourceEndpointRegion()) {
    query["SourceEndpointRegion"] = request.sourceEndpointRegion();
  }

  if (!!request.hasSourceEndpointUserName()) {
    query["SourceEndpointUserName"] = request.sourceEndpointUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeConnectionStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeConnectionStatusResponse>();
}

/**
 * @summary Queries the connectivity of Data Transmission Service (DTS) servers to the source and destination databases.
 *
 * @param request DescribeConnectionStatusRequest
 * @return DescribeConnectionStatusResponse
 */
DescribeConnectionStatusResponse Client::describeConnectionStatus(const DescribeConnectionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeConnectionStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the information of a consumer group, including the consumer group ID, consumer group name, username, and message latency.
 *
 * @param request DescribeConsumerChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeConsumerChannelResponse
 */
DescribeConsumerChannelResponse Client::describeConsumerChannelWithOptions(const DescribeConsumerChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParentChannelId()) {
    query["ParentChannelId"] = request.parentChannelId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeConsumerChannel"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeConsumerChannelResponse>();
}

/**
 * @summary Queries the information of a consumer group, including the consumer group ID, consumer group name, username, and message latency.
 *
 * @param request DescribeConsumerChannelRequest
 * @return DescribeConsumerChannelResponse
 */
DescribeConsumerChannelResponse Client::describeConsumerChannel(const DescribeConsumerChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeConsumerChannelWithOptions(request, runtime);
}

/**
 * @summary Queries the details of consumer groups in a change tracking instance.
 *
 * @param request DescribeConsumerGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeConsumerGroupResponse
 */
DescribeConsumerGroupResponse Client::describeConsumerGroupWithOptions(const DescribeConsumerGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSubscriptionInstanceId()) {
    query["SubscriptionInstanceId"] = request.subscriptionInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeConsumerGroup"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeConsumerGroupResponse>();
}

/**
 * @summary Queries the details of consumer groups in a change tracking instance.
 *
 * @param request DescribeConsumerGroupRequest
 * @return DescribeConsumerGroupResponse
 */
DescribeConsumerGroupResponse Client::describeConsumerGroup(const DescribeConsumerGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeConsumerGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the CIDR blocks of DTS servers.
 *
 * @param request DescribeDTSIPRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDTSIPResponse
 */
DescribeDTSIPResponse Client::describeDTSIPWithOptions(const DescribeDTSIPRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestinationEndpointRegion()) {
    query["DestinationEndpointRegion"] = request.destinationEndpointRegion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceEndpointRegion()) {
    query["SourceEndpointRegion"] = request.sourceEndpointRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDTSIP"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDTSIPResponse>();
}

/**
 * @summary Queries the CIDR blocks of DTS servers.
 *
 * @param request DescribeDTSIPRequest
 * @return DescribeDTSIPResponse
 */
DescribeDTSIPResponse Client::describeDTSIP(const DescribeDTSIPRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDTSIPWithOptions(request, runtime);
}

/**
 * @summary Queries the download URL of the data consistency verification report.
 *
 * @param request DescribeDataCheckReportUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataCheckReportUrlResponse
 */
DescribeDataCheckReportUrlResponse Client::describeDataCheckReportUrlWithOptions(const DescribeDataCheckReportUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckType()) {
    query["CheckType"] = request.checkType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTbName()) {
    query["TbName"] = request.tbName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataCheckReportUrl"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataCheckReportUrlResponse>();
}

/**
 * @summary Queries the download URL of the data consistency verification report.
 *
 * @param request DescribeDataCheckReportUrlRequest
 * @return DescribeDataCheckReportUrlResponse
 */
DescribeDataCheckReportUrlResponse Client::describeDataCheckReportUrl(const DescribeDataCheckReportUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataCheckReportUrlWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a data verification task.
 *
 * @param request DescribeDataCheckTableDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataCheckTableDetailsResponse
 */
DescribeDataCheckTableDetailsResponse Client::describeDataCheckTableDetailsWithOptions(const DescribeDataCheckTableDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckType()) {
    query["CheckType"] = request.checkType();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.schemaName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataCheckTableDetails"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataCheckTableDetailsResponse>();
}

/**
 * @summary Queries the details of a data verification task.
 *
 * @param request DescribeDataCheckTableDetailsRequest
 * @return DescribeDataCheckTableDetailsResponse
 */
DescribeDataCheckTableDetailsResponse Client::describeDataCheckTableDetails(const DescribeDataCheckTableDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataCheckTableDetailsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about inconsistent data in the data verification task.
 *
 * @param request DescribeDataCheckTableDiffDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataCheckTableDiffDetailsResponse
 */
DescribeDataCheckTableDiffDetailsResponse Client::describeDataCheckTableDiffDetailsWithOptions(const DescribeDataCheckTableDiffDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckType()) {
    query["CheckType"] = request.checkType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTbName()) {
    query["TbName"] = request.tbName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataCheckTableDiffDetails"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataCheckTableDiffDetailsResponse>();
}

/**
 * @summary Queries the information about inconsistent data in the data verification task.
 *
 * @param request DescribeDataCheckTableDiffDetailsRequest
 * @return DescribeDataCheckTableDiffDetailsResponse
 */
DescribeDataCheckTableDiffDetailsResponse Client::describeDataCheckTableDiffDetails(const DescribeDataCheckTableDiffDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataCheckTableDiffDetailsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a dedicated cluster.
 *
 * @param request DescribeDedicatedClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDedicatedClusterResponse
 */
DescribeDedicatedClusterResponse Client::describeDedicatedClusterWithOptions(const DescribeDedicatedClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDedicatedClusterId()) {
    query["DedicatedClusterId"] = request.dedicatedClusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDedicatedCluster"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDedicatedClusterResponse>();
}

/**
 * @summary Queries the information about a dedicated cluster.
 *
 * @param request DescribeDedicatedClusterRequest
 * @return DescribeDedicatedClusterResponse
 */
DescribeDedicatedClusterResponse Client::describeDedicatedCluster(const DescribeDedicatedClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDedicatedClusterWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an alert rule.
 *
 * @param request DescribeDedicatedClusterMonitorRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDedicatedClusterMonitorRuleResponse
 */
DescribeDedicatedClusterMonitorRuleResponse Client::describeDedicatedClusterMonitorRuleWithOptions(const DescribeDedicatedClusterMonitorRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDedicatedClusterId()) {
    query["DedicatedClusterId"] = request.dedicatedClusterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDedicatedClusterMonitorRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDedicatedClusterMonitorRuleResponse>();
}

/**
 * @summary Queries the information about an alert rule.
 *
 * @param request DescribeDedicatedClusterMonitorRuleRequest
 * @return DescribeDedicatedClusterMonitorRuleResponse
 */
DescribeDedicatedClusterMonitorRuleResponse Client::describeDedicatedClusterMonitorRule(const DescribeDedicatedClusterMonitorRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDedicatedClusterMonitorRuleWithOptions(request, runtime);
}

/**
 * @summary 查看工作流任务结果
 *
 * @param request DescribeDocParserJobResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDocParserJobResultResponse
 */
DescribeDocParserJobResultResponse Client::describeDocParserJobResultWithOptions(const DescribeDocParserJobResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasRagInstanceId()) {
    query["RagInstanceId"] = request.ragInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDocParserJobResult"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDocParserJobResultResponse>();
}

/**
 * @summary 查看工作流任务结果
 *
 * @param request DescribeDocParserJobResultRequest
 * @return DescribeDocParserJobResultResponse
 */
DescribeDocParserJobResultResponse Client::describeDocParserJobResult(const DescribeDocParserJobResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDocParserJobResultWithOptions(request, runtime);
}

/**
 * @summary 查看工作流任务结果
 *
 * @param request DescribeDocParserJobStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDocParserJobStatusResponse
 */
DescribeDocParserJobStatusResponse Client::describeDocParserJobStatusWithOptions(const DescribeDocParserJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasRagInstanceId()) {
    query["RagInstanceId"] = request.ragInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDocParserJobStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDocParserJobStatusResponse>();
}

/**
 * @summary 查看工作流任务结果
 *
 * @param request DescribeDocParserJobStatusRequest
 * @return DescribeDocParserJobStatusResponse
 */
DescribeDocParserJobStatusResponse Client::describeDocParserJobStatus(const DescribeDocParserJobStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDocParserJobStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the details of extract, transform, and load (ETL) tasks.
 *
 * @param request DescribeDtsEtlJobVersionInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDtsEtlJobVersionInfoResponse
 */
DescribeDtsEtlJobVersionInfoResponse Client::describeDtsEtlJobVersionInfoWithOptions(const DescribeDtsEtlJobVersionInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDtsEtlJobVersionInfo"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDtsEtlJobVersionInfoResponse>();
}

/**
 * @summary Queries the details of extract, transform, and load (ETL) tasks.
 *
 * @param request DescribeDtsEtlJobVersionInfoRequest
 * @return DescribeDtsEtlJobVersionInfoResponse
 */
DescribeDtsEtlJobVersionInfoResponse Client::describeDtsEtlJobVersionInfo(const DescribeDtsEtlJobVersionInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDtsEtlJobVersionInfoWithOptions(request, runtime);
}

/**
 * @summary 查询DTS任务配置
 *
 * @param request DescribeDtsJobConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDtsJobConfigResponse
 */
DescribeDtsJobConfigResponse Client::describeDtsJobConfigWithOptions(const DescribeDtsJobConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasForAcceleration()) {
    query["ForAcceleration"] = request.forAcceleration();
  }

  if (!!request.hasModule()) {
    query["Module"] = request.module();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDtsJobConfig"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDtsJobConfigResponse>();
}

/**
 * @summary 查询DTS任务配置
 *
 * @param request DescribeDtsJobConfigRequest
 * @return DescribeDtsJobConfigResponse
 */
DescribeDtsJobConfigResponse Client::describeDtsJobConfig(const DescribeDtsJobConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDtsJobConfigWithOptions(request, runtime);
}

/**
 * @summary The latency of incremental data migration or synchronization.
 * \\\\\\\\\\>  If you query data migration tasks, the unit of this parameter is milliseconds. If you query data synchronization tasks, the unit of this parameter is seconds.
 *
 * @param request DescribeDtsJobDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDtsJobDetailResponse
 */
DescribeDtsJobDetailResponse Client::describeDtsJobDetailWithOptions(const DescribeDtsJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsInstanceID()) {
    query["DtsInstanceID"] = request.dtsInstanceID();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSyncSubJobHistory()) {
    query["SyncSubJobHistory"] = request.syncSubJobHistory();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDtsJobDetail"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDtsJobDetailResponse>();
}

/**
 * @summary The latency of incremental data migration or synchronization.
 * \\\\\\\\\\>  If you query data migration tasks, the unit of this parameter is milliseconds. If you query data synchronization tasks, the unit of this parameter is seconds.
 *
 * @param request DescribeDtsJobDetailRequest
 * @return DescribeDtsJobDetailResponse
 */
DescribeDtsJobDetailResponse Client::describeDtsJobDetail(const DescribeDtsJobDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDtsJobDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the list of Data Transmission Service (DTS) tasks and the details of each task.
 *
 * @description ## Debugging
 * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=Dts\\&api=DescribeDtsJobs\\&type=RPC\\&version=2020-01-01)
 *
 * @param request DescribeDtsJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDtsJobsResponse
 */
DescribeDtsJobsResponse Client::describeDtsJobsWithOptions(const DescribeDtsJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDedicatedClusterId()) {
    query["DedicatedClusterId"] = request.dedicatedClusterId();
  }

  if (!!request.hasDestProductType()) {
    query["DestProductType"] = request.destProductType();
  }

  if (!!request.hasDtsBisLabel()) {
    query["DtsBisLabel"] = request.dtsBisLabel();
  }

  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.groupId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.jobType();
  }

  if (!!request.hasOrderColumn()) {
    query["OrderColumn"] = request.orderColumn();
  }

  if (!!request.hasOrderDirection()) {
    query["OrderDirection"] = request.orderDirection();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSrcProductType()) {
    query["SrcProductType"] = request.srcProductType();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasWithoutDbList()) {
    query["WithoutDbList"] = request.withoutDbList();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDtsJobs"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDtsJobsResponse>();
}

/**
 * @summary Queries the list of Data Transmission Service (DTS) tasks and the details of each task.
 *
 * @description ## Debugging
 * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=Dts\\&api=DescribeDtsJobs\\&type=RPC\\&version=2020-01-01)
 *
 * @param request DescribeDtsJobsRequest
 * @return DescribeDtsJobsResponse
 */
DescribeDtsJobsResponse Client::describeDtsJobs(const DescribeDtsJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDtsJobsWithOptions(request, runtime);
}

/**
 * @summary Queries the logs of a data migration or synchronization task.
 *
 * @param request DescribeDtsServiceLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDtsServiceLogResponse
 */
DescribeDtsServiceLogResponse Client::describeDtsServiceLogWithOptions(const DescribeDtsServiceLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasSubJobType()) {
    query["SubJobType"] = request.subJobType();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDtsServiceLog"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDtsServiceLogResponse>();
}

/**
 * @summary Queries the logs of a data migration or synchronization task.
 *
 * @param request DescribeDtsServiceLogRequest
 * @return DescribeDtsServiceLogResponse
 */
DescribeDtsServiceLogResponse Client::describeDtsServiceLog(const DescribeDtsServiceLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDtsServiceLogWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the task that changes the database connection settings.
 *
 * @param request DescribeEndpointSwitchStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEndpointSwitchStatusResponse
 */
DescribeEndpointSwitchStatusResponse Client::describeEndpointSwitchStatusWithOptions(const DescribeEndpointSwitchStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEndpointSwitchStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEndpointSwitchStatusResponse>();
}

/**
 * @summary Queries the status of the task that changes the database connection settings.
 *
 * @param request DescribeEndpointSwitchStatusRequest
 * @return DescribeEndpointSwitchStatusResponse
 */
DescribeEndpointSwitchStatusResponse Client::describeEndpointSwitchStatus(const DescribeEndpointSwitchStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEndpointSwitchStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the logs of extract, transform, and load (ETL) tasks.
 *
 * @param request DescribeEtlJobLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEtlJobLogsResponse
 */
DescribeEtlJobLogsResponse Client::describeEtlJobLogsWithOptions(const DescribeEtlJobLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEtlJobLogs"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEtlJobLogsResponse>();
}

/**
 * @summary Queries the logs of extract, transform, and load (ETL) tasks.
 *
 * @param request DescribeEtlJobLogsRequest
 * @return DescribeEtlJobLogsResponse
 */
DescribeEtlJobLogsResponse Client::describeEtlJobLogs(const DescribeEtlJobLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEtlJobLogsWithOptions(request, runtime);
}

/**
 * @summary Queries full data migration tasks.
 *
 * @param request DescribeFullProcessListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFullProcessListResponse
 */
DescribeFullProcessListResponse Client::describeFullProcessListWithOptions(const DescribeFullProcessListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFullProcessList"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFullProcessListResponse>();
}

/**
 * @summary Queries full data migration tasks.
 *
 * @param request DescribeFullProcessListRequest
 * @return DescribeFullProcessListResponse
 */
DescribeFullProcessListResponse Client::describeFullProcessList(const DescribeFullProcessListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFullProcessListWithOptions(request, runtime);
}

/**
 * @summary 查询GAD实例列表
 *
 * @param request DescribeGadInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGadInstancesResponse
 */
DescribeGadInstancesResponse Client::describeGadInstancesWithOptions(const DescribeGadInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbEngineTypes()) {
    query["DbEngineTypes"] = request.dbEngineTypes();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasMasterDbInstanceId()) {
    query["MasterDbInstanceId"] = request.masterDbInstanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSlaveDbInstanceId()) {
    query["SlaveDbInstanceId"] = request.slaveDbInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGadInstances"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGadInstancesResponse>();
}

/**
 * @summary 查询GAD实例列表
 *
 * @param request DescribeGadInstancesRequest
 * @return DescribeGadInstancesResponse
 */
DescribeGadInstancesResponse Client::describeGadInstances(const DescribeGadInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGadInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of initial data synchronization, including the information about the schemas and historical data of the object to be synchronized.
 *
 * @param request DescribeInitializationStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInitializationStatusResponse
 */
DescribeInitializationStatusResponse Client::describeInitializationStatusWithOptions(const DescribeInitializationStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationJobId()) {
    query["SynchronizationJobId"] = request.synchronizationJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInitializationStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInitializationStatusResponse>();
}

/**
 * @summary Queries the details of initial data synchronization, including the information about the schemas and historical data of the object to be synchronized.
 *
 * @param request DescribeInitializationStatusRequest
 * @return DescribeInitializationStatusResponse
 */
DescribeInitializationStatusResponse Client::describeInitializationStatus(const DescribeInitializationStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInitializationStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the monitoring rules of a Data Transmission Service (DTS) task.
 *
 * @param request DescribeJobMonitorRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeJobMonitorRuleResponse
 */
DescribeJobMonitorRuleResponse Client::describeJobMonitorRuleWithOptions(const DescribeJobMonitorRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeJobMonitorRule"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeJobMonitorRuleResponse>();
}

/**
 * @summary Queries the monitoring rules of a Data Transmission Service (DTS) task.
 *
 * @param request DescribeJobMonitorRuleRequest
 * @return DescribeJobMonitorRuleResponse
 */
DescribeJobMonitorRuleResponse Client::describeJobMonitorRule(const DescribeJobMonitorRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeJobMonitorRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the metrics of a cluster.
 *
 * @param request DescribeMetricListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricListResponse
 */
DescribeMetricListResponse Client::describeMetricListWithOptions(const DescribeMetricListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  json body = {};
  if (!!request.hasAccountId()) {
    body["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDtsJobId()) {
    body["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasEnv()) {
    body["Env"] = request.env();
  }

  if (!!request.hasMetricName()) {
    body["MetricName"] = request.metricName();
  }

  if (!!request.hasMetricType()) {
    body["MetricType"] = request.metricType();
  }

  if (!!request.hasOwnerID()) {
    body["OwnerID"] = request.ownerID();
  }

  if (!!request.hasParam()) {
    body["Param"] = request.param();
  }

  if (!!request.hasPeriod()) {
    body["Period"] = request.period();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DescribeMetricList"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetricListResponse>();
}

/**
 * @summary Queries the metrics of a cluster.
 *
 * @param request DescribeMetricListRequest
 * @return DescribeMetricListResponse
 */
DescribeMetricListResponse Client::describeMetricList(const DescribeMetricListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMetricListWithOptions(request, runtime);
}

/**
 * @summary Queries the alert settings of a data migration instance.
 *
 * @param request DescribeMigrationJobAlertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMigrationJobAlertResponse
 */
DescribeMigrationJobAlertResponse Client::describeMigrationJobAlertWithOptions(const DescribeMigrationJobAlertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasMigrationJobId()) {
    query["MigrationJobId"] = request.migrationJobId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMigrationJobAlert"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMigrationJobAlertResponse>();
}

/**
 * @summary Queries the alert settings of a data migration instance.
 *
 * @param request DescribeMigrationJobAlertRequest
 * @return DescribeMigrationJobAlertResponse
 */
DescribeMigrationJobAlertResponse Client::describeMigrationJobAlert(const DescribeMigrationJobAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMigrationJobAlertWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a data migration task.
 *
 * @param request DescribeMigrationJobDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMigrationJobDetailResponse
 */
DescribeMigrationJobDetailResponse Client::describeMigrationJobDetailWithOptions(const DescribeMigrationJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasMigrationJobId()) {
    query["MigrationJobId"] = request.migrationJobId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasMigrationMode()) {
    query["MigrationMode"] = request.migrationMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMigrationJobDetail"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMigrationJobDetailResponse>();
}

/**
 * @summary Queries the details of a data migration task.
 *
 * @param request DescribeMigrationJobDetailRequest
 * @return DescribeMigrationJobDetailResponse
 */
DescribeMigrationJobDetailResponse Client::describeMigrationJobDetail(const DescribeMigrationJobDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMigrationJobDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a data migration task.
 *
 * @param request DescribeMigrationJobStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMigrationJobStatusResponse
 */
DescribeMigrationJobStatusResponse Client::describeMigrationJobStatusWithOptions(const DescribeMigrationJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasMigrationJobId()) {
    query["MigrationJobId"] = request.migrationJobId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMigrationJobStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMigrationJobStatusResponse>();
}

/**
 * @summary Queries the status of a data migration task.
 *
 * @param request DescribeMigrationJobStatusRequest
 * @return DescribeMigrationJobStatusResponse
 */
DescribeMigrationJobStatusResponse Client::describeMigrationJobStatus(const DescribeMigrationJobStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMigrationJobStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the list of data migration instances and the details of each instance.
 *
 * @param request DescribeMigrationJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMigrationJobsResponse
 */
DescribeMigrationJobsResponse Client::describeMigrationJobsWithOptions(const DescribeMigrationJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasMigrationJobName()) {
    query["MigrationJobName"] = request.migrationJobName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMigrationJobs"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMigrationJobsResponse>();
}

/**
 * @summary Queries the list of data migration instances and the details of each instance.
 *
 * @param request DescribeMigrationJobsRequest
 * @return DescribeMigrationJobsResponse
 */
DescribeMigrationJobsResponse Client::describeMigrationJobs(const DescribeMigrationJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMigrationJobsWithOptions(request, runtime);
}

/**
 * @summary 查询预检查创建GAD订单任务结果
 *
 * @param request DescribePreCheckCreateGadOrderResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePreCheckCreateGadOrderResultResponse
 */
DescribePreCheckCreateGadOrderResultResponse Client::describePreCheckCreateGadOrderResultWithOptions(const DescribePreCheckCreateGadOrderResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePreCheckCreateGadOrderResult"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePreCheckCreateGadOrderResultResponse>();
}

/**
 * @summary 查询预检查创建GAD订单任务结果
 *
 * @param request DescribePreCheckCreateGadOrderResultRequest
 * @return DescribePreCheckCreateGadOrderResultResponse
 */
DescribePreCheckCreateGadOrderResultResponse Client::describePreCheckCreateGadOrderResult(const DescribePreCheckCreateGadOrderResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePreCheckCreateGadOrderResultWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a Data Transmission Service (DTS) subtask that performs precheck, schema migration, initial schema synchronization, full data migration, initial full data synchronization, incremental data migration, or incremental data synchronization.
 *
 * @param request DescribePreCheckStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePreCheckStatusResponse
 */
DescribePreCheckStatusResponse Client::describePreCheckStatusWithOptions(const DescribePreCheckStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasJobCode()) {
    query["JobCode"] = request.jobCode();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStructPhase()) {
    query["StructPhase"] = request.structPhase();
  }

  if (!!request.hasStructType()) {
    query["StructType"] = request.structType();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePreCheckStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePreCheckStatusResponse>();
}

/**
 * @summary Queries the status of a Data Transmission Service (DTS) subtask that performs precheck, schema migration, initial schema synchronization, full data migration, initial full data synchronization, incremental data migration, or incremental data synchronization.
 *
 * @param request DescribePreCheckStatusRequest
 * @return DescribePreCheckStatusResponse
 */
DescribePreCheckStatusResponse Client::describePreCheckStatus(const DescribePreCheckStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePreCheckStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the alert settings of a change tracking instance.
 *
 * @param request DescribeSubscriptionInstanceAlertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSubscriptionInstanceAlertResponse
 */
DescribeSubscriptionInstanceAlertResponse Client::describeSubscriptionInstanceAlertWithOptions(const DescribeSubscriptionInstanceAlertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSubscriptionInstanceId()) {
    query["SubscriptionInstanceId"] = request.subscriptionInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSubscriptionInstanceAlert"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSubscriptionInstanceAlertResponse>();
}

/**
 * @summary Queries the alert settings of a change tracking instance.
 *
 * @param request DescribeSubscriptionInstanceAlertRequest
 * @return DescribeSubscriptionInstanceAlertResponse
 */
DescribeSubscriptionInstanceAlertResponse Client::describeSubscriptionInstanceAlert(const DescribeSubscriptionInstanceAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSubscriptionInstanceAlertWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a change tracking instance.
 *
 * @param request DescribeSubscriptionInstanceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSubscriptionInstanceStatusResponse
 */
DescribeSubscriptionInstanceStatusResponse Client::describeSubscriptionInstanceStatusWithOptions(const DescribeSubscriptionInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSubscriptionInstanceId()) {
    query["SubscriptionInstanceId"] = request.subscriptionInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSubscriptionInstanceStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSubscriptionInstanceStatusResponse>();
}

/**
 * @summary Queries the status of a change tracking instance.
 *
 * @param request DescribeSubscriptionInstanceStatusRequest
 * @return DescribeSubscriptionInstanceStatusResponse
 */
DescribeSubscriptionInstanceStatusResponse Client::describeSubscriptionInstanceStatus(const DescribeSubscriptionInstanceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSubscriptionInstanceStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the list of change tracking instances and the details of each instance.
 *
 * @param request DescribeSubscriptionInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSubscriptionInstancesResponse
 */
DescribeSubscriptionInstancesResponse Client::describeSubscriptionInstancesWithOptions(const DescribeSubscriptionInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSubscriptionInstanceName()) {
    query["SubscriptionInstanceName"] = request.subscriptionInstanceName();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSubscriptionInstances"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSubscriptionInstancesResponse>();
}

/**
 * @summary Queries the list of change tracking instances and the details of each instance.
 *
 * @param request DescribeSubscriptionInstancesRequest
 * @return DescribeSubscriptionInstancesResponse
 */
DescribeSubscriptionInstancesResponse Client::describeSubscriptionInstances(const DescribeSubscriptionInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSubscriptionInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the subtasks in a distributed change tracking task for a PolarDB-X 1.0 instance.
 *
 * @description *   When Data Transmission Service (DTS) tracks data changes from a PolarDB-X 1.0 instance, data is distributed across the attached ApsaraDB RDS for MySQL instances. DTS runs a subtask for each ApsaraDB RDS for MySQL instance. You can call this operation to query the details of the subtasks in a distributed change tracking task.
 * *   You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the ID of the change tracking instance and the ID of the consumer group.
 *
 * @param tmpReq DescribeSubscriptionMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSubscriptionMetaResponse
 */
DescribeSubscriptionMetaResponse Client::describeSubscriptionMetaWithOptions(const DescribeSubscriptionMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeSubscriptionMetaShrinkRequest request = DescribeSubscriptionMetaShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSubMigrationJobIds()) {
    request.setSubMigrationJobIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.subMigrationJobIds(), "SubMigrationJobIds", "json"));
  }

  if (!!tmpReq.hasTopics()) {
    request.setTopicsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.topics(), "Topics", "json"));
  }

  json query = {};
  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSid()) {
    query["Sid"] = request.sid();
  }

  if (!!request.hasSubMigrationJobIdsShrink()) {
    query["SubMigrationJobIds"] = request.subMigrationJobIdsShrink();
  }

  if (!!request.hasTopicsShrink()) {
    query["Topics"] = request.topicsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSubscriptionMeta"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSubscriptionMetaResponse>();
}

/**
 * @summary Queries the details of the subtasks in a distributed change tracking task for a PolarDB-X 1.0 instance.
 *
 * @description *   When Data Transmission Service (DTS) tracks data changes from a PolarDB-X 1.0 instance, data is distributed across the attached ApsaraDB RDS for MySQL instances. DTS runs a subtask for each ApsaraDB RDS for MySQL instance. You can call this operation to query the details of the subtasks in a distributed change tracking task.
 * *   You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the ID of the change tracking instance and the ID of the consumer group.
 *
 * @param request DescribeSubscriptionMetaRequest
 * @return DescribeSubscriptionMetaResponse
 */
DescribeSubscriptionMetaResponse Client::describeSubscriptionMeta(const DescribeSubscriptionMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSubscriptionMetaWithOptions(request, runtime);
}

/**
 * @summary 查看同步和迁移任务的增量写入延迟信息
 *
 * @param request DescribeSyncStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSyncStatusResponse
 */
DescribeSyncStatusResponse Client::describeSyncStatusWithOptions(const DescribeSyncStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSyncStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSyncStatusResponse>();
}

/**
 * @summary 查看同步和迁移任务的增量写入延迟信息
 *
 * @param request DescribeSyncStatusRequest
 * @return DescribeSyncStatusResponse
 */
DescribeSyncStatusResponse Client::describeSyncStatus(const DescribeSyncStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSyncStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the alert settings of a data synchronization instance.
 *
 * @param request DescribeSynchronizationJobAlertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSynchronizationJobAlertResponse
 */
DescribeSynchronizationJobAlertResponse Client::describeSynchronizationJobAlertWithOptions(const DescribeSynchronizationJobAlertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  if (!!request.hasSynchronizationJobId()) {
    query["SynchronizationJobId"] = request.synchronizationJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSynchronizationJobAlert"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSynchronizationJobAlertResponse>();
}

/**
 * @summary Queries the alert settings of a data synchronization instance.
 *
 * @param request DescribeSynchronizationJobAlertRequest
 * @return DescribeSynchronizationJobAlertResponse
 */
DescribeSynchronizationJobAlertResponse Client::describeSynchronizationJobAlert(const DescribeSynchronizationJobAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSynchronizationJobAlertWithOptions(request, runtime);
}

/**
 * @summary Queries whether image matching is enabled for a data synchronization instance.
 *
 * @param request DescribeSynchronizationJobReplicatorCompareRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSynchronizationJobReplicatorCompareResponse
 */
DescribeSynchronizationJobReplicatorCompareResponse Client::describeSynchronizationJobReplicatorCompareWithOptions(const DescribeSynchronizationJobReplicatorCompareRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  if (!!request.hasSynchronizationJobId()) {
    query["SynchronizationJobId"] = request.synchronizationJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSynchronizationJobReplicatorCompare"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSynchronizationJobReplicatorCompareResponse>();
}

/**
 * @summary Queries whether image matching is enabled for a data synchronization instance.
 *
 * @param request DescribeSynchronizationJobReplicatorCompareRequest
 * @return DescribeSynchronizationJobReplicatorCompareResponse
 */
DescribeSynchronizationJobReplicatorCompareResponse Client::describeSynchronizationJobReplicatorCompare(const DescribeSynchronizationJobReplicatorCompareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSynchronizationJobReplicatorCompareWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a data synchronization instance.
 *
 * @param request DescribeSynchronizationJobStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSynchronizationJobStatusResponse
 */
DescribeSynchronizationJobStatusResponse Client::describeSynchronizationJobStatusWithOptions(const DescribeSynchronizationJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  if (!!request.hasSynchronizationJobId()) {
    query["SynchronizationJobId"] = request.synchronizationJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSynchronizationJobStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSynchronizationJobStatusResponse>();
}

/**
 * @summary Queries the status of a data synchronization instance.
 *
 * @param request DescribeSynchronizationJobStatusRequest
 * @return DescribeSynchronizationJobStatusResponse
 */
DescribeSynchronizationJobStatusResponse Client::describeSynchronizationJobStatus(const DescribeSynchronizationJobStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSynchronizationJobStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the status of one or more data synchronization instances.
 *
 * @param request DescribeSynchronizationJobStatusListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSynchronizationJobStatusListResponse
 */
DescribeSynchronizationJobStatusListResponse Client::describeSynchronizationJobStatusListWithOptions(const DescribeSynchronizationJobStatusListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationJobIdListJsonStr()) {
    query["SynchronizationJobIdListJsonStr"] = request.synchronizationJobIdListJsonStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSynchronizationJobStatusList"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSynchronizationJobStatusListResponse>();
}

/**
 * @summary Queries the status of one or more data synchronization instances.
 *
 * @param request DescribeSynchronizationJobStatusListRequest
 * @return DescribeSynchronizationJobStatusListResponse
 */
DescribeSynchronizationJobStatusListResponse Client::describeSynchronizationJobStatusList(const DescribeSynchronizationJobStatusListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSynchronizationJobStatusListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of data synchronization instances and the details of each instance.
 *
 * @param request DescribeSynchronizationJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSynchronizationJobsResponse
 */
DescribeSynchronizationJobsResponse Client::describeSynchronizationJobsWithOptions(const DescribeSynchronizationJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationJobName()) {
    query["SynchronizationJobName"] = request.synchronizationJobName();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSynchronizationJobs"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSynchronizationJobsResponse>();
}

/**
 * @summary Queries the list of data synchronization instances and the details of each instance.
 *
 * @param request DescribeSynchronizationJobsRequest
 * @return DescribeSynchronizationJobsResponse
 */
DescribeSynchronizationJobsResponse Client::describeSynchronizationJobs(const DescribeSynchronizationJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSynchronizationJobsWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the task that changes the objects to be synchronized.
 *
 * @param request DescribeSynchronizationObjectModifyStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSynchronizationObjectModifyStatusResponse
 */
DescribeSynchronizationObjectModifyStatusResponse Client::describeSynchronizationObjectModifyStatusWithOptions(const DescribeSynchronizationObjectModifyStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSynchronizationObjectModifyStatus"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSynchronizationObjectModifyStatusResponse>();
}

/**
 * @summary Queries the status of the task that changes the objects to be synchronized.
 *
 * @param request DescribeSynchronizationObjectModifyStatusRequest
 * @return DescribeSynchronizationObjectModifyStatusResponse
 */
DescribeSynchronizationObjectModifyStatusResponse Client::describeSynchronizationObjectModifyStatus(const DescribeSynchronizationObjectModifyStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSynchronizationObjectModifyStatusWithOptions(request, runtime);
}

/**
 * @summary Queries all the tags added to a data migration, data synchronization, or change tracking instance.
 *
 * @param request DescribeTagKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagKeysResponse
 */
DescribeTagKeysResponse Client::describeTagKeysWithOptions(const DescribeTagKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagKeys"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagKeysResponse>();
}

/**
 * @summary Queries all the tags added to a data migration, data synchronization, or change tracking instance.
 *
 * @param request DescribeTagKeysRequest
 * @return DescribeTagKeysResponse
 */
DescribeTagKeysResponse Client::describeTagKeys(const DescribeTagKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagKeysWithOptions(request, runtime);
}

/**
 * @summary Queries all the tag values of a tag bound to a data migration, data synchronization, or change tracking instance.
 *
 * @param request DescribeTagValuesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagValuesResponse
 */
DescribeTagValuesResponse Client::describeTagValuesWithOptions(const DescribeTagValuesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagValues"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagValuesResponse>();
}

/**
 * @summary Queries all the tag values of a tag bound to a data migration, data synchronization, or change tracking instance.
 *
 * @param request DescribeTagValuesRequest
 * @return DescribeTagValuesResponse
 */
DescribeTagValuesResponse Client::describeTagValues(const DescribeTagValuesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagValuesWithOptions(request, runtime);
}

/**
 * @summary 移除从角色
 *
 * @param request DetachGadInstanceDbMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachGadInstanceDbMemberResponse
 */
DetachGadInstanceDbMemberResponse Client::detachGadInstanceDbMemberWithOptions(const DetachGadInstanceDbMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSlaveDbInstanceId()) {
    query["SlaveDbInstanceId"] = request.slaveDbInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachGadInstanceDbMember"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachGadInstanceDbMemberResponse>();
}

/**
 * @summary 移除从角色
 *
 * @param request DetachGadInstanceDbMemberRequest
 * @return DetachGadInstanceDbMemberResponse
 */
DetachGadInstanceDbMemberResponse Client::detachGadInstanceDbMember(const DetachGadInstanceDbMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachGadInstanceDbMemberWithOptions(request, runtime);
}

/**
 * @summary Initializes a built-in account on a node of an active geo-redundancy database cluster. Data Transmission Service (DTS) uses the built-in account to connect to the node and perform data synchronization tasks.
 *
 * @description *   The node must be an ApsaraDB RDS for MySQL instance or a self-managed MySQL database that is connected over Cloud Enterprise Network (CEN).
 * *   This operation is used to initialize the built-in account named rdsdt_dtsacct on a node of an active geo-redundancy database cluster. DTS uses this account to connect to the node and perform data synchronization tasks.
 *
 * @param request InitDtsRdsInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InitDtsRdsInstanceResponse
 */
InitDtsRdsInstanceResponse Client::initDtsRdsInstanceWithOptions(const InitDtsRdsInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasEndpointCenId()) {
    query["EndpointCenId"] = request.endpointCenId();
  }

  if (!!request.hasEndpointInstanceId()) {
    query["EndpointInstanceId"] = request.endpointInstanceId();
  }

  if (!!request.hasEndpointInstanceType()) {
    query["EndpointInstanceType"] = request.endpointInstanceType();
  }

  if (!!request.hasEndpointRegion()) {
    query["EndpointRegion"] = request.endpointRegion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InitDtsRdsInstance"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InitDtsRdsInstanceResponse>();
}

/**
 * @summary Initializes a built-in account on a node of an active geo-redundancy database cluster. Data Transmission Service (DTS) uses the built-in account to connect to the node and perform data synchronization tasks.
 *
 * @description *   The node must be an ApsaraDB RDS for MySQL instance or a self-managed MySQL database that is connected over Cloud Enterprise Network (CEN).
 * *   This operation is used to initialize the built-in account named rdsdt_dtsacct on a node of an active geo-redundancy database cluster. DTS uses this account to connect to the node and perform data synchronization tasks.
 *
 * @param request InitDtsRdsInstanceRequest
 * @return InitDtsRdsInstanceResponse
 */
InitDtsRdsInstanceResponse Client::initDtsRdsInstance(const InitDtsRdsInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return initDtsRdsInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries all clusters that are created within an Alibaba Cloud account. You can also query clusters based on the specified conditions.
 *
 * @param request ListDedicatedClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDedicatedClusterResponse
 */
ListDedicatedClusterResponse Client::listDedicatedClusterWithOptions(const ListDedicatedClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderColumn()) {
    query["OrderColumn"] = request.orderColumn();
  }

  if (!!request.hasOrderDirection()) {
    query["OrderDirection"] = request.orderDirection();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDedicatedCluster"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDedicatedClusterResponse>();
}

/**
 * @summary Queries all clusters that are created within an Alibaba Cloud account. You can also query clusters based on the specified conditions.
 *
 * @param request ListDedicatedClusterRequest
 * @return ListDedicatedClusterResponse
 */
ListDedicatedClusterResponse Client::listDedicatedCluster(const ListDedicatedClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDedicatedClusterWithOptions(request, runtime);
}

/**
 * @summary 查询JobStep列表。
 *
 * @param request ListJobStepRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobStepResponse
 */
ListJobStepResponse Client::listJobStepWithOptions(const ListJobStepRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobStep"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobStepResponse>();
}

/**
 * @summary 查询JobStep列表。
 *
 * @param request ListJobStepRequest
 * @return ListJobStepResponse
 */
ListJobStepResponse Client::listJobStep(const ListJobStepRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobStepWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are bound to specific data migration, data synchronization, or change tracking instances, or queries the instances to which specific tags are bound.
 *
 * @description ****
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the tags that are bound to specific data migration, data synchronization, or change tracking instances, or queries the instances to which specific tags are bound.
 *
 * @description ****
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modifies the information of a consumer group, including the consumer group name, username, and password.
 *
 * @param request ModifyConsumerChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyConsumerChannelResponse
 */
ModifyConsumerChannelResponse Client::modifyConsumerChannelWithOptions(const ModifyConsumerChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConsumerGroupId()) {
    query["ConsumerGroupId"] = request.consumerGroupId();
  }

  if (!!request.hasConsumerGroupName()) {
    query["ConsumerGroupName"] = request.consumerGroupName();
  }

  if (!!request.hasConsumerGroupPassword()) {
    query["ConsumerGroupPassword"] = request.consumerGroupPassword();
  }

  if (!!request.hasConsumerGroupUserName()) {
    query["ConsumerGroupUserName"] = request.consumerGroupUserName();
  }

  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyConsumerChannel"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyConsumerChannelResponse>();
}

/**
 * @summary Modifies the information of a consumer group, including the consumer group name, username, and password.
 *
 * @param request ModifyConsumerChannelRequest
 * @return ModifyConsumerChannelResponse
 */
ModifyConsumerChannelResponse Client::modifyConsumerChannel(const ModifyConsumerChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyConsumerChannelWithOptions(request, runtime);
}

/**
 * @summary Modifies the password of a consumer group
 *
 * @param request ModifyConsumerGroupPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyConsumerGroupPasswordResponse
 */
ModifyConsumerGroupPasswordResponse Client::modifyConsumerGroupPasswordWithOptions(const ModifyConsumerGroupPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasConsumerGroupID()) {
    query["ConsumerGroupID"] = request.consumerGroupID();
  }

  if (!!request.hasConsumerGroupName()) {
    query["ConsumerGroupName"] = request.consumerGroupName();
  }

  if (!!request.hasConsumerGroupPassword()) {
    query["ConsumerGroupPassword"] = request.consumerGroupPassword();
  }

  if (!!request.hasConsumerGroupUserName()) {
    query["ConsumerGroupUserName"] = request.consumerGroupUserName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSubscriptionInstanceId()) {
    query["SubscriptionInstanceId"] = request.subscriptionInstanceId();
  }

  if (!!request.hasConsumerGroupNewPassword()) {
    query["consumerGroupNewPassword"] = request.consumerGroupNewPassword();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyConsumerGroupPassword"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyConsumerGroupPasswordResponse>();
}

/**
 * @summary Modifies the password of a consumer group
 *
 * @param request ModifyConsumerGroupPasswordRequest
 * @return ModifyConsumerGroupPasswordResponse
 */
ModifyConsumerGroupPasswordResponse Client::modifyConsumerGroupPassword(const ModifyConsumerGroupPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyConsumerGroupPasswordWithOptions(request, runtime);
}

/**
 * @summary Modifies the consumption checkpoint of a change tracking instance.
 *
 * @param request ModifyConsumptionTimestampRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyConsumptionTimestampResponse
 */
ModifyConsumptionTimestampResponse Client::modifyConsumptionTimestampWithOptions(const ModifyConsumptionTimestampRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasConsumptionTimestamp()) {
    query["ConsumptionTimestamp"] = request.consumptionTimestamp();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSubscriptionInstanceId()) {
    query["SubscriptionInstanceId"] = request.subscriptionInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyConsumptionTimestamp"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyConsumptionTimestampResponse>();
}

/**
 * @summary Modifies the consumption checkpoint of a change tracking instance.
 *
 * @param request ModifyConsumptionTimestampRequest
 * @return ModifyConsumptionTimestampResponse
 */
ModifyConsumptionTimestampResponse Client::modifyConsumptionTimestamp(const ModifyConsumptionTimestampRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyConsumptionTimestampWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of a cluster.
 *
 * @description You can modify only the overcommit ratio.
 *
 * @param request ModifyDedicatedClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDedicatedClusterResponse
 */
ModifyDedicatedClusterResponse Client::modifyDedicatedClusterWithOptions(const ModifyDedicatedClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDedicatedClusterId()) {
    query["DedicatedClusterId"] = request.dedicatedClusterId();
  }

  if (!!request.hasDedicatedClusterName()) {
    query["DedicatedClusterName"] = request.dedicatedClusterName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOversoldRatio()) {
    query["OversoldRatio"] = request.oversoldRatio();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDedicatedCluster"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDedicatedClusterResponse>();
}

/**
 * @summary Modifies the configuration of a cluster.
 *
 * @description You can modify only the overcommit ratio.
 *
 * @param request ModifyDedicatedClusterRequest
 * @return ModifyDedicatedClusterResponse
 */
ModifyDedicatedClusterResponse Client::modifyDedicatedCluster(const ModifyDedicatedClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDedicatedClusterWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a data synchronization task.
 *
 * @description When you configure a data synchronization task in the Data Transmission Service (DTS) console, you can move the pointer over **Next: Save Task Settings and Precheck** in the **Advanced Settings** step and click **Preview OpenAPI parameters** to view the parameters that are used to configure the task by calling an API operation.
 *
 * @param tmpReq ModifyDtsJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDtsJobResponse
 */
ModifyDtsJobResponse Client::modifyDtsJobWithOptions(const ModifyDtsJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyDtsJobShrinkRequest request = ModifyDtsJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDbList()) {
    request.setDbListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dbList(), "DbList", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDataInitialization()) {
    query["DataInitialization"] = request.dataInitialization();
  }

  if (!!request.hasDataSynchronization()) {
    query["DataSynchronization"] = request.dataSynchronization();
  }

  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasFileOssUrl()) {
    query["FileOssUrl"] = request.fileOssUrl();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStructureInitialization()) {
    query["StructureInitialization"] = request.structureInitialization();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  json body = {};
  if (!!request.hasDbListShrink()) {
    body["DbList"] = request.dbListShrink();
  }

  if (!!request.hasEtlOperatorColumnReference()) {
    body["EtlOperatorColumnReference"] = request.etlOperatorColumnReference();
  }

  if (!!request.hasFilterTableName()) {
    body["FilterTableName"] = request.filterTableName();
  }

  if (!!request.hasModifyTypeEnum()) {
    body["ModifyTypeEnum"] = request.modifyTypeEnum();
  }

  if (!!request.hasReserved()) {
    body["Reserved"] = request.reserved();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyDtsJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDtsJobResponse>();
}

/**
 * @summary Modifies the configurations of a data synchronization task.
 *
 * @description When you configure a data synchronization task in the Data Transmission Service (DTS) console, you can move the pointer over **Next: Save Task Settings and Precheck** in the **Advanced Settings** step and click **Preview OpenAPI parameters** to view the parameters that are used to configure the task by calling an API operation.
 *
 * @param request ModifyDtsJobRequest
 * @return ModifyDtsJobResponse
 */
ModifyDtsJobResponse Client::modifyDtsJob(const ModifyDtsJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDtsJobWithOptions(request, runtime);
}

ModifyDtsJobResponse Client::modifyDtsJobAdvance(const ModifyDtsJobAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
  string openPlatformEndpoint = _openPlatformEndpoint;
  if (Darabonba::isNull(openPlatformEndpoint) || openPlatformEndpoint == "") {
    openPlatformEndpoint = "openplatform.aliyuncs.com";
  }

  if (Darabonba::isNull(credentialType)) {
    credentialType = "access_key";
  }

  AlibabaCloud::OpenApi::Utils::Models::Config authConfig = AlibabaCloud::OpenApi::Utils::Models::Config(json({
    {"accessKeyId" , accessKeyId},
    {"accessKeySecret" , accessKeySecret},
    {"securityToken" , securityToken},
    {"type" , credentialType},
    {"endpoint" , openPlatformEndpoint},
    {"protocol" , _protocol},
    {"regionId" , _regionId}
  }).get<map<string, string>>());
  shared_ptr<OpenApiClient> authClient = make_shared<OpenApiClient>(authConfig);
  map<string, string> authRequest = json({
    {"Product" , "Dts"},
    {"RegionId" , _regionId}
  }).get<map<string, string>>();
  OpenApiRequest authReq = OpenApiRequest(json({
    {"query" , Utils::Utils::query(authRequest)}
  }).get<map<string, map<string, string>>>());
  Params authParams = Params(json({
    {"action" , "AuthorizeFileUpload"},
    {"version" , "2019-12-19"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  json authResponse = {};
  Darabonba::Http::FileField fileObj = FileField();
  json ossHeader = {};
  json tmpBody = {};
  bool useAccelerate = false;
  map<string, string> authResponseBody = {};
  ModifyDtsJobRequest modifyDtsJobReq = ModifyDtsJobRequest();
  Utils::Utils::convert(request, modifyDtsJobReq);
  if (!!request.hasFileOssUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.fileOssUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    modifyDtsJobReq.setFileOssUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  ModifyDtsJobResponse modifyDtsJobResp = modifyDtsJobWithOptions(modifyDtsJobReq, runtime);
  return modifyDtsJobResp;
}

/**
 * @summary Modifies the parameters of a Data Transmission Service (DTS) task.
 *
 * @param request ModifyDtsJobConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDtsJobConfigResponse
 */
ModifyDtsJobConfigResponse Client::modifyDtsJobConfigWithOptions(const ModifyDtsJobConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.parameters();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDtsJobConfig"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDtsJobConfigResponse>();
}

/**
 * @summary Modifies the parameters of a Data Transmission Service (DTS) task.
 *
 * @param request ModifyDtsJobConfigRequest
 * @return ModifyDtsJobConfigResponse
 */
ModifyDtsJobConfigResponse Client::modifyDtsJobConfig(const ModifyDtsJobConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDtsJobConfigWithOptions(request, runtime);
}

/**
 * @summary Changes the dedicated cluster on which a Data Transmission Service (DTS) task runs.
 *
 * @description > After a DTS task is migrated from a dedicated cluster to a shared cluster, the task is billed on a pay-as-you-go basis.
 *
 * @param request ModifyDtsJobDedicatedClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDtsJobDedicatedClusterResponse
 */
ModifyDtsJobDedicatedClusterResponse Client::modifyDtsJobDedicatedClusterWithOptions(const ModifyDtsJobDedicatedClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDedicatedClusterId()) {
    query["DedicatedClusterId"] = request.dedicatedClusterId();
  }

  if (!!request.hasDtsJobIds()) {
    query["DtsJobIds"] = request.dtsJobIds();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDtsJobDedicatedCluster"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDtsJobDedicatedClusterResponse>();
}

/**
 * @summary Changes the dedicated cluster on which a Data Transmission Service (DTS) task runs.
 *
 * @description > After a DTS task is migrated from a dedicated cluster to a shared cluster, the task is billed on a pay-as-you-go basis.
 *
 * @param request ModifyDtsJobDedicatedClusterRequest
 * @return ModifyDtsJobDedicatedClusterResponse
 */
ModifyDtsJobDedicatedClusterResponse Client::modifyDtsJobDedicatedCluster(const ModifyDtsJobDedicatedClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDtsJobDedicatedClusterWithOptions(request, runtime);
}

/**
 * @summary Modifies the upper limit of DTS units (DUs) for a Data Transmission Service (DTS) task.
 *
 * @description *   DTS allows you to upgrade or downgrade the configurations of DTS instances in a dedicated cluster. You can adjust the resources that are occupied for task execution to dynamically adjust the number of tasks that can be scheduled in the cluster. This way, you can reduce the total number of DUs required for the cluster or release DUs.
 * *   Before you modify the upper limit of DUs for a DTS task, make sure that sufficient DUs are available.
 *
 * @param request ModifyDtsJobDuLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDtsJobDuLimitResponse
 */
ModifyDtsJobDuLimitResponse Client::modifyDtsJobDuLimitWithOptions(const ModifyDtsJobDuLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasDuLimit()) {
    query["DuLimit"] = request.duLimit();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDtsJobDuLimit"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDtsJobDuLimitResponse>();
}

/**
 * @summary Modifies the upper limit of DTS units (DUs) for a Data Transmission Service (DTS) task.
 *
 * @description *   DTS allows you to upgrade or downgrade the configurations of DTS instances in a dedicated cluster. You can adjust the resources that are occupied for task execution to dynamically adjust the number of tasks that can be scheduled in the cluster. This way, you can reduce the total number of DUs required for the cluster or release DUs.
 * *   Before you modify the upper limit of DUs for a DTS task, make sure that sufficient DUs are available.
 *
 * @param request ModifyDtsJobDuLimitRequest
 * @return ModifyDtsJobDuLimitResponse
 */
ModifyDtsJobDuLimitResponse Client::modifyDtsJobDuLimit(const ModifyDtsJobDuLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDtsJobDuLimitWithOptions(request, runtime);
}

/**
 * @summary Changes the source or destination database instance of a data synchronization or migration task in Data Transmission Service (DTS).
 *
 * @description >  After the database is changed, Data Transmission Service (DTS) rolls back the incremental write offset for 10 seconds. If the synchronized or migrated data does not have a primary key, make sure that no data is written to the source database while the source or destination database is being replaced. Otherwise, duplicate data may exist.
 *
 * @param request ModifyDtsJobEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDtsJobEndpointResponse
 */
ModifyDtsJobEndpointResponse Client::modifyDtsJobEndpointWithOptions(const ModifyDtsJobEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunUid()) {
    query["AliyunUid"] = request.aliyunUid();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.dryRun();
  }

  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasEndpoint()) {
    query["Endpoint"] = request.endpoint();
  }

  if (!!request.hasEndpointInstanceId()) {
    query["EndpointInstanceId"] = request.endpointInstanceId();
  }

  if (!!request.hasEndpointInstanceType()) {
    query["EndpointInstanceType"] = request.endpointInstanceType();
  }

  if (!!request.hasEndpointIp()) {
    query["EndpointIp"] = request.endpointIp();
  }

  if (!!request.hasEndpointPort()) {
    query["EndpointPort"] = request.endpointPort();
  }

  if (!!request.hasEndpointRegionId()) {
    query["EndpointRegionId"] = request.endpointRegionId();
  }

  if (!!request.hasModifyAccount()) {
    query["ModifyAccount"] = request.modifyAccount();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.roleName();
  }

  if (!!request.hasShardPassword()) {
    query["ShardPassword"] = request.shardPassword();
  }

  if (!!request.hasShardUsername()) {
    query["ShardUsername"] = request.shardUsername();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDtsJobEndpoint"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDtsJobEndpointResponse>();
}

/**
 * @summary Changes the source or destination database instance of a data synchronization or migration task in Data Transmission Service (DTS).
 *
 * @description >  After the database is changed, Data Transmission Service (DTS) rolls back the incremental write offset for 10 seconds. If the synchronized or migrated data does not have a primary key, make sure that no data is written to the source database while the source or destination database is being replaced. Otherwise, duplicate data may exist.
 *
 * @param request ModifyDtsJobEndpointRequest
 * @return ModifyDtsJobEndpointResponse
 */
ModifyDtsJobEndpointResponse Client::modifyDtsJobEndpoint(const ModifyDtsJobEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDtsJobEndpointWithOptions(request, runtime);
}

/**
 * @summary Changes the name of a Data Transmission Service (DTS) task.
 *
 * @param request ModifyDtsJobNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDtsJobNameResponse
 */
ModifyDtsJobNameResponse Client::modifyDtsJobNameWithOptions(const ModifyDtsJobNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasDtsJobName()) {
    query["DtsJobName"] = request.dtsJobName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDtsJobName"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDtsJobNameResponse>();
}

/**
 * @summary Changes the name of a Data Transmission Service (DTS) task.
 *
 * @param request ModifyDtsJobNameRequest
 * @return ModifyDtsJobNameResponse
 */
ModifyDtsJobNameResponse Client::modifyDtsJobName(const ModifyDtsJobNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDtsJobNameWithOptions(request, runtime);
}

/**
 * @summary Changes the password of the account used to log on to the source or destination database in a Data Transmission Service (DTS) task.
 *
 * @param request ModifyDtsJobPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDtsJobPasswordResponse
 */
ModifyDtsJobPasswordResponse Client::modifyDtsJobPasswordWithOptions(const ModifyDtsJobPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasEndpoint()) {
    query["Endpoint"] = request.endpoint();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDtsJobPassword"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDtsJobPasswordResponse>();
}

/**
 * @summary Changes the password of the account used to log on to the source or destination database in a Data Transmission Service (DTS) task.
 *
 * @param request ModifyDtsJobPasswordRequest
 * @return ModifyDtsJobPasswordResponse
 */
ModifyDtsJobPasswordResponse Client::modifyDtsJobPassword(const ModifyDtsJobPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDtsJobPasswordWithOptions(request, runtime);
}

/**
 * @summary Enables throttling for data synchronization and data migration.
 *
 * @param request ModifyDynamicConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDynamicConfigResponse
 */
ModifyDynamicConfigResponse Client::modifyDynamicConfigWithOptions(const ModifyDynamicConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigList()) {
    query["ConfigList"] = request.configList();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasEnableLimit()) {
    query["EnableLimit"] = request.enableLimit();
  }

  if (!!request.hasJobCode()) {
    query["JobCode"] = request.jobCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDynamicConfig"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDynamicConfigResponse>();
}

/**
 * @summary Enables throttling for data synchronization and data migration.
 *
 * @param request ModifyDynamicConfigRequest
 * @return ModifyDynamicConfigResponse
 */
ModifyDynamicConfigResponse Client::modifyDynamicConfig(const ModifyDynamicConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDynamicConfigWithOptions(request, runtime);
}

/**
 * @summary 修改GAD实例名称
 *
 * @param request ModifyGadInstanceNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyGadInstanceNameResponse
 */
ModifyGadInstanceNameResponse Client::modifyGadInstanceNameWithOptions(const ModifyGadInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyGadInstanceName"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyGadInstanceNameResponse>();
}

/**
 * @summary 修改GAD实例名称
 *
 * @param request ModifyGadInstanceNameRequest
 * @return ModifyGadInstanceNameResponse
 */
ModifyGadInstanceNameResponse Client::modifyGadInstanceName(const ModifyGadInstanceNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGadInstanceNameWithOptions(request, runtime);
}

/**
 * @summary 修改增量写入的位点。
 *
 * @param request ModifyJobStepCheckpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyJobStepCheckpointResponse
 */
ModifyJobStepCheckpointResponse Client::modifyJobStepCheckpointWithOptions(const ModifyJobStepCheckpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasJobStepId()) {
    query["JobStepId"] = request.jobStepId();
  }

  if (!!request.hasNewCheckPoint()) {
    query["NewCheckPoint"] = request.newCheckPoint();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyJobStepCheckpoint"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyJobStepCheckpointResponse>();
}

/**
 * @summary 修改增量写入的位点。
 *
 * @param request ModifyJobStepCheckpointRequest
 * @return ModifyJobStepCheckpointResponse
 */
ModifyJobStepCheckpointResponse Client::modifyJobStepCheckpoint(const ModifyJobStepCheckpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyJobStepCheckpointWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about a change tracking task.
 *
 * @description >  You can preview related API operation parameters when you modify the information about a change tracking task in the Data Transmission Service (DTS) console. This helps you configure the request parameters of this API operation. For more information, see [Preview the request parameters of API operations](https://help.aliyun.com/document_detail/2851612.html).
 *
 * @param request ModifySubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySubscriptionResponse
 */
ModifySubscriptionResponse Client::modifySubscriptionWithOptions(const ModifySubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbList()) {
    query["DbList"] = request.dbList();
  }

  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasModifyType()) {
    query["ModifyType"] = request.modifyType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReserved()) {
    query["Reserved"] = request.reserved();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSubscriptionDataTypeDDL()) {
    query["SubscriptionDataTypeDDL"] = request.subscriptionDataTypeDDL();
  }

  if (!!request.hasSubscriptionDataTypeDML()) {
    query["SubscriptionDataTypeDML"] = request.subscriptionDataTypeDML();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySubscription"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySubscriptionResponse>();
}

/**
 * @summary Modifies the information about a change tracking task.
 *
 * @description >  You can preview related API operation parameters when you modify the information about a change tracking task in the Data Transmission Service (DTS) console. This helps you configure the request parameters of this API operation. For more information, see [Preview the request parameters of API operations](https://help.aliyun.com/document_detail/2851612.html).
 *
 * @param request ModifySubscriptionRequest
 * @return ModifySubscriptionResponse
 */
ModifySubscriptionResponse Client::modifySubscription(const ModifySubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySubscriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies the objects for change tracking.
 *
 * @param request ModifySubscriptionObjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySubscriptionObjectResponse
 */
ModifySubscriptionObjectResponse Client::modifySubscriptionObjectWithOptions(const ModifySubscriptionObjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSubscriptionInstanceId()) {
    query["SubscriptionInstanceId"] = request.subscriptionInstanceId();
  }

  if (!!request.hasSubscriptionObject()) {
    query["SubscriptionObject"] = request.subscriptionObject();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySubscriptionObject"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySubscriptionObjectResponse>();
}

/**
 * @summary Modifies the objects for change tracking.
 *
 * @param request ModifySubscriptionObjectRequest
 * @return ModifySubscriptionObjectResponse
 */
ModifySubscriptionObjectResponse Client::modifySubscriptionObject(const ModifySubscriptionObjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySubscriptionObjectWithOptions(request, runtime);
}

/**
 * @summary Modifies the objects to be synchronized.
 *
 * @param request ModifySynchronizationObjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySynchronizationObjectResponse
 */
ModifySynchronizationObjectResponse Client::modifySynchronizationObjectWithOptions(const ModifySynchronizationObjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  if (!!request.hasSynchronizationJobId()) {
    query["SynchronizationJobId"] = request.synchronizationJobId();
  }

  json body = {};
  if (!!request.hasSynchronizationObjects()) {
    body["SynchronizationObjects"] = request.synchronizationObjects();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifySynchronizationObject"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySynchronizationObjectResponse>();
}

/**
 * @summary Modifies the objects to be synchronized.
 *
 * @param request ModifySynchronizationObjectRequest
 * @return ModifySynchronizationObjectResponse
 */
ModifySynchronizationObjectResponse Client::modifySynchronizationObject(const ModifySynchronizationObjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySynchronizationObjectWithOptions(request, runtime);
}

/**
 * @summary 预检查创建GAD订单
 *
 * @param request PreCheckCreateGadOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreCheckCreateGadOrderResponse
 */
PreCheckCreateGadOrderResponse Client::preCheckCreateGadOrderWithOptions(const PreCheckCreateGadOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMasterDatabaseName()) {
    query["MasterDatabaseName"] = request.masterDatabaseName();
  }

  if (!!request.hasMasterEngineArchType()) {
    query["MasterEngineArchType"] = request.masterEngineArchType();
  }

  if (!!request.hasMasterShardAccountName()) {
    query["MasterShardAccountName"] = request.masterShardAccountName();
  }

  if (!!request.hasMasterShardAccountPassword()) {
    query["MasterShardAccountPassword"] = request.masterShardAccountPassword();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSlaveDatabaseName()) {
    query["SlaveDatabaseName"] = request.slaveDatabaseName();
  }

  if (!!request.hasSlaveDbInstanceId()) {
    query["SlaveDbInstanceId"] = request.slaveDbInstanceId();
  }

  if (!!request.hasSlaveDbInstanceRegion()) {
    query["SlaveDbInstanceRegion"] = request.slaveDbInstanceRegion();
  }

  if (!!request.hasSlaveEngineArchType()) {
    query["SlaveEngineArchType"] = request.slaveEngineArchType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PreCheckCreateGadOrder"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreCheckCreateGadOrderResponse>();
}

/**
 * @summary 预检查创建GAD订单
 *
 * @param request PreCheckCreateGadOrderRequest
 * @return PreCheckCreateGadOrderResponse
 */
PreCheckCreateGadOrderResponse Client::preCheckCreateGadOrder(const PreCheckCreateGadOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return preCheckCreateGadOrderWithOptions(request, runtime);
}

/**
 * @summary Renews a Data Transmission Service (DTS) instance. This API operation is available only for subscription instances.
 *
 * @param request RenewInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstanceWithOptions(const RenewInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBuyCount()) {
    query["BuyCount"] = request.buyCount();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.chargeType();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewInstance"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewInstanceResponse>();
}

/**
 * @summary Renews a Data Transmission Service (DTS) instance. This API operation is available only for subscription instances.
 *
 * @param request RenewInstanceRequest
 * @return RenewInstanceResponse
 */
RenewInstanceResponse Client::renewInstance(const RenewInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewInstanceWithOptions(request, runtime);
}

/**
 * @summary Resets a data synchronization or change tracking task.
 *
 * @description >  If you clear the configurations of a data synchronization or change tracking task, DTS deletes the task. Then, DTS creates another task. The task is in the Not Configured state. You must call the [ConfigureDtsJob](https://help.aliyun.com/document_detail/208399.html) operation reconfigure the task.
 *
 * @param request ResetDtsJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetDtsJobResponse
 */
ResetDtsJobResponse Client::resetDtsJobWithOptions(const ResetDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetDtsJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetDtsJobResponse>();
}

/**
 * @summary Resets a data synchronization or change tracking task.
 *
 * @description >  If you clear the configurations of a data synchronization or change tracking task, DTS deletes the task. Then, DTS creates another task. The task is in the Not Configured state. You must call the [ConfigureDtsJob](https://help.aliyun.com/document_detail/208399.html) operation reconfigure the task.
 *
 * @param request ResetDtsJobRequest
 * @return ResetDtsJobResponse
 */
ResetDtsJobResponse Client::resetDtsJob(const ResetDtsJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetDtsJobWithOptions(request, runtime);
}

/**
 * @summary Clears the configurations of a data synchronization task.
 *
 * @description >  If you clear the configurations of a data synchronization task, the task will be released. To start the task again, you must call the **ConfigureSynchronizationJob** operation to reconfigure the task.
 *
 * @param request ResetSynchronizationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetSynchronizationJobResponse
 */
ResetSynchronizationJobResponse Client::resetSynchronizationJobWithOptions(const ResetSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  if (!!request.hasSynchronizationJobId()) {
    query["SynchronizationJobId"] = request.synchronizationJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetSynchronizationJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetSynchronizationJobResponse>();
}

/**
 * @summary Clears the configurations of a data synchronization task.
 *
 * @description >  If you clear the configurations of a data synchronization task, the task will be released. To start the task again, you must call the **ConfigureSynchronizationJob** operation to reconfigure the task.
 *
 * @param request ResetSynchronizationJobRequest
 * @return ResetSynchronizationJobResponse
 */
ResetSynchronizationJobResponse Client::resetSynchronizationJob(const ResetSynchronizationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetSynchronizationJobWithOptions(request, runtime);
}

/**
 * @summary 调转双向任务的方向
 *
 * @param request ReverseTwoWayDirectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReverseTwoWayDirectionResponse
 */
ReverseTwoWayDirectionResponse Client::reverseTwoWayDirectionWithOptions(const ReverseTwoWayDirectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasIgnoreErrorSubJob()) {
    query["IgnoreErrorSubJob"] = request.ignoreErrorSubJob();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReverseTwoWayDirection"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReverseTwoWayDirectionResponse>();
}

/**
 * @summary 调转双向任务的方向
 *
 * @param request ReverseTwoWayDirectionRequest
 * @return ReverseTwoWayDirectionResponse
 */
ReverseTwoWayDirectionResponse Client::reverseTwoWayDirection(const ReverseTwoWayDirectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return reverseTwoWayDirectionWithOptions(request, runtime);
}

/**
 * @summary Ignores the precheck items that a data migration or synchronization task may fail to pass.
 *
 * @param request ShieldPrecheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ShieldPrecheckResponse
 */
ShieldPrecheckResponse Client::shieldPrecheckWithOptions(const ShieldPrecheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasPrecheckItems()) {
    query["PrecheckItems"] = request.precheckItems();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ShieldPrecheck"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ShieldPrecheckResponse>();
}

/**
 * @summary Ignores the precheck items that a data migration or synchronization task may fail to pass.
 *
 * @param request ShieldPrecheckRequest
 * @return ShieldPrecheckResponse
 */
ShieldPrecheckResponse Client::shieldPrecheck(const ShieldPrecheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return shieldPrecheckWithOptions(request, runtime);
}

/**
 * @summary The tables that do not need to be synchronized in a full data synchronization are skipped.
 *
 * @param request SkipFullJobTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SkipFullJobTableResponse
 */
SkipFullJobTableResponse Client::skipFullJobTableWithOptions(const SkipFullJobTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasJobProgressId()) {
    query["JobProgressId"] = request.jobProgressId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SkipFullJobTable"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SkipFullJobTableResponse>();
}

/**
 * @summary The tables that do not need to be synchronized in a full data synchronization are skipped.
 *
 * @param request SkipFullJobTableRequest
 * @return SkipFullJobTableResponse
 */
SkipFullJobTableResponse Client::skipFullJobTable(const SkipFullJobTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return skipFullJobTableWithOptions(request, runtime);
}

/**
 * @summary Skips one or more precheck items.
 *
 * @param request SkipPreCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SkipPreCheckResponse
 */
SkipPreCheckResponse Client::skipPreCheckWithOptions(const SkipPreCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSkip()) {
    query["Skip"] = request.skip();
  }

  if (!!request.hasSkipPreCheckItems()) {
    query["SkipPreCheckItems"] = request.skipPreCheckItems();
  }

  if (!!request.hasSkipPreCheckNames()) {
    query["SkipPreCheckNames"] = request.skipPreCheckNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SkipPreCheck"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SkipPreCheckResponse>();
}

/**
 * @summary Skips one or more precheck items.
 *
 * @param request SkipPreCheckRequest
 * @return SkipPreCheckResponse
 */
SkipPreCheckResponse Client::skipPreCheck(const SkipPreCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return skipPreCheckWithOptions(request, runtime);
}

/**
 * @summary Starts a data migration, data synchronization, or change tracking task.
 *
 * @param request StartDtsJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDtsJobResponse
 */
StartDtsJobResponse Client::startDtsJobWithOptions(const StartDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartDtsJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartDtsJobResponse>();
}

/**
 * @summary Starts a data migration, data synchronization, or change tracking task.
 *
 * @param request StartDtsJobRequest
 * @return StartDtsJobResponse
 */
StartDtsJobResponse Client::startDtsJob(const StartDtsJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDtsJobWithOptions(request, runtime);
}

/**
 * @summary Starts multiple data migration or data synchronization tasks.
 *
 * @param request StartDtsJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDtsJobsResponse
 */
StartDtsJobsResponse Client::startDtsJobsWithOptions(const StartDtsJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobIds()) {
    query["DtsJobIds"] = request.dtsJobIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartDtsJobs"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartDtsJobsResponse>();
}

/**
 * @summary Starts multiple data migration or data synchronization tasks.
 *
 * @param request StartDtsJobsRequest
 * @return StartDtsJobsResponse
 */
StartDtsJobsResponse Client::startDtsJobs(const StartDtsJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDtsJobsWithOptions(request, runtime);
}

/**
 * @summary Starts a data migration task.
 *
 * @param request StartMigrationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartMigrationJobResponse
 */
StartMigrationJobResponse Client::startMigrationJobWithOptions(const StartMigrationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasMigrationJobId()) {
    query["MigrationJobId"] = request.migrationJobId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartMigrationJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartMigrationJobResponse>();
}

/**
 * @summary Starts a data migration task.
 *
 * @param request StartMigrationJobRequest
 * @return StartMigrationJobResponse
 */
StartMigrationJobResponse Client::startMigrationJob(const StartMigrationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startMigrationJobWithOptions(request, runtime);
}

/**
 * @summary Starts the reverse task that is created by calling the CreateReverseDtsJob operation.
 *
 * @description Before you call this operation, make sure that your instance is not released and is paused. You can check the status of the instance in the Data Transmission Service (DTS) console or by calling the [DescribeDtsJobDetail](https://help.aliyun.com/document_detail/208925.html) operation.
 *
 * @param request StartReverseWriterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartReverseWriterResponse
 */
StartReverseWriterResponse Client::startReverseWriterWithOptions(const StartReverseWriterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckPoint()) {
    query["CheckPoint"] = request.checkPoint();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartReverseWriter"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartReverseWriterResponse>();
}

/**
 * @summary Starts the reverse task that is created by calling the CreateReverseDtsJob operation.
 *
 * @description Before you call this operation, make sure that your instance is not released and is paused. You can check the status of the instance in the Data Transmission Service (DTS) console or by calling the [DescribeDtsJobDetail](https://help.aliyun.com/document_detail/208925.html) operation.
 *
 * @param request StartReverseWriterRequest
 * @return StartReverseWriterResponse
 */
StartReverseWriterResponse Client::startReverseWriter(const StartReverseWriterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startReverseWriterWithOptions(request, runtime);
}

/**
 * @summary Starts a change tracking task.
 *
 * @param request StartSubscriptionInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartSubscriptionInstanceResponse
 */
StartSubscriptionInstanceResponse Client::startSubscriptionInstanceWithOptions(const StartSubscriptionInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSubscriptionInstanceId()) {
    query["SubscriptionInstanceId"] = request.subscriptionInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartSubscriptionInstance"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartSubscriptionInstanceResponse>();
}

/**
 * @summary Starts a change tracking task.
 *
 * @param request StartSubscriptionInstanceRequest
 * @return StartSubscriptionInstanceResponse
 */
StartSubscriptionInstanceResponse Client::startSubscriptionInstance(const StartSubscriptionInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startSubscriptionInstanceWithOptions(request, runtime);
}

/**
 * @summary Starts a data synchronization task.
 *
 * @param request StartSynchronizationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartSynchronizationJobResponse
 */
StartSynchronizationJobResponse Client::startSynchronizationJobWithOptions(const StartSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  if (!!request.hasSynchronizationJobId()) {
    query["SynchronizationJobId"] = request.synchronizationJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartSynchronizationJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartSynchronizationJobResponse>();
}

/**
 * @summary Starts a data synchronization task.
 *
 * @param request StartSynchronizationJobRequest
 * @return StartSynchronizationJobResponse
 */
StartSynchronizationJobResponse Client::startSynchronizationJob(const StartSynchronizationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startSynchronizationJobWithOptions(request, runtime);
}

/**
 * @summary Releases a cluster.
 *
 * @param request StopDedicatedClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDedicatedClusterResponse
 */
StopDedicatedClusterResponse Client::stopDedicatedClusterWithOptions(const StopDedicatedClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDedicatedClusterId()) {
    query["DedicatedClusterId"] = request.dedicatedClusterId();
  }

  if (!!request.hasDedicatedClusterName()) {
    query["DedicatedClusterName"] = request.dedicatedClusterName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDedicatedCluster"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDedicatedClusterResponse>();
}

/**
 * @summary Releases a cluster.
 *
 * @param request StopDedicatedClusterRequest
 * @return StopDedicatedClusterResponse
 */
StopDedicatedClusterResponse Client::stopDedicatedCluster(const StopDedicatedClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDedicatedClusterWithOptions(request, runtime);
}

/**
 * @summary Stops a data migration, data synchronization, or change tracking task.
 *
 * @param request StopDtsJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDtsJobResponse
 */
StopDtsJobResponse Client::stopDtsJobWithOptions(const StopDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDtsJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDtsJobResponse>();
}

/**
 * @summary Stops a data migration, data synchronization, or change tracking task.
 *
 * @param request StopDtsJobRequest
 * @return StopDtsJobResponse
 */
StopDtsJobResponse Client::stopDtsJob(const StopDtsJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDtsJobWithOptions(request, runtime);
}

/**
 * @summary Stops multiple data migration or data synchronization tasks.
 *
 * @param request StopDtsJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDtsJobsResponse
 */
StopDtsJobsResponse Client::stopDtsJobsWithOptions(const StopDtsJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobIds()) {
    query["DtsJobIds"] = request.dtsJobIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDtsJobs"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDtsJobsResponse>();
}

/**
 * @summary Stops multiple data migration or data synchronization tasks.
 *
 * @param request StopDtsJobsRequest
 * @return StopDtsJobsResponse
 */
StopDtsJobsResponse Client::stopDtsJobs(const StopDtsJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDtsJobsWithOptions(request, runtime);
}

/**
 * @summary Stops a data migration task that is in the Migrating state.
 *
 * @param request StopMigrationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopMigrationJobResponse
 */
StopMigrationJobResponse Client::stopMigrationJobWithOptions(const StopMigrationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasMigrationJobId()) {
    query["MigrationJobId"] = request.migrationJobId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopMigrationJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopMigrationJobResponse>();
}

/**
 * @summary Stops a data migration task that is in the Migrating state.
 *
 * @param request StopMigrationJobRequest
 * @return StopMigrationJobResponse
 */
StopMigrationJobResponse Client::stopMigrationJob(const StopMigrationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopMigrationJobWithOptions(request, runtime);
}

/**
 * @summary Queries the number of migrated or synchronized objects in a Data Transmission Service (DTS) task.
 *
 * @param request SummaryJobDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SummaryJobDetailResponse
 */
SummaryJobDetailResponse Client::summaryJobDetailWithOptions(const SummaryJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasJobCode()) {
    query["JobCode"] = request.jobCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStructType()) {
    query["StructType"] = request.structType();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SummaryJobDetail"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SummaryJobDetailResponse>();
}

/**
 * @summary Queries the number of migrated or synchronized objects in a Data Transmission Service (DTS) task.
 *
 * @param request SummaryJobDetailRequest
 * @return SummaryJobDetailResponse
 */
SummaryJobDetailResponse Client::summaryJobDetail(const SummaryJobDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return summaryJobDetailWithOptions(request, runtime);
}

/**
 * @summary Pauses a data migration, data synchronization, or change tracking task.
 *
 * @description ****
 *
 * @param request SuspendDtsJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendDtsJobResponse
 */
SuspendDtsJobResponse Client::suspendDtsJobWithOptions(const SuspendDtsJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SuspendDtsJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendDtsJobResponse>();
}

/**
 * @summary Pauses a data migration, data synchronization, or change tracking task.
 *
 * @description ****
 *
 * @param request SuspendDtsJobRequest
 * @return SuspendDtsJobResponse
 */
SuspendDtsJobResponse Client::suspendDtsJob(const SuspendDtsJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendDtsJobWithOptions(request, runtime);
}

/**
 * @summary Suspends multiple Data Transmission Service (DTS) tasks.
 *
 * @param request SuspendDtsJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendDtsJobsResponse
 */
SuspendDtsJobsResponse Client::suspendDtsJobsWithOptions(const SuspendDtsJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobIds()) {
    query["DtsJobIds"] = request.dtsJobIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SuspendDtsJobs"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendDtsJobsResponse>();
}

/**
 * @summary Suspends multiple Data Transmission Service (DTS) tasks.
 *
 * @param request SuspendDtsJobsRequest
 * @return SuspendDtsJobsResponse
 */
SuspendDtsJobsResponse Client::suspendDtsJobs(const SuspendDtsJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendDtsJobsWithOptions(request, runtime);
}

/**
 * @summary Pauses a data migration task.
 *
 * @param request SuspendMigrationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendMigrationJobResponse
 */
SuspendMigrationJobResponse Client::suspendMigrationJobWithOptions(const SuspendMigrationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasMigrationJobId()) {
    query["MigrationJobId"] = request.migrationJobId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SuspendMigrationJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendMigrationJobResponse>();
}

/**
 * @summary Pauses a data migration task.
 *
 * @param request SuspendMigrationJobRequest
 * @return SuspendMigrationJobResponse
 */
SuspendMigrationJobResponse Client::suspendMigrationJob(const SuspendMigrationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendMigrationJobWithOptions(request, runtime);
}

/**
 * @summary Pauses a data synchronization task.
 *
 * @description > 
 * *   When you call this operation, the data synchronization task must be in the Synchronizing state.
 * *   We recommend that you do not pause a data synchronization task for more than 6 hours. Otherwise, the task cannot be started again.
 * *   If the billing method is pay-as-you-go, DTS charges a fee even when the task is paused. This is because DTS only stops writing data to the destination database. DTS continues to pull the logs of the source database so that the task can resume quickly after it is restarted. Therefore, data synchronization consumes resources such as the bandwidth of the source database.
 *
 * @param request SuspendSynchronizationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendSynchronizationJobResponse
 */
SuspendSynchronizationJobResponse Client::suspendSynchronizationJobWithOptions(const SuspendSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  if (!!request.hasSynchronizationJobId()) {
    query["SynchronizationJobId"] = request.synchronizationJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SuspendSynchronizationJob"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendSynchronizationJobResponse>();
}

/**
 * @summary Pauses a data synchronization task.
 *
 * @description > 
 * *   When you call this operation, the data synchronization task must be in the Synchronizing state.
 * *   We recommend that you do not pause a data synchronization task for more than 6 hours. Otherwise, the task cannot be started again.
 * *   If the billing method is pay-as-you-go, DTS charges a fee even when the task is paused. This is because DTS only stops writing data to the destination database. DTS continues to pull the logs of the source database so that the task can resume quickly after it is restarted. Therefore, data synchronization consumes resources such as the bandwidth of the source database.
 *
 * @param request SuspendSynchronizationJobRequest
 * @return SuspendSynchronizationJobResponse
 */
SuspendSynchronizationJobResponse Client::suspendSynchronizationJob(const SuspendSynchronizationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendSynchronizationJobWithOptions(request, runtime);
}

/**
 * @summary 物理迁移任务切换上云
 *
 * @param request SwitchPhysicalDtsJobToCloudRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchPhysicalDtsJobToCloudResponse
 */
SwitchPhysicalDtsJobToCloudResponse Client::switchPhysicalDtsJobToCloudWithOptions(const SwitchPhysicalDtsJobToCloudRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsInstanceId()) {
    query["DtsInstanceId"] = request.dtsInstanceId();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchPhysicalDtsJobToCloud"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchPhysicalDtsJobToCloudResponse>();
}

/**
 * @summary 物理迁移任务切换上云
 *
 * @param request SwitchPhysicalDtsJobToCloudRequest
 * @return SwitchPhysicalDtsJobToCloudResponse
 */
SwitchPhysicalDtsJobToCloudResponse Client::switchPhysicalDtsJobToCloud(const SwitchPhysicalDtsJobToCloudRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchPhysicalDtsJobToCloudWithOptions(request, runtime);
}

/**
 * @summary After you perform a primary/secondary switchover on the source or destination database, you can call the SwitchSynchronizationEndpoint operation to transfer the connection settings to Data Transmission Service (DTS). DTS will restart the data synchronization task from the breakpoint.
 *
 * @param request SwitchSynchronizationEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchSynchronizationEndpointResponse
 */
SwitchSynchronizationEndpointResponse Client::switchSynchronizationEndpointWithOptions(const SwitchSynchronizationEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.accountId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSynchronizationDirection()) {
    query["SynchronizationDirection"] = request.synchronizationDirection();
  }

  if (!!request.hasSynchronizationJobId()) {
    query["SynchronizationJobId"] = request.synchronizationJobId();
  }

  if (!!request.hasEndpoint()) {
    query["Endpoint"] = request.endpoint();
  }

  if (!!request.hasSourceEndpoint()) {
    query["SourceEndpoint"] = request.sourceEndpoint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchSynchronizationEndpoint"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchSynchronizationEndpointResponse>();
}

/**
 * @summary After you perform a primary/secondary switchover on the source or destination database, you can call the SwitchSynchronizationEndpoint operation to transfer the connection settings to Data Transmission Service (DTS). DTS will restart the data synchronization task from the breakpoint.
 *
 * @param request SwitchSynchronizationEndpointRequest
 * @return SwitchSynchronizationEndpointResponse
 */
SwitchSynchronizationEndpointResponse Client::switchSynchronizationEndpoint(const SwitchSynchronizationEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchSynchronizationEndpointWithOptions(request, runtime);
}

/**
 * @summary Adds tags to data migration, data synchronization, or change tracking instances.
 *
 * @description If you have a large number of instances, you can create multiple tags and add these tags to the instances. Then, you can query instances by tag.
 * *   A tag consists of a key and a value. Each key must be unique in a region within an Alibaba Cloud account. Different keys can be mapped to the same value.
 * *   If the tag that you specify does not exist, this tag is automatically created and added to the specified instance.
 * *   If the key of the specified tag is the same as that of an existing tag, the specified tag overwrites the existing tag.
 * *   You can add up to 20 tags to an instance.
 * *   You can add tags to up to 50 instances in each request.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Adds tags to data migration, data synchronization, or change tracking instances.
 *
 * @description If you have a large number of instances, you can create multiple tags and add these tags to the instances. Then, you can query instances by tag.
 * *   A tag consists of a key and a value. Each key must be unique in a region within an Alibaba Cloud account. Different keys can be mapped to the same value.
 * *   If the tag that you specify does not exist, this tag is automatically created and added to the specified instance.
 * *   If the key of the specified tag is the same as that of an existing tag, the specified tag overwrites the existing tag.
 * *   You can add up to 20 tags to an instance.
 * *   You can add tags to up to 50 instances in each request.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Upgrades or downgrades a Data Transmission Service (DTS) instance.
 *
 * @param request TransferInstanceClassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferInstanceClassResponse
 */
TransferInstanceClassResponse Client::transferInstanceClassWithOptions(const TransferInstanceClassRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.instanceClass();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransferInstanceClass"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferInstanceClassResponse>();
}

/**
 * @summary Upgrades or downgrades a Data Transmission Service (DTS) instance.
 *
 * @param request TransferInstanceClassRequest
 * @return TransferInstanceClassResponse
 */
TransferInstanceClassResponse Client::transferInstanceClass(const TransferInstanceClassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferInstanceClassWithOptions(request, runtime);
}

/**
 * @summary Changes the billing method of a Data Transmission Service (DTS) instance.
 *
 * @description Before you call this operation, make sure that you fully understand the [billing](https://www.alibabacloud.com/zh/product/data-transmission-service/pricing) of DTS.
 * *   To prevent resource waste, make sure that the billing method of your DTS instances has to be changed.
 * *   Data migration instances only support the pay-as-you-go billing method.
 *
 * @param request TransferPayTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferPayTypeResponse
 */
TransferPayTypeResponse Client::transferPayTypeWithOptions(const TransferPayTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.autoPay();
  }

  if (!!request.hasBuyCount()) {
    query["BuyCount"] = request.buyCount();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.chargeType();
  }

  if (!!request.hasDtsJobId()) {
    query["DtsJobId"] = request.dtsJobId();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.instanceClass();
  }

  if (!!request.hasMaxDu()) {
    query["MaxDu"] = request.maxDu();
  }

  if (!!request.hasMinDu()) {
    query["MinDu"] = request.minDu();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransferPayType"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferPayTypeResponse>();
}

/**
 * @summary Changes the billing method of a Data Transmission Service (DTS) instance.
 *
 * @description Before you call this operation, make sure that you fully understand the [billing](https://www.alibabacloud.com/zh/product/data-transmission-service/pricing) of DTS.
 * *   To prevent resource waste, make sure that the billing method of your DTS instances has to be changed.
 * *   Data migration instances only support the pay-as-you-go billing method.
 *
 * @param request TransferPayTypeRequest
 * @return TransferPayTypeResponse
 */
TransferPayTypeResponse Client::transferPayType(const TransferPayTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferPayTypeWithOptions(request, runtime);
}

/**
 * @summary Unbinds tags from one or more data migration, data synchronization, or change tracking instances.
 *
 * @description >  If a tag is unbound from an instance and is not bound to other instances, the tag is deleted.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Unbinds tags from one or more data migration, data synchronization, or change tracking instances.
 *
 * @description >  If a tag is unbound from an instance and is not bound to other instances, the tag is deleted.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Upgrades the synchronization topology of a data synchronization instance from one-way synchronization to two-way synchronization. This operation is supported only for pay-as-you-go synchronization instances.
 *
 * @description Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/data-transmission-service/pricing) of Data Transmission Service (DTS)
 * When you call this operation, take note of the following information:
 * *   The source and destination databases of the data synchronization task are both **MySQL** databases.
 * *   The synchronization topology of the data synchronization task is **one-way synchronization**.
 * *   The data synchronization task is in the **Synchronizing** state.
 * *   The upgrade operation causes data synchronization latency of about 5 seconds. We recommend that you perform this operation during off-peak hours.
 *
 * @param request UpgradeTwoWayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeTwoWayResponse
 */
UpgradeTwoWayResponse Client::upgradeTwoWayWithOptions(const UpgradeTwoWayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.instanceClass();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeTwoWay"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeTwoWayResponse>();
}

/**
 * @summary Upgrades the synchronization topology of a data synchronization instance from one-way synchronization to two-way synchronization. This operation is supported only for pay-as-you-go synchronization instances.
 *
 * @description Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/zh/product/data-transmission-service/pricing) of Data Transmission Service (DTS)
 * When you call this operation, take note of the following information:
 * *   The source and destination databases of the data synchronization task are both **MySQL** databases.
 * *   The synchronization topology of the data synchronization task is **one-way synchronization**.
 * *   The data synchronization task is in the **Synchronizing** state.
 * *   The upgrade operation causes data synchronization latency of about 5 seconds. We recommend that you perform this operation during off-peak hours.
 *
 * @param request UpgradeTwoWayRequest
 * @return UpgradeTwoWayResponse
 */
UpgradeTwoWayResponse Client::upgradeTwoWay(const UpgradeTwoWayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeTwoWayWithOptions(request, runtime);
}

/**
 * @summary If the \\\\*\\\\*source or destination instance\\\\*\\\\* is a \\\\*\\\\*self-managed database\\\\*\\\\* or a \\\\*\\\\*third-party cloud database\\\\*\\\\*, you need to call this operation to query the CIDR blocks of DTS servers. Then, you need to add the CIDR blocks of DTS servers to the security settings of the source or destination instance, for example, the firewall of your database. For more information, see \\[Add the CIDR blocks of DTS servers to the security settings of on-premises databases]\\\\(~~176627~~).
 * \\\\>  If the \\\\*\\\\*source or destination database\\\\*\\\\* is an \\\\*\\\\*ApsaraDB database instance\\\\*\\\\* (such as RDS instance and ApsaraDB for MongoDB instance) or a \\\\*\\\\*self-managed database hosted on Elastic Compute Service (ECS)\\\\*\\\\*, you do not need to add the CIDR blocks. When you click \\\\*\\\\*Set Whitelist and Next\\\\*\\\\* in the DTS console, DTS automatically adds the CIDR blocks of DTS servers to the security settings of the source or destination instance.
 *
 * @description The operation that you want to perform. Set the value to **WhiteIpList**.
 *
 * @param request WhiteIpListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WhiteIpListResponse
 */
WhiteIpListResponse Client::whiteIpListWithOptions(const WhiteIpListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestAliyunUid()) {
    query["DestAliyunUid"] = request.destAliyunUid();
  }

  if (!!request.hasDestPrimaryVswId()) {
    query["DestPrimaryVswId"] = request.destPrimaryVswId();
  }

  if (!!request.hasDestRoleName()) {
    query["DestRoleName"] = request.destRoleName();
  }

  if (!!request.hasDestSecondaryVswId()) {
    query["DestSecondaryVswId"] = request.destSecondaryVswId();
  }

  if (!!request.hasDestVpcId()) {
    query["DestVpcId"] = request.destVpcId();
  }

  if (!!request.hasDestinationRegion()) {
    query["DestinationRegion"] = request.destinationRegion();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSrcAliyunUid()) {
    query["SrcAliyunUid"] = request.srcAliyunUid();
  }

  if (!!request.hasSrcPrimaryVswId()) {
    query["SrcPrimaryVswId"] = request.srcPrimaryVswId();
  }

  if (!!request.hasSrcRoleName()) {
    query["SrcRoleName"] = request.srcRoleName();
  }

  if (!!request.hasSrcSecondaryVswId()) {
    query["SrcSecondaryVswId"] = request.srcSecondaryVswId();
  }

  if (!!request.hasSrcVpcId()) {
    query["SrcVpcId"] = request.srcVpcId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasZeroEtlJob()) {
    query["ZeroEtlJob"] = request.zeroEtlJob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "WhiteIpList"},
    {"version" , "2020-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WhiteIpListResponse>();
}

/**
 * @summary If the \\\\*\\\\*source or destination instance\\\\*\\\\* is a \\\\*\\\\*self-managed database\\\\*\\\\* or a \\\\*\\\\*third-party cloud database\\\\*\\\\*, you need to call this operation to query the CIDR blocks of DTS servers. Then, you need to add the CIDR blocks of DTS servers to the security settings of the source or destination instance, for example, the firewall of your database. For more information, see \\[Add the CIDR blocks of DTS servers to the security settings of on-premises databases]\\\\(~~176627~~).
 * \\\\>  If the \\\\*\\\\*source or destination database\\\\*\\\\* is an \\\\*\\\\*ApsaraDB database instance\\\\*\\\\* (such as RDS instance and ApsaraDB for MongoDB instance) or a \\\\*\\\\*self-managed database hosted on Elastic Compute Service (ECS)\\\\*\\\\*, you do not need to add the CIDR blocks. When you click \\\\*\\\\*Set Whitelist and Next\\\\*\\\\* in the DTS console, DTS automatically adds the CIDR blocks of DTS servers to the security settings of the source or destination instance.
 *
 * @description The operation that you want to perform. Set the value to **WhiteIpList**.
 *
 * @param request WhiteIpListRequest
 * @return WhiteIpListResponse
 */
WhiteIpListResponse Client::whiteIpList(const WhiteIpListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return whiteIpListWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Dts20200101