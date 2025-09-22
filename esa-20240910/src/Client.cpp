#include <darabonba/Core.hpp>
#include <alibabacloud/ESA20240910.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <darabonba/http/Form.hpp>
#include <darabonba/Convert.hpp>
#include <map>
#include <darabonba/Stream.hpp>
#include <darabonba/XML.hpp>
#include <darabonba/Runtime.hpp>
#include <alibabacloud/credential/Credential.hpp>
#include <darabonba/http/FileField.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace Darabonba::Http;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Credential::Models;
using namespace AlibabaCloud::OpenApi::Exceptions;
using namespace AlibabaCloud::ESA20240910::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace ESA20240910
{

AlibabaCloud::ESA20240910::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("esa", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


Darabonba::Json Client::_postOSSObject(const string &bucketName, const Darabonba::Json &form) {
Darabonba::RuntimeOptions runtime_(json({}));

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
  auto futureResp_ = Darabonba::Core::doAction(request_, runtime_);
  shared_ptr<Darabonba::Http::MCurlResponse> response_ = futureResp_.get();

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
 * @summary Activates the client based on the certificate ID.
 *
 * @param request ActivateClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActivateClientCertificateResponse
 */
ActivateClientCertificateResponse Client::activateClientCertificateWithOptions(const ActivateClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ActivateClientCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActivateClientCertificateResponse>();
}

/**
 * @summary Activates the client based on the certificate ID.
 *
 * @param request ActivateClientCertificateRequest
 * @return ActivateClientCertificateResponse
 */
ActivateClientCertificateResponse Client::activateClientCertificate(const ActivateClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activateClientCertificateWithOptions(request, runtime);
}

/**
 * @summary Enable Version Management
 *
 * @param request ActivateVersionManagementRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActivateVersionManagementResponse
 */
ActivateVersionManagementResponse Client::activateVersionManagementWithOptions(const ActivateVersionManagementRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ActivateVersionManagement"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActivateVersionManagementResponse>();
}

/**
 * @summary Enable Version Management
 *
 * @param request ActivateVersionManagementRequest
 * @return ActivateVersionManagementResponse
 */
ActivateVersionManagementResponse Client::activateVersionManagement(const ActivateVersionManagementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activateVersionManagementWithOptions(request, runtime);
}

/**
 * @summary Applies for a free SSL certificate.
 *
 * @param request ApplyCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyCertificateResponse
 */
ApplyCertificateResponse Client::applyCertificateWithOptions(const ApplyCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyCertificateResponse>();
}

/**
 * @summary Applies for a free SSL certificate.
 *
 * @param request ApplyCertificateRequest
 * @return ApplyCertificateResponse
 */
ApplyCertificateResponse Client::applyCertificate(const ApplyCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyCertificateWithOptions(request, runtime);
}

/**
 * @summary Adds DNS records of different record types at a time..
 *
 * @description This operation allows you to create or update multiple DNS records at a time. It is suitable for managing a large number of DNS configurations. Supported record types include but are not limited to A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, and URI. The operation allows you to configure the priority, flag, tag, and weight for DNS records. In addition, for specific types of records, such as CERT, SSHFP, SMIMEA, and TLSA, advanced settings such as certificate information and encryption algorithms are also supported.
 * Successful and failed records along with error messages are listed in the response.
 *
 * @param tmpReq BatchCreateRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCreateRecordsResponse
 */
BatchCreateRecordsResponse Client::batchCreateRecordsWithOptions(const BatchCreateRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchCreateRecordsShrinkRequest request = BatchCreateRecordsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRecordList()) {
    request.setRecordListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.recordList(), "RecordList", "json"));
  }

  json query = {};
  if (!!request.hasRecordListShrink()) {
    query["RecordList"] = request.recordListShrink();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchCreateRecords"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCreateRecordsResponse>();
}

/**
 * @summary Adds DNS records of different record types at a time..
 *
 * @description This operation allows you to create or update multiple DNS records at a time. It is suitable for managing a large number of DNS configurations. Supported record types include but are not limited to A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, and URI. The operation allows you to configure the priority, flag, tag, and weight for DNS records. In addition, for specific types of records, such as CERT, SSHFP, SMIMEA, and TLSA, advanced settings such as certificate information and encryption algorithms are also supported.
 * Successful and failed records along with error messages are listed in the response.
 *
 * @param request BatchCreateRecordsRequest
 * @return BatchCreateRecordsResponse
 */
BatchCreateRecordsResponse Client::batchCreateRecords(const BatchCreateRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCreateRecordsWithOptions(request, runtime);
}

/**
 * @summary Batch Create WAF Rules
 *
 * @param tmpReq BatchCreateWafRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCreateWafRulesResponse
 */
BatchCreateWafRulesResponse Client::batchCreateWafRulesWithOptions(const BatchCreateWafRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchCreateWafRulesShrinkRequest request = BatchCreateWafRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfigs()) {
    request.setConfigsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.configs(), "Configs", "json"));
  }

  if (!!tmpReq.hasShared()) {
    request.setSharedShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.shared(), "Shared", "json"));
  }

  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  json body = {};
  if (!!request.hasConfigsShrink()) {
    body["Configs"] = request.configsShrink();
  }

  if (!!request.hasPhase()) {
    body["Phase"] = request.phase();
  }

  if (!!request.hasRulesetId()) {
    body["RulesetId"] = request.rulesetId();
  }

  if (!!request.hasSharedShrink()) {
    body["Shared"] = request.sharedShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchCreateWafRules"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCreateWafRulesResponse>();
}

/**
 * @summary Batch Create WAF Rules
 *
 * @param request BatchCreateWafRulesRequest
 * @return BatchCreateWafRulesResponse
 */
BatchCreateWafRulesResponse Client::batchCreateWafRules(const BatchCreateWafRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCreateWafRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes key-value pairs from a namespace at a time based on keys.
 *
 * @param tmpReq BatchDeleteKvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteKvResponse
 */
BatchDeleteKvResponse Client::batchDeleteKvWithOptions(const BatchDeleteKvRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchDeleteKvShrinkRequest request = BatchDeleteKvShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasKeys()) {
    request.setKeysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.keys(), "Keys", "json"));
  }

  json query = {};
  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  json body = {};
  if (!!request.hasKeysShrink()) {
    body["Keys"] = request.keysShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchDeleteKv"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteKvResponse>();
}

/**
 * @summary Deletes key-value pairs from a namespace at a time based on keys.
 *
 * @param request BatchDeleteKvRequest
 * @return BatchDeleteKvResponse
 */
BatchDeleteKvResponse Client::batchDeleteKv(const BatchDeleteKvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteKvWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple key-value pairs from a namespace at a time based on specified keys. The request body can be up to 100 MB.
 *
 * @description This operation allows you to upload a larger request body than by using [BatchDeleteKv](https://help.aliyun.com/document_detail/2850204.html). For small request bodies, we recommend that you use [BatchDeleteKv](https://help.aliyun.com/document_detail/2850204.html) to minimize the server processing time. This operation must be called by using SDKs. The following sample code uses the Golang SDK and BatchDeleteKvWithHighCapacityAdvance to call the operation.
 *     func TestBatchDeleteWithHighCapacity() error {
 *     	// Initialize the configurations.
 *     	cfg := new(openapi.Config)
 *     	cfg.SetAccessKeyId("xxxxxxxxx")
 *     	cfg.SetAccessKeySecret("xxxxxxxxxx")
 *     	cli, err := NewClient(cfg)
 *     	if err != nil {
 *     		return err
 *     	}
 *     	runtime := &util.RuntimeOptions{}
 *     	// Construct a request for deleting key-value pairs at a time.
 *     	namespace := "test_batch_put"
 *     	rawReq := BatchDeleteKvRequest{
 *     		Namespace: &namespace,
 *     	}
 *     	for i := 0; i < 10000; i++ {
 *     		key := fmt.Sprintf("test_key_%d", i)
 *     		rawReq.Keys = append(rawReq.Keys, &key)
 *     	}
 *     	payload, err := json.Marshal(rawReq)
 *     	if err != nil {
 *     		return err
 *     	}
 *     	// If the payload is greater than 2 MB, call the BatchDeleteKvWithHighCapacity operation for deletion.
 *     	reqHighCapacity := BatchDeleteKvWithHighCapacityAdvanceRequest{
 *     		Namespace: &namespace,
 *     		UrlObject: bytes.NewReader(payload),
 *     	}
 *     	resp, err := cli.BatchDeleteKvWithHighCapacityAdvance(&reqHighCapacity, runtime)
 *     	if err != nil {
 *     		return err
 *     	}
 *     	return nil
 *     }
 *
 * @param request BatchDeleteKvWithHighCapacityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteKvWithHighCapacityResponse
 */
BatchDeleteKvWithHighCapacityResponse Client::batchDeleteKvWithHighCapacityWithOptions(const BatchDeleteKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchDeleteKvWithHighCapacity"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteKvWithHighCapacityResponse>();
}

/**
 * @summary Deletes multiple key-value pairs from a namespace at a time based on specified keys. The request body can be up to 100 MB.
 *
 * @description This operation allows you to upload a larger request body than by using [BatchDeleteKv](https://help.aliyun.com/document_detail/2850204.html). For small request bodies, we recommend that you use [BatchDeleteKv](https://help.aliyun.com/document_detail/2850204.html) to minimize the server processing time. This operation must be called by using SDKs. The following sample code uses the Golang SDK and BatchDeleteKvWithHighCapacityAdvance to call the operation.
 *     func TestBatchDeleteWithHighCapacity() error {
 *     	// Initialize the configurations.
 *     	cfg := new(openapi.Config)
 *     	cfg.SetAccessKeyId("xxxxxxxxx")
 *     	cfg.SetAccessKeySecret("xxxxxxxxxx")
 *     	cli, err := NewClient(cfg)
 *     	if err != nil {
 *     		return err
 *     	}
 *     	runtime := &util.RuntimeOptions{}
 *     	// Construct a request for deleting key-value pairs at a time.
 *     	namespace := "test_batch_put"
 *     	rawReq := BatchDeleteKvRequest{
 *     		Namespace: &namespace,
 *     	}
 *     	for i := 0; i < 10000; i++ {
 *     		key := fmt.Sprintf("test_key_%d", i)
 *     		rawReq.Keys = append(rawReq.Keys, &key)
 *     	}
 *     	payload, err := json.Marshal(rawReq)
 *     	if err != nil {
 *     		return err
 *     	}
 *     	// If the payload is greater than 2 MB, call the BatchDeleteKvWithHighCapacity operation for deletion.
 *     	reqHighCapacity := BatchDeleteKvWithHighCapacityAdvanceRequest{
 *     		Namespace: &namespace,
 *     		UrlObject: bytes.NewReader(payload),
 *     	}
 *     	resp, err := cli.BatchDeleteKvWithHighCapacityAdvance(&reqHighCapacity, runtime)
 *     	if err != nil {
 *     		return err
 *     	}
 *     	return nil
 *     }
 *
 * @param request BatchDeleteKvWithHighCapacityRequest
 * @return BatchDeleteKvWithHighCapacityResponse
 */
BatchDeleteKvWithHighCapacityResponse Client::batchDeleteKvWithHighCapacity(const BatchDeleteKvWithHighCapacityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteKvWithHighCapacityWithOptions(request, runtime);
}

BatchDeleteKvWithHighCapacityResponse Client::batchDeleteKvWithHighCapacityAdvance(const BatchDeleteKvWithHighCapacityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ESA"},
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
  BatchDeleteKvWithHighCapacityRequest batchDeleteKvWithHighCapacityReq = BatchDeleteKvWithHighCapacityRequest();
  Utils::Utils::convert(request, batchDeleteKvWithHighCapacityReq);
  if (!!request.hasUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.urlObject()},
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
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader);
    batchDeleteKvWithHighCapacityReq.setUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  BatchDeleteKvWithHighCapacityResponse batchDeleteKvWithHighCapacityResp = batchDeleteKvWithHighCapacityWithOptions(batchDeleteKvWithHighCapacityReq, runtime);
  return batchDeleteKvWithHighCapacityResp;
}

/**
 * @summary Batch Get Expression Matches
 *
 * @param tmpReq BatchGetExpressionFieldsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetExpressionFieldsResponse
 */
BatchGetExpressionFieldsResponse Client::batchGetExpressionFieldsWithOptions(const BatchGetExpressionFieldsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchGetExpressionFieldsShrinkRequest request = BatchGetExpressionFieldsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExpressions()) {
    request.setExpressionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.expressions(), "Expressions", "json"));
  }

  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  json body = {};
  if (!!request.hasExpressionsShrink()) {
    body["Expressions"] = request.expressionsShrink();
  }

  if (!!request.hasPhase()) {
    body["Phase"] = request.phase();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchGetExpressionFields"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGetExpressionFieldsResponse>();
}

/**
 * @summary Batch Get Expression Matches
 *
 * @param request BatchGetExpressionFieldsRequest
 * @return BatchGetExpressionFieldsResponse
 */
BatchGetExpressionFieldsResponse Client::batchGetExpressionFields(const BatchGetExpressionFieldsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetExpressionFieldsWithOptions(request, runtime);
}

/**
 * @summary Configures key-value pairs for a namespace at a time based on specified keys.
 *
 * @param tmpReq BatchPutKvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchPutKvResponse
 */
BatchPutKvResponse Client::batchPutKvWithOptions(const BatchPutKvRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchPutKvShrinkRequest request = BatchPutKvShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasKvList()) {
    request.setKvListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.kvList(), "KvList", "json"));
  }

  json query = {};
  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  json body = {};
  if (!!request.hasKvListShrink()) {
    body["KvList"] = request.kvListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchPutKv"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchPutKvResponse>();
}

/**
 * @summary Configures key-value pairs for a namespace at a time based on specified keys.
 *
 * @param request BatchPutKvRequest
 * @return BatchPutKvResponse
 */
BatchPutKvResponse Client::batchPutKv(const BatchPutKvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchPutKvWithOptions(request, runtime);
}

/**
 * @summary Configures key-value pairs for a namespace at a time based on specified keys. The request body can be up to 100 MB.
 *
 * @description This operation allows you to upload a larger request body than by using [BatchPutKv](https://help.aliyun.com/document_detail/2850203.html). For small request bodies, we recommend that you use [BatchPutKv](https://help.aliyun.com/document_detail/2850203.html) to minimize the server processing time. This operation must be called by using SDKs. The following sample code uses the Golang SDK and BatchPutKvWithHighCapacityAdvance to call the operation.
 *     func TestBatchPutKvWithHighCapacity() error {
 *     	// Initialize the configurations.
 *     	cfg := new(openapi.Config)
 *     	cfg.SetAccessKeyId("xxxxxxxxx")
 *     	cfg.SetAccessKeySecret("xxxxxxxxxx")
 *     	cli, err := NewClient(cfg)
 *     	if err != nil {
 *     		return err
 *     	}
 *     	runtime := &util.RuntimeOptions{}
 *     	// Construct a request for uploading key-value pairs at a time.
 *     	namespace := "test_batch_put"
 *     	numKv := 10000
 *     	kvList := make([]*BatchPutKvRequestKvList, numKv)
 *     	test_value := strings.Repeat("a", 10*1024)
 *     	for i := 0; i < numKv; i++ {
 *     		key := fmt.Sprintf("test_key_%d", i)
 *     		value := test_value
 *     		kvList[i] = &BatchPutKvRequestKvList{
 *     			Key:   &key,
 *     			Value: &value,
 *     		}
 *     	}
 *     	rawReq := BatchPutKvRequest{
 *     		Namespace: &namespace,
 *     		KvList:    kvList,
 *     	}
 *     	payload, err := json.Marshal(rawReq)
 *     	if err != nil {
 *     		return err
 *     	}
 *     	// If the payload is greater than 2 MB, call the BatchPutKvWithHighCapacity operation for upload.
 *     	reqHighCapacity := BatchPutKvWithHighCapacityAdvanceRequest{
 *     		Namespace: &namespace,
 *     		UrlObject: bytes.NewReader(payload),
 *     	}
 *     	resp, err := cli.BatchPutKvWithHighCapacityAdvance(&reqHighCapacity, runtime)
 *     	if err != nil {
 *     		return err
 *     	}
 *     	return nil
 *     }
 *
 * @param request BatchPutKvWithHighCapacityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchPutKvWithHighCapacityResponse
 */
BatchPutKvWithHighCapacityResponse Client::batchPutKvWithHighCapacityWithOptions(const BatchPutKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchPutKvWithHighCapacity"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchPutKvWithHighCapacityResponse>();
}

/**
 * @summary Configures key-value pairs for a namespace at a time based on specified keys. The request body can be up to 100 MB.
 *
 * @description This operation allows you to upload a larger request body than by using [BatchPutKv](https://help.aliyun.com/document_detail/2850203.html). For small request bodies, we recommend that you use [BatchPutKv](https://help.aliyun.com/document_detail/2850203.html) to minimize the server processing time. This operation must be called by using SDKs. The following sample code uses the Golang SDK and BatchPutKvWithHighCapacityAdvance to call the operation.
 *     func TestBatchPutKvWithHighCapacity() error {
 *     	// Initialize the configurations.
 *     	cfg := new(openapi.Config)
 *     	cfg.SetAccessKeyId("xxxxxxxxx")
 *     	cfg.SetAccessKeySecret("xxxxxxxxxx")
 *     	cli, err := NewClient(cfg)
 *     	if err != nil {
 *     		return err
 *     	}
 *     	runtime := &util.RuntimeOptions{}
 *     	// Construct a request for uploading key-value pairs at a time.
 *     	namespace := "test_batch_put"
 *     	numKv := 10000
 *     	kvList := make([]*BatchPutKvRequestKvList, numKv)
 *     	test_value := strings.Repeat("a", 10*1024)
 *     	for i := 0; i < numKv; i++ {
 *     		key := fmt.Sprintf("test_key_%d", i)
 *     		value := test_value
 *     		kvList[i] = &BatchPutKvRequestKvList{
 *     			Key:   &key,
 *     			Value: &value,
 *     		}
 *     	}
 *     	rawReq := BatchPutKvRequest{
 *     		Namespace: &namespace,
 *     		KvList:    kvList,
 *     	}
 *     	payload, err := json.Marshal(rawReq)
 *     	if err != nil {
 *     		return err
 *     	}
 *     	// If the payload is greater than 2 MB, call the BatchPutKvWithHighCapacity operation for upload.
 *     	reqHighCapacity := BatchPutKvWithHighCapacityAdvanceRequest{
 *     		Namespace: &namespace,
 *     		UrlObject: bytes.NewReader(payload),
 *     	}
 *     	resp, err := cli.BatchPutKvWithHighCapacityAdvance(&reqHighCapacity, runtime)
 *     	if err != nil {
 *     		return err
 *     	}
 *     	return nil
 *     }
 *
 * @param request BatchPutKvWithHighCapacityRequest
 * @return BatchPutKvWithHighCapacityResponse
 */
BatchPutKvWithHighCapacityResponse Client::batchPutKvWithHighCapacity(const BatchPutKvWithHighCapacityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchPutKvWithHighCapacityWithOptions(request, runtime);
}

BatchPutKvWithHighCapacityResponse Client::batchPutKvWithHighCapacityAdvance(const BatchPutKvWithHighCapacityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ESA"},
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
  BatchPutKvWithHighCapacityRequest batchPutKvWithHighCapacityReq = BatchPutKvWithHighCapacityRequest();
  Utils::Utils::convert(request, batchPutKvWithHighCapacityReq);
  if (!!request.hasUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.urlObject()},
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
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader);
    batchPutKvWithHighCapacityReq.setUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  BatchPutKvWithHighCapacityResponse batchPutKvWithHighCapacityResp = batchPutKvWithHighCapacityWithOptions(batchPutKvWithHighCapacityReq, runtime);
  return batchPutKvWithHighCapacityResp;
}

/**
 * @summary Modifies multiple rules in a specific Web Application Firewall (WAF) ruleset at a time.
 *
 * @param tmpReq BatchUpdateWafRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUpdateWafRulesResponse
 */
BatchUpdateWafRulesResponse Client::batchUpdateWafRulesWithOptions(const BatchUpdateWafRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchUpdateWafRulesShrinkRequest request = BatchUpdateWafRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfigs()) {
    request.setConfigsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.configs(), "Configs", "json"));
  }

  if (!!tmpReq.hasShared()) {
    request.setSharedShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.shared(), "Shared", "json"));
  }

  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  json body = {};
  if (!!request.hasConfigsShrink()) {
    body["Configs"] = request.configsShrink();
  }

  if (!!request.hasPhase()) {
    body["Phase"] = request.phase();
  }

  if (!!request.hasRulesetId()) {
    body["RulesetId"] = request.rulesetId();
  }

  if (!!request.hasSharedShrink()) {
    body["Shared"] = request.sharedShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "BatchUpdateWafRules"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchUpdateWafRulesResponse>();
}

/**
 * @summary Modifies multiple rules in a specific Web Application Firewall (WAF) ruleset at a time.
 *
 * @param request BatchUpdateWafRulesRequest
 * @return BatchUpdateWafRulesResponse
 */
BatchUpdateWafRulesResponse Client::batchUpdateWafRules(const BatchUpdateWafRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchUpdateWafRulesWithOptions(request, runtime);
}

/**
 * @summary Blocks URLs.
 *
 * @param tmpReq BlockObjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BlockObjectResponse
 */
BlockObjectResponse Client::blockObjectWithOptions(const BlockObjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BlockObjectShrinkRequest request = BlockObjectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContent()) {
    request.setContentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.content(), "Content", "json"));
  }

  json query = {};
  if (!!request.hasContentShrink()) {
    query["Content"] = request.contentShrink();
  }

  if (!!request.hasExtension()) {
    query["Extension"] = request.extension();
  }

  if (!!request.hasMaxage()) {
    query["Maxage"] = request.maxage();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BlockObject"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BlockObjectResponse>();
}

/**
 * @summary Blocks URLs.
 *
 * @param request BlockObjectRequest
 * @return BlockObjectResponse
 */
BlockObjectResponse Client::blockObject(const BlockObjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return blockObjectWithOptions(request, runtime);
}

/**
 * @summary 检查实时日志slr角色是否已创建
 *
 * @param request CheckAssumeSlrRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckAssumeSlrRoleResponse
 */
CheckAssumeSlrRoleResponse Client::checkAssumeSlrRoleWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "CheckAssumeSlrRole"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckAssumeSlrRoleResponse>();
}

/**
 * @summary 检查实时日志slr角色是否已创建
 *
 * @return CheckAssumeSlrRoleResponse
 */
CheckAssumeSlrRoleResponse Client::checkAssumeSlrRole() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkAssumeSlrRoleWithOptions(runtime);
}

/**
 * @summary Checks whether a specified website name is available.
 *
 * @param request CheckSiteNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckSiteNameResponse
 */
CheckSiteNameResponse Client::checkSiteNameWithOptions(const CheckSiteNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteName()) {
    query["SiteName"] = request.siteName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckSiteName"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckSiteNameResponse>();
}

/**
 * @summary Checks whether a specified website name is available.
 *
 * @param request CheckSiteNameRequest
 * @return CheckSiteNameResponse
 */
CheckSiteNameResponse Client::checkSiteName(const CheckSiteNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkSiteNameWithOptions(request, runtime);
}

/**
 * @summary Checks the name of a real-time log delivery task.
 *
 * @param request CheckSiteProjectNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckSiteProjectNameResponse
 */
CheckSiteProjectNameResponse Client::checkSiteProjectNameWithOptions(const CheckSiteProjectNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckSiteProjectName"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckSiteProjectNameResponse>();
}

/**
 * @summary Checks the name of a real-time log delivery task.
 *
 * @param request CheckSiteProjectNameRequest
 * @return CheckSiteProjectNameResponse
 */
CheckSiteProjectNameResponse Client::checkSiteProjectName(const CheckSiteProjectNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkSiteProjectNameWithOptions(request, runtime);
}

/**
 * @summary Checks the name of a real-time log delivery task by account.
 *
 * @param request CheckUserProjectNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckUserProjectNameResponse
 */
CheckUserProjectNameResponse Client::checkUserProjectNameWithOptions(const CheckUserProjectNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckUserProjectName"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckUserProjectNameResponse>();
}

/**
 * @summary Checks the name of a real-time log delivery task by account.
 *
 * @param request CheckUserProjectNameRequest
 * @return CheckUserProjectNameResponse
 */
CheckUserProjectNameResponse Client::checkUserProjectName(const CheckUserProjectNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkUserProjectNameWithOptions(request, runtime);
}

/**
 * @summary Commits the unstable code in the staging environment to generate an official code version.
 *
 * @param request CommitRoutineStagingCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CommitRoutineStagingCodeResponse
 */
CommitRoutineStagingCodeResponse Client::commitRoutineStagingCodeWithOptions(const CommitRoutineStagingCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCodeDescription()) {
    body["CodeDescription"] = request.codeDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CommitRoutineStagingCode"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CommitRoutineStagingCodeResponse>();
}

/**
 * @summary Commits the unstable code in the staging environment to generate an official code version.
 *
 * @param request CommitRoutineStagingCodeRequest
 * @return CommitRoutineStagingCodeResponse
 */
CommitRoutineStagingCodeResponse Client::commitRoutineStagingCode(const CommitRoutineStagingCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return commitRoutineStagingCodeWithOptions(request, runtime);
}

/**
 * @summary Create a new site cache configuration
 *
 * @param request CreateCacheRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCacheRuleResponse
 */
CreateCacheRuleResponse Client::createCacheRuleWithOptions(const CreateCacheRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdditionalCacheablePorts()) {
    query["AdditionalCacheablePorts"] = request.additionalCacheablePorts();
  }

  if (!!request.hasBrowserCacheMode()) {
    query["BrowserCacheMode"] = request.browserCacheMode();
  }

  if (!!request.hasBrowserCacheTtl()) {
    query["BrowserCacheTtl"] = request.browserCacheTtl();
  }

  if (!!request.hasBypassCache()) {
    query["BypassCache"] = request.bypassCache();
  }

  if (!!request.hasCacheDeceptionArmor()) {
    query["CacheDeceptionArmor"] = request.cacheDeceptionArmor();
  }

  if (!!request.hasCacheReserveEligibility()) {
    query["CacheReserveEligibility"] = request.cacheReserveEligibility();
  }

  if (!!request.hasCheckPresenceCookie()) {
    query["CheckPresenceCookie"] = request.checkPresenceCookie();
  }

  if (!!request.hasCheckPresenceHeader()) {
    query["CheckPresenceHeader"] = request.checkPresenceHeader();
  }

  if (!!request.hasEdgeCacheMode()) {
    query["EdgeCacheMode"] = request.edgeCacheMode();
  }

  if (!!request.hasEdgeCacheTtl()) {
    query["EdgeCacheTtl"] = request.edgeCacheTtl();
  }

  if (!!request.hasEdgeStatusCodeCacheTtl()) {
    query["EdgeStatusCodeCacheTtl"] = request.edgeStatusCodeCacheTtl();
  }

  if (!!request.hasIncludeCookie()) {
    query["IncludeCookie"] = request.includeCookie();
  }

  if (!!request.hasIncludeHeader()) {
    query["IncludeHeader"] = request.includeHeader();
  }

  if (!!request.hasQueryString()) {
    query["QueryString"] = request.queryString();
  }

  if (!!request.hasQueryStringMode()) {
    query["QueryStringMode"] = request.queryStringMode();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasServeStale()) {
    query["ServeStale"] = request.serveStale();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  if (!!request.hasSortQueryStringForCache()) {
    query["SortQueryStringForCache"] = request.sortQueryStringForCache();
  }

  if (!!request.hasUserDeviceType()) {
    query["UserDeviceType"] = request.userDeviceType();
  }

  if (!!request.hasUserGeo()) {
    query["UserGeo"] = request.userGeo();
  }

  if (!!request.hasUserLanguage()) {
    query["UserLanguage"] = request.userLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCacheRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCacheRuleResponse>();
}

/**
 * @summary Create a new site cache configuration
 *
 * @param request CreateCacheRuleRequest
 * @return CreateCacheRuleResponse
 */
CreateCacheRuleResponse Client::createCacheRule(const CreateCacheRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCacheRuleWithOptions(request, runtime);
}

/**
 * @summary Uses the ESA-managed certificate authority (CA) to issue client certificates.
 *
 * @param request CreateClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClientCertificateResponse
 */
CreateClientCertificateResponse Client::createClientCertificateWithOptions(const CreateClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  json body = {};
  if (!!request.hasCSR()) {
    body["CSR"] = request.CSR();
  }

  if (!!request.hasPkeyType()) {
    body["PkeyType"] = request.pkeyType();
  }

  if (!!request.hasValidityDays()) {
    body["ValidityDays"] = request.validityDays();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateClientCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClientCertificateResponse>();
}

/**
 * @summary Uses the ESA-managed certificate authority (CA) to issue client certificates.
 *
 * @param request CreateClientCertificateRequest
 * @return CreateClientCertificateResponse
 */
CreateClientCertificateResponse Client::createClientCertificate(const CreateClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClientCertificateWithOptions(request, runtime);
}

/**
 * @summary Add a compression rule
 *
 * @param request CreateCompressionRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCompressionRuleResponse
 */
CreateCompressionRuleResponse Client::createCompressionRuleWithOptions(const CreateCompressionRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrotli()) {
    query["Brotli"] = request.brotli();
  }

  if (!!request.hasGzip()) {
    query["Gzip"] = request.gzip();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  if (!!request.hasZstd()) {
    query["Zstd"] = request.zstd();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCompressionRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCompressionRuleResponse>();
}

/**
 * @summary Add a compression rule
 *
 * @param request CreateCompressionRuleRequest
 * @return CreateCompressionRuleResponse
 */
CreateCompressionRuleResponse Client::createCompressionRule(const CreateCompressionRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCompressionRuleWithOptions(request, runtime);
}

/**
 * @summary Creates an account-level custom scenario policy. You can execute a policy after you associate the policy with a website.
 *
 * @param request CreateCustomScenePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomScenePolicyResponse
 */
CreateCustomScenePolicyResponse Client::createCustomScenePolicyWithOptions(const CreateCustomScenePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasObjects()) {
    query["Objects"] = request.objects();
  }

  if (!!request.hasSiteIds()) {
    query["SiteIds"] = request.siteIds();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTemplate()) {
    query["Template"] = request._template();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomScenePolicy"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomScenePolicyResponse>();
}

/**
 * @summary Creates an account-level custom scenario policy. You can execute a policy after you associate the policy with a website.
 *
 * @param request CreateCustomScenePolicyRequest
 * @return CreateCustomScenePolicyResponse
 */
CreateCustomScenePolicyResponse Client::createCustomScenePolicy(const CreateCustomScenePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomScenePolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a containerized application. You can deploy and release a version of the application across points of presence (POPs).
 *
 * @param request CreateEdgeContainerAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEdgeContainerAppResponse
 */
CreateEdgeContainerAppResponse Client::createEdgeContainerAppWithOptions(const CreateEdgeContainerAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasHealthCheckFailTimes()) {
    body["HealthCheckFailTimes"] = request.healthCheckFailTimes();
  }

  if (!!request.hasHealthCheckHost()) {
    body["HealthCheckHost"] = request.healthCheckHost();
  }

  if (!!request.hasHealthCheckHttpCode()) {
    body["HealthCheckHttpCode"] = request.healthCheckHttpCode();
  }

  if (!!request.hasHealthCheckInterval()) {
    body["HealthCheckInterval"] = request.healthCheckInterval();
  }

  if (!!request.hasHealthCheckMethod()) {
    body["HealthCheckMethod"] = request.healthCheckMethod();
  }

  if (!!request.hasHealthCheckPort()) {
    body["HealthCheckPort"] = request.healthCheckPort();
  }

  if (!!request.hasHealthCheckSuccTimes()) {
    body["HealthCheckSuccTimes"] = request.healthCheckSuccTimes();
  }

  if (!!request.hasHealthCheckTimeout()) {
    body["HealthCheckTimeout"] = request.healthCheckTimeout();
  }

  if (!!request.hasHealthCheckType()) {
    body["HealthCheckType"] = request.healthCheckType();
  }

  if (!!request.hasHealthCheckURI()) {
    body["HealthCheckURI"] = request.healthCheckURI();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasRemarks()) {
    body["Remarks"] = request.remarks();
  }

  if (!!request.hasServicePort()) {
    body["ServicePort"] = request.servicePort();
  }

  if (!!request.hasTargetPort()) {
    body["TargetPort"] = request.targetPort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateEdgeContainerApp"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEdgeContainerAppResponse>();
}

/**
 * @summary Creates a containerized application. You can deploy and release a version of the application across points of presence (POPs).
 *
 * @param request CreateEdgeContainerAppRequest
 * @return CreateEdgeContainerAppResponse
 */
CreateEdgeContainerAppResponse Client::createEdgeContainerApp(const CreateEdgeContainerAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEdgeContainerAppWithOptions(request, runtime);
}

/**
 * @summary Associates a domain name with a containerized application. This way, requests destined for the associated domain name are forwarded to the application.
 *
 * @param request CreateEdgeContainerAppRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEdgeContainerAppRecordResponse
 */
CreateEdgeContainerAppRecordResponse Client::createEdgeContainerAppRecordWithOptions(const CreateEdgeContainerAppRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasRecordName()) {
    body["RecordName"] = request.recordName();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateEdgeContainerAppRecord"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEdgeContainerAppRecordResponse>();
}

/**
 * @summary Associates a domain name with a containerized application. This way, requests destined for the associated domain name are forwarded to the application.
 *
 * @param request CreateEdgeContainerAppRecordRequest
 * @return CreateEdgeContainerAppRecordResponse
 */
CreateEdgeContainerAppRecordResponse Client::createEdgeContainerAppRecord(const CreateEdgeContainerAppRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEdgeContainerAppRecordWithOptions(request, runtime);
}

/**
 * @summary Creates a version for a containerized application. You can iterate the application based on the version.
 *
 * @param tmpReq CreateEdgeContainerAppVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEdgeContainerAppVersionResponse
 */
CreateEdgeContainerAppVersionResponse Client::createEdgeContainerAppVersionWithOptions(const CreateEdgeContainerAppVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateEdgeContainerAppVersionShrinkRequest request = CreateEdgeContainerAppVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContainers()) {
    request.setContainersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.containers(), "Containers", "json"));
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasContainersShrink()) {
    body["Containers"] = request.containersShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasRemarks()) {
    body["Remarks"] = request.remarks();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateEdgeContainerAppVersion"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEdgeContainerAppVersionResponse>();
}

/**
 * @summary Creates a version for a containerized application. You can iterate the application based on the version.
 *
 * @param request CreateEdgeContainerAppVersionRequest
 * @return CreateEdgeContainerAppVersionResponse
 */
CreateEdgeContainerAppVersionResponse Client::createEdgeContainerAppVersion(const CreateEdgeContainerAppVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEdgeContainerAppVersionWithOptions(request, runtime);
}

/**
 * @summary 新增HTTP入站请求头规则
 *
 * @param tmpReq CreateHttpIncomingRequestHeaderModificationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHttpIncomingRequestHeaderModificationRuleResponse
 */
CreateHttpIncomingRequestHeaderModificationRuleResponse Client::createHttpIncomingRequestHeaderModificationRuleWithOptions(const CreateHttpIncomingRequestHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateHttpIncomingRequestHeaderModificationRuleShrinkRequest request = CreateHttpIncomingRequestHeaderModificationRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRequestHeaderModification()) {
    request.setRequestHeaderModificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.requestHeaderModification(), "RequestHeaderModification", "json"));
  }

  json query = {};
  if (!!request.hasRequestHeaderModificationShrink()) {
    query["RequestHeaderModification"] = request.requestHeaderModificationShrink();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHttpIncomingRequestHeaderModificationRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHttpIncomingRequestHeaderModificationRuleResponse>();
}

/**
 * @summary 新增HTTP入站请求头规则
 *
 * @param request CreateHttpIncomingRequestHeaderModificationRuleRequest
 * @return CreateHttpIncomingRequestHeaderModificationRuleResponse
 */
CreateHttpIncomingRequestHeaderModificationRuleResponse Client::createHttpIncomingRequestHeaderModificationRule(const CreateHttpIncomingRequestHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHttpIncomingRequestHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary 新增HTTP入站响应头规则
 *
 * @param tmpReq CreateHttpIncomingResponseHeaderModificationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHttpIncomingResponseHeaderModificationRuleResponse
 */
CreateHttpIncomingResponseHeaderModificationRuleResponse Client::createHttpIncomingResponseHeaderModificationRuleWithOptions(const CreateHttpIncomingResponseHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateHttpIncomingResponseHeaderModificationRuleShrinkRequest request = CreateHttpIncomingResponseHeaderModificationRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResponseHeaderModification()) {
    request.setResponseHeaderModificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.responseHeaderModification(), "ResponseHeaderModification", "json"));
  }

  json query = {};
  if (!!request.hasResponseHeaderModificationShrink()) {
    query["ResponseHeaderModification"] = request.responseHeaderModificationShrink();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHttpIncomingResponseHeaderModificationRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHttpIncomingResponseHeaderModificationRuleResponse>();
}

/**
 * @summary 新增HTTP入站响应头规则
 *
 * @param request CreateHttpIncomingResponseHeaderModificationRuleRequest
 * @return CreateHttpIncomingResponseHeaderModificationRuleResponse
 */
CreateHttpIncomingResponseHeaderModificationRuleResponse Client::createHttpIncomingResponseHeaderModificationRule(const CreateHttpIncomingResponseHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHttpIncomingResponseHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Add HTTP Request Header Rule
 *
 * @param tmpReq CreateHttpRequestHeaderModificationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHttpRequestHeaderModificationRuleResponse
 */
CreateHttpRequestHeaderModificationRuleResponse Client::createHttpRequestHeaderModificationRuleWithOptions(const CreateHttpRequestHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateHttpRequestHeaderModificationRuleShrinkRequest request = CreateHttpRequestHeaderModificationRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRequestHeaderModification()) {
    request.setRequestHeaderModificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.requestHeaderModification(), "RequestHeaderModification", "json"));
  }

  json query = {};
  if (!!request.hasRequestHeaderModificationShrink()) {
    query["RequestHeaderModification"] = request.requestHeaderModificationShrink();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHttpRequestHeaderModificationRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHttpRequestHeaderModificationRuleResponse>();
}

/**
 * @summary Add HTTP Request Header Rule
 *
 * @param request CreateHttpRequestHeaderModificationRuleRequest
 * @return CreateHttpRequestHeaderModificationRuleResponse
 */
CreateHttpRequestHeaderModificationRuleResponse Client::createHttpRequestHeaderModificationRule(const CreateHttpRequestHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHttpRequestHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Add HTTP Response Header Rule
 *
 * @param tmpReq CreateHttpResponseHeaderModificationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHttpResponseHeaderModificationRuleResponse
 */
CreateHttpResponseHeaderModificationRuleResponse Client::createHttpResponseHeaderModificationRuleWithOptions(const CreateHttpResponseHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateHttpResponseHeaderModificationRuleShrinkRequest request = CreateHttpResponseHeaderModificationRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResponseHeaderModification()) {
    request.setResponseHeaderModificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.responseHeaderModification(), "ResponseHeaderModification", "json"));
  }

  json query = {};
  if (!!request.hasResponseHeaderModificationShrink()) {
    query["ResponseHeaderModification"] = request.responseHeaderModificationShrink();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHttpResponseHeaderModificationRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHttpResponseHeaderModificationRuleResponse>();
}

/**
 * @summary Add HTTP Response Header Rule
 *
 * @param request CreateHttpResponseHeaderModificationRuleRequest
 * @return CreateHttpResponseHeaderModificationRuleResponse
 */
CreateHttpResponseHeaderModificationRuleResponse Client::createHttpResponseHeaderModificationRule(const CreateHttpResponseHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHttpResponseHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Create a new site HTTPS application configuration
 *
 * @param request CreateHttpsApplicationConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHttpsApplicationConfigurationResponse
 */
CreateHttpsApplicationConfigurationResponse Client::createHttpsApplicationConfigurationWithOptions(const CreateHttpsApplicationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAltSvc()) {
    query["AltSvc"] = request.altSvc();
  }

  if (!!request.hasAltSvcClear()) {
    query["AltSvcClear"] = request.altSvcClear();
  }

  if (!!request.hasAltSvcMa()) {
    query["AltSvcMa"] = request.altSvcMa();
  }

  if (!!request.hasAltSvcPersist()) {
    query["AltSvcPersist"] = request.altSvcPersist();
  }

  if (!!request.hasHsts()) {
    query["Hsts"] = request.hsts();
  }

  if (!!request.hasHstsIncludeSubdomains()) {
    query["HstsIncludeSubdomains"] = request.hstsIncludeSubdomains();
  }

  if (!!request.hasHstsMaxAge()) {
    query["HstsMaxAge"] = request.hstsMaxAge();
  }

  if (!!request.hasHstsPreload()) {
    query["HstsPreload"] = request.hstsPreload();
  }

  if (!!request.hasHttpsForce()) {
    query["HttpsForce"] = request.httpsForce();
  }

  if (!!request.hasHttpsForceCode()) {
    query["HttpsForceCode"] = request.httpsForceCode();
  }

  if (!!request.hasHttpsNoSniDeny()) {
    query["HttpsNoSniDeny"] = request.httpsNoSniDeny();
  }

  if (!!request.hasHttpsSniVerify()) {
    query["HttpsSniVerify"] = request.httpsSniVerify();
  }

  if (!!request.hasHttpsSniWhitelist()) {
    query["HttpsSniWhitelist"] = request.httpsSniWhitelist();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHttpsApplicationConfiguration"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHttpsApplicationConfigurationResponse>();
}

/**
 * @summary Create a new site HTTPS application configuration
 *
 * @param request CreateHttpsApplicationConfigurationRequest
 * @return CreateHttpsApplicationConfigurationResponse
 */
CreateHttpsApplicationConfigurationResponse Client::createHttpsApplicationConfiguration(const CreateHttpsApplicationConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHttpsApplicationConfigurationWithOptions(request, runtime);
}

/**
 * @summary Create a new site HTTPS basic configuration
 *
 * @param request CreateHttpsBasicConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHttpsBasicConfigurationResponse
 */
CreateHttpsBasicConfigurationResponse Client::createHttpsBasicConfigurationWithOptions(const CreateHttpsBasicConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCiphersuite()) {
    query["Ciphersuite"] = request.ciphersuite();
  }

  if (!!request.hasCiphersuiteGroup()) {
    query["CiphersuiteGroup"] = request.ciphersuiteGroup();
  }

  if (!!request.hasHttp2()) {
    query["Http2"] = request.http2();
  }

  if (!!request.hasHttp3()) {
    query["Http3"] = request.http3();
  }

  if (!!request.hasHttps()) {
    query["Https"] = request.https();
  }

  if (!!request.hasOcspStapling()) {
    query["OcspStapling"] = request.ocspStapling();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasTls10()) {
    query["Tls10"] = request.tls10();
  }

  if (!!request.hasTls11()) {
    query["Tls11"] = request.tls11();
  }

  if (!!request.hasTls12()) {
    query["Tls12"] = request.tls12();
  }

  if (!!request.hasTls13()) {
    query["Tls13"] = request.tls13();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHttpsBasicConfiguration"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHttpsBasicConfigurationResponse>();
}

/**
 * @summary Create a new site HTTPS basic configuration
 *
 * @param request CreateHttpsBasicConfigurationRequest
 * @return CreateHttpsBasicConfigurationResponse
 */
CreateHttpsBasicConfigurationResponse Client::createHttpsBasicConfiguration(const CreateHttpsBasicConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHttpsBasicConfigurationWithOptions(request, runtime);
}

/**
 * @summary Add Site Image Transformation Configuration
 *
 * @param request CreateImageTransformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImageTransformResponse
 */
CreateImageTransformResponse Client::createImageTransformWithOptions(const CreateImageTransformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateImageTransform"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateImageTransformResponse>();
}

/**
 * @summary Add Site Image Transformation Configuration
 *
 * @param request CreateImageTransformRequest
 * @return CreateImageTransformResponse
 */
CreateImageTransformResponse Client::createImageTransform(const CreateImageTransformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImageTransformWithOptions(request, runtime);
}

/**
 * @summary Create a namespace in your Alibaba Cloud account.
 *
 * @param request CreateKvNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKvNamespaceResponse
 */
CreateKvNamespaceResponse Client::createKvNamespaceWithOptions(const CreateKvNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request._namespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateKvNamespace"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateKvNamespaceResponse>();
}

/**
 * @summary Create a namespace in your Alibaba Cloud account.
 *
 * @param request CreateKvNamespaceRequest
 * @return CreateKvNamespaceResponse
 */
CreateKvNamespaceResponse Client::createKvNamespace(const CreateKvNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createKvNamespaceWithOptions(request, runtime);
}

/**
 * @summary Creates a list. Lists are used for the referencing of values in the rules engine to implement complex logic and control in security policies.
 *
 * @param tmpReq CreateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateListResponse
 */
CreateListResponse Client::createListWithOptions(const CreateListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateListShrinkRequest request = CreateListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasItems()) {
    request.setItemsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.items(), "Items", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasItemsShrink()) {
    body["Items"] = request.itemsShrink();
  }

  if (!!request.hasKind()) {
    body["Kind"] = request.kind();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateList"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateListResponse>();
}

/**
 * @summary Creates a list. Lists are used for the referencing of values in the rules engine to implement complex logic and control in security policies.
 *
 * @param request CreateListRequest
 * @return CreateListResponse
 */
CreateListResponse Client::createList(const CreateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createListWithOptions(request, runtime);
}

/**
 * @summary Add a New Load Balancer
 *
 * @description Through this API, users can configure load balancing services according to their business needs, including but not limited to adaptive routing, weighted round-robin, rule matching, health checks, and more, to achieve effective traffic management and optimization.
 *
 * @param tmpReq CreateLoadBalancerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLoadBalancerResponse
 */
CreateLoadBalancerResponse Client::createLoadBalancerWithOptions(const CreateLoadBalancerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateLoadBalancerShrinkRequest request = CreateLoadBalancerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAdaptiveRouting()) {
    request.setAdaptiveRoutingShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.adaptiveRouting(), "AdaptiveRouting", "json"));
  }

  if (!!tmpReq.hasDefaultPools()) {
    request.setDefaultPoolsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.defaultPools(), "DefaultPools", "json"));
  }

  if (!!tmpReq.hasMonitor()) {
    request.setMonitorShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.monitor(), "Monitor", "json"));
  }

  if (!!tmpReq.hasRandomSteering()) {
    request.setRandomSteeringShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.randomSteering(), "RandomSteering", "json"));
  }

  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.rules(), "Rules", "json"));
  }

  json query = {};
  if (!!request.hasAdaptiveRoutingShrink()) {
    query["AdaptiveRouting"] = request.adaptiveRoutingShrink();
  }

  if (!!request.hasDefaultPoolsShrink()) {
    query["DefaultPools"] = request.defaultPoolsShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.enabled();
  }

  if (!!request.hasFallbackPool()) {
    query["FallbackPool"] = request.fallbackPool();
  }

  if (!!request.hasMonitorShrink()) {
    query["Monitor"] = request.monitorShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasRandomSteeringShrink()) {
    query["RandomSteering"] = request.randomSteeringShrink();
  }

  if (!!request.hasRegionPools()) {
    query["RegionPools"] = request.regionPools();
  }

  if (!!request.hasRulesShrink()) {
    query["Rules"] = request.rulesShrink();
  }

  if (!!request.hasSessionAffinity()) {
    query["SessionAffinity"] = request.sessionAffinity();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSteeringPolicy()) {
    query["SteeringPolicy"] = request.steeringPolicy();
  }

  if (!!request.hasSubRegionPools()) {
    query["SubRegionPools"] = request.subRegionPools();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.ttl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLoadBalancer"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLoadBalancerResponse>();
}

/**
 * @summary Add a New Load Balancer
 *
 * @description Through this API, users can configure load balancing services according to their business needs, including but not limited to adaptive routing, weighted round-robin, rule matching, health checks, and more, to achieve effective traffic management and optimization.
 *
 * @param request CreateLoadBalancerRequest
 * @return CreateLoadBalancerResponse
 */
CreateLoadBalancerResponse Client::createLoadBalancer(const CreateLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary Create a new site network optimization configuration
 *
 * @param request CreateNetworkOptimizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNetworkOptimizationResponse
 */
CreateNetworkOptimizationResponse Client::createNetworkOptimizationWithOptions(const CreateNetworkOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGrpc()) {
    query["Grpc"] = request.grpc();
  }

  if (!!request.hasHttp2Origin()) {
    query["Http2Origin"] = request.http2Origin();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  if (!!request.hasSmartRouting()) {
    query["SmartRouting"] = request.smartRouting();
  }

  if (!!request.hasUploadMaxFilesize()) {
    query["UploadMaxFilesize"] = request.uploadMaxFilesize();
  }

  if (!!request.hasWebsocket()) {
    query["Websocket"] = request.websocket();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNetworkOptimization"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNetworkOptimizationResponse>();
}

/**
 * @summary Create a new site network optimization configuration
 *
 * @param request CreateNetworkOptimizationRequest
 * @return CreateNetworkOptimizationResponse
 */
CreateNetworkOptimizationResponse Client::createNetworkOptimization(const CreateNetworkOptimizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNetworkOptimizationWithOptions(request, runtime);
}

/**
 * @summary Add a new origin address pool
 *
 * @description Multiple origins can be added under the origin address, supporting domain names, IPs, OSS, S3, and other types of origins. It supports authentication for OSS and S3 type origins.
 *
 * @param tmpReq CreateOriginPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOriginPoolResponse
 */
CreateOriginPoolResponse Client::createOriginPoolWithOptions(const CreateOriginPoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateOriginPoolShrinkRequest request = CreateOriginPoolShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOrigins()) {
    request.setOriginsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.origins(), "Origins", "json"));
  }

  json query = {};
  if (!!request.hasEnabled()) {
    query["Enabled"] = request.enabled();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOriginsShrink()) {
    query["Origins"] = request.originsShrink();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOriginPool"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOriginPoolResponse>();
}

/**
 * @summary Add a new origin address pool
 *
 * @description Multiple origins can be added under the origin address, supporting domain names, IPs, OSS, S3, and other types of origins. It supports authentication for OSS and S3 type origins.
 *
 * @param request CreateOriginPoolRequest
 * @return CreateOriginPoolResponse
 */
CreateOriginPoolResponse Client::createOriginPool(const CreateOriginPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOriginPoolWithOptions(request, runtime);
}

/**
 * @summary Enables origin protection.
 *
 * @param request CreateOriginProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOriginProtectionResponse
 */
CreateOriginProtectionResponse Client::createOriginProtectionWithOptions(const CreateOriginProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOriginProtection"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOriginProtectionResponse>();
}

/**
 * @summary Enables origin protection.
 *
 * @param request CreateOriginProtectionRequest
 * @return CreateOriginProtectionResponse
 */
CreateOriginProtectionResponse Client::createOriginProtection(const CreateOriginProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOriginProtectionWithOptions(request, runtime);
}

/**
 * @summary Create a new origin rule configuration for the site
 *
 * @param request CreateOriginRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOriginRuleResponse
 */
CreateOriginRuleResponse Client::createOriginRuleWithOptions(const CreateOriginRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDnsRecord()) {
    query["DnsRecord"] = request.dnsRecord();
  }

  if (!!request.hasFollow302Enable()) {
    query["Follow302Enable"] = request.follow302Enable();
  }

  if (!!request.hasFollow302MaxTries()) {
    query["Follow302MaxTries"] = request.follow302MaxTries();
  }

  if (!!request.hasFollow302RetainArgs()) {
    query["Follow302RetainArgs"] = request.follow302RetainArgs();
  }

  if (!!request.hasFollow302RetainHeader()) {
    query["Follow302RetainHeader"] = request.follow302RetainHeader();
  }

  if (!!request.hasFollow302TargetHost()) {
    query["Follow302TargetHost"] = request.follow302TargetHost();
  }

  if (!!request.hasOriginHost()) {
    query["OriginHost"] = request.originHost();
  }

  if (!!request.hasOriginHttpPort()) {
    query["OriginHttpPort"] = request.originHttpPort();
  }

  if (!!request.hasOriginHttpsPort()) {
    query["OriginHttpsPort"] = request.originHttpsPort();
  }

  if (!!request.hasOriginMtls()) {
    query["OriginMtls"] = request.originMtls();
  }

  if (!!request.hasOriginReadTimeout()) {
    query["OriginReadTimeout"] = request.originReadTimeout();
  }

  if (!!request.hasOriginScheme()) {
    query["OriginScheme"] = request.originScheme();
  }

  if (!!request.hasOriginSni()) {
    query["OriginSni"] = request.originSni();
  }

  if (!!request.hasOriginVerify()) {
    query["OriginVerify"] = request.originVerify();
  }

  if (!!request.hasRange()) {
    query["Range"] = request.range();
  }

  if (!!request.hasRangeChunkSize()) {
    query["RangeChunkSize"] = request.rangeChunkSize();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateOriginRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOriginRuleResponse>();
}

/**
 * @summary Create a new origin rule configuration for the site
 *
 * @param request CreateOriginRuleRequest
 * @return CreateOriginRuleResponse
 */
CreateOriginRuleResponse Client::createOriginRule(const CreateOriginRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOriginRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a custom error page, which is displayed when a request is blocked by Web Application Firewall (WAF). You can configure the HTML content, page type, and description, and submit the Base64-encoded page content.
 *
 * @param request CreatePageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePageResponse
 */
CreatePageResponse Client::createPageWithOptions(const CreatePageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasContentType()) {
    body["ContentType"] = request.contentType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreatePage"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePageResponse>();
}

/**
 * @summary Creates a custom error page, which is displayed when a request is blocked by Web Application Firewall (WAF). You can configure the HTML content, page type, and description, and submit the Base64-encoded page content.
 *
 * @param request CreatePageRequest
 * @return CreatePageResponse
 */
CreatePageResponse Client::createPage(const CreatePageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPageWithOptions(request, runtime);
}

/**
 * @summary Creates a DNS record for a specific website.
 *
 * @param tmpReq CreateRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecordResponse
 */
CreateRecordResponse Client::createRecordWithOptions(const CreateRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateRecordShrinkRequest request = CreateRecordShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAuthConf()) {
    request.setAuthConfShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.authConf(), "AuthConf", "json"));
  }

  if (!!tmpReq.hasData()) {
    request.setDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.data(), "Data", "json"));
  }

  json query = {};
  if (!!request.hasAuthConfShrink()) {
    query["AuthConf"] = request.authConfShrink();
  }

  if (!!request.hasBizName()) {
    query["BizName"] = request.bizName();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.comment();
  }

  if (!!request.hasDataShrink()) {
    query["Data"] = request.dataShrink();
  }

  if (!!request.hasHostPolicy()) {
    query["HostPolicy"] = request.hostPolicy();
  }

  if (!!request.hasProxied()) {
    query["Proxied"] = request.proxied();
  }

  if (!!request.hasRecordName()) {
    query["RecordName"] = request.recordName();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.ttl();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRecord"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecordResponse>();
}

/**
 * @summary Creates a DNS record for a specific website.
 *
 * @param request CreateRecordRequest
 * @return CreateRecordResponse
 */
CreateRecordResponse Client::createRecord(const CreateRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRecordWithOptions(request, runtime);
}

/**
 * @summary Add a Redirect Rule
 *
 * @param request CreateRedirectRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRedirectRuleResponse
 */
CreateRedirectRuleResponse Client::createRedirectRuleWithOptions(const CreateRedirectRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReserveQueryString()) {
    query["ReserveQueryString"] = request.reserveQueryString();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  if (!!request.hasStatusCode()) {
    query["StatusCode"] = request.statusCode();
  }

  if (!!request.hasTargetUrl()) {
    query["TargetUrl"] = request.targetUrl();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRedirectRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRedirectRuleResponse>();
}

/**
 * @summary Add a Redirect Rule
 *
 * @param request CreateRedirectRuleRequest
 * @return CreateRedirectRuleResponse
 */
CreateRedirectRuleResponse Client::createRedirectRule(const CreateRedirectRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRedirectRuleWithOptions(request, runtime);
}

/**
 * @summary Add Rewrite URL Rule
 *
 * @param request CreateRewriteUrlRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRewriteUrlRuleResponse
 */
CreateRewriteUrlRuleResponse Client::createRewriteUrlRuleWithOptions(const CreateRewriteUrlRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQueryString()) {
    query["QueryString"] = request.queryString();
  }

  if (!!request.hasRewriteQueryStringType()) {
    query["RewriteQueryStringType"] = request.rewriteQueryStringType();
  }

  if (!!request.hasRewriteUriType()) {
    query["RewriteUriType"] = request.rewriteUriType();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  if (!!request.hasUri()) {
    query["Uri"] = request.uri();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRewriteUrlRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRewriteUrlRuleResponse>();
}

/**
 * @summary Add Rewrite URL Rule
 *
 * @param request CreateRewriteUrlRuleRequest
 * @return CreateRewriteUrlRuleResponse
 */
CreateRewriteUrlRuleResponse Client::createRewriteUrlRule(const CreateRewriteUrlRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRewriteUrlRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a routine.
 *
 * @param request CreateRoutineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRoutineResponse
 */
CreateRoutineResponse Client::createRoutineWithOptions(const CreateRoutineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasHasAssets()) {
    body["HasAssets"] = request.hasAssets();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateRoutine"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRoutineResponse>();
}

/**
 * @summary Creates a routine.
 *
 * @param request CreateRoutineRequest
 * @return CreateRoutineResponse
 */
CreateRoutineResponse Client::createRoutine(const CreateRoutineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRoutineWithOptions(request, runtime);
}

/**
 * @summary 发布Routine某版本代码
 *
 * @param tmpReq CreateRoutineCodeDeploymentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRoutineCodeDeploymentResponse
 */
CreateRoutineCodeDeploymentResponse Client::createRoutineCodeDeploymentWithOptions(const CreateRoutineCodeDeploymentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateRoutineCodeDeploymentShrinkRequest request = CreateRoutineCodeDeploymentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCodeVersions()) {
    request.setCodeVersionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.codeVersions(), "CodeVersions", "json"));
  }

  json body = {};
  if (!!request.hasCodeVersionsShrink()) {
    body["CodeVersions"] = request.codeVersionsShrink();
  }

  if (!!request.hasEnv()) {
    body["Env"] = request.env();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasStrategy()) {
    body["Strategy"] = request.strategy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateRoutineCodeDeployment"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRoutineCodeDeploymentResponse>();
}

/**
 * @summary 发布Routine某版本代码
 *
 * @param request CreateRoutineCodeDeploymentRequest
 * @return CreateRoutineCodeDeploymentResponse
 */
CreateRoutineCodeDeploymentResponse Client::createRoutineCodeDeployment(const CreateRoutineCodeDeploymentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRoutineCodeDeploymentWithOptions(request, runtime);
}

/**
 * @summary Adds a record to map a domain that is associated with a routine. This record is used to trigger the associated routine code.
 *
 * @param request CreateRoutineRelatedRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRoutineRelatedRecordResponse
 */
CreateRoutineRelatedRecordResponse Client::createRoutineRelatedRecordWithOptions(const CreateRoutineRelatedRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasRecordName()) {
    body["RecordName"] = request.recordName();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateRoutineRelatedRecord"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRoutineRelatedRecordResponse>();
}

/**
 * @summary Adds a record to map a domain that is associated with a routine. This record is used to trigger the associated routine code.
 *
 * @param request CreateRoutineRelatedRecordRequest
 * @return CreateRoutineRelatedRecordResponse
 */
CreateRoutineRelatedRecordResponse Client::createRoutineRelatedRecord(const CreateRoutineRelatedRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRoutineRelatedRecordWithOptions(request, runtime);
}

/**
 * @summary 新增边缘函数路由配置
 *
 * @param request CreateRoutineRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRoutineRouteResponse
 */
CreateRoutineRouteResponse Client::createRoutineRouteWithOptions(const CreateRoutineRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBypass()) {
    query["Bypass"] = request.bypass();
  }

  if (!!request.hasFallback()) {
    query["Fallback"] = request.fallback();
  }

  if (!!request.hasRouteEnable()) {
    query["RouteEnable"] = request.routeEnable();
  }

  if (!!request.hasRouteName()) {
    query["RouteName"] = request.routeName();
  }

  if (!!request.hasRoutineName()) {
    query["RoutineName"] = request.routineName();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRoutineRoute"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRoutineRouteResponse>();
}

/**
 * @summary 新增边缘函数路由配置
 *
 * @param request CreateRoutineRouteRequest
 * @return CreateRoutineRouteResponse
 */
CreateRoutineRouteResponse Client::createRoutineRoute(const CreateRoutineRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRoutineRouteWithOptions(request, runtime);
}

/**
 * @summary 创建带Assets资源的Routine代码版本
 *
 * @param tmpReq CreateRoutineWithAssetsCodeVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRoutineWithAssetsCodeVersionResponse
 */
CreateRoutineWithAssetsCodeVersionResponse Client::createRoutineWithAssetsCodeVersionWithOptions(const CreateRoutineWithAssetsCodeVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateRoutineWithAssetsCodeVersionShrinkRequest request = CreateRoutineWithAssetsCodeVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfOptions()) {
    request.setConfOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.confOptions(), "ConfOptions", "json"));
  }

  json body = {};
  if (!!request.hasBuildId()) {
    body["BuildId"] = request.buildId();
  }

  if (!!request.hasCodeDescription()) {
    body["CodeDescription"] = request.codeDescription();
  }

  if (!!request.hasConfOptionsShrink()) {
    body["ConfOptions"] = request.confOptionsShrink();
  }

  if (!!request.hasExtraInfo()) {
    body["ExtraInfo"] = request.extraInfo();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateRoutineWithAssetsCodeVersion"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRoutineWithAssetsCodeVersionResponse>();
}

/**
 * @summary 创建带Assets资源的Routine代码版本
 *
 * @param request CreateRoutineWithAssetsCodeVersionRequest
 * @return CreateRoutineWithAssetsCodeVersionResponse
 */
CreateRoutineWithAssetsCodeVersionResponse Client::createRoutineWithAssetsCodeVersion(const CreateRoutineWithAssetsCodeVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRoutineWithAssetsCodeVersionWithOptions(request, runtime);
}

/**
 * @summary Creates scheduled prefetch plans.
 *
 * @param tmpReq CreateScheduledPreloadExecutionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScheduledPreloadExecutionsResponse
 */
CreateScheduledPreloadExecutionsResponse Client::createScheduledPreloadExecutionsWithOptions(const CreateScheduledPreloadExecutionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateScheduledPreloadExecutionsShrinkRequest request = CreateScheduledPreloadExecutionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExecutions()) {
    request.setExecutionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.executions(), "Executions", "json"));
  }

  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  json body = {};
  if (!!request.hasExecutionsShrink()) {
    body["Executions"] = request.executionsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateScheduledPreloadExecutions"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScheduledPreloadExecutionsResponse>();
}

/**
 * @summary Creates scheduled prefetch plans.
 *
 * @param request CreateScheduledPreloadExecutionsRequest
 * @return CreateScheduledPreloadExecutionsResponse
 */
CreateScheduledPreloadExecutionsResponse Client::createScheduledPreloadExecutions(const CreateScheduledPreloadExecutionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScheduledPreloadExecutionsWithOptions(request, runtime);
}

/**
 * @summary Adds a scheduled prefetch task.
 *
 * @param request CreateScheduledPreloadJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScheduledPreloadJobResponse
 */
CreateScheduledPreloadJobResponse Client::createScheduledPreloadJobWithOptions(const CreateScheduledPreloadJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInsertWay()) {
    body["InsertWay"] = request.insertWay();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasOssUrl()) {
    body["OssUrl"] = request.ossUrl();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.siteId();
  }

  if (!!request.hasUrlList()) {
    body["UrlList"] = request.urlList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateScheduledPreloadJob"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScheduledPreloadJobResponse>();
}

/**
 * @summary Adds a scheduled prefetch task.
 *
 * @param request CreateScheduledPreloadJobRequest
 * @return CreateScheduledPreloadJobResponse
 */
CreateScheduledPreloadJobResponse Client::createScheduledPreloadJob(const CreateScheduledPreloadJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScheduledPreloadJobWithOptions(request, runtime);
}

/**
 * @summary Adds a website.
 *
 * @description *   Make sure that you have an available plan before you add a website.
 * *   Make sure that your website domain name has an ICP filing if the location you want to specify covers the Chinese mainland.
 *
 * @param request CreateSiteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSiteResponse
 */
CreateSiteResponse Client::createSiteWithOptions(const CreateSiteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessType()) {
    query["AccessType"] = request.accessType();
  }

  if (!!request.hasCoverage()) {
    query["Coverage"] = request.coverage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSiteName()) {
    query["SiteName"] = request.siteName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSite"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSiteResponse>();
}

/**
 * @summary Adds a website.
 *
 * @description *   Make sure that you have an available plan before you add a website.
 * *   Make sure that your website domain name has an ICP filing if the location you want to specify covers the Chinese mainland.
 *
 * @param request CreateSiteRequest
 * @return CreateSiteResponse
 */
CreateSiteResponse Client::createSite(const CreateSiteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSiteWithOptions(request, runtime);
}

/**
 * @summary Adds the configuration of custom request header, response header, and cookie fields that are used to capture logs of a website.
 *
 * @description *   **Custom field limits**: The key name of a custom field can contain only letters, digits, underscores (_), and spaces. The key name cannot contain other characters. Otherwise, errors may occur.
 * *   **Parameter passing**: Submit `SiteId`, `RequestHeaders`, `ResponseHeaders`, and `Cookies` by using `formData`. Each array element matches a custom field name.
 * *   **(Required) SiteId**: Although `SiteId` is not marked as required in the Required column, you must specify a website ID by using this parameter when you can call this API operation.
 *
 * @param tmpReq CreateSiteCustomLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSiteCustomLogResponse
 */
CreateSiteCustomLogResponse Client::createSiteCustomLogWithOptions(const CreateSiteCustomLogRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSiteCustomLogShrinkRequest request = CreateSiteCustomLogShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCookies()) {
    request.setCookiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.cookies(), "Cookies", "json"));
  }

  if (!!tmpReq.hasRequestHeaders()) {
    request.setRequestHeadersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.requestHeaders(), "RequestHeaders", "json"));
  }

  if (!!tmpReq.hasResponseHeaders()) {
    request.setResponseHeadersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.responseHeaders(), "ResponseHeaders", "json"));
  }

  json body = {};
  if (!!request.hasCookiesShrink()) {
    body["Cookies"] = request.cookiesShrink();
  }

  if (!!request.hasRequestHeadersShrink()) {
    body["RequestHeaders"] = request.requestHeadersShrink();
  }

  if (!!request.hasResponseHeadersShrink()) {
    body["ResponseHeaders"] = request.responseHeadersShrink();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateSiteCustomLog"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSiteCustomLogResponse>();
}

/**
 * @summary Adds the configuration of custom request header, response header, and cookie fields that are used to capture logs of a website.
 *
 * @description *   **Custom field limits**: The key name of a custom field can contain only letters, digits, underscores (_), and spaces. The key name cannot contain other characters. Otherwise, errors may occur.
 * *   **Parameter passing**: Submit `SiteId`, `RequestHeaders`, `ResponseHeaders`, and `Cookies` by using `formData`. Each array element matches a custom field name.
 * *   **(Required) SiteId**: Although `SiteId` is not marked as required in the Required column, you must specify a website ID by using this parameter when you can call this API operation.
 *
 * @param request CreateSiteCustomLogRequest
 * @return CreateSiteCustomLogResponse
 */
CreateSiteCustomLogResponse Client::createSiteCustomLog(const CreateSiteCustomLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSiteCustomLogWithOptions(request, runtime);
}

/**
 * @summary Creates a real-time log delivery task.
 *
 * @param tmpReq CreateSiteDeliveryTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSiteDeliveryTaskResponse
 */
CreateSiteDeliveryTaskResponse Client::createSiteDeliveryTaskWithOptions(const CreateSiteDeliveryTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSiteDeliveryTaskShrinkRequest request = CreateSiteDeliveryTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHttpDelivery()) {
    request.setHttpDeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.httpDelivery(), "HttpDelivery", "json"));
  }

  if (!!tmpReq.hasKafkaDelivery()) {
    request.setKafkaDeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.kafkaDelivery(), "KafkaDelivery", "json"));
  }

  if (!!tmpReq.hasOssDelivery()) {
    request.setOssDeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ossDelivery(), "OssDelivery", "json"));
  }

  if (!!tmpReq.hasS3Delivery()) {
    request.setS3DeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.s3Delivery(), "S3Delivery", "json"));
  }

  if (!!tmpReq.hasSlsDelivery()) {
    request.setSlsDeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.slsDelivery(), "SlsDelivery", "json"));
  }

  json body = {};
  if (!!request.hasBusinessType()) {
    body["BusinessType"] = request.businessType();
  }

  if (!!request.hasDataCenter()) {
    body["DataCenter"] = request.dataCenter();
  }

  if (!!request.hasDeliveryType()) {
    body["DeliveryType"] = request.deliveryType();
  }

  if (!!request.hasDiscardRate()) {
    body["DiscardRate"] = request.discardRate();
  }

  if (!!request.hasFieldName()) {
    body["FieldName"] = request.fieldName();
  }

  if (!!request.hasFilterVer()) {
    body["FilterVer"] = request.filterVer();
  }

  if (!!request.hasHttpDeliveryShrink()) {
    body["HttpDelivery"] = request.httpDeliveryShrink();
  }

  if (!!request.hasKafkaDeliveryShrink()) {
    body["KafkaDelivery"] = request.kafkaDeliveryShrink();
  }

  if (!!request.hasOssDeliveryShrink()) {
    body["OssDelivery"] = request.ossDeliveryShrink();
  }

  if (!!request.hasS3DeliveryShrink()) {
    body["S3Delivery"] = request.s3DeliveryShrink();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.siteId();
  }

  if (!!request.hasSlsDeliveryShrink()) {
    body["SlsDelivery"] = request.slsDeliveryShrink();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateSiteDeliveryTask"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSiteDeliveryTaskResponse>();
}

/**
 * @summary Creates a real-time log delivery task.
 *
 * @param request CreateSiteDeliveryTaskRequest
 * @return CreateSiteDeliveryTaskResponse
 */
CreateSiteDeliveryTaskResponse Client::createSiteDeliveryTask(const CreateSiteDeliveryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSiteDeliveryTaskWithOptions(request, runtime);
}

/**
 * @summary 创建一个实时日志slr角色
 *
 * @param request CreateSlrRoleForRealtimeLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSlrRoleForRealtimeLogResponse
 */
CreateSlrRoleForRealtimeLogResponse Client::createSlrRoleForRealtimeLogWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "CreateSlrRoleForRealtimeLog"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSlrRoleForRealtimeLogResponse>();
}

/**
 * @summary 创建一个实时日志slr角色
 *
 * @return CreateSlrRoleForRealtimeLogResponse
 */
CreateSlrRoleForRealtimeLogResponse Client::createSlrRoleForRealtimeLog() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSlrRoleForRealtimeLogWithOptions(runtime);
}

/**
 * @summary Create Transport Layer Application
 *
 * @param tmpReq CreateTransportLayerApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTransportLayerApplicationResponse
 */
CreateTransportLayerApplicationResponse Client::createTransportLayerApplicationWithOptions(const CreateTransportLayerApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateTransportLayerApplicationShrinkRequest request = CreateTransportLayerApplicationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.rules(), "Rules", "json"));
  }

  json query = {};
  if (!!request.hasCrossBorderOptimization()) {
    query["CrossBorderOptimization"] = request.crossBorderOptimization();
  }

  if (!!request.hasIpAccessRule()) {
    query["IpAccessRule"] = request.ipAccessRule();
  }

  if (!!request.hasIpv6()) {
    query["Ipv6"] = request.ipv6();
  }

  if (!!request.hasRecordName()) {
    query["RecordName"] = request.recordName();
  }

  if (!!request.hasRulesShrink()) {
    query["Rules"] = request.rulesShrink();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasStaticIp()) {
    query["StaticIp"] = request.staticIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTransportLayerApplication"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTransportLayerApplicationResponse>();
}

/**
 * @summary Create Transport Layer Application
 *
 * @param request CreateTransportLayerApplicationRequest
 * @return CreateTransportLayerApplicationResponse
 */
CreateTransportLayerApplicationResponse Client::createTransportLayerApplication(const CreateTransportLayerApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransportLayerApplicationWithOptions(request, runtime);
}

/**
 * @summary 创建网页监测配置
 *
 * @param request CreateUrlObservationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUrlObservationResponse
 */
CreateUrlObservationResponse Client::createUrlObservationWithOptions(const CreateUrlObservationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSdkType()) {
    query["SdkType"] = request.sdkType();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUrlObservation"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUrlObservationResponse>();
}

/**
 * @summary 创建网页监测配置
 *
 * @param request CreateUrlObservationRequest
 * @return CreateUrlObservationResponse
 */
CreateUrlObservationResponse Client::createUrlObservation(const CreateUrlObservationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUrlObservationWithOptions(request, runtime);
}

/**
 * @summary Creates a log delivery task to ship logs to the specified destination.
 *
 * @description This API operation allows you to deliver logs to destinations such as Simple Log Service (SLS), HTTP servers, Object Storage Service (OSS), Amazon Simple Storage Service (S3), and Kafka. You can specify the task name, log fields to deliver, data center, discard rate, delivery type, and delivery details.
 * *   **Field filtering**: Use the `FieldName` parameter to specify log fields to deliver.
 * *   **Filtering rules**: Use the `FilterRules` parameter to pre-process and filter log data.
 * *   **Diverse delivery destinations**: Logs can be delivered to different destinations. Configuration parameters vary with delivery destinations.
 * ## [](#)Precautions
 * *   Make sure that you have sufficient permissions to perform delivery tasks.
 * *   If you enable encryption or authentication, properly configure corresponding parameters.
 * *   Verify the syntax of `FilterRules` to make sure that filtering logic works as expected.
 * *   Specify advanced settings such as the number of retries and timeout period based on your needs to have optimal delivery efficiency and stability.
 *
 * @param tmpReq CreateUserDeliveryTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserDeliveryTaskResponse
 */
CreateUserDeliveryTaskResponse Client::createUserDeliveryTaskWithOptions(const CreateUserDeliveryTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateUserDeliveryTaskShrinkRequest request = CreateUserDeliveryTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHttpDelivery()) {
    request.setHttpDeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.httpDelivery(), "HttpDelivery", "json"));
  }

  if (!!tmpReq.hasKafkaDelivery()) {
    request.setKafkaDeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.kafkaDelivery(), "KafkaDelivery", "json"));
  }

  if (!!tmpReq.hasOssDelivery()) {
    request.setOssDeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ossDelivery(), "OssDelivery", "json"));
  }

  if (!!tmpReq.hasS3Delivery()) {
    request.setS3DeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.s3Delivery(), "S3Delivery", "json"));
  }

  if (!!tmpReq.hasSlsDelivery()) {
    request.setSlsDeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.slsDelivery(), "SlsDelivery", "json"));
  }

  json body = {};
  if (!!request.hasBusinessType()) {
    body["BusinessType"] = request.businessType();
  }

  if (!!request.hasDataCenter()) {
    body["DataCenter"] = request.dataCenter();
  }

  if (!!request.hasDeliveryType()) {
    body["DeliveryType"] = request.deliveryType();
  }

  if (!!request.hasDetails()) {
    body["Details"] = request.details();
  }

  if (!!request.hasDiscardRate()) {
    body["DiscardRate"] = request.discardRate();
  }

  if (!!request.hasFieldName()) {
    body["FieldName"] = request.fieldName();
  }

  if (!!request.hasFilterVer()) {
    body["FilterVer"] = request.filterVer();
  }

  if (!!request.hasHttpDeliveryShrink()) {
    body["HttpDelivery"] = request.httpDeliveryShrink();
  }

  if (!!request.hasKafkaDeliveryShrink()) {
    body["KafkaDelivery"] = request.kafkaDeliveryShrink();
  }

  if (!!request.hasOssDeliveryShrink()) {
    body["OssDelivery"] = request.ossDeliveryShrink();
  }

  if (!!request.hasS3DeliveryShrink()) {
    body["S3Delivery"] = request.s3DeliveryShrink();
  }

  if (!!request.hasSlsDeliveryShrink()) {
    body["SlsDelivery"] = request.slsDeliveryShrink();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateUserDeliveryTask"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserDeliveryTaskResponse>();
}

/**
 * @summary Creates a log delivery task to ship logs to the specified destination.
 *
 * @description This API operation allows you to deliver logs to destinations such as Simple Log Service (SLS), HTTP servers, Object Storage Service (OSS), Amazon Simple Storage Service (S3), and Kafka. You can specify the task name, log fields to deliver, data center, discard rate, delivery type, and delivery details.
 * *   **Field filtering**: Use the `FieldName` parameter to specify log fields to deliver.
 * *   **Filtering rules**: Use the `FilterRules` parameter to pre-process and filter log data.
 * *   **Diverse delivery destinations**: Logs can be delivered to different destinations. Configuration parameters vary with delivery destinations.
 * ## [](#)Precautions
 * *   Make sure that you have sufficient permissions to perform delivery tasks.
 * *   If you enable encryption or authentication, properly configure corresponding parameters.
 * *   Verify the syntax of `FilterRules` to make sure that filtering logic works as expected.
 * *   Specify advanced settings such as the number of retries and timeout period based on your needs to have optimal delivery efficiency and stability.
 *
 * @param request CreateUserDeliveryTaskRequest
 * @return CreateUserDeliveryTaskResponse
 */
CreateUserDeliveryTaskResponse Client::createUserDeliveryTask(const CreateUserDeliveryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserDeliveryTaskWithOptions(request, runtime);
}

/**
 * @summary 新增站点视频处理配置
 *
 * @param request CreateVideoProcessingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVideoProcessingResponse
 */
CreateVideoProcessingResponse Client::createVideoProcessingWithOptions(const CreateVideoProcessingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlvSeekEnd()) {
    query["FlvSeekEnd"] = request.flvSeekEnd();
  }

  if (!!request.hasFlvSeekStart()) {
    query["FlvSeekStart"] = request.flvSeekStart();
  }

  if (!!request.hasFlvVideoSeekMode()) {
    query["FlvVideoSeekMode"] = request.flvVideoSeekMode();
  }

  if (!!request.hasMp4SeekEnd()) {
    query["Mp4SeekEnd"] = request.mp4SeekEnd();
  }

  if (!!request.hasMp4SeekStart()) {
    query["Mp4SeekStart"] = request.mp4SeekStart();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  if (!!request.hasVideoSeekEnable()) {
    query["VideoSeekEnable"] = request.videoSeekEnable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVideoProcessing"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVideoProcessingResponse>();
}

/**
 * @summary 新增站点视频处理配置
 *
 * @param request CreateVideoProcessingRequest
 * @return CreateVideoProcessingResponse
 */
CreateVideoProcessingResponse Client::createVideoProcessing(const CreateVideoProcessingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVideoProcessingWithOptions(request, runtime);
}

/**
 * @summary Create WAF Rule
 *
 * @param tmpReq CreateWafRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWafRuleResponse
 */
CreateWafRuleResponse Client::createWafRuleWithOptions(const CreateWafRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWafRuleShrinkRequest request = CreateWafRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfig()) {
    request.setConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.config(), "Config", "json"));
  }

  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  json body = {};
  if (!!request.hasConfigShrink()) {
    body["Config"] = request.configShrink();
  }

  if (!!request.hasPhase()) {
    body["Phase"] = request.phase();
  }

  if (!!request.hasRulesetId()) {
    body["RulesetId"] = request.rulesetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWafRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWafRuleResponse>();
}

/**
 * @summary Create WAF Rule
 *
 * @param request CreateWafRuleRequest
 * @return CreateWafRuleResponse
 */
CreateWafRuleResponse Client::createWafRule(const CreateWafRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWafRuleWithOptions(request, runtime);
}

/**
 * @summary Create WAF Ruleset
 *
 * @param request CreateWafRulesetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWafRulesetResponse
 */
CreateWafRulesetResponse Client::createWafRulesetWithOptions(const CreateWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPhase()) {
    body["Phase"] = request.phase();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWafRuleset"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWafRulesetResponse>();
}

/**
 * @summary Create WAF Ruleset
 *
 * @param request CreateWafRulesetRequest
 * @return CreateWafRulesetResponse
 */
CreateWafRulesetResponse Client::createWafRuleset(const CreateWafRulesetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWafRulesetWithOptions(request, runtime);
}

/**
 * @summary Creates a waiting room for a website.
 *
 * @param tmpReq CreateWaitingRoomRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWaitingRoomResponse
 */
CreateWaitingRoomResponse Client::createWaitingRoomWithOptions(const CreateWaitingRoomRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWaitingRoomShrinkRequest request = CreateWaitingRoomShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHostNameAndPath()) {
    request.setHostNameAndPathShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.hostNameAndPath(), "HostNameAndPath", "json"));
  }

  json query = {};
  if (!!request.hasCookieName()) {
    query["CookieName"] = request.cookieName();
  }

  if (!!request.hasCustomPageHtml()) {
    query["CustomPageHtml"] = request.customPageHtml();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDisableSessionRenewalEnable()) {
    query["DisableSessionRenewalEnable"] = request.disableSessionRenewalEnable();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasHostNameAndPathShrink()) {
    query["HostNameAndPath"] = request.hostNameAndPathShrink();
  }

  if (!!request.hasJsonResponseEnable()) {
    query["JsonResponseEnable"] = request.jsonResponseEnable();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNewUsersPerMinute()) {
    query["NewUsersPerMinute"] = request.newUsersPerMinute();
  }

  if (!!request.hasQueueAllEnable()) {
    query["QueueAllEnable"] = request.queueAllEnable();
  }

  if (!!request.hasQueuingMethod()) {
    query["QueuingMethod"] = request.queuingMethod();
  }

  if (!!request.hasQueuingStatusCode()) {
    query["QueuingStatusCode"] = request.queuingStatusCode();
  }

  if (!!request.hasSessionDuration()) {
    query["SessionDuration"] = request.sessionDuration();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasTotalActiveUsers()) {
    query["TotalActiveUsers"] = request.totalActiveUsers();
  }

  if (!!request.hasWaitingRoomType()) {
    query["WaitingRoomType"] = request.waitingRoomType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWaitingRoom"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWaitingRoomResponse>();
}

/**
 * @summary Creates a waiting room for a website.
 *
 * @param request CreateWaitingRoomRequest
 * @return CreateWaitingRoomResponse
 */
CreateWaitingRoomResponse Client::createWaitingRoom(const CreateWaitingRoomRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWaitingRoomWithOptions(request, runtime);
}

/**
 * @summary Creates a waiting room event.
 *
 * @param request CreateWaitingRoomEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWaitingRoomEventResponse
 */
CreateWaitingRoomEventResponse Client::createWaitingRoomEventWithOptions(const CreateWaitingRoomEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomPageHtml()) {
    query["CustomPageHtml"] = request.customPageHtml();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDisableSessionRenewalEnable()) {
    query["DisableSessionRenewalEnable"] = request.disableSessionRenewalEnable();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasJsonResponseEnable()) {
    query["JsonResponseEnable"] = request.jsonResponseEnable();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNewUsersPerMinute()) {
    query["NewUsersPerMinute"] = request.newUsersPerMinute();
  }

  if (!!request.hasPreQueueEnable()) {
    query["PreQueueEnable"] = request.preQueueEnable();
  }

  if (!!request.hasPreQueueStartTime()) {
    query["PreQueueStartTime"] = request.preQueueStartTime();
  }

  if (!!request.hasQueuingMethod()) {
    query["QueuingMethod"] = request.queuingMethod();
  }

  if (!!request.hasQueuingStatusCode()) {
    query["QueuingStatusCode"] = request.queuingStatusCode();
  }

  if (!!request.hasRandomPreQueueEnable()) {
    query["RandomPreQueueEnable"] = request.randomPreQueueEnable();
  }

  if (!!request.hasSessionDuration()) {
    query["SessionDuration"] = request.sessionDuration();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTotalActiveUsers()) {
    query["TotalActiveUsers"] = request.totalActiveUsers();
  }

  if (!!request.hasWaitingRoomId()) {
    query["WaitingRoomId"] = request.waitingRoomId();
  }

  if (!!request.hasWaitingRoomType()) {
    query["WaitingRoomType"] = request.waitingRoomType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWaitingRoomEvent"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWaitingRoomEventResponse>();
}

/**
 * @summary Creates a waiting room event.
 *
 * @param request CreateWaitingRoomEventRequest
 * @return CreateWaitingRoomEventResponse
 */
CreateWaitingRoomEventResponse Client::createWaitingRoomEvent(const CreateWaitingRoomEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWaitingRoomEventWithOptions(request, runtime);
}

/**
 * @summary Create Waiting Room Rule
 *
 * @param request CreateWaitingRoomRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWaitingRoomRuleResponse
 */
CreateWaitingRoomRuleResponse Client::createWaitingRoomRuleWithOptions(const CreateWaitingRoomRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasWaitingRoomId()) {
    query["WaitingRoomId"] = request.waitingRoomId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateWaitingRoomRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWaitingRoomRuleResponse>();
}

/**
 * @summary Create Waiting Room Rule
 *
 * @param request CreateWaitingRoomRuleRequest
 * @return CreateWaitingRoomRuleResponse
 */
CreateWaitingRoomRuleResponse Client::createWaitingRoomRule(const CreateWaitingRoomRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWaitingRoomRuleWithOptions(request, runtime);
}

/**
 * @summary Disables version management for a website.
 *
 * @description You can disable version management only when the default environment and version 0 exist.
 *
 * @param request DeactivateVersionManagementRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeactivateVersionManagementResponse
 */
DeactivateVersionManagementResponse Client::deactivateVersionManagementWithOptions(const DeactivateVersionManagementRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeactivateVersionManagement"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeactivateVersionManagementResponse>();
}

/**
 * @summary Disables version management for a website.
 *
 * @description You can disable version management only when the default environment and version 0 exist.
 *
 * @param request DeactivateVersionManagementRequest
 * @return DeactivateVersionManagementResponse
 */
DeactivateVersionManagementResponse Client::deactivateVersionManagement(const DeactivateVersionManagementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deactivateVersionManagementWithOptions(request, runtime);
}

/**
 * @summary Delete Cache Configuration
 *
 * @param request DeleteCacheRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCacheRuleResponse
 */
DeleteCacheRuleResponse Client::deleteCacheRuleWithOptions(const DeleteCacheRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCacheRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCacheRuleResponse>();
}

/**
 * @summary Delete Cache Configuration
 *
 * @param request DeleteCacheRuleRequest
 * @return DeleteCacheRuleResponse
 */
DeleteCacheRuleResponse Client::deleteCacheRule(const DeleteCacheRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCacheRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a certificate for a website.
 *
 * @param request DeleteCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCertificateResponse
 */
DeleteCertificateResponse Client::deleteCertificateWithOptions(const DeleteCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCertificateResponse>();
}

/**
 * @summary Deletes a certificate for a website.
 *
 * @param request DeleteCertificateRequest
 * @return DeleteCertificateResponse
 */
DeleteCertificateResponse Client::deleteCertificate(const DeleteCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCertificateWithOptions(request, runtime);
}

/**
 * @summary Deletes a client CA certificate.
 *
 * @param request DeleteClientCaCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClientCaCertificateResponse
 */
DeleteClientCaCertificateResponse Client::deleteClientCaCertificateWithOptions(const DeleteClientCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteClientCaCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClientCaCertificateResponse>();
}

/**
 * @summary Deletes a client CA certificate.
 *
 * @param request DeleteClientCaCertificateRequest
 * @return DeleteClientCaCertificateResponse
 */
DeleteClientCaCertificateResponse Client::deleteClientCaCertificate(const DeleteClientCaCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClientCaCertificateWithOptions(request, runtime);
}

/**
 * @summary Deletes a revoked client certificate.
 *
 * @param request DeleteClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClientCertificateResponse
 */
DeleteClientCertificateResponse Client::deleteClientCertificateWithOptions(const DeleteClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteClientCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClientCertificateResponse>();
}

/**
 * @summary Deletes a revoked client certificate.
 *
 * @param request DeleteClientCertificateRequest
 * @return DeleteClientCertificateResponse
 */
DeleteClientCertificateResponse Client::deleteClientCertificate(const DeleteClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClientCertificateWithOptions(request, runtime);
}

/**
 * @summary Delete compression rule
 *
 * @param request DeleteCompressionRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCompressionRuleResponse
 */
DeleteCompressionRuleResponse Client::deleteCompressionRuleWithOptions(const DeleteCompressionRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCompressionRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCompressionRuleResponse>();
}

/**
 * @summary Delete compression rule
 *
 * @param request DeleteCompressionRuleRequest
 * @return DeleteCompressionRuleResponse
 */
DeleteCompressionRuleResponse Client::deleteCompressionRule(const DeleteCompressionRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCompressionRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a scenario-specific custom policy.
 *
 * @param request DeleteCustomScenePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomScenePolicyResponse
 */
DeleteCustomScenePolicyResponse Client::deleteCustomScenePolicyWithOptions(const DeleteCustomScenePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomScenePolicy"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomScenePolicyResponse>();
}

/**
 * @summary Deletes a scenario-specific custom policy.
 *
 * @param request DeleteCustomScenePolicyRequest
 * @return DeleteCustomScenePolicyResponse
 */
DeleteCustomScenePolicyResponse Client::deleteCustomScenePolicy(const DeleteCustomScenePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomScenePolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a containerized application.
 *
 * @param request DeleteEdgeContainerAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEdgeContainerAppResponse
 */
DeleteEdgeContainerAppResponse Client::deleteEdgeContainerAppWithOptions(const DeleteEdgeContainerAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEdgeContainerApp"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEdgeContainerAppResponse>();
}

/**
 * @summary Deletes a containerized application.
 *
 * @param request DeleteEdgeContainerAppRequest
 * @return DeleteEdgeContainerAppResponse
 */
DeleteEdgeContainerAppResponse Client::deleteEdgeContainerApp(const DeleteEdgeContainerAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEdgeContainerAppWithOptions(request, runtime);
}

/**
 * @summary Disassociates a domain name from a containerized application. After the dissociation, you can no longer use the domain name to access the containerized application.
 *
 * @param request DeleteEdgeContainerAppRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEdgeContainerAppRecordResponse
 */
DeleteEdgeContainerAppRecordResponse Client::deleteEdgeContainerAppRecordWithOptions(const DeleteEdgeContainerAppRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasRecordName()) {
    body["RecordName"] = request.recordName();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteEdgeContainerAppRecord"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEdgeContainerAppRecordResponse>();
}

/**
 * @summary Disassociates a domain name from a containerized application. After the dissociation, you can no longer use the domain name to access the containerized application.
 *
 * @param request DeleteEdgeContainerAppRecordRequest
 * @return DeleteEdgeContainerAppRecordResponse
 */
DeleteEdgeContainerAppRecordResponse Client::deleteEdgeContainerAppRecord(const DeleteEdgeContainerAppRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEdgeContainerAppRecordWithOptions(request, runtime);
}

/**
 * @summary Deletes a version of a containerized application.
 *
 * @param request DeleteEdgeContainerAppVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEdgeContainerAppVersionResponse
 */
DeleteEdgeContainerAppVersionResponse Client::deleteEdgeContainerAppVersionWithOptions(const DeleteEdgeContainerAppVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.versionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEdgeContainerAppVersion"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEdgeContainerAppVersionResponse>();
}

/**
 * @summary Deletes a version of a containerized application.
 *
 * @param request DeleteEdgeContainerAppVersionRequest
 * @return DeleteEdgeContainerAppVersionResponse
 */
DeleteEdgeContainerAppVersionResponse Client::deleteEdgeContainerAppVersion(const DeleteEdgeContainerAppVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEdgeContainerAppVersionWithOptions(request, runtime);
}

/**
 * @summary 删除HTTP入站请求头规则
 *
 * @param request DeleteHttpIncomingRequestHeaderModificationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHttpIncomingRequestHeaderModificationRuleResponse
 */
DeleteHttpIncomingRequestHeaderModificationRuleResponse Client::deleteHttpIncomingRequestHeaderModificationRuleWithOptions(const DeleteHttpIncomingRequestHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHttpIncomingRequestHeaderModificationRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHttpIncomingRequestHeaderModificationRuleResponse>();
}

/**
 * @summary 删除HTTP入站请求头规则
 *
 * @param request DeleteHttpIncomingRequestHeaderModificationRuleRequest
 * @return DeleteHttpIncomingRequestHeaderModificationRuleResponse
 */
DeleteHttpIncomingRequestHeaderModificationRuleResponse Client::deleteHttpIncomingRequestHeaderModificationRule(const DeleteHttpIncomingRequestHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHttpIncomingRequestHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary 删除HTTP入站响应头规则
 *
 * @param request DeleteHttpIncomingResponseHeaderModificationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHttpIncomingResponseHeaderModificationRuleResponse
 */
DeleteHttpIncomingResponseHeaderModificationRuleResponse Client::deleteHttpIncomingResponseHeaderModificationRuleWithOptions(const DeleteHttpIncomingResponseHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHttpIncomingResponseHeaderModificationRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHttpIncomingResponseHeaderModificationRuleResponse>();
}

/**
 * @summary 删除HTTP入站响应头规则
 *
 * @param request DeleteHttpIncomingResponseHeaderModificationRuleRequest
 * @return DeleteHttpIncomingResponseHeaderModificationRuleResponse
 */
DeleteHttpIncomingResponseHeaderModificationRuleResponse Client::deleteHttpIncomingResponseHeaderModificationRule(const DeleteHttpIncomingResponseHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHttpIncomingResponseHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes the configuration of modifying HTTP request headers for a website.
 *
 * @param request DeleteHttpRequestHeaderModificationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHttpRequestHeaderModificationRuleResponse
 */
DeleteHttpRequestHeaderModificationRuleResponse Client::deleteHttpRequestHeaderModificationRuleWithOptions(const DeleteHttpRequestHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHttpRequestHeaderModificationRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHttpRequestHeaderModificationRuleResponse>();
}

/**
 * @summary Deletes the configuration of modifying HTTP request headers for a website.
 *
 * @param request DeleteHttpRequestHeaderModificationRuleRequest
 * @return DeleteHttpRequestHeaderModificationRuleResponse
 */
DeleteHttpRequestHeaderModificationRuleResponse Client::deleteHttpRequestHeaderModificationRule(const DeleteHttpRequestHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHttpRequestHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes the configuration of modifying HTTP response headers for a website.
 *
 * @param request DeleteHttpResponseHeaderModificationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHttpResponseHeaderModificationRuleResponse
 */
DeleteHttpResponseHeaderModificationRuleResponse Client::deleteHttpResponseHeaderModificationRuleWithOptions(const DeleteHttpResponseHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHttpResponseHeaderModificationRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHttpResponseHeaderModificationRuleResponse>();
}

/**
 * @summary Deletes the configuration of modifying HTTP response headers for a website.
 *
 * @param request DeleteHttpResponseHeaderModificationRuleRequest
 * @return DeleteHttpResponseHeaderModificationRuleResponse
 */
DeleteHttpResponseHeaderModificationRuleResponse Client::deleteHttpResponseHeaderModificationRule(const DeleteHttpResponseHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHttpResponseHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Delete HTTPS Application Configuration
 *
 * @param request DeleteHttpsApplicationConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHttpsApplicationConfigurationResponse
 */
DeleteHttpsApplicationConfigurationResponse Client::deleteHttpsApplicationConfigurationWithOptions(const DeleteHttpsApplicationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHttpsApplicationConfiguration"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHttpsApplicationConfigurationResponse>();
}

/**
 * @summary Delete HTTPS Application Configuration
 *
 * @param request DeleteHttpsApplicationConfigurationRequest
 * @return DeleteHttpsApplicationConfigurationResponse
 */
DeleteHttpsApplicationConfigurationResponse Client::deleteHttpsApplicationConfiguration(const DeleteHttpsApplicationConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHttpsApplicationConfigurationWithOptions(request, runtime);
}

/**
 * @summary Delete HTTPS Basic Configuration
 *
 * @param request DeleteHttpsBasicConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHttpsBasicConfigurationResponse
 */
DeleteHttpsBasicConfigurationResponse Client::deleteHttpsBasicConfigurationWithOptions(const DeleteHttpsBasicConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHttpsBasicConfiguration"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHttpsBasicConfigurationResponse>();
}

/**
 * @summary Delete HTTPS Basic Configuration
 *
 * @param request DeleteHttpsBasicConfigurationRequest
 * @return DeleteHttpsBasicConfigurationResponse
 */
DeleteHttpsBasicConfigurationResponse Client::deleteHttpsBasicConfiguration(const DeleteHttpsBasicConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHttpsBasicConfigurationWithOptions(request, runtime);
}

/**
 * @summary Delete Site Image Transformation Configuration
 *
 * @param request DeleteImageTransformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteImageTransformResponse
 */
DeleteImageTransformResponse Client::deleteImageTransformWithOptions(const DeleteImageTransformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteImageTransform"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteImageTransformResponse>();
}

/**
 * @summary Delete Site Image Transformation Configuration
 *
 * @param request DeleteImageTransformRequest
 * @return DeleteImageTransformResponse
 */
DeleteImageTransformResponse Client::deleteImageTransform(const DeleteImageTransformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteImageTransformWithOptions(request, runtime);
}

/**
 * @summary Deletes a key-value pair from a namespace.
 *
 * @param request DeleteKvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteKvResponse
 */
DeleteKvResponse Client::deleteKvWithOptions(const DeleteKvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteKv"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteKvResponse>();
}

/**
 * @summary Deletes a key-value pair from a namespace.
 *
 * @param request DeleteKvRequest
 * @return DeleteKvResponse
 */
DeleteKvResponse Client::deleteKv(const DeleteKvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteKvWithOptions(request, runtime);
}

/**
 * @summary Deletes a namespace from an Alibaba Cloud account.
 *
 * @param request DeleteKvNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteKvNamespaceResponse
 */
DeleteKvNamespaceResponse Client::deleteKvNamespaceWithOptions(const DeleteKvNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteKvNamespace"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteKvNamespaceResponse>();
}

/**
 * @summary Deletes a namespace from an Alibaba Cloud account.
 *
 * @param request DeleteKvNamespaceRequest
 * @return DeleteKvNamespaceResponse
 */
DeleteKvNamespaceResponse Client::deleteKvNamespace(const DeleteKvNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteKvNamespaceWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom list that is no longer needed.
 *
 * @param request DeleteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteListResponse
 */
DeleteListResponse Client::deleteListWithOptions(const DeleteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteList"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteListResponse>();
}

/**
 * @summary Deletes a custom list that is no longer needed.
 *
 * @param request DeleteListRequest
 * @return DeleteListResponse
 */
DeleteListResponse Client::deleteList(const DeleteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteListWithOptions(request, runtime);
}

/**
 * @summary Delete Load Balancer
 *
 * @description Delete a load balancer by its ID, only one can be deleted at a time.
 *
 * @param request DeleteLoadBalancerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLoadBalancerResponse
 */
DeleteLoadBalancerResponse Client::deleteLoadBalancerWithOptions(const DeleteLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLoadBalancer"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLoadBalancerResponse>();
}

/**
 * @summary Delete Load Balancer
 *
 * @description Delete a load balancer by its ID, only one can be deleted at a time.
 *
 * @param request DeleteLoadBalancerRequest
 * @return DeleteLoadBalancerResponse
 */
DeleteLoadBalancerResponse Client::deleteLoadBalancer(const DeleteLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary Delete Network Optimization Configuration
 *
 * @param request DeleteNetworkOptimizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNetworkOptimizationResponse
 */
DeleteNetworkOptimizationResponse Client::deleteNetworkOptimizationWithOptions(const DeleteNetworkOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNetworkOptimization"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNetworkOptimizationResponse>();
}

/**
 * @summary Delete Network Optimization Configuration
 *
 * @param request DeleteNetworkOptimizationRequest
 * @return DeleteNetworkOptimizationResponse
 */
DeleteNetworkOptimizationResponse Client::deleteNetworkOptimization(const DeleteNetworkOptimizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNetworkOptimizationWithOptions(request, runtime);
}

/**
 * @summary 删除源服务器CA证书
 *
 * @param request DeleteOriginCaCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOriginCaCertificateResponse
 */
DeleteOriginCaCertificateResponse Client::deleteOriginCaCertificateWithOptions(const DeleteOriginCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteOriginCaCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteOriginCaCertificateResponse>();
}

/**
 * @summary 删除源服务器CA证书
 *
 * @param request DeleteOriginCaCertificateRequest
 * @return DeleteOriginCaCertificateResponse
 */
DeleteOriginCaCertificateResponse Client::deleteOriginCaCertificate(const DeleteOriginCaCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOriginCaCertificateWithOptions(request, runtime);
}

/**
 * @summary 删除域名回源客户端证书
 *
 * @param request DeleteOriginClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOriginClientCertificateResponse
 */
DeleteOriginClientCertificateResponse Client::deleteOriginClientCertificateWithOptions(const DeleteOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteOriginClientCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteOriginClientCertificateResponse>();
}

/**
 * @summary 删除域名回源客户端证书
 *
 * @param request DeleteOriginClientCertificateRequest
 * @return DeleteOriginClientCertificateResponse
 */
DeleteOriginClientCertificateResponse Client::deleteOriginClientCertificate(const DeleteOriginClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOriginClientCertificateWithOptions(request, runtime);
}

/**
 * @summary Delete Origin Address Pool
 *
 * @param request DeleteOriginPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOriginPoolResponse
 */
DeleteOriginPoolResponse Client::deleteOriginPoolWithOptions(const DeleteOriginPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteOriginPool"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteOriginPoolResponse>();
}

/**
 * @summary Delete Origin Address Pool
 *
 * @param request DeleteOriginPoolRequest
 * @return DeleteOriginPoolResponse
 */
DeleteOriginPoolResponse Client::deleteOriginPool(const DeleteOriginPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOriginPoolWithOptions(request, runtime);
}

/**
 * @summary Disables origin protection.
 *
 * @param request DeleteOriginProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOriginProtectionResponse
 */
DeleteOriginProtectionResponse Client::deleteOriginProtectionWithOptions(const DeleteOriginProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteOriginProtection"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteOriginProtectionResponse>();
}

/**
 * @summary Disables origin protection.
 *
 * @param request DeleteOriginProtectionRequest
 * @return DeleteOriginProtectionResponse
 */
DeleteOriginProtectionResponse Client::deleteOriginProtection(const DeleteOriginProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOriginProtectionWithOptions(request, runtime);
}

/**
 * @summary Delete Origin Rule Configuration
 *
 * @param request DeleteOriginRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOriginRuleResponse
 */
DeleteOriginRuleResponse Client::deleteOriginRuleWithOptions(const DeleteOriginRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteOriginRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteOriginRuleResponse>();
}

/**
 * @summary Delete Origin Rule Configuration
 *
 * @param request DeleteOriginRuleRequest
 * @return DeleteOriginRuleResponse
 */
DeleteOriginRuleResponse Client::deleteOriginRule(const DeleteOriginRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOriginRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom error page that is no longer needed.
 *
 * @param request DeletePageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePageResponse
 */
DeletePageResponse Client::deletePageWithOptions(const DeletePageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeletePage"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePageResponse>();
}

/**
 * @summary Deletes a custom error page that is no longer needed.
 *
 * @param request DeletePageRequest
 * @return DeletePageResponse
 */
DeletePageResponse Client::deletePage(const DeletePageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePageWithOptions(request, runtime);
}

/**
 * @summary Deletes a DNS record of a website based on the specified RecordId.
 *
 * @param request DeleteRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecordResponse
 */
DeleteRecordResponse Client::deleteRecordWithOptions(const DeleteRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRecordId()) {
    query["RecordId"] = request.recordId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRecord"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRecordResponse>();
}

/**
 * @summary Deletes a DNS record of a website based on the specified RecordId.
 *
 * @param request DeleteRecordRequest
 * @return DeleteRecordResponse
 */
DeleteRecordResponse Client::deleteRecord(const DeleteRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRecordWithOptions(request, runtime);
}

/**
 * @summary Deletes a URL redirect rule for a website.
 *
 * @param request DeleteRedirectRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRedirectRuleResponse
 */
DeleteRedirectRuleResponse Client::deleteRedirectRuleWithOptions(const DeleteRedirectRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRedirectRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRedirectRuleResponse>();
}

/**
 * @summary Deletes a URL redirect rule for a website.
 *
 * @param request DeleteRedirectRuleRequest
 * @return DeleteRedirectRuleResponse
 */
DeleteRedirectRuleResponse Client::deleteRedirectRule(const DeleteRedirectRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRedirectRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a URL rewrite rule for a website.
 *
 * @param request DeleteRewriteUrlRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRewriteUrlRuleResponse
 */
DeleteRewriteUrlRuleResponse Client::deleteRewriteUrlRuleWithOptions(const DeleteRewriteUrlRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRewriteUrlRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRewriteUrlRuleResponse>();
}

/**
 * @summary Deletes a URL rewrite rule for a website.
 *
 * @param request DeleteRewriteUrlRuleRequest
 * @return DeleteRewriteUrlRuleResponse
 */
DeleteRewriteUrlRuleResponse Client::deleteRewriteUrlRule(const DeleteRewriteUrlRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRewriteUrlRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a routine in Edge Routine.
 *
 * @param request DeleteRoutineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRoutineResponse
 */
DeleteRoutineResponse Client::deleteRoutineWithOptions(const DeleteRoutineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteRoutine"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRoutineResponse>();
}

/**
 * @summary Deletes a routine in Edge Routine.
 *
 * @param request DeleteRoutineRequest
 * @return DeleteRoutineResponse
 */
DeleteRoutineResponse Client::deleteRoutine(const DeleteRoutineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRoutineWithOptions(request, runtime);
}

/**
 * @summary Deletes a code version of a routine.
 *
 * @param request DeleteRoutineCodeVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRoutineCodeVersionResponse
 */
DeleteRoutineCodeVersionResponse Client::deleteRoutineCodeVersionWithOptions(const DeleteRoutineCodeVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCodeVersion()) {
    body["CodeVersion"] = request.codeVersion();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteRoutineCodeVersion"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRoutineCodeVersionResponse>();
}

/**
 * @summary Deletes a code version of a routine.
 *
 * @param request DeleteRoutineCodeVersionRequest
 * @return DeleteRoutineCodeVersionResponse
 */
DeleteRoutineCodeVersionResponse Client::deleteRoutineCodeVersion(const DeleteRoutineCodeVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRoutineCodeVersionWithOptions(request, runtime);
}

/**
 * @summary Deletes a record that is associated with a routine.
 *
 * @param request DeleteRoutineRelatedRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRoutineRelatedRecordResponse
 */
DeleteRoutineRelatedRecordResponse Client::deleteRoutineRelatedRecordWithOptions(const DeleteRoutineRelatedRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasRecordId()) {
    body["RecordId"] = request.recordId();
  }

  if (!!request.hasRecordName()) {
    body["RecordName"] = request.recordName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteRoutineRelatedRecord"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRoutineRelatedRecordResponse>();
}

/**
 * @summary Deletes a record that is associated with a routine.
 *
 * @param request DeleteRoutineRelatedRecordRequest
 * @return DeleteRoutineRelatedRecordResponse
 */
DeleteRoutineRelatedRecordResponse Client::deleteRoutineRelatedRecord(const DeleteRoutineRelatedRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRoutineRelatedRecordWithOptions(request, runtime);
}

/**
 * @summary 删除边缘函数路由配置
 *
 * @param request DeleteRoutineRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRoutineRouteResponse
 */
DeleteRoutineRouteResponse Client::deleteRoutineRouteWithOptions(const DeleteRoutineRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRoutineRoute"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRoutineRouteResponse>();
}

/**
 * @summary 删除边缘函数路由配置
 *
 * @param request DeleteRoutineRouteRequest
 * @return DeleteRoutineRouteResponse
 */
DeleteRoutineRouteResponse Client::deleteRoutineRoute(const DeleteRoutineRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRoutineRouteWithOptions(request, runtime);
}

/**
 * @summary Deletes a scheduled prefetch plan based on the plan ID.
 *
 * @param request DeleteScheduledPreloadExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScheduledPreloadExecutionResponse
 */
DeleteScheduledPreloadExecutionResponse Client::deleteScheduledPreloadExecutionWithOptions(const DeleteScheduledPreloadExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScheduledPreloadExecution"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScheduledPreloadExecutionResponse>();
}

/**
 * @summary Deletes a scheduled prefetch plan based on the plan ID.
 *
 * @param request DeleteScheduledPreloadExecutionRequest
 * @return DeleteScheduledPreloadExecutionResponse
 */
DeleteScheduledPreloadExecutionResponse Client::deleteScheduledPreloadExecution(const DeleteScheduledPreloadExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScheduledPreloadExecutionWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified scheduled prefetch task based on the task ID.
 *
 * @param request DeleteScheduledPreloadJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScheduledPreloadJobResponse
 */
DeleteScheduledPreloadJobResponse Client::deleteScheduledPreloadJobWithOptions(const DeleteScheduledPreloadJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScheduledPreloadJob"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScheduledPreloadJobResponse>();
}

/**
 * @summary Deletes a specified scheduled prefetch task based on the task ID.
 *
 * @param request DeleteScheduledPreloadJobRequest
 * @return DeleteScheduledPreloadJobResponse
 */
DeleteScheduledPreloadJobResponse Client::deleteScheduledPreloadJob(const DeleteScheduledPreloadJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScheduledPreloadJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a website based on the specified website ID.
 *
 * @param request DeleteSiteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSiteResponse
 */
DeleteSiteResponse Client::deleteSiteWithOptions(const DeleteSiteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSite"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSiteResponse>();
}

/**
 * @summary Deletes a website based on the specified website ID.
 *
 * @param request DeleteSiteRequest
 * @return DeleteSiteResponse
 */
DeleteSiteResponse Client::deleteSite(const DeleteSiteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSiteWithOptions(request, runtime);
}

/**
 * @summary Deletes a real-time log delivery task.
 *
 * @param request DeleteSiteDeliveryTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSiteDeliveryTaskResponse
 */
DeleteSiteDeliveryTaskResponse Client::deleteSiteDeliveryTaskWithOptions(const DeleteSiteDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSiteId()) {
    body["SiteId"] = request.siteId();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteSiteDeliveryTask"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSiteDeliveryTaskResponse>();
}

/**
 * @summary Deletes a real-time log delivery task.
 *
 * @param request DeleteSiteDeliveryTaskRequest
 * @return DeleteSiteDeliveryTaskResponse
 */
DeleteSiteDeliveryTaskResponse Client::deleteSiteDeliveryTask(const DeleteSiteDeliveryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSiteDeliveryTaskWithOptions(request, runtime);
}

/**
 * @summary 删除站点回源客户端证书
 *
 * @param request DeleteSiteOriginClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSiteOriginClientCertificateResponse
 */
DeleteSiteOriginClientCertificateResponse Client::deleteSiteOriginClientCertificateWithOptions(const DeleteSiteOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSiteOriginClientCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSiteOriginClientCertificateResponse>();
}

/**
 * @summary 删除站点回源客户端证书
 *
 * @param request DeleteSiteOriginClientCertificateRequest
 * @return DeleteSiteOriginClientCertificateResponse
 */
DeleteSiteOriginClientCertificateResponse Client::deleteSiteOriginClientCertificate(const DeleteSiteOriginClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSiteOriginClientCertificateWithOptions(request, runtime);
}

/**
 * @summary Delete Transport Layer Application
 *
 * @param request DeleteTransportLayerApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTransportLayerApplicationResponse
 */
DeleteTransportLayerApplicationResponse Client::deleteTransportLayerApplicationWithOptions(const DeleteTransportLayerApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTransportLayerApplication"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTransportLayerApplicationResponse>();
}

/**
 * @summary Delete Transport Layer Application
 *
 * @param request DeleteTransportLayerApplicationRequest
 * @return DeleteTransportLayerApplicationResponse
 */
DeleteTransportLayerApplicationResponse Client::deleteTransportLayerApplication(const DeleteTransportLayerApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTransportLayerApplicationWithOptions(request, runtime);
}

/**
 * @summary 删除网页监测配置
 *
 * @param request DeleteUrlObservationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUrlObservationResponse
 */
DeleteUrlObservationResponse Client::deleteUrlObservationWithOptions(const DeleteUrlObservationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUrlObservation"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUrlObservationResponse>();
}

/**
 * @summary 删除网页监测配置
 *
 * @param request DeleteUrlObservationRequest
 * @return DeleteUrlObservationResponse
 */
DeleteUrlObservationResponse Client::deleteUrlObservation(const DeleteUrlObservationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUrlObservationWithOptions(request, runtime);
}

/**
 * @summary Deletes a log delivery task from your Alibaba Cloud account.
 *
 * @description ******> 
 * *   Deleted tasks cannot be restored. Proceed with caution.
 * *   To call this operation, you must have an account that has the required permissions.
 * *   The returned `RequestId` value can be used to track the request processing progress and troubleshoot issues.
 *
 * @param request DeleteUserDeliveryTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserDeliveryTaskResponse
 */
DeleteUserDeliveryTaskResponse Client::deleteUserDeliveryTaskWithOptions(const DeleteUserDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskName()) {
    body["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteUserDeliveryTask"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserDeliveryTaskResponse>();
}

/**
 * @summary Deletes a log delivery task from your Alibaba Cloud account.
 *
 * @description ******> 
 * *   Deleted tasks cannot be restored. Proceed with caution.
 * *   To call this operation, you must have an account that has the required permissions.
 * *   The returned `RequestId` value can be used to track the request processing progress and troubleshoot issues.
 *
 * @param request DeleteUserDeliveryTaskRequest
 * @return DeleteUserDeliveryTaskResponse
 */
DeleteUserDeliveryTaskResponse Client::deleteUserDeliveryTask(const DeleteUserDeliveryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserDeliveryTaskWithOptions(request, runtime);
}

/**
 * @summary 删除站点视频处理配置
 *
 * @param request DeleteVideoProcessingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVideoProcessingResponse
 */
DeleteVideoProcessingResponse Client::deleteVideoProcessingWithOptions(const DeleteVideoProcessingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVideoProcessing"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVideoProcessingResponse>();
}

/**
 * @summary 删除站点视频处理配置
 *
 * @param request DeleteVideoProcessingRequest
 * @return DeleteVideoProcessingResponse
 */
DeleteVideoProcessingResponse Client::deleteVideoProcessing(const DeleteVideoProcessingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVideoProcessingWithOptions(request, runtime);
}

/**
 * @summary Delete WAF Rule
 *
 * @param request DeleteWafRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWafRuleResponse
 */
DeleteWafRuleResponse Client::deleteWafRuleWithOptions(const DeleteWafRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteWafRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWafRuleResponse>();
}

/**
 * @summary Delete WAF Rule
 *
 * @param request DeleteWafRuleRequest
 * @return DeleteWafRuleResponse
 */
DeleteWafRuleResponse Client::deleteWafRule(const DeleteWafRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWafRuleWithOptions(request, runtime);
}

/**
 * @summary Delete WAF Ruleset
 *
 * @param request DeleteWafRulesetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWafRulesetResponse
 */
DeleteWafRulesetResponse Client::deleteWafRulesetWithOptions(const DeleteWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteWafRuleset"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWafRulesetResponse>();
}

/**
 * @summary Delete WAF Ruleset
 *
 * @param request DeleteWafRulesetRequest
 * @return DeleteWafRulesetResponse
 */
DeleteWafRulesetResponse Client::deleteWafRuleset(const DeleteWafRulesetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWafRulesetWithOptions(request, runtime);
}

/**
 * @summary Deletes a waiting room.
 *
 * @param request DeleteWaitingRoomRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWaitingRoomResponse
 */
DeleteWaitingRoomResponse Client::deleteWaitingRoomWithOptions(const DeleteWaitingRoomRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasWaitingRoomId()) {
    query["WaitingRoomId"] = request.waitingRoomId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWaitingRoom"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWaitingRoomResponse>();
}

/**
 * @summary Deletes a waiting room.
 *
 * @param request DeleteWaitingRoomRequest
 * @return DeleteWaitingRoomResponse
 */
DeleteWaitingRoomResponse Client::deleteWaitingRoom(const DeleteWaitingRoomRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWaitingRoomWithOptions(request, runtime);
}

/**
 * @summary Deletes a waiting room event.
 *
 * @param request DeleteWaitingRoomEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWaitingRoomEventResponse
 */
DeleteWaitingRoomEventResponse Client::deleteWaitingRoomEventWithOptions(const DeleteWaitingRoomEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasWaitingRoomEventId()) {
    query["WaitingRoomEventId"] = request.waitingRoomEventId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWaitingRoomEvent"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWaitingRoomEventResponse>();
}

/**
 * @summary Deletes a waiting room event.
 *
 * @param request DeleteWaitingRoomEventRequest
 * @return DeleteWaitingRoomEventResponse
 */
DeleteWaitingRoomEventResponse Client::deleteWaitingRoomEvent(const DeleteWaitingRoomEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWaitingRoomEventWithOptions(request, runtime);
}

/**
 * @summary Deletes a waiting room bypass rule.
 *
 * @param request DeleteWaitingRoomRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWaitingRoomRuleResponse
 */
DeleteWaitingRoomRuleResponse Client::deleteWaitingRoomRuleWithOptions(const DeleteWaitingRoomRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasWaitingRoomRuleId()) {
    query["WaitingRoomRuleId"] = request.waitingRoomRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWaitingRoomRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWaitingRoomRuleResponse>();
}

/**
 * @summary Deletes a waiting room bypass rule.
 *
 * @param request DeleteWaitingRoomRuleRequest
 * @return DeleteWaitingRoomRuleResponse
 */
DeleteWaitingRoomRuleResponse Client::deleteWaitingRoomRule(const DeleteWaitingRoomRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWaitingRoomRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of a scenario-specific policy.
 *
 * @param request DescribeCustomScenePoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomScenePoliciesResponse
 */
DescribeCustomScenePoliciesResponse Client::describeCustomScenePoliciesWithOptions(const DescribeCustomScenePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomScenePolicies"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomScenePoliciesResponse>();
}

/**
 * @summary Queries the configurations of a scenario-specific policy.
 *
 * @param request DescribeCustomScenePoliciesRequest
 * @return DescribeCustomScenePoliciesResponse
 */
DescribeCustomScenePoliciesResponse Client::describeCustomScenePolicies(const DescribeCustomScenePoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomScenePoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries DDoS attack events.
 *
 * @param request DescribeDDoSAllEventListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDoSAllEventListResponse
 */
DescribeDDoSAllEventListResponse Client::describeDDoSAllEventListWithOptions(const DescribeDDoSAllEventListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.eventType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDDoSAllEventList"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDDoSAllEventListResponse>();
}

/**
 * @summary Queries DDoS attack events.
 *
 * @param request DescribeDDoSAllEventListRequest
 * @return DescribeDDoSAllEventListResponse
 */
DescribeDDoSAllEventListResponse Client::describeDDoSAllEventList(const DescribeDDoSAllEventListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDoSAllEventListWithOptions(request, runtime);
}

/**
 * @summary Query DCDN DDoS user bps and pps data
 *
 * @param request DescribeDDoSBpsListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDoSBpsListResponse
 */
DescribeDDoSBpsListResponse Client::describeDDoSBpsListWithOptions(const DescribeDDoSBpsListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDDoSBpsList"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDDoSBpsListResponse>();
}

/**
 * @summary Query DCDN DDoS user bps and pps data
 *
 * @param request DescribeDDoSBpsListRequest
 * @return DescribeDDoSBpsListResponse
 */
DescribeDDoSBpsListResponse Client::describeDDoSBpsList(const DescribeDDoSBpsListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDoSBpsListWithOptions(request, runtime);
}

/**
 * @summary DDoS Analysis Layer 7 QPS Trend Chart API
 *
 * @param request DescribeDDoSL7QpsListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDoSL7QpsListResponse
 */
DescribeDDoSL7QpsListResponse Client::describeDDoSL7QpsListWithOptions(const DescribeDDoSL7QpsListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.recordId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDDoSL7QpsList"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDDoSL7QpsListResponse>();
}

/**
 * @summary DDoS Analysis Layer 7 QPS Trend Chart API
 *
 * @param request DescribeDDoSL7QpsListRequest
 * @return DescribeDDoSL7QpsListResponse
 */
DescribeDDoSL7QpsListResponse Client::describeDDoSL7QpsList(const DescribeDDoSL7QpsListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDoSL7QpsListWithOptions(request, runtime);
}

/**
 * @summary 将天眼提供给XCDN边缘容器的监控OpenAPI适配成青蓝的OpenAPI
 *
 * @param request DescribeEdgeContainerAppStatsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEdgeContainerAppStatsResponse
 */
DescribeEdgeContainerAppStatsResponse Client::describeEdgeContainerAppStatsWithOptions(const DescribeEdgeContainerAppStatsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEdgeContainerAppStats"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEdgeContainerAppStatsResponse>();
}

/**
 * @summary 将天眼提供给XCDN边缘容器的监控OpenAPI适配成青蓝的OpenAPI
 *
 * @param request DescribeEdgeContainerAppStatsRequest
 * @return DescribeEdgeContainerAppStatsResponse
 */
DescribeEdgeContainerAppStatsResponse Client::describeEdgeContainerAppStats(const DescribeEdgeContainerAppStatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEdgeContainerAppStatsWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration of smart HTTP DDoS protection for a website.
 *
 * @param request DescribeHttpDDoSAttackIntelligentProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHttpDDoSAttackIntelligentProtectionResponse
 */
DescribeHttpDDoSAttackIntelligentProtectionResponse Client::describeHttpDDoSAttackIntelligentProtectionWithOptions(const DescribeHttpDDoSAttackIntelligentProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHttpDDoSAttackIntelligentProtection"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHttpDDoSAttackIntelligentProtectionResponse>();
}

/**
 * @summary Queries the configuration of smart HTTP DDoS protection for a website.
 *
 * @param request DescribeHttpDDoSAttackIntelligentProtectionRequest
 * @return DescribeHttpDDoSAttackIntelligentProtectionResponse
 */
DescribeHttpDDoSAttackIntelligentProtectionResponse Client::describeHttpDDoSAttackIntelligentProtection(const DescribeHttpDDoSAttackIntelligentProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHttpDDoSAttackIntelligentProtectionWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of HTTP DDoS attack protection.
 *
 * @param request DescribeHttpDDoSAttackProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHttpDDoSAttackProtectionResponse
 */
DescribeHttpDDoSAttackProtectionResponse Client::describeHttpDDoSAttackProtectionWithOptions(const DescribeHttpDDoSAttackProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHttpDDoSAttackProtection"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHttpDDoSAttackProtectionResponse>();
}

/**
 * @summary Queries the configurations of HTTP DDoS attack protection.
 *
 * @param request DescribeHttpDDoSAttackProtectionRequest
 * @return DescribeHttpDDoSAttackProtectionResponse
 */
DescribeHttpDDoSAttackProtectionResponse Client::describeHttpDDoSAttackProtection(const DescribeHttpDDoSAttackProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHttpDDoSAttackProtectionWithOptions(request, runtime);
}

/**
 * @summary Queries whether Edge KV is activated in your Alibaba Cloud account.
 *
 * @param request DescribeKvAccountStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeKvAccountStatusResponse
 */
DescribeKvAccountStatusResponse Client::describeKvAccountStatusWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeKvAccountStatus"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeKvAccountStatusResponse>();
}

/**
 * @summary Queries whether Edge KV is activated in your Alibaba Cloud account.
 *
 * @return DescribeKvAccountStatusResponse
 */
DescribeKvAccountStatusResponse Client::describeKvAccountStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeKvAccountStatusWithOptions(runtime);
}

/**
 * @summary Queries the details of prefetch tasks by time, task status, or prefetch URL.
 *
 * @param request DescribePreloadTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePreloadTasksResponse
 */
DescribePreloadTasksResponse Client::describePreloadTasksWithOptions(const DescribePreloadTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePreloadTasks"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePreloadTasksResponse>();
}

/**
 * @summary Queries the details of prefetch tasks by time, task status, or prefetch URL.
 *
 * @param request DescribePreloadTasksRequest
 * @return DescribePreloadTasksResponse
 */
DescribePreloadTasksResponse Client::describePreloadTasks(const DescribePreloadTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePreloadTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the details of purge tasks.
 *
 * @param request DescribePurgeTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePurgeTasksResponse
 */
DescribePurgeTasksResponse Client::describePurgeTasksWithOptions(const DescribePurgeTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePurgeTasks"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePurgeTasksResponse>();
}

/**
 * @summary Queries the details of purge tasks.
 *
 * @param request DescribePurgeTasksRequest
 * @return DescribePurgeTasksResponse
 */
DescribePurgeTasksResponse Client::describePurgeTasks(const DescribePurgeTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePurgeTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the status of an instance that uses a plan.
 *
 * @description You can query the status of an instance after you purchase a plan for the instance.
 *
 * @param request DescribeRatePlanInstanceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRatePlanInstanceStatusResponse
 */
DescribeRatePlanInstanceStatusResponse Client::describeRatePlanInstanceStatusWithOptions(const DescribeRatePlanInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRatePlanInstanceStatus"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRatePlanInstanceStatusResponse>();
}

/**
 * @summary Queries the status of an instance that uses a plan.
 *
 * @description You can query the status of an instance after you purchase a plan for the instance.
 *
 * @param request DescribeRatePlanInstanceStatusRequest
 * @return DescribeRatePlanInstanceStatusResponse
 */
DescribeRatePlanInstanceStatusResponse Client::describeRatePlanInstanceStatus(const DescribeRatePlanInstanceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRatePlanInstanceStatusWithOptions(request, runtime);
}

/**
 * @summary 查询站点离线日志
 *
 * @param request DescribeSiteLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSiteLogsResponse
 */
DescribeSiteLogsResponse Client::describeSiteLogsWithOptions(const DescribeSiteLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSiteLogs"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSiteLogsResponse>();
}

/**
 * @summary 查询站点离线日志
 *
 * @param request DescribeSiteLogsRequest
 * @return DescribeSiteLogsResponse
 */
DescribeSiteLogsResponse Client::describeSiteLogs(const DescribeSiteLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSiteLogsWithOptions(request, runtime);
}

/**
 * @summary 获取时序数据
 *
 * @param tmpReq DescribeSiteTimeSeriesDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSiteTimeSeriesDataResponse
 */
DescribeSiteTimeSeriesDataResponse Client::describeSiteTimeSeriesDataWithOptions(const DescribeSiteTimeSeriesDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeSiteTimeSeriesDataShrinkRequest request = DescribeSiteTimeSeriesDataShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFields()) {
    request.setFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.fields(), "Fields", "json"));
  }

  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasFieldsShrink()) {
    query["Fields"] = request.fieldsShrink();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSiteTimeSeriesData"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSiteTimeSeriesDataResponse>();
}

/**
 * @summary 获取时序数据
 *
 * @param request DescribeSiteTimeSeriesDataRequest
 * @return DescribeSiteTimeSeriesDataResponse
 */
DescribeSiteTimeSeriesDataResponse Client::describeSiteTimeSeriesData(const DescribeSiteTimeSeriesDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSiteTimeSeriesDataWithOptions(request, runtime);
}

/**
 * @summary 获取Top数据
 *
 * @param tmpReq DescribeSiteTopDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSiteTopDataResponse
 */
DescribeSiteTopDataResponse Client::describeSiteTopDataWithOptions(const DescribeSiteTopDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeSiteTopDataShrinkRequest request = DescribeSiteTopDataShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFields()) {
    request.setFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.fields(), "Fields", "json"));
  }

  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasFieldsShrink()) {
    query["Fields"] = request.fieldsShrink();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSiteTopData"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSiteTopDataResponse>();
}

/**
 * @summary 获取Top数据
 *
 * @param request DescribeSiteTopDataRequest
 * @return DescribeSiteTopDataResponse
 */
DescribeSiteTopDataResponse Client::describeSiteTopData(const DescribeSiteTopDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSiteTopDataWithOptions(request, runtime);
}

/**
 * @summary 查询网页观测质量数据
 *
 * @param request DescribeUrlObservationDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUrlObservationDataResponse
 */
DescribeUrlObservationDataResponse Client::describeUrlObservationDataWithOptions(const DescribeUrlObservationDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientPlatform()) {
    query["ClientPlatform"] = request.clientPlatform();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasMetric()) {
    query["Metric"] = request.metric();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUrlObservationData"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUrlObservationDataResponse>();
}

/**
 * @summary 查询网页观测质量数据
 *
 * @param request DescribeUrlObservationDataRequest
 * @return DescribeUrlObservationDataResponse
 */
DescribeUrlObservationDataResponse Client::describeUrlObservationData(const DescribeUrlObservationDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUrlObservationDataWithOptions(request, runtime);
}

/**
 * @summary Disables a scenario-specific policy.
 *
 * @param request DisableCustomScenePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableCustomScenePolicyResponse
 */
DisableCustomScenePolicyResponse Client::disableCustomScenePolicyWithOptions(const DisableCustomScenePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableCustomScenePolicy"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableCustomScenePolicyResponse>();
}

/**
 * @summary Disables a scenario-specific policy.
 *
 * @param request DisableCustomScenePolicyRequest
 * @return DisableCustomScenePolicyResponse
 */
DisableCustomScenePolicyResponse Client::disableCustomScenePolicy(const DisableCustomScenePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableCustomScenePolicyWithOptions(request, runtime);
}

/**
 * @summary Edit WAF Configuration for a Site
 *
 * @param tmpReq EditSiteWafSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditSiteWafSettingsResponse
 */
EditSiteWafSettingsResponse Client::editSiteWafSettingsWithOptions(const EditSiteWafSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  EditSiteWafSettingsShrinkRequest request = EditSiteWafSettingsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSettings()) {
    request.setSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.settings(), "Settings", "json"));
  }

  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  json body = {};
  if (!!request.hasSettingsShrink()) {
    body["Settings"] = request.settingsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EditSiteWafSettings"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EditSiteWafSettingsResponse>();
}

/**
 * @summary Edit WAF Configuration for a Site
 *
 * @param request EditSiteWafSettingsRequest
 * @return EditSiteWafSettingsResponse
 */
EditSiteWafSettingsResponse Client::editSiteWafSettings(const EditSiteWafSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editSiteWafSettingsWithOptions(request, runtime);
}

/**
 * @summary Enables a scenario-specific policy.
 *
 * @param request EnableCustomScenePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableCustomScenePolicyResponse
 */
EnableCustomScenePolicyResponse Client::enableCustomScenePolicyWithOptions(const EnableCustomScenePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableCustomScenePolicy"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableCustomScenePolicyResponse>();
}

/**
 * @summary Enables a scenario-specific policy.
 *
 * @param request EnableCustomScenePolicyRequest
 * @return EnableCustomScenePolicyResponse
 */
EnableCustomScenePolicyResponse Client::enableCustomScenePolicy(const EnableCustomScenePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableCustomScenePolicyWithOptions(request, runtime);
}

/**
 * @summary Exports all DNS records of a website domain as a TXT file.
 *
 * @param request ExportRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportRecordsResponse
 */
ExportRecordsResponse Client::exportRecordsWithOptions(const ExportRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportRecords"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportRecordsResponse>();
}

/**
 * @summary Exports all DNS records of a website domain as a TXT file.
 *
 * @param request ExportRecordsRequest
 * @return ExportRecordsResponse
 */
ExportRecordsResponse Client::exportRecords(const ExportRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the available specifications of cache reserve instances.
 *
 * @param request GetCacheReserveSpecificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCacheReserveSpecificationResponse
 */
GetCacheReserveSpecificationResponse Client::getCacheReserveSpecificationWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetCacheReserveSpecification"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCacheReserveSpecificationResponse>();
}

/**
 * @summary Queries the available specifications of cache reserve instances.
 *
 * @return GetCacheReserveSpecificationResponse
 */
GetCacheReserveSpecificationResponse Client::getCacheReserveSpecification() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCacheReserveSpecificationWithOptions(runtime);
}

/**
 * @summary Query a single cache configuration
 *
 * @param request GetCacheRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCacheRuleResponse
 */
GetCacheRuleResponse Client::getCacheRuleWithOptions(const GetCacheRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCacheRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCacheRuleResponse>();
}

/**
 * @summary Query a single cache configuration
 *
 * @param request GetCacheRuleRequest
 * @return GetCacheRuleResponse
 */
GetCacheRuleResponse Client::getCacheRule(const GetCacheRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCacheRuleWithOptions(request, runtime);
}

/**
 * @summary Query Site Cache Tag Configuration
 *
 * @param request GetCacheTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCacheTagResponse
 */
GetCacheTagResponse Client::getCacheTagWithOptions(const GetCacheTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCacheTag"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCacheTagResponse>();
}

/**
 * @summary Query Site Cache Tag Configuration
 *
 * @param request GetCacheTagRequest
 * @return GetCacheTagResponse
 */
GetCacheTagResponse Client::getCacheTag(const GetCacheTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCacheTagWithOptions(request, runtime);
}

/**
 * @summary Retrieve the certificate, private key, and certificate information
 *
 * @param request GetCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCertificateResponse
 */
GetCertificateResponse Client::getCertificateWithOptions(const GetCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCertificateResponse>();
}

/**
 * @summary Retrieve the certificate, private key, and certificate information
 *
 * @param request GetCertificateRequest
 * @return GetCertificateResponse
 */
GetCertificateResponse Client::getCertificate(const GetCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCertificateWithOptions(request, runtime);
}

/**
 * @summary Query certificate quota and usage
 *
 * @param request GetCertificateQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCertificateQuotaResponse
 */
GetCertificateQuotaResponse Client::getCertificateQuotaWithOptions(const GetCertificateQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCertificateQuota"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCertificateQuotaResponse>();
}

/**
 * @summary Query certificate quota and usage
 *
 * @param request GetCertificateQuotaRequest
 * @return GetCertificateQuotaResponse
 */
GetCertificateQuotaResponse Client::getCertificateQuota(const GetCertificateQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCertificateQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries a client CA certificate.
 *
 * @param request GetClientCaCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClientCaCertificateResponse
 */
GetClientCaCertificateResponse Client::getClientCaCertificateWithOptions(const GetClientCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClientCaCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClientCaCertificateResponse>();
}

/**
 * @summary Queries a client CA certificate.
 *
 * @param request GetClientCaCertificateRequest
 * @return GetClientCaCertificateResponse
 */
GetClientCaCertificateResponse Client::getClientCaCertificate(const GetClientCaCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClientCaCertificateWithOptions(request, runtime);
}

/**
 * @summary Queries information about a client certificate.
 *
 * @param request GetClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClientCertificateResponse
 */
GetClientCertificateResponse Client::getClientCertificateWithOptions(const GetClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClientCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClientCertificateResponse>();
}

/**
 * @summary Queries information about a client certificate.
 *
 * @param request GetClientCertificateRequest
 * @return GetClientCertificateResponse
 */
GetClientCertificateResponse Client::getClientCertificate(const GetClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClientCertificateWithOptions(request, runtime);
}

/**
 * @summary Queries domain names associated with a client CA certificate. If no certificate is specified, domain names associated with an Edge Security Acceleration(ESA)-managed CA certificate are returned.
 *
 * @param request GetClientCertificateHostnamesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClientCertificateHostnamesResponse
 */
GetClientCertificateHostnamesResponse Client::getClientCertificateHostnamesWithOptions(const GetClientCertificateHostnamesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClientCertificateHostnames"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClientCertificateHostnamesResponse>();
}

/**
 * @summary Queries domain names associated with a client CA certificate. If no certificate is specified, domain names associated with an Edge Security Acceleration(ESA)-managed CA certificate are returned.
 *
 * @param request GetClientCertificateHostnamesRequest
 * @return GetClientCertificateHostnamesResponse
 */
GetClientCertificateHostnamesResponse Client::getClientCertificateHostnames(const GetClientCertificateHostnamesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClientCertificateHostnamesWithOptions(request, runtime);
}

/**
 * @summary Queries the CNAME flattening configuration of a website
 *
 * @param request GetCnameFlatteningRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCnameFlatteningResponse
 */
GetCnameFlatteningResponse Client::getCnameFlatteningWithOptions(const GetCnameFlatteningRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCnameFlattening"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCnameFlatteningResponse>();
}

/**
 * @summary Queries the CNAME flattening configuration of a website
 *
 * @param request GetCnameFlatteningRequest
 * @return GetCnameFlatteningResponse
 */
GetCnameFlatteningResponse Client::getCnameFlattening(const GetCnameFlatteningRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCnameFlatteningWithOptions(request, runtime);
}

/**
 * @summary Query Compression Rule Details
 *
 * @param request GetCompressionRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCompressionRuleResponse
 */
GetCompressionRuleResponse Client::getCompressionRuleWithOptions(const GetCompressionRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCompressionRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCompressionRuleResponse>();
}

/**
 * @summary Query Compression Rule Details
 *
 * @param request GetCompressionRuleRequest
 * @return GetCompressionRuleResponse
 */
GetCompressionRuleResponse Client::getCompressionRule(const GetCompressionRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCompressionRuleWithOptions(request, runtime);
}

/**
 * @summary 查询站点中国大陆网络接入优化配置
 *
 * @param request GetCrossBorderOptimizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCrossBorderOptimizationResponse
 */
GetCrossBorderOptimizationResponse Client::getCrossBorderOptimizationWithOptions(const GetCrossBorderOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCrossBorderOptimization"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCrossBorderOptimizationResponse>();
}

/**
 * @summary 查询站点中国大陆网络接入优化配置
 *
 * @param request GetCrossBorderOptimizationRequest
 * @return GetCrossBorderOptimizationResponse
 */
GetCrossBorderOptimizationResponse Client::getCrossBorderOptimization(const GetCrossBorderOptimizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCrossBorderOptimizationWithOptions(request, runtime);
}

/**
 * @summary Query Site Developer Mode Configuration
 *
 * @param request GetDevelopmentModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDevelopmentModeResponse
 */
GetDevelopmentModeResponse Client::getDevelopmentModeWithOptions(const GetDevelopmentModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDevelopmentMode"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDevelopmentModeResponse>();
}

/**
 * @summary Query Site Developer Mode Configuration
 *
 * @param request GetDevelopmentModeRequest
 * @return GetDevelopmentModeResponse
 */
GetDevelopmentModeResponse Client::getDevelopmentMode(const GetDevelopmentModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDevelopmentModeWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a containerized application, including basic application configurations and health check configurations.
 *
 * @param request GetEdgeContainerAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEdgeContainerAppResponse
 */
GetEdgeContainerAppResponse Client::getEdgeContainerAppWithOptions(const GetEdgeContainerAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEdgeContainerApp"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEdgeContainerAppResponse>();
}

/**
 * @summary Queries the information about a containerized application, including basic application configurations and health check configurations.
 *
 * @param request GetEdgeContainerAppRequest
 * @return GetEdgeContainerAppResponse
 */
GetEdgeContainerAppResponse Client::getEdgeContainerApp(const GetEdgeContainerAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEdgeContainerAppWithOptions(request, runtime);
}

/**
 * @summary Queries the log collection configuration of a containerized application.
 *
 * @param request GetEdgeContainerAppLogRiverRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEdgeContainerAppLogRiverResponse
 */
GetEdgeContainerAppLogRiverResponse Client::getEdgeContainerAppLogRiverWithOptions(const GetEdgeContainerAppLogRiverRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEdgeContainerAppLogRiver"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEdgeContainerAppLogRiverResponse>();
}

/**
 * @summary Queries the log collection configuration of a containerized application.
 *
 * @param request GetEdgeContainerAppLogRiverRequest
 * @return GetEdgeContainerAppLogRiverResponse
 */
GetEdgeContainerAppLogRiverResponse Client::getEdgeContainerAppLogRiver(const GetEdgeContainerAppLogRiverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEdgeContainerAppLogRiverWithOptions(request, runtime);
}

/**
 * @summary 获取边缘容器资源预留配置
 *
 * @param request GetEdgeContainerAppResourceReserveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEdgeContainerAppResourceReserveResponse
 */
GetEdgeContainerAppResourceReserveResponse Client::getEdgeContainerAppResourceReserveWithOptions(const GetEdgeContainerAppResourceReserveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEdgeContainerAppResourceReserve"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEdgeContainerAppResourceReserveResponse>();
}

/**
 * @summary 获取边缘容器资源预留配置
 *
 * @param request GetEdgeContainerAppResourceReserveRequest
 * @return GetEdgeContainerAppResourceReserveResponse
 */
GetEdgeContainerAppResourceReserveResponse Client::getEdgeContainerAppResourceReserve(const GetEdgeContainerAppResourceReserveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEdgeContainerAppResourceReserveWithOptions(request, runtime);
}

/**
 * @summary 获取边缘容器应用资源分布
 *
 * @param request GetEdgeContainerAppResourceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEdgeContainerAppResourceStatusResponse
 */
GetEdgeContainerAppResourceStatusResponse Client::getEdgeContainerAppResourceStatusWithOptions(const GetEdgeContainerAppResourceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEdgeContainerAppResourceStatus"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEdgeContainerAppResourceStatusResponse>();
}

/**
 * @summary 获取边缘容器应用资源分布
 *
 * @param request GetEdgeContainerAppResourceStatusRequest
 * @return GetEdgeContainerAppResourceStatusResponse
 */
GetEdgeContainerAppResourceStatusResponse Client::getEdgeContainerAppResourceStatus(const GetEdgeContainerAppResourceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEdgeContainerAppResourceStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the status information about a containerized application, including the deployment, release, and rollback of the application.
 *
 * @param request GetEdgeContainerAppStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEdgeContainerAppStatusResponse
 */
GetEdgeContainerAppStatusResponse Client::getEdgeContainerAppStatusWithOptions(const GetEdgeContainerAppStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasPublishEnv()) {
    query["PublishEnv"] = request.publishEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEdgeContainerAppStatus"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEdgeContainerAppStatusResponse>();
}

/**
 * @summary Queries the status information about a containerized application, including the deployment, release, and rollback of the application.
 *
 * @param request GetEdgeContainerAppStatusRequest
 * @return GetEdgeContainerAppStatusResponse
 */
GetEdgeContainerAppStatusResponse Client::getEdgeContainerAppStatus(const GetEdgeContainerAppStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEdgeContainerAppStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a version of a containerized application. You can select an application version to release based on the version information.
 *
 * @param request GetEdgeContainerAppVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEdgeContainerAppVersionResponse
 */
GetEdgeContainerAppVersionResponse Client::getEdgeContainerAppVersionWithOptions(const GetEdgeContainerAppVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEdgeContainerAppVersion"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEdgeContainerAppVersionResponse>();
}

/**
 * @summary Queries the information about a version of a containerized application. You can select an application version to release based on the version information.
 *
 * @param request GetEdgeContainerAppVersionRequest
 * @return GetEdgeContainerAppVersionResponse
 */
GetEdgeContainerAppVersionResponse Client::getEdgeContainerAppVersion(const GetEdgeContainerAppVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEdgeContainerAppVersionWithOptions(request, runtime);
}

/**
 * @summary Queries regions where a containerized application is deployed based on the application ID.
 *
 * @param request GetEdgeContainerDeployRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEdgeContainerDeployRegionsResponse
 */
GetEdgeContainerDeployRegionsResponse Client::getEdgeContainerDeployRegionsWithOptions(const GetEdgeContainerDeployRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEdgeContainerDeployRegions"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEdgeContainerDeployRegionsResponse>();
}

/**
 * @summary Queries regions where a containerized application is deployed based on the application ID.
 *
 * @param request GetEdgeContainerDeployRegionsRequest
 * @return GetEdgeContainerDeployRegionsResponse
 */
GetEdgeContainerDeployRegionsResponse Client::getEdgeContainerDeployRegions(const GetEdgeContainerDeployRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEdgeContainerDeployRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries Edge Container logs.
 *
 * @param request GetEdgeContainerLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEdgeContainerLogsResponse
 */
GetEdgeContainerLogsResponse Client::getEdgeContainerLogsWithOptions(const GetEdgeContainerLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEdgeContainerLogs"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEdgeContainerLogsResponse>();
}

/**
 * @summary Queries Edge Container logs.
 *
 * @param request GetEdgeContainerLogsRequest
 * @return GetEdgeContainerLogsResponse
 */
GetEdgeContainerLogsResponse Client::getEdgeContainerLogs(const GetEdgeContainerLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEdgeContainerLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the deployment status of an application in the staging environment by using the application ID.
 *
 * @param request GetEdgeContainerStagingDeployStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEdgeContainerStagingDeployStatusResponse
 */
GetEdgeContainerStagingDeployStatusResponse Client::getEdgeContainerStagingDeployStatusWithOptions(const GetEdgeContainerStagingDeployStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEdgeContainerStagingDeployStatus"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEdgeContainerStagingDeployStatusResponse>();
}

/**
 * @summary Queries the deployment status of an application in the staging environment by using the application ID.
 *
 * @param request GetEdgeContainerStagingDeployStatusRequest
 * @return GetEdgeContainerStagingDeployStatusResponse
 */
GetEdgeContainerStagingDeployStatusResponse Client::getEdgeContainerStagingDeployStatus(const GetEdgeContainerStagingDeployStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEdgeContainerStagingDeployStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the terminal information of a containerized application.
 *
 * @param request GetEdgeContainerTerminalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEdgeContainerTerminalResponse
 */
GetEdgeContainerTerminalResponse Client::getEdgeContainerTerminalWithOptions(const GetEdgeContainerTerminalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEdgeContainerTerminal"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEdgeContainerTerminalResponse>();
}

/**
 * @summary Queries the terminal information of a containerized application.
 *
 * @param request GetEdgeContainerTerminalRequest
 * @return GetEdgeContainerTerminalResponse
 */
GetEdgeContainerTerminalResponse Client::getEdgeContainerTerminal(const GetEdgeContainerTerminalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEdgeContainerTerminalWithOptions(request, runtime);
}

/**
 * @summary Checks the status of Edge Routine.
 *
 * @param request GetErServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetErServiceResponse
 */
GetErServiceResponse Client::getErServiceWithOptions(const GetErServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetErService"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetErServiceResponse>();
}

/**
 * @summary Checks the status of Edge Routine.
 *
 * @param request GetErServiceRequest
 * @return GetErServiceResponse
 */
GetErServiceResponse Client::getErService(const GetErServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getErServiceWithOptions(request, runtime);
}

/**
 * @summary 查询HTTP入站请求头规则详情
 *
 * @param request GetHttpIncomingRequestHeaderModificationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHttpIncomingRequestHeaderModificationRuleResponse
 */
GetHttpIncomingRequestHeaderModificationRuleResponse Client::getHttpIncomingRequestHeaderModificationRuleWithOptions(const GetHttpIncomingRequestHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHttpIncomingRequestHeaderModificationRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHttpIncomingRequestHeaderModificationRuleResponse>();
}

/**
 * @summary 查询HTTP入站请求头规则详情
 *
 * @param request GetHttpIncomingRequestHeaderModificationRuleRequest
 * @return GetHttpIncomingRequestHeaderModificationRuleResponse
 */
GetHttpIncomingRequestHeaderModificationRuleResponse Client::getHttpIncomingRequestHeaderModificationRule(const GetHttpIncomingRequestHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHttpIncomingRequestHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary 查询HTTP入站响应头规则
 *
 * @param request GetHttpIncomingResponseHeaderModificationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHttpIncomingResponseHeaderModificationRuleResponse
 */
GetHttpIncomingResponseHeaderModificationRuleResponse Client::getHttpIncomingResponseHeaderModificationRuleWithOptions(const GetHttpIncomingResponseHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHttpIncomingResponseHeaderModificationRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHttpIncomingResponseHeaderModificationRuleResponse>();
}

/**
 * @summary 查询HTTP入站响应头规则
 *
 * @param request GetHttpIncomingResponseHeaderModificationRuleRequest
 * @return GetHttpIncomingResponseHeaderModificationRuleResponse
 */
GetHttpIncomingResponseHeaderModificationRuleResponse Client::getHttpIncomingResponseHeaderModificationRule(const GetHttpIncomingResponseHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHttpIncomingResponseHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Query HTTP Request Header Rule Details
 *
 * @param request GetHttpRequestHeaderModificationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHttpRequestHeaderModificationRuleResponse
 */
GetHttpRequestHeaderModificationRuleResponse Client::getHttpRequestHeaderModificationRuleWithOptions(const GetHttpRequestHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHttpRequestHeaderModificationRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHttpRequestHeaderModificationRuleResponse>();
}

/**
 * @summary Query HTTP Request Header Rule Details
 *
 * @param request GetHttpRequestHeaderModificationRuleRequest
 * @return GetHttpRequestHeaderModificationRuleResponse
 */
GetHttpRequestHeaderModificationRuleResponse Client::getHttpRequestHeaderModificationRule(const GetHttpRequestHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHttpRequestHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Query HTTP Response Header Rules
 *
 * @param request GetHttpResponseHeaderModificationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHttpResponseHeaderModificationRuleResponse
 */
GetHttpResponseHeaderModificationRuleResponse Client::getHttpResponseHeaderModificationRuleWithOptions(const GetHttpResponseHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHttpResponseHeaderModificationRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHttpResponseHeaderModificationRuleResponse>();
}

/**
 * @summary Query HTTP Response Header Rules
 *
 * @param request GetHttpResponseHeaderModificationRuleRequest
 * @return GetHttpResponseHeaderModificationRuleResponse
 */
GetHttpResponseHeaderModificationRuleResponse Client::getHttpResponseHeaderModificationRule(const GetHttpResponseHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHttpResponseHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Query a Single HTTPS Application Configuration
 *
 * @param request GetHttpsApplicationConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHttpsApplicationConfigurationResponse
 */
GetHttpsApplicationConfigurationResponse Client::getHttpsApplicationConfigurationWithOptions(const GetHttpsApplicationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHttpsApplicationConfiguration"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHttpsApplicationConfigurationResponse>();
}

/**
 * @summary Query a Single HTTPS Application Configuration
 *
 * @param request GetHttpsApplicationConfigurationRequest
 * @return GetHttpsApplicationConfigurationResponse
 */
GetHttpsApplicationConfigurationResponse Client::getHttpsApplicationConfiguration(const GetHttpsApplicationConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHttpsApplicationConfigurationWithOptions(request, runtime);
}

/**
 * @summary Query a Single HTTPS Basic Configuration
 *
 * @param request GetHttpsBasicConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHttpsBasicConfigurationResponse
 */
GetHttpsBasicConfigurationResponse Client::getHttpsBasicConfigurationWithOptions(const GetHttpsBasicConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHttpsBasicConfiguration"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHttpsBasicConfigurationResponse>();
}

/**
 * @summary Query a Single HTTPS Basic Configuration
 *
 * @param request GetHttpsBasicConfigurationRequest
 * @return GetHttpsBasicConfigurationResponse
 */
GetHttpsBasicConfigurationResponse Client::getHttpsBasicConfiguration(const GetHttpsBasicConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHttpsBasicConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries the IPv6 configuration of a website.
 *
 * @param request GetIPv6Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIPv6Response
 */
GetIPv6Response Client::getIPv6WithOptions(const GetIPv6Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIPv6"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIPv6Response>();
}

/**
 * @summary Queries the IPv6 configuration of a website.
 *
 * @param request GetIPv6Request
 * @return GetIPv6Response
 */
GetIPv6Response Client::getIPv6(const GetIPv6Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIPv6WithOptions(request, runtime);
}

/**
 * @summary Query Single Site Image Transformation Configuration
 *
 * @param request GetImageTransformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageTransformResponse
 */
GetImageTransformResponse Client::getImageTransformWithOptions(const GetImageTransformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetImageTransform"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageTransformResponse>();
}

/**
 * @summary Query Single Site Image Transformation Configuration
 *
 * @param request GetImageTransformRequest
 * @return GetImageTransformResponse
 */
GetImageTransformResponse Client::getImageTransform(const GetImageTransformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageTransformWithOptions(request, runtime);
}

/**
 * @summary Queries the value of a key in a key-value pair.
 *
 * @param request GetKvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKvResponse
 */
GetKvResponse Client::getKvWithOptions(const GetKvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKv"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKvResponse>();
}

/**
 * @summary Queries the value of a key in a key-value pair.
 *
 * @param request GetKvRequest
 * @return GetKvResponse
 */
GetKvResponse Client::getKv(const GetKvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getKvWithOptions(request, runtime);
}

/**
 * @summary Queries the Edge KV usage in your Alibaba Cloud account, including the information about all namespaces.
 *
 * @param request GetKvAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKvAccountResponse
 */
GetKvAccountResponse Client::getKvAccountWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetKvAccount"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKvAccountResponse>();
}

/**
 * @summary Queries the Edge KV usage in your Alibaba Cloud account, including the information about all namespaces.
 *
 * @return GetKvAccountResponse
 */
GetKvAccountResponse Client::getKvAccount() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getKvAccountWithOptions(runtime);
}

/**
 * @summary Queries the information about a namespace in your Alibaba Cloud account.
 *
 * @param request GetKvNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKvNamespaceResponse
 */
GetKvNamespaceResponse Client::getKvNamespaceWithOptions(const GetKvNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKvNamespace"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKvNamespaceResponse>();
}

/**
 * @summary Queries the information about a namespace in your Alibaba Cloud account.
 *
 * @param request GetKvNamespaceRequest
 * @return GetKvNamespaceResponse
 */
GetKvNamespaceResponse Client::getKvNamespace(const GetKvNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getKvNamespaceWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a custom list, such as the name, description, type, and content.
 *
 * @param request GetListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetListResponse
 */
GetListResponse Client::getListWithOptions(const GetListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetList"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetListResponse>();
}

/**
 * @summary Queries the details of a custom list, such as the name, description, type, and content.
 *
 * @param request GetListRequest
 * @return GetListResponse
 */
GetListResponse Client::getList(const GetListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getListWithOptions(request, runtime);
}

/**
 * @summary Query a Specific Load Balancer
 *
 * @description This API allows users to query the configuration details of a specific load balancer by providing necessary authentication information and resource identifiers, including but not limited to name, session persistence strategy, routing policy, etc.
 *
 * @param request GetLoadBalancerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLoadBalancerResponse
 */
GetLoadBalancerResponse Client::getLoadBalancerWithOptions(const GetLoadBalancerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLoadBalancer"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLoadBalancerResponse>();
}

/**
 * @summary Query a Specific Load Balancer
 *
 * @description This API allows users to query the configuration details of a specific load balancer by providing necessary authentication information and resource identifiers, including but not limited to name, session persistence strategy, routing policy, etc.
 *
 * @param request GetLoadBalancerRequest
 * @return GetLoadBalancerResponse
 */
GetLoadBalancerResponse Client::getLoadBalancer(const GetLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary Query Managed Transform Configuration
 *
 * @param request GetManagedTransformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetManagedTransformResponse
 */
GetManagedTransformResponse Client::getManagedTransformWithOptions(const GetManagedTransformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetManagedTransform"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetManagedTransformResponse>();
}

/**
 * @summary Query Managed Transform Configuration
 *
 * @param request GetManagedTransformRequest
 * @return GetManagedTransformResponse
 */
GetManagedTransformResponse Client::getManagedTransform(const GetManagedTransformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getManagedTransformWithOptions(request, runtime);
}

/**
 * @summary Query a single network optimization configuration
 *
 * @param request GetNetworkOptimizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNetworkOptimizationResponse
 */
GetNetworkOptimizationResponse Client::getNetworkOptimizationWithOptions(const GetNetworkOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNetworkOptimization"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNetworkOptimizationResponse>();
}

/**
 * @summary Query a single network optimization configuration
 *
 * @param request GetNetworkOptimizationRequest
 * @return GetNetworkOptimizationResponse
 */
GetNetworkOptimizationResponse Client::getNetworkOptimization(const GetNetworkOptimizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNetworkOptimizationWithOptions(request, runtime);
}

/**
 * @summary 获取源服务器CA证书信息
 *
 * @param request GetOriginCaCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOriginCaCertificateResponse
 */
GetOriginCaCertificateResponse Client::getOriginCaCertificateWithOptions(const GetOriginCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOriginCaCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOriginCaCertificateResponse>();
}

/**
 * @summary 获取源服务器CA证书信息
 *
 * @param request GetOriginCaCertificateRequest
 * @return GetOriginCaCertificateResponse
 */
GetOriginCaCertificateResponse Client::getOriginCaCertificate(const GetOriginCaCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOriginCaCertificateWithOptions(request, runtime);
}

/**
 * @summary 获取域名回源客户端证书信息
 *
 * @param request GetOriginClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOriginClientCertificateResponse
 */
GetOriginClientCertificateResponse Client::getOriginClientCertificateWithOptions(const GetOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOriginClientCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOriginClientCertificateResponse>();
}

/**
 * @summary 获取域名回源客户端证书信息
 *
 * @param request GetOriginClientCertificateRequest
 * @return GetOriginClientCertificateResponse
 */
GetOriginClientCertificateResponse Client::getOriginClientCertificate(const GetOriginClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOriginClientCertificateWithOptions(request, runtime);
}

/**
 * @summary 获取域名回源客户端证书绑定的域名列表
 *
 * @param request GetOriginClientCertificateHostnamesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOriginClientCertificateHostnamesResponse
 */
GetOriginClientCertificateHostnamesResponse Client::getOriginClientCertificateHostnamesWithOptions(const GetOriginClientCertificateHostnamesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOriginClientCertificateHostnames"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOriginClientCertificateHostnamesResponse>();
}

/**
 * @summary 获取域名回源客户端证书绑定的域名列表
 *
 * @param request GetOriginClientCertificateHostnamesRequest
 * @return GetOriginClientCertificateHostnamesResponse
 */
GetOriginClientCertificateHostnamesResponse Client::getOriginClientCertificateHostnames(const GetOriginClientCertificateHostnamesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOriginClientCertificateHostnamesWithOptions(request, runtime);
}

/**
 * @summary Query a specific origin pool
 *
 * @param request GetOriginPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOriginPoolResponse
 */
GetOriginPoolResponse Client::getOriginPoolWithOptions(const GetOriginPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOriginPool"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOriginPoolResponse>();
}

/**
 * @summary Query a specific origin pool
 *
 * @param request GetOriginPoolRequest
 * @return GetOriginPoolResponse
 */
GetOriginPoolResponse Client::getOriginPool(const GetOriginPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOriginPoolWithOptions(request, runtime);
}

/**
 * @summary Queries the origin protection configurations of a website, including the origin protection, IP convergence, and the status and details of the IP whitelist for origin protection. The details includes the IP whitelist used by the website, the latest IP whitelist, and the differences between them.
 *
 * @param request GetOriginProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOriginProtectionResponse
 */
GetOriginProtectionResponse Client::getOriginProtectionWithOptions(const GetOriginProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOriginProtection"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOriginProtectionResponse>();
}

/**
 * @summary Queries the origin protection configurations of a website, including the origin protection, IP convergence, and the status and details of the IP whitelist for origin protection. The details includes the IP whitelist used by the website, the latest IP whitelist, and the differences between them.
 *
 * @param request GetOriginProtectionRequest
 * @return GetOriginProtectionResponse
 */
GetOriginProtectionResponse Client::getOriginProtection(const GetOriginProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOriginProtectionWithOptions(request, runtime);
}

/**
 * @summary Query a Single Origin Rule Configuration
 *
 * @param request GetOriginRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOriginRuleResponse
 */
GetOriginRuleResponse Client::getOriginRuleWithOptions(const GetOriginRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOriginRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOriginRuleResponse>();
}

/**
 * @summary Query a Single Origin Rule Configuration
 *
 * @param request GetOriginRuleRequest
 * @return GetOriginRuleResponse
 */
GetOriginRuleResponse Client::getOriginRule(const GetOriginRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOriginRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a custom error page based on the error page ID.
 *
 * @param request GetPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPageResponse
 */
GetPageResponse Client::getPageWithOptions(const GetPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPage"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPageResponse>();
}

/**
 * @summary Queries the details of a custom error page based on the error page ID.
 *
 * @param request GetPageRequest
 * @return GetPageResponse
 */
GetPageResponse Client::getPage(const GetPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPageWithOptions(request, runtime);
}

/**
 * @summary Queries the quotas and quota usage for different cache purge options.
 *
 * @param request GetPurgeQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPurgeQuotaResponse
 */
GetPurgeQuotaResponse Client::getPurgeQuotaWithOptions(const GetPurgeQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPurgeQuota"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPurgeQuotaResponse>();
}

/**
 * @summary Queries the quotas and quota usage for different cache purge options.
 *
 * @param request GetPurgeQuotaRequest
 * @return GetPurgeQuotaResponse
 */
GetPurgeQuotaResponse Client::getPurgeQuota(const GetPurgeQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPurgeQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries the fields in real-time logs based on the log category.
 *
 * @param request GetRealtimeDeliveryFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRealtimeDeliveryFieldResponse
 */
GetRealtimeDeliveryFieldResponse Client::getRealtimeDeliveryFieldWithOptions(const GetRealtimeDeliveryFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRealtimeDeliveryField"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRealtimeDeliveryFieldResponse>();
}

/**
 * @summary Queries the fields in real-time logs based on the log category.
 *
 * @param request GetRealtimeDeliveryFieldRequest
 * @return GetRealtimeDeliveryFieldResponse
 */
GetRealtimeDeliveryFieldResponse Client::getRealtimeDeliveryField(const GetRealtimeDeliveryFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRealtimeDeliveryFieldWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration of a single DNS record, such as the record value, priority, and origin authentication setting (exclusive to CNAME records).
 *
 * @param request GetRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecordResponse
 */
GetRecordResponse Client::getRecordWithOptions(const GetRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRecord"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecordResponse>();
}

/**
 * @summary Queries the configuration of a single DNS record, such as the record value, priority, and origin authentication setting (exclusive to CNAME records).
 *
 * @param request GetRecordRequest
 * @return GetRecordResponse
 */
GetRecordResponse Client::getRecord(const GetRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRecordWithOptions(request, runtime);
}

/**
 * @summary Query Redirect Rule Details
 *
 * @param request GetRedirectRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRedirectRuleResponse
 */
GetRedirectRuleResponse Client::getRedirectRuleWithOptions(const GetRedirectRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRedirectRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRedirectRuleResponse>();
}

/**
 * @summary Query Redirect Rule Details
 *
 * @param request GetRedirectRuleRequest
 * @return GetRedirectRuleResponse
 */
GetRedirectRuleResponse Client::getRedirectRule(const GetRedirectRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRedirectRuleWithOptions(request, runtime);
}

/**
 * @summary Query details of the rewrite URL rule
 *
 * @param request GetRewriteUrlRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRewriteUrlRuleResponse
 */
GetRewriteUrlRuleResponse Client::getRewriteUrlRuleWithOptions(const GetRewriteUrlRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRewriteUrlRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRewriteUrlRuleResponse>();
}

/**
 * @summary Query details of the rewrite URL rule
 *
 * @param request GetRewriteUrlRuleRequest
 * @return GetRewriteUrlRuleResponse
 */
GetRewriteUrlRuleResponse Client::getRewriteUrlRule(const GetRewriteUrlRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRewriteUrlRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of a routine, including the code versions and the configurations of the environments, associated domain names, and associated routes.
 *
 * @param request GetRoutineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRoutineResponse
 */
GetRoutineResponse Client::getRoutineWithOptions(const GetRoutineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetRoutine"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRoutineResponse>();
}

/**
 * @summary Queries the configurations of a routine, including the code versions and the configurations of the environments, associated domain names, and associated routes.
 *
 * @param request GetRoutineRequest
 * @return GetRoutineResponse
 */
GetRoutineResponse Client::getRoutine(const GetRoutineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRoutineWithOptions(request, runtime);
}

/**
 * @summary 查询Routine某版本代码
 *
 * @param request GetRoutineCodeVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRoutineCodeVersionResponse
 */
GetRoutineCodeVersionResponse Client::getRoutineCodeVersionWithOptions(const GetRoutineCodeVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCodeVersion()) {
    body["CodeVersion"] = request.codeVersion();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetRoutineCodeVersion"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRoutineCodeVersionResponse>();
}

/**
 * @summary 查询Routine某版本代码
 *
 * @param request GetRoutineCodeVersionRequest
 * @return GetRoutineCodeVersionResponse
 */
GetRoutineCodeVersionResponse Client::getRoutineCodeVersion(const GetRoutineCodeVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRoutineCodeVersionWithOptions(request, runtime);
}

/**
 * @summary 查询单条边缘函数路由配置
 *
 * @param request GetRoutineRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRoutineRouteResponse
 */
GetRoutineRouteResponse Client::getRoutineRouteWithOptions(const GetRoutineRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRoutineRoute"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRoutineRouteResponse>();
}

/**
 * @summary 查询单条边缘函数路由配置
 *
 * @param request GetRoutineRouteRequest
 * @return GetRoutineRouteResponse
 */
GetRoutineRouteResponse Client::getRoutineRoute(const GetRoutineRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRoutineRouteWithOptions(request, runtime);
}

/**
 * @summary Obtains the release information about the routine code that is released to the staging environment. This information can be used to upload the test code to Object Storage Service (OSS).
 *
 * @description *   Every time the code of a routine is released to the staging environment, a version number is generated. Such code is for tests only.
 * *   A routine can retain a maximum of 10 code versions. If the number of versions reaches the limit, you must call the DeleteRoutineCodeRevision operation to delete unwanted versions.
 *
 * @param request GetRoutineStagingCodeUploadInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRoutineStagingCodeUploadInfoResponse
 */
GetRoutineStagingCodeUploadInfoResponse Client::getRoutineStagingCodeUploadInfoWithOptions(const GetRoutineStagingCodeUploadInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCodeDescription()) {
    body["CodeDescription"] = request.codeDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetRoutineStagingCodeUploadInfo"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRoutineStagingCodeUploadInfoResponse>();
}

/**
 * @summary Obtains the release information about the routine code that is released to the staging environment. This information can be used to upload the test code to Object Storage Service (OSS).
 *
 * @description *   Every time the code of a routine is released to the staging environment, a version number is generated. Such code is for tests only.
 * *   A routine can retain a maximum of 10 code versions. If the number of versions reaches the limit, you must call the DeleteRoutineCodeRevision operation to delete unwanted versions.
 *
 * @param request GetRoutineStagingCodeUploadInfoRequest
 * @return GetRoutineStagingCodeUploadInfoResponse
 */
GetRoutineStagingCodeUploadInfoResponse Client::getRoutineStagingCodeUploadInfo(const GetRoutineStagingCodeUploadInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRoutineStagingCodeUploadInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the IP addresses of staging environments for Edge Routine.
 *
 * @param request GetRoutineStagingEnvIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRoutineStagingEnvIpResponse
 */
GetRoutineStagingEnvIpResponse Client::getRoutineStagingEnvIpWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetRoutineStagingEnvIp"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRoutineStagingEnvIpResponse>();
}

/**
 * @summary Queries the IP addresses of staging environments for Edge Routine.
 *
 * @return GetRoutineStagingEnvIpResponse
 */
GetRoutineStagingEnvIpResponse Client::getRoutineStagingEnvIp() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRoutineStagingEnvIpWithOptions(runtime);
}

/**
 * @summary Queries the Edge Routine information in your Alibaba Cloud account, including the associated subdomain and created routines.
 *
 * @param request GetRoutineUserInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRoutineUserInfoResponse
 */
GetRoutineUserInfoResponse Client::getRoutineUserInfoWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetRoutineUserInfo"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRoutineUserInfoResponse>();
}

/**
 * @summary Queries the Edge Routine information in your Alibaba Cloud account, including the associated subdomain and created routines.
 *
 * @return GetRoutineUserInfoResponse
 */
GetRoutineUserInfoResponse Client::getRoutineUserInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRoutineUserInfoWithOptions(runtime);
}

/**
 * @summary Queries a specified scheduled prefetch task based on the task ID.
 *
 * @param request GetScheduledPreloadJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScheduledPreloadJobResponse
 */
GetScheduledPreloadJobResponse Client::getScheduledPreloadJobWithOptions(const GetScheduledPreloadJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScheduledPreloadJob"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScheduledPreloadJobResponse>();
}

/**
 * @summary Queries a specified scheduled prefetch task based on the task ID.
 *
 * @param request GetScheduledPreloadJobRequest
 * @return GetScheduledPreloadJobResponse
 */
GetScheduledPreloadJobResponse Client::getScheduledPreloadJob(const GetScheduledPreloadJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getScheduledPreloadJobWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration for search engine crawler of a website.
 *
 * @param request GetSeoBypassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSeoBypassResponse
 */
GetSeoBypassResponse Client::getSeoBypassWithOptions(const GetSeoBypassRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSeoBypass"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSeoBypassResponse>();
}

/**
 * @summary Queries the configuration for search engine crawler of a website.
 *
 * @param request GetSeoBypassRequest
 * @return GetSeoBypassResponse
 */
GetSeoBypassResponse Client::getSeoBypass(const GetSeoBypassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSeoBypassWithOptions(request, runtime);
}

/**
 * @summary Queries information about a website based on the website ID.
 *
 * @param request GetSiteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSiteResponse
 */
GetSiteResponse Client::getSiteWithOptions(const GetSiteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSite"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSiteResponse>();
}

/**
 * @summary Queries information about a website based on the website ID.
 *
 * @param request GetSiteRequest
 * @return GetSiteResponse
 */
GetSiteResponse Client::getSite(const GetSiteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSiteWithOptions(request, runtime);
}

/**
 * @summary Queries the nameservers configured for a website.
 *
 * @param request GetSiteCurrentNSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSiteCurrentNSResponse
 */
GetSiteCurrentNSResponse Client::getSiteCurrentNSWithOptions(const GetSiteCurrentNSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSiteCurrentNS"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSiteCurrentNSResponse>();
}

/**
 * @summary Queries the nameservers configured for a website.
 *
 * @param request GetSiteCurrentNSRequest
 * @return GetSiteCurrentNSResponse
 */
GetSiteCurrentNSResponse Client::getSiteCurrentNS(const GetSiteCurrentNSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSiteCurrentNSWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration of custom log fields for a website.
 *
 * @description *   **Description**: You can call this operation to query the configuration of custom log fields for a website, including custom fields in request headers, response headers, and cookies.
 * *   **Scenarios**: You can call this operation in scenarios where you need to obtain specific HTTP headers or cookie information for log analysis.
 * *   ****
 *
 * @param request GetSiteCustomLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSiteCustomLogResponse
 */
GetSiteCustomLogResponse Client::getSiteCustomLogWithOptions(const GetSiteCustomLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSiteCustomLog"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSiteCustomLogResponse>();
}

/**
 * @summary Queries the configuration of custom log fields for a website.
 *
 * @description *   **Description**: You can call this operation to query the configuration of custom log fields for a website, including custom fields in request headers, response headers, and cookies.
 * *   **Scenarios**: You can call this operation in scenarios where you need to obtain specific HTTP headers or cookie information for log analysis.
 * *   ****
 *
 * @param request GetSiteCustomLogRequest
 * @return GetSiteCustomLogResponse
 */
GetSiteCustomLogResponse Client::getSiteCustomLog(const GetSiteCustomLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSiteCustomLogWithOptions(request, runtime);
}

/**
 * @summary Queries a real-time log delivery task.
 *
 * @param request GetSiteDeliveryTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSiteDeliveryTaskResponse
 */
GetSiteDeliveryTaskResponse Client::getSiteDeliveryTaskWithOptions(const GetSiteDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSiteDeliveryTask"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSiteDeliveryTaskResponse>();
}

/**
 * @summary Queries a real-time log delivery task.
 *
 * @param request GetSiteDeliveryTaskRequest
 * @return GetSiteDeliveryTaskResponse
 */
GetSiteDeliveryTaskResponse Client::getSiteDeliveryTask(const GetSiteDeliveryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSiteDeliveryTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the remaining quota for delivering a specific category of real-time logs in a website.
 *
 * @description You can call this operation to query the remaining quota for delivering a specific category of real-time logs in a website within an Alibaba Cloud account. This is essential for monitoring and managing your log delivery capacity to ensure that logs can be delivered to the destination and prevent data loss or latency caused by insufficient quota.
 * **Take note of the following parameters:**
 * *   ``
 * *   `BusinessType` is required. You must specify a log category to obtain the corresponding quota information.
 * *   `SiteId` specifies the ID of a website, which must be a valid integer that corresponds to a website that you configured on Alibaba Cloud.
 * **Response:**
 * *   If a request is successful, the system returns the remaining log delivery quota (`FreeQuota`), request ID (`RequestId`), website ID (`SiteId`), and log category (`BusinessType`). You can confirm and record the returned data.
 *
 * @param request GetSiteLogDeliveryQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSiteLogDeliveryQuotaResponse
 */
GetSiteLogDeliveryQuotaResponse Client::getSiteLogDeliveryQuotaWithOptions(const GetSiteLogDeliveryQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSiteLogDeliveryQuota"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSiteLogDeliveryQuotaResponse>();
}

/**
 * @summary Queries the remaining quota for delivering a specific category of real-time logs in a website.
 *
 * @description You can call this operation to query the remaining quota for delivering a specific category of real-time logs in a website within an Alibaba Cloud account. This is essential for monitoring and managing your log delivery capacity to ensure that logs can be delivered to the destination and prevent data loss or latency caused by insufficient quota.
 * **Take note of the following parameters:**
 * *   ``
 * *   `BusinessType` is required. You must specify a log category to obtain the corresponding quota information.
 * *   `SiteId` specifies the ID of a website, which must be a valid integer that corresponds to a website that you configured on Alibaba Cloud.
 * **Response:**
 * *   If a request is successful, the system returns the remaining log delivery quota (`FreeQuota`), request ID (`RequestId`), website ID (`SiteId`), and log category (`BusinessType`). You can confirm and record the returned data.
 *
 * @param request GetSiteLogDeliveryQuotaRequest
 * @return GetSiteLogDeliveryQuotaResponse
 */
GetSiteLogDeliveryQuotaResponse Client::getSiteLogDeliveryQuota(const GetSiteLogDeliveryQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSiteLogDeliveryQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries the site hold configuration of a website. After you enable site hold, other accounts cannot add your website domain or its subdomains to ESA.
 *
 * @param request GetSiteNameExclusiveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSiteNameExclusiveResponse
 */
GetSiteNameExclusiveResponse Client::getSiteNameExclusiveWithOptions(const GetSiteNameExclusiveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSiteNameExclusive"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSiteNameExclusiveResponse>();
}

/**
 * @summary Queries the site hold configuration of a website. After you enable site hold, other accounts cannot add your website domain or its subdomains to ESA.
 *
 * @param request GetSiteNameExclusiveRequest
 * @return GetSiteNameExclusiveResponse
 */
GetSiteNameExclusiveResponse Client::getSiteNameExclusive(const GetSiteNameExclusiveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSiteNameExclusiveWithOptions(request, runtime);
}

/**
 * @summary 获取站点回源客户端证书信息
 *
 * @param request GetSiteOriginClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSiteOriginClientCertificateResponse
 */
GetSiteOriginClientCertificateResponse Client::getSiteOriginClientCertificateWithOptions(const GetSiteOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSiteOriginClientCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSiteOriginClientCertificateResponse>();
}

/**
 * @summary 获取站点回源客户端证书信息
 *
 * @param request GetSiteOriginClientCertificateRequest
 * @return GetSiteOriginClientCertificateResponse
 */
GetSiteOriginClientCertificateResponse Client::getSiteOriginClientCertificate(const GetSiteOriginClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSiteOriginClientCertificateWithOptions(request, runtime);
}

/**
 * @summary Queries the ESA proxy configuration of a website.
 *
 * @param request GetSitePauseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSitePauseResponse
 */
GetSitePauseResponse Client::getSitePauseWithOptions(const GetSitePauseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSitePause"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSitePauseResponse>();
}

/**
 * @summary Queries the ESA proxy configuration of a website.
 *
 * @param request GetSitePauseRequest
 * @return GetSitePauseResponse
 */
GetSitePauseResponse Client::getSitePause(const GetSitePauseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSitePauseWithOptions(request, runtime);
}

/**
 * @summary Get WAF Configuration for a Site
 *
 * @param request GetSiteWafSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSiteWafSettingsResponse
 */
GetSiteWafSettingsResponse Client::getSiteWafSettingsWithOptions(const GetSiteWafSettingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPath()) {
    query["Path"] = request.path();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSiteWafSettings"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSiteWafSettingsResponse>();
}

/**
 * @summary Get WAF Configuration for a Site
 *
 * @param request GetSiteWafSettingsRequest
 * @return GetSiteWafSettingsResponse
 */
GetSiteWafSettingsResponse Client::getSiteWafSettings(const GetSiteWafSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSiteWafSettingsWithOptions(request, runtime);
}

/**
 * @summary Query Multi-level Cache Configuration for Site
 *
 * @param request GetTieredCacheRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTieredCacheResponse
 */
GetTieredCacheResponse Client::getTieredCacheWithOptions(const GetTieredCacheRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTieredCache"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTieredCacheResponse>();
}

/**
 * @summary Query Multi-level Cache Configuration for Site
 *
 * @param request GetTieredCacheRequest
 * @return GetTieredCacheResponse
 */
GetTieredCacheResponse Client::getTieredCache(const GetTieredCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTieredCacheWithOptions(request, runtime);
}

/**
 * @summary Query details of the transport layer application
 *
 * @param request GetTransportLayerApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTransportLayerApplicationResponse
 */
GetTransportLayerApplicationResponse Client::getTransportLayerApplicationWithOptions(const GetTransportLayerApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTransportLayerApplication"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTransportLayerApplicationResponse>();
}

/**
 * @summary Query details of the transport layer application
 *
 * @param request GetTransportLayerApplicationRequest
 * @return GetTransportLayerApplicationResponse
 */
GetTransportLayerApplicationResponse Client::getTransportLayerApplication(const GetTransportLayerApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTransportLayerApplicationWithOptions(request, runtime);
}

/**
 * @summary Queries the execution status and running information of a file upload task based on the task ID.
 *
 * @param request GetUploadTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUploadTaskResponse
 */
GetUploadTaskResponse Client::getUploadTaskWithOptions(const GetUploadTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUploadTask"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUploadTaskResponse>();
}

/**
 * @summary Queries the execution status and running information of a file upload task based on the task ID.
 *
 * @param request GetUploadTaskRequest
 * @return GetUploadTaskResponse
 */
GetUploadTaskResponse Client::getUploadTask(const GetUploadTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUploadTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a log delivery task by account.
 *
 * @description *   This API operation queries the details of a delivery task, including the task name, discard rate, region, log category, status, delivery destination, configuration, and filtering rules.****
 * *   You can call this operation to query detailed information about a log delivery task to analyze log processing efficiency or troubleshoot delivery problems.****
 * *   ****````
 *
 * @param request GetUserDeliveryTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserDeliveryTaskResponse
 */
GetUserDeliveryTaskResponse Client::getUserDeliveryTaskWithOptions(const GetUserDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserDeliveryTask"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserDeliveryTaskResponse>();
}

/**
 * @summary Queries the information about a log delivery task by account.
 *
 * @description *   This API operation queries the details of a delivery task, including the task name, discard rate, region, log category, status, delivery destination, configuration, and filtering rules.****
 * *   You can call this operation to query detailed information about a log delivery task to analyze log processing efficiency or troubleshoot delivery problems.****
 * *   ****````
 *
 * @param request GetUserDeliveryTaskRequest
 * @return GetUserDeliveryTaskResponse
 */
GetUserDeliveryTaskResponse Client::getUserDeliveryTask(const GetUserDeliveryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserDeliveryTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the remaining log delivery quota of each log category in your account.
 *
 * @description This operation allows you to query the remaining real-time log delivery quota of each log category in your Alibaba Cloud account. You must provide your Alibaba Cloud account ID (aliUid) and log category (BusinessType). The system then returns the remaining quota of the log category to help you track the usage.
 *
 * @param request GetUserLogDeliveryQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserLogDeliveryQuotaResponse
 */
GetUserLogDeliveryQuotaResponse Client::getUserLogDeliveryQuotaWithOptions(const GetUserLogDeliveryQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserLogDeliveryQuota"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserLogDeliveryQuotaResponse>();
}

/**
 * @summary Queries the remaining log delivery quota of each log category in your account.
 *
 * @description This operation allows you to query the remaining real-time log delivery quota of each log category in your Alibaba Cloud account. You must provide your Alibaba Cloud account ID (aliUid) and log category (BusinessType). The system then returns the remaining quota of the log category to help you track the usage.
 *
 * @param request GetUserLogDeliveryQuotaRequest
 * @return GetUserLogDeliveryQuotaResponse
 */
GetUserLogDeliveryQuotaResponse Client::getUserLogDeliveryQuota(const GetUserLogDeliveryQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserLogDeliveryQuotaWithOptions(request, runtime);
}

/**
 * @summary 查询站点视频处理配置详情
 *
 * @param request GetVideoProcessingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoProcessingResponse
 */
GetVideoProcessingResponse Client::getVideoProcessingWithOptions(const GetVideoProcessingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVideoProcessing"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoProcessingResponse>();
}

/**
 * @summary 查询站点视频处理配置详情
 *
 * @param request GetVideoProcessingRequest
 * @return GetVideoProcessingResponse
 */
GetVideoProcessingResponse Client::getVideoProcessing(const GetVideoProcessingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoProcessingWithOptions(request, runtime);
}

/**
 * @summary This interface is used to obtain the application key (AppKey) for the BOT behavior detection feature in the site\\"s Web Application Firewall (WAF). The key is typically used for authentication and data exchange with the WAF service.
 *
 * @param request GetWafBotAppKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWafBotAppKeyResponse
 */
GetWafBotAppKeyResponse Client::getWafBotAppKeyWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetWafBotAppKey"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWafBotAppKeyResponse>();
}

/**
 * @summary This interface is used to obtain the application key (AppKey) for the BOT behavior detection feature in the site\\"s Web Application Firewall (WAF). The key is typically used for authentication and data exchange with the WAF service.
 *
 * @return GetWafBotAppKeyResponse
 */
GetWafBotAppKeyResponse Client::getWafBotAppKey() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWafBotAppKeyWithOptions(runtime);
}

/**
 * @summary Queries the conditions for matching incoming requests that are configured in a WAF rule category for a website. These conditions define how WAF detects and processes different types of requests.
 *
 * @param request GetWafFilterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWafFilterResponse
 */
GetWafFilterResponse Client::getWafFilterWithOptions(const GetWafFilterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPhase()) {
    query["Phase"] = request.phase();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.target();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWafFilter"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWafFilterResponse>();
}

/**
 * @summary Queries the conditions for matching incoming requests that are configured in a WAF rule category for a website. These conditions define how WAF detects and processes different types of requests.
 *
 * @param request GetWafFilterRequest
 * @return GetWafFilterResponse
 */
GetWafFilterResponse Client::getWafFilter(const GetWafFilterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWafFilterWithOptions(request, runtime);
}

/**
 * @summary Get WAF Quota Details
 *
 * @param request GetWafQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWafQuotaResponse
 */
GetWafQuotaResponse Client::getWafQuotaWithOptions(const GetWafQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPaths()) {
    query["Paths"] = request.paths();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWafQuota"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWafQuotaResponse>();
}

/**
 * @summary Get WAF Quota Details
 *
 * @param request GetWafQuotaRequest
 * @return GetWafQuotaResponse
 */
GetWafQuotaResponse Client::getWafQuota(const GetWafQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWafQuotaWithOptions(request, runtime);
}

/**
 * @summary Get Details of a Single WAF Rule
 *
 * @param request GetWafRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWafRuleResponse
 */
GetWafRuleResponse Client::getWafRuleWithOptions(const GetWafRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWafRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWafRuleResponse>();
}

/**
 * @summary Get Details of a Single WAF Rule
 *
 * @param request GetWafRuleRequest
 * @return GetWafRuleResponse
 */
GetWafRuleResponse Client::getWafRule(const GetWafRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWafRuleWithOptions(request, runtime);
}

/**
 * @summary Get WAF Ruleset Details
 *
 * @param request GetWafRulesetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWafRulesetResponse
 */
GetWafRulesetResponse Client::getWafRulesetWithOptions(const GetWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasPhase()) {
    query["Phase"] = request.phase();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWafRuleset"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWafRulesetResponse>();
}

/**
 * @summary Get WAF Ruleset Details
 *
 * @param request GetWafRulesetRequest
 * @return GetWafRulesetResponse
 */
GetWafRulesetResponse Client::getWafRuleset(const GetWafRulesetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWafRulesetWithOptions(request, runtime);
}

/**
 * @summary Query Cache Reserve Instance List
 *
 * @param request ListCacheReserveInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCacheReserveInstancesResponse
 */
ListCacheReserveInstancesResponse Client::listCacheReserveInstancesWithOptions(const ListCacheReserveInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCacheReserveInstances"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCacheReserveInstancesResponse>();
}

/**
 * @summary Query Cache Reserve Instance List
 *
 * @param request ListCacheReserveInstancesRequest
 * @return ListCacheReserveInstancesResponse
 */
ListCacheReserveInstancesResponse Client::listCacheReserveInstances(const ListCacheReserveInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCacheReserveInstancesWithOptions(request, runtime);
}

/**
 * @summary Query multiple cache configurations
 *
 * @param request ListCacheRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCacheRulesResponse
 */
ListCacheRulesResponse Client::listCacheRulesWithOptions(const ListCacheRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCacheRules"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCacheRulesResponse>();
}

/**
 * @summary Query multiple cache configurations
 *
 * @param request ListCacheRulesRequest
 * @return ListCacheRulesResponse
 */
ListCacheRulesResponse Client::listCacheRules(const ListCacheRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCacheRulesWithOptions(request, runtime);
}

/**
 * @summary Lists certificates of a website.
 *
 * @param request ListCertificatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCertificatesResponse
 */
ListCertificatesResponse Client::listCertificatesWithOptions(const ListCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCertificates"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCertificatesResponse>();
}

/**
 * @summary Lists certificates of a website.
 *
 * @param request ListCertificatesRequest
 * @return ListCertificatesResponse
 */
ListCertificatesResponse Client::listCertificates(const ListCertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCertificatesWithOptions(request, runtime);
}

/**
 * @summary 查询匹配记录名的站点证书列表
 *
 * @param request ListCertificatesByRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCertificatesByRecordResponse
 */
ListCertificatesByRecordResponse Client::listCertificatesByRecordWithOptions(const ListCertificatesByRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCertificatesByRecord"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCertificatesByRecordResponse>();
}

/**
 * @summary 查询匹配记录名的站点证书列表
 *
 * @param request ListCertificatesByRecordRequest
 * @return ListCertificatesByRecordResponse
 */
ListCertificatesByRecordResponse Client::listCertificatesByRecord(const ListCertificatesByRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCertificatesByRecordWithOptions(request, runtime);
}

/**
 * @summary Query TLS Cipher Suite List
 *
 * @param request ListCiphersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCiphersResponse
 */
ListCiphersResponse Client::listCiphersWithOptions(const ListCiphersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCiphers"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCiphersResponse>();
}

/**
 * @summary Query TLS Cipher Suite List
 *
 * @param request ListCiphersRequest
 * @return ListCiphersResponse
 */
ListCiphersResponse Client::listCiphers(const ListCiphersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCiphersWithOptions(request, runtime);
}

/**
 * @summary Queries a list of client certificate authority (CA) certificates for a website.
 *
 * @param request ListClientCaCertificatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClientCaCertificatesResponse
 */
ListClientCaCertificatesResponse Client::listClientCaCertificatesWithOptions(const ListClientCaCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClientCaCertificates"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClientCaCertificatesResponse>();
}

/**
 * @summary Queries a list of client certificate authority (CA) certificates for a website.
 *
 * @param request ListClientCaCertificatesRequest
 * @return ListClientCaCertificatesResponse
 */
ListClientCaCertificatesResponse Client::listClientCaCertificates(const ListClientCaCertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClientCaCertificatesWithOptions(request, runtime);
}

/**
 * @summary Queries client certificates configured for a website.
 *
 * @param request ListClientCertificatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClientCertificatesResponse
 */
ListClientCertificatesResponse Client::listClientCertificatesWithOptions(const ListClientCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClientCertificates"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClientCertificatesResponse>();
}

/**
 * @summary Queries client certificates configured for a website.
 *
 * @param request ListClientCertificatesRequest
 * @return ListClientCertificatesResponse
 */
ListClientCertificatesResponse Client::listClientCertificates(const ListClientCertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClientCertificatesWithOptions(request, runtime);
}

/**
 * @summary Query the list of compression rules
 *
 * @param request ListCompressionRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCompressionRulesResponse
 */
ListCompressionRulesResponse Client::listCompressionRulesWithOptions(const ListCompressionRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCompressionRules"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCompressionRulesResponse>();
}

/**
 * @summary Query the list of compression rules
 *
 * @param request ListCompressionRulesRequest
 * @return ListCompressionRulesResponse
 */
ListCompressionRulesResponse Client::listCompressionRules(const ListCompressionRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCompressionRulesWithOptions(request, runtime);
}

/**
 * @summary 批量查询IP是否为VIP
 *
 * @param request ListESAIPInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListESAIPInfoResponse
 */
ListESAIPInfoResponse Client::listESAIPInfoWithOptions(const ListESAIPInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListESAIPInfo"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListESAIPInfoResponse>();
}

/**
 * @summary 批量查询IP是否为VIP
 *
 * @param request ListESAIPInfoRequest
 * @return ListESAIPInfoResponse
 */
ListESAIPInfoResponse Client::listESAIPInfo(const ListESAIPInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listESAIPInfoWithOptions(request, runtime);
}

/**
 * @summary Lists domain names that are associated with a containerized application.
 *
 * @param request ListEdgeContainerAppRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEdgeContainerAppRecordsResponse
 */
ListEdgeContainerAppRecordsResponse Client::listEdgeContainerAppRecordsWithOptions(const ListEdgeContainerAppRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEdgeContainerAppRecords"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEdgeContainerAppRecordsResponse>();
}

/**
 * @summary Lists domain names that are associated with a containerized application.
 *
 * @param request ListEdgeContainerAppRecordsRequest
 * @return ListEdgeContainerAppRecordsResponse
 */
ListEdgeContainerAppRecordsResponse Client::listEdgeContainerAppRecords(const ListEdgeContainerAppRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEdgeContainerAppRecordsWithOptions(request, runtime);
}

/**
 * @summary Lists versions of all containerized applications.
 *
 * @param request ListEdgeContainerAppVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEdgeContainerAppVersionsResponse
 */
ListEdgeContainerAppVersionsResponse Client::listEdgeContainerAppVersionsWithOptions(const ListEdgeContainerAppVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEdgeContainerAppVersions"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEdgeContainerAppVersionsResponse>();
}

/**
 * @summary Lists versions of all containerized applications.
 *
 * @param request ListEdgeContainerAppVersionsRequest
 * @return ListEdgeContainerAppVersionsResponse
 */
ListEdgeContainerAppVersionsResponse Client::listEdgeContainerAppVersions(const ListEdgeContainerAppVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEdgeContainerAppVersionsWithOptions(request, runtime);
}

/**
 * @summary Queries all containerized applications in your Alibaba Cloud account.
 *
 * @param request ListEdgeContainerAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEdgeContainerAppsResponse
 */
ListEdgeContainerAppsResponse Client::listEdgeContainerAppsWithOptions(const ListEdgeContainerAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderKey()) {
    query["OrderKey"] = request.orderKey();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.searchKey();
  }

  if (!!request.hasSearchType()) {
    query["SearchType"] = request.searchType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEdgeContainerApps"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEdgeContainerAppsResponse>();
}

/**
 * @summary Queries all containerized applications in your Alibaba Cloud account.
 *
 * @param request ListEdgeContainerAppsRequest
 * @return ListEdgeContainerAppsResponse
 */
ListEdgeContainerAppsResponse Client::listEdgeContainerApps(const ListEdgeContainerAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEdgeContainerAppsWithOptions(request, runtime);
}

/**
 * @summary Queries the records that are associated with Edge Container for a website.
 *
 * @param request ListEdgeContainerRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEdgeContainerRecordsResponse
 */
ListEdgeContainerRecordsResponse Client::listEdgeContainerRecordsWithOptions(const ListEdgeContainerRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEdgeContainerRecords"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEdgeContainerRecordsResponse>();
}

/**
 * @summary Queries the records that are associated with Edge Container for a website.
 *
 * @param request ListEdgeContainerRecordsRequest
 * @return ListEdgeContainerRecordsResponse
 */
ListEdgeContainerRecordsResponse Client::listEdgeContainerRecords(const ListEdgeContainerRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEdgeContainerRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries Edge Routine plans.
 *
 * @param request ListEdgeRoutinePlansRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEdgeRoutinePlansResponse
 */
ListEdgeRoutinePlansResponse Client::listEdgeRoutinePlansWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListEdgeRoutinePlans"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEdgeRoutinePlansResponse>();
}

/**
 * @summary Queries Edge Routine plans.
 *
 * @return ListEdgeRoutinePlansResponse
 */
ListEdgeRoutinePlansResponse Client::listEdgeRoutinePlans() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEdgeRoutinePlansWithOptions(runtime);
}

/**
 * @summary Queries the records that are associated with Edge Routine routes for a website.
 *
 * @description >  You can call this operation 100 times per second.
 *
 * @param request ListEdgeRoutineRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEdgeRoutineRecordsResponse
 */
ListEdgeRoutineRecordsResponse Client::listEdgeRoutineRecordsWithOptions(const ListEdgeRoutineRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEdgeRoutineRecords"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEdgeRoutineRecordsResponse>();
}

/**
 * @summary Queries the records that are associated with Edge Routine routes for a website.
 *
 * @description >  You can call this operation 100 times per second.
 *
 * @param request ListEdgeRoutineRecordsRequest
 * @return ListEdgeRoutineRecordsResponse
 */
ListEdgeRoutineRecordsResponse Client::listEdgeRoutineRecords(const ListEdgeRoutineRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEdgeRoutineRecordsWithOptions(request, runtime);
}

/**
 * @summary 查询HTTP入站请求头规则列表
 *
 * @param request ListHttpIncomingRequestHeaderModificationRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHttpIncomingRequestHeaderModificationRulesResponse
 */
ListHttpIncomingRequestHeaderModificationRulesResponse Client::listHttpIncomingRequestHeaderModificationRulesWithOptions(const ListHttpIncomingRequestHeaderModificationRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHttpIncomingRequestHeaderModificationRules"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHttpIncomingRequestHeaderModificationRulesResponse>();
}

/**
 * @summary 查询HTTP入站请求头规则列表
 *
 * @param request ListHttpIncomingRequestHeaderModificationRulesRequest
 * @return ListHttpIncomingRequestHeaderModificationRulesResponse
 */
ListHttpIncomingRequestHeaderModificationRulesResponse Client::listHttpIncomingRequestHeaderModificationRules(const ListHttpIncomingRequestHeaderModificationRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHttpIncomingRequestHeaderModificationRulesWithOptions(request, runtime);
}

/**
 * @summary 查询HTTP入站响应头规则列表
 *
 * @param request ListHttpIncomingResponseHeaderModificationRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHttpIncomingResponseHeaderModificationRulesResponse
 */
ListHttpIncomingResponseHeaderModificationRulesResponse Client::listHttpIncomingResponseHeaderModificationRulesWithOptions(const ListHttpIncomingResponseHeaderModificationRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHttpIncomingResponseHeaderModificationRules"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHttpIncomingResponseHeaderModificationRulesResponse>();
}

/**
 * @summary 查询HTTP入站响应头规则列表
 *
 * @param request ListHttpIncomingResponseHeaderModificationRulesRequest
 * @return ListHttpIncomingResponseHeaderModificationRulesResponse
 */
ListHttpIncomingResponseHeaderModificationRulesResponse Client::listHttpIncomingResponseHeaderModificationRules(const ListHttpIncomingResponseHeaderModificationRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHttpIncomingResponseHeaderModificationRulesWithOptions(request, runtime);
}

/**
 * @summary List of HTTP Request Header Rules
 *
 * @param request ListHttpRequestHeaderModificationRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHttpRequestHeaderModificationRulesResponse
 */
ListHttpRequestHeaderModificationRulesResponse Client::listHttpRequestHeaderModificationRulesWithOptions(const ListHttpRequestHeaderModificationRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHttpRequestHeaderModificationRules"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHttpRequestHeaderModificationRulesResponse>();
}

/**
 * @summary List of HTTP Request Header Rules
 *
 * @param request ListHttpRequestHeaderModificationRulesRequest
 * @return ListHttpRequestHeaderModificationRulesResponse
 */
ListHttpRequestHeaderModificationRulesResponse Client::listHttpRequestHeaderModificationRules(const ListHttpRequestHeaderModificationRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHttpRequestHeaderModificationRulesWithOptions(request, runtime);
}

/**
 * @summary List of HTTP Response Header Rules
 *
 * @param request ListHttpResponseHeaderModificationRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHttpResponseHeaderModificationRulesResponse
 */
ListHttpResponseHeaderModificationRulesResponse Client::listHttpResponseHeaderModificationRulesWithOptions(const ListHttpResponseHeaderModificationRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHttpResponseHeaderModificationRules"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHttpResponseHeaderModificationRulesResponse>();
}

/**
 * @summary List of HTTP Response Header Rules
 *
 * @param request ListHttpResponseHeaderModificationRulesRequest
 * @return ListHttpResponseHeaderModificationRulesResponse
 */
ListHttpResponseHeaderModificationRulesResponse Client::listHttpResponseHeaderModificationRules(const ListHttpResponseHeaderModificationRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHttpResponseHeaderModificationRulesWithOptions(request, runtime);
}

/**
 * @summary Query multiple HTTPS application configurations
 *
 * @param request ListHttpsApplicationConfigurationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHttpsApplicationConfigurationsResponse
 */
ListHttpsApplicationConfigurationsResponse Client::listHttpsApplicationConfigurationsWithOptions(const ListHttpsApplicationConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHttpsApplicationConfigurations"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHttpsApplicationConfigurationsResponse>();
}

/**
 * @summary Query multiple HTTPS application configurations
 *
 * @param request ListHttpsApplicationConfigurationsRequest
 * @return ListHttpsApplicationConfigurationsResponse
 */
ListHttpsApplicationConfigurationsResponse Client::listHttpsApplicationConfigurations(const ListHttpsApplicationConfigurationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHttpsApplicationConfigurationsWithOptions(request, runtime);
}

/**
 * @summary Query multiple HTTPS basic configurations
 *
 * @param request ListHttpsBasicConfigurationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHttpsBasicConfigurationsResponse
 */
ListHttpsBasicConfigurationsResponse Client::listHttpsBasicConfigurationsWithOptions(const ListHttpsBasicConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHttpsBasicConfigurations"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHttpsBasicConfigurationsResponse>();
}

/**
 * @summary Query multiple HTTPS basic configurations
 *
 * @param request ListHttpsBasicConfigurationsRequest
 * @return ListHttpsBasicConfigurationsResponse
 */
ListHttpsBasicConfigurationsResponse Client::listHttpsBasicConfigurations(const ListHttpsBasicConfigurationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHttpsBasicConfigurationsWithOptions(request, runtime);
}

/**
 * @summary Query Multiple Site Image Transformation Configurations
 *
 * @param request ListImageTransformsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImageTransformsResponse
 */
ListImageTransformsResponse Client::listImageTransformsWithOptions(const ListImageTransformsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListImageTransforms"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImageTransformsResponse>();
}

/**
 * @summary Query Multiple Site Image Transformation Configurations
 *
 * @param request ListImageTransformsRequest
 * @return ListImageTransformsResponse
 */
ListImageTransformsResponse Client::listImageTransforms(const ListImageTransformsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listImageTransformsWithOptions(request, runtime);
}

/**
 * @summary Queries the quota details in a subscription plan.
 *
 * @param request ListInstanceQuotasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceQuotasResponse
 */
ListInstanceQuotasResponse Client::listInstanceQuotasWithOptions(const ListInstanceQuotasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceQuotas"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceQuotasResponse>();
}

/**
 * @summary Queries the quota details in a subscription plan.
 *
 * @param request ListInstanceQuotasRequest
 * @return ListInstanceQuotasResponse
 */
ListInstanceQuotasResponse Client::listInstanceQuotas(const ListInstanceQuotasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceQuotasWithOptions(request, runtime);
}

/**
 * @summary Queries quotas and the actual usage in a plan based on the website or plan ID.
 *
 * @param request ListInstanceQuotasWithUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceQuotasWithUsageResponse
 */
ListInstanceQuotasWithUsageResponse Client::listInstanceQuotasWithUsageWithOptions(const ListInstanceQuotasWithUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceQuotasWithUsage"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceQuotasWithUsageResponse>();
}

/**
 * @summary Queries quotas and the actual usage in a plan based on the website or plan ID.
 *
 * @param request ListInstanceQuotasWithUsageRequest
 * @return ListInstanceQuotasWithUsageResponse
 */
ListInstanceQuotasWithUsageResponse Client::listInstanceQuotasWithUsage(const ListInstanceQuotasWithUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceQuotasWithUsageWithOptions(request, runtime);
}

/**
 * @summary Lists all key-value pairs in a namespace in your Alibaba Cloud account.
 *
 * @param request ListKvsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKvsResponse
 */
ListKvsResponse Client::listKvsWithOptions(const ListKvsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKvs"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKvsResponse>();
}

/**
 * @summary Lists all key-value pairs in a namespace in your Alibaba Cloud account.
 *
 * @param request ListKvsRequest
 * @return ListKvsResponse
 */
ListKvsResponse Client::listKvs(const ListKvsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listKvsWithOptions(request, runtime);
}

/**
 * @summary Queries all custom lists and their details in an Alibaba Cloud account. You can specify query arguments to filter the results and display the returned lists by page.
 *
 * @param tmpReq ListListsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListListsResponse
 */
ListListsResponse Client::listListsWithOptions(const ListListsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListListsShrinkRequest request = ListListsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQueryArgs()) {
    request.setQueryArgsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.queryArgs(), "QueryArgs", "json"));
  }

  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryArgsShrink()) {
    query["QueryArgs"] = request.queryArgsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLists"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListListsResponse>();
}

/**
 * @summary Queries all custom lists and their details in an Alibaba Cloud account. You can specify query arguments to filter the results and display the returned lists by page.
 *
 * @param request ListListsRequest
 * @return ListListsResponse
 */
ListListsResponse Client::listLists(const ListListsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listListsWithOptions(request, runtime);
}

/**
 * @summary Query the status of origins in load balancers
 *
 * @description Query the status of origins under load balancers. You can pass multiple load balancer IDs at once, separated by commas. This is for load balancers that have monitors configured. It will probe the origins in the source address pools used by the load balancers and record the current status of each origin.
 * - Healthy(healthy): The probe result is available.
 * - Unhealthy(unhealthy): The probe result is unavailable.
 * - Unknown(unknown): Unknown, the monitor has not yet probed.
 * - Undetected(undetected): The load balancer to which the origin belongs is not bound to a monitor.
 *
 * @param request ListLoadBalancerOriginStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLoadBalancerOriginStatusResponse
 */
ListLoadBalancerOriginStatusResponse Client::listLoadBalancerOriginStatusWithOptions(const ListLoadBalancerOriginStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLoadBalancerOriginStatus"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLoadBalancerOriginStatusResponse>();
}

/**
 * @summary Query the status of origins in load balancers
 *
 * @description Query the status of origins under load balancers. You can pass multiple load balancer IDs at once, separated by commas. This is for load balancers that have monitors configured. It will probe the origins in the source address pools used by the load balancers and record the current status of each origin.
 * - Healthy(healthy): The probe result is available.
 * - Unhealthy(unhealthy): The probe result is unavailable.
 * - Unknown(unknown): Unknown, the monitor has not yet probed.
 * - Undetected(undetected): The load balancer to which the origin belongs is not bound to a monitor.
 *
 * @param request ListLoadBalancerOriginStatusRequest
 * @return ListLoadBalancerOriginStatusResponse
 */
ListLoadBalancerOriginStatusResponse Client::listLoadBalancerOriginStatus(const ListLoadBalancerOriginStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLoadBalancerOriginStatusWithOptions(request, runtime);
}

/**
 * @summary Query Load Balancer Region List
 *
 * @description When creating a load balancer \\"based on country/region scheduling\\" strategy through OpenAPI, use the code of primary or secondary regions to represent traffic from this geographical area.
 *
 * @param request ListLoadBalancerRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLoadBalancerRegionsResponse
 */
ListLoadBalancerRegionsResponse Client::listLoadBalancerRegionsWithOptions(const ListLoadBalancerRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLoadBalancerRegions"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLoadBalancerRegionsResponse>();
}

/**
 * @summary Query Load Balancer Region List
 *
 * @description When creating a load balancer \\"based on country/region scheduling\\" strategy through OpenAPI, use the code of primary or secondary regions to represent traffic from this geographical area.
 *
 * @param request ListLoadBalancerRegionsRequest
 * @return ListLoadBalancerRegionsResponse
 */
ListLoadBalancerRegionsResponse Client::listLoadBalancerRegions(const ListLoadBalancerRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLoadBalancerRegionsWithOptions(request, runtime);
}

/**
 * @summary Query the list of load balancers
 *
 * @param request ListLoadBalancersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLoadBalancersResponse
 */
ListLoadBalancersResponse Client::listLoadBalancersWithOptions(const ListLoadBalancersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLoadBalancers"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLoadBalancersResponse>();
}

/**
 * @summary Query the list of load balancers
 *
 * @param request ListLoadBalancersRequest
 * @return ListLoadBalancersResponse
 */
ListLoadBalancersResponse Client::listLoadBalancers(const ListLoadBalancersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLoadBalancersWithOptions(request, runtime);
}

/**
 * @summary List Custom Managed Rule Groups
 *
 * @param request ListManagedRulesGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListManagedRulesGroupsResponse
 */
ListManagedRulesGroupsResponse Client::listManagedRulesGroupsWithOptions(const ListManagedRulesGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListManagedRulesGroups"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListManagedRulesGroupsResponse>();
}

/**
 * @summary List Custom Managed Rule Groups
 *
 * @param request ListManagedRulesGroupsRequest
 * @return ListManagedRulesGroupsResponse
 */
ListManagedRulesGroupsResponse Client::listManagedRulesGroups(const ListManagedRulesGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listManagedRulesGroupsWithOptions(request, runtime);
}

/**
 * @summary Query multiple network optimization configurations
 *
 * @param request ListNetworkOptimizationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNetworkOptimizationsResponse
 */
ListNetworkOptimizationsResponse Client::listNetworkOptimizationsWithOptions(const ListNetworkOptimizationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNetworkOptimizations"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNetworkOptimizationsResponse>();
}

/**
 * @summary Query multiple network optimization configurations
 *
 * @param request ListNetworkOptimizationsRequest
 * @return ListNetworkOptimizationsResponse
 */
ListNetworkOptimizationsResponse Client::listNetworkOptimizations(const ListNetworkOptimizationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNetworkOptimizationsWithOptions(request, runtime);
}

/**
 * @summary 查询源服务器CA证书列表
 *
 * @param request ListOriginCaCertificatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOriginCaCertificatesResponse
 */
ListOriginCaCertificatesResponse Client::listOriginCaCertificatesWithOptions(const ListOriginCaCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOriginCaCertificates"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOriginCaCertificatesResponse>();
}

/**
 * @summary 查询源服务器CA证书列表
 *
 * @param request ListOriginCaCertificatesRequest
 * @return ListOriginCaCertificatesResponse
 */
ListOriginCaCertificatesResponse Client::listOriginCaCertificates(const ListOriginCaCertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOriginCaCertificatesWithOptions(request, runtime);
}

/**
 * @summary 查询域名回源客户端证书列表
 *
 * @param request ListOriginClientCertificatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOriginClientCertificatesResponse
 */
ListOriginClientCertificatesResponse Client::listOriginClientCertificatesWithOptions(const ListOriginClientCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOriginClientCertificates"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOriginClientCertificatesResponse>();
}

/**
 * @summary 查询域名回源客户端证书列表
 *
 * @param request ListOriginClientCertificatesRequest
 * @return ListOriginClientCertificatesResponse
 */
ListOriginClientCertificatesResponse Client::listOriginClientCertificates(const ListOriginClientCertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOriginClientCertificatesWithOptions(request, runtime);
}

/**
 * @summary List Origin Pools
 *
 * @param request ListOriginPoolsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOriginPoolsResponse
 */
ListOriginPoolsResponse Client::listOriginPoolsWithOptions(const ListOriginPoolsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOriginPools"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOriginPoolsResponse>();
}

/**
 * @summary List Origin Pools
 *
 * @param request ListOriginPoolsRequest
 * @return ListOriginPoolsResponse
 */
ListOriginPoolsResponse Client::listOriginPools(const ListOriginPoolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOriginPoolsWithOptions(request, runtime);
}

/**
 * @summary Query multiple origin rule configurations
 *
 * @param request ListOriginRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListOriginRulesResponse
 */
ListOriginRulesResponse Client::listOriginRulesWithOptions(const ListOriginRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListOriginRules"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListOriginRulesResponse>();
}

/**
 * @summary Query multiple origin rule configurations
 *
 * @param request ListOriginRulesRequest
 * @return ListOriginRulesResponse
 */
ListOriginRulesResponse Client::listOriginRules(const ListOriginRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOriginRulesWithOptions(request, runtime);
}

/**
 * @summary Lists all custom error pages that you created. You can define the page number and the number of entries per page to display the response.
 *
 * @param tmpReq ListPagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPagesResponse
 */
ListPagesResponse Client::listPagesWithOptions(const ListPagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPagesShrinkRequest request = ListPagesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQueryArgs()) {
    request.setQueryArgsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.queryArgs(), "QueryArgs", "json"));
  }

  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryArgsShrink()) {
    query["QueryArgs"] = request.queryArgsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPages"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPagesResponse>();
}

/**
 * @summary Lists all custom error pages that you created. You can define the page number and the number of entries per page to display the response.
 *
 * @param request ListPagesRequest
 * @return ListPagesResponse
 */
ListPagesResponse Client::listPages(const ListPagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPagesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of Domain Name System (DNS) records of a website, including the record value, priority, and authentication configurations. Supports filtering by specifying parameters such as RecordName and RecordMatchType.
 *
 * @description The DNS records related to Edge Container, Edge Routine, and TCP/UDP proxy are not returned in this operation.
 *
 * @param request ListRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecordsResponse
 */
ListRecordsResponse Client::listRecordsWithOptions(const ListRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRecords"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecordsResponse>();
}

/**
 * @summary Queries a list of Domain Name System (DNS) records of a website, including the record value, priority, and authentication configurations. Supports filtering by specifying parameters such as RecordName and RecordMatchType.
 *
 * @description The DNS records related to Edge Container, Edge Routine, and TCP/UDP proxy are not returned in this operation.
 *
 * @param request ListRecordsRequest
 * @return ListRecordsResponse
 */
ListRecordsResponse Client::listRecords(const ListRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRecordsWithOptions(request, runtime);
}

/**
 * @summary Query Redirect Rule List
 *
 * @param request ListRedirectRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRedirectRulesResponse
 */
ListRedirectRulesResponse Client::listRedirectRulesWithOptions(const ListRedirectRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRedirectRules"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRedirectRulesResponse>();
}

/**
 * @summary Query Redirect Rule List
 *
 * @param request ListRedirectRulesRequest
 * @return ListRedirectRulesResponse
 */
ListRedirectRulesResponse Client::listRedirectRules(const ListRedirectRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRedirectRulesWithOptions(request, runtime);
}

/**
 * @summary List of Rewrite URL Rules
 *
 * @param request ListRewriteUrlRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRewriteUrlRulesResponse
 */
ListRewriteUrlRulesResponse Client::listRewriteUrlRulesWithOptions(const ListRewriteUrlRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRewriteUrlRules"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRewriteUrlRulesResponse>();
}

/**
 * @summary List of Rewrite URL Rules
 *
 * @param request ListRewriteUrlRulesRequest
 * @return ListRewriteUrlRulesResponse
 */
ListRewriteUrlRulesResponse Client::listRewriteUrlRules(const ListRewriteUrlRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRewriteUrlRulesWithOptions(request, runtime);
}

/**
 * @summary Lists the regions to which Edge Routine code can be released for canary deployment.
 *
 * @param request ListRoutineCanaryAreasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRoutineCanaryAreasResponse
 */
ListRoutineCanaryAreasResponse Client::listRoutineCanaryAreasWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListRoutineCanaryAreas"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRoutineCanaryAreasResponse>();
}

/**
 * @summary Lists the regions to which Edge Routine code can be released for canary deployment.
 *
 * @return ListRoutineCanaryAreasResponse
 */
ListRoutineCanaryAreasResponse Client::listRoutineCanaryAreas() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRoutineCanaryAreasWithOptions(runtime);
}

/**
 * @summary 查询Routine的代码版本列表
 *
 * @param request ListRoutineCodeVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRoutineCodeVersionsResponse
 */
ListRoutineCodeVersionsResponse Client::listRoutineCodeVersionsWithOptions(const ListRoutineCodeVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchKeyWord()) {
    body["SearchKeyWord"] = request.searchKeyWord();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListRoutineCodeVersions"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRoutineCodeVersionsResponse>();
}

/**
 * @summary 查询Routine的代码版本列表
 *
 * @param request ListRoutineCodeVersionsRequest
 * @return ListRoutineCodeVersionsResponse
 */
ListRoutineCodeVersionsResponse Client::listRoutineCodeVersions(const ListRoutineCodeVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRoutineCodeVersionsWithOptions(request, runtime);
}

/**
 * @summary 查询函数关联域名列表
 *
 * @param request ListRoutineRelatedRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRoutineRelatedRecordsResponse
 */
ListRoutineRelatedRecordsResponse Client::listRoutineRelatedRecordsWithOptions(const ListRoutineRelatedRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchKeyWord()) {
    body["SearchKeyWord"] = request.searchKeyWord();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListRoutineRelatedRecords"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRoutineRelatedRecordsResponse>();
}

/**
 * @summary 查询函数关联域名列表
 *
 * @param request ListRoutineRelatedRecordsRequest
 * @return ListRoutineRelatedRecordsResponse
 */
ListRoutineRelatedRecordsResponse Client::listRoutineRelatedRecords(const ListRoutineRelatedRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRoutineRelatedRecordsWithOptions(request, runtime);
}

/**
 * @summary 查询边缘程序的函数路由列表
 *
 * @param request ListRoutineRoutesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRoutineRoutesResponse
 */
ListRoutineRoutesResponse Client::listRoutineRoutesWithOptions(const ListRoutineRoutesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRoutineName()) {
    query["RoutineName"] = request.routineName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRoutineRoutes"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRoutineRoutesResponse>();
}

/**
 * @summary 查询边缘程序的函数路由列表
 *
 * @param request ListRoutineRoutesRequest
 * @return ListRoutineRoutesResponse
 */
ListRoutineRoutesResponse Client::listRoutineRoutes(const ListRoutineRoutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRoutineRoutesWithOptions(request, runtime);
}

/**
 * @summary Lists the plans in a scheduled prefetch task by task ID.
 *
 * @param request ListScheduledPreloadExecutionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScheduledPreloadExecutionsResponse
 */
ListScheduledPreloadExecutionsResponse Client::listScheduledPreloadExecutionsWithOptions(const ListScheduledPreloadExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScheduledPreloadExecutions"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScheduledPreloadExecutionsResponse>();
}

/**
 * @summary Lists the plans in a scheduled prefetch task by task ID.
 *
 * @param request ListScheduledPreloadExecutionsRequest
 * @return ListScheduledPreloadExecutionsResponse
 */
ListScheduledPreloadExecutionsResponse Client::listScheduledPreloadExecutions(const ListScheduledPreloadExecutionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScheduledPreloadExecutionsWithOptions(request, runtime);
}

/**
 * @summary Queries the scheduled prefetch tasks for a website.
 *
 * @param request ListScheduledPreloadJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScheduledPreloadJobsResponse
 */
ListScheduledPreloadJobsResponse Client::listScheduledPreloadJobsWithOptions(const ListScheduledPreloadJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScheduledPreloadJobs"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScheduledPreloadJobsResponse>();
}

/**
 * @summary Queries the scheduled prefetch tasks for a website.
 *
 * @param request ListScheduledPreloadJobsRequest
 * @return ListScheduledPreloadJobsResponse
 */
ListScheduledPreloadJobsResponse Client::listScheduledPreloadJobs(const ListScheduledPreloadJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScheduledPreloadJobsWithOptions(request, runtime);
}

/**
 * @summary Lists all log delivery tasks that are in progress.
 *
 * @param request ListSiteDeliveryTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSiteDeliveryTasksResponse
 */
ListSiteDeliveryTasksResponse Client::listSiteDeliveryTasksWithOptions(const ListSiteDeliveryTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSiteDeliveryTasks"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSiteDeliveryTasksResponse>();
}

/**
 * @summary Lists all log delivery tasks that are in progress.
 *
 * @param request ListSiteDeliveryTasksRequest
 * @return ListSiteDeliveryTasksResponse
 */
ListSiteDeliveryTasksResponse Client::listSiteDeliveryTasks(const ListSiteDeliveryTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSiteDeliveryTasksWithOptions(request, runtime);
}

/**
 * @summary 查询站点的函数路由列表
 *
 * @param request ListSiteRoutesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSiteRoutesResponse
 */
ListSiteRoutesResponse Client::listSiteRoutesWithOptions(const ListSiteRoutesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasConfigType()) {
    query["ConfigType"] = request.configType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRouteName()) {
    query["RouteName"] = request.routeName();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSiteRoutes"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSiteRoutesResponse>();
}

/**
 * @summary 查询站点的函数路由列表
 *
 * @param request ListSiteRoutesRequest
 * @return ListSiteRoutesResponse
 */
ListSiteRoutesResponse Client::listSiteRoutes(const ListSiteRoutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSiteRoutesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about websites in your account, such as the name, status, and configuration of each website.
 *
 * @param tmpReq ListSitesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSitesResponse
 */
ListSitesResponse Client::listSitesWithOptions(const ListSitesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListSitesShrinkRequest request = ListSitesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTagFilter()) {
    request.setTagFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tagFilter(), "TagFilter", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSites"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSitesResponse>();
}

/**
 * @summary Queries the information about websites in your account, such as the name, status, and configuration of each website.
 *
 * @param request ListSitesRequest
 * @return ListSitesResponse
 */
ListSitesResponse Client::listSites(const ListSitesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSitesWithOptions(request, runtime);
}

/**
 * @summary Queries tags based on the region ID and resource type.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxItem()) {
    query["MaxItem"] = request.maxItem();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2024-09-10"},
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
 * @summary Queries tags based on the region ID and resource type.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary List of Transport Layer Applications
 *
 * @param request ListTransportLayerApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTransportLayerApplicationsResponse
 */
ListTransportLayerApplicationsResponse Client::listTransportLayerApplicationsWithOptions(const ListTransportLayerApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTransportLayerApplications"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTransportLayerApplicationsResponse>();
}

/**
 * @summary List of Transport Layer Applications
 *
 * @param request ListTransportLayerApplicationsRequest
 * @return ListTransportLayerApplicationsResponse
 */
ListTransportLayerApplicationsResponse Client::listTransportLayerApplications(const ListTransportLayerApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransportLayerApplicationsWithOptions(request, runtime);
}

/**
 * @summary Queries the execution status and running information of file upload tasks based on the task time and type.
 *
 * @param request ListUploadTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUploadTasksResponse
 */
ListUploadTasksResponse Client::listUploadTasksWithOptions(const ListUploadTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUploadTasks"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUploadTasksResponse>();
}

/**
 * @summary Queries the execution status and running information of file upload tasks based on the task time and type.
 *
 * @param request ListUploadTasksRequest
 * @return ListUploadTasksResponse
 */
ListUploadTasksResponse Client::listUploadTasks(const ListUploadTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUploadTasksWithOptions(request, runtime);
}

/**
 * @summary 查询网页观测配置列表
 *
 * @param request ListUrlObservationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUrlObservationsResponse
 */
ListUrlObservationsResponse Client::listUrlObservationsWithOptions(const ListUrlObservationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUrlObservations"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUrlObservationsResponse>();
}

/**
 * @summary 查询网页观测配置列表
 *
 * @param request ListUrlObservationsRequest
 * @return ListUrlObservationsResponse
 */
ListUrlObservationsResponse Client::listUrlObservations(const ListUrlObservationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUrlObservationsWithOptions(request, runtime);
}

/**
 * @summary Queries all delivery tasks in your Alibaba Cloud account by page. You can filter the delivery tasks by the category of the delivered real-time logs.
 *
 * @param request ListUserDeliveryTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserDeliveryTasksResponse
 */
ListUserDeliveryTasksResponse Client::listUserDeliveryTasksWithOptions(const ListUserDeliveryTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserDeliveryTasks"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserDeliveryTasksResponse>();
}

/**
 * @summary Queries all delivery tasks in your Alibaba Cloud account by page. You can filter the delivery tasks by the category of the delivered real-time logs.
 *
 * @param request ListUserDeliveryTasksRequest
 * @return ListUserDeliveryTasksResponse
 */
ListUserDeliveryTasksResponse Client::listUserDeliveryTasks(const ListUserDeliveryTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserDeliveryTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the plans that you purchased and the details of the plans.
 *
 * @param request ListUserRatePlanInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserRatePlanInstancesResponse
 */
ListUserRatePlanInstancesResponse Client::listUserRatePlanInstancesWithOptions(const ListUserRatePlanInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserRatePlanInstances"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserRatePlanInstancesResponse>();
}

/**
 * @summary Queries the plans that you purchased and the details of the plans.
 *
 * @param request ListUserRatePlanInstancesRequest
 * @return ListUserRatePlanInstancesResponse
 */
ListUserRatePlanInstancesResponse Client::listUserRatePlanInstances(const ListUserRatePlanInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserRatePlanInstancesWithOptions(request, runtime);
}

/**
 * @summary 查询用户的Routine列表
 *
 * @param request ListUserRoutinesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserRoutinesResponse
 */
ListUserRoutinesResponse Client::listUserRoutinesWithOptions(const ListUserRoutinesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchKeyWord()) {
    query["SearchKeyWord"] = request.searchKeyWord();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserRoutines"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserRoutinesResponse>();
}

/**
 * @summary 查询用户的Routine列表
 *
 * @param request ListUserRoutinesRequest
 * @return ListUserRoutinesResponse
 */
ListUserRoutinesResponse Client::listUserRoutines(const ListUserRoutinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserRoutinesWithOptions(request, runtime);
}

/**
 * @summary 查询站点视频处理配置列表
 *
 * @param request ListVideoProcessingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVideoProcessingsResponse
 */
ListVideoProcessingsResponse Client::listVideoProcessingsWithOptions(const ListVideoProcessingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasConfigType()) {
    query["ConfigType"] = request.configType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVideoProcessings"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVideoProcessingsResponse>();
}

/**
 * @summary 查询站点视频处理配置列表
 *
 * @param request ListVideoProcessingsRequest
 * @return ListVideoProcessingsResponse
 */
ListVideoProcessingsResponse Client::listVideoProcessings(const ListVideoProcessingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVideoProcessingsWithOptions(request, runtime);
}

/**
 * @summary List WAF Managed Rules
 *
 * @param tmpReq ListWafManagedRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWafManagedRulesResponse
 */
ListWafManagedRulesResponse Client::listWafManagedRulesWithOptions(const ListWafManagedRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListWafManagedRulesShrinkRequest request = ListWafManagedRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQueryArgs()) {
    request.setQueryArgsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.queryArgs(), "QueryArgs", "json"));
  }

  json query = {};
  if (!!request.hasAttackType()) {
    query["AttackType"] = request.attackType();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProtectionLevel()) {
    query["ProtectionLevel"] = request.protectionLevel();
  }

  if (!!request.hasQueryArgsShrink()) {
    query["QueryArgs"] = request.queryArgsShrink();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWafManagedRules"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWafManagedRulesResponse>();
}

/**
 * @summary List WAF Managed Rules
 *
 * @param request ListWafManagedRulesRequest
 * @return ListWafManagedRulesResponse
 */
ListWafManagedRulesResponse Client::listWafManagedRules(const ListWafManagedRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWafManagedRulesWithOptions(request, runtime);
}

/**
 * @summary List WAF Phases
 *
 * @param request ListWafPhasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWafPhasesResponse
 */
ListWafPhasesResponse Client::listWafPhasesWithOptions(const ListWafPhasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWafPhases"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWafPhasesResponse>();
}

/**
 * @summary List WAF Phases
 *
 * @param request ListWafPhasesRequest
 * @return ListWafPhasesResponse
 */
ListWafPhasesResponse Client::listWafPhases(const ListWafPhasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWafPhasesWithOptions(request, runtime);
}

/**
 * @summary List WAF Rules
 *
 * @param tmpReq ListWafRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWafRulesResponse
 */
ListWafRulesResponse Client::listWafRulesWithOptions(const ListWafRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListWafRulesShrinkRequest request = ListWafRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQueryArgs()) {
    request.setQueryArgsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.queryArgs(), "QueryArgs", "json"));
  }

  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPhase()) {
    query["Phase"] = request.phase();
  }

  if (!!request.hasQueryArgsShrink()) {
    query["QueryArgs"] = request.queryArgsShrink();
  }

  if (!!request.hasRulesetId()) {
    query["RulesetId"] = request.rulesetId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWafRules"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWafRulesResponse>();
}

/**
 * @summary List WAF Rules
 *
 * @param request ListWafRulesRequest
 * @return ListWafRulesResponse
 */
ListWafRulesResponse Client::listWafRules(const ListWafRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWafRulesWithOptions(request, runtime);
}

/**
 * @summary List WAF Rule Sets
 *
 * @param tmpReq ListWafRulesetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWafRulesetsResponse
 */
ListWafRulesetsResponse Client::listWafRulesetsWithOptions(const ListWafRulesetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListWafRulesetsShrinkRequest request = ListWafRulesetsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQueryArgs()) {
    request.setQueryArgsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.queryArgs(), "QueryArgs", "json"));
  }

  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPhase()) {
    query["Phase"] = request.phase();
  }

  if (!!request.hasQueryArgsShrink()) {
    query["QueryArgs"] = request.queryArgsShrink();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWafRulesets"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWafRulesetsResponse>();
}

/**
 * @summary List WAF Rule Sets
 *
 * @param request ListWafRulesetsRequest
 * @return ListWafRulesetsResponse
 */
ListWafRulesetsResponse Client::listWafRulesets(const ListWafRulesetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWafRulesetsWithOptions(request, runtime);
}

/**
 * @summary List WAF Template Rules
 *
 * @param tmpReq ListWafTemplateRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWafTemplateRulesResponse
 */
ListWafTemplateRulesResponse Client::listWafTemplateRulesWithOptions(const ListWafTemplateRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListWafTemplateRulesShrinkRequest request = ListWafTemplateRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQueryArgs()) {
    request.setQueryArgsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.queryArgs(), "QueryArgs", "json"));
  }

  json query = {};
  if (!!request.hasPhase()) {
    query["Phase"] = request.phase();
  }

  if (!!request.hasQueryArgsShrink()) {
    query["QueryArgs"] = request.queryArgsShrink();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWafTemplateRules"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWafTemplateRulesResponse>();
}

/**
 * @summary List WAF Template Rules
 *
 * @param request ListWafTemplateRulesRequest
 * @return ListWafTemplateRulesResponse
 */
ListWafTemplateRulesResponse Client::listWafTemplateRules(const ListWafTemplateRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWafTemplateRulesWithOptions(request, runtime);
}

/**
 * @summary List WAF Rule Usage
 *
 * @param request ListWafUsageOfRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWafUsageOfRulesResponse
 */
ListWafUsageOfRulesResponse Client::listWafUsageOfRulesWithOptions(const ListWafUsageOfRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPhase()) {
    query["Phase"] = request.phase();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWafUsageOfRules"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWafUsageOfRulesResponse>();
}

/**
 * @summary List WAF Rule Usage
 *
 * @param request ListWafUsageOfRulesRequest
 * @return ListWafUsageOfRulesResponse
 */
ListWafUsageOfRulesResponse Client::listWafUsageOfRules(const ListWafUsageOfRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWafUsageOfRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about waiting room events for a waiting room.
 *
 * @description You can call this operation to query details of all waiting room events related to a waiting room in a website.
 *
 * @param request ListWaitingRoomEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWaitingRoomEventsResponse
 */
ListWaitingRoomEventsResponse Client::listWaitingRoomEventsWithOptions(const ListWaitingRoomEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWaitingRoomEvents"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWaitingRoomEventsResponse>();
}

/**
 * @summary Queries the information about waiting room events for a waiting room.
 *
 * @description You can call this operation to query details of all waiting room events related to a waiting room in a website.
 *
 * @param request ListWaitingRoomEventsRequest
 * @return ListWaitingRoomEventsResponse
 */
ListWaitingRoomEventsResponse Client::listWaitingRoomEvents(const ListWaitingRoomEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWaitingRoomEventsWithOptions(request, runtime);
}

/**
 * @summary Query Waiting Room Bypass Rules
 *
 * @description This API allows users to query the list of waiting room bypass rules associated with a specific site.
 *
 * @param request ListWaitingRoomRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWaitingRoomRulesResponse
 */
ListWaitingRoomRulesResponse Client::listWaitingRoomRulesWithOptions(const ListWaitingRoomRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWaitingRoomRules"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWaitingRoomRulesResponse>();
}

/**
 * @summary Query Waiting Room Bypass Rules
 *
 * @description This API allows users to query the list of waiting room bypass rules associated with a specific site.
 *
 * @param request ListWaitingRoomRulesRequest
 * @return ListWaitingRoomRulesResponse
 */
ListWaitingRoomRulesResponse Client::listWaitingRoomRules(const ListWaitingRoomRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWaitingRoomRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about all waiting rooms in a website.
 *
 * @description You can call this operation to query detailed configurations about all waiting rooms in a website, including the status, name, and queuing rules of each waiting room.
 *
 * @param request ListWaitingRoomsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWaitingRoomsResponse
 */
ListWaitingRoomsResponse Client::listWaitingRoomsWithOptions(const ListWaitingRoomsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWaitingRooms"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWaitingRoomsResponse>();
}

/**
 * @summary Queries the information about all waiting rooms in a website.
 *
 * @description You can call this operation to query detailed configurations about all waiting rooms in a website, including the status, name, and queuing rules of each waiting room.
 *
 * @param request ListWaitingRoomsRequest
 * @return ListWaitingRoomsResponse
 */
ListWaitingRoomsResponse Client::listWaitingRooms(const ListWaitingRoomsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWaitingRoomsWithOptions(request, runtime);
}

/**
 * @summary OpenErService
 *
 * @param request OpenErServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenErServiceResponse
 */
OpenErServiceResponse Client::openErServiceWithOptions(const OpenErServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenErService"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenErServiceResponse>();
}

/**
 * @summary OpenErService
 *
 * @param request OpenErServiceRequest
 * @return OpenErServiceResponse
 */
OpenErServiceResponse Client::openErService(const OpenErServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openErServiceWithOptions(request, runtime);
}

/**
 * @summary Prefetches cache.
 *
 * @param tmpReq PreloadCachesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreloadCachesResponse
 */
PreloadCachesResponse Client::preloadCachesWithOptions(const PreloadCachesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PreloadCachesShrinkRequest request = PreloadCachesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContent()) {
    request.setContentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.content(), "Content", "json"));
  }

  if (!!tmpReq.hasHeaders()) {
    request.setHeadersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.headers(), "Headers", "json"));
  }

  json query = {};
  if (!!request.hasContentShrink()) {
    query["Content"] = request.contentShrink();
  }

  if (!!request.hasHeadersShrink()) {
    query["Headers"] = request.headersShrink();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PreloadCaches"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreloadCachesResponse>();
}

/**
 * @summary Prefetches cache.
 *
 * @param request PreloadCachesRequest
 * @return PreloadCachesResponse
 */
PreloadCachesResponse Client::preloadCaches(const PreloadCachesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return preloadCachesWithOptions(request, runtime);
}

/**
 * @summary Releases a specific version of a containerized application. You can call this operation to iterate an application.
 *
 * @param tmpReq PublishEdgeContainerAppVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishEdgeContainerAppVersionResponse
 */
PublishEdgeContainerAppVersionResponse Client::publishEdgeContainerAppVersionWithOptions(const PublishEdgeContainerAppVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PublishEdgeContainerAppVersionShrinkRequest request = PublishEdgeContainerAppVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRegions()) {
    request.setRegionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.regions(), "Regions", "json"));
  }

  json query = {};
  if (!!request.hasFullRelease()) {
    query["FullRelease"] = request.fullRelease();
  }

  if (!!request.hasPublishType()) {
    query["PublishType"] = request.publishType();
  }

  if (!!request.hasRegionsShrink()) {
    query["Regions"] = request.regionsShrink();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.versionId();
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasPercentage()) {
    body["Percentage"] = request.percentage();
  }

  if (!!request.hasPublishEnv()) {
    body["PublishEnv"] = request.publishEnv();
  }

  if (!!request.hasRemarks()) {
    body["Remarks"] = request.remarks();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PublishEdgeContainerAppVersion"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishEdgeContainerAppVersionResponse>();
}

/**
 * @summary Releases a specific version of a containerized application. You can call this operation to iterate an application.
 *
 * @param request PublishEdgeContainerAppVersionRequest
 * @return PublishEdgeContainerAppVersionResponse
 */
PublishEdgeContainerAppVersionResponse Client::publishEdgeContainerAppVersion(const PublishEdgeContainerAppVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishEdgeContainerAppVersionWithOptions(request, runtime);
}

/**
 * @summary Releases a code version of a routine to the staging, canary, or production environment. You can specify the regions where the canary environment is deployed to release your code.
 *
 * @param request PublishRoutineCodeVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishRoutineCodeVersionResponse
 */
PublishRoutineCodeVersionResponse Client::publishRoutineCodeVersionWithOptions(const PublishRoutineCodeVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCodeVersion()) {
    body["CodeVersion"] = request.codeVersion();
  }

  if (!!request.hasEnv()) {
    body["Env"] = request.env();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PublishRoutineCodeVersion"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishRoutineCodeVersionResponse>();
}

/**
 * @summary Releases a code version of a routine to the staging, canary, or production environment. You can specify the regions where the canary environment is deployed to release your code.
 *
 * @param request PublishRoutineCodeVersionRequest
 * @return PublishRoutineCodeVersionResponse
 */
PublishRoutineCodeVersionResponse Client::publishRoutineCodeVersion(const PublishRoutineCodeVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishRoutineCodeVersionWithOptions(request, runtime);
}

/**
 * @summary New Purchase of Cache Retention
 *
 * @param request PurchaseCacheReserveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PurchaseCacheReserveResponse
 */
PurchaseCacheReserveResponse Client::purchaseCacheReserveWithOptions(const PurchaseCacheReserveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.autoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.autoRenew();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.chargeType();
  }

  if (!!request.hasCrRegion()) {
    query["CrRegion"] = request.crRegion();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasQuotaGb()) {
    query["QuotaGb"] = request.quotaGb();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PurchaseCacheReserve"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PurchaseCacheReserveResponse>();
}

/**
 * @summary New Purchase of Cache Retention
 *
 * @param request PurchaseCacheReserveRequest
 * @return PurchaseCacheReserveResponse
 */
PurchaseCacheReserveResponse Client::purchaseCacheReserve(const PurchaseCacheReserveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return purchaseCacheReserveWithOptions(request, runtime);
}

/**
 * @summary Purchase New Package
 *
 * @description 1. The package name and code can be obtained from the DescribeRatePlanPrice interface.
 * 2. If the acceleration area is not overseas, the site must have successfully completed the filing process.
 *
 * @param request PurchaseRatePlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PurchaseRatePlanResponse
 */
PurchaseRatePlanResponse Client::purchaseRatePlanWithOptions(const PurchaseRatePlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.amount();
  }

  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.autoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.autoRenew();
  }

  if (!!request.hasChannel()) {
    query["Channel"] = request.channel();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.chargeType();
  }

  if (!!request.hasCoverage()) {
    query["Coverage"] = request.coverage();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasPlanCode()) {
    query["PlanCode"] = request.planCode();
  }

  if (!!request.hasPlanName()) {
    query["PlanName"] = request.planName();
  }

  if (!!request.hasSiteName()) {
    query["SiteName"] = request.siteName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PurchaseRatePlan"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PurchaseRatePlanResponse>();
}

/**
 * @summary Purchase New Package
 *
 * @description 1. The package name and code can be obtained from the DescribeRatePlanPrice interface.
 * 2. If the acceleration area is not overseas, the site must have successfully completed the filing process.
 *
 * @param request PurchaseRatePlanRequest
 * @return PurchaseRatePlanResponse
 */
PurchaseRatePlanResponse Client::purchaseRatePlan(const PurchaseRatePlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return purchaseRatePlanWithOptions(request, runtime);
}

/**
 * @summary Cache Refresh
 *
 * @param tmpReq PurgeCachesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PurgeCachesResponse
 */
PurgeCachesResponse Client::purgeCachesWithOptions(const PurgeCachesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PurgeCachesShrinkRequest request = PurgeCachesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContent()) {
    request.setContentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.content(), "Content", "json"));
  }

  json query = {};
  if (!!request.hasContentShrink()) {
    query["Content"] = request.contentShrink();
  }

  if (!!request.hasEdgeComputePurge()) {
    query["EdgeComputePurge"] = request.edgeComputePurge();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PurgeCaches"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PurgeCachesResponse>();
}

/**
 * @summary Cache Refresh
 *
 * @param request PurgeCachesRequest
 * @return PurgeCachesResponse
 */
PurgeCachesResponse Client::purgeCaches(const PurgeCachesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return purgeCachesWithOptions(request, runtime);
}

/**
 * @summary Configures a key-value pair for a namespace. The request body can be up to 2 MB.
 *
 * @param request PutKvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutKvResponse
 */
PutKvResponse Client::putKvWithOptions(const PutKvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBase64()) {
    query["Base64"] = request.base64();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.expiration();
  }

  if (!!request.hasExpirationTtl()) {
    query["ExpirationTtl"] = request.expirationTtl();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  json body = {};
  if (!!request.hasValue()) {
    body["Value"] = request.value();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PutKv"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutKvResponse>();
}

/**
 * @summary Configures a key-value pair for a namespace. The request body can be up to 2 MB.
 *
 * @param request PutKvRequest
 * @return PutKvResponse
 */
PutKvResponse Client::putKv(const PutKvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putKvWithOptions(request, runtime);
}

/**
 * @summary Configures a large key-value pair for a namespace. The request body can be up to 25 MB.
 *
 * @description This operation allows you to upload a larger request body than by using [PutKv](~~PutKv~~). For small request bodies, we recommend that you use [PutKv](~~PutKv~~) to minimize the server processing time. This operation must be called by using SDKs. The following sample code uses the Golang SDK and PutKvWithHighCapacityAdvance to call the operation.
 *     func TestPutKvWithHighCapacity() {
 *     	// Initialize the configurations.
 *     	cfg := new(openapi.Config)
 *     	cfg.SetAccessKeyId("xxxxxxxxx")
 *     	cfg.SetAccessKeySecret("xxxxxxxxxx")
 *     	cli, err := NewClient(cfg)
 *     	if err != nil {
 *     		return err
 *     	}
 *     	runtime := &util.RuntimeOptions{}
 *     	// Construct a request for uploading key-value pairs.
 *     	namespace := "test-put-kv"
 *     	key := "test_PutKvWithHighCapacity_0"
 *     	value := strings.Repeat("t", 10*1024*1024)
 *     	rawReq := &PutKvRequest{
 *     		Namespace: &namespace,
 *     		Key:       &key,
 *     		Value:     &value,
 *     	}
 *     	payload, err := json.Marshal(rawReq)
 *     	if err != nil {
 *     		return err
 *     	}
 *     	// If the payload is greater than 2 MB, call the PutKvWithHighCapacity operation for upload.
 *     	reqHighCapacity := &PutKvWithHighCapacityAdvanceRequest{
 *     		Namespace: &namespace,
 *     		Key:       &key,
 *     		UrlObject: bytes.NewReader([]byte(payload)),
 *     	}
 *     	resp, err := cli.PutKvWithHighCapacityAdvance(reqHighCapacity, runtime)
 *     	if err != nil {
 *     		return err
 *     	}
 *     	return nil
 *     }
 *
 * @param request PutKvWithHighCapacityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutKvWithHighCapacityResponse
 */
PutKvWithHighCapacityResponse Client::putKvWithHighCapacityWithOptions(const PutKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutKvWithHighCapacity"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutKvWithHighCapacityResponse>();
}

/**
 * @summary Configures a large key-value pair for a namespace. The request body can be up to 25 MB.
 *
 * @description This operation allows you to upload a larger request body than by using [PutKv](~~PutKv~~). For small request bodies, we recommend that you use [PutKv](~~PutKv~~) to minimize the server processing time. This operation must be called by using SDKs. The following sample code uses the Golang SDK and PutKvWithHighCapacityAdvance to call the operation.
 *     func TestPutKvWithHighCapacity() {
 *     	// Initialize the configurations.
 *     	cfg := new(openapi.Config)
 *     	cfg.SetAccessKeyId("xxxxxxxxx")
 *     	cfg.SetAccessKeySecret("xxxxxxxxxx")
 *     	cli, err := NewClient(cfg)
 *     	if err != nil {
 *     		return err
 *     	}
 *     	runtime := &util.RuntimeOptions{}
 *     	// Construct a request for uploading key-value pairs.
 *     	namespace := "test-put-kv"
 *     	key := "test_PutKvWithHighCapacity_0"
 *     	value := strings.Repeat("t", 10*1024*1024)
 *     	rawReq := &PutKvRequest{
 *     		Namespace: &namespace,
 *     		Key:       &key,
 *     		Value:     &value,
 *     	}
 *     	payload, err := json.Marshal(rawReq)
 *     	if err != nil {
 *     		return err
 *     	}
 *     	// If the payload is greater than 2 MB, call the PutKvWithHighCapacity operation for upload.
 *     	reqHighCapacity := &PutKvWithHighCapacityAdvanceRequest{
 *     		Namespace: &namespace,
 *     		Key:       &key,
 *     		UrlObject: bytes.NewReader([]byte(payload)),
 *     	}
 *     	resp, err := cli.PutKvWithHighCapacityAdvance(reqHighCapacity, runtime)
 *     	if err != nil {
 *     		return err
 *     	}
 *     	return nil
 *     }
 *
 * @param request PutKvWithHighCapacityRequest
 * @return PutKvWithHighCapacityResponse
 */
PutKvWithHighCapacityResponse Client::putKvWithHighCapacity(const PutKvWithHighCapacityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putKvWithHighCapacityWithOptions(request, runtime);
}

PutKvWithHighCapacityResponse Client::putKvWithHighCapacityAdvance(const PutKvWithHighCapacityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ESA"},
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
  PutKvWithHighCapacityRequest putKvWithHighCapacityReq = PutKvWithHighCapacityRequest();
  Utils::Utils::convert(request, putKvWithHighCapacityReq);
  if (!!request.hasUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.urlObject()},
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
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader);
    putKvWithHighCapacityReq.setUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  PutKvWithHighCapacityResponse putKvWithHighCapacityResp = putKvWithHighCapacityWithOptions(putKvWithHighCapacityReq, runtime);
  return putKvWithHighCapacityResp;
}

/**
 * @summary Rebuilds the staging environment for containerized applications.
 *
 * @param request RebuildEdgeContainerAppStagingEnvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebuildEdgeContainerAppStagingEnvResponse
 */
RebuildEdgeContainerAppStagingEnvResponse Client::rebuildEdgeContainerAppStagingEnvWithOptions(const RebuildEdgeContainerAppStagingEnvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RebuildEdgeContainerAppStagingEnv"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RebuildEdgeContainerAppStagingEnvResponse>();
}

/**
 * @summary Rebuilds the staging environment for containerized applications.
 *
 * @param request RebuildEdgeContainerAppStagingEnvRequest
 * @return RebuildEdgeContainerAppStagingEnvResponse
 */
RebuildEdgeContainerAppStagingEnvResponse Client::rebuildEdgeContainerAppStagingEnv(const RebuildEdgeContainerAppStagingEnvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebuildEdgeContainerAppStagingEnvWithOptions(request, runtime);
}

/**
 * @summary Resets the progress of a scheduled prefetch task and starts the prefetch from the beginning.
 *
 * @param request ResetScheduledPreloadJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetScheduledPreloadJobResponse
 */
ResetScheduledPreloadJobResponse Client::resetScheduledPreloadJobWithOptions(const ResetScheduledPreloadJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetScheduledPreloadJob"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetScheduledPreloadJobResponse>();
}

/**
 * @summary Resets the progress of a scheduled prefetch task and starts the prefetch from the beginning.
 *
 * @param request ResetScheduledPreloadJobRequest
 * @return ResetScheduledPreloadJobResponse
 */
ResetScheduledPreloadJobResponse Client::resetScheduledPreloadJob(const ResetScheduledPreloadJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetScheduledPreloadJobWithOptions(request, runtime);
}

/**
 * @summary Revokes an activated client certificate.
 *
 * @param request RevokeClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeClientCertificateResponse
 */
RevokeClientCertificateResponse Client::revokeClientCertificateWithOptions(const RevokeClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeClientCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeClientCertificateResponse>();
}

/**
 * @summary Revokes an activated client certificate.
 *
 * @param request RevokeClientCertificateRequest
 * @return RevokeClientCertificateResponse
 */
RevokeClientCertificateResponse Client::revokeClientCertificate(const RevokeClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeClientCertificateWithOptions(request, runtime);
}

/**
 * @summary Rolls back a version of a containerized application.
 *
 * @param request RollbackEdgeContainerAppVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackEdgeContainerAppVersionResponse
 */
RollbackEdgeContainerAppVersionResponse Client::rollbackEdgeContainerAppVersionWithOptions(const RollbackEdgeContainerAppVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPercentage()) {
    query["Percentage"] = request.percentage();
  }

  if (!!request.hasUsedPercent()) {
    query["UsedPercent"] = request.usedPercent();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.versionId();
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasRemarks()) {
    body["Remarks"] = request.remarks();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RollbackEdgeContainerAppVersion"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackEdgeContainerAppVersionResponse>();
}

/**
 * @summary Rolls back a version of a containerized application.
 *
 * @param request RollbackEdgeContainerAppVersionRequest
 * @return RollbackEdgeContainerAppVersionResponse
 */
RollbackEdgeContainerAppVersionResponse Client::rollbackEdgeContainerAppVersion(const RollbackEdgeContainerAppVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackEdgeContainerAppVersionWithOptions(request, runtime);
}

/**
 * @summary Configures whether to enable certificates and update certificate information for a website.
 *
 * @param request SetCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetCertificateResponse
 */
SetCertificateResponse Client::setCertificateWithOptions(const SetCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  json body = {};
  if (!!request.hasCasId()) {
    body["CasId"] = request.casId();
  }

  if (!!request.hasCertificate()) {
    body["Certificate"] = request.certificate();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPrivateKey()) {
    body["PrivateKey"] = request.privateKey();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.region();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.siteId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetCertificateResponse>();
}

/**
 * @summary Configures whether to enable certificates and update certificate information for a website.
 *
 * @param request SetCertificateRequest
 * @return SetCertificateResponse
 */
SetCertificateResponse Client::setCertificate(const SetCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setCertificateWithOptions(request, runtime);
}

/**
 * @summary Associates domain names with a client CA certificate. If no certificate is specified, domain names are associated with an Edge Security Acceleration (ESA)-managed CA certificate.
 *
 * @param tmpReq SetClientCertificateHostnamesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetClientCertificateHostnamesResponse
 */
SetClientCertificateHostnamesResponse Client::setClientCertificateHostnamesWithOptions(const SetClientCertificateHostnamesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetClientCertificateHostnamesShrinkRequest request = SetClientCertificateHostnamesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHostnames()) {
    request.setHostnamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.hostnames(), "Hostnames", "json"));
  }

  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  json body = {};
  if (!!request.hasHostnamesShrink()) {
    body["Hostnames"] = request.hostnamesShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetClientCertificateHostnames"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetClientCertificateHostnamesResponse>();
}

/**
 * @summary Associates domain names with a client CA certificate. If no certificate is specified, domain names are associated with an Edge Security Acceleration (ESA)-managed CA certificate.
 *
 * @param request SetClientCertificateHostnamesRequest
 * @return SetClientCertificateHostnamesResponse
 */
SetClientCertificateHostnamesResponse Client::setClientCertificateHostnames(const SetClientCertificateHostnamesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setClientCertificateHostnamesWithOptions(request, runtime);
}

/**
 * @summary Configures smart HTTP DDoS protection.
 *
 * @param request SetHttpDDoSAttackIntelligentProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetHttpDDoSAttackIntelligentProtectionResponse
 */
SetHttpDDoSAttackIntelligentProtectionResponse Client::setHttpDDoSAttackIntelligentProtectionWithOptions(const SetHttpDDoSAttackIntelligentProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAiMode()) {
    query["AiMode"] = request.aiMode();
  }

  if (!!request.hasAiTemplate()) {
    query["AiTemplate"] = request.aiTemplate();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetHttpDDoSAttackIntelligentProtection"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetHttpDDoSAttackIntelligentProtectionResponse>();
}

/**
 * @summary Configures smart HTTP DDoS protection.
 *
 * @param request SetHttpDDoSAttackIntelligentProtectionRequest
 * @return SetHttpDDoSAttackIntelligentProtectionResponse
 */
SetHttpDDoSAttackIntelligentProtectionResponse Client::setHttpDDoSAttackIntelligentProtection(const SetHttpDDoSAttackIntelligentProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setHttpDDoSAttackIntelligentProtectionWithOptions(request, runtime);
}

/**
 * @summary Configures HTTP DDoS attack protection for a website.
 *
 * @param request SetHttpDDoSAttackProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetHttpDDoSAttackProtectionResponse
 */
SetHttpDDoSAttackProtectionResponse Client::setHttpDDoSAttackProtectionWithOptions(const SetHttpDDoSAttackProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGlobalMode()) {
    query["GlobalMode"] = request.globalMode();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetHttpDDoSAttackProtection"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetHttpDDoSAttackProtectionResponse>();
}

/**
 * @summary Configures HTTP DDoS attack protection for a website.
 *
 * @param request SetHttpDDoSAttackProtectionRequest
 * @return SetHttpDDoSAttackProtectionResponse
 */
SetHttpDDoSAttackProtectionResponse Client::setHttpDDoSAttackProtection(const SetHttpDDoSAttackProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setHttpDDoSAttackProtectionWithOptions(request, runtime);
}

/**
 * @summary 为域名回源客户端证书绑定域名
 *
 * @param tmpReq SetOriginClientCertificateHostnamesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetOriginClientCertificateHostnamesResponse
 */
SetOriginClientCertificateHostnamesResponse Client::setOriginClientCertificateHostnamesWithOptions(const SetOriginClientCertificateHostnamesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetOriginClientCertificateHostnamesShrinkRequest request = SetOriginClientCertificateHostnamesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHostnames()) {
    request.setHostnamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.hostnames(), "Hostnames", "json"));
  }

  json body = {};
  if (!!request.hasHostnamesShrink()) {
    body["Hostnames"] = request.hostnamesShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SetOriginClientCertificateHostnames"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetOriginClientCertificateHostnamesResponse>();
}

/**
 * @summary 为域名回源客户端证书绑定域名
 *
 * @param request SetOriginClientCertificateHostnamesRequest
 * @return SetOriginClientCertificateHostnamesResponse
 */
SetOriginClientCertificateHostnamesResponse Client::setOriginClientCertificateHostnames(const SetOriginClientCertificateHostnamesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setOriginClientCertificateHostnamesWithOptions(request, runtime);
}

/**
 * @summary Starts a scheduled prefetch plan based on the plan ID.
 *
 * @param request StartScheduledPreloadExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartScheduledPreloadExecutionResponse
 */
StartScheduledPreloadExecutionResponse Client::startScheduledPreloadExecutionWithOptions(const StartScheduledPreloadExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartScheduledPreloadExecution"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartScheduledPreloadExecutionResponse>();
}

/**
 * @summary Starts a scheduled prefetch plan based on the plan ID.
 *
 * @param request StartScheduledPreloadExecutionRequest
 * @return StartScheduledPreloadExecutionResponse
 */
StartScheduledPreloadExecutionResponse Client::startScheduledPreloadExecution(const StartScheduledPreloadExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startScheduledPreloadExecutionWithOptions(request, runtime);
}

/**
 * @summary Stops a scheduled prefetch plan based on the plan ID.
 *
 * @param request StopScheduledPreloadExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopScheduledPreloadExecutionResponse
 */
StopScheduledPreloadExecutionResponse Client::stopScheduledPreloadExecutionWithOptions(const StopScheduledPreloadExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopScheduledPreloadExecution"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopScheduledPreloadExecutionResponse>();
}

/**
 * @summary Stops a scheduled prefetch plan based on the plan ID.
 *
 * @param request StopScheduledPreloadExecutionRequest
 * @return StopScheduledPreloadExecutionResponse
 */
StopScheduledPreloadExecutionResponse Client::stopScheduledPreloadExecution(const StopScheduledPreloadExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopScheduledPreloadExecutionWithOptions(request, runtime);
}

/**
 * @summary Adds one or more tags to resources.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2024-09-10"},
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
 * @summary Adds one or more tags to resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Deletes a resource tag based on a specified resource ID.
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

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2024-09-10"},
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
 * @summary Deletes a resource tag based on a specified resource ID.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary 缓存保持变配
 *
 * @param request UpdateCacheReserveSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCacheReserveSpecResponse
 */
UpdateCacheReserveSpecResponse Client::updateCacheReserveSpecWithOptions(const UpdateCacheReserveSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.autoPay();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.chargeType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTargetQuotaGb()) {
    query["TargetQuotaGb"] = request.targetQuotaGb();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCacheReserveSpec"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCacheReserveSpecResponse>();
}

/**
 * @summary 缓存保持变配
 *
 * @param request UpdateCacheReserveSpecRequest
 * @return UpdateCacheReserveSpecResponse
 */
UpdateCacheReserveSpecResponse Client::updateCacheReserveSpec(const UpdateCacheReserveSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCacheReserveSpecWithOptions(request, runtime);
}

/**
 * @summary Modify cache configuration
 *
 * @param request UpdateCacheRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCacheRuleResponse
 */
UpdateCacheRuleResponse Client::updateCacheRuleWithOptions(const UpdateCacheRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdditionalCacheablePorts()) {
    query["AdditionalCacheablePorts"] = request.additionalCacheablePorts();
  }

  if (!!request.hasBrowserCacheMode()) {
    query["BrowserCacheMode"] = request.browserCacheMode();
  }

  if (!!request.hasBrowserCacheTtl()) {
    query["BrowserCacheTtl"] = request.browserCacheTtl();
  }

  if (!!request.hasBypassCache()) {
    query["BypassCache"] = request.bypassCache();
  }

  if (!!request.hasCacheDeceptionArmor()) {
    query["CacheDeceptionArmor"] = request.cacheDeceptionArmor();
  }

  if (!!request.hasCacheReserveEligibility()) {
    query["CacheReserveEligibility"] = request.cacheReserveEligibility();
  }

  if (!!request.hasCheckPresenceCookie()) {
    query["CheckPresenceCookie"] = request.checkPresenceCookie();
  }

  if (!!request.hasCheckPresenceHeader()) {
    query["CheckPresenceHeader"] = request.checkPresenceHeader();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasEdgeCacheMode()) {
    query["EdgeCacheMode"] = request.edgeCacheMode();
  }

  if (!!request.hasEdgeCacheTtl()) {
    query["EdgeCacheTtl"] = request.edgeCacheTtl();
  }

  if (!!request.hasEdgeStatusCodeCacheTtl()) {
    query["EdgeStatusCodeCacheTtl"] = request.edgeStatusCodeCacheTtl();
  }

  if (!!request.hasIncludeCookie()) {
    query["IncludeCookie"] = request.includeCookie();
  }

  if (!!request.hasIncludeHeader()) {
    query["IncludeHeader"] = request.includeHeader();
  }

  if (!!request.hasQueryString()) {
    query["QueryString"] = request.queryString();
  }

  if (!!request.hasQueryStringMode()) {
    query["QueryStringMode"] = request.queryStringMode();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasServeStale()) {
    query["ServeStale"] = request.serveStale();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSortQueryStringForCache()) {
    query["SortQueryStringForCache"] = request.sortQueryStringForCache();
  }

  if (!!request.hasUserDeviceType()) {
    query["UserDeviceType"] = request.userDeviceType();
  }

  if (!!request.hasUserGeo()) {
    query["UserGeo"] = request.userGeo();
  }

  if (!!request.hasUserLanguage()) {
    query["UserLanguage"] = request.userLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCacheRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCacheRuleResponse>();
}

/**
 * @summary Modify cache configuration
 *
 * @param request UpdateCacheRuleRequest
 * @return UpdateCacheRuleResponse
 */
UpdateCacheRuleResponse Client::updateCacheRule(const UpdateCacheRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCacheRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies the cache tag configuration of your website. You can call this operation when you need to specify tags in the Cache-Tag response header to use the purge by cache tag feature.
 *
 * @param request UpdateCacheTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCacheTagResponse
 */
UpdateCacheTagResponse Client::updateCacheTagWithOptions(const UpdateCacheTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaseInsensitive()) {
    query["CaseInsensitive"] = request.caseInsensitive();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.tagName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCacheTag"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCacheTagResponse>();
}

/**
 * @summary Modifies the cache tag configuration of your website. You can call this operation when you need to specify tags in the Cache-Tag response header to use the purge by cache tag feature.
 *
 * @param request UpdateCacheTagRequest
 * @return UpdateCacheTagResponse
 */
UpdateCacheTagResponse Client::updateCacheTag(const UpdateCacheTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCacheTagWithOptions(request, runtime);
}

/**
 * @summary Modifies the CNAME flattening configuration of a website.
 *
 * @param request UpdateCnameFlatteningRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCnameFlatteningResponse
 */
UpdateCnameFlatteningResponse Client::updateCnameFlatteningWithOptions(const UpdateCnameFlatteningRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlattenMode()) {
    query["FlattenMode"] = request.flattenMode();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCnameFlattening"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCnameFlatteningResponse>();
}

/**
 * @summary Modifies the CNAME flattening configuration of a website.
 *
 * @param request UpdateCnameFlatteningRequest
 * @return UpdateCnameFlatteningResponse
 */
UpdateCnameFlatteningResponse Client::updateCnameFlattening(const UpdateCnameFlatteningRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCnameFlatteningWithOptions(request, runtime);
}

/**
 * @summary Modify compression rule
 *
 * @param request UpdateCompressionRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCompressionRuleResponse
 */
UpdateCompressionRuleResponse Client::updateCompressionRuleWithOptions(const UpdateCompressionRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrotli()) {
    query["Brotli"] = request.brotli();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasGzip()) {
    query["Gzip"] = request.gzip();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasZstd()) {
    query["Zstd"] = request.zstd();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCompressionRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCompressionRuleResponse>();
}

/**
 * @summary Modify compression rule
 *
 * @param request UpdateCompressionRuleRequest
 * @return UpdateCompressionRuleResponse
 */
UpdateCompressionRuleResponse Client::updateCompressionRule(const UpdateCompressionRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCompressionRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of the Chinese mainland network access optimization.
 *
 * @param request UpdateCrossBorderOptimizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCrossBorderOptimizationResponse
 */
UpdateCrossBorderOptimizationResponse Client::updateCrossBorderOptimizationWithOptions(const UpdateCrossBorderOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCrossBorderOptimization"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCrossBorderOptimizationResponse>();
}

/**
 * @summary Modifies the configuration of the Chinese mainland network access optimization.
 *
 * @param request UpdateCrossBorderOptimizationRequest
 * @return UpdateCrossBorderOptimizationResponse
 */
UpdateCrossBorderOptimizationResponse Client::updateCrossBorderOptimization(const UpdateCrossBorderOptimizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCrossBorderOptimizationWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a custom scenario-specific policy.
 *
 * @param request UpdateCustomScenePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomScenePolicyResponse
 */
UpdateCustomScenePolicyResponse Client::updateCustomScenePolicyWithOptions(const UpdateCustomScenePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasObjects()) {
    query["Objects"] = request.objects();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.policyId();
  }

  if (!!request.hasSiteIds()) {
    query["SiteIds"] = request.siteIds();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTemplate()) {
    query["Template"] = request._template();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCustomScenePolicy"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomScenePolicyResponse>();
}

/**
 * @summary Modifies the configurations of a custom scenario-specific policy.
 *
 * @param request UpdateCustomScenePolicyRequest
 * @return UpdateCustomScenePolicyResponse
 */
UpdateCustomScenePolicyResponse Client::updateCustomScenePolicy(const UpdateCustomScenePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomScenePolicyWithOptions(request, runtime);
}

/**
 * @summary Modifies the development mode configuration of your website. If you enable Development Mode, all requests bypass caching components on POPs and are redirected to the origin server. This allows clients to retrieve the most recent resources on the origin server.
 *
 * @param request UpdateDevelopmentModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDevelopmentModeResponse
 */
UpdateDevelopmentModeResponse Client::updateDevelopmentModeWithOptions(const UpdateDevelopmentModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDevelopmentMode"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDevelopmentModeResponse>();
}

/**
 * @summary Modifies the development mode configuration of your website. If you enable Development Mode, all requests bypass caching components on POPs and are redirected to the origin server. This allows clients to retrieve the most recent resources on the origin server.
 *
 * @param request UpdateDevelopmentModeRequest
 * @return UpdateDevelopmentModeResponse
 */
UpdateDevelopmentModeResponse Client::updateDevelopmentMode(const UpdateDevelopmentModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDevelopmentModeWithOptions(request, runtime);
}

/**
 * @summary Updates the log collection configuration of a containerized application.
 *
 * @param request UpdateEdgeContainerAppLogRiverRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEdgeContainerAppLogRiverResponse
 */
UpdateEdgeContainerAppLogRiverResponse Client::updateEdgeContainerAppLogRiverWithOptions(const UpdateEdgeContainerAppLogRiverRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.path();
  }

  if (!!request.hasStdout()) {
    query["Stdout"] = request.stdout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateEdgeContainerAppLogRiver"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEdgeContainerAppLogRiverResponse>();
}

/**
 * @summary Updates the log collection configuration of a containerized application.
 *
 * @param request UpdateEdgeContainerAppLogRiverRequest
 * @return UpdateEdgeContainerAppLogRiverResponse
 */
UpdateEdgeContainerAppLogRiverResponse Client::updateEdgeContainerAppLogRiver(const UpdateEdgeContainerAppLogRiverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEdgeContainerAppLogRiverWithOptions(request, runtime);
}

/**
 * @summary 更新边缘容器资源预留配置
 *
 * @param tmpReq UpdateEdgeContainerAppResourceReserveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEdgeContainerAppResourceReserveResponse
 */
UpdateEdgeContainerAppResourceReserveResponse Client::updateEdgeContainerAppResourceReserveWithOptions(const UpdateEdgeContainerAppResourceReserveRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateEdgeContainerAppResourceReserveShrinkRequest request = UpdateEdgeContainerAppResourceReserveShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasReserveSet()) {
    request.setReserveSetShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.reserveSet(), "ReserveSet", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasDurationTime()) {
    query["DurationTime"] = request.durationTime();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasForever()) {
    query["Forever"] = request.forever();
  }

  if (!!request.hasReserveSetShrink()) {
    query["ReserveSet"] = request.reserveSetShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateEdgeContainerAppResourceReserve"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEdgeContainerAppResourceReserveResponse>();
}

/**
 * @summary 更新边缘容器资源预留配置
 *
 * @param request UpdateEdgeContainerAppResourceReserveRequest
 * @return UpdateEdgeContainerAppResourceReserveResponse
 */
UpdateEdgeContainerAppResourceReserveResponse Client::updateEdgeContainerAppResourceReserve(const UpdateEdgeContainerAppResourceReserveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEdgeContainerAppResourceReserveWithOptions(request, runtime);
}

/**
 * @summary 修改HTTP入站请求头规则
 *
 * @param tmpReq UpdateHttpIncomingRequestHeaderModificationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHttpIncomingRequestHeaderModificationRuleResponse
 */
UpdateHttpIncomingRequestHeaderModificationRuleResponse Client::updateHttpIncomingRequestHeaderModificationRuleWithOptions(const UpdateHttpIncomingRequestHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest request = UpdateHttpIncomingRequestHeaderModificationRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRequestHeaderModification()) {
    request.setRequestHeaderModificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.requestHeaderModification(), "RequestHeaderModification", "json"));
  }

  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasRequestHeaderModificationShrink()) {
    query["RequestHeaderModification"] = request.requestHeaderModificationShrink();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateHttpIncomingRequestHeaderModificationRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHttpIncomingRequestHeaderModificationRuleResponse>();
}

/**
 * @summary 修改HTTP入站请求头规则
 *
 * @param request UpdateHttpIncomingRequestHeaderModificationRuleRequest
 * @return UpdateHttpIncomingRequestHeaderModificationRuleResponse
 */
UpdateHttpIncomingRequestHeaderModificationRuleResponse Client::updateHttpIncomingRequestHeaderModificationRule(const UpdateHttpIncomingRequestHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateHttpIncomingRequestHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary 修改HTTP入站响应头规则
 *
 * @param tmpReq UpdateHttpIncomingResponseHeaderModificationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHttpIncomingResponseHeaderModificationRuleResponse
 */
UpdateHttpIncomingResponseHeaderModificationRuleResponse Client::updateHttpIncomingResponseHeaderModificationRuleWithOptions(const UpdateHttpIncomingResponseHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest request = UpdateHttpIncomingResponseHeaderModificationRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResponseHeaderModification()) {
    request.setResponseHeaderModificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.responseHeaderModification(), "ResponseHeaderModification", "json"));
  }

  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasResponseHeaderModificationShrink()) {
    query["ResponseHeaderModification"] = request.responseHeaderModificationShrink();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateHttpIncomingResponseHeaderModificationRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHttpIncomingResponseHeaderModificationRuleResponse>();
}

/**
 * @summary 修改HTTP入站响应头规则
 *
 * @param request UpdateHttpIncomingResponseHeaderModificationRuleRequest
 * @return UpdateHttpIncomingResponseHeaderModificationRuleResponse
 */
UpdateHttpIncomingResponseHeaderModificationRuleResponse Client::updateHttpIncomingResponseHeaderModificationRule(const UpdateHttpIncomingResponseHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateHttpIncomingResponseHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Modify HTTP Request Header Rules
 *
 * @param tmpReq UpdateHttpRequestHeaderModificationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHttpRequestHeaderModificationRuleResponse
 */
UpdateHttpRequestHeaderModificationRuleResponse Client::updateHttpRequestHeaderModificationRuleWithOptions(const UpdateHttpRequestHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateHttpRequestHeaderModificationRuleShrinkRequest request = UpdateHttpRequestHeaderModificationRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRequestHeaderModification()) {
    request.setRequestHeaderModificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.requestHeaderModification(), "RequestHeaderModification", "json"));
  }

  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasRequestHeaderModificationShrink()) {
    query["RequestHeaderModification"] = request.requestHeaderModificationShrink();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateHttpRequestHeaderModificationRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHttpRequestHeaderModificationRuleResponse>();
}

/**
 * @summary Modify HTTP Request Header Rules
 *
 * @param request UpdateHttpRequestHeaderModificationRuleRequest
 * @return UpdateHttpRequestHeaderModificationRuleResponse
 */
UpdateHttpRequestHeaderModificationRuleResponse Client::updateHttpRequestHeaderModificationRule(const UpdateHttpRequestHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateHttpRequestHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Modify HTTP response header rules
 *
 * @param tmpReq UpdateHttpResponseHeaderModificationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHttpResponseHeaderModificationRuleResponse
 */
UpdateHttpResponseHeaderModificationRuleResponse Client::updateHttpResponseHeaderModificationRuleWithOptions(const UpdateHttpResponseHeaderModificationRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateHttpResponseHeaderModificationRuleShrinkRequest request = UpdateHttpResponseHeaderModificationRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResponseHeaderModification()) {
    request.setResponseHeaderModificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.responseHeaderModification(), "ResponseHeaderModification", "json"));
  }

  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasResponseHeaderModificationShrink()) {
    query["ResponseHeaderModification"] = request.responseHeaderModificationShrink();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateHttpResponseHeaderModificationRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHttpResponseHeaderModificationRuleResponse>();
}

/**
 * @summary Modify HTTP response header rules
 *
 * @param request UpdateHttpResponseHeaderModificationRuleRequest
 * @return UpdateHttpResponseHeaderModificationRuleResponse
 */
UpdateHttpResponseHeaderModificationRuleResponse Client::updateHttpResponseHeaderModificationRule(const UpdateHttpResponseHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateHttpResponseHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Modify HTTPS Application Configuration
 *
 * @param request UpdateHttpsApplicationConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHttpsApplicationConfigurationResponse
 */
UpdateHttpsApplicationConfigurationResponse Client::updateHttpsApplicationConfigurationWithOptions(const UpdateHttpsApplicationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAltSvc()) {
    query["AltSvc"] = request.altSvc();
  }

  if (!!request.hasAltSvcClear()) {
    query["AltSvcClear"] = request.altSvcClear();
  }

  if (!!request.hasAltSvcMa()) {
    query["AltSvcMa"] = request.altSvcMa();
  }

  if (!!request.hasAltSvcPersist()) {
    query["AltSvcPersist"] = request.altSvcPersist();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasHsts()) {
    query["Hsts"] = request.hsts();
  }

  if (!!request.hasHstsIncludeSubdomains()) {
    query["HstsIncludeSubdomains"] = request.hstsIncludeSubdomains();
  }

  if (!!request.hasHstsMaxAge()) {
    query["HstsMaxAge"] = request.hstsMaxAge();
  }

  if (!!request.hasHstsPreload()) {
    query["HstsPreload"] = request.hstsPreload();
  }

  if (!!request.hasHttpsForce()) {
    query["HttpsForce"] = request.httpsForce();
  }

  if (!!request.hasHttpsForceCode()) {
    query["HttpsForceCode"] = request.httpsForceCode();
  }

  if (!!request.hasHttpsNoSniDeny()) {
    query["HttpsNoSniDeny"] = request.httpsNoSniDeny();
  }

  if (!!request.hasHttpsSniVerify()) {
    query["HttpsSniVerify"] = request.httpsSniVerify();
  }

  if (!!request.hasHttpsSniWhitelist()) {
    query["HttpsSniWhitelist"] = request.httpsSniWhitelist();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateHttpsApplicationConfiguration"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHttpsApplicationConfigurationResponse>();
}

/**
 * @summary Modify HTTPS Application Configuration
 *
 * @param request UpdateHttpsApplicationConfigurationRequest
 * @return UpdateHttpsApplicationConfigurationResponse
 */
UpdateHttpsApplicationConfigurationResponse Client::updateHttpsApplicationConfiguration(const UpdateHttpsApplicationConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateHttpsApplicationConfigurationWithOptions(request, runtime);
}

/**
 * @summary Modify HTTPS Basic Configuration
 *
 * @param request UpdateHttpsBasicConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHttpsBasicConfigurationResponse
 */
UpdateHttpsBasicConfigurationResponse Client::updateHttpsBasicConfigurationWithOptions(const UpdateHttpsBasicConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCiphersuite()) {
    query["Ciphersuite"] = request.ciphersuite();
  }

  if (!!request.hasCiphersuiteGroup()) {
    query["CiphersuiteGroup"] = request.ciphersuiteGroup();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasHttp2()) {
    query["Http2"] = request.http2();
  }

  if (!!request.hasHttp3()) {
    query["Http3"] = request.http3();
  }

  if (!!request.hasHttps()) {
    query["Https"] = request.https();
  }

  if (!!request.hasOcspStapling()) {
    query["OcspStapling"] = request.ocspStapling();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasTls10()) {
    query["Tls10"] = request.tls10();
  }

  if (!!request.hasTls11()) {
    query["Tls11"] = request.tls11();
  }

  if (!!request.hasTls12()) {
    query["Tls12"] = request.tls12();
  }

  if (!!request.hasTls13()) {
    query["Tls13"] = request.tls13();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateHttpsBasicConfiguration"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHttpsBasicConfigurationResponse>();
}

/**
 * @summary Modify HTTPS Basic Configuration
 *
 * @param request UpdateHttpsBasicConfigurationRequest
 * @return UpdateHttpsBasicConfigurationResponse
 */
UpdateHttpsBasicConfigurationResponse Client::updateHttpsBasicConfiguration(const UpdateHttpsBasicConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateHttpsBasicConfigurationWithOptions(request, runtime);
}

/**
 * @summary Modifies the IPv6 configuration of a website.
 *
 * @param request UpdateIPv6Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIPv6Response
 */
UpdateIPv6Response Client::updateIPv6WithOptions(const UpdateIPv6Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateIPv6"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIPv6Response>();
}

/**
 * @summary Modifies the IPv6 configuration of a website.
 *
 * @param request UpdateIPv6Request
 * @return UpdateIPv6Response
 */
UpdateIPv6Response Client::updateIPv6(const UpdateIPv6Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIPv6WithOptions(request, runtime);
}

/**
 * @summary Modify Site Image Transformation Configuration
 *
 * @param request UpdateImageTransformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateImageTransformResponse
 */
UpdateImageTransformResponse Client::updateImageTransformWithOptions(const UpdateImageTransformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateImageTransform"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateImageTransformResponse>();
}

/**
 * @summary Modify Site Image Transformation Configuration
 *
 * @param request UpdateImageTransformRequest
 * @return UpdateImageTransformResponse
 */
UpdateImageTransformResponse Client::updateImageTransform(const UpdateImageTransformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateImageTransformWithOptions(request, runtime);
}

/**
 * @summary Updates a custom list.
 *
 * @param tmpReq UpdateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateListResponse
 */
UpdateListResponse Client::updateListWithOptions(const UpdateListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateListShrinkRequest request = UpdateListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasItems()) {
    request.setItemsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.items(), "Items", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasItemsShrink()) {
    body["Items"] = request.itemsShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateList"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateListResponse>();
}

/**
 * @summary Updates a custom list.
 *
 * @param request UpdateListRequest
 * @return UpdateListResponse
 */
UpdateListResponse Client::updateList(const UpdateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateListWithOptions(request, runtime);
}

/**
 * @summary Modify Load Balancer
 *
 * @description Through this interface, you can modify multiple configurations of the load balancer, including but not limited to the name of the load balancer, whether to enable acceleration, session persistence strategy, and various advanced settings related to traffic routing.>Notice: Changes to certain parameters may affect the stability of existing services, please operate with caution.
 *
 * @param tmpReq UpdateLoadBalancerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLoadBalancerResponse
 */
UpdateLoadBalancerResponse Client::updateLoadBalancerWithOptions(const UpdateLoadBalancerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateLoadBalancerShrinkRequest request = UpdateLoadBalancerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAdaptiveRouting()) {
    request.setAdaptiveRoutingShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.adaptiveRouting(), "AdaptiveRouting", "json"));
  }

  if (!!tmpReq.hasDefaultPools()) {
    request.setDefaultPoolsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.defaultPools(), "DefaultPools", "json"));
  }

  if (!!tmpReq.hasMonitor()) {
    request.setMonitorShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.monitor(), "Monitor", "json"));
  }

  if (!!tmpReq.hasRandomSteering()) {
    request.setRandomSteeringShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.randomSteering(), "RandomSteering", "json"));
  }

  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.rules(), "Rules", "json"));
  }

  json query = {};
  if (!!request.hasAdaptiveRoutingShrink()) {
    query["AdaptiveRouting"] = request.adaptiveRoutingShrink();
  }

  if (!!request.hasDefaultPoolsShrink()) {
    query["DefaultPools"] = request.defaultPoolsShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.enabled();
  }

  if (!!request.hasFallbackPool()) {
    query["FallbackPool"] = request.fallbackPool();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasMonitorShrink()) {
    query["Monitor"] = request.monitorShrink();
  }

  if (!!request.hasRandomSteeringShrink()) {
    query["RandomSteering"] = request.randomSteeringShrink();
  }

  if (!!request.hasRegionPools()) {
    query["RegionPools"] = request.regionPools();
  }

  if (!!request.hasRulesShrink()) {
    query["Rules"] = request.rulesShrink();
  }

  if (!!request.hasSessionAffinity()) {
    query["SessionAffinity"] = request.sessionAffinity();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSteeringPolicy()) {
    query["SteeringPolicy"] = request.steeringPolicy();
  }

  if (!!request.hasSubRegionPools()) {
    query["SubRegionPools"] = request.subRegionPools();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.ttl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLoadBalancer"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLoadBalancerResponse>();
}

/**
 * @summary Modify Load Balancer
 *
 * @description Through this interface, you can modify multiple configurations of the load balancer, including but not limited to the name of the load balancer, whether to enable acceleration, session persistence strategy, and various advanced settings related to traffic routing.>Notice: Changes to certain parameters may affect the stability of existing services, please operate with caution.
 *
 * @param request UpdateLoadBalancerRequest
 * @return UpdateLoadBalancerResponse
 */
UpdateLoadBalancerResponse Client::updateLoadBalancer(const UpdateLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of managed transforms for your website.
 *
 * @param request UpdateManagedTransformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateManagedTransformResponse
 */
UpdateManagedTransformResponse Client::updateManagedTransformWithOptions(const UpdateManagedTransformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddClientGeolocationHeader()) {
    query["AddClientGeolocationHeader"] = request.addClientGeolocationHeader();
  }

  if (!!request.hasAddRealClientIpHeader()) {
    query["AddRealClientIpHeader"] = request.addRealClientIpHeader();
  }

  if (!!request.hasRealClientIpHeaderName()) {
    query["RealClientIpHeaderName"] = request.realClientIpHeaderName();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateManagedTransform"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateManagedTransformResponse>();
}

/**
 * @summary Modifies the configuration of managed transforms for your website.
 *
 * @param request UpdateManagedTransformRequest
 * @return UpdateManagedTransformResponse
 */
UpdateManagedTransformResponse Client::updateManagedTransform(const UpdateManagedTransformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateManagedTransformWithOptions(request, runtime);
}

/**
 * @summary Modify network optimization configuration
 *
 * @param request UpdateNetworkOptimizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNetworkOptimizationResponse
 */
UpdateNetworkOptimizationResponse Client::updateNetworkOptimizationWithOptions(const UpdateNetworkOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasGrpc()) {
    query["Grpc"] = request.grpc();
  }

  if (!!request.hasHttp2Origin()) {
    query["Http2Origin"] = request.http2Origin();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSmartRouting()) {
    query["SmartRouting"] = request.smartRouting();
  }

  if (!!request.hasUploadMaxFilesize()) {
    query["UploadMaxFilesize"] = request.uploadMaxFilesize();
  }

  if (!!request.hasWebsocket()) {
    query["Websocket"] = request.websocket();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateNetworkOptimization"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNetworkOptimizationResponse>();
}

/**
 * @summary Modify network optimization configuration
 *
 * @param request UpdateNetworkOptimizationRequest
 * @return UpdateNetworkOptimizationResponse
 */
UpdateNetworkOptimizationResponse Client::updateNetworkOptimization(const UpdateNetworkOptimizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNetworkOptimizationWithOptions(request, runtime);
}

/**
 * @summary Modify the Monitor
 *
 * @param tmpReq UpdateOriginPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOriginPoolResponse
 */
UpdateOriginPoolResponse Client::updateOriginPoolWithOptions(const UpdateOriginPoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateOriginPoolShrinkRequest request = UpdateOriginPoolShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOrigins()) {
    request.setOriginsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.origins(), "Origins", "json"));
  }

  json query = {};
  if (!!request.hasEnabled()) {
    query["Enabled"] = request.enabled();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOriginsShrink()) {
    query["Origins"] = request.originsShrink();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateOriginPool"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOriginPoolResponse>();
}

/**
 * @summary Modify the Monitor
 *
 * @param request UpdateOriginPoolRequest
 * @return UpdateOriginPoolResponse
 */
UpdateOriginPoolResponse Client::updateOriginPool(const UpdateOriginPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOriginPoolWithOptions(request, runtime);
}

/**
 * @summary Enables or disables IP convergence.
 *
 * @param request UpdateOriginProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOriginProtectionResponse
 */
UpdateOriginProtectionResponse Client::updateOriginProtectionWithOptions(const UpdateOriginProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOriginConverge()) {
    query["OriginConverge"] = request.originConverge();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateOriginProtection"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOriginProtectionResponse>();
}

/**
 * @summary Enables or disables IP convergence.
 *
 * @param request UpdateOriginProtectionRequest
 * @return UpdateOriginProtectionResponse
 */
UpdateOriginProtectionResponse Client::updateOriginProtection(const UpdateOriginProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOriginProtectionWithOptions(request, runtime);
}

/**
 * @summary Updates the IP whitelist for origin protection used by a website to the latest version.
 *
 * @param request UpdateOriginProtectionIpWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOriginProtectionIpWhiteListResponse
 */
UpdateOriginProtectionIpWhiteListResponse Client::updateOriginProtectionIpWhiteListWithOptions(const UpdateOriginProtectionIpWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateOriginProtectionIpWhiteList"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOriginProtectionIpWhiteListResponse>();
}

/**
 * @summary Updates the IP whitelist for origin protection used by a website to the latest version.
 *
 * @param request UpdateOriginProtectionIpWhiteListRequest
 * @return UpdateOriginProtectionIpWhiteListResponse
 */
UpdateOriginProtectionIpWhiteListResponse Client::updateOriginProtectionIpWhiteList(const UpdateOriginProtectionIpWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOriginProtectionIpWhiteListWithOptions(request, runtime);
}

/**
 * @summary Modify Origin Rule Configuration for Site
 *
 * @param request UpdateOriginRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOriginRuleResponse
 */
UpdateOriginRuleResponse Client::updateOriginRuleWithOptions(const UpdateOriginRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasDnsRecord()) {
    query["DnsRecord"] = request.dnsRecord();
  }

  if (!!request.hasFollow302Enable()) {
    query["Follow302Enable"] = request.follow302Enable();
  }

  if (!!request.hasFollow302MaxTries()) {
    query["Follow302MaxTries"] = request.follow302MaxTries();
  }

  if (!!request.hasFollow302RetainArgs()) {
    query["Follow302RetainArgs"] = request.follow302RetainArgs();
  }

  if (!!request.hasFollow302RetainHeader()) {
    query["Follow302RetainHeader"] = request.follow302RetainHeader();
  }

  if (!!request.hasFollow302TargetHost()) {
    query["Follow302TargetHost"] = request.follow302TargetHost();
  }

  if (!!request.hasOriginHost()) {
    query["OriginHost"] = request.originHost();
  }

  if (!!request.hasOriginHttpPort()) {
    query["OriginHttpPort"] = request.originHttpPort();
  }

  if (!!request.hasOriginHttpsPort()) {
    query["OriginHttpsPort"] = request.originHttpsPort();
  }

  if (!!request.hasOriginMtls()) {
    query["OriginMtls"] = request.originMtls();
  }

  if (!!request.hasOriginReadTimeout()) {
    query["OriginReadTimeout"] = request.originReadTimeout();
  }

  if (!!request.hasOriginScheme()) {
    query["OriginScheme"] = request.originScheme();
  }

  if (!!request.hasOriginSni()) {
    query["OriginSni"] = request.originSni();
  }

  if (!!request.hasOriginVerify()) {
    query["OriginVerify"] = request.originVerify();
  }

  if (!!request.hasRange()) {
    query["Range"] = request.range();
  }

  if (!!request.hasRangeChunkSize()) {
    query["RangeChunkSize"] = request.rangeChunkSize();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateOriginRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateOriginRuleResponse>();
}

/**
 * @summary Modify Origin Rule Configuration for Site
 *
 * @param request UpdateOriginRuleRequest
 * @return UpdateOriginRuleResponse
 */
UpdateOriginRuleResponse Client::updateOriginRule(const UpdateOriginRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOriginRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a custom error page, such as the name, description, content type, and content of the page.
 *
 * @param request UpdatePageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePageResponse
 */
UpdatePageResponse Client::updatePageWithOptions(const UpdatePageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasContentType()) {
    body["ContentType"] = request.contentType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdatePage"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePageResponse>();
}

/**
 * @summary Modifies the configurations of a custom error page, such as the name, description, content type, and content of the page.
 *
 * @param request UpdatePageRequest
 * @return UpdatePageResponse
 */
UpdatePageResponse Client::updatePage(const UpdatePageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePageWithOptions(request, runtime);
}

/**
 * @summary 套餐变配
 *
 * @param request UpdateRatePlanSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRatePlanSpecResponse
 */
UpdateRatePlanSpecResponse Client::updateRatePlanSpecWithOptions(const UpdateRatePlanSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.autoPay();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.chargeType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasTargetPlanCode()) {
    query["TargetPlanCode"] = request.targetPlanCode();
  }

  if (!!request.hasTargetPlanName()) {
    query["TargetPlanName"] = request.targetPlanName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRatePlanSpec"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRatePlanSpecResponse>();
}

/**
 * @summary 套餐变配
 *
 * @param request UpdateRatePlanSpecRequest
 * @return UpdateRatePlanSpecResponse
 */
UpdateRatePlanSpecResponse Client::updateRatePlanSpec(const UpdateRatePlanSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRatePlanSpecWithOptions(request, runtime);
}

/**
 * @summary Updates multiple types of DNS records and origin authentication configurations.
 *
 * @description This operation allows you to update multiple types of DNS records, including but not limited to A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, and URI. You can modify the record content by providing the necessary fields such as Value, Priority, and Flag. For origins added in CNAME records such as OSS and S3, the API enables you to configure authentication details to ensure secure access.
 * ### [](#)Usage notes
 * *   The record value (Value) must match the record type. For example, the CNAME record should correspond to the target domain name.
 * *   You must specify a priority (Priority) for some record types, such as MX and SRV.
 * *   You must specify specific fields such as Flag and Tag for CAA records.
 * *   When you update security records such as CERT and SSHFP, you must accurately set fields such as Type and Algorithm.
 * *   If your origin type is OSS or S3, configure the authentication details in AuthConf based on the permissions.
 *
 * @param tmpReq UpdateRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecordResponse
 */
UpdateRecordResponse Client::updateRecordWithOptions(const UpdateRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateRecordShrinkRequest request = UpdateRecordShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAuthConf()) {
    request.setAuthConfShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.authConf(), "AuthConf", "json"));
  }

  if (!!tmpReq.hasData()) {
    request.setDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.data(), "Data", "json"));
  }

  json query = {};
  if (!!request.hasAuthConfShrink()) {
    query["AuthConf"] = request.authConfShrink();
  }

  if (!!request.hasBizName()) {
    query["BizName"] = request.bizName();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.comment();
  }

  if (!!request.hasDataShrink()) {
    query["Data"] = request.dataShrink();
  }

  if (!!request.hasHostPolicy()) {
    query["HostPolicy"] = request.hostPolicy();
  }

  if (!!request.hasProxied()) {
    query["Proxied"] = request.proxied();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.recordId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.ttl();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRecord"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecordResponse>();
}

/**
 * @summary Updates multiple types of DNS records and origin authentication configurations.
 *
 * @description This operation allows you to update multiple types of DNS records, including but not limited to A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, and URI. You can modify the record content by providing the necessary fields such as Value, Priority, and Flag. For origins added in CNAME records such as OSS and S3, the API enables you to configure authentication details to ensure secure access.
 * ### [](#)Usage notes
 * *   The record value (Value) must match the record type. For example, the CNAME record should correspond to the target domain name.
 * *   You must specify a priority (Priority) for some record types, such as MX and SRV.
 * *   You must specify specific fields such as Flag and Tag for CAA records.
 * *   When you update security records such as CERT and SSHFP, you must accurately set fields such as Type and Algorithm.
 * *   If your origin type is OSS or S3, configure the authentication details in AuthConf based on the permissions.
 *
 * @param request UpdateRecordRequest
 * @return UpdateRecordResponse
 */
UpdateRecordResponse Client::updateRecord(const UpdateRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRecordWithOptions(request, runtime);
}

/**
 * @summary Update Redirect Rule
 *
 * @param request UpdateRedirectRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRedirectRuleResponse
 */
UpdateRedirectRuleResponse Client::updateRedirectRuleWithOptions(const UpdateRedirectRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasReserveQueryString()) {
    query["ReserveQueryString"] = request.reserveQueryString();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasStatusCode()) {
    query["StatusCode"] = request.statusCode();
  }

  if (!!request.hasTargetUrl()) {
    query["TargetUrl"] = request.targetUrl();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRedirectRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRedirectRuleResponse>();
}

/**
 * @summary Update Redirect Rule
 *
 * @param request UpdateRedirectRuleRequest
 * @return UpdateRedirectRuleResponse
 */
UpdateRedirectRuleResponse Client::updateRedirectRule(const UpdateRedirectRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRedirectRuleWithOptions(request, runtime);
}

/**
 * @summary Modify Rewrite URL Rule
 *
 * @param request UpdateRewriteUrlRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRewriteUrlRuleResponse
 */
UpdateRewriteUrlRuleResponse Client::updateRewriteUrlRuleWithOptions(const UpdateRewriteUrlRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasQueryString()) {
    query["QueryString"] = request.queryString();
  }

  if (!!request.hasRewriteQueryStringType()) {
    query["RewriteQueryStringType"] = request.rewriteQueryStringType();
  }

  if (!!request.hasRewriteUriType()) {
    query["RewriteUriType"] = request.rewriteUriType();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasUri()) {
    query["Uri"] = request.uri();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRewriteUrlRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRewriteUrlRuleResponse>();
}

/**
 * @summary Modify Rewrite URL Rule
 *
 * @param request UpdateRewriteUrlRuleRequest
 * @return UpdateRewriteUrlRuleResponse
 */
UpdateRewriteUrlRuleResponse Client::updateRewriteUrlRule(const UpdateRewriteUrlRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRewriteUrlRuleWithOptions(request, runtime);
}

/**
 * @summary 修改Routine描述信息
 *
 * @param request UpdateRoutineConfigDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRoutineConfigDescriptionResponse
 */
UpdateRoutineConfigDescriptionResponse Client::updateRoutineConfigDescriptionWithOptions(const UpdateRoutineConfigDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateRoutineConfigDescription"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRoutineConfigDescriptionResponse>();
}

/**
 * @summary 修改Routine描述信息
 *
 * @param request UpdateRoutineConfigDescriptionRequest
 * @return UpdateRoutineConfigDescriptionResponse
 */
UpdateRoutineConfigDescriptionResponse Client::updateRoutineConfigDescription(const UpdateRoutineConfigDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRoutineConfigDescriptionWithOptions(request, runtime);
}

/**
 * @summary 修改边缘函数路由配置
 *
 * @param request UpdateRoutineRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRoutineRouteResponse
 */
UpdateRoutineRouteResponse Client::updateRoutineRouteWithOptions(const UpdateRoutineRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBypass()) {
    query["Bypass"] = request.bypass();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasFallback()) {
    query["Fallback"] = request.fallback();
  }

  if (!!request.hasRouteEnable()) {
    query["RouteEnable"] = request.routeEnable();
  }

  if (!!request.hasRouteName()) {
    query["RouteName"] = request.routeName();
  }

  if (!!request.hasRoutineName()) {
    query["RoutineName"] = request.routineName();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRoutineRoute"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRoutineRouteResponse>();
}

/**
 * @summary 修改边缘函数路由配置
 *
 * @param request UpdateRoutineRouteRequest
 * @return UpdateRoutineRouteResponse
 */
UpdateRoutineRouteResponse Client::updateRoutineRoute(const UpdateRoutineRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRoutineRouteWithOptions(request, runtime);
}

/**
 * @summary Updates a scheduled prefetch plan based on the plan ID.
 *
 * @param request UpdateScheduledPreloadExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateScheduledPreloadExecutionResponse
 */
UpdateScheduledPreloadExecutionResponse Client::updateScheduledPreloadExecutionWithOptions(const UpdateScheduledPreloadExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    body["Interval"] = request.interval();
  }

  if (!!request.hasSliceLen()) {
    body["SliceLen"] = request.sliceLen();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateScheduledPreloadExecution"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateScheduledPreloadExecutionResponse>();
}

/**
 * @summary Updates a scheduled prefetch plan based on the plan ID.
 *
 * @param request UpdateScheduledPreloadExecutionRequest
 * @return UpdateScheduledPreloadExecutionResponse
 */
UpdateScheduledPreloadExecutionResponse Client::updateScheduledPreloadExecution(const UpdateScheduledPreloadExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateScheduledPreloadExecutionWithOptions(request, runtime);
}

/**
 * @summary 修改站点放行搜索引擎爬虫配置
 *
 * @param request UpdateSeoBypassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSeoBypassResponse
 */
UpdateSeoBypassResponse Client::updateSeoBypassWithOptions(const UpdateSeoBypassRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSeoBypass"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSeoBypassResponse>();
}

/**
 * @summary 修改站点放行搜索引擎爬虫配置
 *
 * @param request UpdateSeoBypassRequest
 * @return UpdateSeoBypassResponse
 */
UpdateSeoBypassResponse Client::updateSeoBypass(const UpdateSeoBypassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSeoBypassWithOptions(request, runtime);
}

/**
 * @summary Converts the DNS setup option of a website.
 *
 * @description When you change the DNS setup of a website from NS to CNAME, note the following prerequisites:
 * *   The website only has proxied A/AAAA and CNAME records.
 * *   The DNS passthrough mode and custom nameserver features are not enabled for the website.
 *
 * @param request UpdateSiteAccessTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSiteAccessTypeResponse
 */
UpdateSiteAccessTypeResponse Client::updateSiteAccessTypeWithOptions(const UpdateSiteAccessTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessType()) {
    query["AccessType"] = request.accessType();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSiteAccessType"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSiteAccessTypeResponse>();
}

/**
 * @summary Converts the DNS setup option of a website.
 *
 * @description When you change the DNS setup of a website from NS to CNAME, note the following prerequisites:
 * *   The website only has proxied A/AAAA and CNAME records.
 * *   The DNS passthrough mode and custom nameserver features are not enabled for the website.
 *
 * @param request UpdateSiteAccessTypeRequest
 * @return UpdateSiteAccessTypeResponse
 */
UpdateSiteAccessTypeResponse Client::updateSiteAccessType(const UpdateSiteAccessTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSiteAccessTypeWithOptions(request, runtime);
}

/**
 * @summary Modifies the service location for a single website. This updates the acceleration configuration of the website to adapt to changes in traffic distribution, and improve user experience in specific regions.
 *
 * @param request UpdateSiteCoverageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSiteCoverageResponse
 */
UpdateSiteCoverageResponse Client::updateSiteCoverageWithOptions(const UpdateSiteCoverageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoverage()) {
    query["Coverage"] = request.coverage();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSiteCoverage"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSiteCoverageResponse>();
}

/**
 * @summary Modifies the service location for a single website. This updates the acceleration configuration of the website to adapt to changes in traffic distribution, and improve user experience in specific regions.
 *
 * @param request UpdateSiteCoverageRequest
 * @return UpdateSiteCoverageResponse
 */
UpdateSiteCoverageResponse Client::updateSiteCoverage(const UpdateSiteCoverageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSiteCoverageWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of custom request header, response header, and cookie fields that are used to capture logs of a website.
 *
 * @param tmpReq UpdateSiteCustomLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSiteCustomLogResponse
 */
UpdateSiteCustomLogResponse Client::updateSiteCustomLogWithOptions(const UpdateSiteCustomLogRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSiteCustomLogShrinkRequest request = UpdateSiteCustomLogShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCookies()) {
    request.setCookiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.cookies(), "Cookies", "json"));
  }

  if (!!tmpReq.hasRequestHeaders()) {
    request.setRequestHeadersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.requestHeaders(), "RequestHeaders", "json"));
  }

  if (!!tmpReq.hasResponseHeaders()) {
    request.setResponseHeadersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.responseHeaders(), "ResponseHeaders", "json"));
  }

  json body = {};
  if (!!request.hasCookiesShrink()) {
    body["Cookies"] = request.cookiesShrink();
  }

  if (!!request.hasRequestHeadersShrink()) {
    body["RequestHeaders"] = request.requestHeadersShrink();
  }

  if (!!request.hasResponseHeadersShrink()) {
    body["ResponseHeaders"] = request.responseHeadersShrink();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateSiteCustomLog"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSiteCustomLogResponse>();
}

/**
 * @summary Modifies the configuration of custom request header, response header, and cookie fields that are used to capture logs of a website.
 *
 * @param request UpdateSiteCustomLogRequest
 * @return UpdateSiteCustomLogResponse
 */
UpdateSiteCustomLogResponse Client::updateSiteCustomLog(const UpdateSiteCustomLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSiteCustomLogWithOptions(request, runtime);
}

/**
 * @summary Modifies a real-time log delivery task.
 *
 * @param request UpdateSiteDeliveryTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSiteDeliveryTaskResponse
 */
UpdateSiteDeliveryTaskResponse Client::updateSiteDeliveryTaskWithOptions(const UpdateSiteDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessType()) {
    body["BusinessType"] = request.businessType();
  }

  if (!!request.hasDiscardRate()) {
    body["DiscardRate"] = request.discardRate();
  }

  if (!!request.hasFieldName()) {
    body["FieldName"] = request.fieldName();
  }

  if (!!request.hasFilterVer()) {
    body["FilterVer"] = request.filterVer();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.siteId();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateSiteDeliveryTask"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSiteDeliveryTaskResponse>();
}

/**
 * @summary Modifies a real-time log delivery task.
 *
 * @param request UpdateSiteDeliveryTaskRequest
 * @return UpdateSiteDeliveryTaskResponse
 */
UpdateSiteDeliveryTaskResponse Client::updateSiteDeliveryTask(const UpdateSiteDeliveryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSiteDeliveryTaskWithOptions(request, runtime);
}

/**
 * @summary Changes the status of a real-time log delivery task.
 *
 * @param request UpdateSiteDeliveryTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSiteDeliveryTaskStatusResponse
 */
UpdateSiteDeliveryTaskStatusResponse Client::updateSiteDeliveryTaskStatusWithOptions(const UpdateSiteDeliveryTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSiteDeliveryTaskStatus"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSiteDeliveryTaskStatusResponse>();
}

/**
 * @summary Changes the status of a real-time log delivery task.
 *
 * @param request UpdateSiteDeliveryTaskStatusRequest
 * @return UpdateSiteDeliveryTaskStatusResponse
 */
UpdateSiteDeliveryTaskStatusResponse Client::updateSiteDeliveryTaskStatus(const UpdateSiteDeliveryTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSiteDeliveryTaskStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the site hold configuration of a website. After you enable site hold, other accounts cannot add your website domain or its subdomains to ESA.
 *
 * @param request UpdateSiteNameExclusiveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSiteNameExclusiveResponse
 */
UpdateSiteNameExclusiveResponse Client::updateSiteNameExclusiveWithOptions(const UpdateSiteNameExclusiveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSiteNameExclusive"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSiteNameExclusiveResponse>();
}

/**
 * @summary Modifies the site hold configuration of a website. After you enable site hold, other accounts cannot add your website domain or its subdomains to ESA.
 *
 * @param request UpdateSiteNameExclusiveRequest
 * @return UpdateSiteNameExclusiveResponse
 */
UpdateSiteNameExclusiveResponse Client::updateSiteNameExclusive(const UpdateSiteNameExclusiveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSiteNameExclusiveWithOptions(request, runtime);
}

/**
 * @summary Modifies the ESA proxy configuration of a website.
 *
 * @param request UpdateSitePauseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSitePauseResponse
 */
UpdateSitePauseResponse Client::updateSitePauseWithOptions(const UpdateSitePauseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPaused()) {
    query["Paused"] = request.paused();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSitePause"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSitePauseResponse>();
}

/**
 * @summary Modifies the ESA proxy configuration of a website.
 *
 * @param request UpdateSitePauseRequest
 * @return UpdateSitePauseResponse
 */
UpdateSitePauseResponse Client::updateSitePause(const UpdateSitePauseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSitePauseWithOptions(request, runtime);
}

/**
 * @summary Updates the custom nameserver names for a single website.
 *
 * @param request UpdateSiteVanityNSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSiteVanityNSResponse
 */
UpdateSiteVanityNSResponse Client::updateSiteVanityNSWithOptions(const UpdateSiteVanityNSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasVanityNSList()) {
    query["VanityNSList"] = request.vanityNSList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSiteVanityNS"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSiteVanityNSResponse>();
}

/**
 * @summary Updates the custom nameserver names for a single website.
 *
 * @param request UpdateSiteVanityNSRequest
 * @return UpdateSiteVanityNSResponse
 */
UpdateSiteVanityNSResponse Client::updateSiteVanityNS(const UpdateSiteVanityNSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSiteVanityNSWithOptions(request, runtime);
}

/**
 * @summary Modifies the tiered cache configuration of your website.
 *
 * @param request UpdateTieredCacheRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTieredCacheResponse
 */
UpdateTieredCacheResponse Client::updateTieredCacheWithOptions(const UpdateTieredCacheRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCacheArchitectureMode()) {
    query["CacheArchitectureMode"] = request.cacheArchitectureMode();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTieredCache"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTieredCacheResponse>();
}

/**
 * @summary Modifies the tiered cache configuration of your website.
 *
 * @param request UpdateTieredCacheRequest
 * @return UpdateTieredCacheResponse
 */
UpdateTieredCacheResponse Client::updateTieredCache(const UpdateTieredCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTieredCacheWithOptions(request, runtime);
}

/**
 * @summary Modify Transport Layer Application
 *
 * @param tmpReq UpdateTransportLayerApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTransportLayerApplicationResponse
 */
UpdateTransportLayerApplicationResponse Client::updateTransportLayerApplicationWithOptions(const UpdateTransportLayerApplicationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTransportLayerApplicationShrinkRequest request = UpdateTransportLayerApplicationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.rules(), "Rules", "json"));
  }

  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasCrossBorderOptimization()) {
    query["CrossBorderOptimization"] = request.crossBorderOptimization();
  }

  if (!!request.hasIpAccessRule()) {
    query["IpAccessRule"] = request.ipAccessRule();
  }

  if (!!request.hasIpv6()) {
    query["Ipv6"] = request.ipv6();
  }

  if (!!request.hasRulesShrink()) {
    query["Rules"] = request.rulesShrink();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasStaticIp()) {
    query["StaticIp"] = request.staticIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTransportLayerApplication"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTransportLayerApplicationResponse>();
}

/**
 * @summary Modify Transport Layer Application
 *
 * @param request UpdateTransportLayerApplicationRequest
 * @return UpdateTransportLayerApplicationResponse
 */
UpdateTransportLayerApplicationResponse Client::updateTransportLayerApplication(const UpdateTransportLayerApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTransportLayerApplicationWithOptions(request, runtime);
}

/**
 * @summary 更新网页监测配置
 *
 * @param request UpdateUrlObservationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUrlObservationResponse
 */
UpdateUrlObservationResponse Client::updateUrlObservationWithOptions(const UpdateUrlObservationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasSdkType()) {
    query["SdkType"] = request.sdkType();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUrlObservation"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUrlObservationResponse>();
}

/**
 * @summary 更新网页监测配置
 *
 * @param request UpdateUrlObservationRequest
 * @return UpdateUrlObservationResponse
 */
UpdateUrlObservationResponse Client::updateUrlObservation(const UpdateUrlObservationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUrlObservationWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a delivery task, including the task name, log field, log category, and discard rate.
 *
 * @param request UpdateUserDeliveryTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserDeliveryTaskResponse
 */
UpdateUserDeliveryTaskResponse Client::updateUserDeliveryTaskWithOptions(const UpdateUserDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessType()) {
    body["BusinessType"] = request.businessType();
  }

  if (!!request.hasDetails()) {
    body["Details"] = request.details();
  }

  if (!!request.hasDiscardRate()) {
    body["DiscardRate"] = request.discardRate();
  }

  if (!!request.hasFieldName()) {
    body["FieldName"] = request.fieldName();
  }

  if (!!request.hasFilterVer()) {
    body["FilterVer"] = request.filterVer();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.taskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateUserDeliveryTask"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserDeliveryTaskResponse>();
}

/**
 * @summary Modifies the configurations of a delivery task, including the task name, log field, log category, and discard rate.
 *
 * @param request UpdateUserDeliveryTaskRequest
 * @return UpdateUserDeliveryTaskResponse
 */
UpdateUserDeliveryTaskResponse Client::updateUserDeliveryTask(const UpdateUserDeliveryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserDeliveryTaskWithOptions(request, runtime);
}

/**
 * @summary Changes the status of a delivery task in your Alibaba Cloud account.
 *
 * @description ## [](#)
 * You can call this operation to enable or disable a delivery task by using TaskName and Method. The response includes the most recent status and operation result details of the task.
 *
 * @param request UpdateUserDeliveryTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserDeliveryTaskStatusResponse
 */
UpdateUserDeliveryTaskStatusResponse Client::updateUserDeliveryTaskStatusWithOptions(const UpdateUserDeliveryTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUserDeliveryTaskStatus"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserDeliveryTaskStatusResponse>();
}

/**
 * @summary Changes the status of a delivery task in your Alibaba Cloud account.
 *
 * @description ## [](#)
 * You can call this operation to enable or disable a delivery task by using TaskName and Method. The response includes the most recent status and operation result details of the task.
 *
 * @param request UpdateUserDeliveryTaskStatusRequest
 * @return UpdateUserDeliveryTaskStatusResponse
 */
UpdateUserDeliveryTaskStatusResponse Client::updateUserDeliveryTaskStatus(const UpdateUserDeliveryTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserDeliveryTaskStatusWithOptions(request, runtime);
}

/**
 * @summary 修改站点视频处理配置
 *
 * @param request UpdateVideoProcessingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVideoProcessingResponse
 */
UpdateVideoProcessingResponse Client::updateVideoProcessingWithOptions(const UpdateVideoProcessingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasFlvSeekEnd()) {
    query["FlvSeekEnd"] = request.flvSeekEnd();
  }

  if (!!request.hasFlvSeekStart()) {
    query["FlvSeekStart"] = request.flvSeekStart();
  }

  if (!!request.hasFlvVideoSeekMode()) {
    query["FlvVideoSeekMode"] = request.flvVideoSeekMode();
  }

  if (!!request.hasMp4SeekEnd()) {
    query["Mp4SeekEnd"] = request.mp4SeekEnd();
  }

  if (!!request.hasMp4SeekStart()) {
    query["Mp4SeekStart"] = request.mp4SeekStart();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.sequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasVideoSeekEnable()) {
    query["VideoSeekEnable"] = request.videoSeekEnable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateVideoProcessing"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVideoProcessingResponse>();
}

/**
 * @summary 修改站点视频处理配置
 *
 * @param request UpdateVideoProcessingRequest
 * @return UpdateVideoProcessingResponse
 */
UpdateVideoProcessingResponse Client::updateVideoProcessing(const UpdateVideoProcessingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVideoProcessingWithOptions(request, runtime);
}

/**
 * @summary Update WAF Rule Page
 *
 * @param tmpReq UpdateWafRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWafRuleResponse
 */
UpdateWafRuleResponse Client::updateWafRuleWithOptions(const UpdateWafRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateWafRuleShrinkRequest request = UpdateWafRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfig()) {
    request.setConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.config(), "Config", "json"));
  }

  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  json body = {};
  if (!!request.hasConfigShrink()) {
    body["Config"] = request.configShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasPosition()) {
    body["Position"] = request.position();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWafRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWafRuleResponse>();
}

/**
 * @summary Update WAF Rule Page
 *
 * @param request UpdateWafRuleRequest
 * @return UpdateWafRuleResponse
 */
UpdateWafRuleResponse Client::updateWafRule(const UpdateWafRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWafRuleWithOptions(request, runtime);
}

/**
 * @summary Update WAF Ruleset
 *
 * @param request UpdateWafRulesetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWafRulesetResponse
 */
UpdateWafRulesetResponse Client::updateWafRulesetWithOptions(const UpdateWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.siteVersion();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWafRuleset"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWafRulesetResponse>();
}

/**
 * @summary Update WAF Ruleset
 *
 * @param request UpdateWafRulesetRequest
 * @return UpdateWafRulesetResponse
 */
UpdateWafRulesetResponse Client::updateWafRuleset(const UpdateWafRulesetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWafRulesetWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a waiting room.
 *
 * @param tmpReq UpdateWaitingRoomRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWaitingRoomResponse
 */
UpdateWaitingRoomResponse Client::updateWaitingRoomWithOptions(const UpdateWaitingRoomRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateWaitingRoomShrinkRequest request = UpdateWaitingRoomShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHostNameAndPath()) {
    request.setHostNameAndPathShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.hostNameAndPath(), "HostNameAndPath", "json"));
  }

  json query = {};
  if (!!request.hasCookieName()) {
    query["CookieName"] = request.cookieName();
  }

  if (!!request.hasCustomPageHtml()) {
    query["CustomPageHtml"] = request.customPageHtml();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDisableSessionRenewalEnable()) {
    query["DisableSessionRenewalEnable"] = request.disableSessionRenewalEnable();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasHostNameAndPathShrink()) {
    query["HostNameAndPath"] = request.hostNameAndPathShrink();
  }

  if (!!request.hasJsonResponseEnable()) {
    query["JsonResponseEnable"] = request.jsonResponseEnable();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNewUsersPerMinute()) {
    query["NewUsersPerMinute"] = request.newUsersPerMinute();
  }

  if (!!request.hasQueueAllEnable()) {
    query["QueueAllEnable"] = request.queueAllEnable();
  }

  if (!!request.hasQueuingMethod()) {
    query["QueuingMethod"] = request.queuingMethod();
  }

  if (!!request.hasQueuingStatusCode()) {
    query["QueuingStatusCode"] = request.queuingStatusCode();
  }

  if (!!request.hasSessionDuration()) {
    query["SessionDuration"] = request.sessionDuration();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasTotalActiveUsers()) {
    query["TotalActiveUsers"] = request.totalActiveUsers();
  }

  if (!!request.hasWaitingRoomId()) {
    query["WaitingRoomId"] = request.waitingRoomId();
  }

  if (!!request.hasWaitingRoomType()) {
    query["WaitingRoomType"] = request.waitingRoomType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateWaitingRoom"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWaitingRoomResponse>();
}

/**
 * @summary Modifies the configurations of a waiting room.
 *
 * @param request UpdateWaitingRoomRequest
 * @return UpdateWaitingRoomResponse
 */
UpdateWaitingRoomResponse Client::updateWaitingRoom(const UpdateWaitingRoomRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWaitingRoomWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a waiting room event.
 *
 * @param request UpdateWaitingRoomEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWaitingRoomEventResponse
 */
UpdateWaitingRoomEventResponse Client::updateWaitingRoomEventWithOptions(const UpdateWaitingRoomEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomPageHtml()) {
    query["CustomPageHtml"] = request.customPageHtml();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDisableSessionRenewalEnable()) {
    query["DisableSessionRenewalEnable"] = request.disableSessionRenewalEnable();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.enable();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasJsonResponseEnable()) {
    query["JsonResponseEnable"] = request.jsonResponseEnable();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNewUsersPerMinute()) {
    query["NewUsersPerMinute"] = request.newUsersPerMinute();
  }

  if (!!request.hasPreQueueEnable()) {
    query["PreQueueEnable"] = request.preQueueEnable();
  }

  if (!!request.hasPreQueueStartTime()) {
    query["PreQueueStartTime"] = request.preQueueStartTime();
  }

  if (!!request.hasQueuingMethod()) {
    query["QueuingMethod"] = request.queuingMethod();
  }

  if (!!request.hasQueuingStatusCode()) {
    query["QueuingStatusCode"] = request.queuingStatusCode();
  }

  if (!!request.hasRandomPreQueueEnable()) {
    query["RandomPreQueueEnable"] = request.randomPreQueueEnable();
  }

  if (!!request.hasSessionDuration()) {
    query["SessionDuration"] = request.sessionDuration();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTotalActiveUsers()) {
    query["TotalActiveUsers"] = request.totalActiveUsers();
  }

  if (!!request.hasWaitingRoomEventId()) {
    query["WaitingRoomEventId"] = request.waitingRoomEventId();
  }

  if (!!request.hasWaitingRoomType()) {
    query["WaitingRoomType"] = request.waitingRoomType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateWaitingRoomEvent"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWaitingRoomEventResponse>();
}

/**
 * @summary Modifies the configurations of a waiting room event.
 *
 * @param request UpdateWaitingRoomEventRequest
 * @return UpdateWaitingRoomEventResponse
 */
UpdateWaitingRoomEventResponse Client::updateWaitingRoomEvent(const UpdateWaitingRoomEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWaitingRoomEventWithOptions(request, runtime);
}

/**
 * @summary Modify Waiting Room Rule
 *
 * @description This interface allows you to modify the rule settings of a specific waiting room in a site, including the rule name, enable status, and rule content, etc.
 *
 * @param request UpdateWaitingRoomRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWaitingRoomRuleResponse
 */
UpdateWaitingRoomRuleResponse Client::updateWaitingRoomRuleWithOptions(const UpdateWaitingRoomRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRule()) {
    query["Rule"] = request.rule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.ruleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasWaitingRoomRuleId()) {
    query["WaitingRoomRuleId"] = request.waitingRoomRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateWaitingRoomRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWaitingRoomRuleResponse>();
}

/**
 * @summary Modify Waiting Room Rule
 *
 * @description This interface allows you to modify the rule settings of a specific waiting room in a site, including the rule name, enable status, and rule content, etc.
 *
 * @param request UpdateWaitingRoomRuleRequest
 * @return UpdateWaitingRoomRuleResponse
 */
UpdateWaitingRoomRuleResponse Client::updateWaitingRoomRule(const UpdateWaitingRoomRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWaitingRoomRuleWithOptions(request, runtime);
}

/**
 * @summary Uploads a client certificate authority (CA) certificate.
 *
 * @param request UploadClientCaCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadClientCaCertificateResponse
 */
UploadClientCaCertificateResponse Client::uploadClientCaCertificateWithOptions(const UploadClientCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  json body = {};
  if (!!request.hasCertificate()) {
    body["Certificate"] = request.certificate();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UploadClientCaCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadClientCaCertificateResponse>();
}

/**
 * @summary Uploads a client certificate authority (CA) certificate.
 *
 * @param request UploadClientCaCertificateRequest
 * @return UploadClientCaCertificateResponse
 */
UploadClientCaCertificateResponse Client::uploadClientCaCertificate(const UploadClientCaCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadClientCaCertificateWithOptions(request, runtime);
}

/**
 * @summary Uploads the file that contains resources to be purged or prefetched.
 *
 * @description > 
 * *   The file can be up to 10 MB in size.
 *
 * @param request UploadFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadFileResponse
 */
UploadFileResponse Client::uploadFileWithOptions(const UploadFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasUploadTaskName()) {
    query["UploadTaskName"] = request.uploadTaskName();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadFile"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadFileResponse>();
}

/**
 * @summary Uploads the file that contains resources to be purged or prefetched.
 *
 * @description > 
 * *   The file can be up to 10 MB in size.
 *
 * @param request UploadFileRequest
 * @return UploadFileResponse
 */
UploadFileResponse Client::uploadFile(const UploadFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadFileWithOptions(request, runtime);
}

UploadFileResponse Client::uploadFileAdvance(const UploadFileAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "ESA"},
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
  UploadFileRequest uploadFileReq = UploadFileRequest();
  Utils::Utils::convert(request, uploadFileReq);
  if (!!request.hasUrlObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.urlObject()},
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
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader);
    uploadFileReq.setUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  UploadFileResponse uploadFileResp = uploadFileWithOptions(uploadFileReq, runtime);
  return uploadFileResp;
}

/**
 * @summary 上传源服务器CA证书
 *
 * @param request UploadOriginCaCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadOriginCaCertificateResponse
 */
UploadOriginCaCertificateResponse Client::uploadOriginCaCertificateWithOptions(const UploadOriginCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCertificate()) {
    body["Certificate"] = request.certificate();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UploadOriginCaCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadOriginCaCertificateResponse>();
}

/**
 * @summary 上传源服务器CA证书
 *
 * @param request UploadOriginCaCertificateRequest
 * @return UploadOriginCaCertificateResponse
 */
UploadOriginCaCertificateResponse Client::uploadOriginCaCertificate(const UploadOriginCaCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadOriginCaCertificateWithOptions(request, runtime);
}

/**
 * @summary 上传域名回源客户端证书
 *
 * @param request UploadOriginClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadOriginClientCertificateResponse
 */
UploadOriginClientCertificateResponse Client::uploadOriginClientCertificateWithOptions(const UploadOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  json body = {};
  if (!!request.hasCertificate()) {
    body["Certificate"] = request.certificate();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPrivateKey()) {
    body["PrivateKey"] = request.privateKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UploadOriginClientCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadOriginClientCertificateResponse>();
}

/**
 * @summary 上传域名回源客户端证书
 *
 * @param request UploadOriginClientCertificateRequest
 * @return UploadOriginClientCertificateResponse
 */
UploadOriginClientCertificateResponse Client::uploadOriginClientCertificate(const UploadOriginClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadOriginClientCertificateWithOptions(request, runtime);
}

/**
 * @summary Upload site origin client certificate
 *
 * @param request UploadSiteOriginClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadSiteOriginClientCertificateResponse
 */
UploadSiteOriginClientCertificateResponse Client::uploadSiteOriginClientCertificateWithOptions(const UploadSiteOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  json body = {};
  if (!!request.hasCertificate()) {
    body["Certificate"] = request.certificate();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPrivateKey()) {
    body["PrivateKey"] = request.privateKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UploadSiteOriginClientCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadSiteOriginClientCertificateResponse>();
}

/**
 * @summary Upload site origin client certificate
 *
 * @param request UploadSiteOriginClientCertificateRequest
 * @return UploadSiteOriginClientCertificateResponse
 */
UploadSiteOriginClientCertificateResponse Client::uploadSiteOriginClientCertificate(const UploadSiteOriginClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadSiteOriginClientCertificateWithOptions(request, runtime);
}

/**
 * @summary Verifies the ownership of a website domain. Websites that pass the verification are automatically activated.
 *
 * @description 1.  For a website connected by using NS setup, this operation verifies whether the nameservers of the website are the nameservers assigned by Alibaba Cloud.
 * 2.  For a website connected by using CNAME setup, this operation verifies whether the website has a TXT record whose hostname is  _esaauth.[websiteDomainName] and record value is the value of VerifyCode to the DNS records of your domain. You can see the VerifyCode field in the site information.
 *
 * @param request VerifySiteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifySiteResponse
 */
VerifySiteResponse Client::verifySiteWithOptions(const VerifySiteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.siteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifySite"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifySiteResponse>();
}

/**
 * @summary Verifies the ownership of a website domain. Websites that pass the verification are automatically activated.
 *
 * @description 1.  For a website connected by using NS setup, this operation verifies whether the nameservers of the website are the nameservers assigned by Alibaba Cloud.
 * 2.  For a website connected by using CNAME setup, this operation verifies whether the website has a TXT record whose hostname is  _esaauth.[websiteDomainName] and record value is the value of VerifyCode to the DNS records of your domain. You can see the VerifyCode field in the site information.
 *
 * @param request VerifySiteRequest
 * @return VerifySiteResponse
 */
VerifySiteResponse Client::verifySite(const VerifySiteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifySiteWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace ESA20240910