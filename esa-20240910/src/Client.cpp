#include <darabonba/Core.hpp>
#include <alibabacloud/ESA20240910.hpp>
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
#include <alibabacloud/credentials/Client.hpp>
#include <darabonba/http/FileField.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace Darabonba::Http;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Exceptions;
using namespace AlibabaCloud::ESA20240910::Models;
using namespace AlibabaCloud::Credentials::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace ESA20240910
{

AlibabaCloud::ESA20240910::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hangzhou" , "esa.cn-hangzhou.aliyuncs.com"},
    {"ap-southeast-1" , "esa.ap-southeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("esa", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


Darabonba::Json Client::_postOSSObject(const string &bucketName, const Darabonba::Json &form, const Darabonba::RuntimeOptions &runtime) {
  Darabonba::RuntimeOptions runtime_(json({
    {"key", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.getKey(), _key))},
    {"cert", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.getCert(), _cert))},
    {"ca", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.getCa(), _ca))},
    {"readTimeout", Darabonba::Convert::int64Val(Darabonba::defaultVal(runtime.getReadTimeout(), _readTimeout))},
    {"connectTimeout", Darabonba::Convert::int64Val(Darabonba::defaultVal(runtime.getConnectTimeout(), _connectTimeout))},
    {"httpProxy", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.getHttpProxy(), _httpProxy))},
    {"httpsProxy", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.getHttpsProxy(), _httpsProxy))},
    {"noProxy", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.getNoProxy(), _noProxy))},
    {"socks5Proxy", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.getSocks5Proxy(), _socks5Proxy))},
    {"socks5NetWork", Darabonba::Convert::stringVal(Darabonba::defaultVal(runtime.getSocks5NetWork(), _socks5NetWork))},
    {"maxIdleConns", Darabonba::Convert::int64Val(Darabonba::defaultVal(runtime.getMaxIdleConns(), _maxIdleConns))},
    {"retryOptions", _retryOptions},
    {"ignoreSSL", Darabonba::Convert::boolVal(Darabonba::defaultVal(runtime.getIgnoreSSL(), false))},
    {"tlsMinVersion", _tlsMinVersion}
    }));

  std::exception_ptr _lastExceptionPtr;
  int _retriesAttempted = 0;
  Darabonba::Policy::RetryPolicyContext _context = json({
    {"retriesAttempted" , _retriesAttempted}
  });
  while (Darabonba::allowRetry(runtime_.getRetryOptions(), _context)) {
    if (_retriesAttempted > 0) {
      int _backoffTime = Darabonba::getBackoffTime(runtime_.getRetryOptions(), _context);
      if (_backoffTime > 0) {
        Darabonba::sleep(_backoffTime);
      }
    }
    _retriesAttempted++;
    try {
      Darabonba::Http::Request request_ = Darabonba::Http::Request();
      string boundary = Darabonba::Http::Form::getBoundary();
      string tmp = Darabonba::Convert::stringVal(form.value("host", Darabonba::Json()));
      string host = DARA_STRING_TEMPLATE("" , bucketName , "." , tmp);
      request_.setProtocol("HTTPS");
      request_.setMethod("POST");
      request_.setPathname(DARA_STRING_TEMPLATE("/"));
      request_.setHeaders(json({
        {"host" , host},
        {"date" , Utils::Utils::getDateUTCString()},
        {"user-agent" , Utils::Utils::getUserAgent("")}
      }).get<map<string, string>>());
      request_.getHeaders()["content-type"] = DARA_STRING_TEMPLATE("multipart/form-data; boundary=" , boundary);
      request_.setBody(Darabonba::Http::Form::toFileForm(form, boundary));
      auto futureResp_ = Darabonba::Core::doAction(request_, runtime_);
      shared_ptr<Darabonba::Http::MCurlResponse> response_ = futureResp_.get();

      json respMap = nullptr;
      string bodyStr = Darabonba::Stream::readAsString(response_->getBody());
      if ((response_->getStatusCode() >= 400) && (response_->getStatusCode() < 600)) {
        respMap = Darabonba::XML::parseXml(bodyStr, nullptr);
        json err = json(respMap.value("Error", Darabonba::Json()));
        throw ClientException(json({
          {"code" , Darabonba::Convert::stringVal(err.value("Code", Darabonba::Json()))},
          {"message" , Darabonba::Convert::stringVal(err.value("Message", Darabonba::Json()))},
          {"data" , json({
            {"httpCode" , response_->getStatusCode()},
            {"requestId" , Darabonba::Convert::stringVal(err.value("RequestId", Darabonba::Json()))},
            {"hostId" , Darabonba::Convert::stringVal(err.value("HostId", Darabonba::Json()))}
          })}
        }));
      }

      respMap = Darabonba::XML::parseXml(bodyStr, nullptr);
      return Darabonba::Core::merge(respMap
      );
    } catch (const Darabonba::DaraException& ex) {
      _lastExceptionPtr = std::current_exception();
      _context = Darabonba::Policy::RetryPolicyContext(json({
        {"retriesAttempted" , _retriesAttempted},
        {"exception" , ex},
      }));
      continue;
    }
  }

  std::rethrow_exception(_lastExceptionPtr);
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
 * @summary Enables version management. This allows a site to support multiple configuration versions and multiple deployment environments, providing more flexible management of site traffic and configuration.
 *
 * @description Prerequisites for enabling site version management:
 * 1. The site plan must include the version management quota item `version_management_available`, and its value must be `true`.
 *
 * @param request ActivateVersionManagementRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActivateVersionManagementResponse
 */
ActivateVersionManagementResponse Client::activateVersionManagementWithOptions(const ActivateVersionManagementRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Enables version management. This allows a site to support multiple configuration versions and multiple deployment environments, providing more flexible management of site traffic and configuration.
 *
 * @description Prerequisites for enabling site version management:
 * 1. The site plan must include the version management quota item `version_management_available`, and its value must be `true`.
 *
 * @param request ActivateVersionManagementRequest
 * @return ActivateVersionManagementResponse
 */
ActivateVersionManagementResponse Client::activateVersionManagement(const ActivateVersionManagementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activateVersionManagementWithOptions(request, runtime);
}

/**
 * @summary Applies for a free certificate.
 *
 * @param request ApplyCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyCertificateResponse
 */
ApplyCertificateResponse Client::applyCertificateWithOptions(const ApplyCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomains()) {
    query["Domains"] = request.getDomains();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyCertificateResponse>();
}

/**
 * @summary Applies for a free certificate.
 *
 * @param request ApplyCertificateRequest
 * @return ApplyCertificateResponse
 */
ApplyCertificateResponse Client::applyCertificate(const ApplyCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyCertificateWithOptions(request, runtime);
}

/**
 * @summary Requests a new free certificate for a Software as a Service (SaaS) domain name. Call this operation only if the previous certificate request failed, or the current certificate is about to expire or has expired.
 *
 * @param request ApplyCustomHostnameCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyCustomHostnameCertificateResponse
 */
ApplyCustomHostnameCertificateResponse Client::applyCustomHostnameCertificateWithOptions(const ApplyCustomHostnameCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostnameId()) {
    query["HostnameId"] = request.getHostnameId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyCustomHostnameCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyCustomHostnameCertificateResponse>();
}

/**
 * @summary Requests a new free certificate for a Software as a Service (SaaS) domain name. Call this operation only if the previous certificate request failed, or the current certificate is about to expire or has expired.
 *
 * @param request ApplyCustomHostnameCertificateRequest
 * @return ApplyCustomHostnameCertificateResponse
 */
ApplyCustomHostnameCertificateResponse Client::applyCustomHostnameCertificate(const ApplyCustomHostnameCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyCustomHostnameCertificateWithOptions(request, runtime);
}

/**
 * @summary Creates multiple DNS records in a batch. Multiple record types are supported.
 *
 * @description This API operation allows you to create or update multiple DNS records at a time. It is suitable for scenarios that require managing a large number of DNS configurations. Supported record types include but are not limited to A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, and URI. Detailed configuration items are provided to meet specific requirements, such as Priority, Flag, Tag, and Weight. In addition, for specific record types such as CERT, SSHFP, SMIMEA, and TLSA, advanced settings such as certificate information and encryption algorithms are supported.
 * Successfully and unsuccessfully processed records are listed separately in the response, so that you can identify which records are processed, which records failed, and the failure reasons.
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
    request.setRecordListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRecordList(), "RecordList", "json"));
  }

  json query = {};
  if (!!request.hasRecordListShrink()) {
    query["RecordList"] = request.getRecordListShrink();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Creates multiple DNS records in a batch. Multiple record types are supported.
 *
 * @description This API operation allows you to create or update multiple DNS records at a time. It is suitable for scenarios that require managing a large number of DNS configurations. Supported record types include but are not limited to A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, and URI. Detailed configuration items are provided to meet specific requirements, such as Priority, Flag, Tag, and Weight. In addition, for specific record types such as CERT, SSHFP, SMIMEA, and TLSA, advanced settings such as certificate information and encryption algorithms are supported.
 * Successfully and unsuccessfully processed records are listed separately in the response, so that you can identify which records are processed, which records failed, and the failure reasons.
 *
 * @param request BatchCreateRecordsRequest
 * @return BatchCreateRecordsResponse
 */
BatchCreateRecordsResponse Client::batchCreateRecords(const BatchCreateRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCreateRecordsWithOptions(request, runtime);
}

/**
 * @summary This operation creates multiple WAF rules and configures their shared settings in a single request.
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
    request.setConfigsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfigs(), "Configs", "json"));
  }

  if (!!tmpReq.hasShared()) {
    request.setSharedShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getShared(), "Shared", "json"));
  }

  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  json body = {};
  if (!!request.hasConfigsShrink()) {
    body["Configs"] = request.getConfigsShrink();
  }

  if (!!request.hasPhase()) {
    body["Phase"] = request.getPhase();
  }

  if (!!request.hasRulesetId()) {
    body["RulesetId"] = request.getRulesetId();
  }

  if (!!request.hasSharedShrink()) {
    body["Shared"] = request.getSharedShrink();
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
 * @summary This operation creates multiple WAF rules and configures their shared settings in a single request.
 *
 * @param request BatchCreateWafRulesRequest
 * @return BatchCreateWafRulesResponse
 */
BatchCreateWafRulesResponse Client::batchCreateWafRules(const BatchCreateWafRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCreateWafRulesWithOptions(request, runtime);
}

/**
 * @summary Delete key-value pairs in bulk from a specified namespace.
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
    request.setKeysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKeys(), "Keys", "json"));
  }

  json query = {};
  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  json body = {};
  if (!!request.hasKeysShrink()) {
    body["Keys"] = request.getKeysShrink();
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
 * @summary Delete key-value pairs in bulk from a specified namespace.
 *
 * @param request BatchDeleteKvRequest
 * @return BatchDeleteKvResponse
 */
BatchDeleteKvResponse Client::batchDeleteKv(const BatchDeleteKvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteKvWithOptions(request, runtime);
}

/**
 * @summary Batch deletes key-value pairs from a specified KV namespace based on a specified list of key names. The maximum request body size is 100 MB.
 *
 * @description >Notice: 
 * Prerequisites for non-SDK calls: (1) You must have an OSS bucket with read and write permissions. (2) You must be able to generate a pre-signed HTTPS GET URL by using the OSS SDK or API. (3) The uploaded JSON file must use the same format as the BatchDeleteKv request body..
 * This operation provides the same functionality as [BatchDeleteKv](https://help.aliyun.com/document_detail/2850204.html), but allows a larger request body. If the request body is small, use the [BatchDeleteKv](https://help.aliyun.com/document_detail/2850204.html) operation to reduce server-side processing time. This operation must be called by using an SDK. For example, when using the Golang SDK, call the BatchDeleteKvWithHighCapacityAdvance function.
 * ```
 * func TestBatchDeleteWithHighCapacity() error {
 * 	// Initialize the configuration
 * 	cfg := new(openapi.Config)
 * 	cfg.SetAccessKeyId("xxxxxxxxx")
 * 	cfg.SetAccessKeySecret("xxxxxxxxxx")
 * 	cli, err := NewClient(cfg)
 * 	if err != nil {
 * 		return err
 * 	}
 * 	runtime := &util.RuntimeOptions{}.
 * 	// Construct the batch delete request for key-value pairs
 * 	namespace := "test_batch_put"
 * 	rawReq := BatchDeleteKvRequest{
 * 		Namespace: &namespace,
 * 	}
 * 	for i := 0; i < 10000; i++ {
 * 		key := fmt.Sprintf("test_key_%d", i)
 * 		rawReq.Keys = append(rawReq.Keys, &key)
 * 	}
 * 	payload, err := json.Marshal(rawReq)
 * 	if err != nil {
 * 		return err
 * 	}.
 * 	// If the payload is larger than 2 MB, call the high-capacity operation to delete the key-value pairs
 * 	reqHighCapacity := BatchDeleteKvWithHighCapacityAdvanceRequest{
 * 		Namespace: &namespace,
 * 		UrlObject: bytes.NewReader(payload),
 * 	}
 * 	resp, err := cli.BatchDeleteKvWithHighCapacityAdvance(&reqHighCapacity, runtime)
 * 	if err != nil {
 * 		return err
 * 	}
 * 	return nil
 * }.
 *
 * @param request BatchDeleteKvWithHighCapacityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteKvWithHighCapacityResponse
 */
BatchDeleteKvWithHighCapacityResponse Client::batchDeleteKvWithHighCapacityWithOptions(const BatchDeleteKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
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
 * @summary Batch deletes key-value pairs from a specified KV namespace based on a specified list of key names. The maximum request body size is 100 MB.
 *
 * @description >Notice: 
 * Prerequisites for non-SDK calls: (1) You must have an OSS bucket with read and write permissions. (2) You must be able to generate a pre-signed HTTPS GET URL by using the OSS SDK or API. (3) The uploaded JSON file must use the same format as the BatchDeleteKv request body..
 * This operation provides the same functionality as [BatchDeleteKv](https://help.aliyun.com/document_detail/2850204.html), but allows a larger request body. If the request body is small, use the [BatchDeleteKv](https://help.aliyun.com/document_detail/2850204.html) operation to reduce server-side processing time. This operation must be called by using an SDK. For example, when using the Golang SDK, call the BatchDeleteKvWithHighCapacityAdvance function.
 * ```
 * func TestBatchDeleteWithHighCapacity() error {
 * 	// Initialize the configuration
 * 	cfg := new(openapi.Config)
 * 	cfg.SetAccessKeyId("xxxxxxxxx")
 * 	cfg.SetAccessKeySecret("xxxxxxxxxx")
 * 	cli, err := NewClient(cfg)
 * 	if err != nil {
 * 		return err
 * 	}
 * 	runtime := &util.RuntimeOptions{}.
 * 	// Construct the batch delete request for key-value pairs
 * 	namespace := "test_batch_put"
 * 	rawReq := BatchDeleteKvRequest{
 * 		Namespace: &namespace,
 * 	}
 * 	for i := 0; i < 10000; i++ {
 * 		key := fmt.Sprintf("test_key_%d", i)
 * 		rawReq.Keys = append(rawReq.Keys, &key)
 * 	}
 * 	payload, err := json.Marshal(rawReq)
 * 	if err != nil {
 * 		return err
 * 	}.
 * 	// If the payload is larger than 2 MB, call the high-capacity operation to delete the key-value pairs
 * 	reqHighCapacity := BatchDeleteKvWithHighCapacityAdvanceRequest{
 * 		Namespace: &namespace,
 * 		UrlObject: bytes.NewReader(payload),
 * 	}
 * 	resp, err := cli.BatchDeleteKvWithHighCapacityAdvance(&reqHighCapacity, runtime)
 * 	if err != nil {
 * 		return err
 * 	}
 * 	return nil
 * }.
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
  string accessKeyId = credentialModel.getAccessKeyId();
  string accessKeySecret = credentialModel.getAccessKeySecret();
  string securityToken = credentialModel.getSecurityToken();
  string credentialType = credentialModel.getType();
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
      {"content" , request.getUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType)},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    batchDeleteKvWithHighCapacityReq.setUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  BatchDeleteKvWithHighCapacityResponse batchDeleteKvWithHighCapacityResp = batchDeleteKvWithHighCapacityWithOptions(batchDeleteKvWithHighCapacityReq, runtime);
  return batchDeleteKvWithHighCapacityResp;
}

/**
 * @summary Retrieves match fields for a batch of expressions.
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
    request.setExpressionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExpressions(), "Expressions", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPlanNameEn()) {
    query["PlanNameEn"] = request.getPlanNameEn();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  json body = {};
  if (!!request.hasExpressionsShrink()) {
    body["Expressions"] = request.getExpressionsShrink();
  }

  if (!!request.hasKind()) {
    body["Kind"] = request.getKind();
  }

  if (!!request.hasPhase()) {
    body["Phase"] = request.getPhase();
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
 * @summary Retrieves match fields for a batch of expressions.
 *
 * @param request BatchGetExpressionFieldsRequest
 * @return BatchGetExpressionFieldsResponse
 */
BatchGetExpressionFieldsResponse Client::batchGetExpressionFields(const BatchGetExpressionFieldsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetExpressionFieldsWithOptions(request, runtime);
}

/**
 * @summary Sets multiple key-value pairs in a specified namespace.
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
    request.setKvListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKvList(), "KvList", "json"));
  }

  json query = {};
  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  json body = {};
  if (!!request.hasKvListShrink()) {
    body["KvList"] = request.getKvListShrink();
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
 * @summary Sets multiple key-value pairs in a specified namespace.
 *
 * @param request BatchPutKvRequest
 * @return BatchPutKvResponse
 */
BatchPutKvResponse Client::batchPutKv(const BatchPutKvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchPutKvWithOptions(request, runtime);
}

/**
 * @summary Batch sets key-value pairs in a specified KV namespace based on a specified list of key names. The maximum request body size is 100 MB.
 *
 * @description This operation provides the same functionality as [BatchPutKv](https://help.aliyun.com/document_detail/2850203.html), but allows larger request bodies. If the request body is small, use the [BatchPutKv](https://help.aliyun.com/document_detail/2850203.html) operation to reduce server-side processing time. This operation must be called by using an SDK. For example, when using the Golang SDK, call the BatchPutKvWithHighCapacityAdvance function.
 * ```
 * func TestBatchPutKvWithHighCapacity() error {
 * 	// Initialize the configuration
 * 	cfg := new(openapi.Config)
 * 	cfg.SetAccessKeyId("xxxxxxxxx")
 * 	cfg.SetAccessKeySecret("xxxxxxxxxx")
 * 	cli, err := NewClient(cfg)
 * 	if err != nil {
 * 		return err
 * 	}
 * 	runtime := &util.RuntimeOptions{}.
 * 	// Construct the key-value pairs for batch upload
 * 	namespace := "test_batch_put"
 * 	numKv := 10000
 * 	kvList := make([]*BatchPutKvRequestKvList, numKv)
 * 	test_value := strings.Repeat("a", 10*1024)
 * 	for i := 0; i < numKv; i++ {
 * 		key := fmt.Sprintf("test_key_%d", i)
 * 		value := test_value
 * 		kvList[i] = &BatchPutKvRequestKvList{
 * 			Key:   &key,
 * 			Value: &value,
 * 		}
 * 	}
 * 	rawReq := BatchPutKvRequest{
 * 		Namespace: &namespace,
 * 		KvList:    kvList,
 * 	}.
 * 	payload, err := json.Marshal(rawReq)
 * 	if err != nil {
 * 		return err
 * 	}.
 * 	// If the payload is larger than 2 MB, call the high-capacity operation to upload it
 * 	reqHighCapacity := BatchPutKvWithHighCapacityAdvanceRequest{
 * 		Namespace: &namespace,
 * 		UrlObject: bytes.NewReader(payload),
 * 	}
 * 	resp, err := cli.BatchPutKvWithHighCapacityAdvance(&reqHighCapacity, runtime)
 * 	if err != nil {
 * 		return err
 * 	}
 * 	return nil
 * }.
 *
 * @param request BatchPutKvWithHighCapacityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchPutKvWithHighCapacityResponse
 */
BatchPutKvWithHighCapacityResponse Client::batchPutKvWithHighCapacityWithOptions(const BatchPutKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
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
 * @summary Batch sets key-value pairs in a specified KV namespace based on a specified list of key names. The maximum request body size is 100 MB.
 *
 * @description This operation provides the same functionality as [BatchPutKv](https://help.aliyun.com/document_detail/2850203.html), but allows larger request bodies. If the request body is small, use the [BatchPutKv](https://help.aliyun.com/document_detail/2850203.html) operation to reduce server-side processing time. This operation must be called by using an SDK. For example, when using the Golang SDK, call the BatchPutKvWithHighCapacityAdvance function.
 * ```
 * func TestBatchPutKvWithHighCapacity() error {
 * 	// Initialize the configuration
 * 	cfg := new(openapi.Config)
 * 	cfg.SetAccessKeyId("xxxxxxxxx")
 * 	cfg.SetAccessKeySecret("xxxxxxxxxx")
 * 	cli, err := NewClient(cfg)
 * 	if err != nil {
 * 		return err
 * 	}
 * 	runtime := &util.RuntimeOptions{}.
 * 	// Construct the key-value pairs for batch upload
 * 	namespace := "test_batch_put"
 * 	numKv := 10000
 * 	kvList := make([]*BatchPutKvRequestKvList, numKv)
 * 	test_value := strings.Repeat("a", 10*1024)
 * 	for i := 0; i < numKv; i++ {
 * 		key := fmt.Sprintf("test_key_%d", i)
 * 		value := test_value
 * 		kvList[i] = &BatchPutKvRequestKvList{
 * 			Key:   &key,
 * 			Value: &value,
 * 		}
 * 	}
 * 	rawReq := BatchPutKvRequest{
 * 		Namespace: &namespace,
 * 		KvList:    kvList,
 * 	}.
 * 	payload, err := json.Marshal(rawReq)
 * 	if err != nil {
 * 		return err
 * 	}.
 * 	// If the payload is larger than 2 MB, call the high-capacity operation to upload it
 * 	reqHighCapacity := BatchPutKvWithHighCapacityAdvanceRequest{
 * 		Namespace: &namespace,
 * 		UrlObject: bytes.NewReader(payload),
 * 	}
 * 	resp, err := cli.BatchPutKvWithHighCapacityAdvance(&reqHighCapacity, runtime)
 * 	if err != nil {
 * 		return err
 * 	}
 * 	return nil
 * }.
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
  string accessKeyId = credentialModel.getAccessKeyId();
  string accessKeySecret = credentialModel.getAccessKeySecret();
  string securityToken = credentialModel.getSecurityToken();
  string credentialType = credentialModel.getType();
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
      {"content" , request.getUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType)},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    batchPutKvWithHighCapacityReq.setUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  BatchPutKvWithHighCapacityResponse batchPutKvWithHighCapacityResp = batchPutKvWithHighCapacityWithOptions(batchPutKvWithHighCapacityReq, runtime);
  return batchPutKvWithHighCapacityResp;
}

/**
 * @summary Updates the configurations of multiple rules in a specified WAF ruleset.
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
    request.setConfigsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfigs(), "Configs", "json"));
  }

  if (!!tmpReq.hasShared()) {
    request.setSharedShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getShared(), "Shared", "json"));
  }

  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  json body = {};
  if (!!request.hasConfigsShrink()) {
    body["Configs"] = request.getConfigsShrink();
  }

  if (!!request.hasPhase()) {
    body["Phase"] = request.getPhase();
  }

  if (!!request.hasRulesetId()) {
    body["RulesetId"] = request.getRulesetId();
  }

  if (!!request.hasSharedShrink()) {
    body["Shared"] = request.getSharedShrink();
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
 * @summary Updates the configurations of multiple rules in a specified WAF ruleset.
 *
 * @param request BatchUpdateWafRulesRequest
 * @return BatchUpdateWafRulesResponse
 */
BatchUpdateWafRulesResponse Client::batchUpdateWafRules(const BatchUpdateWafRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchUpdateWafRulesWithOptions(request, runtime);
}

/**
 * @summary Blocks access to specified URLs.
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
    request.setContentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContent(), "Content", "json"));
  }

  json query = {};
  if (!!request.hasContentShrink()) {
    query["Content"] = request.getContentShrink();
  }

  if (!!request.hasMaxage()) {
    query["Maxage"] = request.getMaxage();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Blocks access to specified URLs.
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
    query["SiteName"] = request.getSiteName();
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
 * @summary Submits the test version (unstable) code of an Edge Routine and generates a production version.
 *
 * @param request CommitRoutineStagingCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CommitRoutineStagingCodeResponse
 */
CommitRoutineStagingCodeResponse Client::commitRoutineStagingCodeWithOptions(const CommitRoutineStagingCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCodeDescription()) {
    body["CodeDescription"] = request.getCodeDescription();
  }

  if (!!request.hasDeployEnv()) {
    body["DeployEnv"] = request.getDeployEnv();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
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
 * @summary Submits the test version (unstable) code of an Edge Routine and generates a production version.
 *
 * @param request CommitRoutineStagingCodeRequest
 * @return CommitRoutineStagingCodeResponse
 */
CommitRoutineStagingCodeResponse Client::commitRoutineStagingCode(const CommitRoutineStagingCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return commitRoutineStagingCodeWithOptions(request, runtime);
}

/**
 * @summary Create a Site Cache Configuration.
 *
 * @param request CreateCacheRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCacheRuleResponse
 */
CreateCacheRuleResponse Client::createCacheRuleWithOptions(const CreateCacheRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdditionalCacheablePorts()) {
    query["AdditionalCacheablePorts"] = request.getAdditionalCacheablePorts();
  }

  if (!!request.hasBrowserCacheMode()) {
    query["BrowserCacheMode"] = request.getBrowserCacheMode();
  }

  if (!!request.hasBrowserCacheTtl()) {
    query["BrowserCacheTtl"] = request.getBrowserCacheTtl();
  }

  if (!!request.hasBypassCache()) {
    query["BypassCache"] = request.getBypassCache();
  }

  if (!!request.hasCacheDeceptionArmor()) {
    query["CacheDeceptionArmor"] = request.getCacheDeceptionArmor();
  }

  if (!!request.hasCacheReserveEligibility()) {
    query["CacheReserveEligibility"] = request.getCacheReserveEligibility();
  }

  if (!!request.hasCheckPresenceCookie()) {
    query["CheckPresenceCookie"] = request.getCheckPresenceCookie();
  }

  if (!!request.hasCheckPresenceHeader()) {
    query["CheckPresenceHeader"] = request.getCheckPresenceHeader();
  }

  if (!!request.hasEdgeCacheMode()) {
    query["EdgeCacheMode"] = request.getEdgeCacheMode();
  }

  if (!!request.hasEdgeCacheTtl()) {
    query["EdgeCacheTtl"] = request.getEdgeCacheTtl();
  }

  if (!!request.hasEdgeStatusCodeCacheTtl()) {
    query["EdgeStatusCodeCacheTtl"] = request.getEdgeStatusCodeCacheTtl();
  }

  if (!!request.hasIncludeCookie()) {
    query["IncludeCookie"] = request.getIncludeCookie();
  }

  if (!!request.hasIncludeHeader()) {
    query["IncludeHeader"] = request.getIncludeHeader();
  }

  if (!!request.hasPostBodyCacheKey()) {
    query["PostBodyCacheKey"] = request.getPostBodyCacheKey();
  }

  if (!!request.hasPostBodySizeLimit()) {
    query["PostBodySizeLimit"] = request.getPostBodySizeLimit();
  }

  if (!!request.hasPostCache()) {
    query["PostCache"] = request.getPostCache();
  }

  if (!!request.hasQueryString()) {
    query["QueryString"] = request.getQueryString();
  }

  if (!!request.hasQueryStringMode()) {
    query["QueryStringMode"] = request.getQueryStringMode();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasServeStale()) {
    query["ServeStale"] = request.getServeStale();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  if (!!request.hasSortQueryStringForCache()) {
    query["SortQueryStringForCache"] = request.getSortQueryStringForCache();
  }

  if (!!request.hasUserDeviceType()) {
    query["UserDeviceType"] = request.getUserDeviceType();
  }

  if (!!request.hasUserGeo()) {
    query["UserGeo"] = request.getUserGeo();
  }

  if (!!request.hasUserLanguage()) {
    query["UserLanguage"] = request.getUserLanguage();
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
 * @summary Create a Site Cache Configuration.
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
    query["SiteId"] = request.getSiteId();
  }

  json body = {};
  if (!!request.hasCSR()) {
    body["CSR"] = request.getCSR();
  }

  if (!!request.hasPkeyType()) {
    body["PkeyType"] = request.getPkeyType();
  }

  if (!!request.hasValidityDays()) {
    body["ValidityDays"] = request.getValidityDays();
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
 * @summary Creates a compression rule configuration for a site.
 *
 * @param request CreateCompressionRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCompressionRuleResponse
 */
CreateCompressionRuleResponse Client::createCompressionRuleWithOptions(const CreateCompressionRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrotli()) {
    query["Brotli"] = request.getBrotli();
  }

  if (!!request.hasGzip()) {
    query["Gzip"] = request.getGzip();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  if (!!request.hasZstd()) {
    query["Zstd"] = request.getZstd();
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
 * @summary Creates a compression rule configuration for a site.
 *
 * @param request CreateCompressionRuleRequest
 * @return CreateCompressionRuleResponse
 */
CreateCompressionRuleResponse Client::createCompressionRule(const CreateCompressionRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCompressionRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a SaaS domain name for a site.
 *
 * @description - If the acceleration area is set to the Chinese mainland only or global, the site domain name must have a valid China Internet Content Provider (ICP) filing.
 * - Each user can invoke this operation up to 100 times per hour.
 *
 * @param request CreateCustomHostnameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomHostnameResponse
 */
CreateCustomHostnameResponse Client::createCustomHostnameWithOptions(const CreateCustomHostnameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCasId()) {
    query["CasId"] = request.getCasId();
  }

  if (!!request.hasCasRegion()) {
    query["CasRegion"] = request.getCasRegion();
  }

  if (!!request.hasCertType()) {
    query["CertType"] = request.getCertType();
  }

  if (!!request.hasCertificate()) {
    query["Certificate"] = request.getCertificate();
  }

  if (!!request.hasHostname()) {
    query["Hostname"] = request.getHostname();
  }

  if (!!request.hasPrivateKey()) {
    query["PrivateKey"] = request.getPrivateKey();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSslFlag()) {
    query["SslFlag"] = request.getSslFlag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomHostname"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomHostnameResponse>();
}

/**
 * @summary Creates a SaaS domain name for a site.
 *
 * @description - If the acceleration area is set to the Chinese mainland only or global, the site domain name must have a valid China Internet Content Provider (ICP) filing.
 * - Each user can invoke this operation up to 100 times per hour.
 *
 * @param request CreateCustomHostnameRequest
 * @return CreateCustomHostnameResponse
 */
CreateCustomHostnameResponse Client::createCustomHostname(const CreateCustomHostnameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomHostnameWithOptions(request, runtime);
}

/**
 * @summary Creates a custom response code rule for a site.
 *
 * @param request CreateCustomResponseCodeRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomResponseCodeRuleResponse
 */
CreateCustomResponseCodeRuleResponse Client::createCustomResponseCodeRuleWithOptions(const CreateCustomResponseCodeRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageId()) {
    query["PageId"] = request.getPageId();
  }

  if (!!request.hasReturnCode()) {
    query["ReturnCode"] = request.getReturnCode();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomResponseCodeRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomResponseCodeRuleResponse>();
}

/**
 * @summary Creates a custom response code rule for a site.
 *
 * @param request CreateCustomResponseCodeRuleRequest
 * @return CreateCustomResponseCodeRuleResponse
 */
CreateCustomResponseCodeRuleResponse Client::createCustomResponseCodeRule(const CreateCustomResponseCodeRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomResponseCodeRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a user-level custom scene policy. After you associate the policy with one or more sites, the policy applies to those sites.
 *
 * @param request CreateCustomScenePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomScenePolicyResponse
 */
CreateCustomScenePolicyResponse Client::createCustomScenePolicyWithOptions(const CreateCustomScenePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasObjects()) {
    query["Objects"] = request.getObjects();
  }

  if (!!request.hasSiteIds()) {
    query["SiteIds"] = request.getSiteIds();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTemplate()) {
    query["Template"] = request.getTemplate();
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
 * @summary Creates a user-level custom scene policy. After you associate the policy with one or more sites, the policy applies to those sites.
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
    body["HealthCheckFailTimes"] = request.getHealthCheckFailTimes();
  }

  if (!!request.hasHealthCheckHost()) {
    body["HealthCheckHost"] = request.getHealthCheckHost();
  }

  if (!!request.hasHealthCheckHttpCode()) {
    body["HealthCheckHttpCode"] = request.getHealthCheckHttpCode();
  }

  if (!!request.hasHealthCheckInterval()) {
    body["HealthCheckInterval"] = request.getHealthCheckInterval();
  }

  if (!!request.hasHealthCheckMethod()) {
    body["HealthCheckMethod"] = request.getHealthCheckMethod();
  }

  if (!!request.hasHealthCheckPort()) {
    body["HealthCheckPort"] = request.getHealthCheckPort();
  }

  if (!!request.hasHealthCheckSuccTimes()) {
    body["HealthCheckSuccTimes"] = request.getHealthCheckSuccTimes();
  }

  if (!!request.hasHealthCheckTimeout()) {
    body["HealthCheckTimeout"] = request.getHealthCheckTimeout();
  }

  if (!!request.hasHealthCheckType()) {
    body["HealthCheckType"] = request.getHealthCheckType();
  }

  if (!!request.hasHealthCheckURI()) {
    body["HealthCheckURI"] = request.getHealthCheckURI();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRemarks()) {
    body["Remarks"] = request.getRemarks();
  }

  if (!!request.hasServicePort()) {
    body["ServicePort"] = request.getServicePort();
  }

  if (!!request.hasTargetPort()) {
    body["TargetPort"] = request.getTargetPort();
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
 * @summary Create an image secret for the edge container application
 *
 * @param request CreateEdgeContainerAppImageSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEdgeContainerAppImageSecretResponse
 */
CreateEdgeContainerAppImageSecretResponse Client::createEdgeContainerAppImageSecretWithOptions(const CreateEdgeContainerAppImageSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRegistry()) {
    query["Registry"] = request.getRegistry();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.getUsername();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEdgeContainerAppImageSecret"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEdgeContainerAppImageSecretResponse>();
}

/**
 * @summary Create an image secret for the edge container application
 *
 * @param request CreateEdgeContainerAppImageSecretRequest
 * @return CreateEdgeContainerAppImageSecretResponse
 */
CreateEdgeContainerAppImageSecretResponse Client::createEdgeContainerAppImageSecret(const CreateEdgeContainerAppImageSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEdgeContainerAppImageSecretWithOptions(request, runtime);
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
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasRecordName()) {
    body["RecordName"] = request.getRecordName();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.getSiteId();
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
    request.setContainersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContainers(), "Containers", "json"));
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasContainersShrink()) {
    body["Containers"] = request.getContainersShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRemarks()) {
    body["Remarks"] = request.getRemarks();
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
 * @summary Creates a configuration for modifying HTTP inbound request headers for a site.
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
    request.setRequestHeaderModificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRequestHeaderModification(), "RequestHeaderModification", "json"));
  }

  json query = {};
  if (!!request.hasRequestHeaderModificationShrink()) {
    query["RequestHeaderModification"] = request.getRequestHeaderModificationShrink();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
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
 * @summary Creates a configuration for modifying HTTP inbound request headers for a site.
 *
 * @param request CreateHttpIncomingRequestHeaderModificationRuleRequest
 * @return CreateHttpIncomingRequestHeaderModificationRuleResponse
 */
CreateHttpIncomingRequestHeaderModificationRuleResponse Client::createHttpIncomingRequestHeaderModificationRule(const CreateHttpIncomingRequestHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHttpIncomingRequestHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a configuration for modifying HTTP inbound response headers for a site.
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
    request.setResponseHeaderModificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResponseHeaderModification(), "ResponseHeaderModification", "json"));
  }

  json query = {};
  if (!!request.hasResponseHeaderModificationShrink()) {
    query["ResponseHeaderModification"] = request.getResponseHeaderModificationShrink();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
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
 * @summary Creates a configuration for modifying HTTP inbound response headers for a site.
 *
 * @param request CreateHttpIncomingResponseHeaderModificationRuleRequest
 * @return CreateHttpIncomingResponseHeaderModificationRuleResponse
 */
CreateHttpIncomingResponseHeaderModificationRuleResponse Client::createHttpIncomingResponseHeaderModificationRule(const CreateHttpIncomingResponseHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHttpIncomingResponseHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Adds a Configuration for modifying a Site\\"s HTTP Request Headers.
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
    request.setRequestHeaderModificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRequestHeaderModification(), "RequestHeaderModification", "json"));
  }

  json query = {};
  if (!!request.hasRequestHeaderModificationShrink()) {
    query["RequestHeaderModification"] = request.getRequestHeaderModificationShrink();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
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
 * @summary Adds a Configuration for modifying a Site\\"s HTTP Request Headers.
 *
 * @param request CreateHttpRequestHeaderModificationRuleRequest
 * @return CreateHttpRequestHeaderModificationRuleResponse
 */
CreateHttpRequestHeaderModificationRuleResponse Client::createHttpRequestHeaderModificationRule(const CreateHttpRequestHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHttpRequestHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a rule to modify HTTP response headers.
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
    request.setResponseHeaderModificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResponseHeaderModification(), "ResponseHeaderModification", "json"));
  }

  json query = {};
  if (!!request.hasResponseHeaderModificationShrink()) {
    query["ResponseHeaderModification"] = request.getResponseHeaderModificationShrink();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
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
 * @summary Creates a rule to modify HTTP response headers.
 *
 * @param request CreateHttpResponseHeaderModificationRuleRequest
 * @return CreateHttpResponseHeaderModificationRuleResponse
 */
CreateHttpResponseHeaderModificationRuleResponse Client::createHttpResponseHeaderModificationRule(const CreateHttpResponseHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHttpResponseHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Adds an HTTPS application configuration to a site.
 *
 * @param request CreateHttpsApplicationConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHttpsApplicationConfigurationResponse
 */
CreateHttpsApplicationConfigurationResponse Client::createHttpsApplicationConfigurationWithOptions(const CreateHttpsApplicationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAltSvc()) {
    query["AltSvc"] = request.getAltSvc();
  }

  if (!!request.hasAltSvcClear()) {
    query["AltSvcClear"] = request.getAltSvcClear();
  }

  if (!!request.hasAltSvcMa()) {
    query["AltSvcMa"] = request.getAltSvcMa();
  }

  if (!!request.hasAltSvcPersist()) {
    query["AltSvcPersist"] = request.getAltSvcPersist();
  }

  if (!!request.hasHsts()) {
    query["Hsts"] = request.getHsts();
  }

  if (!!request.hasHstsIncludeSubdomains()) {
    query["HstsIncludeSubdomains"] = request.getHstsIncludeSubdomains();
  }

  if (!!request.hasHstsMaxAge()) {
    query["HstsMaxAge"] = request.getHstsMaxAge();
  }

  if (!!request.hasHstsPreload()) {
    query["HstsPreload"] = request.getHstsPreload();
  }

  if (!!request.hasHttpsForce()) {
    query["HttpsForce"] = request.getHttpsForce();
  }

  if (!!request.hasHttpsForceCode()) {
    query["HttpsForceCode"] = request.getHttpsForceCode();
  }

  if (!!request.hasHttpsNoSniDeny()) {
    query["HttpsNoSniDeny"] = request.getHttpsNoSniDeny();
  }

  if (!!request.hasHttpsSniVerify()) {
    query["HttpsSniVerify"] = request.getHttpsSniVerify();
  }

  if (!!request.hasHttpsSniWhitelist()) {
    query["HttpsSniWhitelist"] = request.getHttpsSniWhitelist();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
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
 * @summary Adds an HTTPS application configuration to a site.
 *
 * @param request CreateHttpsApplicationConfigurationRequest
 * @return CreateHttpsApplicationConfigurationResponse
 */
CreateHttpsApplicationConfigurationResponse Client::createHttpsApplicationConfiguration(const CreateHttpsApplicationConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHttpsApplicationConfigurationWithOptions(request, runtime);
}

/**
 * @summary Create HTTPS basic configuration for a site.
 *
 * @description A site supports only one global configuration (without Rule-related parameters). To exceed this limit, you must provide the RuleName, Rule, and RuleEnable parameters to create a rule-based configuration.
 *
 * @param request CreateHttpsBasicConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHttpsBasicConfigurationResponse
 */
CreateHttpsBasicConfigurationResponse Client::createHttpsBasicConfigurationWithOptions(const CreateHttpsBasicConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCiphersuite()) {
    query["Ciphersuite"] = request.getCiphersuite();
  }

  if (!!request.hasCiphersuiteGroup()) {
    query["CiphersuiteGroup"] = request.getCiphersuiteGroup();
  }

  if (!!request.hasHttp2()) {
    query["Http2"] = request.getHttp2();
  }

  if (!!request.hasHttp3()) {
    query["Http3"] = request.getHttp3();
  }

  if (!!request.hasHttps()) {
    query["Https"] = request.getHttps();
  }

  if (!!request.hasOcspStapling()) {
    query["OcspStapling"] = request.getOcspStapling();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasTls10()) {
    query["Tls10"] = request.getTls10();
  }

  if (!!request.hasTls11()) {
    query["Tls11"] = request.getTls11();
  }

  if (!!request.hasTls12()) {
    query["Tls12"] = request.getTls12();
  }

  if (!!request.hasTls13()) {
    query["Tls13"] = request.getTls13();
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
 * @summary Create HTTPS basic configuration for a site.
 *
 * @description A site supports only one global configuration (without Rule-related parameters). To exceed this limit, you must provide the RuleName, Rule, and RuleEnable parameters to create a rule-based configuration.
 *
 * @param request CreateHttpsBasicConfigurationRequest
 * @return CreateHttpsBasicConfigurationResponse
 */
CreateHttpsBasicConfigurationResponse Client::createHttpsBasicConfiguration(const CreateHttpsBasicConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHttpsBasicConfigurationWithOptions(request, runtime);
}

/**
 * @summary Creates an image transformation configuration for a site.
 *
 * @param request CreateImageTransformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImageTransformResponse
 */
CreateImageTransformResponse Client::createImageTransformWithOptions(const CreateImageTransformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoAvif()) {
    query["AutoAvif"] = request.getAutoAvif();
  }

  if (!!request.hasAutoWebp()) {
    query["AutoWebp"] = request.getAutoWebp();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
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
 * @summary Creates an image transformation configuration for a site.
 *
 * @param request CreateImageTransformRequest
 * @return CreateImageTransformResponse
 */
CreateImageTransformResponse Client::createImageTransform(const CreateImageTransformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImageTransformWithOptions(request, runtime);
}

/**
 * @summary Creates a KV namespace in the current account.
 *
 * @param request CreateKvNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateKvNamespaceResponse
 */
CreateKvNamespaceResponse Client::createKvNamespaceWithOptions(const CreateKvNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasNamespace()) {
    body["Namespace"] = request.getNamespace();
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
 * @summary Creates a KV namespace in the current account.
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
    request.setItemsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getItems(), "Items", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasItemsShrink()) {
    body["Items"] = request.getItemsShrink();
  }

  if (!!request.hasKind()) {
    body["Kind"] = request.getKind();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
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
 * @summary Creates a new Server Load Balancer instance with advanced features, including custom routing, session persistence, and health check configuration.
 *
 * @description Use this API to configure Server Load Balancer features for effective traffic management and optimization, such as adaptive routing, weighted round-robin, rule matching, and health checks.
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
    request.setAdaptiveRoutingShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAdaptiveRouting(), "AdaptiveRouting", "json"));
  }

  if (!!tmpReq.hasDefaultPools()) {
    request.setDefaultPoolsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDefaultPools(), "DefaultPools", "json"));
  }

  if (!!tmpReq.hasMonitor()) {
    request.setMonitorShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMonitor(), "Monitor", "json"));
  }

  if (!!tmpReq.hasRandomSteering()) {
    request.setRandomSteeringShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRandomSteering(), "RandomSteering", "json"));
  }

  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRules(), "Rules", "json"));
  }

  json query = {};
  if (!!request.hasAdaptiveRoutingShrink()) {
    query["AdaptiveRouting"] = request.getAdaptiveRoutingShrink();
  }

  if (!!request.hasDefaultPoolsShrink()) {
    query["DefaultPools"] = request.getDefaultPoolsShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasFallbackPool()) {
    query["FallbackPool"] = request.getFallbackPool();
  }

  if (!!request.hasMonitorShrink()) {
    query["Monitor"] = request.getMonitorShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRandomSteeringShrink()) {
    query["RandomSteering"] = request.getRandomSteeringShrink();
  }

  if (!!request.hasRegionPools()) {
    query["RegionPools"] = request.getRegionPools();
  }

  if (!!request.hasRulesShrink()) {
    query["Rules"] = request.getRulesShrink();
  }

  if (!!request.hasSessionAffinity()) {
    query["SessionAffinity"] = request.getSessionAffinity();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSteeringPolicy()) {
    query["SteeringPolicy"] = request.getSteeringPolicy();
  }

  if (!!request.hasSubRegionPools()) {
    query["SubRegionPools"] = request.getSubRegionPools();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
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
 * @summary Creates a new Server Load Balancer instance with advanced features, including custom routing, session persistence, and health check configuration.
 *
 * @description Use this API to configure Server Load Balancer features for effective traffic management and optimization, such as adaptive routing, weighted round-robin, rule matching, and health checks.
 *
 * @param request CreateLoadBalancerRequest
 * @return CreateLoadBalancerResponse
 */
CreateLoadBalancerResponse Client::createLoadBalancer(const CreateLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary Adds a network optimization configuration for a site.
 *
 * @description The site plan must be Standard Edition or higher to use the WebSocket feature. When calling this API, you must provide at least one feature configuration parameter. Providing only SiteId returns an error.
 *
 * @param request CreateNetworkOptimizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNetworkOptimizationResponse
 */
CreateNetworkOptimizationResponse Client::createNetworkOptimizationWithOptions(const CreateNetworkOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGrpc()) {
    query["Grpc"] = request.getGrpc();
  }

  if (!!request.hasHttp2Origin()) {
    query["Http2Origin"] = request.getHttp2Origin();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  if (!!request.hasSmartRouting()) {
    query["SmartRouting"] = request.getSmartRouting();
  }

  if (!!request.hasUploadMaxFilesize()) {
    query["UploadMaxFilesize"] = request.getUploadMaxFilesize();
  }

  if (!!request.hasWebsocket()) {
    query["Websocket"] = request.getWebsocket();
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
 * @summary Adds a network optimization configuration for a site.
 *
 * @description The site plan must be Standard Edition or higher to use the WebSocket feature. When calling this API, you must provide at least one feature configuration parameter. Providing only SiteId returns an error.
 *
 * @param request CreateNetworkOptimizationRequest
 * @return CreateNetworkOptimizationResponse
 */
CreateNetworkOptimizationResponse Client::createNetworkOptimization(const CreateNetworkOptimizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNetworkOptimizationWithOptions(request, runtime);
}

/**
 * @summary Creates an origin pool for a site. You can then use the origin pool with a Server Load Balancer or for direct back-to-origin requests.
 *
 * @description You can add multiple origins to an origin pool, such as a domain name, IP, OSS, or S3. Back-to-origin authentication is available for OSS and S3 origins.
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
    request.setOriginsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOrigins(), "Origins", "json"));
  }

  json query = {};
  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOriginsShrink()) {
    query["Origins"] = request.getOriginsShrink();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Creates an origin pool for a site. You can then use the origin pool with a Server Load Balancer or for direct back-to-origin requests.
 *
 * @description You can add multiple origins to an origin pool, such as a domain name, IP, OSS, or S3. Back-to-origin authentication is available for OSS and S3 origins.
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
  if (!!request.hasAutoConfirmIPList()) {
    query["AutoConfirmIPList"] = request.getAutoConfirmIPList();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Create a Back-to-Origin Rule for a Site.
 *
 * @param request CreateOriginRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOriginRuleResponse
 */
CreateOriginRuleResponse Client::createOriginRuleWithOptions(const CreateOriginRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDnsRecord()) {
    query["DnsRecord"] = request.getDnsRecord();
  }

  if (!!request.hasFollow302Enable()) {
    query["Follow302Enable"] = request.getFollow302Enable();
  }

  if (!!request.hasFollow302MaxTries()) {
    query["Follow302MaxTries"] = request.getFollow302MaxTries();
  }

  if (!!request.hasFollow302RetainArgs()) {
    query["Follow302RetainArgs"] = request.getFollow302RetainArgs();
  }

  if (!!request.hasFollow302RetainHeader()) {
    query["Follow302RetainHeader"] = request.getFollow302RetainHeader();
  }

  if (!!request.hasFollow302TargetHost()) {
    query["Follow302TargetHost"] = request.getFollow302TargetHost();
  }

  if (!!request.hasOriginHost()) {
    query["OriginHost"] = request.getOriginHost();
  }

  if (!!request.hasOriginHttpPort()) {
    query["OriginHttpPort"] = request.getOriginHttpPort();
  }

  if (!!request.hasOriginHttpsPort()) {
    query["OriginHttpsPort"] = request.getOriginHttpsPort();
  }

  if (!!request.hasOriginMtls()) {
    query["OriginMtls"] = request.getOriginMtls();
  }

  if (!!request.hasOriginReadTimeout()) {
    query["OriginReadTimeout"] = request.getOriginReadTimeout();
  }

  if (!!request.hasOriginScheme()) {
    query["OriginScheme"] = request.getOriginScheme();
  }

  if (!!request.hasOriginSni()) {
    query["OriginSni"] = request.getOriginSni();
  }

  if (!!request.hasOriginVerify()) {
    query["OriginVerify"] = request.getOriginVerify();
  }

  if (!!request.hasRange()) {
    query["Range"] = request.getRange();
  }

  if (!!request.hasRangeChunkSize()) {
    query["RangeChunkSize"] = request.getRangeChunkSize();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
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
 * @summary Create a Back-to-Origin Rule for a Site.
 *
 * @param request CreateOriginRuleRequest
 * @return CreateOriginRuleResponse
 */
CreateOriginRuleResponse Client::createOriginRule(const CreateOriginRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOriginRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a custom error page. This page appears when the web application firewall (WAF) blocks a user request. You can configure the page\\"s HTML content, content type, and description, and submit the page content using BASE64 encoding.
 *
 * @param tmpReq CreatePageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePageResponse
 */
CreatePageResponse Client::createPageWithOptions(const CreatePageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePageShrinkRequest request = CreatePageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSiteIds()) {
    request.setSiteIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSiteIds(), "SiteIds", "json"));
  }

  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasContentType()) {
    body["ContentType"] = request.getContentType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSiteIdsShrink()) {
    body["SiteIds"] = request.getSiteIdsShrink();
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
 * @summary Creates a custom error page. This page appears when the web application firewall (WAF) blocks a user request. You can configure the page\\"s HTML content, content type, and description, and submit the page content using BASE64 encoding.
 *
 * @param request CreatePageRequest
 * @return CreatePageResponse
 */
CreatePageResponse Client::createPage(const CreatePageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPageWithOptions(request, runtime);
}

/**
 * @summary Create a DNS record under a site.
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
    request.setAuthConfShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAuthConf(), "AuthConf", "json"));
  }

  if (!!tmpReq.hasData()) {
    request.setDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getData(), "Data", "json"));
  }

  json query = {};
  if (!!request.hasAuthConfShrink()) {
    query["AuthConf"] = request.getAuthConfShrink();
  }

  if (!!request.hasBizName()) {
    query["BizName"] = request.getBizName();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasDataShrink()) {
    query["Data"] = request.getDataShrink();
  }

  if (!!request.hasHostPolicy()) {
    query["HostPolicy"] = request.getHostPolicy();
  }

  if (!!request.hasHttpPorts()) {
    query["HttpPorts"] = request.getHttpPorts();
  }

  if (!!request.hasHttpsPorts()) {
    query["HttpsPorts"] = request.getHttpsPorts();
  }

  if (!!request.hasProxied()) {
    query["Proxied"] = request.getProxied();
  }

  if (!!request.hasRecordName()) {
    query["RecordName"] = request.getRecordName();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Create a DNS record under a site.
 *
 * @param request CreateRecordRequest
 * @return CreateRecordResponse
 */
CreateRecordResponse Client::createRecord(const CreateRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRecordWithOptions(request, runtime);
}

/**
 * @summary Creates a redirect configuration for a site.
 *
 * @param request CreateRedirectRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRedirectRuleResponse
 */
CreateRedirectRuleResponse Client::createRedirectRuleWithOptions(const CreateRedirectRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReserveQueryString()) {
    query["ReserveQueryString"] = request.getReserveQueryString();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  if (!!request.hasStatusCode()) {
    query["StatusCode"] = request.getStatusCode();
  }

  if (!!request.hasTargetUrl()) {
    query["TargetUrl"] = request.getTargetUrl();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Creates a redirect configuration for a site.
 *
 * @param request CreateRedirectRuleRequest
 * @return CreateRedirectRuleResponse
 */
CreateRedirectRuleResponse Client::createRedirectRule(const CreateRedirectRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRedirectRuleWithOptions(request, runtime);
}

/**
 * @summary Create a rewrite URL rule configuration for a site.
 *
 * @param request CreateRewriteUrlRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRewriteUrlRuleResponse
 */
CreateRewriteUrlRuleResponse Client::createRewriteUrlRuleWithOptions(const CreateRewriteUrlRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQueryString()) {
    query["QueryString"] = request.getQueryString();
  }

  if (!!request.hasRewriteQueryStringType()) {
    query["RewriteQueryStringType"] = request.getRewriteQueryStringType();
  }

  if (!!request.hasRewriteUriType()) {
    query["RewriteUriType"] = request.getRewriteUriType();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  if (!!request.hasUri()) {
    query["Uri"] = request.getUri();
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
 * @summary Create a rewrite URL rule configuration for a site.
 *
 * @param request CreateRewriteUrlRuleRequest
 * @return CreateRewriteUrlRuleResponse
 */
CreateRewriteUrlRuleResponse Client::createRewriteUrlRule(const CreateRewriteUrlRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRewriteUrlRuleWithOptions(request, runtime);
}

/**
 * @summary Creates an Edge Routine.
 *
 * @param request CreateRoutineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRoutineResponse
 */
CreateRoutineResponse Client::createRoutineWithOptions(const CreateRoutineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasHasAssets()) {
    body["HasAssets"] = request.getHasAssets();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
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
 * @summary Creates an Edge Routine.
 *
 * @param request CreateRoutineRequest
 * @return CreateRoutineResponse
 */
CreateRoutineResponse Client::createRoutine(const CreateRoutineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRoutineWithOptions(request, runtime);
}

/**
 * @summary Creates a percentage-based canary deployment for a Routine code version in a specified environment.
 *
 * @description ## Usage notes
 * - When creating a Routine code version deployment, the `Env` parameter only supports `staging` for the staging environment or `production` for the production environment.
 * - The `CodeVersions` parameter supports a maximum of two versions for canary release, and the total percentage of these versions must equal 100%.
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
    request.setCodeVersionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCodeVersions(), "CodeVersions", "json"));
  }

  json body = {};
  if (!!request.hasCodeVersionsShrink()) {
    body["CodeVersions"] = request.getCodeVersionsShrink();
  }

  if (!!request.hasEnv()) {
    body["Env"] = request.getEnv();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasStrategy()) {
    body["Strategy"] = request.getStrategy();
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
 * @summary Creates a percentage-based canary deployment for a Routine code version in a specified environment.
 *
 * @description ## Usage notes
 * - When creating a Routine code version deployment, the `Env` parameter only supports `staging` for the staging environment or `production` for the production environment.
 * - The `CodeVersions` parameter supports a maximum of two versions for canary release, and the total percentage of these versions must equal 100%.
 *
 * @param request CreateRoutineCodeDeploymentRequest
 * @return CreateRoutineCodeDeploymentResponse
 */
CreateRoutineCodeDeploymentResponse Client::createRoutineCodeDeployment(const CreateRoutineCodeDeploymentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRoutineCodeDeploymentWithOptions(request, runtime);
}

/**
 * @summary Adds a new record to a site that triggers a specified edge function Routine.
 *
 * @param request CreateRoutineRelatedRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRoutineRelatedRecordResponse
 */
CreateRoutineRelatedRecordResponse Client::createRoutineRelatedRecordWithOptions(const CreateRoutineRelatedRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRecordName()) {
    body["RecordName"] = request.getRecordName();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.getSiteId();
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
 * @summary Adds a new record to a site that triggers a specified edge function Routine.
 *
 * @param request CreateRoutineRelatedRecordRequest
 * @return CreateRoutineRelatedRecordResponse
 */
CreateRoutineRelatedRecordResponse Client::createRoutineRelatedRecord(const CreateRoutineRelatedRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRoutineRelatedRecordWithOptions(request, runtime);
}

/**
 * @summary Creates an Edge Routine route configuration.
 *
 * @param request CreateRoutineRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRoutineRouteResponse
 */
CreateRoutineRouteResponse Client::createRoutineRouteWithOptions(const CreateRoutineRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBypass()) {
    query["Bypass"] = request.getBypass();
  }

  if (!!request.hasFallback()) {
    query["Fallback"] = request.getFallback();
  }

  if (!!request.hasRouteEnable()) {
    query["RouteEnable"] = request.getRouteEnable();
  }

  if (!!request.hasRouteName()) {
    query["RouteName"] = request.getRouteName();
  }

  if (!!request.hasRoutineName()) {
    query["RoutineName"] = request.getRoutineName();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
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
 * @summary Creates an Edge Routine route configuration.
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
    request.setConfOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfOptions(), "ConfOptions", "json"));
  }

  json body = {};
  if (!!request.hasBuildId()) {
    body["BuildId"] = request.getBuildId();
  }

  if (!!request.hasCodeDescription()) {
    body["CodeDescription"] = request.getCodeDescription();
  }

  if (!!request.hasConfOptionsShrink()) {
    body["ConfOptions"] = request.getConfOptionsShrink();
  }

  if (!!request.hasDeployEnv()) {
    body["DeployEnv"] = request.getDeployEnv();
  }

  if (!!request.hasExtraInfo()) {
    body["ExtraInfo"] = request.getExtraInfo();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
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
 * @summary Creates execution plans for batch scheduled prefetch tasks.
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
    request.setExecutionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExecutions(), "Executions", "json"));
  }

  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  json body = {};
  if (!!request.hasExecutionsShrink()) {
    body["Executions"] = request.getExecutionsShrink();
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
 * @summary Creates execution plans for batch scheduled prefetch tasks.
 *
 * @param request CreateScheduledPreloadExecutionsRequest
 * @return CreateScheduledPreloadExecutionsResponse
 */
CreateScheduledPreloadExecutionsResponse Client::createScheduledPreloadExecutions(const CreateScheduledPreloadExecutionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScheduledPreloadExecutionsWithOptions(request, runtime);
}

/**
 * @summary Add a scheduled prefetch task.
 *
 * @param request CreateScheduledPreloadJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScheduledPreloadJobResponse
 */
CreateScheduledPreloadJobResponse Client::createScheduledPreloadJobWithOptions(const CreateScheduledPreloadJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInsertWay()) {
    body["InsertWay"] = request.getInsertWay();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOssUrl()) {
    body["OssUrl"] = request.getOssUrl();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.getSiteId();
  }

  if (!!request.hasUrlList()) {
    body["UrlList"] = request.getUrlList();
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
 * @summary Add a scheduled prefetch task.
 *
 * @param request CreateScheduledPreloadJobRequest
 * @return CreateScheduledPreloadJobResponse
 */
CreateScheduledPreloadJobResponse Client::createScheduledPreloadJob(const CreateScheduledPreloadJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScheduledPreloadJobWithOptions(request, runtime);
}

/**
 * @summary Creates a site.
 *
 * @description - Before creating a site, you must have an active plan instance.
 * - If the acceleration area is set to the Chinese mainland only or global, the site domain name must have a completed Internet Content Provider (ICP) filing.
 * - Each user can invoke this operation up to 100 times per hour.
 *
 * @param request CreateSiteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSiteResponse
 */
CreateSiteResponse Client::createSiteWithOptions(const CreateSiteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessType()) {
    query["AccessType"] = request.getAccessType();
  }

  if (!!request.hasCoverage()) {
    query["Coverage"] = request.getCoverage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSiteName()) {
    query["SiteName"] = request.getSiteName();
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
 * @summary Creates a site.
 *
 * @description - Before creating a site, you must have an active plan instance.
 * - If the acceleration area is set to the Chinese mainland only or global, the site domain name must have a completed Internet Content Provider (ICP) filing.
 * - Each user can invoke this operation up to 100 times per hour.
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
    request.setCookiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCookies(), "Cookies", "json"));
  }

  if (!!tmpReq.hasRequestHeaders()) {
    request.setRequestHeadersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRequestHeaders(), "RequestHeaders", "json"));
  }

  if (!!tmpReq.hasResponseHeaders()) {
    request.setResponseHeadersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResponseHeaders(), "ResponseHeaders", "json"));
  }

  json body = {};
  if (!!request.hasCookiesShrink()) {
    body["Cookies"] = request.getCookiesShrink();
  }

  if (!!request.hasRequestHeadersShrink()) {
    body["RequestHeaders"] = request.getRequestHeadersShrink();
  }

  if (!!request.hasResponseHeadersShrink()) {
    body["ResponseHeaders"] = request.getResponseHeadersShrink();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.getSiteId();
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
 * @summary Create a real-time log shipping task.
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
    request.setHttpDeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHttpDelivery(), "HttpDelivery", "json"));
  }

  if (!!tmpReq.hasKafkaDelivery()) {
    request.setKafkaDeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKafkaDelivery(), "KafkaDelivery", "json"));
  }

  if (!!tmpReq.hasOssDelivery()) {
    request.setOssDeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOssDelivery(), "OssDelivery", "json"));
  }

  if (!!tmpReq.hasS3Delivery()) {
    request.setS3DeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getS3Delivery(), "S3Delivery", "json"));
  }

  if (!!tmpReq.hasSlsDelivery()) {
    request.setSlsDeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSlsDelivery(), "SlsDelivery", "json"));
  }

  json body = {};
  if (!!request.hasBusinessType()) {
    body["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasDataCenter()) {
    body["DataCenter"] = request.getDataCenter();
  }

  if (!!request.hasDeliveryType()) {
    body["DeliveryType"] = request.getDeliveryType();
  }

  if (!!request.hasDiscardRate()) {
    body["DiscardRate"] = request.getDiscardRate();
  }

  if (!!request.hasFieldName()) {
    body["FieldName"] = request.getFieldName();
  }

  if (!!request.hasFilterVer()) {
    body["FilterVer"] = request.getFilterVer();
  }

  if (!!request.hasHttpDeliveryShrink()) {
    body["HttpDelivery"] = request.getHttpDeliveryShrink();
  }

  if (!!request.hasKafkaDeliveryShrink()) {
    body["KafkaDelivery"] = request.getKafkaDeliveryShrink();
  }

  if (!!request.hasOssDeliveryShrink()) {
    body["OssDelivery"] = request.getOssDeliveryShrink();
  }

  if (!!request.hasS3DeliveryShrink()) {
    body["S3Delivery"] = request.getS3DeliveryShrink();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSlsDeliveryShrink()) {
    body["SlsDelivery"] = request.getSlsDeliveryShrink();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.getTaskName();
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
 * @summary Create a real-time log shipping task.
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
 * @summary Creates a Layer 4 acceleration application.
 *
 * @description The selected site must be activated. After you create a site, call the VerifySite operation to verify the site. A site that passes verification is automatically activated, which means the Passed response parameter is set to true.
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
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRules(), "Rules", "json"));
  }

  json query = {};
  if (!!request.hasCrossBorderOptimization()) {
    query["CrossBorderOptimization"] = request.getCrossBorderOptimization();
  }

  if (!!request.hasIpAccessRule()) {
    query["IpAccessRule"] = request.getIpAccessRule();
  }

  if (!!request.hasIpv6()) {
    query["Ipv6"] = request.getIpv6();
  }

  if (!!request.hasKeepAliveProtection()) {
    query["KeepAliveProtection"] = request.getKeepAliveProtection();
  }

  if (!!request.hasRecordName()) {
    query["RecordName"] = request.getRecordName();
  }

  if (!!request.hasRulesShrink()) {
    query["Rules"] = request.getRulesShrink();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasStaticIp()) {
    query["StaticIp"] = request.getStaticIp();
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
 * @summary Creates a Layer 4 acceleration application.
 *
 * @description The selected site must be activated. After you create a site, call the VerifySite operation to verify the site. A site that passes verification is automatically activated, which means the Passed response parameter is set to true.
 *
 * @param request CreateTransportLayerApplicationRequest
 * @return CreateTransportLayerApplicationResponse
 */
CreateTransportLayerApplicationResponse Client::createTransportLayerApplication(const CreateTransportLayerApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTransportLayerApplicationWithOptions(request, runtime);
}

/**
 * @summary Creates a web monitoring configuration.
 *
 * @param request CreateUrlObservationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUrlObservationResponse
 */
CreateUrlObservationResponse Client::createUrlObservationWithOptions(const CreateUrlObservationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSdkType()) {
    query["SdkType"] = request.getSdkType();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
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
 * @summary Creates a web monitoring configuration.
 *
 * @param request CreateUrlObservationRequest
 * @return CreateUrlObservationResponse
 */
CreateUrlObservationResponse Client::createUrlObservation(const CreateUrlObservationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUrlObservationWithOptions(request, runtime);
}

/**
 * @summary Creates a custom log shipping task to SLS, HTTP, OSS, S3, or Kafka.
 *
 * @description Use this API to create a delivery task for specific log data. It supports multiple delivery destinations, including SLS, HTTP services, Alibaba Cloud OSS, S3-compatible storage, and Kafka message queues. You can set a custom task name, select log fields, specify a data center, set the discard rate, choose a delivery type, and configure delivery details for the selected type.
 * - **Field Filtering**: Use `FieldName` to specify the log fields to deliver.
 * - **Filter Rules**: Use `FilterRules` to filter log data before delivery.
 * - **Supported delivery destinations**: Deliver logs to various destinations, including SLS, HTTP(S), Alibaba Cloud OSS, S3-compatible storage, and Kafka. Each method has specific configuration parameters.
 * ## Notes
 * - Ensure that your AccessKey and SecretKey have the required permissions for the delivery operation.
 * - If a delivery method requires encryption or authentication, configure its security parameters accordingly.
 * - Verify that the `FilterRules` syntax is correct.
 * - Adjust advanced parameters, such as the number of retries and timeout, to optimize delivery efficiency and stability.
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
    request.setHttpDeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHttpDelivery(), "HttpDelivery", "json"));
  }

  if (!!tmpReq.hasKafkaDelivery()) {
    request.setKafkaDeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKafkaDelivery(), "KafkaDelivery", "json"));
  }

  if (!!tmpReq.hasOssDelivery()) {
    request.setOssDeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOssDelivery(), "OssDelivery", "json"));
  }

  if (!!tmpReq.hasS3Delivery()) {
    request.setS3DeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getS3Delivery(), "S3Delivery", "json"));
  }

  if (!!tmpReq.hasSlsDelivery()) {
    request.setSlsDeliveryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSlsDelivery(), "SlsDelivery", "json"));
  }

  json body = {};
  if (!!request.hasBusinessType()) {
    body["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasDataCenter()) {
    body["DataCenter"] = request.getDataCenter();
  }

  if (!!request.hasDeliveryType()) {
    body["DeliveryType"] = request.getDeliveryType();
  }

  if (!!request.hasDetails()) {
    body["Details"] = request.getDetails();
  }

  if (!!request.hasDiscardRate()) {
    body["DiscardRate"] = request.getDiscardRate();
  }

  if (!!request.hasFieldName()) {
    body["FieldName"] = request.getFieldName();
  }

  if (!!request.hasFilterVer()) {
    body["FilterVer"] = request.getFilterVer();
  }

  if (!!request.hasHttpDeliveryShrink()) {
    body["HttpDelivery"] = request.getHttpDeliveryShrink();
  }

  if (!!request.hasKafkaDeliveryShrink()) {
    body["KafkaDelivery"] = request.getKafkaDeliveryShrink();
  }

  if (!!request.hasOssDeliveryShrink()) {
    body["OssDelivery"] = request.getOssDeliveryShrink();
  }

  if (!!request.hasS3DeliveryShrink()) {
    body["S3Delivery"] = request.getS3DeliveryShrink();
  }

  if (!!request.hasSlsDeliveryShrink()) {
    body["SlsDelivery"] = request.getSlsDeliveryShrink();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.getTaskName();
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
 * @summary Creates a custom log shipping task to SLS, HTTP, OSS, S3, or Kafka.
 *
 * @description Use this API to create a delivery task for specific log data. It supports multiple delivery destinations, including SLS, HTTP services, Alibaba Cloud OSS, S3-compatible storage, and Kafka message queues. You can set a custom task name, select log fields, specify a data center, set the discard rate, choose a delivery type, and configure delivery details for the selected type.
 * - **Field Filtering**: Use `FieldName` to specify the log fields to deliver.
 * - **Filter Rules**: Use `FilterRules` to filter log data before delivery.
 * - **Supported delivery destinations**: Deliver logs to various destinations, including SLS, HTTP(S), Alibaba Cloud OSS, S3-compatible storage, and Kafka. Each method has specific configuration parameters.
 * ## Notes
 * - Ensure that your AccessKey and SecretKey have the required permissions for the delivery operation.
 * - If a delivery method requires encryption or authentication, configure its security parameters accordingly.
 * - Verify that the `FilterRules` syntax is correct.
 * - Adjust advanced parameters, such as the number of retries and timeout, to optimize delivery efficiency and stability.
 *
 * @param request CreateUserDeliveryTaskRequest
 * @return CreateUserDeliveryTaskResponse
 */
CreateUserDeliveryTaskResponse Client::createUserDeliveryTask(const CreateUserDeliveryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserDeliveryTaskWithOptions(request, runtime);
}

/**
 * @summary Creates an instance-level Web Application Firewall (WAF) ruleset that supports various types of protection rules.
 *
 * @description ## Description
 * - You can use this API to create a Web Application Firewall (WAF) ruleset for a specific instance.
 * - The required `InstanceId` parameter specifies the instance for which to create the ruleset.
 * - The `Phase` parameter defines the execution phase of the ruleset, such as a custom rule or rate limiting.
 * - The required `Name` and `Expression` parameters specify the ruleset\\"s name and match expression.
 * - The optional `Description` parameter describes the purpose of the ruleset.
 * - The `Status` parameter controls whether the ruleset is immediately enabled (`on`) or disabled (`off`).
 * - Use the `Rules` parameter to configure a detailed rule list. Each rule includes properties such as name, position, expression, and action.
 * - A successful response returns the unique ID of the new ruleset in `Id` and a list of associated rule IDs in `RuleIds`.
 *
 * @param tmpReq CreateUserWafRulesetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserWafRulesetResponse
 */
CreateUserWafRulesetResponse Client::createUserWafRulesetWithOptions(const CreateUserWafRulesetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateUserWafRulesetShrinkRequest request = CreateUserWafRulesetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRules(), "Rules", "json"));
  }

  if (!!tmpReq.hasShared()) {
    request.setSharedShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getShared(), "Shared", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasExpression()) {
    body["Expression"] = request.getExpression();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPhase()) {
    body["Phase"] = request.getPhase();
  }

  if (!!request.hasRulesShrink()) {
    body["Rules"] = request.getRulesShrink();
  }

  if (!!request.hasSharedShrink()) {
    body["Shared"] = request.getSharedShrink();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateUserWafRuleset"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserWafRulesetResponse>();
}

/**
 * @summary Creates an instance-level Web Application Firewall (WAF) ruleset that supports various types of protection rules.
 *
 * @description ## Description
 * - You can use this API to create a Web Application Firewall (WAF) ruleset for a specific instance.
 * - The required `InstanceId` parameter specifies the instance for which to create the ruleset.
 * - The `Phase` parameter defines the execution phase of the ruleset, such as a custom rule or rate limiting.
 * - The required `Name` and `Expression` parameters specify the ruleset\\"s name and match expression.
 * - The optional `Description` parameter describes the purpose of the ruleset.
 * - The `Status` parameter controls whether the ruleset is immediately enabled (`on`) or disabled (`off`).
 * - Use the `Rules` parameter to configure a detailed rule list. Each rule includes properties such as name, position, expression, and action.
 * - A successful response returns the unique ID of the new ruleset in `Id` and a list of associated rule IDs in `RuleIds`.
 *
 * @param request CreateUserWafRulesetRequest
 * @return CreateUserWafRulesetResponse
 */
CreateUserWafRulesetResponse Client::createUserWafRuleset(const CreateUserWafRulesetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserWafRulesetWithOptions(request, runtime);
}

/**
 * @summary Create a site video processing configuration.
 *
 * @param request CreateVideoProcessingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVideoProcessingResponse
 */
CreateVideoProcessingResponse Client::createVideoProcessingWithOptions(const CreateVideoProcessingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlvSeekEnd()) {
    query["FlvSeekEnd"] = request.getFlvSeekEnd();
  }

  if (!!request.hasFlvSeekStart()) {
    query["FlvSeekStart"] = request.getFlvSeekStart();
  }

  if (!!request.hasFlvVideoSeekMode()) {
    query["FlvVideoSeekMode"] = request.getFlvVideoSeekMode();
  }

  if (!!request.hasMp4SeekEnd()) {
    query["Mp4SeekEnd"] = request.getMp4SeekEnd();
  }

  if (!!request.hasMp4SeekStart()) {
    query["Mp4SeekStart"] = request.getMp4SeekStart();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  if (!!request.hasVideoSeekEnable()) {
    query["VideoSeekEnable"] = request.getVideoSeekEnable();
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
 * @summary Create a site video processing configuration.
 *
 * @param request CreateVideoProcessingRequest
 * @return CreateVideoProcessingResponse
 */
CreateVideoProcessingResponse Client::createVideoProcessing(const CreateVideoProcessingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVideoProcessingWithOptions(request, runtime);
}

/**
 * @summary Creates a new rule in the Web Application Firewall (WAF). Use this operation to fine-tune firewall behavior and improve the security of your site or application.
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
    request.setConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfig(), "Config", "json"));
  }

  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  json body = {};
  if (!!request.hasConfigShrink()) {
    body["Config"] = request.getConfigShrink();
  }

  if (!!request.hasPhase()) {
    body["Phase"] = request.getPhase();
  }

  if (!!request.hasRulesetId()) {
    body["RulesetId"] = request.getRulesetId();
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
 * @summary Creates a new rule in the Web Application Firewall (WAF). Use this operation to fine-tune firewall behavior and improve the security of your site or application.
 *
 * @param request CreateWafRuleRequest
 * @return CreateWafRuleResponse
 */
CreateWafRuleResponse Client::createWafRule(const CreateWafRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWafRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a WAF ruleset.
 *
 * @param request CreateWafRulesetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWafRulesetResponse
 */
CreateWafRulesetResponse Client::createWafRulesetWithOptions(const CreateWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPhase()) {
    body["Phase"] = request.getPhase();
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
 * @summary Creates a WAF ruleset.
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
    request.setHostNameAndPathShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHostNameAndPath(), "HostNameAndPath", "json"));
  }

  json query = {};
  if (!!request.hasCookieName()) {
    query["CookieName"] = request.getCookieName();
  }

  if (!!request.hasCustomPageHtml()) {
    query["CustomPageHtml"] = request.getCustomPageHtml();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDisableSessionRenewalEnable()) {
    query["DisableSessionRenewalEnable"] = request.getDisableSessionRenewalEnable();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasHostNameAndPathShrink()) {
    query["HostNameAndPath"] = request.getHostNameAndPathShrink();
  }

  if (!!request.hasJsonResponseEnable()) {
    query["JsonResponseEnable"] = request.getJsonResponseEnable();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNewUsersPerMinute()) {
    query["NewUsersPerMinute"] = request.getNewUsersPerMinute();
  }

  if (!!request.hasQueueAllEnable()) {
    query["QueueAllEnable"] = request.getQueueAllEnable();
  }

  if (!!request.hasQueuingMethod()) {
    query["QueuingMethod"] = request.getQueuingMethod();
  }

  if (!!request.hasQueuingStatusCode()) {
    query["QueuingStatusCode"] = request.getQueuingStatusCode();
  }

  if (!!request.hasSessionDuration()) {
    query["SessionDuration"] = request.getSessionDuration();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasTotalActiveUsers()) {
    query["TotalActiveUsers"] = request.getTotalActiveUsers();
  }

  if (!!request.hasWaitingRoomType()) {
    query["WaitingRoomType"] = request.getWaitingRoomType();
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
 * @summary Creates a waiting room event. You can specify the queuing method and type.
 *
 * @description Your site plan must be Advanced or higher to use this feature. The number of configurations for this feature cannot exceed the quota included in your site plan.
 *
 * @param request CreateWaitingRoomEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWaitingRoomEventResponse
 */
CreateWaitingRoomEventResponse Client::createWaitingRoomEventWithOptions(const CreateWaitingRoomEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomPageHtml()) {
    query["CustomPageHtml"] = request.getCustomPageHtml();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDisableSessionRenewalEnable()) {
    query["DisableSessionRenewalEnable"] = request.getDisableSessionRenewalEnable();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasJsonResponseEnable()) {
    query["JsonResponseEnable"] = request.getJsonResponseEnable();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNewUsersPerMinute()) {
    query["NewUsersPerMinute"] = request.getNewUsersPerMinute();
  }

  if (!!request.hasPreQueueEnable()) {
    query["PreQueueEnable"] = request.getPreQueueEnable();
  }

  if (!!request.hasPreQueueStartTime()) {
    query["PreQueueStartTime"] = request.getPreQueueStartTime();
  }

  if (!!request.hasQueuingMethod()) {
    query["QueuingMethod"] = request.getQueuingMethod();
  }

  if (!!request.hasQueuingStatusCode()) {
    query["QueuingStatusCode"] = request.getQueuingStatusCode();
  }

  if (!!request.hasRandomPreQueueEnable()) {
    query["RandomPreQueueEnable"] = request.getRandomPreQueueEnable();
  }

  if (!!request.hasSessionDuration()) {
    query["SessionDuration"] = request.getSessionDuration();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTotalActiveUsers()) {
    query["TotalActiveUsers"] = request.getTotalActiveUsers();
  }

  if (!!request.hasWaitingRoomId()) {
    query["WaitingRoomId"] = request.getWaitingRoomId();
  }

  if (!!request.hasWaitingRoomType()) {
    query["WaitingRoomType"] = request.getWaitingRoomType();
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
 * @summary Creates a waiting room event. You can specify the queuing method and type.
 *
 * @description Your site plan must be Advanced or higher to use this feature. The number of configurations for this feature cannot exceed the quota included in your site plan.
 *
 * @param request CreateWaitingRoomEventRequest
 * @return CreateWaitingRoomEventResponse
 */
CreateWaitingRoomEventResponse Client::createWaitingRoomEvent(const CreateWaitingRoomEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWaitingRoomEventWithOptions(request, runtime);
}

/**
 * @summary Creates a waiting room bypass rule.
 *
 * @description Your site plan must be Enterprise Edition or higher to use this feature, and the site plan must support this feature.
 *
 * @param request CreateWaitingRoomRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWaitingRoomRuleResponse
 */
CreateWaitingRoomRuleResponse Client::createWaitingRoomRuleWithOptions(const CreateWaitingRoomRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasWaitingRoomId()) {
    query["WaitingRoomId"] = request.getWaitingRoomId();
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
 * @summary Creates a waiting room bypass rule.
 *
 * @description Your site plan must be Enterprise Edition or higher to use this feature, and the site plan must support this feature.
 *
 * @param request CreateWaitingRoomRuleRequest
 * @return CreateWaitingRoomRuleResponse
 */
CreateWaitingRoomRuleResponse Client::createWaitingRoomRule(const CreateWaitingRoomRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWaitingRoomRuleWithOptions(request, runtime);
}

/**
 * @summary Disables the version management feature for a site.
 *
 * @description Version management must be enabled through the ActivateVersionManagement operation (the site VersionManagement status is true). Version management can be disabled only when only version 0 and the default environment exist.
 *
 * @param request DeactivateVersionManagementRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeactivateVersionManagementResponse
 */
DeactivateVersionManagementResponse Client::deactivateVersionManagementWithOptions(const DeactivateVersionManagementRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Disables the version management feature for a site.
 *
 * @description Version management must be enabled through the ActivateVersionManagement operation (the site VersionManagement status is true). Version management can be disabled only when only version 0 and the default environment exist.
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
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Deletes a custom domain name from a Software as a Service (SaaS) site based on its HostnameId.
 *
 * @param request DeleteCustomHostnameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomHostnameResponse
 */
DeleteCustomHostnameResponse Client::deleteCustomHostnameWithOptions(const DeleteCustomHostnameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostnameId()) {
    query["HostnameId"] = request.getHostnameId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomHostname"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomHostnameResponse>();
}

/**
 * @summary Deletes a custom domain name from a Software as a Service (SaaS) site based on its HostnameId.
 *
 * @param request DeleteCustomHostnameRequest
 * @return DeleteCustomHostnameResponse
 */
DeleteCustomHostnameResponse Client::deleteCustomHostname(const DeleteCustomHostnameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomHostnameWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom response code configuration for a site.
 *
 * @param request DeleteCustomResponseCodeRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomResponseCodeRuleResponse
 */
DeleteCustomResponseCodeRuleResponse Client::deleteCustomResponseCodeRuleWithOptions(const DeleteCustomResponseCodeRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomResponseCodeRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomResponseCodeRuleResponse>();
}

/**
 * @summary Deletes a custom response code configuration for a site.
 *
 * @param request DeleteCustomResponseCodeRuleRequest
 * @return DeleteCustomResponseCodeRuleResponse
 */
DeleteCustomResponseCodeRuleResponse Client::deleteCustomResponseCodeRule(const DeleteCustomResponseCodeRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomResponseCodeRuleWithOptions(request, runtime);
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
    query["PolicyId"] = request.getPolicyId();
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
 * @summary Deletes an edge container application that is no longer needed by application ID.
 *
 * @param request DeleteEdgeContainerAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEdgeContainerAppResponse
 */
DeleteEdgeContainerAppResponse Client::deleteEdgeContainerAppWithOptions(const DeleteEdgeContainerAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
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
 * @summary Deletes an edge container application that is no longer needed by application ID.
 *
 * @param request DeleteEdgeContainerAppRequest
 * @return DeleteEdgeContainerAppResponse
 */
DeleteEdgeContainerAppResponse Client::deleteEdgeContainerApp(const DeleteEdgeContainerAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEdgeContainerAppWithOptions(request, runtime);
}

/**
 * @summary Deletes the image secret for an edge containerized application.
 *
 * @param request DeleteEdgeContainerAppImageSecretRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEdgeContainerAppImageSecretResponse
 */
DeleteEdgeContainerAppImageSecretResponse Client::deleteEdgeContainerAppImageSecretWithOptions(const DeleteEdgeContainerAppImageSecretRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEdgeContainerAppImageSecret"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEdgeContainerAppImageSecretResponse>();
}

/**
 * @summary Deletes the image secret for an edge containerized application.
 *
 * @param request DeleteEdgeContainerAppImageSecretRequest
 * @return DeleteEdgeContainerAppImageSecretResponse
 */
DeleteEdgeContainerAppImageSecretResponse Client::deleteEdgeContainerAppImageSecret(const DeleteEdgeContainerAppImageSecretRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEdgeContainerAppImageSecretWithOptions(request, runtime);
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
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasRecordName()) {
    body["RecordName"] = request.getRecordName();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.getSiteId();
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
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
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
 * @summary Deletes a rule created by Deep Learning and Protection.
 *
 * @param request DeleteHttpDDoSIntelligentRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHttpDDoSIntelligentRuleResponse
 */
DeleteHttpDDoSIntelligentRuleResponse Client::deleteHttpDDoSIntelligentRuleWithOptions(const DeleteHttpDDoSIntelligentRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRecordName()) {
    query["RecordName"] = request.getRecordName();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHttpDDoSIntelligentRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHttpDDoSIntelligentRuleResponse>();
}

/**
 * @summary Deletes a rule created by Deep Learning and Protection.
 *
 * @param request DeleteHttpDDoSIntelligentRuleRequest
 * @return DeleteHttpDDoSIntelligentRuleResponse
 */
DeleteHttpDDoSIntelligentRuleResponse Client::deleteHttpDDoSIntelligentRule(const DeleteHttpDDoSIntelligentRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHttpDDoSIntelligentRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes the configuration of modifying incoming HTTP request headers for a website.
 *
 * @param request DeleteHttpIncomingRequestHeaderModificationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHttpIncomingRequestHeaderModificationRuleResponse
 */
DeleteHttpIncomingRequestHeaderModificationRuleResponse Client::deleteHttpIncomingRequestHeaderModificationRuleWithOptions(const DeleteHttpIncomingRequestHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Deletes the configuration of modifying incoming HTTP request headers for a website.
 *
 * @param request DeleteHttpIncomingRequestHeaderModificationRuleRequest
 * @return DeleteHttpIncomingRequestHeaderModificationRuleResponse
 */
DeleteHttpIncomingRequestHeaderModificationRuleResponse Client::deleteHttpIncomingRequestHeaderModificationRule(const DeleteHttpIncomingRequestHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHttpIncomingRequestHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes the configuration of modifying HTTP response headers for a website.
 *
 * @param request DeleteHttpIncomingResponseHeaderModificationRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHttpIncomingResponseHeaderModificationRuleResponse
 */
DeleteHttpIncomingResponseHeaderModificationRuleResponse Client::deleteHttpIncomingResponseHeaderModificationRuleWithOptions(const DeleteHttpIncomingResponseHeaderModificationRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Deletes the configuration of modifying HTTP response headers for a website.
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
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Deletes a keyless server configuration.
 *
 * @param request DeleteKeylessServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteKeylessServerResponse
 */
DeleteKeylessServerResponse Client::deleteKeylessServerWithOptions(const DeleteKeylessServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteKeylessServer"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteKeylessServerResponse>();
}

/**
 * @summary Deletes a keyless server configuration.
 *
 * @param request DeleteKeylessServerRequest
 * @return DeleteKeylessServerResponse
 */
DeleteKeylessServerResponse Client::deleteKeylessServer(const DeleteKeylessServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteKeylessServerWithOptions(request, runtime);
}

/**
 * @summary Delete a specific key-value pair from a namespace.
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
 * @summary Delete a specific key-value pair from a namespace.
 *
 * @param request DeleteKvRequest
 * @return DeleteKvResponse
 */
DeleteKvResponse Client::deleteKv(const DeleteKvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteKvWithOptions(request, runtime);
}

/**
 * @summary Deletes a namespace from your account.
 *
 * @param request DeleteKvNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteKvNamespaceResponse
 */
DeleteKvNamespaceResponse Client::deleteKvNamespaceWithOptions(const DeleteKvNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
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
 * @summary Deletes a namespace from your account.
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
    body["Id"] = request.getId();
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
    query["Id"] = request.getId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Deletes an origin CA certificate.
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
 * @summary Deletes an origin CA certificate.
 *
 * @param request DeleteOriginCaCertificateRequest
 * @return DeleteOriginCaCertificateResponse
 */
DeleteOriginCaCertificateResponse Client::deleteOriginCaCertificate(const DeleteOriginCaCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteOriginCaCertificateWithOptions(request, runtime);
}

/**
 * @summary Deletes an origin client certificate for a specific site.
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
 * @summary Deletes an origin client certificate for a specific site.
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
    query["Id"] = request.getId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Disable origin protection.
 *
 * @param request DeleteOriginProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteOriginProtectionResponse
 */
DeleteOriginProtectionResponse Client::deleteOriginProtectionWithOptions(const DeleteOriginProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Disable origin protection.
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
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
    body["Id"] = request.getId();
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
 * @summary Deletes a DNS record based on its RecordId.
 *
 * @param request DeleteRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecordResponse
 */
DeleteRecordResponse Client::deleteRecordWithOptions(const DeleteRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
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
 * @summary Deletes a DNS record based on its RecordId.
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
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
    body["Name"] = request.getName();
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
    body["CodeVersion"] = request.getCodeVersion();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
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
    query["SiteId"] = request.getSiteId();
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRecordId()) {
    body["RecordId"] = request.getRecordId();
  }

  if (!!request.hasRecordName()) {
    body["RecordName"] = request.getRecordName();
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
 * @summary Deletes the route configuration of an edge function.
 *
 * @param request DeleteRoutineRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRoutineRouteResponse
 */
DeleteRoutineRouteResponse Client::deleteRoutineRouteWithOptions(const DeleteRoutineRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Deletes the route configuration of an edge function.
 *
 * @param request DeleteRoutineRouteRequest
 * @return DeleteRoutineRouteResponse
 */
DeleteRoutineRouteResponse Client::deleteRoutineRoute(const DeleteRoutineRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRoutineRouteWithOptions(request, runtime);
}

/**
 * @summary Deletes a single scheduled preload plan.
 *
 * @param request DeleteScheduledPreloadExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScheduledPreloadExecutionResponse
 */
DeleteScheduledPreloadExecutionResponse Client::deleteScheduledPreloadExecutionWithOptions(const DeleteScheduledPreloadExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
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
 * @summary Deletes a single scheduled preload plan.
 *
 * @param request DeleteScheduledPreloadExecutionRequest
 * @return DeleteScheduledPreloadExecutionResponse
 */
DeleteScheduledPreloadExecutionResponse Client::deleteScheduledPreloadExecution(const DeleteScheduledPreloadExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScheduledPreloadExecutionWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified scheduled preload job.
 *
 * @param request DeleteScheduledPreloadJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScheduledPreloadJobResponse
 */
DeleteScheduledPreloadJobResponse Client::deleteScheduledPreloadJobWithOptions(const DeleteScheduledPreloadJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
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
 * @summary Deletes a specified scheduled preload job.
 *
 * @param request DeleteScheduledPreloadJobRequest
 * @return DeleteScheduledPreloadJobResponse
 */
DeleteScheduledPreloadJobResponse Client::deleteScheduledPreloadJob(const DeleteScheduledPreloadJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScheduledPreloadJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a site by site ID.
 *
 * @param request DeleteSiteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSiteResponse
 */
DeleteSiteResponse Client::deleteSiteWithOptions(const DeleteSiteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Deletes a site by site ID.
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
    body["SiteId"] = request.getSiteId();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.getTaskName();
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
 * @summary Deletes a site-level origin client certificate.
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
 * @summary Deletes a site-level origin client certificate.
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
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Deletes page monitoring configurations.
 *
 * @param request DeleteUrlObservationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUrlObservationResponse
 */
DeleteUrlObservationResponse Client::deleteUrlObservationWithOptions(const DeleteUrlObservationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Deletes page monitoring configurations.
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
    body["TaskName"] = request.getTaskName();
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
 * @summary Deletes a WAF ruleset from a specified instance.
 *
 * @description ## Request description
 * - The `InstanceId` and `Id` parameters are required. These parameters specify the ID of the WAF instance and the ID of the ruleset to delete.
 *
 * @param request DeleteUserWafRulesetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserWafRulesetResponse
 */
DeleteUserWafRulesetResponse Client::deleteUserWafRulesetWithOptions(const DeleteUserWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteUserWafRuleset"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserWafRulesetResponse>();
}

/**
 * @summary Deletes a WAF ruleset from a specified instance.
 *
 * @description ## Request description
 * - The `InstanceId` and `Id` parameters are required. These parameters specify the ID of the WAF instance and the ID of the ruleset to delete.
 *
 * @param request DeleteUserWafRulesetRequest
 * @return DeleteUserWafRulesetResponse
 */
DeleteUserWafRulesetResponse Client::deleteUserWafRuleset(const DeleteUserWafRulesetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserWafRulesetWithOptions(request, runtime);
}

/**
 * @summary Deletes a video processing configuration.
 *
 * @param request DeleteVideoProcessingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVideoProcessingResponse
 */
DeleteVideoProcessingResponse Client::deleteVideoProcessingWithOptions(const DeleteVideoProcessingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Deletes a video processing configuration.
 *
 * @param request DeleteVideoProcessingRequest
 * @return DeleteVideoProcessingResponse
 */
DeleteVideoProcessingResponse Client::deleteVideoProcessing(const DeleteVideoProcessingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVideoProcessingWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified rule in Web Application Firewall (WAF). This operation also deletes the configurations and conditions associated with the rule.
 *
 * @param request DeleteWafRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWafRuleResponse
 */
DeleteWafRuleResponse Client::deleteWafRuleWithOptions(const DeleteWafRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
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
 * @summary Deletes a specified rule in Web Application Firewall (WAF). This operation also deletes the configurations and conditions associated with the rule.
 *
 * @param request DeleteWafRuleRequest
 * @return DeleteWafRuleResponse
 */
DeleteWafRuleResponse Client::deleteWafRule(const DeleteWafRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWafRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified Web Application Firewall (WAF) ruleset.
 *
 * @param request DeleteWafRulesetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWafRulesetResponse
 */
DeleteWafRulesetResponse Client::deleteWafRulesetWithOptions(const DeleteWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
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
 * @summary Deletes a specified Web Application Firewall (WAF) ruleset.
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
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasWaitingRoomId()) {
    query["WaitingRoomId"] = request.getWaitingRoomId();
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
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasWaitingRoomEventId()) {
    query["WaitingRoomEventId"] = request.getWaitingRoomEventId();
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
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasWaitingRoomRuleId()) {
    query["WaitingRoomRuleId"] = request.getWaitingRoomRuleId();
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
 * @summary Queries the price of a bot instance.
 *
 * @param request DescribeBotPriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBotPriceResponse
 */
DescribeBotPriceResponse Client::describeBotPriceWithOptions(const DescribeBotPriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBotInstanceLevel()) {
    query["BotInstanceLevel"] = request.getBotInstanceLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBotPrice"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBotPriceResponse>();
}

/**
 * @summary Queries the price of a bot instance.
 *
 * @param request DescribeBotPriceRequest
 * @return DescribeBotPriceResponse
 */
DescribeBotPriceResponse Client::describeBotPrice(const DescribeBotPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBotPriceWithOptions(request, runtime);
}

/**
 * @summary Invokes DescribeCacheReservePrice to query the price of a query cache reserve instance.
 *
 * @param request DescribeCacheReservePriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCacheReservePriceResponse
 */
DescribeCacheReservePriceResponse Client::describeCacheReservePriceWithOptions(const DescribeCacheReservePriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCrRegion()) {
    query["CrRegion"] = request.getCrRegion();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasQuotaGb()) {
    query["QuotaGb"] = request.getQuotaGb();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCacheReservePrice"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCacheReservePriceResponse>();
}

/**
 * @summary Invokes DescribeCacheReservePrice to query the price of a query cache reserve instance.
 *
 * @param request DescribeCacheReservePriceRequest
 * @return DescribeCacheReservePriceResponse
 */
DescribeCacheReservePriceResponse Client::describeCacheReservePrice(const DescribeCacheReservePriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCacheReservePriceWithOptions(request, runtime);
}

/**
 * @summary Queries the price for a configuration change of a cache reserve instance.
 *
 * @param request DescribeCacheReservePriceGapRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCacheReservePriceGapResponse
 */
DescribeCacheReservePriceGapResponse Client::describeCacheReservePriceGapWithOptions(const DescribeCacheReservePriceGapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTargetQuotaGb()) {
    query["TargetQuotaGb"] = request.getTargetQuotaGb();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCacheReservePriceGap"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCacheReservePriceGapResponse>();
}

/**
 * @summary Queries the price for a configuration change of a cache reserve instance.
 *
 * @param request DescribeCacheReservePriceGapRequest
 * @return DescribeCacheReservePriceGapResponse
 */
DescribeCacheReservePriceGapResponse Client::describeCacheReservePriceGap(const DescribeCacheReservePriceGapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCacheReservePriceGapWithOptions(request, runtime);
}

/**
 * @summary Retrieves the configurations of custom scene policies.
 *
 * @param request DescribeCustomScenePoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomScenePoliciesResponse
 */
DescribeCustomScenePoliciesResponse Client::describeCustomScenePoliciesWithOptions(const DescribeCustomScenePoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
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
 * @summary Retrieves the configurations of custom scene policies.
 *
 * @param request DescribeCustomScenePoliciesRequest
 * @return DescribeCustomScenePoliciesResponse
 */
DescribeCustomScenePoliciesResponse Client::describeCustomScenePolicies(const DescribeCustomScenePoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomScenePoliciesWithOptions(request, runtime);
}

/**
 * @summary Gets a list of DDoS attack events.
 *
 * @param request DescribeDDoSAllEventListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDoSAllEventListResponse
 */
DescribeDDoSAllEventListResponse Client::describeDDoSAllEventListWithOptions(const DescribeDDoSAllEventListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.getEventType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Gets a list of DDoS attack events.
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
 * @summary Queries the peak bits per second (BPS) and packets per second (PPS) data of DDoS attacks at the network layer.
 *
 * @param request DescribeDDoSBpsMaxRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDoSBpsMaxResponse
 */
DescribeDDoSBpsMaxResponse Client::describeDDoSBpsMaxWithOptions(const DescribeDDoSBpsMaxRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDDoSBpsMax"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDDoSBpsMaxResponse>();
}

/**
 * @summary Queries the peak bits per second (BPS) and packets per second (PPS) data of DDoS attacks at the network layer.
 *
 * @param request DescribeDDoSBpsMaxRequest
 * @return DescribeDDoSBpsMaxResponse
 */
DescribeDDoSBpsMaxResponse Client::describeDDoSBpsMax(const DescribeDDoSBpsMaxRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDoSBpsMaxWithOptions(request, runtime);
}

/**
 * @summary Queries the peak values of DDoS attack events within a specified time range.
 *
 * @param request DescribeDDoSEventMaxRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDoSEventMaxResponse
 */
DescribeDDoSEventMaxResponse Client::describeDDoSEventMaxWithOptions(const DescribeDDoSEventMaxRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDDoSEventMax"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDDoSEventMaxResponse>();
}

/**
 * @summary Queries the peak values of DDoS attack events within a specified time range.
 *
 * @param request DescribeDDoSEventMaxRequest
 * @return DescribeDDoSEventMaxResponse
 */
DescribeDDoSEventMaxResponse Client::describeDDoSEventMax(const DescribeDDoSEventMaxRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDoSEventMaxWithOptions(request, runtime);
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
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the number of DDoS attacks outside China.
 *
 * @param request DescribeDDoSOverseasAttackCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDDoSOverseasAttackCountResponse
 */
DescribeDDoSOverseasAttackCountResponse Client::describeDDoSOverseasAttackCountWithOptions(const DescribeDDoSOverseasAttackCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDDoSOverseasAttackCount"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDDoSOverseasAttackCountResponse>();
}

/**
 * @summary Queries the number of DDoS attacks outside China.
 *
 * @param request DescribeDDoSOverseasAttackCountRequest
 * @return DescribeDDoSOverseasAttackCountResponse
 */
DescribeDDoSOverseasAttackCountResponse Client::describeDDoSOverseasAttackCount(const DescribeDDoSOverseasAttackCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDDoSOverseasAttackCountWithOptions(request, runtime);
}

/**
 * @summary Queries the maximum burst bandwidth for a DDoS instance in mainland China.
 *
 * @param request DescribeDdosMaxBurstGbpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDdosMaxBurstGbpsResponse
 */
DescribeDdosMaxBurstGbpsResponse Client::describeDdosMaxBurstGbpsWithOptions(const DescribeDdosMaxBurstGbpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDdosMaxBurstGbps"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDdosMaxBurstGbpsResponse>();
}

/**
 * @summary Queries the maximum burst bandwidth for a DDoS instance in mainland China.
 *
 * @param request DescribeDdosMaxBurstGbpsRequest
 * @return DescribeDdosMaxBurstGbpsResponse
 */
DescribeDdosMaxBurstGbpsResponse Client::describeDdosMaxBurstGbps(const DescribeDdosMaxBurstGbpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDdosMaxBurstGbpsWithOptions(request, runtime);
}

/**
 * @summary Retrieves monitoring data for metrics of Edge Service Agent (ESA) edge containers.
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
 * @summary Retrieves monitoring data for metrics of Edge Service Agent (ESA) edge containers.
 *
 * @param request DescribeEdgeContainerAppStatsRequest
 * @return DescribeEdgeContainerAppStatsResponse
 */
DescribeEdgeContainerAppStatsResponse Client::describeEdgeContainerAppStats(const DescribeEdgeContainerAppStatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEdgeContainerAppStatsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the HTTP DDoS intelligent protection configuration, including the protection mode and protection level.
 *
 * @param request DescribeHttpDDoSAttackIntelligentProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHttpDDoSAttackIntelligentProtectionResponse
 */
DescribeHttpDDoSAttackIntelligentProtectionResponse Client::describeHttpDDoSAttackIntelligentProtectionWithOptions(const DescribeHttpDDoSAttackIntelligentProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Retrieves the HTTP DDoS intelligent protection configuration, including the protection mode and protection level.
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
    query["SiteId"] = request.getSiteId();
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
 * @summary Queries HTTP DDoS attack protection rules.
 *
 * @param request DescribeHttpDDoSAttackRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHttpDDoSAttackRulesResponse
 */
DescribeHttpDDoSAttackRulesResponse Client::describeHttpDDoSAttackRulesWithOptions(const DescribeHttpDDoSAttackRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHttpDDoSAttackRules"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHttpDDoSAttackRulesResponse>();
}

/**
 * @summary Queries HTTP DDoS attack protection rules.
 *
 * @param request DescribeHttpDDoSAttackRulesRequest
 * @return DescribeHttpDDoSAttackRulesResponse
 */
DescribeHttpDDoSAttackRulesResponse Client::describeHttpDDoSAttackRules(const DescribeHttpDDoSAttackRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHttpDDoSAttackRulesWithOptions(request, runtime);
}

/**
 * @summary Describes the accurate access control rules created by Deep Learning and Protection.
 *
 * @param request DescribeHttpDDoSIntelligentAclRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHttpDDoSIntelligentAclRulesResponse
 */
DescribeHttpDDoSIntelligentAclRulesResponse Client::describeHttpDDoSIntelligentAclRulesWithOptions(const DescribeHttpDDoSIntelligentAclRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHttpDDoSIntelligentAclRules"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHttpDDoSIntelligentAclRulesResponse>();
}

/**
 * @summary Describes the accurate access control rules created by Deep Learning and Protection.
 *
 * @param request DescribeHttpDDoSIntelligentAclRulesRequest
 * @return DescribeHttpDDoSIntelligentAclRulesResponse
 */
DescribeHttpDDoSIntelligentAclRulesResponse Client::describeHttpDDoSIntelligentAclRules(const DescribeHttpDDoSIntelligentAclRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHttpDDoSIntelligentAclRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the frequency control rules generated by Deep Learning and Protection.
 *
 * @param request DescribeHttpDDoSIntelligentRateLimitRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHttpDDoSIntelligentRateLimitRulesResponse
 */
DescribeHttpDDoSIntelligentRateLimitRulesResponse Client::describeHttpDDoSIntelligentRateLimitRulesWithOptions(const DescribeHttpDDoSIntelligentRateLimitRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRuleType()) {
    query["RuleType"] = request.getRuleType();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHttpDDoSIntelligentRateLimitRules"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHttpDDoSIntelligentRateLimitRulesResponse>();
}

/**
 * @summary Queries the frequency control rules generated by Deep Learning and Protection.
 *
 * @param request DescribeHttpDDoSIntelligentRateLimitRulesRequest
 * @return DescribeHttpDDoSIntelligentRateLimitRulesResponse
 */
DescribeHttpDDoSIntelligentRateLimitRulesResponse Client::describeHttpDDoSIntelligentRateLimitRules(const DescribeHttpDDoSIntelligentRateLimitRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHttpDDoSIntelligentRateLimitRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the status of an account in the KV service.
 *
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
 * @summary Queries the status of an account in the KV service.
 *
 * @return DescribeKvAccountStatusResponse
 */
DescribeKvAccountStatusResponse Client::describeKvAccountStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeKvAccountStatusWithOptions(runtime);
}

/**
 * @summary Queries prefetch tasks by time, task status, or prefetch URL.
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
 * @summary Queries prefetch tasks by time, task status, or prefetch URL.
 *
 * @param request DescribePreloadTasksRequest
 * @return DescribePreloadTasksResponse
 */
DescribePreloadTasksResponse Client::describePreloadTasks(const DescribePreloadTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePreloadTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the execution status of a refresh task.
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
 * @summary Queries the execution status of a refresh task.
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
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Queries the price of a plan, including its type and status.
 *
 * @description The purchase period is measured in months.
 *
 * @param request DescribeRatePlanPriceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRatePlanPriceResponse
 */
DescribeRatePlanPriceResponse Client::describeRatePlanPriceWithOptions(const DescribeRatePlanPriceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPlanName()) {
    query["PlanName"] = request.getPlanName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRatePlanPrice"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRatePlanPriceResponse>();
}

/**
 * @summary Queries the price of a plan, including its type and status.
 *
 * @description The purchase period is measured in months.
 *
 * @param request DescribeRatePlanPriceRequest
 * @return DescribeRatePlanPriceResponse
 */
DescribeRatePlanPriceResponse Client::describeRatePlanPrice(const DescribeRatePlanPriceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRatePlanPriceWithOptions(request, runtime);
}

/**
 * @summary Queries the price difference for a plan specification change by calling DescribeRatePlanPriceGap.
 *
 * @description The plan name and plan code can be obtained from the DescribeRatePlanPrice operation.
 *
 * @param request DescribeRatePlanPriceGapRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRatePlanPriceGapResponse
 */
DescribeRatePlanPriceGapResponse Client::describeRatePlanPriceGapWithOptions(const DescribeRatePlanPriceGapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasTargetPlanCode()) {
    query["TargetPlanCode"] = request.getTargetPlanCode();
  }

  if (!!request.hasTargetPlanName()) {
    query["TargetPlanName"] = request.getTargetPlanName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRatePlanPriceGap"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRatePlanPriceGapResponse>();
}

/**
 * @summary Queries the price difference for a plan specification change by calling DescribeRatePlanPriceGap.
 *
 * @description The plan name and plan code can be obtained from the DescribeRatePlanPrice operation.
 *
 * @param request DescribeRatePlanPriceGapRequest
 * @return DescribeRatePlanPriceGapResponse
 */
DescribeRatePlanPriceGapResponse Client::describeRatePlanPriceGap(const DescribeRatePlanPriceGapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRatePlanPriceGapWithOptions(request, runtime);
}

/**
 * @summary Queries the URLs from which you can download the raw access logs of a website.
 *
 * @description - If you do not specify StartTime and EndTime, log data from the last 24 hours is returned by default. If you specify StartTime and EndTime, log data for the specified time range is returned.
 * - The time granularity for data queries is one hour.
 * - The maximum number of calls per user: 50 calls per second.
 * - Only log records from the last month can be queried (the time span between the start time and the current time cannot exceed 31 days).
 *
 * @param request DescribeSiteLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSiteLogsResponse
 */
DescribeSiteLogsResponse Client::describeSiteLogsWithOptions(const DescribeSiteLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the URLs from which you can download the raw access logs of a website.
 *
 * @description - If you do not specify StartTime and EndTime, log data from the last 24 hours is returned by default. If you specify StartTime and EndTime, log data for the specified time range is returned.
 * - The time granularity for data queries is one hour.
 * - The maximum number of calls per user: 50 calls per second.
 * - Only log records from the last month can be queried (the time span between the start time and the current time cannot exceed 31 days).
 *
 * @param request DescribeSiteLogsRequest
 * @return DescribeSiteLogsResponse
 */
DescribeSiteLogsResponse Client::describeSiteLogs(const DescribeSiteLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSiteLogsWithOptions(request, runtime);
}

/**
 * @summary Query traffic analysis time series data
 *
 * @description - If you do not specify `StartTime` and `EndTime`, the API returns data for the past 24 hours; if you specify `StartTime` and `EndTime`, the API returns data for the specified time period.
 * - The API returns different time granularities based on the span between `StartTime` and `EndTime`.
 *   * For a span of 3 hours or less, it returns 1-minute granularity data.
 *   * For a span greater than 3 hours but no more than 12 hours, it returns 5-minute granularity data.
 *   * For a span greater than 12 hours but no more than 1 day, it returns 15-minute granularity data.
 *   * For a span greater than 1 day but no more than 10 days, it returns hourly granularity data.
 *   * For a span greater than 10 days but no more than 31 days, it returns daily granularity data.
 * - Due to the high number of accesses during the query period, the data analysis may be sampled.
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
    request.setFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFields(), "Fields", "json"));
  }

  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFieldsShrink()) {
    query["Fields"] = request.getFieldsShrink();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Query traffic analysis time series data
 *
 * @description - If you do not specify `StartTime` and `EndTime`, the API returns data for the past 24 hours; if you specify `StartTime` and `EndTime`, the API returns data for the specified time period.
 * - The API returns different time granularities based on the span between `StartTime` and `EndTime`.
 *   * For a span of 3 hours or less, it returns 1-minute granularity data.
 *   * For a span greater than 3 hours but no more than 12 hours, it returns 5-minute granularity data.
 *   * For a span greater than 12 hours but no more than 1 day, it returns 15-minute granularity data.
 *   * For a span greater than 1 day but no more than 10 days, it returns hourly granularity data.
 *   * For a span greater than 10 days but no more than 31 days, it returns daily granularity data.
 * - Due to the high number of accesses during the query period, the data analysis may be sampled.
 *
 * @param request DescribeSiteTimeSeriesDataRequest
 * @return DescribeSiteTimeSeriesDataResponse
 */
DescribeSiteTimeSeriesDataResponse Client::describeSiteTimeSeriesData(const DescribeSiteTimeSeriesDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSiteTimeSeriesDataWithOptions(request, runtime);
}

/**
 * @summary Queries the top-ranking records in a traffic analytics report by website or Alibaba Cloud account.
 *
 * @description - If you do not specify StartTime and EndTime, data from the last 24 hours is returned. If you specify StartTime and EndTime, data for the specified time range is returned.
 * - Due to a large number of visits during the queried time range, the data analytics results may be sampled.
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
    request.setFieldsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFields(), "Fields", "json"));
  }

  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFieldsShrink()) {
    query["Fields"] = request.getFieldsShrink();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the top-ranking records in a traffic analytics report by website or Alibaba Cloud account.
 *
 * @description - If you do not specify StartTime and EndTime, data from the last 24 hours is returned. If you specify StartTime and EndTime, data for the specified time range is returned.
 * - Due to a large number of visits during the queried time range, the data analytics results may be sampled.
 *
 * @param request DescribeSiteTopDataRequest
 * @return DescribeSiteTopDataResponse
 */
DescribeSiteTopDataResponse Client::describeSiteTopData(const DescribeSiteTopDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSiteTopDataWithOptions(request, runtime);
}

/**
 * @summary Get diagnostic report details. 1. Call GenerateTraceDiagnose to obtain the diagnostic link. 2. Open the link in a browser to complete client-side diagnosis. 3. Call ListTraceTasks to obtain the TaskId/TraceId. 4. Call this API to get the report.
 *
 * @description >Notice: Make sure you have activated the Layer 4 acceleration service before using this API.1. Call GenerateTraceDiagnose to obtain the diagnostic link. 2. Open the link in a browser to complete client-side diagnosis. 3. Call ListTraceTasks to obtain the TaskId/TraceId. 4. Call this API to get the report.
 *
 * @param request DescribeTraceDiagnoseReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTraceDiagnoseReportResponse
 */
DescribeTraceDiagnoseReportResponse Client::describeTraceDiagnoseReportWithOptions(const DescribeTraceDiagnoseReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTraceId()) {
    query["TraceId"] = request.getTraceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTraceDiagnoseReport"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTraceDiagnoseReportResponse>();
}

/**
 * @summary Get diagnostic report details. 1. Call GenerateTraceDiagnose to obtain the diagnostic link. 2. Open the link in a browser to complete client-side diagnosis. 3. Call ListTraceTasks to obtain the TaskId/TraceId. 4. Call this API to get the report.
 *
 * @description >Notice: Make sure you have activated the Layer 4 acceleration service before using this API.1. Call GenerateTraceDiagnose to obtain the diagnostic link. 2. Open the link in a browser to complete client-side diagnosis. 3. Call ListTraceTasks to obtain the TaskId/TraceId. 4. Call this API to get the report.
 *
 * @param request DescribeTraceDiagnoseReportRequest
 * @return DescribeTraceDiagnoseReportResponse
 */
DescribeTraceDiagnoseReportResponse Client::describeTraceDiagnoseReport(const DescribeTraceDiagnoseReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTraceDiagnoseReportWithOptions(request, runtime);
}

/**
 * @summary Queries the page monitoring data.
 *
 * @param request DescribeUrlObservationDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUrlObservationDataResponse
 */
DescribeUrlObservationDataResponse Client::describeUrlObservationDataWithOptions(const DescribeUrlObservationDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientPlatform()) {
    query["ClientPlatform"] = request.getClientPlatform();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMetric()) {
    query["Metric"] = request.getMetric();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
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
 * @summary Queries the page monitoring data.
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
    query["PolicyId"] = request.getPolicyId();
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
    request.setSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSettings(), "Settings", "json"));
  }

  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  json body = {};
  if (!!request.hasSettingsShrink()) {
    body["Settings"] = request.getSettingsShrink();
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
    query["PolicyId"] = request.getPolicyId();
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
 * @summary Generates a diagnosis link.
 *
 * @param request GenerateTraceDiagnoseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateTraceDiagnoseResponse
 */
GenerateTraceDiagnoseResponse Client::generateTraceDiagnoseWithOptions(const GenerateTraceDiagnoseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateTraceDiagnose"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateTraceDiagnoseResponse>();
}

/**
 * @summary Generates a diagnosis link.
 *
 * @param request GenerateTraceDiagnoseRequest
 * @return GenerateTraceDiagnoseResponse
 */
GenerateTraceDiagnoseResponse Client::generateTraceDiagnose(const GenerateTraceDiagnoseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateTraceDiagnoseWithOptions(request, runtime);
}

/**
 * @summary Retrieves usage information for an API schema validation plan.
 *
 * @param request GetApiSchemaUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApiSchemaUsageResponse
 */
GetApiSchemaUsageResponse Client::getApiSchemaUsageWithOptions(const GetApiSchemaUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApiSchemaUsage"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApiSchemaUsageResponse>();
}

/**
 * @summary Retrieves usage information for an API schema validation plan.
 *
 * @param request GetApiSchemaUsageRequest
 * @return GetApiSchemaUsageResponse
 */
GetApiSchemaUsageResponse Client::getApiSchemaUsage(const GetApiSchemaUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApiSchemaUsageWithOptions(request, runtime);
}

/**
 * @summary Queries the automatic frequency control configuration for a site.
 *
 * @param request GetAutomaticFrequencyControlConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutomaticFrequencyControlConfigResponse
 */
GetAutomaticFrequencyControlConfigResponse Client::getAutomaticFrequencyControlConfigWithOptions(const GetAutomaticFrequencyControlConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAutomaticFrequencyControlConfig"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAutomaticFrequencyControlConfigResponse>();
}

/**
 * @summary Queries the automatic frequency control configuration for a site.
 *
 * @param request GetAutomaticFrequencyControlConfigRequest
 * @return GetAutomaticFrequencyControlConfigResponse
 */
GetAutomaticFrequencyControlConfigResponse Client::getAutomaticFrequencyControlConfig(const GetAutomaticFrequencyControlConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutomaticFrequencyControlConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the available specifications of cache reserve instances.
 *
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
 * @summary Retrieves a single cache configuration.
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
 * @summary Retrieves a single cache configuration.
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
 * @summary Retrieves a specified certificate for a site.
 *
 * @param request GetCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCertificateResponse
 */
GetCertificateResponse Client::getCertificateWithOptions(const GetCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCertificate"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCertificateResponse>();
}

/**
 * @summary Retrieves a specified certificate for a site.
 *
 * @param request GetCertificateRequest
 * @return GetCertificateResponse
 */
GetCertificateResponse Client::getCertificate(const GetCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCertificateWithOptions(request, runtime);
}

/**
 * @summary Queries the quota and usage of free certificates.
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
 * @summary Queries the quota and usage of free certificates.
 *
 * @param request GetCertificateQuotaRequest
 * @return GetCertificateQuotaResponse
 */
GetCertificateQuotaResponse Client::getCertificateQuota(const GetCertificateQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCertificateQuotaWithOptions(request, runtime);
}

/**
 * @summary Gets the specified client CA certificate.
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
 * @summary Gets the specified client CA certificate.
 *
 * @param request GetClientCaCertificateRequest
 * @return GetClientCaCertificateResponse
 */
GetClientCaCertificateResponse Client::getClientCaCertificate(const GetClientCaCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClientCaCertificateWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of hostnames bound to a specified client CA certificate. If no certificate is specified, this operation returns the list of hostnames bound to the ESA CA certificate.
 *
 * @param request GetClientCaCertificateHostnamesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClientCaCertificateHostnamesResponse
 */
GetClientCaCertificateHostnamesResponse Client::getClientCaCertificateHostnamesWithOptions(const GetClientCaCertificateHostnamesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClientCaCertificateHostnames"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClientCaCertificateHostnamesResponse>();
}

/**
 * @summary Retrieves the list of hostnames bound to a specified client CA certificate. If no certificate is specified, this operation returns the list of hostnames bound to the ESA CA certificate.
 *
 * @param request GetClientCaCertificateHostnamesRequest
 * @return GetClientCaCertificateHostnamesResponse
 */
GetClientCaCertificateHostnamesResponse Client::getClientCaCertificateHostnames(const GetClientCaCertificateHostnamesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClientCaCertificateHostnamesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified client certificate.
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
 * @summary Retrieves the details of a specified client certificate.
 *
 * @param request GetClientCertificateRequest
 * @return GetClientCertificateResponse
 */
GetClientCertificateResponse Client::getClientCertificate(const GetClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClientCertificateWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of hostnames bound to a specified client CA certificate. If you do not specify a certificate, the operation returns the list of hostnames for the ESA CA certificate.
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
 * @summary Retrieves the list of hostnames bound to a specified client CA certificate. If you do not specify a certificate, the operation returns the list of hostnames for the ESA CA certificate.
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
 * @summary Queries the configuration of Chinese mainland access optimization.
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
 * @summary Queries the configuration of Chinese mainland access optimization.
 *
 * @param request GetCrossBorderOptimizationRequest
 * @return GetCrossBorderOptimizationResponse
 */
GetCrossBorderOptimizationResponse Client::getCrossBorderOptimization(const GetCrossBorderOptimizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCrossBorderOptimizationWithOptions(request, runtime);
}

/**
 * @summary Retrieves the detailed configuration of a single SaaS domain name, including the domain verification TXT name, domain verification TXT content, and certificate expiration time (when SSL is enabled).
 *
 * @param request GetCustomHostnameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomHostnameResponse
 */
GetCustomHostnameResponse Client::getCustomHostnameWithOptions(const GetCustomHostnameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostnameId()) {
    query["HostnameId"] = request.getHostnameId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomHostname"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomHostnameResponse>();
}

/**
 * @summary Retrieves the detailed configuration of a single SaaS domain name, including the domain verification TXT name, domain verification TXT content, and certificate expiration time (when SSL is enabled).
 *
 * @param request GetCustomHostnameRequest
 * @return GetCustomHostnameResponse
 */
GetCustomHostnameResponse Client::getCustomHostname(const GetCustomHostnameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomHostnameWithOptions(request, runtime);
}

/**
 * @summary Retrieve details about a site\\"s custom response code configuration.
 *
 * @param request GetCustomResponseCodeRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomResponseCodeRuleResponse
 */
GetCustomResponseCodeRuleResponse Client::getCustomResponseCodeRuleWithOptions(const GetCustomResponseCodeRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomResponseCodeRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomResponseCodeRuleResponse>();
}

/**
 * @summary Retrieve details about a site\\"s custom response code configuration.
 *
 * @param request GetCustomResponseCodeRuleRequest
 * @return GetCustomResponseCodeRuleResponse
 */
GetCustomResponseCodeRuleResponse Client::getCustomResponseCodeRule(const GetCustomResponseCodeRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomResponseCodeRuleWithOptions(request, runtime);
}

/**
 * @summary Retrieves the delegated DCV information.
 *
 * @param request GetDcvDelegationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDcvDelegationResponse
 */
GetDcvDelegationResponse Client::getDcvDelegationWithOptions(const GetDcvDelegationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDcvDelegation"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDcvDelegationResponse>();
}

/**
 * @summary Retrieves the delegated DCV information.
 *
 * @param request GetDcvDelegationRequest
 * @return GetDcvDelegationResponse
 */
GetDcvDelegationResponse Client::getDcvDelegation(const GetDcvDelegationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDcvDelegationWithOptions(request, runtime);
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
 * @summary GetEdgeImage
 *
 * @param request GetEdgeContainerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEdgeContainerResponse
 */
GetEdgeContainerResponse Client::getEdgeContainerWithOptions(const GetEdgeContainerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEdgeContainer"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEdgeContainerResponse>();
}

/**
 * @summary GetEdgeImage
 *
 * @param request GetEdgeContainerRequest
 * @return GetEdgeContainerResponse
 */
GetEdgeContainerResponse Client::getEdgeContainer(const GetEdgeContainerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEdgeContainerWithOptions(request, runtime);
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
    query["AppId"] = request.getAppId();
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
 * @summary Retrieves the log collection configuration of an edge container application.
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
 * @summary Retrieves the log collection configuration of an edge container application.
 *
 * @param request GetEdgeContainerAppLogRiverRequest
 * @return GetEdgeContainerAppLogRiverResponse
 */
GetEdgeContainerAppLogRiverResponse Client::getEdgeContainerAppLogRiver(const GetEdgeContainerAppLogRiverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEdgeContainerAppLogRiverWithOptions(request, runtime);
}

/**
 * @summary Get the resource capacity of an edge container application
 *
 * @param request GetEdgeContainerAppResourceCapacityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEdgeContainerAppResourceCapacityResponse
 */
GetEdgeContainerAppResourceCapacityResponse Client::getEdgeContainerAppResourceCapacityWithOptions(const GetEdgeContainerAppResourceCapacityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEdgeContainerAppResourceCapacity"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEdgeContainerAppResourceCapacityResponse>();
}

/**
 * @summary Get the resource capacity of an edge container application
 *
 * @param request GetEdgeContainerAppResourceCapacityRequest
 * @return GetEdgeContainerAppResourceCapacityResponse
 */
GetEdgeContainerAppResourceCapacityResponse Client::getEdgeContainerAppResourceCapacity(const GetEdgeContainerAppResourceCapacityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEdgeContainerAppResourceCapacityWithOptions(request, runtime);
}

/**
 * @summary Retrieves the resource reservation configuration of an edge container application.
 *
 * @param request GetEdgeContainerAppResourceReserveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEdgeContainerAppResourceReserveResponse
 */
GetEdgeContainerAppResourceReserveResponse Client::getEdgeContainerAppResourceReserveWithOptions(const GetEdgeContainerAppResourceReserveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
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
 * @summary Retrieves the resource reservation configuration of an edge container application.
 *
 * @param request GetEdgeContainerAppResourceReserveRequest
 * @return GetEdgeContainerAppResourceReserveResponse
 */
GetEdgeContainerAppResourceReserveResponse Client::getEdgeContainerAppResourceReserve(const GetEdgeContainerAppResourceReserveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEdgeContainerAppResourceReserveWithOptions(request, runtime);
}

/**
 * @summary Obtains the distribution of edge container application resources.
 *
 * @param request GetEdgeContainerAppResourceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEdgeContainerAppResourceStatusResponse
 */
GetEdgeContainerAppResourceStatusResponse Client::getEdgeContainerAppResourceStatusWithOptions(const GetEdgeContainerAppResourceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
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
 * @summary Obtains the distribution of edge container application resources.
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
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasPublishEnv()) {
    query["PublishEnv"] = request.getPublishEnv();
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
 * @summary Retrieves the deployment regions of an edge container application by application ID.
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
 * @summary Retrieves the deployment regions of an edge container application by application ID.
 *
 * @param request GetEdgeContainerDeployRegionsRequest
 * @return GetEdgeContainerDeployRegionsResponse
 */
GetEdgeContainerDeployRegionsResponse Client::getEdgeContainerDeployRegions(const GetEdgeContainerDeployRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEdgeContainerDeployRegionsWithOptions(request, runtime);
}

/**
 * @summary Retrieves log information for an edge container. You can specify the number of output lines.
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
 * @summary Retrieves log information for an edge container. You can specify the number of output lines.
 *
 * @param request GetEdgeContainerLogsRequest
 * @return GetEdgeContainerLogsResponse
 */
GetEdgeContainerLogsResponse Client::getEdgeContainerLogs(const GetEdgeContainerLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEdgeContainerLogsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the staging environment deployment status of an application by application ID.
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
 * @summary Retrieves the staging environment deployment status of an application by application ID.
 *
 * @param request GetEdgeContainerStagingDeployStatusRequest
 * @return GetEdgeContainerStagingDeployStatusResponse
 */
GetEdgeContainerStagingDeployStatusResponse Client::getEdgeContainerStagingDeployStatus(const GetEdgeContainerStagingDeployStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEdgeContainerStagingDeployStatusWithOptions(request, runtime);
}

/**
 * @summary Retrieves terminal information of an edge container application.
 *
 * @param request GetEdgeContainerTerminalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEdgeContainerTerminalResponse
 */
GetEdgeContainerTerminalResponse Client::getEdgeContainerTerminalWithOptions(const GetEdgeContainerTerminalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
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
 * @summary Retrieves terminal information of an edge container application.
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
 * @summary Downloads a failed file.
 *
 * @param request GetFailFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFailFileResponse
 */
GetFailFileResponse Client::getFailFileWithOptions(const GetFailFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFailFile"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFailFileResponse>();
}

/**
 * @summary Downloads a failed file.
 *
 * @param request GetFailFileRequest
 * @return GetFailFileResponse
 */
GetFailFileResponse Client::getFailFile(const GetFailFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFailFileWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration details of an HTTP request header modification rule for a website.
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
 * @summary Queries the configuration details of an HTTP request header modification rule for a website.
 *
 * @param request GetHttpIncomingRequestHeaderModificationRuleRequest
 * @return GetHttpIncomingRequestHeaderModificationRuleResponse
 */
GetHttpIncomingRequestHeaderModificationRuleResponse Client::getHttpIncomingRequestHeaderModificationRule(const GetHttpIncomingRequestHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHttpIncomingRequestHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration details of an incoming HTTP response header modification rule for a website.
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
 * @summary Queries the configuration details of an incoming HTTP response header modification rule for a website.
 *
 * @param request GetHttpIncomingResponseHeaderModificationRuleRequest
 * @return GetHttpIncomingResponseHeaderModificationRuleResponse
 */
GetHttpIncomingResponseHeaderModificationRuleResponse Client::getHttpIncomingResponseHeaderModificationRule(const GetHttpIncomingResponseHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHttpIncomingResponseHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an HTTP request header modification rule for a site.
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
 * @summary Retrieves the details of an HTTP request header modification rule for a site.
 *
 * @param request GetHttpRequestHeaderModificationRuleRequest
 * @return GetHttpRequestHeaderModificationRuleResponse
 */
GetHttpRequestHeaderModificationRuleResponse Client::getHttpRequestHeaderModificationRule(const GetHttpRequestHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHttpRequestHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an HTTP response header modification rule for a site.
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
 * @summary Queries the details of an HTTP response header modification rule for a site.
 *
 * @param request GetHttpResponseHeaderModificationRuleRequest
 * @return GetHttpResponseHeaderModificationRuleResponse
 */
GetHttpResponseHeaderModificationRuleResponse Client::getHttpResponseHeaderModificationRule(const GetHttpResponseHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHttpResponseHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Retrieves a single HTTPS application configuration.
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
 * @summary Retrieves a single HTTPS application configuration.
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
 * @summary Queries the IPv6 configuration for a site.
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
 * @summary Queries the IPv6 configuration for a site.
 *
 * @param request GetIPv6Request
 * @return GetIPv6Response
 */
GetIPv6Response Client::getIPv6(const GetIPv6Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIPv6WithOptions(request, runtime);
}

/**
 * @summary Queries a single site image transformation configuration.
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
 * @summary Queries a single site image transformation configuration.
 *
 * @param request GetImageTransformRequest
 * @return GetImageTransformResponse
 */
GetImageTransformResponse Client::getImageTransform(const GetImageTransformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageTransformWithOptions(request, runtime);
}

/**
 * @summary Retrieves the configuration of a keyless server.
 *
 * @param request GetKeylessServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKeylessServerResponse
 */
GetKeylessServerResponse Client::getKeylessServerWithOptions(const GetKeylessServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKeylessServer"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKeylessServerResponse>();
}

/**
 * @summary Retrieves the configuration of a keyless server.
 *
 * @param request GetKeylessServerRequest
 * @return GetKeylessServerResponse
 */
GetKeylessServerResponse Client::getKeylessServer(const GetKeylessServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getKeylessServerWithOptions(request, runtime);
}

/**
 * @summary Retrieves the value of a specified key.
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
 * @summary Retrieves the value of a specified key.
 *
 * @param request GetKvRequest
 * @return GetKvResponse
 */
GetKvResponse Client::getKv(const GetKvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getKvWithOptions(request, runtime);
}

/**
 * @summary Retrieves usage information for an account in the KV service, including a list of all namespaces.
 *
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
 * @summary Retrieves usage information for an account in the KV service, including a list of all namespaces.
 *
 * @return GetKvAccountResponse
 */
GetKvAccountResponse Client::getKvAccount() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getKvAccountWithOptions(runtime);
}

/**
 * @summary Queries the value and time to live (TTL) of a key.
 *
 * @param request GetKvDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetKvDetailResponse
 */
GetKvDetailResponse Client::getKvDetailWithOptions(const GetKvDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetKvDetail"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetKvDetailResponse>();
}

/**
 * @summary Queries the value and time to live (TTL) of a key.
 *
 * @param request GetKvDetailRequest
 * @return GetKvDetailResponse
 */
GetKvDetailResponse Client::getKvDetail(const GetKvDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getKvDetailWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about a specific namespace.
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
 * @summary Retrieves information about a specific namespace.
 *
 * @param request GetKvNamespaceRequest
 * @return GetKvNamespaceResponse
 */
GetKvNamespaceResponse Client::getKvNamespace(const GetKvNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getKvNamespaceWithOptions(request, runtime);
}

/**
 * @summary Queries a custom list, such as the name, description, type, and content.
 *
 * @param request GetListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetListResponse
 */
GetListResponse Client::getListWithOptions(const GetListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
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
 * @summary Queries a custom list, such as the name, description, type, and content.
 *
 * @param request GetListRequest
 * @return GetListResponse
 */
GetListResponse Client::getList(const GetListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a load balancer by its site ID and load balancer ID.
 *
 * @description Use this API to query the configuration details of a load balancer, such as its name, session persistence policy, and routing policy, by providing its resource identifier and authentication information.
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
 * @summary Retrieves the details of a load balancer by its site ID and load balancer ID.
 *
 * @description Use this API to query the configuration details of a load balancer, such as its name, session persistence policy, and routing policy, by providing its resource identifier and authentication information.
 *
 * @param request GetLoadBalancerRequest
 * @return GetLoadBalancerResponse
 */
GetLoadBalancerResponse Client::getLoadBalancer(const GetLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary Retrieves the managed transform configuration for a site.
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
 * @summary Retrieves the managed transform configuration for a site.
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
 * @summary Get the CA certificate of the source server.
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
 * @summary Get the CA certificate of the source server.
 *
 * @param request GetOriginCaCertificateRequest
 * @return GetOriginCaCertificateResponse
 */
GetOriginCaCertificateResponse Client::getOriginCaCertificate(const GetOriginCaCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOriginCaCertificateWithOptions(request, runtime);
}

/**
 * @summary Retrieves origin-pull client certificate information for a domain.
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
 * @summary Retrieves origin-pull client certificate information for a domain.
 *
 * @param request GetOriginClientCertificateRequest
 * @return GetOriginClientCertificateResponse
 */
GetOriginClientCertificateResponse Client::getOriginClientCertificate(const GetOriginClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOriginClientCertificateWithOptions(request, runtime);
}

/**
 * @summary Retrieves the hostnames associated with a specific origin client certificate.
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
 * @summary Retrieves the hostnames associated with a specific origin client certificate.
 *
 * @param request GetOriginClientCertificateHostnamesRequest
 * @return GetOriginClientCertificateHostnamesResponse
 */
GetOriginClientCertificateHostnamesResponse Client::getOriginClientCertificateHostnames(const GetOriginClientCertificateHostnamesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOriginClientCertificateHostnamesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a specific source address pool by its source address pool ID.
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
 * @summary Retrieves a specific source address pool by its source address pool ID.
 *
 * @param request GetOriginPoolRequest
 * @return GetOriginPoolResponse
 */
GetOriginPoolResponse Client::getOriginPool(const GetOriginPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOriginPoolWithOptions(request, runtime);
}

/**
 * @summary Queries site origin protection configurations, including the origin protection switch, the origin convergence switch, whether the origin IP whitelist needs to be updated, and detailed information about the origin IP whitelist, including the current origin IP whitelist used by the site, the latest origin IP whitelist, and the differences between them.
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
 * @summary Queries site origin protection configurations, including the origin protection switch, the origin convergence switch, whether the origin IP whitelist needs to be updated, and detailed information about the origin IP whitelist, including the current origin IP whitelist used by the site, the latest origin IP whitelist, and the differences between them.
 *
 * @param request GetOriginProtectionRequest
 * @return GetOriginProtectionResponse
 */
GetOriginProtectionResponse Client::getOriginProtection(const GetOriginProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOriginProtectionWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of a single origin rule.
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
 * @summary Queries the configurations of a single origin rule.
 *
 * @param request GetOriginRuleRequest
 * @return GetOriginRuleResponse
 */
GetOriginRuleResponse Client::getOriginRule(const GetOriginRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOriginRuleWithOptions(request, runtime);
}

/**
 * @summary Gets the details of a custom response page by its ID.
 *
 * @param request GetPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPageResponse
 */
GetPageResponse Client::getPageWithOptions(const GetPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
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
 * @summary Gets the details of a custom response page by its ID.
 *
 * @param request GetPageRequest
 * @return GetPageResponse
 */
GetPageResponse Client::getPage(const GetPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPageWithOptions(request, runtime);
}

/**
 * @summary Queries the data quality collection configuration.
 *
 * @param request GetPerformanceDataCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPerformanceDataCollectionResponse
 */
GetPerformanceDataCollectionResponse Client::getPerformanceDataCollectionWithOptions(const GetPerformanceDataCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPerformanceDataCollection"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPerformanceDataCollectionResponse>();
}

/**
 * @summary Queries the data quality collection configuration.
 *
 * @param request GetPerformanceDataCollectionRequest
 * @return GetPerformanceDataCollectionResponse
 */
GetPerformanceDataCollectionResponse Client::getPerformanceDataCollection(const GetPerformanceDataCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPerformanceDataCollectionWithOptions(request, runtime);
}

/**
 * @summary Retrieves the quota and used quota for different refresh types.
 *
 * @param request GetPurgeQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPurgeQuotaResponse
 */
GetPurgeQuotaResponse Client::getPurgeQuotaWithOptions(const GetPurgeQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPurgeQuota"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPurgeQuotaResponse>();
}

/**
 * @summary Retrieves the quota and used quota for different refresh types.
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
 * @summary Retrieves the detailed configuration of a single DNS record, including the record value, priority, and back-to-origin authentication configuration (exclusive to CNAME records).
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
 * @summary Retrieves the detailed configuration of a single DNS record, including the record value, priority, and back-to-origin authentication configuration (exclusive to CNAME records).
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
 * @summary Queries all configuration information of an Edge Routine, including the code version list, environment configuration list, associated domain name configuration list, and associated route configuration list.
 *
 * @param request GetRoutineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRoutineResponse
 */
GetRoutineResponse Client::getRoutineWithOptions(const GetRoutineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
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
 * @summary Queries all configuration information of an Edge Routine, including the code version list, environment configuration list, associated domain name configuration list, and associated route configuration list.
 *
 * @param request GetRoutineRequest
 * @return GetRoutineResponse
 */
GetRoutineResponse Client::getRoutine(const GetRoutineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRoutineWithOptions(request, runtime);
}

/**
 * @summary 查询Routine默认访问记录访问鉴权token
 *
 * @param request GetRoutineAccessTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRoutineAccessTokenResponse
 */
GetRoutineAccessTokenResponse Client::getRoutineAccessTokenWithOptions(const GetRoutineAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetRoutineAccessToken"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRoutineAccessTokenResponse>();
}

/**
 * @summary 查询Routine默认访问记录访问鉴权token
 *
 * @param request GetRoutineAccessTokenRequest
 * @return GetRoutineAccessTokenResponse
 */
GetRoutineAccessTokenResponse Client::getRoutineAccessToken(const GetRoutineAccessTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRoutineAccessTokenWithOptions(request, runtime);
}

/**
 * @summary Queries the code information of a specific version of an Edge Routine.
 *
 * @param request GetRoutineCodeVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRoutineCodeVersionResponse
 */
GetRoutineCodeVersionResponse Client::getRoutineCodeVersionWithOptions(const GetRoutineCodeVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCodeVersion()) {
    body["CodeVersion"] = request.getCodeVersion();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
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
 * @summary Queries the code information of a specific version of an Edge Routine.
 *
 * @param request GetRoutineCodeVersionRequest
 * @return GetRoutineCodeVersionResponse
 */
GetRoutineCodeVersionResponse Client::getRoutineCodeVersion(const GetRoutineCodeVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRoutineCodeVersionWithOptions(request, runtime);
}

/**
 * @summary Queries the status and other information of a specific code version of a specified Edge Routine.
 *
 * @description ## Operation description
 * By calling this API operation, you can retrieve detailed information about a specific Edge Routine at a specified version, including but not limited to the version status, creation time, and whether the version contains asset resource files. You must provide the Edge Routine name and the specific code version number as request parameters.
 *
 * @param request GetRoutineCodeVersionInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRoutineCodeVersionInfoResponse
 */
GetRoutineCodeVersionInfoResponse Client::getRoutineCodeVersionInfoWithOptions(const GetRoutineCodeVersionInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCodeVersion()) {
    body["CodeVersion"] = request.getCodeVersion();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetRoutineCodeVersionInfo"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRoutineCodeVersionInfoResponse>();
}

/**
 * @summary Queries the status and other information of a specific code version of a specified Edge Routine.
 *
 * @description ## Operation description
 * By calling this API operation, you can retrieve detailed information about a specific Edge Routine at a specified version, including but not limited to the version status, creation time, and whether the version contains asset resource files. You must provide the Edge Routine name and the specific code version number as request parameters.
 *
 * @param request GetRoutineCodeVersionInfoRequest
 * @return GetRoutineCodeVersionInfoResponse
 */
GetRoutineCodeVersionInfoResponse Client::getRoutineCodeVersionInfo(const GetRoutineCodeVersionInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRoutineCodeVersionInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves a specific edge function route configuration.
 *
 * @param request GetRoutineRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRoutineRouteResponse
 */
GetRoutineRouteResponse Client::getRoutineRouteWithOptions(const GetRoutineRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Retrieves a specific edge function route configuration.
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
    body["CodeDescription"] = request.getCodeDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
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
 * @summary 查询边缘函数测试环境IP
 *
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
 * @summary 查询边缘函数测试环境IP
 *
 * @return GetRoutineStagingEnvIpResponse
 */
GetRoutineStagingEnvIpResponse Client::getRoutineStagingEnvIp() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRoutineStagingEnvIpWithOptions(runtime);
}

/**
 * @summary 查询用户的Routine列表
 *
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
 * @summary 查询用户的Routine列表
 *
 * @return GetRoutineUserInfoResponse
 */
GetRoutineUserInfoResponse Client::getRoutineUserInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRoutineUserInfoWithOptions(runtime);
}

/**
 * @summary Queries a single scheduled prefetch task by task ID.
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
 * @summary Queries a single scheduled prefetch task by task ID.
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
 * @summary Retrieves the details of a site by its ID.
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
 * @summary Retrieves the details of a site by its ID.
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
 * @summary Retrieves the details of a real-time log delivery task.
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
 * @summary Retrieves the details of a real-time log delivery task.
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
 * @description Use this operation to query the remaining quota for delivering a specific category of real-time logs in a website within an Alibaba Cloud account. This is essential for monitoring and managing your log delivery capacity to ensure that logs can be delivered to the destination and prevent data loss or latency caused by insufficient quota.
 * **Take note of the following parameters:**
 * - \\`\\`
 * - `BusinessType` is required. You must specify a log category to obtain the corresponding quota information.
 * - `SiteId` specifies the ID of a website, which must be a valid integer that corresponds to a website that you configured on Alibaba Cloud.
 * **Response:**
 * - If a request is successful, the system returns the remaining log delivery quota (`FreeQuota`), request ID (`RequestId`), website ID (`SiteId`), and log category (`BusinessType`). You can confirm and record the returned data.
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
 * @description Use this operation to query the remaining quota for delivering a specific category of real-time logs in a website within an Alibaba Cloud account. This is essential for monitoring and managing your log delivery capacity to ensure that logs can be delivered to the destination and prevent data loss or latency caused by insufficient quota.
 * **Take note of the following parameters:**
 * - \\`\\`
 * - `BusinessType` is required. You must specify a log category to obtain the corresponding quota information.
 * - `SiteId` specifies the ID of a website, which must be a valid integer that corresponds to a website that you configured on Alibaba Cloud.
 * **Response:**
 * - If a request is successful, the system returns the remaining log delivery quota (`FreeQuota`), request ID (`RequestId`), website ID (`SiteId`), and log category (`BusinessType`). You can confirm and record the returned data.
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
 * @summary Retrieves origin-pull client certificate information at the site level.
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
 * @summary Retrieves origin-pull client certificate information at the site level.
 *
 * @param request GetSiteOriginClientCertificateRequest
 * @return GetSiteOriginClientCertificateResponse
 */
GetSiteOriginClientCertificateResponse Client::getSiteOriginClientCertificate(const GetSiteOriginClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSiteOriginClientCertificateWithOptions(request, runtime);
}

/**
 * @summary Queries the site pause configuration.
 *
 * @description This API applies only to sites that use NS mode.
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
 * @summary Queries the site pause configuration.
 *
 * @description This API applies only to sites that use NS mode.
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
    query["Path"] = request.getPath();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
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
 * @summary Queries the details of a Layer 4 application.
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
 * @summary Queries the details of a Layer 4 application.
 *
 * @param request GetTransportLayerApplicationRequest
 * @return GetTransportLayerApplicationResponse
 */
GetTransportLayerApplicationResponse Client::getTransportLayerApplication(const GetTransportLayerApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTransportLayerApplicationWithOptions(request, runtime);
}

/**
 * @summary Queries the execution status and runtime information of a file upload task by task ID.
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
 * @summary Queries the execution status and runtime information of a file upload task by task ID.
 *
 * @param request GetUploadTaskRequest
 * @return GetUploadTaskResponse
 */
GetUploadTaskResponse Client::getUploadTask(const GetUploadTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUploadTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the delivery configuration and status of a task for a specific user.
 *
 * @description - **Function**: This operation retrieves detailed delivery information for a specific task of an Alibaba Cloud user, including the task name, discard rate, region, business type, status, delivery type, delivery configuration, and filter rules.
 * - **Use case**: Use this operation to review the log processing and delivery configuration for a specific task. This helps you analyze processing efficiency or troubleshoot issues.
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
 * @summary Queries the delivery configuration and status of a task for a specific user.
 *
 * @description - **Function**: This operation retrieves detailed delivery information for a specific task of an Alibaba Cloud user, including the task name, discard rate, region, business type, status, delivery type, delivery configuration, and filter rules.
 * - **Use case**: Use this operation to review the log processing and delivery configuration for a specific task. This helps you analyze processing efficiency or troubleshoot issues.
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
 * @summary This API retrieves the details of the WAF rule set for a specified instance.
 *
 * @description ## Request
 * `GetUserWafRuleset` retrieves the details of a specific Web Application Firewall (WAF) ruleset, identified by its instance ID and ruleset ID. The response includes details such as the ruleset\\"s location, name, description, status, and its rules. Specify all required parameters correctly to prevent request failures.
 *
 * @param request GetUserWafRulesetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserWafRulesetResponse
 */
GetUserWafRulesetResponse Client::getUserWafRulesetWithOptions(const GetUserWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserWafRuleset"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserWafRulesetResponse>();
}

/**
 * @summary This API retrieves the details of the WAF rule set for a specified instance.
 *
 * @description ## Request
 * `GetUserWafRuleset` retrieves the details of a specific Web Application Firewall (WAF) ruleset, identified by its instance ID and ruleset ID. The response includes details such as the ruleset\\"s location, name, description, status, and its rules. Specify all required parameters correctly to prevent request failures.
 *
 * @param request GetUserWafRulesetRequest
 * @return GetUserWafRulesetResponse
 */
GetUserWafRulesetResponse Client::getUserWafRuleset(const GetUserWafRulesetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserWafRulesetWithOptions(request, runtime);
}

/**
 * @summary Queries the video processing configuration details of a site.
 *
 * @param request GetVideoProcessingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoProcessingResponse
 */
GetVideoProcessingResponse Client::getVideoProcessingWithOptions(const GetVideoProcessingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Queries the video processing configuration details of a site.
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
 * @summary Retrieves matching engine information for a site at a given WAF phase, which defines how the WAF detects and handles various network requests.
 *
 * @param request GetWafFilterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWafFilterResponse
 */
GetWafFilterResponse Client::getWafFilterWithOptions(const GetWafFilterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPhase()) {
    query["Phase"] = request.getPhase();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasTarget()) {
    query["Target"] = request.getTarget();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Retrieves matching engine information for a site at a given WAF phase, which defines how the WAF detects and handles various network requests.
 *
 * @param request GetWafFilterRequest
 * @return GetWafFilterResponse
 */
GetWafFilterResponse Client::getWafFilter(const GetWafFilterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWafFilterWithOptions(request, runtime);
}

/**
 * @summary Web Application Firewall (WAF) quotas define the maximum number of resources a customer can use, including managed rule groups, custom lists, custom response pages, and scenario-based protection rules.
 *
 * @param request GetWafQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWafQuotaResponse
 */
GetWafQuotaResponse Client::getWafQuotaWithOptions(const GetWafQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPaths()) {
    query["Paths"] = request.getPaths();
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
 * @summary Web Application Firewall (WAF) quotas define the maximum number of resources a customer can use, including managed rule groups, custom lists, custom response pages, and scenario-based protection rules.
 *
 * @param request GetWafQuotaRequest
 * @return GetWafQuotaResponse
 */
GetWafQuotaResponse Client::getWafQuota(const GetWafQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWafQuotaWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specific WAF rule, including its configuration and status.
 *
 * @param request GetWafRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWafRuleResponse
 */
GetWafRuleResponse Client::getWafRuleWithOptions(const GetWafRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Retrieves the details of a specific WAF rule, including its configuration and status.
 *
 * @param request GetWafRuleRequest
 * @return GetWafRuleResponse
 */
GetWafRuleResponse Client::getWafRule(const GetWafRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWafRuleWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified WAF ruleset, including its configuration and status.
 *
 * @param request GetWafRulesetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWafRulesetResponse
 */
GetWafRulesetResponse Client::getWafRulesetWithOptions(const GetWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasPhase()) {
    query["Phase"] = request.getPhase();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Retrieves the details of a specified WAF ruleset, including its configuration and status.
 *
 * @param request GetWafRulesetRequest
 * @return GetWafRulesetResponse
 */
GetWafRulesetResponse Client::getWafRuleset(const GetWafRulesetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWafRulesetWithOptions(request, runtime);
}

/**
 * @summary Queries the cache reserve instances for your account.
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
 * @summary Queries the cache reserve instances for your account.
 *
 * @param request ListCacheReserveInstancesRequest
 * @return ListCacheReserveInstancesResponse
 */
ListCacheReserveInstancesResponse Client::listCacheReserveInstances(const ListCacheReserveInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCacheReserveInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries multiple cache configurations.
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
 * @summary Queries multiple cache configurations.
 *
 * @param request ListCacheRulesRequest
 * @return ListCacheRulesResponse
 */
ListCacheRulesResponse Client::listCacheRules(const ListCacheRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCacheRulesWithOptions(request, runtime);
}

/**
 * @summary 查询证书列表，支持翻页
 *
 * @param request ListCasCertificatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCasCertificatesResponse
 */
ListCasCertificatesResponse Client::listCasCertificatesWithOptions(const ListCasCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchKeyword()) {
    query["SearchKeyword"] = request.getSearchKeyword();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCasCertificates"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCasCertificatesResponse>();
}

/**
 * @summary 查询证书列表，支持翻页
 *
 * @param request ListCasCertificatesRequest
 * @return ListCasCertificatesResponse
 */
ListCasCertificatesResponse Client::listCasCertificates(const ListCasCertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCasCertificatesWithOptions(request, runtime);
}

/**
 * @summary Lists the certificates for a given site.
 *
 * @param request ListCertificatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCertificatesResponse
 */
ListCertificatesResponse Client::listCertificatesWithOptions(const ListCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasValidOnly()) {
    query["ValidOnly"] = request.getValidOnly();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCertificates"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCertificatesResponse>();
}

/**
 * @summary Lists the certificates for a given site.
 *
 * @param request ListCertificatesRequest
 * @return ListCertificatesResponse
 */
ListCertificatesResponse Client::listCertificates(const ListCertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCertificatesWithOptions(request, runtime);
}

/**
 * @summary Retrieves site certificates for multiple matching records.
 *
 * @param request ListCertificatesByRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCertificatesByRecordResponse
 */
ListCertificatesByRecordResponse Client::listCertificatesByRecordWithOptions(const ListCertificatesByRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDetail()) {
    query["Detail"] = request.getDetail();
  }

  if (!!request.hasRecordName()) {
    query["RecordName"] = request.getRecordName();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasValidOnly()) {
    query["ValidOnly"] = request.getValidOnly();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCertificatesByRecord"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCertificatesByRecordResponse>();
}

/**
 * @summary Retrieves site certificates for multiple matching records.
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
 * @summary Retrieves the client CA certificates for a specified site.
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
 * @summary Retrieves the client CA certificates for a specified site.
 *
 * @param request ListClientCaCertificatesRequest
 * @return ListClientCaCertificatesResponse
 */
ListClientCaCertificatesResponse Client::listClientCaCertificates(const ListClientCaCertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClientCaCertificatesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of client certificates for a specified site.
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
 * @summary Retrieves a list of client certificates for a specified site.
 *
 * @param request ListClientCertificatesRequest
 * @return ListClientCertificatesResponse
 */
ListClientCertificatesResponse Client::listClientCertificates(const ListClientCertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClientCertificatesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of compression rule configurations.
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
 * @summary Queries the list of compression rule configurations.
 *
 * @param request ListCompressionRulesRequest
 * @return ListCompressionRulesResponse
 */
ListCompressionRulesResponse Client::listCompressionRules(const ListCompressionRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCompressionRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of SaaS domain names under a site, including the ID, status, and domain name verification information of each SaaS domain name. You can filter results by SaaS domain name, site ID, or associated record ID.
 *
 * @param request ListCustomHostnamesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomHostnamesResponse
 */
ListCustomHostnamesResponse Client::listCustomHostnamesWithOptions(const ListCustomHostnamesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostname()) {
    query["Hostname"] = request.getHostname();
  }

  if (!!request.hasNameMatchType()) {
    query["NameMatchType"] = request.getNameMatchType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomHostnames"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomHostnamesResponse>();
}

/**
 * @summary Queries the list of SaaS domain names under a site, including the ID, status, and domain name verification information of each SaaS domain name. You can filter results by SaaS domain name, site ID, or associated record ID.
 *
 * @param request ListCustomHostnamesRequest
 * @return ListCustomHostnamesResponse
 */
ListCustomHostnamesResponse Client::listCustomHostnames(const ListCustomHostnamesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomHostnamesWithOptions(request, runtime);
}

/**
 * @summary Query the list of custom response code configurations for a site.
 *
 * @param request ListCustomResponseCodeRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomResponseCodeRulesResponse
 */
ListCustomResponseCodeRulesResponse Client::listCustomResponseCodeRulesWithOptions(const ListCustomResponseCodeRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasConfigType()) {
    query["ConfigType"] = request.getConfigType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomResponseCodeRules"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomResponseCodeRulesResponse>();
}

/**
 * @summary Query the list of custom response code configurations for a site.
 *
 * @param request ListCustomResponseCodeRulesRequest
 * @return ListCustomResponseCodeRulesResponse
 */
ListCustomResponseCodeRulesResponse Client::listCustomResponseCodeRules(const ListCustomResponseCodeRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomResponseCodeRulesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of purchased DDoS protection instances.
 *
 * @param request ListDDoSInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDDoSInstancesResponse
 */
ListDDoSInstancesResponse Client::listDDoSInstancesWithOptions(const ListDDoSInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSiteInstanceId()) {
    query["SiteInstanceId"] = request.getSiteInstanceId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.getSortOrder();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDDoSInstances"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDDoSInstancesResponse>();
}

/**
 * @summary Retrieves a list of purchased DDoS protection instances.
 *
 * @param request ListDDoSInstancesRequest
 * @return ListDDoSInstancesResponse
 */
ListDDoSInstancesResponse Client::listDDoSInstances(const ListDDoSInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDDoSInstancesWithOptions(request, runtime);
}

/**
 * @summary Batch query whether the IP address is included in the ESA resolution result.
 *
 * @description Checks whether vs_addr values in the vipInfo collection are VIPs.
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
 * @summary Batch query whether the IP address is included in the ESA resolution result.
 *
 * @description Checks whether vs_addr values in the vipInfo collection are VIPs.
 *
 * @param request ListESAIPInfoRequest
 * @return ListESAIPInfoResponse
 */
ListESAIPInfoResponse Client::listESAIPInfo(const ListESAIPInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listESAIPInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of image secrets for an edge container application.
 *
 * @param request ListEdgeContainerAppImageSecretsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEdgeContainerAppImageSecretsResponse
 */
ListEdgeContainerAppImageSecretsResponse Client::listEdgeContainerAppImageSecretsWithOptions(const ListEdgeContainerAppImageSecretsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEdgeContainerAppImageSecrets"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEdgeContainerAppImageSecretsResponse>();
}

/**
 * @summary Retrieves the list of image secrets for an edge container application.
 *
 * @param request ListEdgeContainerAppImageSecretsRequest
 * @return ListEdgeContainerAppImageSecretsResponse
 */
ListEdgeContainerAppImageSecretsResponse Client::listEdgeContainerAppImageSecrets(const ListEdgeContainerAppImageSecretsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEdgeContainerAppImageSecretsWithOptions(request, runtime);
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
    query["OrderKey"] = request.getOrderKey();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  if (!!request.hasSearchType()) {
    query["SearchType"] = request.getSearchType();
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
 * @summary Queries the list of edge routing records for a site.
 *
 * @description > API call frequency: 100 calls per second.
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
 * @summary Queries the list of edge routing records for a site.
 *
 * @description > API call frequency: 100 calls per second.
 *
 * @param request ListEdgeRoutineRecordsRequest
 * @return ListEdgeRoutineRecordsResponse
 */
ListEdgeRoutineRecordsResponse Client::listEdgeRoutineRecords(const ListEdgeRoutineRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEdgeRoutineRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of HTTP incoming request header modification configurations for a site.
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
 * @summary Queries the list of HTTP incoming request header modification configurations for a site.
 *
 * @param request ListHttpIncomingRequestHeaderModificationRulesRequest
 * @return ListHttpIncomingRequestHeaderModificationRulesResponse
 */
ListHttpIncomingRequestHeaderModificationRulesResponse Client::listHttpIncomingRequestHeaderModificationRules(const ListHttpIncomingRequestHeaderModificationRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHttpIncomingRequestHeaderModificationRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of configurations for modifying HTTP incoming response headers of a site.
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
 * @summary Queries the list of configurations for modifying HTTP incoming response headers of a site.
 *
 * @param request ListHttpIncomingResponseHeaderModificationRulesRequest
 * @return ListHttpIncomingResponseHeaderModificationRulesResponse
 */
ListHttpIncomingResponseHeaderModificationRulesResponse Client::listHttpIncomingResponseHeaderModificationRules(const ListHttpIncomingResponseHeaderModificationRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHttpIncomingResponseHeaderModificationRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of HTTP request header modification configurations.
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
 * @summary Queries the list of HTTP request header modification configurations.
 *
 * @param request ListHttpRequestHeaderModificationRulesRequest
 * @return ListHttpRequestHeaderModificationRulesResponse
 */
ListHttpRequestHeaderModificationRulesResponse Client::listHttpRequestHeaderModificationRules(const ListHttpRequestHeaderModificationRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHttpRequestHeaderModificationRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of HTTP response header modification configurations for a site.
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
 * @summary Queries the list of HTTP response header modification configurations for a site.
 *
 * @param request ListHttpResponseHeaderModificationRulesRequest
 * @return ListHttpResponseHeaderModificationRulesResponse
 */
ListHttpResponseHeaderModificationRulesResponse Client::listHttpResponseHeaderModificationRules(const ListHttpResponseHeaderModificationRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHttpResponseHeaderModificationRulesWithOptions(request, runtime);
}

/**
 * @summary Query multiple HTTPS application configurations.
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
 * @summary Query multiple HTTPS application configurations.
 *
 * @param request ListHttpsApplicationConfigurationsRequest
 * @return ListHttpsApplicationConfigurationsResponse
 */
ListHttpsApplicationConfigurationsResponse Client::listHttpsApplicationConfigurations(const ListHttpsApplicationConfigurationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHttpsApplicationConfigurationsWithOptions(request, runtime);
}

/**
 * @summary Queries multiple HTTPS basic configurations.
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
 * @summary Queries multiple HTTPS basic configurations.
 *
 * @param request ListHttpsBasicConfigurationsRequest
 * @return ListHttpsBasicConfigurationsResponse
 */
ListHttpsBasicConfigurationsResponse Client::listHttpsBasicConfigurations(const ListHttpsBasicConfigurationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHttpsBasicConfigurationsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of image transformation configurations for a site.
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
 * @summary Queries the list of image transformation configurations for a site.
 *
 * @param request ListImageTransformsRequest
 * @return ListImageTransformsResponse
 */
ListImageTransformsResponse Client::listImageTransforms(const ListImageTransformsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listImageTransformsWithOptions(request, runtime);
}

/**
 * @summary Queries the quota details of the plan associated with a specific instance or site by quota name.
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
 * @summary Queries the quota details of the plan associated with a specific instance or site by quota name.
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
 * @summary Retrieves keyless server configurations for a site.
 *
 * @param request ListKeylessServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListKeylessServersResponse
 */
ListKeylessServersResponse Client::listKeylessServersWithOptions(const ListKeylessServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListKeylessServers"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListKeylessServersResponse>();
}

/**
 * @summary Retrieves keyless server configurations for a site.
 *
 * @param request ListKeylessServersRequest
 * @return ListKeylessServersResponse
 */
ListKeylessServersResponse Client::listKeylessServers(const ListKeylessServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listKeylessServersWithOptions(request, runtime);
}

/**
 * @summary Lists all key-value pairs in a specified KV storage namespace under your account.
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
 * @summary Lists all key-value pairs in a specified KV storage namespace under your account.
 *
 * @param request ListKvsRequest
 * @return ListKvsResponse
 */
ListKvsResponse Client::listKvs(const ListKvsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listKvsWithOptions(request, runtime);
}

/**
 * @summary Lists all custom lists and their details for an account. Use query parameters to filter the results and pagination to navigate the list collection.
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
    request.setQueryArgsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueryArgs(), "QueryArgs", "json"));
  }

  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryArgsShrink()) {
    query["QueryArgs"] = request.getQueryArgsShrink();
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
 * @summary Lists all custom lists and their details for an account. Use query parameters to filter the results and pagination to navigate the list collection.
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
 * @summary Retrieves a paged list of load balancers in a specific site, returning their details. You can filter the list by load balancer name.
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
 * @summary Retrieves a paged list of load balancers in a specific site, returning their details. You can filter the list by load balancer name.
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
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Queries multiple network optimization configurations.
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
 * @summary Queries multiple network optimization configurations.
 *
 * @param request ListNetworkOptimizationsRequest
 * @return ListNetworkOptimizationsResponse
 */
ListNetworkOptimizationsResponse Client::listNetworkOptimizations(const ListNetworkOptimizationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNetworkOptimizationsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the CA certificates for the source server.
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
 * @summary Retrieves the CA certificates for the source server.
 *
 * @param request ListOriginCaCertificatesRequest
 * @return ListOriginCaCertificatesResponse
 */
ListOriginCaCertificatesResponse Client::listOriginCaCertificates(const ListOriginCaCertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOriginCaCertificatesWithOptions(request, runtime);
}

/**
 * @summary Lists back-to-source client certificates for a domain name.
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
 * @summary Lists back-to-source client certificates for a domain name.
 *
 * @param request ListOriginClientCertificatesRequest
 * @return ListOriginClientCertificatesResponse
 */
ListOriginClientCertificatesResponse Client::listOriginClientCertificates(const ListOriginClientCertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOriginClientCertificatesWithOptions(request, runtime);
}

/**
 * @summary Lists all origin pools within a site. Supports pagination and searching by origin pool name (exact or fuzzy).
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
 * @summary Lists all origin pools within a site. Supports pagination and searching by origin pool name (exact or fuzzy).
 *
 * @param request ListOriginPoolsRequest
 * @return ListOriginPoolsResponse
 */
ListOriginPoolsResponse Client::listOriginPools(const ListOriginPoolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOriginPoolsWithOptions(request, runtime);
}

/**
 * @summary Query multiple back-to-origin rule configurations.
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
 * @summary Query multiple back-to-origin rule configurations.
 *
 * @param request ListOriginRulesRequest
 * @return ListOriginRulesResponse
 */
ListOriginRulesResponse Client::listOriginRules(const ListOriginRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listOriginRulesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of your custom response pages. This operation supports pagination, allowing you to control the results by specifying a page number and a page size.
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
    request.setQueryArgsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueryArgs(), "QueryArgs", "json"));
  }

  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryArgsShrink()) {
    query["QueryArgs"] = request.getQueryArgsShrink();
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
 * @summary Retrieves a list of your custom response pages. This operation supports pagination, allowing you to control the results by specifying a page number and a page size.
 *
 * @param request ListPagesRequest
 * @return ListPagesResponse
 */
ListPagesResponse Client::listPages(const ListPagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPagesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of pay-as-you-go plan instances.
 *
 * @description Queries the list of pay-as-you-go plan instances under your account. You can filter and sort the results by multiple conditions.
 *
 * @param request ListPostpaidRatePlanInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPostpaidRatePlanInstancesResponse
 */
ListPostpaidRatePlanInstancesResponse Client::listPostpaidRatePlanInstancesWithOptions(const ListPostpaidRatePlanInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPostpaidRatePlanInstances"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPostpaidRatePlanInstancesResponse>();
}

/**
 * @summary Queries the list of pay-as-you-go plan instances.
 *
 * @description Queries the list of pay-as-you-go plan instances under your account. You can filter and sort the results by multiple conditions.
 *
 * @param request ListPostpaidRatePlanInstancesRequest
 * @return ListPostpaidRatePlanInstancesResponse
 */
ListPostpaidRatePlanInstancesResponse Client::listPostpaidRatePlanInstances(const ListPostpaidRatePlanInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPostpaidRatePlanInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of DNS records under a site, including record values, priorities, authentication configurations, etc. Supports filtering by conditions such as record name and record type.
 *
 * @description DNS records corresponding to edge containers, edge functions, and Layer 4 acceleration will not be returned by this API.
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
 * @summary Queries the list of DNS records under a site, including record values, priorities, authentication configurations, etc. Supports filtering by conditions such as record name and record type.
 *
 * @description DNS records corresponding to edge containers, edge functions, and Layer 4 acceleration will not be returned by this API.
 *
 * @param request ListRecordsRequest
 * @return ListRecordsResponse
 */
ListRecordsResponse Client::listRecords(const ListRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the redirect configuration list of a site.
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
 * @summary Queries the redirect configuration list of a site.
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
 * @summary 查询Routine灰度环境列表
 *
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
 * @summary 查询Routine灰度环境列表
 *
 * @return ListRoutineCanaryAreasResponse
 */
ListRoutineCanaryAreasResponse Client::listRoutineCanaryAreas() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRoutineCanaryAreasWithOptions(runtime);
}

/**
 * @summary Queries the code version information of a specified Edge Routine program by paging.
 *
 * @description Queries the code version list of a specified Edge Routine program. This operation supports paging and fuzzy search. You can set the Name parameter to specify the Edge Routine program name, use PageNumber and PageSize for paging control, and use SearchKeyWord for fuzzy matching against code version descriptions.
 * The response includes detailed information about each code version, such as the revision number, description, and creation time.
 *
 * @param request ListRoutineCodeVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRoutineCodeVersionsResponse
 */
ListRoutineCodeVersionsResponse Client::listRoutineCodeVersionsWithOptions(const ListRoutineCodeVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchKeyWord()) {
    body["SearchKeyWord"] = request.getSearchKeyWord();
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
 * @summary Queries the code version information of a specified Edge Routine program by paging.
 *
 * @description Queries the code version list of a specified Edge Routine program. This operation supports paging and fuzzy search. You can set the Name parameter to specify the Edge Routine program name, use PageNumber and PageSize for paging control, and use SearchKeyWord for fuzzy matching against code version descriptions.
 * The response includes detailed information about each code version, such as the revision number, description, and creation time.
 *
 * @param request ListRoutineCodeVersionsRequest
 * @return ListRoutineCodeVersionsResponse
 */
ListRoutineCodeVersionsResponse Client::listRoutineCodeVersions(const ListRoutineCodeVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRoutineCodeVersionsWithOptions(request, runtime);
}

/**
 * @summary The records associated with the function.
 *
 * @description Queries the list of related records for a specified edge routine. You can use pagination parameters to retrieve partial results, or use fuzzy keywords to filter specific record entries.
 *
 * @param request ListRoutineRelatedRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRoutineRelatedRecordsResponse
 */
ListRoutineRelatedRecordsResponse Client::listRoutineRelatedRecordsWithOptions(const ListRoutineRelatedRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchKeyWord()) {
    body["SearchKeyWord"] = request.getSearchKeyWord();
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
 * @summary The records associated with the function.
 *
 * @description Queries the list of related records for a specified edge routine. You can use pagination parameters to retrieve partial results, or use fuzzy keywords to filter specific record entries.
 *
 * @param request ListRoutineRelatedRecordsRequest
 * @return ListRoutineRelatedRecordsResponse
 */
ListRoutineRelatedRecordsResponse Client::listRoutineRelatedRecords(const ListRoutineRelatedRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRoutineRelatedRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the function route list of an Edge Routine.
 *
 * @param request ListRoutineRoutesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRoutineRoutesResponse
 */
ListRoutineRoutesResponse Client::listRoutineRoutesWithOptions(const ListRoutineRoutesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRoutineName()) {
    query["RoutineName"] = request.getRoutineName();
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
 * @summary Queries the function route list of an Edge Routine.
 *
 * @param request ListRoutineRoutesRequest
 * @return ListRoutineRoutesResponse
 */
ListRoutineRoutesResponse Client::listRoutineRoutes(const ListRoutineRoutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRoutineRoutesWithOptions(request, runtime);
}

/**
 * @summary Lists the execution plans of a specified scheduled prefetch task by task ID.
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
 * @summary Lists the execution plans of a specified scheduled prefetch task by task ID.
 *
 * @param request ListScheduledPreloadExecutionsRequest
 * @return ListScheduledPreloadExecutionsResponse
 */
ListScheduledPreloadExecutionsResponse Client::listScheduledPreloadExecutions(const ListScheduledPreloadExecutionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScheduledPreloadExecutionsWithOptions(request, runtime);
}

/**
 * @summary Lists scheduled prefetch tasks for a site.
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
 * @summary Lists scheduled prefetch tasks for a site.
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
 * @summary Lists the back-to-origin client certificates for a site.
 *
 * @param request ListSiteOriginClientCertificatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSiteOriginClientCertificatesResponse
 */
ListSiteOriginClientCertificatesResponse Client::listSiteOriginClientCertificatesWithOptions(const ListSiteOriginClientCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSiteOriginClientCertificates"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSiteOriginClientCertificatesResponse>();
}

/**
 * @summary Lists the back-to-origin client certificates for a site.
 *
 * @param request ListSiteOriginClientCertificatesRequest
 * @return ListSiteOriginClientCertificatesResponse
 */
ListSiteOriginClientCertificatesResponse Client::listSiteOriginClientCertificates(const ListSiteOriginClientCertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSiteOriginClientCertificatesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the function routes for a site.
 *
 * @param request ListSiteRoutesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSiteRoutesResponse
 */
ListSiteRoutesResponse Client::listSiteRoutesWithOptions(const ListSiteRoutesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasConfigType()) {
    query["ConfigType"] = request.getConfigType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRouteName()) {
    query["RouteName"] = request.getRouteName();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Retrieves the function routes for a site.
 *
 * @param request ListSiteRoutesRequest
 * @return ListSiteRoutesResponse
 */
ListSiteRoutesResponse Client::listSiteRoutes(const ListSiteRoutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSiteRoutesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of sites under the current user, including site names, statuses, and configurations.
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
    request.setTagFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagFilter(), "TagFilter", "json"));
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
 * @summary Queries the list of sites under the current user, including site names, statuses, and configurations.
 *
 * @param request ListSitesRequest
 * @return ListSitesResponse
 */
ListSitesResponse Client::listSites(const ListSitesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSitesWithOptions(request, runtime);
}

/**
 * @summary Queries tags by region ID and resource type.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxItem()) {
    query["MaxItem"] = request.getMaxItem();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary Queries tags by region ID and resource type.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of diagnostic tasks.
 *
 * @param request ListTraceTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTraceTasksResponse
 */
ListTraceTasksResponse Client::listTraceTasksWithOptions(const ListTraceTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientIp()) {
    query["ClientIp"] = request.getClientIp();
  }

  if (!!request.hasDiagnoseId()) {
    query["DiagnoseId"] = request.getDiagnoseId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTraceId()) {
    query["TraceId"] = request.getTraceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTraceTasks"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTraceTasksResponse>();
}

/**
 * @summary Retrieves a list of diagnostic tasks.
 *
 * @param request ListTraceTasksRequest
 * @return ListTraceTasksResponse
 */
ListTraceTasksResponse Client::listTraceTasks(const ListTraceTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTraceTasksWithOptions(request, runtime);
}

/**
 * @summary Query the list of Layer 4 applications for a site.
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
 * @summary Query the list of Layer 4 applications for a site.
 *
 * @param request ListTransportLayerApplicationsRequest
 * @return ListTransportLayerApplicationsResponse
 */
ListTransportLayerApplicationsResponse Client::listTransportLayerApplications(const ListTransportLayerApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTransportLayerApplicationsWithOptions(request, runtime);
}

/**
 * @summary Lists the execution status and runtime information of file upload tasks by time and type.
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
 * @summary Lists the execution status and runtime information of file upload tasks by time and type.
 *
 * @param request ListUploadTasksRequest
 * @return ListUploadTasksResponse
 */
ListUploadTasksResponse Client::listUploadTasks(const ListUploadTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUploadTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the list of page monitoring configurations.
 *
 * @param request ListUrlObservationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUrlObservationsResponse
 */
ListUrlObservationsResponse Client::listUrlObservationsWithOptions(const ListUrlObservationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Queries the list of page monitoring configurations.
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
 * @summary Queries the plan instances purchased by the user and their details.
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
 * @summary Queries the plan instances purchased by the user and their details.
 *
 * @param request ListUserRatePlanInstancesRequest
 * @return ListUserRatePlanInstancesResponse
 */
ListUserRatePlanInstancesResponse Client::listUserRatePlanInstances(const ListUserRatePlanInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserRatePlanInstancesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a paginated list of Edge Routines created by the user along with quota information.
 *
 * @description This operation allows you to perform a paged query for all Edge Routines created under your account. It also returns the Edge Routine quota for your current plan and the number of Edge Routines already in use. You can specify the PageNumber and PageSize paging parameters to control the number of results returned, and use SearchKeyWord to perform a fuzzy search to filter Routine names.
 *
 * @param request ListUserRoutinesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserRoutinesResponse
 */
ListUserRoutinesResponse Client::listUserRoutinesWithOptions(const ListUserRoutinesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchKeyWord()) {
    query["SearchKeyWord"] = request.getSearchKeyWord();
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
 * @summary Retrieves a paginated list of Edge Routines created by the user along with quota information.
 *
 * @description This operation allows you to perform a paged query for all Edge Routines created under your account. It also returns the Edge Routine quota for your current plan and the number of Edge Routines already in use. You can specify the PageNumber and PageSize paging parameters to control the number of results returned, and use SearchKeyWord to perform a fuzzy search to filter Routine names.
 *
 * @param request ListUserRoutinesRequest
 * @return ListUserRoutinesResponse
 */
ListUserRoutinesResponse Client::listUserRoutines(const ListUserRoutinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserRoutinesWithOptions(request, runtime);
}

/**
 * @summary Retrieves WAF rule sets for a specified instance, allowing filtering by phase, name, and other criteria.
 *
 * @description ## Request
 * - `InstanceId` is a required parameter that specifies the WAF instance to query.
 * - The `Phase` parameter filters rule sets by WAF processing phase, such as custom rules and rate limiting rules.
 * - Use `NameLike` in `QueryArgs` to perform a fuzzy search on rule set names.
 * - The `PageNumber` and `PageSize` parameters control pagination and default to 1 and 20, respectively.
 * - The response includes the request ID, current plan usage, the total record count, and a list of rule set details.
 *
 * @param tmpReq ListUserWafRulesetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserWafRulesetsResponse
 */
ListUserWafRulesetsResponse Client::listUserWafRulesetsWithOptions(const ListUserWafRulesetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListUserWafRulesetsShrinkRequest request = ListUserWafRulesetsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQueryArgs()) {
    request.setQueryArgsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueryArgs(), "QueryArgs", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPhase()) {
    query["Phase"] = request.getPhase();
  }

  if (!!request.hasQueryArgsShrink()) {
    query["QueryArgs"] = request.getQueryArgsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserWafRulesets"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserWafRulesetsResponse>();
}

/**
 * @summary Retrieves WAF rule sets for a specified instance, allowing filtering by phase, name, and other criteria.
 *
 * @description ## Request
 * - `InstanceId` is a required parameter that specifies the WAF instance to query.
 * - The `Phase` parameter filters rule sets by WAF processing phase, such as custom rules and rate limiting rules.
 * - Use `NameLike` in `QueryArgs` to perform a fuzzy search on rule set names.
 * - The `PageNumber` and `PageSize` parameters control pagination and default to 1 and 20, respectively.
 * - The response includes the request ID, current plan usage, the total record count, and a list of rule set details.
 *
 * @param request ListUserWafRulesetsRequest
 * @return ListUserWafRulesetsResponse
 */
ListUserWafRulesetsResponse Client::listUserWafRulesets(const ListUserWafRulesetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserWafRulesetsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of video processing configurations for a site.
 *
 * @param request ListVideoProcessingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVideoProcessingsResponse
 */
ListVideoProcessingsResponse Client::listVideoProcessingsWithOptions(const ListVideoProcessingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasConfigType()) {
    query["ConfigType"] = request.getConfigType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
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
 * @summary Queries the list of video processing configurations for a site.
 *
 * @param request ListVideoProcessingsRequest
 * @return ListVideoProcessingsResponse
 */
ListVideoProcessingsResponse Client::listVideoProcessings(const ListVideoProcessingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVideoProcessingsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of WAF managed rules, optionally filtered by specific criteria. The response is paginated.
 *
 * @param tmpReq ListWafManagedRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWafManagedRulesResponse
 */
ListWafManagedRulesResponse Client::listWafManagedRulesWithOptions(const ListWafManagedRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListWafManagedRulesShrinkRequest request = ListWafManagedRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasManagedRuleset()) {
    request.setManagedRulesetShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getManagedRuleset(), "ManagedRuleset", "json"));
  }

  if (!!tmpReq.hasQueryArgs()) {
    request.setQueryArgsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueryArgs(), "QueryArgs", "json"));
  }

  json query = {};
  if (!!request.hasAttackType()) {
    query["AttackType"] = request.getAttackType();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasManagedRulesetShrink()) {
    query["ManagedRuleset"] = request.getManagedRulesetShrink();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProtectionLevel()) {
    query["ProtectionLevel"] = request.getProtectionLevel();
  }

  if (!!request.hasQueryArgsShrink()) {
    query["QueryArgs"] = request.getQueryArgsShrink();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Retrieves a list of WAF managed rules, optionally filtered by specific criteria. The response is paginated.
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
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
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
 * @summary This API retrieves a paginated list of detailed WAF rules, which can be filtered by specific conditions.
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
    request.setQueryArgsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueryArgs(), "QueryArgs", "json"));
  }

  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPhase()) {
    query["Phase"] = request.getPhase();
  }

  if (!!request.hasQueryArgsShrink()) {
    query["QueryArgs"] = request.getQueryArgsShrink();
  }

  if (!!request.hasRulesetId()) {
    query["RulesetId"] = request.getRulesetId();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
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
 * @summary This API retrieves a paginated list of detailed WAF rules, which can be filtered by specific conditions.
 *
 * @param request ListWafRulesRequest
 * @return ListWafRulesResponse
 */
ListWafRulesResponse Client::listWafRules(const ListWafRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWafRulesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a paginated list of rule sets in the current WAF runtime phase, returning their basic information and status.
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
    request.setQueryArgsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueryArgs(), "QueryArgs", "json"));
  }

  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPhase()) {
    query["Phase"] = request.getPhase();
  }

  if (!!request.hasQueryArgsShrink()) {
    query["QueryArgs"] = request.getQueryArgsShrink();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
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
 * @summary Retrieves a paginated list of rule sets in the current WAF runtime phase, returning their basic information and status.
 *
 * @param request ListWafRulesetsRequest
 * @return ListWafRulesetsResponse
 */
ListWafRulesetsResponse Client::listWafRulesets(const ListWafRulesetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWafRulesetsWithOptions(request, runtime);
}

/**
 * @summary Lists the template rules in WAF. These rules are typically predefined rulesets for quickly enabling protection against common attack types.
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
    request.setQueryArgsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQueryArgs(), "QueryArgs", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPhase()) {
    query["Phase"] = request.getPhase();
  }

  if (!!request.hasQueryArgsShrink()) {
    query["QueryArgs"] = request.getQueryArgsShrink();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Lists the template rules in WAF. These rules are typically predefined rulesets for quickly enabling protection against common attack types.
 *
 * @param request ListWafTemplateRulesRequest
 * @return ListWafTemplateRulesResponse
 */
ListWafTemplateRulesResponse Client::listWafTemplateRules(const ListWafTemplateRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWafTemplateRulesWithOptions(request, runtime);
}

/**
 * @summary Lists the usage of WAF rules.
 *
 * @param request ListWafUsageOfRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWafUsageOfRulesResponse
 */
ListWafUsageOfRulesResponse Client::listWafUsageOfRulesWithOptions(const ListWafUsageOfRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPhase()) {
    query["Phase"] = request.getPhase();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Lists the usage of WAF rules.
 *
 * @param request ListWafUsageOfRulesRequest
 * @return ListWafUsageOfRulesResponse
 */
ListWafUsageOfRulesResponse Client::listWafUsageOfRules(const ListWafUsageOfRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWafUsageOfRulesWithOptions(request, runtime);
}

/**
 * @summary Queries waiting room events for a waiting room.
 *
 * @description Use this operation to query details of all waiting room events related to a waiting room in a website.
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
 * @summary Queries waiting room events for a waiting room.
 *
 * @description Use this operation to query details of all waiting room events related to a waiting room in a website.
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
 * @summary Queries all waiting rooms in a website.
 *
 * @description Use this operation to query detailed configurations about all waiting rooms in a website, including the status, name, and queuing rules of each waiting room.
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
 * @summary Queries all waiting rooms in a website.
 *
 * @description Use this operation to query detailed configurations about all waiting rooms in a website, including the status, name, and queuing rules of each waiting room.
 *
 * @param request ListWaitingRoomsRequest
 * @return ListWaitingRoomsResponse
 */
ListWaitingRoomsResponse Client::listWaitingRooms(const ListWaitingRoomsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWaitingRoomsWithOptions(request, runtime);
}

/**
 * @summary Activates the edge container service.
 *
 * @param request OpenEdgeContainerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenEdgeContainerResponse
 */
OpenEdgeContainerResponse Client::openEdgeContainerWithOptions(const OpenEdgeContainerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenEdgeContainer"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenEdgeContainerResponse>();
}

/**
 * @summary Activates the edge container service.
 *
 * @param request OpenEdgeContainerRequest
 * @return OpenEdgeContainerResponse
 */
OpenEdgeContainerResponse Client::openEdgeContainer(const OpenEdgeContainerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openEdgeContainerWithOptions(request, runtime);
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
  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
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
 * @summary Prefetches resources.
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
    request.setContentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContent(), "Content", "json"));
  }

  if (!!tmpReq.hasHeaders()) {
    request.setHeadersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHeaders(), "Headers", "json"));
  }

  json query = {};
  if (!!request.hasContentShrink()) {
    query["Content"] = request.getContentShrink();
  }

  if (!!request.hasHeadersShrink()) {
    query["Headers"] = request.getHeadersShrink();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Prefetches resources.
 *
 * @param request PreloadCachesRequest
 * @return PreloadCachesResponse
 */
PreloadCachesResponse Client::preloadCaches(const PreloadCachesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return preloadCachesWithOptions(request, runtime);
}

/**
 * @summary Releases a specific version of a containerized application.
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
    request.setRegionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRegions(), "Regions", "json"));
  }

  json query = {};
  if (!!request.hasFullRelease()) {
    query["FullRelease"] = request.getFullRelease();
  }

  if (!!request.hasPublishType()) {
    query["PublishType"] = request.getPublishType();
  }

  if (!!request.hasRegionsShrink()) {
    query["Regions"] = request.getRegionsShrink();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasPercentage()) {
    body["Percentage"] = request.getPercentage();
  }

  if (!!request.hasPublishEnv()) {
    body["PublishEnv"] = request.getPublishEnv();
  }

  if (!!request.hasRemarks()) {
    body["Remarks"] = request.getRemarks();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
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
 * @summary Releases a specific version of a containerized application.
 *
 * @param request PublishEdgeContainerAppVersionRequest
 * @return PublishEdgeContainerAppVersionResponse
 */
PublishEdgeContainerAppVersionResponse Client::publishEdgeContainerAppVersion(const PublishEdgeContainerAppVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishEdgeContainerAppVersionWithOptions(request, runtime);
}

/**
 * @summary Publishes a specific version of Edge Routine code to the staging or production environment. When publishing to the production environment, you can choose canary release to specific regions.
 *
 * @param request PublishRoutineCodeVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishRoutineCodeVersionResponse
 */
PublishRoutineCodeVersionResponse Client::publishRoutineCodeVersionWithOptions(const PublishRoutineCodeVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCodeVersion()) {
    body["CodeVersion"] = request.getCodeVersion();
  }

  if (!!request.hasEnv()) {
    body["Env"] = request.getEnv();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
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
 * @summary Publishes a specific version of Edge Routine code to the staging or production environment. When publishing to the production environment, you can choose canary release to specific regions.
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
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasCrRegion()) {
    query["CrRegion"] = request.getCrRegion();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasQuotaGb()) {
    query["QuotaGb"] = request.getQuotaGb();
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
 * @summary Purchases a plan by calling PurchaseRatePlan.
 *
 * @description 1. Obtain the plan name and plan code by calling the DescribeRatePlanPrice operation.
 * 2. If the acceleration region is not set to overseas, the site must have a valid China Internet Content Provider (ICP) filing.
 *
 * @param request PurchaseRatePlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PurchaseRatePlanResponse
 */
PurchaseRatePlanResponse Client::purchaseRatePlanWithOptions(const PurchaseRatePlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAmount()) {
    query["Amount"] = request.getAmount();
  }

  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasChannel()) {
    query["Channel"] = request.getChannel();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasCoverage()) {
    query["Coverage"] = request.getCoverage();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasPlanCode()) {
    query["PlanCode"] = request.getPlanCode();
  }

  if (!!request.hasPlanName()) {
    query["PlanName"] = request.getPlanName();
  }

  if (!!request.hasSiteName()) {
    query["SiteName"] = request.getSiteName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Purchases a plan by calling PurchaseRatePlan.
 *
 * @description 1. Obtain the plan name and plan code by calling the DescribeRatePlanPrice operation.
 * 2. If the acceleration region is not set to overseas, the site must have a valid China Internet Content Provider (ICP) filing.
 *
 * @param request PurchaseRatePlanRequest
 * @return PurchaseRatePlanResponse
 */
PurchaseRatePlanResponse Client::purchaseRatePlan(const PurchaseRatePlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return purchaseRatePlanWithOptions(request, runtime);
}

/**
 * @summary Refreshes file content on nodes. Supports refreshing by file, directory, cache tag, ignored parameters, hostname, and entire site.
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
    request.setContentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContent(), "Content", "json"));
  }

  json query = {};
  if (!!request.hasContentShrink()) {
    query["Content"] = request.getContentShrink();
  }

  if (!!request.hasEdgeComputePurge()) {
    query["EdgeComputePurge"] = request.getEdgeComputePurge();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Refreshes file content on nodes. Supports refreshing by file, directory, cache tag, ignored parameters, hostname, and entire site.
 *
 * @param request PurgeCachesRequest
 * @return PurgeCachesResponse
 */
PurgeCachesResponse Client::purgeCaches(const PurgeCachesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return purgeCachesWithOptions(request, runtime);
}

/**
 * @summary Creates or updates a single key-value pair in a namespace. The maximum size of a request is 2 MB.
 *
 * @param request PutKvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutKvResponse
 */
PutKvResponse Client::putKvWithOptions(const PutKvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBase64()) {
    query["Base64"] = request.getBase64();
  }

  if (!!request.hasExpiration()) {
    query["Expiration"] = request.getExpiration();
  }

  if (!!request.hasExpirationTtl()) {
    query["ExpirationTtl"] = request.getExpirationTtl();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  json body = {};
  if (!!request.hasValue()) {
    body["Value"] = request.getValue();
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
 * @summary Creates or updates a single key-value pair in a namespace. The maximum size of a request is 2 MB.
 *
 * @param request PutKvRequest
 * @return PutKvResponse
 */
PutKvResponse Client::putKv(const PutKvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putKvWithOptions(request, runtime);
}

/**
 * @summary Sets a single large-capacity key-value pair in a KV namespace. The maximum value size is 25 MB.
 *
 * @description This operation provides the same functionality as [PutKv](~~PutKv~~), but allows you to upload a larger request body. If the request body is small, use the [PutKv](~~PutKv~~) operation to reduce server-side processing time. This operation must be called by using an SDK. For example, when you use the Golang SDK, call the PutKvWithHighCapacityAdvance function.
 * ```
 * func TestPutKvWithHighCapacity() {
 * 	// Configuration initialization
 * 	cfg := new(openapi.Config)
 * 	cfg.SetAccessKeyId("xxxxxxxxx")
 * 	cfg.SetAccessKeySecret("xxxxxxxxxx")
 * 	cli, err := NewClient(cfg)
 * 	if err != nil {
 * 		return err
 * 	}
 * 	runtime := &util.RuntimeOptions{}.
 * 	// Construct the key-value pair request to upload
 * 	namespace := "test-put-kv"
 * 	key := "test_PutKvWithHighCapacity_0"
 * 	value := strings.Repeat("t", 10*1024*1024)
 * 	rawReq := &PutKvRequest{
 * 		Namespace: &namespace,
 * 		Key:       &key,
 * 		Value:     &value,
 * 	}
 * 	payload, err := json.Marshal(rawReq)
 * 	if err != nil {
 * 		return err
 * 	}.
 * 	// If the payload is larger than 2 MB, call the high-capacity operation to upload it
 * 	reqHighCapacity := &PutKvWithHighCapacityAdvanceRequest{
 * 		Namespace: &namespace,
 * 		Key:       &key,
 * 		UrlObject: bytes.NewReader([]byte(payload)),
 * 	}.
 * 	resp, err := cli.PutKvWithHighCapacityAdvance(reqHighCapacity, runtime)
 * 	if err != nil {
 * 		return err
 * 	}
 * 	return nil
 * }.
 *
 * @param request PutKvWithHighCapacityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutKvWithHighCapacityResponse
 */
PutKvWithHighCapacityResponse Client::putKvWithHighCapacityWithOptions(const PutKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
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
 * @summary Sets a single large-capacity key-value pair in a KV namespace. The maximum value size is 25 MB.
 *
 * @description This operation provides the same functionality as [PutKv](~~PutKv~~), but allows you to upload a larger request body. If the request body is small, use the [PutKv](~~PutKv~~) operation to reduce server-side processing time. This operation must be called by using an SDK. For example, when you use the Golang SDK, call the PutKvWithHighCapacityAdvance function.
 * ```
 * func TestPutKvWithHighCapacity() {
 * 	// Configuration initialization
 * 	cfg := new(openapi.Config)
 * 	cfg.SetAccessKeyId("xxxxxxxxx")
 * 	cfg.SetAccessKeySecret("xxxxxxxxxx")
 * 	cli, err := NewClient(cfg)
 * 	if err != nil {
 * 		return err
 * 	}
 * 	runtime := &util.RuntimeOptions{}.
 * 	// Construct the key-value pair request to upload
 * 	namespace := "test-put-kv"
 * 	key := "test_PutKvWithHighCapacity_0"
 * 	value := strings.Repeat("t", 10*1024*1024)
 * 	rawReq := &PutKvRequest{
 * 		Namespace: &namespace,
 * 		Key:       &key,
 * 		Value:     &value,
 * 	}
 * 	payload, err := json.Marshal(rawReq)
 * 	if err != nil {
 * 		return err
 * 	}.
 * 	// If the payload is larger than 2 MB, call the high-capacity operation to upload it
 * 	reqHighCapacity := &PutKvWithHighCapacityAdvanceRequest{
 * 		Namespace: &namespace,
 * 		Key:       &key,
 * 		UrlObject: bytes.NewReader([]byte(payload)),
 * 	}.
 * 	resp, err := cli.PutKvWithHighCapacityAdvance(reqHighCapacity, runtime)
 * 	if err != nil {
 * 		return err
 * 	}
 * 	return nil
 * }.
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
  string accessKeyId = credentialModel.getAccessKeyId();
  string accessKeySecret = credentialModel.getAccessKeySecret();
  string securityToken = credentialModel.getSecurityToken();
  string credentialType = credentialModel.getType();
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
      {"content" , request.getUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType)},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    putKvWithHighCapacityReq.setUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  PutKvWithHighCapacityResponse putKvWithHighCapacityResp = putKvWithHighCapacityWithOptions(putKvWithHighCapacityReq, runtime);
  return putKvWithHighCapacityResp;
}

/**
 * @summary Rebuild the staging environment of an edge container application.
 *
 * @param request RebuildEdgeContainerAppStagingEnvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RebuildEdgeContainerAppStagingEnvResponse
 */
RebuildEdgeContainerAppStagingEnvResponse Client::rebuildEdgeContainerAppStagingEnvWithOptions(const RebuildEdgeContainerAppStagingEnvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
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
 * @summary Rebuild the staging environment of an edge container application.
 *
 * @param request RebuildEdgeContainerAppStagingEnvRequest
 * @return RebuildEdgeContainerAppStagingEnvResponse
 */
RebuildEdgeContainerAppStagingEnvResponse Client::rebuildEdgeContainerAppStagingEnv(const RebuildEdgeContainerAppStagingEnvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rebuildEdgeContainerAppStagingEnvWithOptions(request, runtime);
}

/**
 * @summary Schedules the release of a security instance.
 *
 * @param request ReleaseInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstanceWithOptions(const ReleaseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseInstance"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseInstanceResponse>();
}

/**
 * @summary Schedules the release of a security instance.
 *
 * @param request ReleaseInstanceRequest
 * @return ReleaseInstanceResponse
 */
ReleaseInstanceResponse Client::releaseInstance(const ReleaseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseInstanceWithOptions(request, runtime);
}

/**
 * @summary Resets the progress of a scheduled prefetch task and restarts the prefetch from the beginning.
 * Before calling this operation, you must first create a scheduled prefetch task by calling CreateScheduledPreloadJob to obtain a valid task ID, and then pass the ID to this operation for resetting.
 *
 * @param request ResetScheduledPreloadJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetScheduledPreloadJobResponse
 */
ResetScheduledPreloadJobResponse Client::resetScheduledPreloadJobWithOptions(const ResetScheduledPreloadJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
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
 * @summary Resets the progress of a scheduled prefetch task and restarts the prefetch from the beginning.
 * Before calling this operation, you must first create a scheduled prefetch task by calling CreateScheduledPreloadJob to obtain a valid task ID, and then pass the ID to this operation for resetting.
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
 * @summary Rolls back an edge container application to a specified version. Use this API to quickly recover from a failed deployment and minimize service disruption.
 *
 * @param request RollbackEdgeContainerAppVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackEdgeContainerAppVersionResponse
 */
RollbackEdgeContainerAppVersionResponse Client::rollbackEdgeContainerAppVersionWithOptions(const RollbackEdgeContainerAppVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPercentage()) {
    query["Percentage"] = request.getPercentage();
  }

  if (!!request.hasUsedPercent()) {
    query["UsedPercent"] = request.getUsedPercent();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasRemarks()) {
    body["Remarks"] = request.getRemarks();
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
 * @summary Rolls back an edge container application to a specified version. Use this API to quickly recover from a failed deployment and minimize service disruption.
 *
 * @param request RollbackEdgeContainerAppVersionRequest
 * @return RollbackEdgeContainerAppVersionResponse
 */
RollbackEdgeContainerAppVersionResponse Client::rollbackEdgeContainerAppVersion(const RollbackEdgeContainerAppVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackEdgeContainerAppVersionWithOptions(request, runtime);
}

/**
 * @summary Configures the automatic frequency control threshold for a site.
 *
 * @param request SetAutomaticFrequencyControlConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAutomaticFrequencyControlConfigResponse
 */
SetAutomaticFrequencyControlConfigResponse Client::setAutomaticFrequencyControlConfigWithOptions(const SetAutomaticFrequencyControlConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionType()) {
    query["ActionType"] = request.getActionType();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.getLevel();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetAutomaticFrequencyControlConfig"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetAutomaticFrequencyControlConfigResponse>();
}

/**
 * @summary Configures the automatic frequency control threshold for a site.
 *
 * @param request SetAutomaticFrequencyControlConfigRequest
 * @return SetAutomaticFrequencyControlConfigResponse
 */
SetAutomaticFrequencyControlConfigResponse Client::setAutomaticFrequencyControlConfig(const SetAutomaticFrequencyControlConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAutomaticFrequencyControlConfigWithOptions(request, runtime);
}

/**
 * @summary Configures whether to enable the certificate feature for a site and updates certificate information.
 *
 * @param request SetCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetCertificateResponse
 */
SetCertificateResponse Client::setCertificateWithOptions(const SetCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyServerId()) {
    query["KeyServerId"] = request.getKeyServerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  json body = {};
  if (!!request.hasCasId()) {
    body["CasId"] = request.getCasId();
  }

  if (!!request.hasCertificate()) {
    body["Certificate"] = request.getCertificate();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPrivateKey()) {
    body["PrivateKey"] = request.getPrivateKey();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.getSiteId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
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
 * @summary Configures whether to enable the certificate feature for a site and updates certificate information.
 *
 * @param request SetCertificateRequest
 * @return SetCertificateResponse
 */
SetCertificateResponse Client::setCertificate(const SetCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setCertificateWithOptions(request, runtime);
}

/**
 * @summary Binds hostnames to a specified client CA certificate. If you do not specify a certificate, the hostnames are bound to the ESA CA certificate.
 *
 * @param tmpReq SetClientCaCertificateHostnamesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetClientCaCertificateHostnamesResponse
 */
SetClientCaCertificateHostnamesResponse Client::setClientCaCertificateHostnamesWithOptions(const SetClientCaCertificateHostnamesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetClientCaCertificateHostnamesShrinkRequest request = SetClientCaCertificateHostnamesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHostnames()) {
    request.setHostnamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHostnames(), "Hostnames", "json"));
  }

  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  json body = {};
  if (!!request.hasHostnamesShrink()) {
    body["Hostnames"] = request.getHostnamesShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetClientCaCertificateHostnames"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetClientCaCertificateHostnamesResponse>();
}

/**
 * @summary Binds hostnames to a specified client CA certificate. If you do not specify a certificate, the hostnames are bound to the ESA CA certificate.
 *
 * @param request SetClientCaCertificateHostnamesRequest
 * @return SetClientCaCertificateHostnamesResponse
 */
SetClientCaCertificateHostnamesResponse Client::setClientCaCertificateHostnames(const SetClientCaCertificateHostnamesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setClientCaCertificateHostnamesWithOptions(request, runtime);
}

/**
 * @summary Binds one or more hostnames to a specified client CA certificate. If you do not specify a certificate, the hostnames are bound to the ESA CA certificate.
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
    request.setHostnamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHostnames(), "Hostnames", "json"));
  }

  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  json body = {};
  if (!!request.hasHostnamesShrink()) {
    body["Hostnames"] = request.getHostnamesShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
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
 * @summary Binds one or more hostnames to a specified client CA certificate. If you do not specify a certificate, the hostnames are bound to the ESA CA certificate.
 *
 * @param request SetClientCertificateHostnamesRequest
 * @return SetClientCertificateHostnamesResponse
 */
SetClientCertificateHostnamesResponse Client::setClientCertificateHostnames(const SetClientCertificateHostnamesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setClientCertificateHostnamesWithOptions(request, runtime);
}

/**
 * @summary Sets the maximum burstable protection bandwidth for a DDoS instance in mainland China.
 *
 * @param request SetDdosMaxBurstGbpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDdosMaxBurstGbpsResponse
 */
SetDdosMaxBurstGbpsResponse Client::setDdosMaxBurstGbpsWithOptions(const SetDdosMaxBurstGbpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMaxBurstGbps()) {
    query["MaxBurstGbps"] = request.getMaxBurstGbps();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDdosMaxBurstGbps"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDdosMaxBurstGbpsResponse>();
}

/**
 * @summary Sets the maximum burstable protection bandwidth for a DDoS instance in mainland China.
 *
 * @param request SetDdosMaxBurstGbpsRequest
 * @return SetDdosMaxBurstGbpsResponse
 */
SetDdosMaxBurstGbpsResponse Client::setDdosMaxBurstGbps(const SetDdosMaxBurstGbpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDdosMaxBurstGbpsWithOptions(request, runtime);
}

/**
 * @summary This operation configures the intelligent HTTP DDoS protection settings for a site.
 *
 * @param request SetHttpDDoSAttackIntelligentProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetHttpDDoSAttackIntelligentProtectionResponse
 */
SetHttpDDoSAttackIntelligentProtectionResponse Client::setHttpDDoSAttackIntelligentProtectionWithOptions(const SetHttpDDoSAttackIntelligentProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAiMode()) {
    query["AiMode"] = request.getAiMode();
  }

  if (!!request.hasAiTemplate()) {
    query["AiTemplate"] = request.getAiTemplate();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary This operation configures the intelligent HTTP DDoS protection settings for a site.
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
    query["GlobalMode"] = request.getGlobalMode();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Set the Protection Action for Specified HTTP DDoS Attack Rules
 *
 * @param request SetHttpDDoSAttackRuleActionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetHttpDDoSAttackRuleActionResponse
 */
SetHttpDDoSAttackRuleActionResponse Client::setHttpDDoSAttackRuleActionWithOptions(const SetHttpDDoSAttackRuleActionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleAction()) {
    query["RuleAction"] = request.getRuleAction();
  }

  if (!!request.hasRuleIds()) {
    query["RuleIds"] = request.getRuleIds();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetHttpDDoSAttackRuleAction"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetHttpDDoSAttackRuleActionResponse>();
}

/**
 * @summary Set the Protection Action for Specified HTTP DDoS Attack Rules
 *
 * @param request SetHttpDDoSAttackRuleActionRequest
 * @return SetHttpDDoSAttackRuleActionResponse
 */
SetHttpDDoSAttackRuleActionResponse Client::setHttpDDoSAttackRuleAction(const SetHttpDDoSAttackRuleActionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setHttpDDoSAttackRuleActionWithOptions(request, runtime);
}

/**
 * @summary Set the Protection Status of Specified HTTP DDoS Attack Rules
 *
 * @param request SetHttpDDoSAttackRuleStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetHttpDDoSAttackRuleStatusResponse
 */
SetHttpDDoSAttackRuleStatusResponse Client::setHttpDDoSAttackRuleStatusWithOptions(const SetHttpDDoSAttackRuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleIds()) {
    query["RuleIds"] = request.getRuleIds();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetHttpDDoSAttackRuleStatus"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetHttpDDoSAttackRuleStatusResponse>();
}

/**
 * @summary Set the Protection Status of Specified HTTP DDoS Attack Rules
 *
 * @param request SetHttpDDoSAttackRuleStatusRequest
 * @return SetHttpDDoSAttackRuleStatusResponse
 */
SetHttpDDoSAttackRuleStatusResponse Client::setHttpDDoSAttackRuleStatus(const SetHttpDDoSAttackRuleStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setHttpDDoSAttackRuleStatusWithOptions(request, runtime);
}

/**
 * @summary Creates or updates a keyless server configuration.
 *
 * @param request SetKeylessServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetKeylessServerResponse
 */
SetKeylessServerResponse Client::setKeylessServerWithOptions(const SetKeylessServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  json body = {};
  if (!!request.hasCaCertificate()) {
    body["CaCertificate"] = request.getCaCertificate();
  }

  if (!!request.hasClientCertificate()) {
    body["ClientCertificate"] = request.getClientCertificate();
  }

  if (!!request.hasClientPrivateKey()) {
    body["ClientPrivateKey"] = request.getClientPrivateKey();
  }

  if (!!request.hasHost()) {
    body["Host"] = request.getHost();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPort()) {
    body["Port"] = request.getPort();
  }

  if (!!request.hasVerify()) {
    body["Verify"] = request.getVerify();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetKeylessServer"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetKeylessServerResponse>();
}

/**
 * @summary Creates or updates a keyless server configuration.
 *
 * @param request SetKeylessServerRequest
 * @return SetKeylessServerResponse
 */
SetKeylessServerResponse Client::setKeylessServer(const SetKeylessServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setKeylessServerWithOptions(request, runtime);
}

/**
 * @summary Associates specified hostnames with an origin client certificate.
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
    request.setHostnamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHostnames(), "Hostnames", "json"));
  }

  json body = {};
  if (!!request.hasHostnamesShrink()) {
    body["Hostnames"] = request.getHostnamesShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.getSiteId();
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
 * @summary Associates specified hostnames with an origin client certificate.
 *
 * @param request SetOriginClientCertificateHostnamesRequest
 * @return SetOriginClientCertificateHostnamesResponse
 */
SetOriginClientCertificateHostnamesResponse Client::setOriginClientCertificateHostnames(const SetOriginClientCertificateHostnamesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setOriginClientCertificateHostnamesWithOptions(request, runtime);
}

/**
 * @summary Starts a scheduled prefetch based on the prefetch plan ID.
 *
 * @param request StartScheduledPreloadExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartScheduledPreloadExecutionResponse
 */
StartScheduledPreloadExecutionResponse Client::startScheduledPreloadExecutionWithOptions(const StartScheduledPreloadExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
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
 * @summary Starts a scheduled prefetch based on the prefetch plan ID.
 *
 * @param request StartScheduledPreloadExecutionRequest
 * @return StartScheduledPreloadExecutionResponse
 */
StartScheduledPreloadExecutionResponse Client::startScheduledPreloadExecution(const StartScheduledPreloadExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startScheduledPreloadExecutionWithOptions(request, runtime);
}

/**
 * @summary Stops a single scheduled preload execution plan based on the preload plan ID.
 * Prerequisites: (1) This API only takes effect when the execution plan status is running. Execution plans in the waiting or failed status cannot be stopped. (2) Whether an execution plan can reach the running status depends on whether the site it belongs to has completed access verification (site Status=active).
 *
 * @param request StopScheduledPreloadExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopScheduledPreloadExecutionResponse
 */
StopScheduledPreloadExecutionResponse Client::stopScheduledPreloadExecutionWithOptions(const StopScheduledPreloadExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
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
 * @summary Stops a single scheduled preload execution plan based on the preload plan ID.
 * Prerequisites: (1) This API only takes effect when the execution plan status is running. Execution plans in the waiting or failed status cannot be stopped. (2) Whether an execution plan can reach the running status depends on whether the site it belongs to has completed access verification (site Status=active).
 *
 * @param request StopScheduledPreloadExecutionRequest
 * @return StopScheduledPreloadExecutionResponse
 */
StopScheduledPreloadExecutionResponse Client::stopScheduledPreloadExecution(const StopScheduledPreloadExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopScheduledPreloadExecutionWithOptions(request, runtime);
}

/**
 * @summary Submits a purge or prefetch task after a file that contains resources to be purged or prefetched is uploaded.
 *
 * @param request SubmitUploadTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitUploadTaskResponse
 */
SubmitUploadTaskResponse Client::submitUploadTaskWithOptions(const SubmitUploadTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitUploadTask"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitUploadTaskResponse>();
}

/**
 * @summary Submits a purge or prefetch task after a file that contains resources to be purged or prefetched is uploaded.
 *
 * @param request SubmitUploadTaskRequest
 * @return SubmitUploadTaskResponse
 */
SubmitUploadTaskResponse Client::submitUploadTask(const SubmitUploadTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitUploadTaskWithOptions(request, runtime);
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
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
    query["All"] = request.getAll();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
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
 * @summary Cache Reserve Specification Change
 *
 * @param request UpdateCacheReserveSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCacheReserveSpecResponse
 */
UpdateCacheReserveSpecResponse Client::updateCacheReserveSpecWithOptions(const UpdateCacheReserveSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTargetQuotaGb()) {
    query["TargetQuotaGb"] = request.getTargetQuotaGb();
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
 * @summary Cache Reserve Specification Change
 *
 * @param request UpdateCacheReserveSpecRequest
 * @return UpdateCacheReserveSpecResponse
 */
UpdateCacheReserveSpecResponse Client::updateCacheReserveSpec(const UpdateCacheReserveSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCacheReserveSpecWithOptions(request, runtime);
}

/**
 * @summary Modify the cache configuration.
 *
 * @param request UpdateCacheRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCacheRuleResponse
 */
UpdateCacheRuleResponse Client::updateCacheRuleWithOptions(const UpdateCacheRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdditionalCacheablePorts()) {
    query["AdditionalCacheablePorts"] = request.getAdditionalCacheablePorts();
  }

  if (!!request.hasBrowserCacheMode()) {
    query["BrowserCacheMode"] = request.getBrowserCacheMode();
  }

  if (!!request.hasBrowserCacheTtl()) {
    query["BrowserCacheTtl"] = request.getBrowserCacheTtl();
  }

  if (!!request.hasBypassCache()) {
    query["BypassCache"] = request.getBypassCache();
  }

  if (!!request.hasCacheDeceptionArmor()) {
    query["CacheDeceptionArmor"] = request.getCacheDeceptionArmor();
  }

  if (!!request.hasCacheReserveEligibility()) {
    query["CacheReserveEligibility"] = request.getCacheReserveEligibility();
  }

  if (!!request.hasCheckPresenceCookie()) {
    query["CheckPresenceCookie"] = request.getCheckPresenceCookie();
  }

  if (!!request.hasCheckPresenceHeader()) {
    query["CheckPresenceHeader"] = request.getCheckPresenceHeader();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasEdgeCacheMode()) {
    query["EdgeCacheMode"] = request.getEdgeCacheMode();
  }

  if (!!request.hasEdgeCacheTtl()) {
    query["EdgeCacheTtl"] = request.getEdgeCacheTtl();
  }

  if (!!request.hasEdgeStatusCodeCacheTtl()) {
    query["EdgeStatusCodeCacheTtl"] = request.getEdgeStatusCodeCacheTtl();
  }

  if (!!request.hasIncludeCookie()) {
    query["IncludeCookie"] = request.getIncludeCookie();
  }

  if (!!request.hasIncludeHeader()) {
    query["IncludeHeader"] = request.getIncludeHeader();
  }

  if (!!request.hasPostBodyCacheKey()) {
    query["PostBodyCacheKey"] = request.getPostBodyCacheKey();
  }

  if (!!request.hasPostBodySizeLimit()) {
    query["PostBodySizeLimit"] = request.getPostBodySizeLimit();
  }

  if (!!request.hasPostCache()) {
    query["PostCache"] = request.getPostCache();
  }

  if (!!request.hasQueryString()) {
    query["QueryString"] = request.getQueryString();
  }

  if (!!request.hasQueryStringMode()) {
    query["QueryStringMode"] = request.getQueryStringMode();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasServeStale()) {
    query["ServeStale"] = request.getServeStale();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSortQueryStringForCache()) {
    query["SortQueryStringForCache"] = request.getSortQueryStringForCache();
  }

  if (!!request.hasUserDeviceType()) {
    query["UserDeviceType"] = request.getUserDeviceType();
  }

  if (!!request.hasUserGeo()) {
    query["UserGeo"] = request.getUserGeo();
  }

  if (!!request.hasUserLanguage()) {
    query["UserLanguage"] = request.getUserLanguage();
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
 * @summary Modify the cache configuration.
 *
 * @param request UpdateCacheRuleRequest
 * @return UpdateCacheRuleResponse
 */
UpdateCacheRuleResponse Client::updateCacheRule(const UpdateCacheRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCacheRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies the cache tag configuration of your website.
 *
 * @param request UpdateCacheTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCacheTagResponse
 */
UpdateCacheTagResponse Client::updateCacheTagWithOptions(const UpdateCacheTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaseInsensitive()) {
    query["CaseInsensitive"] = request.getCaseInsensitive();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.getTagName();
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
 * @summary Modifies the cache tag configuration of your website.
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
    query["FlattenMode"] = request.getFlattenMode();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Modifies the compression rule configuration of a site.
 *
 * @param request UpdateCompressionRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCompressionRuleResponse
 */
UpdateCompressionRuleResponse Client::updateCompressionRuleWithOptions(const UpdateCompressionRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBrotli()) {
    query["Brotli"] = request.getBrotli();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasGzip()) {
    query["Gzip"] = request.getGzip();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasZstd()) {
    query["Zstd"] = request.getZstd();
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
 * @summary Modifies the compression rule configuration of a site.
 *
 * @param request UpdateCompressionRuleRequest
 * @return UpdateCompressionRuleResponse
 */
UpdateCompressionRuleResponse Client::updateCompressionRule(const UpdateCompressionRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCompressionRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies the China mainland network access optimization configuration for a site.
 *
 * @description The site plan must be Enterprise Edition or higher to enable China mainland network access optimization.
 *
 * @param request UpdateCrossBorderOptimizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCrossBorderOptimizationResponse
 */
UpdateCrossBorderOptimizationResponse Client::updateCrossBorderOptimizationWithOptions(const UpdateCrossBorderOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Modifies the China mainland network access optimization configuration for a site.
 *
 * @description The site plan must be Enterprise Edition or higher to enable China mainland network access optimization.
 *
 * @param request UpdateCrossBorderOptimizationRequest
 * @return UpdateCrossBorderOptimizationResponse
 */
UpdateCrossBorderOptimizationResponse Client::updateCrossBorderOptimization(const UpdateCrossBorderOptimizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCrossBorderOptimizationWithOptions(request, runtime);
}

/**
 * @summary Updates a SaaS domain name. You can modify the bound record ID, certificate type, and other settings.
 *
 * @param request UpdateCustomHostnameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomHostnameResponse
 */
UpdateCustomHostnameResponse Client::updateCustomHostnameWithOptions(const UpdateCustomHostnameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCasId()) {
    query["CasId"] = request.getCasId();
  }

  if (!!request.hasCasRegion()) {
    query["CasRegion"] = request.getCasRegion();
  }

  if (!!request.hasCertType()) {
    query["CertType"] = request.getCertType();
  }

  if (!!request.hasCertificate()) {
    query["Certificate"] = request.getCertificate();
  }

  if (!!request.hasHostnameId()) {
    query["HostnameId"] = request.getHostnameId();
  }

  if (!!request.hasPrivateKey()) {
    query["PrivateKey"] = request.getPrivateKey();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  if (!!request.hasSslFlag()) {
    query["SslFlag"] = request.getSslFlag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCustomHostname"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomHostnameResponse>();
}

/**
 * @summary Updates a SaaS domain name. You can modify the bound record ID, certificate type, and other settings.
 *
 * @param request UpdateCustomHostnameRequest
 * @return UpdateCustomHostnameResponse
 */
UpdateCustomHostnameResponse Client::updateCustomHostname(const UpdateCustomHostnameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomHostnameWithOptions(request, runtime);
}

/**
 * @summary Modifies the response code rewrite configuration of a site.
 *
 * @param request UpdateCustomResponseCodeRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomResponseCodeRuleResponse
 */
UpdateCustomResponseCodeRuleResponse Client::updateCustomResponseCodeRuleWithOptions(const UpdateCustomResponseCodeRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasPageId()) {
    query["PageId"] = request.getPageId();
  }

  if (!!request.hasReturnCode()) {
    query["ReturnCode"] = request.getReturnCode();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCustomResponseCodeRule"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomResponseCodeRuleResponse>();
}

/**
 * @summary Modifies the response code rewrite configuration of a site.
 *
 * @param request UpdateCustomResponseCodeRuleRequest
 * @return UpdateCustomResponseCodeRuleResponse
 */
UpdateCustomResponseCodeRuleResponse Client::updateCustomResponseCodeRule(const UpdateCustomResponseCodeRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomResponseCodeRuleWithOptions(request, runtime);
}

/**
 * @summary Updates a specified custom scene policy.
 *
 * @param request UpdateCustomScenePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomScenePolicyResponse
 */
UpdateCustomScenePolicyResponse Client::updateCustomScenePolicyWithOptions(const UpdateCustomScenePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasObjects()) {
    query["Objects"] = request.getObjects();
  }

  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasSiteIds()) {
    query["SiteIds"] = request.getSiteIds();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTemplate()) {
    query["Template"] = request.getTemplate();
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
 * @summary Updates a specified custom scene policy.
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
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Updates the log collection configuration of an edge container application.
 *
 * @param request UpdateEdgeContainerAppLogRiverRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEdgeContainerAppLogRiverResponse
 */
UpdateEdgeContainerAppLogRiverResponse Client::updateEdgeContainerAppLogRiverWithOptions(const UpdateEdgeContainerAppLogRiverRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasStdout()) {
    query["Stdout"] = request.getStdout();
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
 * @summary Updates the log collection configuration of an edge container application.
 *
 * @param request UpdateEdgeContainerAppLogRiverRequest
 * @return UpdateEdgeContainerAppLogRiverResponse
 */
UpdateEdgeContainerAppLogRiverResponse Client::updateEdgeContainerAppLogRiver(const UpdateEdgeContainerAppLogRiverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEdgeContainerAppLogRiverWithOptions(request, runtime);
}

/**
 * @summary Updates the resource reservation configuration of an edge container application.
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
    request.setReserveSetShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getReserveSet(), "ReserveSet", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasDurationTime()) {
    query["DurationTime"] = request.getDurationTime();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasForever()) {
    query["Forever"] = request.getForever();
  }

  if (!!request.hasReserveSetShrink()) {
    query["ReserveSet"] = request.getReserveSetShrink();
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
 * @summary Updates the resource reservation configuration of an edge container application.
 *
 * @param request UpdateEdgeContainerAppResourceReserveRequest
 * @return UpdateEdgeContainerAppResourceReserveResponse
 */
UpdateEdgeContainerAppResourceReserveResponse Client::updateEdgeContainerAppResourceReserve(const UpdateEdgeContainerAppResourceReserveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEdgeContainerAppResourceReserveWithOptions(request, runtime);
}

/**
 * @summary Modify HTTP incoming request header configuration.
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
    request.setRequestHeaderModificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRequestHeaderModification(), "RequestHeaderModification", "json"));
  }

  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasRequestHeaderModificationShrink()) {
    query["RequestHeaderModification"] = request.getRequestHeaderModificationShrink();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Modify HTTP incoming request header configuration.
 *
 * @param request UpdateHttpIncomingRequestHeaderModificationRuleRequest
 * @return UpdateHttpIncomingRequestHeaderModificationRuleResponse
 */
UpdateHttpIncomingRequestHeaderModificationRuleResponse Client::updateHttpIncomingRequestHeaderModificationRule(const UpdateHttpIncomingRequestHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateHttpIncomingRequestHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Updates the HTTP incoming response header modification configuration for a site.
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
    request.setResponseHeaderModificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResponseHeaderModification(), "ResponseHeaderModification", "json"));
  }

  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasResponseHeaderModificationShrink()) {
    query["ResponseHeaderModification"] = request.getResponseHeaderModificationShrink();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Updates the HTTP incoming response header modification configuration for a site.
 *
 * @param request UpdateHttpIncomingResponseHeaderModificationRuleRequest
 * @return UpdateHttpIncomingResponseHeaderModificationRuleResponse
 */
UpdateHttpIncomingResponseHeaderModificationRuleResponse Client::updateHttpIncomingResponseHeaderModificationRule(const UpdateHttpIncomingResponseHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateHttpIncomingResponseHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Modify HTTP request header rules.
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
    request.setRequestHeaderModificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRequestHeaderModification(), "RequestHeaderModification", "json"));
  }

  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasRequestHeaderModificationShrink()) {
    query["RequestHeaderModification"] = request.getRequestHeaderModificationShrink();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Modify HTTP request header rules.
 *
 * @param request UpdateHttpRequestHeaderModificationRuleRequest
 * @return UpdateHttpRequestHeaderModificationRuleResponse
 */
UpdateHttpRequestHeaderModificationRuleResponse Client::updateHttpRequestHeaderModificationRule(const UpdateHttpRequestHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateHttpRequestHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Updates the HTTP response header modification configuration for a site.
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
    request.setResponseHeaderModificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResponseHeaderModification(), "ResponseHeaderModification", "json"));
  }

  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasResponseHeaderModificationShrink()) {
    query["ResponseHeaderModification"] = request.getResponseHeaderModificationShrink();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Updates the HTTP response header modification configuration for a site.
 *
 * @param request UpdateHttpResponseHeaderModificationRuleRequest
 * @return UpdateHttpResponseHeaderModificationRuleResponse
 */
UpdateHttpResponseHeaderModificationRuleResponse Client::updateHttpResponseHeaderModificationRule(const UpdateHttpResponseHeaderModificationRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateHttpResponseHeaderModificationRuleWithOptions(request, runtime);
}

/**
 * @summary Update the HTTPS Application Configuration.
 *
 * @param request UpdateHttpsApplicationConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHttpsApplicationConfigurationResponse
 */
UpdateHttpsApplicationConfigurationResponse Client::updateHttpsApplicationConfigurationWithOptions(const UpdateHttpsApplicationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAltSvc()) {
    query["AltSvc"] = request.getAltSvc();
  }

  if (!!request.hasAltSvcClear()) {
    query["AltSvcClear"] = request.getAltSvcClear();
  }

  if (!!request.hasAltSvcMa()) {
    query["AltSvcMa"] = request.getAltSvcMa();
  }

  if (!!request.hasAltSvcPersist()) {
    query["AltSvcPersist"] = request.getAltSvcPersist();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasHsts()) {
    query["Hsts"] = request.getHsts();
  }

  if (!!request.hasHstsIncludeSubdomains()) {
    query["HstsIncludeSubdomains"] = request.getHstsIncludeSubdomains();
  }

  if (!!request.hasHstsMaxAge()) {
    query["HstsMaxAge"] = request.getHstsMaxAge();
  }

  if (!!request.hasHstsPreload()) {
    query["HstsPreload"] = request.getHstsPreload();
  }

  if (!!request.hasHttpsForce()) {
    query["HttpsForce"] = request.getHttpsForce();
  }

  if (!!request.hasHttpsForceCode()) {
    query["HttpsForceCode"] = request.getHttpsForceCode();
  }

  if (!!request.hasHttpsNoSniDeny()) {
    query["HttpsNoSniDeny"] = request.getHttpsNoSniDeny();
  }

  if (!!request.hasHttpsSniVerify()) {
    query["HttpsSniVerify"] = request.getHttpsSniVerify();
  }

  if (!!request.hasHttpsSniWhitelist()) {
    query["HttpsSniWhitelist"] = request.getHttpsSniWhitelist();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Update the HTTPS Application Configuration.
 *
 * @param request UpdateHttpsApplicationConfigurationRequest
 * @return UpdateHttpsApplicationConfigurationResponse
 */
UpdateHttpsApplicationConfigurationResponse Client::updateHttpsApplicationConfiguration(const UpdateHttpsApplicationConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateHttpsApplicationConfigurationWithOptions(request, runtime);
}

/**
 * @summary Modify Basic HTTPS Configuration.
 *
 * @param request UpdateHttpsBasicConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHttpsBasicConfigurationResponse
 */
UpdateHttpsBasicConfigurationResponse Client::updateHttpsBasicConfigurationWithOptions(const UpdateHttpsBasicConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCiphersuite()) {
    query["Ciphersuite"] = request.getCiphersuite();
  }

  if (!!request.hasCiphersuiteGroup()) {
    query["CiphersuiteGroup"] = request.getCiphersuiteGroup();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasHttp2()) {
    query["Http2"] = request.getHttp2();
  }

  if (!!request.hasHttp3()) {
    query["Http3"] = request.getHttp3();
  }

  if (!!request.hasHttps()) {
    query["Https"] = request.getHttps();
  }

  if (!!request.hasOcspStapling()) {
    query["OcspStapling"] = request.getOcspStapling();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasTls10()) {
    query["Tls10"] = request.getTls10();
  }

  if (!!request.hasTls11()) {
    query["Tls11"] = request.getTls11();
  }

  if (!!request.hasTls12()) {
    query["Tls12"] = request.getTls12();
  }

  if (!!request.hasTls13()) {
    query["Tls13"] = request.getTls13();
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
 * @summary Modify Basic HTTPS Configuration.
 *
 * @param request UpdateHttpsBasicConfigurationRequest
 * @return UpdateHttpsBasicConfigurationResponse
 */
UpdateHttpsBasicConfigurationResponse Client::updateHttpsBasicConfiguration(const UpdateHttpsBasicConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateHttpsBasicConfigurationWithOptions(request, runtime);
}

/**
 * @summary Modify IPv6 configuration for a website.
 *
 * @param request UpdateIPv6Request
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIPv6Response
 */
UpdateIPv6Response Client::updateIPv6WithOptions(const UpdateIPv6Request &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Modify IPv6 configuration for a website.
 *
 * @param request UpdateIPv6Request
 * @return UpdateIPv6Response
 */
UpdateIPv6Response Client::updateIPv6(const UpdateIPv6Request &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIPv6WithOptions(request, runtime);
}

/**
 * @summary Modifies the image transformation configuration of a site.
 *
 * @param request UpdateImageTransformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateImageTransformResponse
 */
UpdateImageTransformResponse Client::updateImageTransformWithOptions(const UpdateImageTransformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoAvif()) {
    query["AutoAvif"] = request.getAutoAvif();
  }

  if (!!request.hasAutoWebp()) {
    query["AutoWebp"] = request.getAutoWebp();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Modifies the image transformation configuration of a site.
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
    request.setItemsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getItems(), "Items", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasItemsShrink()) {
    body["Items"] = request.getItemsShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
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
 * @summary To modify an existing load balancer, you must specify its load balancer ID.
 *
 * @description This operation modifies multiple configurations for a load balancer, including its name, acceleration status, session persistence policy, and advanced traffic routing settings.>Notice: Changes to certain parameters might affect the stability of existing services. Proceed with caution.
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
    request.setAdaptiveRoutingShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAdaptiveRouting(), "AdaptiveRouting", "json"));
  }

  if (!!tmpReq.hasDefaultPools()) {
    request.setDefaultPoolsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDefaultPools(), "DefaultPools", "json"));
  }

  if (!!tmpReq.hasMonitor()) {
    request.setMonitorShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMonitor(), "Monitor", "json"));
  }

  if (!!tmpReq.hasRandomSteering()) {
    request.setRandomSteeringShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRandomSteering(), "RandomSteering", "json"));
  }

  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRules(), "Rules", "json"));
  }

  json query = {};
  if (!!request.hasAdaptiveRoutingShrink()) {
    query["AdaptiveRouting"] = request.getAdaptiveRoutingShrink();
  }

  if (!!request.hasDefaultPoolsShrink()) {
    query["DefaultPools"] = request.getDefaultPoolsShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasFallbackPool()) {
    query["FallbackPool"] = request.getFallbackPool();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasMonitorShrink()) {
    query["Monitor"] = request.getMonitorShrink();
  }

  if (!!request.hasRandomSteeringShrink()) {
    query["RandomSteering"] = request.getRandomSteeringShrink();
  }

  if (!!request.hasRegionPools()) {
    query["RegionPools"] = request.getRegionPools();
  }

  if (!!request.hasRulesShrink()) {
    query["Rules"] = request.getRulesShrink();
  }

  if (!!request.hasSessionAffinity()) {
    query["SessionAffinity"] = request.getSessionAffinity();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSteeringPolicy()) {
    query["SteeringPolicy"] = request.getSteeringPolicy();
  }

  if (!!request.hasSubRegionPools()) {
    query["SubRegionPools"] = request.getSubRegionPools();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
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
 * @summary To modify an existing load balancer, you must specify its load balancer ID.
 *
 * @description This operation modifies multiple configurations for a load balancer, including its name, acceleration status, session persistence policy, and advanced traffic routing settings.>Notice: Changes to certain parameters might affect the stability of existing services. Proceed with caution.
 *
 * @param request UpdateLoadBalancerRequest
 * @return UpdateLoadBalancerResponse
 */
UpdateLoadBalancerResponse Client::updateLoadBalancer(const UpdateLoadBalancerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLoadBalancerWithOptions(request, runtime);
}

/**
 * @summary Modify the site hosting transformation configuration.
 *
 * @param request UpdateManagedTransformRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateManagedTransformResponse
 */
UpdateManagedTransformResponse Client::updateManagedTransformWithOptions(const UpdateManagedTransformRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddClientGeolocationHeader()) {
    query["AddClientGeolocationHeader"] = request.getAddClientGeolocationHeader();
  }

  if (!!request.hasAddRealClientIpHeader()) {
    query["AddRealClientIpHeader"] = request.getAddRealClientIpHeader();
  }

  if (!!request.hasRealClientIpHeaderName()) {
    query["RealClientIpHeaderName"] = request.getRealClientIpHeaderName();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
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
 * @summary Modify the site hosting transformation configuration.
 *
 * @param request UpdateManagedTransformRequest
 * @return UpdateManagedTransformResponse
 */
UpdateManagedTransformResponse Client::updateManagedTransform(const UpdateManagedTransformRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateManagedTransformWithOptions(request, runtime);
}

/**
 * @summary Updates a network optimization configuration.
 *
 * @param request UpdateNetworkOptimizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNetworkOptimizationResponse
 */
UpdateNetworkOptimizationResponse Client::updateNetworkOptimizationWithOptions(const UpdateNetworkOptimizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasGrpc()) {
    query["Grpc"] = request.getGrpc();
  }

  if (!!request.hasHttp2Origin()) {
    query["Http2Origin"] = request.getHttp2Origin();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSmartRouting()) {
    query["SmartRouting"] = request.getSmartRouting();
  }

  if (!!request.hasUploadMaxFilesize()) {
    query["UploadMaxFilesize"] = request.getUploadMaxFilesize();
  }

  if (!!request.hasWebsocket()) {
    query["Websocket"] = request.getWebsocket();
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
 * @summary Updates a network optimization configuration.
 *
 * @param request UpdateNetworkOptimizationRequest
 * @return UpdateNetworkOptimizationResponse
 */
UpdateNetworkOptimizationResponse Client::updateNetworkOptimization(const UpdateNetworkOptimizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNetworkOptimizationWithOptions(request, runtime);
}

/**
 * @summary Modifies a single origin address pool specified by the origin address pool ID.
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
    request.setOriginsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOrigins(), "Origins", "json"));
  }

  json query = {};
  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOriginsShrink()) {
    query["Origins"] = request.getOriginsShrink();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Modifies a single origin address pool specified by the origin address pool ID.
 *
 * @param request UpdateOriginPoolRequest
 * @return UpdateOriginPoolResponse
 */
UpdateOriginPoolResponse Client::updateOriginPool(const UpdateOriginPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOriginPoolWithOptions(request, runtime);
}

/**
 * @summary Modify the origin protection feature to enable or disable origin fetch convergence.
 *
 * @param request UpdateOriginProtectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOriginProtectionResponse
 */
UpdateOriginProtectionResponse Client::updateOriginProtectionWithOptions(const UpdateOriginProtectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoConfirmIPList()) {
    query["AutoConfirmIPList"] = request.getAutoConfirmIPList();
  }

  if (!!request.hasOriginConverge()) {
    query["OriginConverge"] = request.getOriginConverge();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Modify the origin protection feature to enable or disable origin fetch convergence.
 *
 * @param request UpdateOriginProtectionRequest
 * @return UpdateOriginProtectionResponse
 */
UpdateOriginProtectionResponse Client::updateOriginProtection(const UpdateOriginProtectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOriginProtectionWithOptions(request, runtime);
}

/**
 * @summary Confirm that you want to update the site’s origin IP whitelist to the latest version.
 *
 * @param request UpdateOriginProtectionIpWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOriginProtectionIpWhiteListResponse
 */
UpdateOriginProtectionIpWhiteListResponse Client::updateOriginProtectionIpWhiteListWithOptions(const UpdateOriginProtectionIpWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Confirm that you want to update the site’s origin IP whitelist to the latest version.
 *
 * @param request UpdateOriginProtectionIpWhiteListRequest
 * @return UpdateOriginProtectionIpWhiteListResponse
 */
UpdateOriginProtectionIpWhiteListResponse Client::updateOriginProtectionIpWhiteList(const UpdateOriginProtectionIpWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOriginProtectionIpWhiteListWithOptions(request, runtime);
}

/**
 * @summary Updates a site\\"s origin fetch rules.
 *
 * @param request UpdateOriginRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateOriginRuleResponse
 */
UpdateOriginRuleResponse Client::updateOriginRuleWithOptions(const UpdateOriginRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasDnsRecord()) {
    query["DnsRecord"] = request.getDnsRecord();
  }

  if (!!request.hasFollow302Enable()) {
    query["Follow302Enable"] = request.getFollow302Enable();
  }

  if (!!request.hasFollow302MaxTries()) {
    query["Follow302MaxTries"] = request.getFollow302MaxTries();
  }

  if (!!request.hasFollow302RetainArgs()) {
    query["Follow302RetainArgs"] = request.getFollow302RetainArgs();
  }

  if (!!request.hasFollow302RetainHeader()) {
    query["Follow302RetainHeader"] = request.getFollow302RetainHeader();
  }

  if (!!request.hasFollow302TargetHost()) {
    query["Follow302TargetHost"] = request.getFollow302TargetHost();
  }

  if (!!request.hasOriginHost()) {
    query["OriginHost"] = request.getOriginHost();
  }

  if (!!request.hasOriginHttpPort()) {
    query["OriginHttpPort"] = request.getOriginHttpPort();
  }

  if (!!request.hasOriginHttpsPort()) {
    query["OriginHttpsPort"] = request.getOriginHttpsPort();
  }

  if (!!request.hasOriginMtls()) {
    query["OriginMtls"] = request.getOriginMtls();
  }

  if (!!request.hasOriginReadTimeout()) {
    query["OriginReadTimeout"] = request.getOriginReadTimeout();
  }

  if (!!request.hasOriginScheme()) {
    query["OriginScheme"] = request.getOriginScheme();
  }

  if (!!request.hasOriginSni()) {
    query["OriginSni"] = request.getOriginSni();
  }

  if (!!request.hasOriginVerify()) {
    query["OriginVerify"] = request.getOriginVerify();
  }

  if (!!request.hasRange()) {
    query["Range"] = request.getRange();
  }

  if (!!request.hasRangeChunkSize()) {
    query["RangeChunkSize"] = request.getRangeChunkSize();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Updates a site\\"s origin fetch rules.
 *
 * @param request UpdateOriginRuleRequest
 * @return UpdateOriginRuleResponse
 */
UpdateOriginRuleResponse Client::updateOriginRule(const UpdateOriginRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateOriginRuleWithOptions(request, runtime);
}

/**
 * @summary Updates a user-created custom response page. Use this API to modify the page name, description, content type, and content.
 *
 * @param tmpReq UpdatePageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePageResponse
 */
UpdatePageResponse Client::updatePageWithOptions(const UpdatePageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdatePageShrinkRequest request = UpdatePageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSiteIds()) {
    request.setSiteIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSiteIds(), "SiteIds", "json"));
  }

  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasContentType()) {
    body["ContentType"] = request.getContentType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSiteIdsShrink()) {
    body["SiteIds"] = request.getSiteIdsShrink();
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
 * @summary Updates a user-created custom response page. Use this API to modify the page name, description, content type, and content.
 *
 * @param request UpdatePageRequest
 * @return UpdatePageResponse
 */
UpdatePageResponse Client::updatePage(const UpdatePageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePageWithOptions(request, runtime);
}

/**
 * @summary Modifies the web data quality collection configuration.
 *
 * @param request UpdatePerformanceDataCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePerformanceDataCollectionResponse
 */
UpdatePerformanceDataCollectionResponse Client::updatePerformanceDataCollectionWithOptions(const UpdatePerformanceDataCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePerformanceDataCollection"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePerformanceDataCollectionResponse>();
}

/**
 * @summary Modifies the web data quality collection configuration.
 *
 * @param request UpdatePerformanceDataCollectionRequest
 * @return UpdatePerformanceDataCollectionResponse
 */
UpdatePerformanceDataCollectionResponse Client::updatePerformanceDataCollection(const UpdatePerformanceDataCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePerformanceDataCollectionWithOptions(request, runtime);
}

/**
 * @summary Modifies the specifications of a plan by calling UpdateRatePlanSpec.
 *
 * @param request UpdateRatePlanSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRatePlanSpecResponse
 */
UpdateRatePlanSpecResponse Client::updateRatePlanSpecWithOptions(const UpdateRatePlanSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoPay()) {
    query["AutoPay"] = request.getAutoPay();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasTargetPlanCode()) {
    query["TargetPlanCode"] = request.getTargetPlanCode();
  }

  if (!!request.hasTargetPlanName()) {
    query["TargetPlanName"] = request.getTargetPlanName();
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
 * @summary Modifies the specifications of a plan by calling UpdateRatePlanSpec.
 *
 * @param request UpdateRatePlanSpecRequest
 * @return UpdateRatePlanSpecResponse
 */
UpdateRatePlanSpecResponse Client::updateRatePlanSpec(const UpdateRatePlanSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRatePlanSpecWithOptions(request, runtime);
}

/**
 * @summary Updates a DNS record. Various record types and origin authentication configurations are supported.
 *
 * @description This API operation allows you to update a DNS record, including but not limited to A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, and URI record types. You can modify the record content by specifying the corresponding record value, priority, flag, and other fields. For CNAME origin servers that require authentication, such as OSS and S3, this API operation also supports configuring origin authentication information to ensure secure access.
 * ### Before you begin
 * - The record value (Value) must match the record type. For example, a CNAME record must correspond to a target domain name.
 * - Certain record types, such as MX and SRV, require a priority (Priority) value.
 * - CAA records require specific fields such as Flag and Tag.
 * - When updating security records such as CERT and SSHFP, accurately set the Type, Algorithm, and other fields.
 * - When using OSS or S3 as the origin server, configure the authentication details in AuthConf based on the permission settings.
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
    request.setAuthConfShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAuthConf(), "AuthConf", "json"));
  }

  if (!!tmpReq.hasData()) {
    request.setDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getData(), "Data", "json"));
  }

  json query = {};
  if (!!request.hasAuthConfShrink()) {
    query["AuthConf"] = request.getAuthConfShrink();
  }

  if (!!request.hasBizName()) {
    query["BizName"] = request.getBizName();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasDataShrink()) {
    query["Data"] = request.getDataShrink();
  }

  if (!!request.hasHostPolicy()) {
    query["HostPolicy"] = request.getHostPolicy();
  }

  if (!!request.hasHttpPorts()) {
    query["HttpPorts"] = request.getHttpPorts();
  }

  if (!!request.hasHttpsPorts()) {
    query["HttpsPorts"] = request.getHttpsPorts();
  }

  if (!!request.hasProxied()) {
    query["Proxied"] = request.getProxied();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Updates a DNS record. Various record types and origin authentication configurations are supported.
 *
 * @description This API operation allows you to update a DNS record, including but not limited to A/AAAA, CNAME, NS, MX, TXT, CAA, SRV, and URI record types. You can modify the record content by specifying the corresponding record value, priority, flag, and other fields. For CNAME origin servers that require authentication, such as OSS and S3, this API operation also supports configuring origin authentication information to ensure secure access.
 * ### Before you begin
 * - The record value (Value) must match the record type. For example, a CNAME record must correspond to a target domain name.
 * - Certain record types, such as MX and SRV, require a priority (Priority) value.
 * - CAA records require specific fields such as Flag and Tag.
 * - When updating security records such as CERT and SSHFP, accurately set the Type, Algorithm, and other fields.
 * - When using OSS or S3 as the origin server, configure the authentication details in AuthConf based on the permission settings.
 *
 * @param request UpdateRecordRequest
 * @return UpdateRecordResponse
 */
UpdateRecordResponse Client::updateRecord(const UpdateRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRecordWithOptions(request, runtime);
}

/**
 * @summary Updates the redirection configuration of a site.
 *
 * @param request UpdateRedirectRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRedirectRuleResponse
 */
UpdateRedirectRuleResponse Client::updateRedirectRuleWithOptions(const UpdateRedirectRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasReserveQueryString()) {
    query["ReserveQueryString"] = request.getReserveQueryString();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasStatusCode()) {
    query["StatusCode"] = request.getStatusCode();
  }

  if (!!request.hasTargetUrl()) {
    query["TargetUrl"] = request.getTargetUrl();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Updates the redirection configuration of a site.
 *
 * @param request UpdateRedirectRuleRequest
 * @return UpdateRedirectRuleResponse
 */
UpdateRedirectRuleResponse Client::updateRedirectRule(const UpdateRedirectRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRedirectRuleWithOptions(request, runtime);
}

/**
 * @summary Update a Site\\"s URL Rewrite Configuration
 *
 * @param request UpdateRewriteUrlRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRewriteUrlRuleResponse
 */
UpdateRewriteUrlRuleResponse Client::updateRewriteUrlRuleWithOptions(const UpdateRewriteUrlRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasQueryString()) {
    query["QueryString"] = request.getQueryString();
  }

  if (!!request.hasRewriteQueryStringType()) {
    query["RewriteQueryStringType"] = request.getRewriteQueryStringType();
  }

  if (!!request.hasRewriteUriType()) {
    query["RewriteUriType"] = request.getRewriteUriType();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasUri()) {
    query["Uri"] = request.getUri();
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
 * @summary Update a Site\\"s URL Rewrite Configuration
 *
 * @param request UpdateRewriteUrlRuleRequest
 * @return UpdateRewriteUrlRuleResponse
 */
UpdateRewriteUrlRuleResponse Client::updateRewriteUrlRule(const UpdateRewriteUrlRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRewriteUrlRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a routine.
 *
 * @param request UpdateRoutineConfigDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRoutineConfigDescriptionResponse
 */
UpdateRoutineConfigDescriptionResponse Client::updateRoutineConfigDescriptionWithOptions(const UpdateRoutineConfigDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
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
 * @summary Modifies the description of a routine.
 *
 * @param request UpdateRoutineConfigDescriptionRequest
 * @return UpdateRoutineConfigDescriptionResponse
 */
UpdateRoutineConfigDescriptionResponse Client::updateRoutineConfigDescription(const UpdateRoutineConfigDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRoutineConfigDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies the route configuration of an Edge Routine.
 *
 * @param request UpdateRoutineRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRoutineRouteResponse
 */
UpdateRoutineRouteResponse Client::updateRoutineRouteWithOptions(const UpdateRoutineRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBypass()) {
    query["Bypass"] = request.getBypass();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasFallback()) {
    query["Fallback"] = request.getFallback();
  }

  if (!!request.hasRouteEnable()) {
    query["RouteEnable"] = request.getRouteEnable();
  }

  if (!!request.hasRouteName()) {
    query["RouteName"] = request.getRouteName();
  }

  if (!!request.hasRoutineName()) {
    query["RoutineName"] = request.getRoutineName();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
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
 * @summary Modifies the route configuration of an Edge Routine.
 *
 * @param request UpdateRoutineRouteRequest
 * @return UpdateRoutineRouteResponse
 */
UpdateRoutineRouteResponse Client::updateRoutineRoute(const UpdateRoutineRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRoutineRouteWithOptions(request, runtime);
}

/**
 * @summary Updates a scheduled prefetch plan by prefetch plan ID.
 *
 * @param request UpdateScheduledPreloadExecutionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateScheduledPreloadExecutionResponse
 */
UpdateScheduledPreloadExecutionResponse Client::updateScheduledPreloadExecutionWithOptions(const UpdateScheduledPreloadExecutionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    body["Interval"] = request.getInterval();
  }

  if (!!request.hasSliceLen()) {
    body["SliceLen"] = request.getSliceLen();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
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
 * @summary Updates a scheduled prefetch plan by prefetch plan ID.
 *
 * @param request UpdateScheduledPreloadExecutionRequest
 * @return UpdateScheduledPreloadExecutionResponse
 */
UpdateScheduledPreloadExecutionResponse Client::updateScheduledPreloadExecution(const UpdateScheduledPreloadExecutionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateScheduledPreloadExecutionWithOptions(request, runtime);
}

/**
 * @summary Modifies the search engine crawler allowlisting configuration for a site.
 *
 * @param request UpdateSeoBypassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSeoBypassResponse
 */
UpdateSeoBypassResponse Client::updateSeoBypassWithOptions(const UpdateSeoBypassRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Modifies the search engine crawler allowlisting configuration for a site.
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
    query["AccessType"] = request.getAccessType();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Modifies the acceleration region of a site. Updates the acceleration configuration of a site to adapt to traffic distribution changes or improve the access experience for users in specific regions.
 *
 * @param request UpdateSiteCoverageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSiteCoverageResponse
 */
UpdateSiteCoverageResponse Client::updateSiteCoverageWithOptions(const UpdateSiteCoverageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoverage()) {
    query["Coverage"] = request.getCoverage();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Modifies the acceleration region of a site. Updates the acceleration configuration of a site to adapt to traffic distribution changes or improve the access experience for users in specific regions.
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
    request.setCookiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCookies(), "Cookies", "json"));
  }

  if (!!tmpReq.hasRequestHeaders()) {
    request.setRequestHeadersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRequestHeaders(), "RequestHeaders", "json"));
  }

  if (!!tmpReq.hasResponseHeaders()) {
    request.setResponseHeadersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResponseHeaders(), "ResponseHeaders", "json"));
  }

  json body = {};
  if (!!request.hasCookiesShrink()) {
    body["Cookies"] = request.getCookiesShrink();
  }

  if (!!request.hasRequestHeadersShrink()) {
    body["RequestHeaders"] = request.getRequestHeadersShrink();
  }

  if (!!request.hasResponseHeadersShrink()) {
    body["ResponseHeaders"] = request.getResponseHeadersShrink();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.getSiteId();
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
 * @summary Updates a site delivery task.
 *
 * @param request UpdateSiteDeliveryTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSiteDeliveryTaskResponse
 */
UpdateSiteDeliveryTaskResponse Client::updateSiteDeliveryTaskWithOptions(const UpdateSiteDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessType()) {
    body["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasDiscardRate()) {
    body["DiscardRate"] = request.getDiscardRate();
  }

  if (!!request.hasFieldName()) {
    body["FieldName"] = request.getFieldName();
  }

  if (!!request.hasFilterVer()) {
    body["FilterVer"] = request.getFilterVer();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.getSiteId();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.getTaskName();
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
 * @summary Updates a site delivery task.
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
 * @summary Modifies the exclusive site name configuration. After this feature is enabled, other accounts can no longer create sites or subsites with the same name as the current site.
 *
 * @param request UpdateSiteNameExclusiveRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSiteNameExclusiveResponse
 */
UpdateSiteNameExclusiveResponse Client::updateSiteNameExclusiveWithOptions(const UpdateSiteNameExclusiveRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Modifies the exclusive site name configuration. After this feature is enabled, other accounts can no longer create sites or subsites with the same name as the current site.
 *
 * @param request UpdateSiteNameExclusiveRequest
 * @return UpdateSiteNameExclusiveResponse
 */
UpdateSiteNameExclusiveResponse Client::updateSiteNameExclusive(const UpdateSiteNameExclusiveRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSiteNameExclusiveWithOptions(request, runtime);
}

/**
 * @summary Modifies the site pause configuration.
 *
 * @description This API operation can be called only for sites that use the NS access mode.
 *
 * @param request UpdateSitePauseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSitePauseResponse
 */
UpdateSitePauseResponse Client::updateSitePauseWithOptions(const UpdateSitePauseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPaused()) {
    query["Paused"] = request.getPaused();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Modifies the site pause configuration.
 *
 * @description This API operation can be called only for sites that use the NS access mode.
 *
 * @param request UpdateSitePauseRequest
 * @return UpdateSitePauseResponse
 */
UpdateSitePauseResponse Client::updateSitePause(const UpdateSitePauseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSitePauseWithOptions(request, runtime);
}

/**
 * @summary Modifies the custom nameserver (NS) names for a single site.
 *
 * @description The site plan must be Enterprise Edition or higher to use the custom NS feature.
 *
 * @param request UpdateSiteVanityNSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSiteVanityNSResponse
 */
UpdateSiteVanityNSResponse Client::updateSiteVanityNSWithOptions(const UpdateSiteVanityNSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasVanityNSList()) {
    query["VanityNSList"] = request.getVanityNSList();
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
 * @summary Modifies the custom nameserver (NS) names for a single site.
 *
 * @description The site plan must be Enterprise Edition or higher to use the custom NS feature.
 *
 * @param request UpdateSiteVanityNSRequest
 * @return UpdateSiteVanityNSResponse
 */
UpdateSiteVanityNSResponse Client::updateSiteVanityNS(const UpdateSiteVanityNSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSiteVanityNSWithOptions(request, runtime);
}

/**
 * @summary Modifies the multi-level cache configuration of a site.
 *
 * @param request UpdateTieredCacheRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTieredCacheResponse
 */
UpdateTieredCacheResponse Client::updateTieredCacheWithOptions(const UpdateTieredCacheRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCacheArchitectureMode()) {
    query["CacheArchitectureMode"] = request.getCacheArchitectureMode();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Modifies the multi-level cache configuration of a site.
 *
 * @param request UpdateTieredCacheRequest
 * @return UpdateTieredCacheResponse
 */
UpdateTieredCacheResponse Client::updateTieredCache(const UpdateTieredCacheRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTieredCacheWithOptions(request, runtime);
}

/**
 * @summary Modifies the forwarding rule configurations of a Layer 4 application under a specified site.
 *
 * @description If ListTransportLayerApplications returns an empty Layer 4 acceleration application list, use CreateTransportLayerApplication to create a Layer 4 acceleration application, and then use this API to modify the configurations of the Layer 4 acceleration application.
 * When creating a Layer 4 acceleration application, the selected site must be an activated site. After creating a site, call the VerifySite API to verify it. A site that passes verification is automatically activated, indicated by the response parameter Passed=true.
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
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRules(), "Rules", "json"));
  }

  json query = {};
  if (!!request.hasApplicationId()) {
    query["ApplicationId"] = request.getApplicationId();
  }

  if (!!request.hasCrossBorderOptimization()) {
    query["CrossBorderOptimization"] = request.getCrossBorderOptimization();
  }

  if (!!request.hasIpAccessRule()) {
    query["IpAccessRule"] = request.getIpAccessRule();
  }

  if (!!request.hasIpv6()) {
    query["Ipv6"] = request.getIpv6();
  }

  if (!!request.hasKeepAliveProtection()) {
    query["KeepAliveProtection"] = request.getKeepAliveProtection();
  }

  if (!!request.hasRulesShrink()) {
    query["Rules"] = request.getRulesShrink();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasStaticIp()) {
    query["StaticIp"] = request.getStaticIp();
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
 * @summary Modifies the forwarding rule configurations of a Layer 4 application under a specified site.
 *
 * @description If ListTransportLayerApplications returns an empty Layer 4 acceleration application list, use CreateTransportLayerApplication to create a Layer 4 acceleration application, and then use this API to modify the configurations of the Layer 4 acceleration application.
 * When creating a Layer 4 acceleration application, the selected site must be an activated site. After creating a site, call the VerifySite API to verify it. A site that passes verification is automatically activated, indicated by the response parameter Passed=true.
 *
 * @param request UpdateTransportLayerApplicationRequest
 * @return UpdateTransportLayerApplicationResponse
 */
UpdateTransportLayerApplicationResponse Client::updateTransportLayerApplication(const UpdateTransportLayerApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTransportLayerApplicationWithOptions(request, runtime);
}

/**
 * @summary Updates the webpage monitoring configuration.
 *
 * @param request UpdateUrlObservationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUrlObservationResponse
 */
UpdateUrlObservationResponse Client::updateUrlObservationWithOptions(const UpdateUrlObservationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasSdkType()) {
    query["SdkType"] = request.getSdkType();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
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
 * @summary Updates the webpage monitoring configuration.
 *
 * @param request UpdateUrlObservationRequest
 * @return UpdateUrlObservationResponse
 */
UpdateUrlObservationResponse Client::updateUrlObservation(const UpdateUrlObservationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUrlObservationWithOptions(request, runtime);
}

/**
 * @summary Updates a delivery task configuration. You can modify the task name, selected fields, real-time log type, and discard rate.
 *
 * @param request UpdateUserDeliveryTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserDeliveryTaskResponse
 */
UpdateUserDeliveryTaskResponse Client::updateUserDeliveryTaskWithOptions(const UpdateUserDeliveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessType()) {
    body["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasDetails()) {
    body["Details"] = request.getDetails();
  }

  if (!!request.hasDiscardRate()) {
    body["DiscardRate"] = request.getDiscardRate();
  }

  if (!!request.hasFieldName()) {
    body["FieldName"] = request.getFieldName();
  }

  if (!!request.hasFilterVer()) {
    body["FilterVer"] = request.getFilterVer();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.getTaskName();
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
 * @summary Updates a delivery task configuration. You can modify the task name, selected fields, real-time log type, and discard rate.
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
 * Use this operation to enable or disable a delivery task by using TaskName and Method. The response includes the most recent status and operation result details of the task.
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
 * Use this operation to enable or disable a delivery task by using TaskName and Method. The response includes the most recent status and operation result details of the task.
 *
 * @param request UpdateUserDeliveryTaskStatusRequest
 * @return UpdateUserDeliveryTaskStatusResponse
 */
UpdateUserDeliveryTaskStatusResponse Client::updateUserDeliveryTaskStatus(const UpdateUserDeliveryTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserDeliveryTaskStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the WAF ruleset configuration for a specified instance, including its position, name, and other properties.
 *
 * @description ## Request description
 * - This operation updates an existing WAF ruleset. You can modify the position, name, description, status, and expression of the ruleset.
 * - Include only the parameters that you want to modify. Omit parameters that you do not want to change.
 * - Note: Before you call this operation, ensure that the `InstanceId` and `Id` values are correct. Otherwise, the request may fail.
 *
 * @param tmpReq UpdateUserWafRulesetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserWafRulesetResponse
 */
UpdateUserWafRulesetResponse Client::updateUserWafRulesetWithOptions(const UpdateUserWafRulesetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateUserWafRulesetShrinkRequest request = UpdateUserWafRulesetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRules(), "Rules", "json"));
  }

  if (!!tmpReq.hasShared()) {
    request.setSharedShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getShared(), "Shared", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasExpression()) {
    body["Expression"] = request.getExpression();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPosition()) {
    body["Position"] = request.getPosition();
  }

  if (!!request.hasRulesShrink()) {
    body["Rules"] = request.getRulesShrink();
  }

  if (!!request.hasSharedShrink()) {
    body["Shared"] = request.getSharedShrink();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateUserWafRuleset"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserWafRulesetResponse>();
}

/**
 * @summary Modifies the WAF ruleset configuration for a specified instance, including its position, name, and other properties.
 *
 * @description ## Request description
 * - This operation updates an existing WAF ruleset. You can modify the position, name, description, status, and expression of the ruleset.
 * - Include only the parameters that you want to modify. Omit parameters that you do not want to change.
 * - Note: Before you call this operation, ensure that the `InstanceId` and `Id` values are correct. Otherwise, the request may fail.
 *
 * @param request UpdateUserWafRulesetRequest
 * @return UpdateUserWafRulesetResponse
 */
UpdateUserWafRulesetResponse Client::updateUserWafRuleset(const UpdateUserWafRulesetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserWafRulesetWithOptions(request, runtime);
}

/**
 * @summary Modifies the video processing configuration of a website.
 *
 * @param request UpdateVideoProcessingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVideoProcessingResponse
 */
UpdateVideoProcessingResponse Client::updateVideoProcessingWithOptions(const UpdateVideoProcessingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasFlvSeekEnd()) {
    query["FlvSeekEnd"] = request.getFlvSeekEnd();
  }

  if (!!request.hasFlvSeekStart()) {
    query["FlvSeekStart"] = request.getFlvSeekStart();
  }

  if (!!request.hasFlvVideoSeekMode()) {
    query["FlvVideoSeekMode"] = request.getFlvVideoSeekMode();
  }

  if (!!request.hasMp4SeekEnd()) {
    query["Mp4SeekEnd"] = request.getMp4SeekEnd();
  }

  if (!!request.hasMp4SeekStart()) {
    query["Mp4SeekStart"] = request.getMp4SeekStart();
  }

  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSequence()) {
    query["Sequence"] = request.getSequence();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasVideoSeekEnable()) {
    query["VideoSeekEnable"] = request.getVideoSeekEnable();
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
 * @summary Modifies the video processing configuration of a website.
 *
 * @param request UpdateVideoProcessingRequest
 * @return UpdateVideoProcessingResponse
 */
UpdateVideoProcessingResponse Client::updateVideoProcessing(const UpdateVideoProcessingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVideoProcessingWithOptions(request, runtime);
}

/**
 * @summary Updates a web application firewall (WAF) rule. Use this operation to modify the rule\\"s configuration and status.
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
    request.setConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfig(), "Config", "json"));
  }

  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  json body = {};
  if (!!request.hasConfigShrink()) {
    body["Config"] = request.getConfigShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasPosition()) {
    body["Position"] = request.getPosition();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
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
 * @summary Updates a web application firewall (WAF) rule. Use this operation to modify the rule\\"s configuration and status.
 *
 * @param request UpdateWafRuleRequest
 * @return UpdateWafRuleResponse
 */
UpdateWafRuleResponse Client::updateWafRule(const UpdateWafRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWafRuleWithOptions(request, runtime);
}

/**
 * @summary Updates a WAF ruleset based on its ID.
 *
 * @param request UpdateWafRulesetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWafRulesetResponse
 */
UpdateWafRulesetResponse Client::updateWafRulesetWithOptions(const UpdateWafRulesetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasSiteVersion()) {
    query["SiteVersion"] = request.getSiteVersion();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
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
 * @summary Updates a WAF ruleset based on its ID.
 *
 * @param request UpdateWafRulesetRequest
 * @return UpdateWafRulesetResponse
 */
UpdateWafRulesetResponse Client::updateWafRuleset(const UpdateWafRulesetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWafRulesetWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration of a specified waiting room.
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
    request.setHostNameAndPathShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHostNameAndPath(), "HostNameAndPath", "json"));
  }

  json query = {};
  if (!!request.hasCookieName()) {
    query["CookieName"] = request.getCookieName();
  }

  if (!!request.hasCustomPageHtml()) {
    query["CustomPageHtml"] = request.getCustomPageHtml();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDisableSessionRenewalEnable()) {
    query["DisableSessionRenewalEnable"] = request.getDisableSessionRenewalEnable();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasHostNameAndPathShrink()) {
    query["HostNameAndPath"] = request.getHostNameAndPathShrink();
  }

  if (!!request.hasJsonResponseEnable()) {
    query["JsonResponseEnable"] = request.getJsonResponseEnable();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNewUsersPerMinute()) {
    query["NewUsersPerMinute"] = request.getNewUsersPerMinute();
  }

  if (!!request.hasQueueAllEnable()) {
    query["QueueAllEnable"] = request.getQueueAllEnable();
  }

  if (!!request.hasQueuingMethod()) {
    query["QueuingMethod"] = request.getQueuingMethod();
  }

  if (!!request.hasQueuingStatusCode()) {
    query["QueuingStatusCode"] = request.getQueuingStatusCode();
  }

  if (!!request.hasSessionDuration()) {
    query["SessionDuration"] = request.getSessionDuration();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasTotalActiveUsers()) {
    query["TotalActiveUsers"] = request.getTotalActiveUsers();
  }

  if (!!request.hasWaitingRoomId()) {
    query["WaitingRoomId"] = request.getWaitingRoomId();
  }

  if (!!request.hasWaitingRoomType()) {
    query["WaitingRoomType"] = request.getWaitingRoomType();
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
 * @summary Updates the configuration of a specified waiting room.
 *
 * @param request UpdateWaitingRoomRequest
 * @return UpdateWaitingRoomResponse
 */
UpdateWaitingRoomResponse Client::updateWaitingRoom(const UpdateWaitingRoomRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWaitingRoomWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration of a waiting room event.
 *
 * @param request UpdateWaitingRoomEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWaitingRoomEventResponse
 */
UpdateWaitingRoomEventResponse Client::updateWaitingRoomEventWithOptions(const UpdateWaitingRoomEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomPageHtml()) {
    query["CustomPageHtml"] = request.getCustomPageHtml();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDisableSessionRenewalEnable()) {
    query["DisableSessionRenewalEnable"] = request.getDisableSessionRenewalEnable();
  }

  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasJsonResponseEnable()) {
    query["JsonResponseEnable"] = request.getJsonResponseEnable();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNewUsersPerMinute()) {
    query["NewUsersPerMinute"] = request.getNewUsersPerMinute();
  }

  if (!!request.hasPreQueueEnable()) {
    query["PreQueueEnable"] = request.getPreQueueEnable();
  }

  if (!!request.hasPreQueueStartTime()) {
    query["PreQueueStartTime"] = request.getPreQueueStartTime();
  }

  if (!!request.hasQueuingMethod()) {
    query["QueuingMethod"] = request.getQueuingMethod();
  }

  if (!!request.hasQueuingStatusCode()) {
    query["QueuingStatusCode"] = request.getQueuingStatusCode();
  }

  if (!!request.hasRandomPreQueueEnable()) {
    query["RandomPreQueueEnable"] = request.getRandomPreQueueEnable();
  }

  if (!!request.hasSessionDuration()) {
    query["SessionDuration"] = request.getSessionDuration();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTotalActiveUsers()) {
    query["TotalActiveUsers"] = request.getTotalActiveUsers();
  }

  if (!!request.hasWaitingRoomEventId()) {
    query["WaitingRoomEventId"] = request.getWaitingRoomEventId();
  }

  if (!!request.hasWaitingRoomType()) {
    query["WaitingRoomType"] = request.getWaitingRoomType();
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
 * @summary Updates the configuration of a waiting room event.
 *
 * @param request UpdateWaitingRoomEventRequest
 * @return UpdateWaitingRoomEventResponse
 */
UpdateWaitingRoomEventResponse Client::updateWaitingRoomEvent(const UpdateWaitingRoomEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWaitingRoomEventWithOptions(request, runtime);
}

/**
 * @summary Updates the waiting room bypass rule configuration for a specified site.
 *
 * @description Modifies the rule settings of a specific waiting room for a site, including the rule name, enabled status, and rule content.
 *
 * @param request UpdateWaitingRoomRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWaitingRoomRuleResponse
 */
UpdateWaitingRoomRuleResponse Client::updateWaitingRoomRuleWithOptions(const UpdateWaitingRoomRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRule()) {
    query["Rule"] = request.getRule();
  }

  if (!!request.hasRuleEnable()) {
    query["RuleEnable"] = request.getRuleEnable();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasWaitingRoomRuleId()) {
    query["WaitingRoomRuleId"] = request.getWaitingRoomRuleId();
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
 * @summary Updates the waiting room bypass rule configuration for a specified site.
 *
 * @description Modifies the rule settings of a specific waiting room for a site, including the rule name, enabled status, and rule content.
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
    query["SiteId"] = request.getSiteId();
  }

  json body = {};
  if (!!request.hasCertificate()) {
    body["Certificate"] = request.getCertificate();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
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
 * @summary Uploads a refresh or prefetch file to improve access speed.
 *
 * @description > 
 * > - The maximum file size is 10 MB.
 *
 * @param request UploadFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadFileResponse
 */
UploadFileResponse Client::uploadFileWithOptions(const UploadFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUploadTaskName()) {
    query["UploadTaskName"] = request.getUploadTaskName();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
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
 * @summary Uploads a refresh or prefetch file to improve access speed.
 *
 * @description > 
 * > - The maximum file size is 10 MB.
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
  string accessKeyId = credentialModel.getAccessKeyId();
  string accessKeySecret = credentialModel.getAccessKeySecret();
  string securityToken = credentialModel.getSecurityToken();
  string credentialType = credentialModel.getType();
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
      {"content" , request.getUrlObject()},
      {"contentType" , ""}
    }));
    ossHeader = json({
      {"host" , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType)},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    uploadFileReq.setUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  UploadFileResponse uploadFileResp = uploadFileWithOptions(uploadFileReq, runtime);
  return uploadFileResp;
}

/**
 * @summary Uploads an origin server CA certificate.
 *
 * @description You can add multiple origins to a site. Edge Security Acceleration (ESA) supports various origin types, including domain names, IP addresses, OSS, and S3. Origin authentication is supported for OSS or S3 origins.
 *
 * @param request UploadOriginCaCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadOriginCaCertificateResponse
 */
UploadOriginCaCertificateResponse Client::uploadOriginCaCertificateWithOptions(const UploadOriginCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCertificate()) {
    body["Certificate"] = request.getCertificate();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSiteId()) {
    body["SiteId"] = request.getSiteId();
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
 * @summary Uploads an origin server CA certificate.
 *
 * @description You can add multiple origins to a site. Edge Security Acceleration (ESA) supports various origin types, including domain names, IP addresses, OSS, and S3. Origin authentication is supported for OSS or S3 origins.
 *
 * @param request UploadOriginCaCertificateRequest
 * @return UploadOriginCaCertificateResponse
 */
UploadOriginCaCertificateResponse Client::uploadOriginCaCertificate(const UploadOriginCaCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadOriginCaCertificateWithOptions(request, runtime);
}

/**
 * @summary Uploads an origin client certificate for a site.
 *
 * @param request UploadOriginClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadOriginClientCertificateResponse
 */
UploadOriginClientCertificateResponse Client::uploadOriginClientCertificateWithOptions(const UploadOriginClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSiteId()) {
    query["SiteId"] = request.getSiteId();
  }

  json body = {};
  if (!!request.hasCertificate()) {
    body["Certificate"] = request.getCertificate();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPrivateKey()) {
    body["PrivateKey"] = request.getPrivateKey();
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
 * @summary Uploads an origin client certificate for a site.
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
    query["SiteId"] = request.getSiteId();
  }

  json body = {};
  if (!!request.hasCertificate()) {
    body["Certificate"] = request.getCertificate();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPrivateKey()) {
    body["PrivateKey"] = request.getPrivateKey();
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
 * @summary Verifies the ownership of a SaaS domain name. Sites that pass the verification are automatically activated.
 *
 * @param request VerifyCustomHostnameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyCustomHostnameResponse
 */
VerifyCustomHostnameResponse Client::verifyCustomHostnameWithOptions(const VerifyCustomHostnameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHostnameId()) {
    query["HostnameId"] = request.getHostnameId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyCustomHostname"},
    {"version" , "2024-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyCustomHostnameResponse>();
}

/**
 * @summary Verifies the ownership of a SaaS domain name. Sites that pass the verification are automatically activated.
 *
 * @param request VerifyCustomHostnameRequest
 * @return VerifyCustomHostnameResponse
 */
VerifyCustomHostnameResponse Client::verifyCustomHostname(const VerifyCustomHostnameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyCustomHostnameWithOptions(request, runtime);
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
    query["SiteId"] = request.getSiteId();
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