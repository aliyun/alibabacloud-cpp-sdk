#include <darabonba/Core.hpp>
#include <alibabacloud/Dcdn20180115.hpp>
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
using namespace AlibabaCloud::Dcdn20180115::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Dcdn20180115
{

AlibabaCloud::Dcdn20180115::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "dcdn.aliyuncs.com"},
    {"ap-northeast-2-pop" , "dcdn.aliyuncs.com"},
    {"ap-south-1" , "dcdn.aliyuncs.com"},
    {"ap-southeast-1" , "dcdn.aliyuncs.com"},
    {"ap-southeast-2" , "dcdn.aliyuncs.com"},
    {"ap-southeast-3" , "dcdn.aliyuncs.com"},
    {"ap-southeast-5" , "dcdn.aliyuncs.com"},
    {"cn-beijing" , "dcdn.aliyuncs.com"},
    {"cn-beijing-finance-1" , "dcdn.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "dcdn.aliyuncs.com"},
    {"cn-beijing-gov-1" , "dcdn.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "dcdn.aliyuncs.com"},
    {"cn-chengdu" , "dcdn.aliyuncs.com"},
    {"cn-edge-1" , "dcdn.aliyuncs.com"},
    {"cn-fujian" , "dcdn.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "dcdn.aliyuncs.com"},
    {"cn-hangzhou" , "dcdn.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "dcdn.aliyuncs.com"},
    {"cn-hangzhou-finance" , "dcdn.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "dcdn.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "dcdn.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "dcdn.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "dcdn.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "dcdn.aliyuncs.com"},
    {"cn-hongkong" , "dcdn.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "dcdn.aliyuncs.com"},
    {"cn-huhehaote" , "dcdn.aliyuncs.com"},
    {"cn-north-2-gov-1" , "dcdn.aliyuncs.com"},
    {"cn-qingdao" , "dcdn.aliyuncs.com"},
    {"cn-qingdao-nebula" , "dcdn.aliyuncs.com"},
    {"cn-shanghai" , "dcdn.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "dcdn.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "dcdn.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "dcdn.aliyuncs.com"},
    {"cn-shanghai-inner" , "dcdn.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "dcdn.aliyuncs.com"},
    {"cn-shenzhen" , "dcdn.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "dcdn.aliyuncs.com"},
    {"cn-shenzhen-inner" , "dcdn.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "dcdn.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "dcdn.aliyuncs.com"},
    {"cn-wuhan" , "dcdn.aliyuncs.com"},
    {"cn-yushanfang" , "dcdn.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "dcdn.aliyuncs.com"},
    {"cn-zhangjiakou" , "dcdn.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "dcdn.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "dcdn.aliyuncs.com"},
    {"eu-central-1" , "dcdn.aliyuncs.com"},
    {"eu-west-1" , "dcdn.aliyuncs.com"},
    {"eu-west-1-oxs" , "dcdn.aliyuncs.com"},
    {"me-east-1" , "dcdn.aliyuncs.com"},
    {"rus-west-1-pop" , "dcdn.aliyuncs.com"},
    {"us-east-1" , "dcdn.aliyuncs.com"},
    {"us-west-1" , "dcdn.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("dcdn", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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

  shared_ptr<Darabonba::Http::Request> _lastRequest = nullptr;
  shared_ptr<Darabonba::Http::MCurlResponse> _lastResponse = nullptr;
  Darabonba::Exception _lastException;
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
      request_.setProtocol("HTTPS");
      request_.setMethod("POST");
      request_.setPathname(DARA_STRING_TEMPLATE("/"));
      request_.setHeaders(json({
        {"host" , Darabonba::Convert::stringVal(form["host"])},
        {"date" , Utils::Utils::getDateUTCString()},
        {"user-agent" , Utils::Utils::getUserAgent("")}
      }).get<map<string, string>>());
      request_.getHeaders()["content-type"] = DARA_STRING_TEMPLATE("multipart/form-data; boundary=" , boundary);
      request_.setBody(Darabonba::Http::Form::toFileForm(form, boundary));
      _lastRequest = make_shared<Darabonba::Http::Request>(request_);
      auto futureResp_ = Darabonba::Core::doAction(request_, runtime_);
      shared_ptr<Darabonba::Http::MCurlResponse> response_ = futureResp_.get();
      _lastResponse  = response_;

      json respMap = nullptr;
      string bodyStr = Darabonba::Stream::readAsString(response_->getBody());
      if ((response_->getStatusCode() >= 400) && (response_->getStatusCode() < 600)) {
        respMap = Darabonba::XML::parseXml(bodyStr, nullptr);
        json err = json(respMap["Error"]);
        throw ClientException(json({
          {"code" , Darabonba::Convert::stringVal(err["Code"])},
          {"message" , Darabonba::Convert::stringVal(err["Message"])},
          {"data" , json({
            {"httpCode" , response_->getStatusCode()},
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

  throw *_context.getException();
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
 * @summary Adds a domain name to accelerate. You can specify only one domain name in each request.
 *
 * @description > *   Dynamic Content Delivery Network (DCDN) is activated.
 * > *   Internet content provider (ICP) filing is complete for the accelerated domain name.
 * > *   If the content of the origin server is not stored on Alibaba Cloud, the content must be reviewed. After you submit the request, the review is complete by the end of the following business day.
 * > *   You can call this operation up to 30 times per second per account.
 *
 * @param request AddDcdnDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDcdnDomainResponse
 */
AddDcdnDomainResponse Client::addDcdnDomainWithOptions(const AddDcdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckUrl()) {
    query["CheckUrl"] = request.getCheckUrl();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasFunctionType()) {
    query["FunctionType"] = request.getFunctionType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasScene()) {
    query["Scene"] = request.getScene();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSources()) {
    query["Sources"] = request.getSources();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTopLevelDomain()) {
    query["TopLevelDomain"] = request.getTopLevelDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDcdnDomain"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDcdnDomainResponse>();
}

/**
 * @summary Adds a domain name to accelerate. You can specify only one domain name in each request.
 *
 * @description > *   Dynamic Content Delivery Network (DCDN) is activated.
 * > *   Internet content provider (ICP) filing is complete for the accelerated domain name.
 * > *   If the content of the origin server is not stored on Alibaba Cloud, the content must be reviewed. After you submit the request, the review is complete by the end of the following business day.
 * > *   You can call this operation up to 30 times per second per account.
 *
 * @param request AddDcdnDomainRequest
 * @return AddDcdnDomainResponse
 */
AddDcdnDomainResponse Client::addDcdnDomain(const AddDcdnDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDcdnDomainWithOptions(request, runtime);
}

/**
 * @summary Adds a domain name to IPA. You can specify only one domain name in each request.
 *
 * @description > 
 * *   Make sure that the IPA service is activated before you add a domain name to accelerate.
 * *   Make sure that the Internet content provider (ICP) filling is complete for the domain name to accelerate.
 * *   If the content on the origin server is not stored on Alibaba Cloud, the content must be reviewed. The review is complete by the end of the next business day after you submit the request.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request AddDcdnIpaDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDcdnIpaDomainResponse
 */
AddDcdnIpaDomainResponse Client::addDcdnIpaDomainWithOptions(const AddDcdnIpaDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckUrl()) {
    query["CheckUrl"] = request.getCheckUrl();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSources()) {
    query["Sources"] = request.getSources();
  }

  if (!!request.hasTopLevelDomain()) {
    query["TopLevelDomain"] = request.getTopLevelDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDcdnIpaDomain"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDcdnIpaDomainResponse>();
}

/**
 * @summary Adds a domain name to IPA. You can specify only one domain name in each request.
 *
 * @description > 
 * *   Make sure that the IPA service is activated before you add a domain name to accelerate.
 * *   Make sure that the Internet content provider (ICP) filling is complete for the domain name to accelerate.
 * *   If the content on the origin server is not stored on Alibaba Cloud, the content must be reviewed. The review is complete by the end of the next business day after you submit the request.
 * *   You can call this operation up to 10 times per second per user.
 *
 * @param request AddDcdnIpaDomainRequest
 * @return AddDcdnIpaDomainResponse
 */
AddDcdnIpaDomainResponse Client::addDcdnIpaDomain(const AddDcdnIpaDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDcdnIpaDomainWithOptions(request, runtime);
}

/**
 * @summary Adds one or more domain names to DCDN at a time.
 *
 * @description **Prerequisites**:
 * *   The [DCDN service is activated](https://help.aliyun.com/document_detail/64926.html).
 * *   Internet content provider (ICP) filing is complete for the accelerated domain names.
 * > *   If the content of the origin server is not stored on Alibaba Cloud, the content must be reviewed. After you submit the request, the review is complete by the end of the following business day.
 * >*   You can specify up to 50 domain names in each request.
 * >*   You can call this operation up to 30 times per second per account.
 *
 * @param request BatchAddDcdnDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchAddDcdnDomainResponse
 */
BatchAddDcdnDomainResponse Client::batchAddDcdnDomainWithOptions(const BatchAddDcdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckUrl()) {
    query["CheckUrl"] = request.getCheckUrl();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSources()) {
    query["Sources"] = request.getSources();
  }

  if (!!request.hasTopLevelDomain()) {
    query["TopLevelDomain"] = request.getTopLevelDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchAddDcdnDomain"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchAddDcdnDomainResponse>();
}

/**
 * @summary Adds one or more domain names to DCDN at a time.
 *
 * @description **Prerequisites**:
 * *   The [DCDN service is activated](https://help.aliyun.com/document_detail/64926.html).
 * *   Internet content provider (ICP) filing is complete for the accelerated domain names.
 * > *   If the content of the origin server is not stored on Alibaba Cloud, the content must be reviewed. After you submit the request, the review is complete by the end of the following business day.
 * >*   You can specify up to 50 domain names in each request.
 * >*   You can call this operation up to 30 times per second per account.
 *
 * @param request BatchAddDcdnDomainRequest
 * @return BatchAddDcdnDomainResponse
 */
BatchAddDcdnDomainResponse Client::batchAddDcdnDomain(const BatchAddDcdnDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchAddDcdnDomainWithOptions(request, runtime);
}

/**
 * @summary Creates Web Application Firewall (WAF) protection rules.
 *
 * @description >  You can call this operation up to 20 times per second per account.
 *
 * @param request BatchCreateDcdnWafRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCreateDcdnWafRulesResponse
 */
BatchCreateDcdnWafRulesResponse Client::batchCreateDcdnWafRulesWithOptions(const BatchCreateDcdnWafRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRuleConfigs()) {
    body["RuleConfigs"] = request.getRuleConfigs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BatchCreateDcdnWafRules"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCreateDcdnWafRulesResponse>();
}

/**
 * @summary Creates Web Application Firewall (WAF) protection rules.
 *
 * @description >  You can call this operation up to 20 times per second per account.
 *
 * @param request BatchCreateDcdnWafRulesRequest
 * @return BatchCreateDcdnWafRulesResponse
 */
BatchCreateDcdnWafRulesResponse Client::batchCreateDcdnWafRules(const BatchCreateDcdnWafRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCreateDcdnWafRulesWithOptions(request, runtime);
}

/**
 * @summary Deletes configurations of multiple accelerated domain names at a time.
 *
 * @description > - You can specify up to 50 domain names in each request.
 * > - You can call this operation up to 30 times per second per account.
 *
 * @param request BatchDeleteDcdnDomainConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteDcdnDomainConfigsResponse
 */
BatchDeleteDcdnDomainConfigsResponse Client::batchDeleteDcdnDomainConfigsWithOptions(const BatchDeleteDcdnDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.getDomainNames();
  }

  if (!!request.hasFunctionNames()) {
    query["FunctionNames"] = request.getFunctionNames();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchDeleteDcdnDomainConfigs"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteDcdnDomainConfigsResponse>();
}

/**
 * @summary Deletes configurations of multiple accelerated domain names at a time.
 *
 * @description > - You can specify up to 50 domain names in each request.
 * > - You can call this operation up to 30 times per second per account.
 *
 * @param request BatchDeleteDcdnDomainConfigsRequest
 * @return BatchDeleteDcdnDomainConfigsResponse
 */
BatchDeleteDcdnDomainConfigsResponse Client::batchDeleteDcdnDomainConfigs(const BatchDeleteDcdnDomainConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteDcdnDomainConfigsWithOptions(request, runtime);
}

/**
 * @summary 批量删除kv数据，支持最大2M的请求体
 *
 * @param tmpReq BatchDeleteDcdnKvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteDcdnKvResponse
 */
BatchDeleteDcdnKvResponse Client::batchDeleteDcdnKvWithOptions(const BatchDeleteDcdnKvRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchDeleteDcdnKvShrinkRequest request = BatchDeleteDcdnKvShrinkRequest();
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
    {"action" , "BatchDeleteDcdnKv"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteDcdnKvResponse>();
}

/**
 * @summary 批量删除kv数据，支持最大2M的请求体
 *
 * @param request BatchDeleteDcdnKvRequest
 * @return BatchDeleteDcdnKvResponse
 */
BatchDeleteDcdnKvResponse Client::batchDeleteDcdnKv(const BatchDeleteDcdnKvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteDcdnKvWithOptions(request, runtime);
}

/**
 * @summary 批量删除kv数据，支持最大100M的请求体
 *
 * @param request BatchDeleteDcdnKvWithHighCapacityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteDcdnKvWithHighCapacityResponse
 */
BatchDeleteDcdnKvWithHighCapacityResponse Client::batchDeleteDcdnKvWithHighCapacityWithOptions(const BatchDeleteDcdnKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "BatchDeleteDcdnKvWithHighCapacity"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteDcdnKvWithHighCapacityResponse>();
}

/**
 * @summary 批量删除kv数据，支持最大100M的请求体
 *
 * @param request BatchDeleteDcdnKvWithHighCapacityRequest
 * @return BatchDeleteDcdnKvWithHighCapacityResponse
 */
BatchDeleteDcdnKvWithHighCapacityResponse Client::batchDeleteDcdnKvWithHighCapacity(const BatchDeleteDcdnKvWithHighCapacityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteDcdnKvWithHighCapacityWithOptions(request, runtime);
}

BatchDeleteDcdnKvWithHighCapacityResponse Client::batchDeleteDcdnKvWithHighCapacityAdvance(const BatchDeleteDcdnKvWithHighCapacityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "dcdn"},
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
  BatchDeleteDcdnKvWithHighCapacityRequest batchDeleteDcdnKvWithHighCapacityReq = BatchDeleteDcdnKvWithHighCapacityRequest();
  Utils::Utils::convert(request, batchDeleteDcdnKvWithHighCapacityReq);
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
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    batchDeleteDcdnKvWithHighCapacityReq.setUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  BatchDeleteDcdnKvWithHighCapacityResponse batchDeleteDcdnKvWithHighCapacityResp = batchDeleteDcdnKvWithHighCapacityWithOptions(batchDeleteDcdnKvWithHighCapacityReq, runtime);
  return batchDeleteDcdnKvWithHighCapacityResp;
}

/**
 * @summary Deletes multiple Web Application Firewall (WAF) protection rules at a time.
 *
 * @description *   You can call this operation up to 20 times per second per account.
 * *   Alibaba Cloud Dynamic Content Delivery Network (DCDN) supports POST requests.
 *
 * @param request BatchDeleteDcdnWafRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteDcdnWafRulesResponse
 */
BatchDeleteDcdnWafRulesResponse Client::batchDeleteDcdnWafRulesWithOptions(const BatchDeleteDcdnWafRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRuleIds()) {
    body["RuleIds"] = request.getRuleIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BatchDeleteDcdnWafRules"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteDcdnWafRulesResponse>();
}

/**
 * @summary Deletes multiple Web Application Firewall (WAF) protection rules at a time.
 *
 * @description *   You can call this operation up to 20 times per second per account.
 * *   Alibaba Cloud Dynamic Content Delivery Network (DCDN) supports POST requests.
 *
 * @param request BatchDeleteDcdnWafRulesRequest
 * @return BatchDeleteDcdnWafRulesResponse
 */
BatchDeleteDcdnWafRulesResponse Client::batchDeleteDcdnWafRules(const BatchDeleteDcdnWafRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteDcdnWafRulesWithOptions(request, runtime);
}

/**
 * @summary Modifies multiple Web Application Firewall (WAF) protection rules. Only Bot management rules can be modified.
 *
 * @description You can call this operation up to 20 times per second per account.
 *
 * @param request BatchModifyDcdnWafRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchModifyDcdnWafRulesResponse
 */
BatchModifyDcdnWafRulesResponse Client::batchModifyDcdnWafRulesWithOptions(const BatchModifyDcdnWafRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasRuleConfigs()) {
    body["RuleConfigs"] = request.getRuleConfigs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BatchModifyDcdnWafRules"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchModifyDcdnWafRulesResponse>();
}

/**
 * @summary Modifies multiple Web Application Firewall (WAF) protection rules. Only Bot management rules can be modified.
 *
 * @description You can call this operation up to 20 times per second per account.
 *
 * @param request BatchModifyDcdnWafRulesRequest
 * @return BatchModifyDcdnWafRulesResponse
 */
BatchModifyDcdnWafRulesResponse Client::batchModifyDcdnWafRules(const BatchModifyDcdnWafRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchModifyDcdnWafRulesWithOptions(request, runtime);
}

/**
 * @summary Configures multiple key-value (KV) pairs for a namespace.
 *
 * @param tmpReq BatchPutDcdnKvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchPutDcdnKvResponse
 */
BatchPutDcdnKvResponse Client::batchPutDcdnKvWithOptions(const BatchPutDcdnKvRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchPutDcdnKvShrinkRequest request = BatchPutDcdnKvShrinkRequest();
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
    {"action" , "BatchPutDcdnKv"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchPutDcdnKvResponse>();
}

/**
 * @summary Configures multiple key-value (KV) pairs for a namespace.
 *
 * @param request BatchPutDcdnKvRequest
 * @return BatchPutDcdnKvResponse
 */
BatchPutDcdnKvResponse Client::batchPutDcdnKv(const BatchPutDcdnKvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchPutDcdnKvWithOptions(request, runtime);
}

/**
 * @summary 批量写入kv数据，支持最大100M的请求体
 *
 * @param request BatchPutDcdnKvWithHighCapacityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchPutDcdnKvWithHighCapacityResponse
 */
BatchPutDcdnKvWithHighCapacityResponse Client::batchPutDcdnKvWithHighCapacityWithOptions(const BatchPutDcdnKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "BatchPutDcdnKvWithHighCapacity"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchPutDcdnKvWithHighCapacityResponse>();
}

/**
 * @summary 批量写入kv数据，支持最大100M的请求体
 *
 * @param request BatchPutDcdnKvWithHighCapacityRequest
 * @return BatchPutDcdnKvWithHighCapacityResponse
 */
BatchPutDcdnKvWithHighCapacityResponse Client::batchPutDcdnKvWithHighCapacity(const BatchPutDcdnKvWithHighCapacityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchPutDcdnKvWithHighCapacityWithOptions(request, runtime);
}

BatchPutDcdnKvWithHighCapacityResponse Client::batchPutDcdnKvWithHighCapacityAdvance(const BatchPutDcdnKvWithHighCapacityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "dcdn"},
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
  BatchPutDcdnKvWithHighCapacityRequest batchPutDcdnKvWithHighCapacityReq = BatchPutDcdnKvWithHighCapacityRequest();
  Utils::Utils::convert(request, batchPutDcdnKvWithHighCapacityReq);
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
      {"host" , DARA_STRING_TEMPLATE("" , authResponseBody.at("Bucket") , "." , Utils::Utils::getEndpoint(authResponseBody.at("Endpoint"), useAccelerate, _endpointType))},
      {"OSSAccessKeyId" , authResponseBody.at("AccessKeyId")},
      {"policy" , authResponseBody.at("EncodedPolicy")},
      {"Signature" , authResponseBody.at("Signature")},
      {"key" , authResponseBody.at("ObjectKey")},
      {"file" , fileObj},
      {"success_action_status" , "201"}
    });
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader, runtime);
    batchPutDcdnKvWithHighCapacityReq.setUrl(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  BatchPutDcdnKvWithHighCapacityResponse batchPutDcdnKvWithHighCapacityResp = batchPutDcdnKvWithHighCapacityWithOptions(batchPutDcdnKvWithHighCapacityReq, runtime);
  return batchPutDcdnKvWithHighCapacityResp;
}

/**
 * @summary Configures features for one or more domain names.
 *
 * @description *   You can specify up to 50 domain names in each request.
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request BatchSetDcdnDomainConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchSetDcdnDomainConfigsResponse
 */
BatchSetDcdnDomainConfigsResponse Client::batchSetDcdnDomainConfigsWithOptions(const BatchSetDcdnDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.getDomainNames();
  }

  if (!!request.hasFunctions()) {
    query["Functions"] = request.getFunctions();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchSetDcdnDomainConfigs"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchSetDcdnDomainConfigsResponse>();
}

/**
 * @summary Configures features for one or more domain names.
 *
 * @description *   You can specify up to 50 domain names in each request.
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request BatchSetDcdnDomainConfigsRequest
 * @return BatchSetDcdnDomainConfigsResponse
 */
BatchSetDcdnDomainConfigsResponse Client::batchSetDcdnDomainConfigs(const BatchSetDcdnDomainConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchSetDcdnDomainConfigsWithOptions(request, runtime);
}

/**
 * @summary Configures multiple domain names to be accelerated by IP Application Accelerator (IPA).
 *
 * @description > You can call this operation up to 20 times per second per account.
 *
 * @param request BatchSetDcdnIpaDomainConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchSetDcdnIpaDomainConfigsResponse
 */
BatchSetDcdnIpaDomainConfigsResponse Client::batchSetDcdnIpaDomainConfigsWithOptions(const BatchSetDcdnIpaDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.getDomainNames();
  }

  if (!!request.hasFunctions()) {
    query["Functions"] = request.getFunctions();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchSetDcdnIpaDomainConfigs"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchSetDcdnIpaDomainConfigsResponse>();
}

/**
 * @summary Configures multiple domain names to be accelerated by IP Application Accelerator (IPA).
 *
 * @description > You can call this operation up to 20 times per second per account.
 *
 * @param request BatchSetDcdnIpaDomainConfigsRequest
 * @return BatchSetDcdnIpaDomainConfigsResponse
 */
BatchSetDcdnIpaDomainConfigsResponse Client::batchSetDcdnIpaDomainConfigs(const BatchSetDcdnIpaDomainConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchSetDcdnIpaDomainConfigsWithOptions(request, runtime);
}

/**
 * @summary Sets the protection status of multiple domain names at a time.
 *
 * @description #
 * *   You can call this operation up to 20 times per second.
 * *   Alibaba Cloud Dynamic Content Delivery Network (DCDN) supports POST requests.
 *
 * @param request BatchSetDcdnWafDomainConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchSetDcdnWafDomainConfigsResponse
 */
BatchSetDcdnWafDomainConfigsResponse Client::batchSetDcdnWafDomainConfigsWithOptions(const BatchSetDcdnWafDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientIpTag()) {
    body["ClientIpTag"] = request.getClientIpTag();
  }

  if (!!request.hasDefenseStatus()) {
    body["DefenseStatus"] = request.getDefenseStatus();
  }

  if (!!request.hasDomainNames()) {
    body["DomainNames"] = request.getDomainNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BatchSetDcdnWafDomainConfigs"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchSetDcdnWafDomainConfigsResponse>();
}

/**
 * @summary Sets the protection status of multiple domain names at a time.
 *
 * @description #
 * *   You can call this operation up to 20 times per second.
 * *   Alibaba Cloud Dynamic Content Delivery Network (DCDN) supports POST requests.
 *
 * @param request BatchSetDcdnWafDomainConfigsRequest
 * @return BatchSetDcdnWafDomainConfigsResponse
 */
BatchSetDcdnWafDomainConfigsResponse Client::batchSetDcdnWafDomainConfigs(const BatchSetDcdnWafDomainConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchSetDcdnWafDomainConfigsWithOptions(request, runtime);
}

/**
 * @summary Enables one or more accelerated domain names. After the accelerated domain names are enabled, the value of the DomainStatus parameter for the domain names changes to Online.
 *
 * @description > 
 * *   If an accelerated domain name is in an invalid state or your account has an overdue payment, the accelerated domain name cannot be enabled.
 * *   You can specify up to 50 domain names in each request.
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request BatchStartDcdnDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchStartDcdnDomainResponse
 */
BatchStartDcdnDomainResponse Client::batchStartDcdnDomainWithOptions(const BatchStartDcdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.getDomainNames();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchStartDcdnDomain"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchStartDcdnDomainResponse>();
}

/**
 * @summary Enables one or more accelerated domain names. After the accelerated domain names are enabled, the value of the DomainStatus parameter for the domain names changes to Online.
 *
 * @description > 
 * *   If an accelerated domain name is in an invalid state or your account has an overdue payment, the accelerated domain name cannot be enabled.
 * *   You can specify up to 50 domain names in each request.
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request BatchStartDcdnDomainRequest
 * @return BatchStartDcdnDomainResponse
 */
BatchStartDcdnDomainResponse Client::batchStartDcdnDomain(const BatchStartDcdnDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchStartDcdnDomainWithOptions(request, runtime);
}

/**
 * @summary Disables one or more accelerated domain names. After an accelerated domain name is disabled, the value of the DomainStatus parameter for the domain name changes to Offline.
 *
 * @description > *   After an accelerated domain name is disabled, Dynamic Content Delivery Network (DCDN) retains the domain name information. The system automatically reroutes all requests that are destined for the accelerated domain name to the origin.
 * >*   You can specify up to 50 domain names in each request.
 * >*   You can call this operation up to 30 times per second per account.
 *
 * @param request BatchStopDcdnDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchStopDcdnDomainResponse
 */
BatchStopDcdnDomainResponse Client::batchStopDcdnDomainWithOptions(const BatchStopDcdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.getDomainNames();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchStopDcdnDomain"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchStopDcdnDomainResponse>();
}

/**
 * @summary Disables one or more accelerated domain names. After an accelerated domain name is disabled, the value of the DomainStatus parameter for the domain name changes to Offline.
 *
 * @description > *   After an accelerated domain name is disabled, Dynamic Content Delivery Network (DCDN) retains the domain name information. The system automatically reroutes all requests that are destined for the accelerated domain name to the origin.
 * >*   You can specify up to 50 domain names in each request.
 * >*   You can call this operation up to 30 times per second per account.
 *
 * @param request BatchStopDcdnDomainRequest
 * @return BatchStopDcdnDomainResponse
 */
BatchStopDcdnDomainResponse Client::batchStopDcdnDomain(const BatchStopDcdnDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchStopDcdnDomainWithOptions(request, runtime);
}

/**
 * @summary Checks whether a real-time log delivery project exists.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request CheckDcdnProjectExistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDcdnProjectExistResponse
 */
CheckDcdnProjectExistResponse Client::checkDcdnProjectExistWithOptions(const CheckDcdnProjectExistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckDcdnProjectExist"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDcdnProjectExistResponse>();
}

/**
 * @summary Checks whether a real-time log delivery project exists.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request CheckDcdnProjectExistRequest
 * @return CheckDcdnProjectExistResponse
 */
CheckDcdnProjectExistResponse Client::checkDcdnProjectExist(const CheckDcdnProjectExistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkDcdnProjectExistWithOptions(request, runtime);
}

/**
 * @summary Generates an official code version from unstable JavaScript code that is in the staging
 *                   environment. The version can be used in the canary release or production environment.
 *
 * @description >  The call frequency of the API is no more than 100 queries per second.
 *
 * @param request CommitStagingRoutineCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CommitStagingRoutineCodeResponse
 */
CommitStagingRoutineCodeResponse Client::commitStagingRoutineCodeWithOptions(const CommitStagingRoutineCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "CommitStagingRoutineCode"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CommitStagingRoutineCodeResponse>();
}

/**
 * @summary Generates an official code version from unstable JavaScript code that is in the staging
 *                   environment. The version can be used in the canary release or production environment.
 *
 * @description >  The call frequency of the API is no more than 100 queries per second.
 *
 * @param request CommitStagingRoutineCodeRequest
 * @return CommitStagingRoutineCodeResponse
 */
CommitStagingRoutineCodeResponse Client::commitStagingRoutineCode(const CommitStagingRoutineCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return commitStagingRoutineCodeWithOptions(request, runtime);
}

/**
 * @summary Creates a certificate signing request (CSR) file.
 *
 * @param request CreateDcdnCertificateSigningRequestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDcdnCertificateSigningRequestResponse
 */
CreateDcdnCertificateSigningRequestResponse Client::createDcdnCertificateSigningRequestWithOptions(const CreateDcdnCertificateSigningRequestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCity()) {
    query["City"] = request.getCity();
  }

  if (!!request.hasCommonName()) {
    query["CommonName"] = request.getCommonName();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.getCountry();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasOrganization()) {
    query["Organization"] = request.getOrganization();
  }

  if (!!request.hasOrganizationUnit()) {
    query["OrganizationUnit"] = request.getOrganizationUnit();
  }

  if (!!request.hasSANs()) {
    query["SANs"] = request.getSANs();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDcdnCertificateSigningRequest"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDcdnCertificateSigningRequestResponse>();
}

/**
 * @summary Creates a certificate signing request (CSR) file.
 *
 * @param request CreateDcdnCertificateSigningRequestRequest
 * @return CreateDcdnCertificateSigningRequestResponse
 */
CreateDcdnCertificateSigningRequestResponse Client::createDcdnCertificateSigningRequest(const CreateDcdnCertificateSigningRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDcdnCertificateSigningRequestWithOptions(request, runtime);
}

/**
 * @summary Creates a tracking task. After you create a tracking task, the system periodically sends operations reports to you by email.
 *
 * @description **
 * **You can call this operation up to three times per second.
 *
 * @param request CreateDcdnDeliverTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDcdnDeliverTaskResponse
 */
CreateDcdnDeliverTaskResponse Client::createDcdnDeliverTaskWithOptions(const CreateDcdnDeliverTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDeliver()) {
    body["Deliver"] = request.getDeliver();
  }

  if (!!request.hasDomainName()) {
    body["DomainName"] = request.getDomainName();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasReports()) {
    body["Reports"] = request.getReports();
  }

  if (!!request.hasSchedule()) {
    body["Schedule"] = request.getSchedule();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDcdnDeliverTask"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDcdnDeliverTaskResponse>();
}

/**
 * @summary Creates a tracking task. After you create a tracking task, the system periodically sends operations reports to you by email.
 *
 * @description **
 * **You can call this operation up to three times per second.
 *
 * @param request CreateDcdnDeliverTaskRequest
 * @return CreateDcdnDeliverTaskResponse
 */
CreateDcdnDeliverTaskResponse Client::createDcdnDeliverTask(const CreateDcdnDeliverTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDcdnDeliverTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a real-time log delivery project.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request CreateDcdnSLSRealTimeLogDeliveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDcdnSLSRealTimeLogDeliveryResponse
 */
CreateDcdnSLSRealTimeLogDeliveryResponse Client::createDcdnSLSRealTimeLogDeliveryWithOptions(const CreateDcdnSLSRealTimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessType()) {
    body["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasDataCenter()) {
    body["DataCenter"] = request.getDataCenter();
  }

  if (!!request.hasDomainName()) {
    body["DomainName"] = request.getDomainName();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSLSLogStore()) {
    body["SLSLogStore"] = request.getSLSLogStore();
  }

  if (!!request.hasSLSProject()) {
    body["SLSProject"] = request.getSLSProject();
  }

  if (!!request.hasSLSRegion()) {
    body["SLSRegion"] = request.getSLSRegion();
  }

  if (!!request.hasSamplingRate()) {
    body["SamplingRate"] = request.getSamplingRate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDcdnSLSRealTimeLogDelivery"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDcdnSLSRealTimeLogDeliveryResponse>();
}

/**
 * @summary Creates a real-time log delivery project.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request CreateDcdnSLSRealTimeLogDeliveryRequest
 * @return CreateDcdnSLSRealTimeLogDeliveryResponse
 */
CreateDcdnSLSRealTimeLogDeliveryResponse Client::createDcdnSLSRealTimeLogDelivery(const CreateDcdnSLSRealTimeLogDeliveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDcdnSLSRealTimeLogDeliveryWithOptions(request, runtime);
}

/**
 * @summary Creates a custom operations report.
 *
 * @description > *   This operation allows you to create a custom operations report for a specific domain name. You can view the statistics about the domain name in the report.
 * > *   You can call this operation up to three times per second per account.
 *
 * @param request CreateDcdnSubTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDcdnSubTaskResponse
 */
CreateDcdnSubTaskResponse Client::createDcdnSubTaskWithOptions(const CreateDcdnSubTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDomainName()) {
    body["DomainName"] = request.getDomainName();
  }

  if (!!request.hasReportIds()) {
    body["ReportIds"] = request.getReportIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDcdnSubTask"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDcdnSubTaskResponse>();
}

/**
 * @summary Creates a custom operations report.
 *
 * @description > *   This operation allows you to create a custom operations report for a specific domain name. You can view the statistics about the domain name in the report.
 * > *   You can call this operation up to three times per second per account.
 *
 * @param request CreateDcdnSubTaskRequest
 * @return CreateDcdnSubTaskResponse
 */
CreateDcdnSubTaskResponse Client::createDcdnSubTask(const CreateDcdnSubTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDcdnSubTaskWithOptions(request, runtime);
}

/**
 * @summary Create a custom WAF rule group.
 *
 * @param request CreateDcdnWafGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDcdnWafGroupResponse
 */
CreateDcdnWafGroupResponse Client::createDcdnWafGroupWithOptions(const CreateDcdnWafGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSubscribe()) {
    body["Subscribe"] = request.getSubscribe();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDcdnWafGroup"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDcdnWafGroupResponse>();
}

/**
 * @summary Create a custom WAF rule group.
 *
 * @param request CreateDcdnWafGroupRequest
 * @return CreateDcdnWafGroupResponse
 */
CreateDcdnWafGroupResponse Client::createDcdnWafGroup(const CreateDcdnWafGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDcdnWafGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a Web Application Firewall (WAF) protection policy.
 *
 * @description *   You can call this operation up to 20 times per second per user.
 * *   Alibaba Cloud Dynamic Route for CDN (DCDN) supports POST requests.
 *
 * @param request CreateDcdnWafPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDcdnWafPolicyResponse
 */
CreateDcdnWafPolicyResponse Client::createDcdnWafPolicyWithOptions(const CreateDcdnWafPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDefenseScene()) {
    body["DefenseScene"] = request.getDefenseScene();
  }

  if (!!request.hasPolicyName()) {
    body["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicyStatus()) {
    body["PolicyStatus"] = request.getPolicyStatus();
  }

  if (!!request.hasPolicyType()) {
    body["PolicyType"] = request.getPolicyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDcdnWafPolicy"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDcdnWafPolicyResponse>();
}

/**
 * @summary Creates a Web Application Firewall (WAF) protection policy.
 *
 * @description *   You can call this operation up to 20 times per second per user.
 * *   Alibaba Cloud Dynamic Route for CDN (DCDN) supports POST requests.
 *
 * @param request CreateDcdnWafPolicyRequest
 * @return CreateDcdnWafPolicyResponse
 */
CreateDcdnWafPolicyResponse Client::createDcdnWafPolicy(const CreateDcdnWafPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDcdnWafPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a routine.
 *
 * @description > *   The parameters must comply with the rules of EnvConf. The description of a routine cannot exceed 50 characters in length.
 * >*   You can only specify the production and staging environments when you call this operation.
 * >*   You can call this operation up to 100 times per second per account.
 *
 * @param tmpReq CreateRoutineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRoutineResponse
 */
CreateRoutineResponse Client::createRoutineWithOptions(const CreateRoutineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateRoutineShrinkRequest request = CreateRoutineShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEnvConf()) {
    request.setEnvConfShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEnvConf(), "EnvConf", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnvConfShrink()) {
    body["EnvConf"] = request.getEnvConfShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateRoutine"},
    {"version" , "2018-01-15"},
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
 * @description > *   The parameters must comply with the rules of EnvConf. The description of a routine cannot exceed 50 characters in length.
 * >*   You can only specify the production and staging environments when you call this operation.
 * >*   You can call this operation up to 100 times per second per account.
 *
 * @param request CreateRoutineRequest
 * @return CreateRoutineResponse
 */
CreateRoutineResponse Client::createRoutine(const CreateRoutineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRoutineWithOptions(request, runtime);
}

/**
 * @summary Creates a service-linked role (SLR) and a Log Service project.
 *
 * @description >  You can call this operation up to 100 times per second per account.
 *
 * @param request CreateSlrAndSlsProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSlrAndSlsProjectResponse
 */
CreateSlrAndSlsProjectResponse Client::createSlrAndSlsProjectWithOptions(const CreateSlrAndSlsProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessType()) {
    body["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasRegion()) {
    body["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateSlrAndSlsProject"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSlrAndSlsProjectResponse>();
}

/**
 * @summary Creates a service-linked role (SLR) and a Log Service project.
 *
 * @description >  You can call this operation up to 100 times per second per account.
 *
 * @param request CreateSlrAndSlsProjectRequest
 * @return CreateSlrAndSlsProjectResponse
 */
CreateSlrAndSlsProjectResponse Client::createSlrAndSlsProject(const CreateSlrAndSlsProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSlrAndSlsProjectWithOptions(request, runtime);
}

/**
 * @summary A客户定制实时日志删除接口
 *
 * @param request DeleteCustomDomainSampleRateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomDomainSampleRateResponse
 */
DeleteCustomDomainSampleRateResponse Client::deleteCustomDomainSampleRateWithOptions(const DeleteCustomDomainSampleRateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDomainNames()) {
    body["DomainNames"] = request.getDomainNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteCustomDomainSampleRate"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomDomainSampleRateResponse>();
}

/**
 * @summary A客户定制实时日志删除接口
 *
 * @param request DeleteCustomDomainSampleRateRequest
 * @return DeleteCustomDomainSampleRateResponse
 */
DeleteCustomDomainSampleRateResponse Client::deleteCustomDomainSampleRate(const DeleteCustomDomainSampleRateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomDomainSampleRateWithOptions(request, runtime);
}

/**
 * @summary Deletes tracking tasks by task ID.
 *
 * @description >  The maximum number of times that each user can call this operation per second is 3.
 *
 * @param request DeleteDcdnDeliverTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDcdnDeliverTaskResponse
 */
DeleteDcdnDeliverTaskResponse Client::deleteDcdnDeliverTaskWithOptions(const DeleteDcdnDeliverTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliverId()) {
    query["DeliverId"] = request.getDeliverId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDcdnDeliverTask"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDcdnDeliverTaskResponse>();
}

/**
 * @summary Deletes tracking tasks by task ID.
 *
 * @description >  The maximum number of times that each user can call this operation per second is 3.
 *
 * @param request DeleteDcdnDeliverTaskRequest
 * @return DeleteDcdnDeliverTaskResponse
 */
DeleteDcdnDeliverTaskResponse Client::deleteDcdnDeliverTask(const DeleteDcdnDeliverTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDcdnDeliverTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified accelerated domain name.
 *
 * @description > *   Before you delete your domain name, you need to request the Domain Name System (DNS) provider to restore the A record of the domain name. Otherwise, the domain name may become inaccessible after you delete it.
 * > *   If you call the **DeleteDcdnDomain** operation, all the information about the accelerated domain name is deleted. If you want to disable an accelerated domain name, call the [StopDcdnDomain](https://help.aliyun.com/document_detail/130622.html) operation.
 * > *   You can call this operation up to 10 times per second per account.
 *
 * @param request DeleteDcdnDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDcdnDomainResponse
 */
DeleteDcdnDomainResponse Client::deleteDcdnDomainWithOptions(const DeleteDcdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDcdnDomain"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDcdnDomainResponse>();
}

/**
 * @summary Deletes a specified accelerated domain name.
 *
 * @description > *   Before you delete your domain name, you need to request the Domain Name System (DNS) provider to restore the A record of the domain name. Otherwise, the domain name may become inaccessible after you delete it.
 * > *   If you call the **DeleteDcdnDomain** operation, all the information about the accelerated domain name is deleted. If you want to disable an accelerated domain name, call the [StopDcdnDomain](https://help.aliyun.com/document_detail/130622.html) operation.
 * > *   You can call this operation up to 10 times per second per account.
 *
 * @param request DeleteDcdnDomainRequest
 * @return DeleteDcdnDomainResponse
 */
DeleteDcdnDomainResponse Client::deleteDcdnDomain(const DeleteDcdnDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDcdnDomainWithOptions(request, runtime);
}

/**
 * @summary Deletes an accelerated domain name from IP Application Accelerator (IPA).
 *
 * @description > 
 * *   Before you delete your domain name, we recommend that you request the Domain Name System (DNS) provider to restore the A record of the domain name. Otherwise, the domain name may become inaccessible after you delete it.
 * *   This operation deletes all records of the specified accelerated domain name. If you want to temporarily disable an accelerated domain name, call the **StopDcdnIpaDomain** operation.****
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request DeleteDcdnIpaDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDcdnIpaDomainResponse
 */
DeleteDcdnIpaDomainResponse Client::deleteDcdnIpaDomainWithOptions(const DeleteDcdnIpaDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDcdnIpaDomain"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDcdnIpaDomainResponse>();
}

/**
 * @summary Deletes an accelerated domain name from IP Application Accelerator (IPA).
 *
 * @description > 
 * *   Before you delete your domain name, we recommend that you request the Domain Name System (DNS) provider to restore the A record of the domain name. Otherwise, the domain name may become inaccessible after you delete it.
 * *   This operation deletes all records of the specified accelerated domain name. If you want to temporarily disable an accelerated domain name, call the **StopDcdnIpaDomain** operation.****
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request DeleteDcdnIpaDomainRequest
 * @return DeleteDcdnIpaDomainResponse
 */
DeleteDcdnIpaDomainResponse Client::deleteDcdnIpaDomain(const DeleteDcdnIpaDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDcdnIpaDomainWithOptions(request, runtime);
}

/**
 * @summary Deletes specific configurations of an accelerated domain name from IP Application Accelerator (IPA).
 *
 * @description > You can call this operation up to 10 times per second per account.
 *
 * @param request DeleteDcdnIpaSpecificConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDcdnIpaSpecificConfigResponse
 */
DeleteDcdnIpaSpecificConfigResponse Client::deleteDcdnIpaSpecificConfigWithOptions(const DeleteDcdnIpaSpecificConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDcdnIpaSpecificConfig"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDcdnIpaSpecificConfigResponse>();
}

/**
 * @summary Deletes specific configurations of an accelerated domain name from IP Application Accelerator (IPA).
 *
 * @description > You can call this operation up to 10 times per second per account.
 *
 * @param request DeleteDcdnIpaSpecificConfigRequest
 * @return DeleteDcdnIpaSpecificConfigResponse
 */
DeleteDcdnIpaSpecificConfigResponse Client::deleteDcdnIpaSpecificConfig(const DeleteDcdnIpaSpecificConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDcdnIpaSpecificConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes the key-value pairs in a namespace that you specify when you call the PutDcdnKvNamespace operation. EdgeKV provides a global key-value database for Dynamic Route for CDN (DCDN) points of presence (POPs).
 *
 * @param request DeleteDcdnKvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDcdnKvResponse
 */
DeleteDcdnKvResponse Client::deleteDcdnKvWithOptions(const DeleteDcdnKvRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DeleteDcdnKv"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDcdnKvResponse>();
}

/**
 * @summary Deletes the key-value pairs in a namespace that you specify when you call the PutDcdnKvNamespace operation. EdgeKV provides a global key-value database for Dynamic Route for CDN (DCDN) points of presence (POPs).
 *
 * @param request DeleteDcdnKvRequest
 * @return DeleteDcdnKvResponse
 */
DeleteDcdnKvResponse Client::deleteDcdnKv(const DeleteDcdnKvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDcdnKvWithOptions(request, runtime);
}

/**
 * @summary Deletes a namespace that belongs to your account.
 *
 * @param request DeleteDcdnKvNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDcdnKvNamespaceResponse
 */
DeleteDcdnKvNamespaceResponse Client::deleteDcdnKvNamespaceWithOptions(const DeleteDcdnKvNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespace()) {
    query["Namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDcdnKvNamespace"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDcdnKvNamespaceResponse>();
}

/**
 * @summary Deletes a namespace that belongs to your account.
 *
 * @param request DeleteDcdnKvNamespaceRequest
 * @return DeleteDcdnKvNamespaceResponse
 */
DeleteDcdnKvNamespaceResponse Client::deleteDcdnKvNamespace(const DeleteDcdnKvNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDcdnKvNamespaceWithOptions(request, runtime);
}

/**
 * @summary The ID of the request.
 *
 * @description >  You can call this operation up to 100 times per second per account.
 *
 * @param request DeleteDcdnRealTimeLogProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDcdnRealTimeLogProjectResponse
 */
DeleteDcdnRealTimeLogProjectResponse Client::deleteDcdnRealTimeLogProjectWithOptions(const DeleteDcdnRealTimeLogProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDcdnRealTimeLogProject"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDcdnRealTimeLogProjectResponse>();
}

/**
 * @summary The ID of the request.
 *
 * @description >  You can call this operation up to 100 times per second per account.
 *
 * @param request DeleteDcdnRealTimeLogProjectRequest
 * @return DeleteDcdnRealTimeLogProjectResponse
 */
DeleteDcdnRealTimeLogProjectResponse Client::deleteDcdnRealTimeLogProject(const DeleteDcdnRealTimeLogProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDcdnRealTimeLogProjectWithOptions(request, runtime);
}

/**
 * @summary Deletes configurations of a domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DeleteDcdnSpecificConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDcdnSpecificConfigResponse
 */
DeleteDcdnSpecificConfigResponse Client::deleteDcdnSpecificConfigWithOptions(const DeleteDcdnSpecificConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDcdnSpecificConfig"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDcdnSpecificConfigResponse>();
}

/**
 * @summary Deletes configurations of a domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DeleteDcdnSpecificConfigRequest
 * @return DeleteDcdnSpecificConfigResponse
 */
DeleteDcdnSpecificConfigResponse Client::deleteDcdnSpecificConfig(const DeleteDcdnSpecificConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDcdnSpecificConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes the configurations of an accelerated domain name in the canary release environment.
 *
 * @description > You can call this operation up to 20 times per second per account.
 *
 * @param request DeleteDcdnSpecificStagingConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDcdnSpecificStagingConfigResponse
 */
DeleteDcdnSpecificStagingConfigResponse Client::deleteDcdnSpecificStagingConfigWithOptions(const DeleteDcdnSpecificStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDcdnSpecificStagingConfig"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDcdnSpecificStagingConfigResponse>();
}

/**
 * @summary Deletes the configurations of an accelerated domain name in the canary release environment.
 *
 * @description > You can call this operation up to 20 times per second per account.
 *
 * @param request DeleteDcdnSpecificStagingConfigRequest
 * @return DeleteDcdnSpecificStagingConfigResponse
 */
DeleteDcdnSpecificStagingConfigResponse Client::deleteDcdnSpecificStagingConfig(const DeleteDcdnSpecificStagingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDcdnSpecificStagingConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes all custom operations reports.
 *
 * @description > You can call this operation up to 3 times per second per account.
 *
 * @param request DeleteDcdnSubTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDcdnSubTaskResponse
 */
DeleteDcdnSubTaskResponse Client::deleteDcdnSubTaskWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DeleteDcdnSubTask"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDcdnSubTaskResponse>();
}

/**
 * @summary Deletes all custom operations reports.
 *
 * @description > You can call this operation up to 3 times per second per account.
 *
 * @return DeleteDcdnSubTaskResponse
 */
DeleteDcdnSubTaskResponse Client::deleteDcdnSubTask() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDcdnSubTaskWithOptions(runtime);
}

/**
 * @summary Deletes feature configurations by user.
 *
 * @param request DeleteDcdnUserConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDcdnUserConfigResponse
 */
DeleteDcdnUserConfigResponse Client::deleteDcdnUserConfigWithOptions(const DeleteDcdnUserConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFunctionName()) {
    query["FunctionName"] = request.getFunctionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDcdnUserConfig"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDcdnUserConfigResponse>();
}

/**
 * @summary Deletes feature configurations by user.
 *
 * @param request DeleteDcdnUserConfigRequest
 * @return DeleteDcdnUserConfigResponse
 */
DeleteDcdnUserConfigResponse Client::deleteDcdnUserConfig(const DeleteDcdnUserConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDcdnUserConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom WAF rule group.
 *
 * @param request DeleteDcdnWafGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDcdnWafGroupResponse
 */
DeleteDcdnWafGroupResponse Client::deleteDcdnWafGroupWithOptions(const DeleteDcdnWafGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDcdnWafGroup"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDcdnWafGroupResponse>();
}

/**
 * @summary Deletes a custom WAF rule group.
 *
 * @param request DeleteDcdnWafGroupRequest
 * @return DeleteDcdnWafGroupResponse
 */
DeleteDcdnWafGroupResponse Client::deleteDcdnWafGroup(const DeleteDcdnWafGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDcdnWafGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a protection policy.
 *
 * @description *   You can call this operation up to 20 times per second per account.
 * *   Alibaba Cloud Dynamic Content Delivery Network (DCDN) supports POST requests.
 *
 * @param request DeleteDcdnWafPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDcdnWafPolicyResponse
 */
DeleteDcdnWafPolicyResponse Client::deleteDcdnWafPolicyWithOptions(const DeleteDcdnWafPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.getPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDcdnWafPolicy"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDcdnWafPolicyResponse>();
}

/**
 * @summary Deletes a protection policy.
 *
 * @description *   You can call this operation up to 20 times per second per account.
 * *   Alibaba Cloud Dynamic Content Delivery Network (DCDN) supports POST requests.
 *
 * @param request DeleteDcdnWafPolicyRequest
 * @return DeleteDcdnWafPolicyResponse
 */
DeleteDcdnWafPolicyResponse Client::deleteDcdnWafPolicy(const DeleteDcdnWafPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDcdnWafPolicyWithOptions(request, runtime);
}

/**
 * @summary Deletes a routine.
 *
 * @description > You can call this operation up to 100 times per second per account.
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
    {"version" , "2018-01-15"},
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
 * @summary Deletes a routine.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DeleteRoutineRequest
 * @return DeleteRoutineResponse
 */
DeleteRoutineResponse Client::deleteRoutine(const DeleteRoutineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRoutineWithOptions(request, runtime);
}

/**
 * @summary Deletes the code of the specified version from a routine.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DeleteRoutineCodeRevisionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRoutineCodeRevisionResponse
 */
DeleteRoutineCodeRevisionResponse Client::deleteRoutineCodeRevisionWithOptions(const DeleteRoutineCodeRevisionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSelectCodeRevision()) {
    body["SelectCodeRevision"] = request.getSelectCodeRevision();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteRoutineCodeRevision"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRoutineCodeRevisionResponse>();
}

/**
 * @summary Deletes the code of the specified version from a routine.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DeleteRoutineCodeRevisionRequest
 * @return DeleteRoutineCodeRevisionResponse
 */
DeleteRoutineCodeRevisionResponse Client::deleteRoutineCodeRevision(const DeleteRoutineCodeRevisionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRoutineCodeRevisionWithOptions(request, runtime);
}

/**
 * @summary Deletes canary release environments from a routine.
 *
 * @description > 
 * *   This operation deletes only custom preset canary release environments. You cannot delete production or staging environments.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param tmpReq DeleteRoutineConfEnvsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRoutineConfEnvsResponse
 */
DeleteRoutineConfEnvsResponse Client::deleteRoutineConfEnvsWithOptions(const DeleteRoutineConfEnvsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteRoutineConfEnvsShrinkRequest request = DeleteRoutineConfEnvsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEnvs()) {
    request.setEnvsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEnvs(), "Envs", "json"));
  }

  json body = {};
  if (!!request.hasEnvsShrink()) {
    body["Envs"] = request.getEnvsShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteRoutineConfEnvs"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRoutineConfEnvsResponse>();
}

/**
 * @summary Deletes canary release environments from a routine.
 *
 * @description > 
 * *   This operation deletes only custom preset canary release environments. You cannot delete production or staging environments.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request DeleteRoutineConfEnvsRequest
 * @return DeleteRoutineConfEnvsResponse
 */
DeleteRoutineConfEnvsResponse Client::deleteRoutineConfEnvs(const DeleteRoutineConfEnvsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRoutineConfEnvsWithOptions(request, runtime);
}

/**
 * @summary A客户定制查询域名采样率
 *
 * @param request DescribeCustomDomainSampleRateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomDomainSampleRateResponse
 */
DescribeCustomDomainSampleRateResponse Client::describeCustomDomainSampleRateWithOptions(const DescribeCustomDomainSampleRateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.getDomainNames();
  }

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
    {"action" , "DescribeCustomDomainSampleRate"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomDomainSampleRateResponse>();
}

/**
 * @summary A客户定制查询域名采样率
 *
 * @param request DescribeCustomDomainSampleRateRequest
 * @return DescribeCustomDomainSampleRateResponse
 */
DescribeCustomDomainSampleRateResponse Client::describeCustomDomainSampleRate(const DescribeCustomDomainSampleRateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomDomainSampleRateWithOptions(request, runtime);
}

/**
 * @summary Queries precise access control rules.
 *
 * @description > You can call this operation up to three times per second per account.
 *
 * @param request DescribeDcdnAclFieldsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnAclFieldsResponse
 */
DescribeDcdnAclFieldsResponse Client::describeDcdnAclFieldsWithOptions(const DescribeDcdnAclFieldsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnAclFields"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnAclFieldsResponse>();
}

/**
 * @summary Queries precise access control rules.
 *
 * @description > You can call this operation up to three times per second per account.
 *
 * @param request DescribeDcdnAclFieldsRequest
 * @return DescribeDcdnAclFieldsResponse
 */
DescribeDcdnAclFieldsResponse Client::describeDcdnAclFields(const DescribeDcdnAclFieldsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnAclFieldsWithOptions(request, runtime);
}

/**
 * @summary Queries bandwidth data for Border Gateway Protocol (BGP) accelerated domain names. Data is collected every 5 minutes.
 *
 * @description *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range. You must set both parameters or leave both of them empty.
 * *   If you specify multiple Internet service providers (ISPs), the data for the ISPs is aggregated.
 * *   You can query data in the last 90 days.
 * *   The maximum time range from the start time to the end time is 31 days. The start time is specified by the StartTime parameter and the end time is specified by the EndTime parameter.
 * *   If the time range from the start time to the end time is 72 hours or shorter, you can specify the interval as 5 minutes. If the time range is longer than 72 hours, you must specify the interval as 1 hour.
 * *   You can call this operation up to five times per second per account.
 *
 * @param request DescribeDcdnBgpBpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnBgpBpsDataResponse
 */
DescribeDcdnBgpBpsDataResponse Client::describeDcdnBgpBpsDataWithOptions(const DescribeDcdnBgpBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceName()) {
    query["DeviceName"] = request.getDeviceName();
  }

  if (!!request.hasDevicePort()) {
    query["DevicePort"] = request.getDevicePort();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.getIsp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnBgpBpsData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnBgpBpsDataResponse>();
}

/**
 * @summary Queries bandwidth data for Border Gateway Protocol (BGP) accelerated domain names. Data is collected every 5 minutes.
 *
 * @description *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range. You must set both parameters or leave both of them empty.
 * *   If you specify multiple Internet service providers (ISPs), the data for the ISPs is aggregated.
 * *   You can query data in the last 90 days.
 * *   The maximum time range from the start time to the end time is 31 days. The start time is specified by the StartTime parameter and the end time is specified by the EndTime parameter.
 * *   If the time range from the start time to the end time is 72 hours or shorter, you can specify the interval as 5 minutes. If the time range is longer than 72 hours, you must specify the interval as 1 hour.
 * *   You can call this operation up to five times per second per account.
 *
 * @param request DescribeDcdnBgpBpsDataRequest
 * @return DescribeDcdnBgpBpsDataResponse
 */
DescribeDcdnBgpBpsDataResponse Client::describeDcdnBgpBpsData(const DescribeDcdnBgpBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnBgpBpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries traffic data for BGP accelerated domain names. Data is collected every 5 minutes.
 *
 * @description *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range. You must set both parameters or leave both parameters empty.
 * *   If you specify multiple Internet service providers (ISPs), the data for the ISPs is aggregated.
 * *   You can query data in the last 90 days.
 * *   The maximum time range that you can specify is 31 days. StartTime specifies the start time and EndTime specifies the end time of the time range.
 * *   If the time range from the start time to the end time is 72 hours or shorter, you can specify the interval as 5 minutes. If the time range is longer than 72 hours, you must specify the interval as 1 hour.
 * *   You can call this operation up to five times per second per account.
 *
 * @param request DescribeDcdnBgpTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnBgpTrafficDataResponse
 */
DescribeDcdnBgpTrafficDataResponse Client::describeDcdnBgpTrafficDataWithOptions(const DescribeDcdnBgpTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.getIsp();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnBgpTrafficData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnBgpTrafficDataResponse>();
}

/**
 * @summary Queries traffic data for BGP accelerated domain names. Data is collected every 5 minutes.
 *
 * @description *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range. You must set both parameters or leave both parameters empty.
 * *   If you specify multiple Internet service providers (ISPs), the data for the ISPs is aggregated.
 * *   You can query data in the last 90 days.
 * *   The maximum time range that you can specify is 31 days. StartTime specifies the start time and EndTime specifies the end time of the time range.
 * *   If the time range from the start time to the end time is 72 hours or shorter, you can specify the interval as 5 minutes. If the time range is longer than 72 hours, you must specify the interval as 1 hour.
 * *   You can call this operation up to five times per second per account.
 *
 * @param request DescribeDcdnBgpTrafficDataRequest
 * @return DescribeDcdnBgpTrafficDataResponse
 */
DescribeDcdnBgpTrafficDataResponse Client::describeDcdnBgpTrafficData(const DescribeDcdnBgpTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnBgpTrafficDataWithOptions(request, runtime);
}

/**
 * @summary Queries countries and regions that can be added to the blacklist.
 *
 * @description > You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeDcdnBlockedRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnBlockedRegionsResponse
 */
DescribeDcdnBlockedRegionsResponse Client::describeDcdnBlockedRegionsWithOptions(const DescribeDcdnBlockedRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnBlockedRegions"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnBlockedRegionsResponse>();
}

/**
 * @summary Queries countries and regions that can be added to the blacklist.
 *
 * @description > You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeDcdnBlockedRegionsRequest
 * @return DescribeDcdnBlockedRegionsResponse
 */
DescribeDcdnBlockedRegionsResponse Client::describeDcdnBlockedRegions(const DescribeDcdnBlockedRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnBlockedRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries details about a certificate.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnCertificateDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnCertificateDetailResponse
 */
DescribeDcdnCertificateDetailResponse Client::describeDcdnCertificateDetailWithOptions(const DescribeDcdnCertificateDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertName()) {
    query["CertName"] = request.getCertName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnCertificateDetail"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnCertificateDetailResponse>();
}

/**
 * @summary Queries details about a certificate.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnCertificateDetailRequest
 * @return DescribeDcdnCertificateDetailResponse
 */
DescribeDcdnCertificateDetailResponse Client::describeDcdnCertificateDetail(const DescribeDcdnCertificateDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnCertificateDetailWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribeDcdnCertificateList is deprecated, please use dcdn::2018-01-15::DescribeDcdnSSLCertificateList instead.
 *
 * @summary Queries the certificates of one or more accelerated domain names.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnCertificateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnCertificateListResponse
 */
DescribeDcdnCertificateListResponse Client::describeDcdnCertificateListWithOptions(const DescribeDcdnCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnCertificateList"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnCertificateListResponse>();
}

/**
 * @deprecated OpenAPI DescribeDcdnCertificateList is deprecated, please use dcdn::2018-01-15::DescribeDcdnSSLCertificateList instead.
 *
 * @summary Queries the certificates of one or more accelerated domain names.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnCertificateListRequest
 * @return DescribeDcdnCertificateListResponse
 */
DescribeDcdnCertificateListResponse Client::describeDcdnCertificateList(const DescribeDcdnCertificateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnCertificateListWithOptions(request, runtime);
}

/**
 * @summary Queries the status of DCDN DDoS mitigation.
 *
 * @param request DescribeDcdnDdosServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDdosServiceResponse
 */
DescribeDcdnDdosServiceResponse Client::describeDcdnDdosServiceWithOptions(const DescribeDcdnDdosServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDdosService"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDdosServiceResponse>();
}

/**
 * @summary Queries the status of DCDN DDoS mitigation.
 *
 * @param request DescribeDcdnDdosServiceRequest
 * @return DescribeDcdnDdosServiceResponse
 */
DescribeDcdnDdosServiceResponse Client::describeDcdnDdosService(const DescribeDcdnDdosServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDdosServiceWithOptions(request, runtime);
}

/**
 * @summary Queries the specifications of DCDN DDoS versions.
 *
 * @param request DescribeDcdnDdosSpecInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDdosSpecInfoResponse
 */
DescribeDcdnDdosSpecInfoResponse Client::describeDcdnDdosSpecInfoWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeDcdnDdosSpecInfo"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDdosSpecInfoResponse>();
}

/**
 * @summary Queries the specifications of DCDN DDoS versions.
 *
 * @return DescribeDcdnDdosSpecInfoResponse
 */
DescribeDcdnDdosSpecInfoResponse Client::describeDcdnDdosSpecInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDdosSpecInfoWithOptions(runtime);
}

/**
 * @summary Queries the domain names that are deleted from your Alibaba Cloud account.
 *
 * @description > You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeDcdnDeletedDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDeletedDomainsResponse
 */
DescribeDcdnDeletedDomainsResponse Client::describeDcdnDeletedDomainsWithOptions(const DescribeDcdnDeletedDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeDcdnDeletedDomains"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDeletedDomainsResponse>();
}

/**
 * @summary Queries the domain names that are deleted from your Alibaba Cloud account.
 *
 * @description > You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeDcdnDeletedDomainsRequest
 * @return DescribeDcdnDeletedDomainsResponse
 */
DescribeDcdnDeletedDomainsResponse Client::describeDcdnDeletedDomains(const DescribeDcdnDeletedDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDeletedDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries all tracking tasks of operations reports.
 *
 * @description >You can call this operation up to three times per second.
 *
 * @param request DescribeDcdnDeliverListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDeliverListResponse
 */
DescribeDcdnDeliverListResponse Client::describeDcdnDeliverListWithOptions(const DescribeDcdnDeliverListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeliverId()) {
    query["DeliverId"] = request.getDeliverId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDeliverList"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDeliverListResponse>();
}

/**
 * @summary Queries all tracking tasks of operations reports.
 *
 * @description >You can call this operation up to three times per second.
 *
 * @param request DescribeDcdnDeliverListRequest
 * @return DescribeDcdnDeliverListResponse
 */
DescribeDcdnDeliverListResponse Client::describeDcdnDeliverList(const DescribeDcdnDeliverListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDeliverListWithOptions(request, runtime);
}

/**
 * @summary Queries the monitoring data of network bandwidth for one or more accelerated domain names. You can query data in the last 90 days.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainBpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainBpsDataResponse
 */
DescribeDcdnDomainBpsDataResponse Client::describeDcdnDomainBpsDataWithOptions(const DescribeDcdnDomainBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainBpsData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainBpsDataResponse>();
}

/**
 * @summary Queries the monitoring data of network bandwidth for one or more accelerated domain names. You can query data in the last 90 days.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainBpsDataRequest
 * @return DescribeDcdnDomainBpsDataResponse
 */
DescribeDcdnDomainBpsDataResponse Client::describeDcdnDomainBpsData(const DescribeDcdnDomainBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainBpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries bandwidth data of accelerated domain names.
 *
 * @description * You can call this operation up to 20 times per second per account.
 * * If you do not set **StartTime** or **EndTime**, the request returns the data collected in the last 24 hours. If you set both **StartTime** and **EndTime**, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the time range to query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainBpsDataByLayerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainBpsDataByLayerResponse
 */
DescribeDcdnDomainBpsDataByLayerResponse Client::describeDcdnDomainBpsDataByLayerWithOptions(const DescribeDcdnDomainBpsDataByLayerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLayer()) {
    query["Layer"] = request.getLayer();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainBpsDataByLayer"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainBpsDataByLayerResponse>();
}

/**
 * @summary Queries bandwidth data of accelerated domain names.
 *
 * @description * You can call this operation up to 20 times per second per account.
 * * If you do not set **StartTime** or **EndTime**, the request returns the data collected in the last 24 hours. If you set both **StartTime** and **EndTime**, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the time range to query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainBpsDataByLayerRequest
 * @return DescribeDcdnDomainBpsDataByLayerResponse
 */
DescribeDcdnDomainBpsDataByLayerResponse Client::describeDcdnDomainBpsDataByLayer(const DescribeDcdnDomainBpsDataByLayerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainBpsDataByLayerWithOptions(request, runtime);
}

/**
 * @summary Queries accelerated domain names by SSL certificate.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnDomainByCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainByCertificateResponse
 */
DescribeDcdnDomainByCertificateResponse Client::describeDcdnDomainByCertificateWithOptions(const DescribeDcdnDomainByCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExact()) {
    query["Exact"] = request.getExact();
  }

  if (!!request.hasSSLPub()) {
    query["SSLPub"] = request.getSSLPub();
  }

  if (!!request.hasSSLStatus()) {
    query["SSLStatus"] = request.getSSLStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainByCertificate"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainByCertificateResponse>();
}

/**
 * @summary Queries accelerated domain names by SSL certificate.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnDomainByCertificateRequest
 * @return DescribeDcdnDomainByCertificateResponse
 */
DescribeDcdnDomainByCertificateResponse Client::describeDcdnDomainByCertificate(const DescribeDcdnDomainByCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainByCertificateWithOptions(request, runtime);
}

/**
 * @summary Queries logs of rate limiting.
 *
 * @description > 
 * *   If you do not configure the StartTime or EndTime parameter, data collected over the last 24 hours is queried. If you configure both the StartTime and EndTime parameters, data collected within the specified time range is queried.
 * *   You can query data collected over the last 30 days.
 * *   You can call the RefreshObjectCaches operation up to 50 times per second per account.
 *
 * @param request DescribeDcdnDomainCcActivityLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainCcActivityLogResponse
 */
DescribeDcdnDomainCcActivityLogResponse Client::describeDcdnDomainCcActivityLogWithOptions(const DescribeDcdnDomainCcActivityLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTriggerObject()) {
    query["TriggerObject"] = request.getTriggerObject();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainCcActivityLog"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainCcActivityLogResponse>();
}

/**
 * @summary Queries logs of rate limiting.
 *
 * @description > 
 * *   If you do not configure the StartTime or EndTime parameter, data collected over the last 24 hours is queried. If you configure both the StartTime and EndTime parameters, data collected within the specified time range is queried.
 * *   You can query data collected over the last 30 days.
 * *   You can call the RefreshObjectCaches operation up to 50 times per second per account.
 *
 * @param request DescribeDcdnDomainCcActivityLogRequest
 * @return DescribeDcdnDomainCcActivityLogResponse
 */
DescribeDcdnDomainCcActivityLogResponse Client::describeDcdnDomainCcActivityLog(const DescribeDcdnDomainCcActivityLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainCcActivityLogWithOptions(request, runtime);
}

/**
 * @summary Queries the certificate information about an accelerated domain name.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnDomainCertificateInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainCertificateInfoResponse
 */
DescribeDcdnDomainCertificateInfoResponse Client::describeDcdnDomainCertificateInfoWithOptions(const DescribeDcdnDomainCertificateInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainCertificateInfo"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainCertificateInfoResponse>();
}

/**
 * @summary Queries the certificate information about an accelerated domain name.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnDomainCertificateInfoRequest
 * @return DescribeDcdnDomainCertificateInfoResponse
 */
DescribeDcdnDomainCertificateInfoResponse Client::describeDcdnDomainCertificateInfo(const DescribeDcdnDomainCertificateInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainCertificateInfoWithOptions(request, runtime);
}

/**
 * @summary Checks whether CNAME records are configured for one or more accelerated domain names.
 *
 * @description > You can call this operation up to 80 times per second per account.
 *
 * @param request DescribeDcdnDomainCnameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainCnameResponse
 */
DescribeDcdnDomainCnameResponse Client::describeDcdnDomainCnameWithOptions(const DescribeDcdnDomainCnameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainCname"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainCnameResponse>();
}

/**
 * @summary Checks whether CNAME records are configured for one or more accelerated domain names.
 *
 * @description > You can call this operation up to 80 times per second per account.
 *
 * @param request DescribeDcdnDomainCnameRequest
 * @return DescribeDcdnDomainCnameResponse
 */
DescribeDcdnDomainCnameResponse Client::describeDcdnDomainCname(const DescribeDcdnDomainCnameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainCnameWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of an accelerated domain name.
 *
 * @description > *   You can query the configurations of one or more features in a request.
 * > *   You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnDomainConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainConfigsResponse
 */
DescribeDcdnDomainConfigsResponse Client::describeDcdnDomainConfigsWithOptions(const DescribeDcdnDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasFunctionNames()) {
    query["FunctionNames"] = request.getFunctionNames();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainConfigs"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainConfigsResponse>();
}

/**
 * @summary Queries the configurations of an accelerated domain name.
 *
 * @description > *   You can query the configurations of one or more features in a request.
 * > *   You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnDomainConfigsRequest
 * @return DescribeDcdnDomainConfigsResponse
 */
DescribeDcdnDomainConfigsResponse Client::describeDcdnDomainConfigs(const DescribeDcdnDomainConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainConfigsWithOptions(request, runtime);
}

/**
 * @summary Queries the basic configuration information about an accelerated domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnDomainDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainDetailResponse
 */
DescribeDcdnDomainDetailResponse Client::describeDcdnDomainDetailWithOptions(const DescribeDcdnDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainDetail"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainDetailResponse>();
}

/**
 * @summary Queries the basic configuration information about an accelerated domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnDomainDetailRequest
 * @return DescribeDcdnDomainDetailResponse
 */
DescribeDcdnDomainDetailResponse Client::describeDcdnDomainDetail(const DescribeDcdnDomainDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the request hit ratios of one or more accelerated domain names. You can query data collected within the last 90 days.
 *
 * @description #
 * *   You can call this operation up to 100 times per second per account.
 * *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * **Time granularity** The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table. |Time granularity |Maximum time range per query |Historical data available |Data delay | -------------- | -------------- | ------ |5 minutes |3 days |93 days |15 minutes |1 hour |31 days |186 days |4 hours |1 day |366 days |366 days |04:00 on the next day
 *
 * @param request DescribeDcdnDomainHitRateDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainHitRateDataResponse
 */
DescribeDcdnDomainHitRateDataResponse Client::describeDcdnDomainHitRateDataWithOptions(const DescribeDcdnDomainHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainHitRateData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainHitRateDataResponse>();
}

/**
 * @summary Queries the request hit ratios of one or more accelerated domain names. You can query data collected within the last 90 days.
 *
 * @description #
 * *   You can call this operation up to 100 times per second per account.
 * *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * **Time granularity** The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table. |Time granularity |Maximum time range per query |Historical data available |Data delay | -------------- | -------------- | ------ |5 minutes |3 days |93 days |15 minutes |1 hour |31 days |186 days |4 hours |1 day |366 days |366 days |04:00 on the next day
 *
 * @param request DescribeDcdnDomainHitRateDataRequest
 * @return DescribeDcdnDomainHitRateDataResponse
 */
DescribeDcdnDomainHitRateDataResponse Client::describeDcdnDomainHitRateData(const DescribeDcdnDomainHitRateDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainHitRateDataWithOptions(request, runtime);
}

/**
 * @summary Queries the total number and proportions of HTTP status codes returned from one or more accelerated domain names. Data is collected every 5 minutes. You can query data in the last 90 days.
 *
 * @description * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * * You can call this operation up to 100 times per second per account.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainHttpCodeDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainHttpCodeDataResponse
 */
DescribeDcdnDomainHttpCodeDataResponse Client::describeDcdnDomainHttpCodeDataWithOptions(const DescribeDcdnDomainHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainHttpCodeData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainHttpCodeDataResponse>();
}

/**
 * @summary Queries the total number and proportions of HTTP status codes returned from one or more accelerated domain names. Data is collected every 5 minutes. You can query data in the last 90 days.
 *
 * @description * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * * You can call this operation up to 100 times per second per account.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainHttpCodeDataRequest
 * @return DescribeDcdnDomainHttpCodeDataResponse
 */
DescribeDcdnDomainHttpCodeDataResponse Client::describeDcdnDomainHttpCodeData(const DescribeDcdnDomainHttpCodeDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainHttpCodeDataWithOptions(request, runtime);
}

/**
 * @summary Queries the distribution of HTTP status codes by protocol.
 *
 * @description * You can call this operation up to 20 times per second per account.
 * * You cannot query the distribution of HTTP status codes by IP protocol.
 * * If you do not specify the **StartTime** or **EndTime** parameter, the data that is collected within the last 24 hours is collected. If you specify both the **StartTime** and **EndTime** parameters, the data that is collected within the time range that you specify is collected.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainHttpCodeDataByLayerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainHttpCodeDataByLayerResponse
 */
DescribeDcdnDomainHttpCodeDataByLayerResponse Client::describeDcdnDomainHttpCodeDataByLayerWithOptions(const DescribeDcdnDomainHttpCodeDataByLayerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLayer()) {
    query["Layer"] = request.getLayer();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainHttpCodeDataByLayer"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainHttpCodeDataByLayerResponse>();
}

/**
 * @summary Queries the distribution of HTTP status codes by protocol.
 *
 * @description * You can call this operation up to 20 times per second per account.
 * * You cannot query the distribution of HTTP status codes by IP protocol.
 * * If you do not specify the **StartTime** or **EndTime** parameter, the data that is collected within the last 24 hours is collected. If you specify both the **StartTime** and **EndTime** parameters, the data that is collected within the time range that you specify is collected.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainHttpCodeDataByLayerRequest
 * @return DescribeDcdnDomainHttpCodeDataByLayerResponse
 */
DescribeDcdnDomainHttpCodeDataByLayerResponse Client::describeDcdnDomainHttpCodeDataByLayer(const DescribeDcdnDomainHttpCodeDataByLayerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainHttpCodeDataByLayerWithOptions(request, runtime);
}

/**
 * @summary Queries bandwidth of accelerated domain names for which Layer 4 acceleration is enabled. You can query the data that is collected over the last 90 days.
 *
 * @description > 
 * *   The bandwidth is measured in bit/s.
 * *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnDomainIpaBpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainIpaBpsDataResponse
 */
DescribeDcdnDomainIpaBpsDataResponse Client::describeDcdnDomainIpaBpsDataWithOptions(const DescribeDcdnDomainIpaBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFixTimeGap()) {
    query["FixTimeGap"] = request.getFixTimeGap();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTimeMerge()) {
    query["TimeMerge"] = request.getTimeMerge();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainIpaBpsData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainIpaBpsDataResponse>();
}

/**
 * @summary Queries bandwidth of accelerated domain names for which Layer 4 acceleration is enabled. You can query the data that is collected over the last 90 days.
 *
 * @description > 
 * *   The bandwidth is measured in bit/s.
 * *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnDomainIpaBpsDataRequest
 * @return DescribeDcdnDomainIpaBpsDataResponse
 */
DescribeDcdnDomainIpaBpsDataResponse Client::describeDcdnDomainIpaBpsData(const DescribeDcdnDomainIpaBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainIpaBpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the number of IPA user connections.
 *
 * @description *   You can call this operation up to 10 times per second per user.
 * *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * *   The minimum time granularity at which the data is queried is 5 minutes. The maximum time range for a single query is 31 days. The period within which historical data is available is 366 days. The data latency is no more than 10 minutes.
 *
 * @param request DescribeDcdnDomainIpaConnDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainIpaConnDataResponse
 */
DescribeDcdnDomainIpaConnDataResponse Client::describeDcdnDomainIpaConnDataWithOptions(const DescribeDcdnDomainIpaConnDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasSplitBy()) {
    query["SplitBy"] = request.getSplitBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainIpaConnData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainIpaConnDataResponse>();
}

/**
 * @summary Queries the number of IPA user connections.
 *
 * @description *   You can call this operation up to 10 times per second per user.
 * *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * *   The minimum time granularity at which the data is queried is 5 minutes. The maximum time range for a single query is 31 days. The period within which historical data is available is 366 days. The data latency is no more than 10 minutes.
 *
 * @param request DescribeDcdnDomainIpaConnDataRequest
 * @return DescribeDcdnDomainIpaConnDataResponse
 */
DescribeDcdnDomainIpaConnDataResponse Client::describeDcdnDomainIpaConnData(const DescribeDcdnDomainIpaConnDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainIpaConnDataWithOptions(request, runtime);
}

/**
 * @summary Queries traffic of one or more accelerated domain names for which Layer 4 acceleration is enabled. You can query the data that is collected over the last 90 days.
 *
 * @description > 
 * *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * *   Unit: bytes.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnDomainIpaTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainIpaTrafficDataResponse
 */
DescribeDcdnDomainIpaTrafficDataResponse Client::describeDcdnDomainIpaTrafficDataWithOptions(const DescribeDcdnDomainIpaTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFixTimeGap()) {
    query["FixTimeGap"] = request.getFixTimeGap();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTimeMerge()) {
    query["TimeMerge"] = request.getTimeMerge();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainIpaTrafficData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainIpaTrafficDataResponse>();
}

/**
 * @summary Queries traffic of one or more accelerated domain names for which Layer 4 acceleration is enabled. You can query the data that is collected over the last 90 days.
 *
 * @description > 
 * *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * *   Unit: bytes.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnDomainIpaTrafficDataRequest
 * @return DescribeDcdnDomainIpaTrafficDataResponse
 */
DescribeDcdnDomainIpaTrafficDataResponse Client::describeDcdnDomainIpaTrafficData(const DescribeDcdnDomainIpaTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainIpaTrafficDataWithOptions(request, runtime);
}

/**
 * @summary Queries the proportions of data usage of different Internet service providers (ISPs). You can query data within the last 90 days.
 *
 * @description > 
 * *   You can call this operation up to 100 times per second per account.
 * *   If **StartTime** is set but **EndTime** is not set, the data within the hour that starts from **StartTime** is queried.
 * *   If **EndTime** is set but **StartTime** is not set, the data within the last hour that precedes **EndTime** is queried.
 * *   You can query data of a domain name or all domain names that belong to your account.
 * *   You can view data that is collected over the last seven days. The interval at which data is queried is based on the time range specified by **StartTime** and **EndTime**.
 *     *   **If the time range is shorter than or equal to one hour**, data is queried every minute.
 *     *   **If the time range is longer than 1 hour but shorter than or equal to three days**, data is queried every five minutes.
 *     *   **If the time range is longer than three days but shorter than or equal to seven days**, data is queried every hour.
 *
 * @param request DescribeDcdnDomainIspDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainIspDataResponse
 */
DescribeDcdnDomainIspDataResponse Client::describeDcdnDomainIspDataWithOptions(const DescribeDcdnDomainIspDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainIspData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainIspDataResponse>();
}

/**
 * @summary Queries the proportions of data usage of different Internet service providers (ISPs). You can query data within the last 90 days.
 *
 * @description > 
 * *   You can call this operation up to 100 times per second per account.
 * *   If **StartTime** is set but **EndTime** is not set, the data within the hour that starts from **StartTime** is queried.
 * *   If **EndTime** is set but **StartTime** is not set, the data within the last hour that precedes **EndTime** is queried.
 * *   You can query data of a domain name or all domain names that belong to your account.
 * *   You can view data that is collected over the last seven days. The interval at which data is queried is based on the time range specified by **StartTime** and **EndTime**.
 *     *   **If the time range is shorter than or equal to one hour**, data is queried every minute.
 *     *   **If the time range is longer than 1 hour but shorter than or equal to three days**, data is queried every five minutes.
 *     *   **If the time range is longer than three days but shorter than or equal to seven days**, data is queried every hour.
 *
 * @param request DescribeDcdnDomainIspDataRequest
 * @return DescribeDcdnDomainIspDataResponse
 */
DescribeDcdnDomainIspDataResponse Client::describeDcdnDomainIspData(const DescribeDcdnDomainIspDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainIspDataWithOptions(request, runtime);
}

/**
 * @summary Queries the address where you can download the log data of a domain name.
 *
 * @description > 
 * *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.********
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnDomainLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainLogResponse
 */
DescribeDcdnDomainLogResponse Client::describeDcdnDomainLogWithOptions(const DescribeDcdnDomainLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainLog"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainLogResponse>();
}

/**
 * @summary Queries the address where you can download the log data of a domain name.
 *
 * @description > 
 * *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.********
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnDomainLogRequest
 * @return DescribeDcdnDomainLogResponse
 */
DescribeDcdnDomainLogResponse Client::describeDcdnDomainLog(const DescribeDcdnDomainLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainLogWithOptions(request, runtime);
}

/**
 * @summary DescribeDcdnDomainLogExTtl
 *
 * @param request DescribeDcdnDomainLogExTtlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainLogExTtlResponse
 */
DescribeDcdnDomainLogExTtlResponse Client::describeDcdnDomainLogExTtlWithOptions(const DescribeDcdnDomainLogExTtlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainLogExTtl"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainLogExTtlResponse>();
}

/**
 * @summary DescribeDcdnDomainLogExTtl
 *
 * @param request DescribeDcdnDomainLogExTtlRequest
 * @return DescribeDcdnDomainLogExTtlResponse
 */
DescribeDcdnDomainLogExTtlResponse Client::describeDcdnDomainLogExTtl(const DescribeDcdnDomainLogExTtlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainLogExTtlWithOptions(request, runtime);
}

/**
 * @summary Queries the billable items of accelerated domain names. The data is collected at least every 5 minutes. The billable items do not include non-request items.
 *
 * @description *   If you do not set the StartTime or EndTime parameter, data within the last 10 minutes is queried. You can set both the StartTime and EndTime parameters to specify a time range.
 * *   You can specify one or more accelerated domain names. Separate domain names with commas (,).
 * *   You can query data within the last 90 days.
 * *   The time range cannot exceed 1 hour.
 *
 * @param request DescribeDcdnDomainMultiUsageDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainMultiUsageDataResponse
 */
DescribeDcdnDomainMultiUsageDataResponse Client::describeDcdnDomainMultiUsageDataWithOptions(const DescribeDcdnDomainMultiUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainMultiUsageData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainMultiUsageDataResponse>();
}

/**
 * @summary Queries the billable items of accelerated domain names. The data is collected at least every 5 minutes. The billable items do not include non-request items.
 *
 * @description *   If you do not set the StartTime or EndTime parameter, data within the last 10 minutes is queried. You can set both the StartTime and EndTime parameters to specify a time range.
 * *   You can specify one or more accelerated domain names. Separate domain names with commas (,).
 * *   You can query data within the last 90 days.
 * *   The time range cannot exceed 1 hour.
 *
 * @param request DescribeDcdnDomainMultiUsageDataRequest
 * @return DescribeDcdnDomainMultiUsageDataResponse
 */
DescribeDcdnDomainMultiUsageDataResponse Client::describeDcdnDomainMultiUsageData(const DescribeDcdnDomainMultiUsageDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainMultiUsageDataWithOptions(request, runtime);
}

/**
 * @summary Queries the origin bandwidth data for one or more accelerated domain names. You can query data in the last 90 days.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainOriginBpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainOriginBpsDataResponse
 */
DescribeDcdnDomainOriginBpsDataResponse Client::describeDcdnDomainOriginBpsDataWithOptions(const DescribeDcdnDomainOriginBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainOriginBpsData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainOriginBpsDataResponse>();
}

/**
 * @summary Queries the origin bandwidth data for one or more accelerated domain names. You can query data in the last 90 days.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainOriginBpsDataRequest
 * @return DescribeDcdnDomainOriginBpsDataResponse
 */
DescribeDcdnDomainOriginBpsDataResponse Client::describeDcdnDomainOriginBpsData(const DescribeDcdnDomainOriginBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainOriginBpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the back-to-origin traffic of one or more accelerated domain names.
 *
 * @description - You can call this operation up to 100 times per second per account.
 * - If you do not set the **StartTime** or **EndTime** parameters, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter varies with the maximum time range per query. The following table describes the time period within which historical data is available and the data delay. 
 * | Time granularity | Maximum time range per query | Historical data available | Data delay |
 * | ---------------- | ---------------------------- | ------------------------- | ---------- |
 * | 5 minutes | 3 days | 93 days | 15 minutes |
 * | 1 hour | 31 days | 186 days | 4 hours |
 * | 1 day | 366 days | 366 days | 04:00 on the next day |
 *
 * @param request DescribeDcdnDomainOriginTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainOriginTrafficDataResponse
 */
DescribeDcdnDomainOriginTrafficDataResponse Client::describeDcdnDomainOriginTrafficDataWithOptions(const DescribeDcdnDomainOriginTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainOriginTrafficData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainOriginTrafficDataResponse>();
}

/**
 * @summary Queries the back-to-origin traffic of one or more accelerated domain names.
 *
 * @description - You can call this operation up to 100 times per second per account.
 * - If you do not set the **StartTime** or **EndTime** parameters, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter varies with the maximum time range per query. The following table describes the time period within which historical data is available and the data delay. 
 * | Time granularity | Maximum time range per query | Historical data available | Data delay |
 * | ---------------- | ---------------------------- | ------------------------- | ---------- |
 * | 5 minutes | 3 days | 93 days | 15 minutes |
 * | 1 hour | 31 days | 186 days | 4 hours |
 * | 1 day | 366 days | 366 days | 04:00 on the next day |
 *
 * @param request DescribeDcdnDomainOriginTrafficDataRequest
 * @return DescribeDcdnDomainOriginTrafficDataResponse
 */
DescribeDcdnDomainOriginTrafficDataResponse Client::describeDcdnDomainOriginTrafficData(const DescribeDcdnDomainOriginTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainOriginTrafficDataWithOptions(request, runtime);
}

/**
 * @summary Queries the protocol type of IP Application Accelerator (IPA).
 *
 * @description > You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeDcdnDomainPropertyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainPropertyResponse
 */
DescribeDcdnDomainPropertyResponse Client::describeDcdnDomainPropertyWithOptions(const DescribeDcdnDomainPropertyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainProperty"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainPropertyResponse>();
}

/**
 * @summary Queries the protocol type of IP Application Accelerator (IPA).
 *
 * @description > You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeDcdnDomainPropertyRequest
 * @return DescribeDcdnDomainPropertyResponse
 */
DescribeDcdnDomainPropertyResponse Client::describeDcdnDomainProperty(const DescribeDcdnDomainPropertyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainPropertyWithOptions(request, runtime);
}

/**
 * @summary Queries page view (PV) data of an accelerated domain name. Data can be collected at minimum intervals of one hour.
 *
 * @param request DescribeDcdnDomainPvDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainPvDataResponse
 */
DescribeDcdnDomainPvDataResponse Client::describeDcdnDomainPvDataWithOptions(const DescribeDcdnDomainPvDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainPvData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainPvDataResponse>();
}

/**
 * @summary Queries page view (PV) data of an accelerated domain name. Data can be collected at minimum intervals of one hour.
 *
 * @param request DescribeDcdnDomainPvDataRequest
 * @return DescribeDcdnDomainPvDataResponse
 */
DescribeDcdnDomainPvDataResponse Client::describeDcdnDomainPvData(const DescribeDcdnDomainPvDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainPvDataWithOptions(request, runtime);
}

/**
 * @summary Queries the number of requests to an accelerated domain name per second. You can query data in the last 90 days.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainQpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainQpsDataResponse
 */
DescribeDcdnDomainQpsDataResponse Client::describeDcdnDomainQpsDataWithOptions(const DescribeDcdnDomainQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainQpsData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainQpsDataResponse>();
}

/**
 * @summary Queries the number of requests to an accelerated domain name per second. You can query data in the last 90 days.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainQpsDataRequest
 * @return DescribeDcdnDomainQpsDataResponse
 */
DescribeDcdnDomainQpsDataResponse Client::describeDcdnDomainQpsData(const DescribeDcdnDomainQpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainQpsDataWithOptions(request, runtime);
}

/**
 * @summary The number of queries per second in the Chinese mainland.
 *
 * @description * You can call this operation up to 20 times per second per account.
 * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the time range to query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainQpsDataByLayerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainQpsDataByLayerResponse
 */
DescribeDcdnDomainQpsDataByLayerResponse Client::describeDcdnDomainQpsDataByLayerWithOptions(const DescribeDcdnDomainQpsDataByLayerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLayer()) {
    query["Layer"] = request.getLayer();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainQpsDataByLayer"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainQpsDataByLayerResponse>();
}

/**
 * @summary The number of queries per second in the Chinese mainland.
 *
 * @description * You can call this operation up to 20 times per second per account.
 * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the time range to query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainQpsDataByLayerRequest
 * @return DescribeDcdnDomainQpsDataByLayerResponse
 */
DescribeDcdnDomainQpsDataByLayerResponse Client::describeDcdnDomainQpsDataByLayer(const DescribeDcdnDomainQpsDataByLayerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainQpsDataByLayerWithOptions(request, runtime);
}

/**
 * @summary Queries the real-time network bandwidth of a domain name.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not specify **StartTime** or **EndTime**, the request returns the data collected in the last hour by default. If you specify both parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|3 to 4 hours|
 *
 * @param request DescribeDcdnDomainRealTimeBpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainRealTimeBpsDataResponse
 */
DescribeDcdnDomainRealTimeBpsDataResponse Client::describeDcdnDomainRealTimeBpsDataWithOptions(const DescribeDcdnDomainRealTimeBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainRealTimeBpsData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainRealTimeBpsDataResponse>();
}

/**
 * @summary Queries the real-time network bandwidth of a domain name.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not specify **StartTime** or **EndTime**, the request returns the data collected in the last hour by default. If you specify both parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|3 to 4 hours|
 *
 * @param request DescribeDcdnDomainRealTimeBpsDataRequest
 * @return DescribeDcdnDomainRealTimeBpsDataResponse
 */
DescribeDcdnDomainRealTimeBpsDataResponse Client::describeDcdnDomainRealTimeBpsData(const DescribeDcdnDomainRealTimeBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainRealTimeBpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries byte hit ratios at a time granularity of 1 minute.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * The network traffic destined for different domain names may be redirected to the same origin server. Therefore, the byte hit ratios may be inaccurate. The accuracy of query results is based on the actual configurations.
 * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last hour. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * | Time granularity | Maximum time range per query | Historical data available | Data delay |
 * |----|------|-----|--------|
 * | 1 minute | 1 hour | 7 days | 5 minutes |
 * | 5 minutes | 3 days | 93 days | 15 minutes |
 * | 1 hour | 31 days | 186 days | 4 hours |
 *
 * @param request DescribeDcdnDomainRealTimeByteHitRateDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainRealTimeByteHitRateDataResponse
 */
DescribeDcdnDomainRealTimeByteHitRateDataResponse Client::describeDcdnDomainRealTimeByteHitRateDataWithOptions(const DescribeDcdnDomainRealTimeByteHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainRealTimeByteHitRateData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainRealTimeByteHitRateDataResponse>();
}

/**
 * @summary Queries byte hit ratios at a time granularity of 1 minute.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * The network traffic destined for different domain names may be redirected to the same origin server. Therefore, the byte hit ratios may be inaccurate. The accuracy of query results is based on the actual configurations.
 * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last hour. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * | Time granularity | Maximum time range per query | Historical data available | Data delay |
 * |----|------|-----|--------|
 * | 1 minute | 1 hour | 7 days | 5 minutes |
 * | 5 minutes | 3 days | 93 days | 15 minutes |
 * | 1 hour | 31 days | 186 days | 4 hours |
 *
 * @param request DescribeDcdnDomainRealTimeByteHitRateDataRequest
 * @return DescribeDcdnDomainRealTimeByteHitRateDataResponse
 */
DescribeDcdnDomainRealTimeByteHitRateDataResponse Client::describeDcdnDomainRealTimeByteHitRateData(const DescribeDcdnDomainRealTimeByteHitRateDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainRealTimeByteHitRateDataWithOptions(request, runtime);
}

/**
 * @summary Queries traffic usage through each Internet service provider (ISP) and the number of visits in each region. The resolution of the data is one minute. The maximum time range to query for this operation is 10 minutes.
 *
 * @description > 
 * > - You can call this operation up to 10 times per second per account.
 * > - This operation is available only to users whose daily peak bandwidth value is higher than 1 Gbit/s. If you meet this requirement, you can [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl) to apply for permissions to use this operation.
 *
 * @param request DescribeDcdnDomainRealTimeDetailDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainRealTimeDetailDataResponse
 */
DescribeDcdnDomainRealTimeDetailDataResponse Client::describeDcdnDomainRealTimeDetailDataWithOptions(const DescribeDcdnDomainRealTimeDetailDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainRealTimeDetailData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainRealTimeDetailDataResponse>();
}

/**
 * @summary Queries traffic usage through each Internet service provider (ISP) and the number of visits in each region. The resolution of the data is one minute. The maximum time range to query for this operation is 10 minutes.
 *
 * @description > 
 * > - You can call this operation up to 10 times per second per account.
 * > - This operation is available only to users whose daily peak bandwidth value is higher than 1 Gbit/s. If you meet this requirement, you can [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl) to apply for permissions to use this operation.
 *
 * @param request DescribeDcdnDomainRealTimeDetailDataRequest
 * @return DescribeDcdnDomainRealTimeDetailDataResponse
 */
DescribeDcdnDomainRealTimeDetailDataResponse Client::describeDcdnDomainRealTimeDetailData(const DescribeDcdnDomainRealTimeDetailDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainRealTimeDetailDataWithOptions(request, runtime);
}

/**
 * @summary Queries the total number and proportions of HTTP status codes returned from one or more accelerated domain names.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDcdnDomainRealTimeHttpCodeDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainRealTimeHttpCodeDataResponse
 */
DescribeDcdnDomainRealTimeHttpCodeDataResponse Client::describeDcdnDomainRealTimeHttpCodeDataWithOptions(const DescribeDcdnDomainRealTimeHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainRealTimeHttpCodeData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainRealTimeHttpCodeDataResponse>();
}

/**
 * @summary Queries the total number and proportions of HTTP status codes returned from one or more accelerated domain names.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDcdnDomainRealTimeHttpCodeDataRequest
 * @return DescribeDcdnDomainRealTimeHttpCodeDataResponse
 */
DescribeDcdnDomainRealTimeHttpCodeDataResponse Client::describeDcdnDomainRealTimeHttpCodeData(const DescribeDcdnDomainRealTimeHttpCodeDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainRealTimeHttpCodeDataWithOptions(request, runtime);
}

/**
 * @summary The number of QPS for one or more accelerated domain names is queried. Data is collected every minute.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not specify the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you specify both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDcdnDomainRealTimeQpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainRealTimeQpsDataResponse
 */
DescribeDcdnDomainRealTimeQpsDataResponse Client::describeDcdnDomainRealTimeQpsDataWithOptions(const DescribeDcdnDomainRealTimeQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainRealTimeQpsData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainRealTimeQpsDataResponse>();
}

/**
 * @summary The number of QPS for one or more accelerated domain names is queried. Data is collected every minute.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not specify the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you specify both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDcdnDomainRealTimeQpsDataRequest
 * @return DescribeDcdnDomainRealTimeQpsDataResponse
 */
DescribeDcdnDomainRealTimeQpsDataResponse Client::describeDcdnDomainRealTimeQpsData(const DescribeDcdnDomainRealTimeQpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainRealTimeQpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the request hit rates with a time granularity of 1 minute.
 *
 * @description * You can call this operation up to 10 times per second per user.
 * * The network traffic destined for different domain names may be redirected to the same origin server. Therefore, the byte hit ratios may be inaccurate. The accuracy of query results is based on the actual configurations.
 * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last hour. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * **Time granularity** The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDcdnDomainRealTimeReqHitRateDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainRealTimeReqHitRateDataResponse
 */
DescribeDcdnDomainRealTimeReqHitRateDataResponse Client::describeDcdnDomainRealTimeReqHitRateDataWithOptions(const DescribeDcdnDomainRealTimeReqHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainRealTimeReqHitRateData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainRealTimeReqHitRateDataResponse>();
}

/**
 * @summary Queries the request hit rates with a time granularity of 1 minute.
 *
 * @description * You can call this operation up to 10 times per second per user.
 * * The network traffic destined for different domain names may be redirected to the same origin server. Therefore, the byte hit ratios may be inaccurate. The accuracy of query results is based on the actual configurations.
 * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last hour. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * **Time granularity** The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDcdnDomainRealTimeReqHitRateDataRequest
 * @return DescribeDcdnDomainRealTimeReqHitRateDataResponse
 */
DescribeDcdnDomainRealTimeReqHitRateDataResponse Client::describeDcdnDomainRealTimeReqHitRateData(const DescribeDcdnDomainRealTimeReqHitRateDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainRealTimeReqHitRateDataWithOptions(request, runtime);
}

/**
 * @summary Queries the bandwidth data of back-to-origin requests. Data is collected every minute. You can query data collected in the last 7 days.
 *
 * @description *   You can call this operation up to 10 times per second per account.
 * *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * | Time granularity | Maximum time range per query | Historical data available | Data delay | 
 * |-----|-----|-----|--------| 
 * | 1 minute | 1 hour | 7 days | 5 minutes | 
 * | 5 minutes | 3 days | 93 days | 15 minutes | | 1 hour | 31 days | 186 days | 4 hours |
 *
 * @param request DescribeDcdnDomainRealTimeSrcBpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainRealTimeSrcBpsDataResponse
 */
DescribeDcdnDomainRealTimeSrcBpsDataResponse Client::describeDcdnDomainRealTimeSrcBpsDataWithOptions(const DescribeDcdnDomainRealTimeSrcBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainRealTimeSrcBpsData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainRealTimeSrcBpsDataResponse>();
}

/**
 * @summary Queries the bandwidth data of back-to-origin requests. Data is collected every minute. You can query data collected in the last 7 days.
 *
 * @description *   You can call this operation up to 10 times per second per account.
 * *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * | Time granularity | Maximum time range per query | Historical data available | Data delay | 
 * |-----|-----|-----|--------| 
 * | 1 minute | 1 hour | 7 days | 5 minutes | 
 * | 5 minutes | 3 days | 93 days | 15 minutes | | 1 hour | 31 days | 186 days | 4 hours |
 *
 * @param request DescribeDcdnDomainRealTimeSrcBpsDataRequest
 * @return DescribeDcdnDomainRealTimeSrcBpsDataResponse
 */
DescribeDcdnDomainRealTimeSrcBpsDataResponse Client::describeDcdnDomainRealTimeSrcBpsData(const DescribeDcdnDomainRealTimeSrcBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainRealTimeSrcBpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the proportions of HTTP status codes based on back-to-origin statistics with a time granularity of one minute.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not specify the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you specify both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainRealTimeSrcHttpCodeDataResponse
 */
DescribeDcdnDomainRealTimeSrcHttpCodeDataResponse Client::describeDcdnDomainRealTimeSrcHttpCodeDataWithOptions(const DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainRealTimeSrcHttpCodeData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainRealTimeSrcHttpCodeDataResponse>();
}

/**
 * @summary Queries the proportions of HTTP status codes based on back-to-origin statistics with a time granularity of one minute.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * If you do not specify the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you specify both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest
 * @return DescribeDcdnDomainRealTimeSrcHttpCodeDataResponse
 */
DescribeDcdnDomainRealTimeSrcHttpCodeDataResponse Client::describeDcdnDomainRealTimeSrcHttpCodeData(const DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainRealTimeSrcHttpCodeDataWithOptions(request, runtime);
}

/**
 * @summary Queries the origin traffic monitoring data for an accelerated domain name. Data is collected every minute. You can query data in the last 90 days.
 *
 * @description If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDcdnDomainRealTimeSrcTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainRealTimeSrcTrafficDataResponse
 */
DescribeDcdnDomainRealTimeSrcTrafficDataResponse Client::describeDcdnDomainRealTimeSrcTrafficDataWithOptions(const DescribeDcdnDomainRealTimeSrcTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainRealTimeSrcTrafficData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainRealTimeSrcTrafficDataResponse>();
}

/**
 * @summary Queries the origin traffic monitoring data for an accelerated domain name. Data is collected every minute. You can query data in the last 90 days.
 *
 * @description If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDcdnDomainRealTimeSrcTrafficDataRequest
 * @return DescribeDcdnDomainRealTimeSrcTrafficDataResponse
 */
DescribeDcdnDomainRealTimeSrcTrafficDataResponse Client::describeDcdnDomainRealTimeSrcTrafficData(const DescribeDcdnDomainRealTimeSrcTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainRealTimeSrcTrafficDataWithOptions(request, runtime);
}

/**
 * @summary Queries the traffic monitoring data of an accelerated domain name. Data is collected every minute.
 *
 * @description You can call this operation up to 50 times per second per user.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDcdnDomainRealTimeTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainRealTimeTrafficDataResponse
 */
DescribeDcdnDomainRealTimeTrafficDataResponse Client::describeDcdnDomainRealTimeTrafficDataWithOptions(const DescribeDcdnDomainRealTimeTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainRealTimeTrafficData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainRealTimeTrafficDataResponse>();
}

/**
 * @summary Queries the traffic monitoring data of an accelerated domain name. Data is collected every minute.
 *
 * @description You can call this operation up to 50 times per second per user.
 * **Time granularity**
 * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|1 hour|7 days|5 minutes|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 *
 * @param request DescribeDcdnDomainRealTimeTrafficDataRequest
 * @return DescribeDcdnDomainRealTimeTrafficDataResponse
 */
DescribeDcdnDomainRealTimeTrafficDataResponse Client::describeDcdnDomainRealTimeTrafficData(const DescribeDcdnDomainRealTimeTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainRealTimeTrafficDataWithOptions(request, runtime);
}

/**
 * @summary Queries regional distribution of users. Data is collected every day. You can query data within the last 90 days.
 *
 * @description > 
 * *   If you do not specify the StartTime and EndTime parameters, the data within the last 24 hours is queried. If you specify the StartTime and EndTime parameters, the data within the specified time range is queried.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnDomainRegionDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainRegionDataResponse
 */
DescribeDcdnDomainRegionDataResponse Client::describeDcdnDomainRegionDataWithOptions(const DescribeDcdnDomainRegionDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainRegionData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainRegionDataResponse>();
}

/**
 * @summary Queries regional distribution of users. Data is collected every day. You can query data within the last 90 days.
 *
 * @description > 
 * *   If you do not specify the StartTime and EndTime parameters, the data within the last 24 hours is queried. If you specify the StartTime and EndTime parameters, the data within the specified time range is queried.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnDomainRegionDataRequest
 * @return DescribeDcdnDomainRegionDataResponse
 */
DescribeDcdnDomainRegionDataResponse Client::describeDcdnDomainRegionData(const DescribeDcdnDomainRegionDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainRegionDataWithOptions(request, runtime);
}

/**
 * @summary Queries the environment configuration in the canary release environment.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnDomainStagingConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainStagingConfigResponse
 */
DescribeDcdnDomainStagingConfigResponse Client::describeDcdnDomainStagingConfigWithOptions(const DescribeDcdnDomainStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasFunctionNames()) {
    query["FunctionNames"] = request.getFunctionNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainStagingConfig"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainStagingConfigResponse>();
}

/**
 * @summary Queries the environment configuration in the canary release environment.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnDomainStagingConfigRequest
 * @return DescribeDcdnDomainStagingConfigResponse
 */
DescribeDcdnDomainStagingConfigResponse Client::describeDcdnDomainStagingConfig(const DescribeDcdnDomainStagingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainStagingConfigWithOptions(request, runtime);
}

/**
 * @summary Queries and sorts frequently requested web pages on a specified day. You can query data collected within the last 90 days.
 *
 * @description *   If you do not set the StartTime parameter, the data on the previous day is queried.
 * *   You can specify only one domain name.
 *
 * @param request DescribeDcdnDomainTopReferVisitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainTopReferVisitResponse
 */
DescribeDcdnDomainTopReferVisitResponse Client::describeDcdnDomainTopReferVisitWithOptions(const DescribeDcdnDomainTopReferVisitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainTopReferVisit"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainTopReferVisitResponse>();
}

/**
 * @summary Queries and sorts frequently requested web pages on a specified day. You can query data collected within the last 90 days.
 *
 * @description *   If you do not set the StartTime parameter, the data on the previous day is queried.
 * *   You can specify only one domain name.
 *
 * @param request DescribeDcdnDomainTopReferVisitRequest
 * @return DescribeDcdnDomainTopReferVisitResponse
 */
DescribeDcdnDomainTopReferVisitResponse Client::describeDcdnDomainTopReferVisit(const DescribeDcdnDomainTopReferVisitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainTopReferVisitWithOptions(request, runtime);
}

/**
 * @summary Queries frequently requested URLs on a day.
 *
 * @description > You can query data in the last seven days.
 *
 * @param request DescribeDcdnDomainTopUrlVisitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainTopUrlVisitResponse
 */
DescribeDcdnDomainTopUrlVisitResponse Client::describeDcdnDomainTopUrlVisitWithOptions(const DescribeDcdnDomainTopUrlVisitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainTopUrlVisit"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainTopUrlVisitResponse>();
}

/**
 * @summary Queries frequently requested URLs on a day.
 *
 * @description > You can query data in the last seven days.
 *
 * @param request DescribeDcdnDomainTopUrlVisitRequest
 * @return DescribeDcdnDomainTopUrlVisitResponse
 */
DescribeDcdnDomainTopUrlVisitResponse Client::describeDcdnDomainTopUrlVisit(const DescribeDcdnDomainTopUrlVisitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainTopUrlVisitWithOptions(request, runtime);
}

/**
 * @summary Queries the network traffic of accelerated domain names. You can query data collected in the last 90 days.
 *
 * @description * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * * You can call this operation up to 100 times per second per account.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainTrafficDataResponse
 */
DescribeDcdnDomainTrafficDataResponse Client::describeDcdnDomainTrafficDataWithOptions(const DescribeDcdnDomainTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainTrafficData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainTrafficDataResponse>();
}

/**
 * @summary Queries the network traffic of accelerated domain names. You can query data collected in the last 90 days.
 *
 * @description * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * * You can call this operation up to 100 times per second per account.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainTrafficDataRequest
 * @return DescribeDcdnDomainTrafficDataResponse
 */
DescribeDcdnDomainTrafficDataResponse Client::describeDcdnDomainTrafficData(const DescribeDcdnDomainTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainTrafficDataWithOptions(request, runtime);
}

/**
 * @summary Queries resource usage about domain names in a billable region.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * Usage data includes traffic (measured in bytes), bandwidth values (measured in bit/s), and the number of requests.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainUsageDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainUsageDataResponse
 */
DescribeDcdnDomainUsageDataResponse Client::describeDcdnDomainUsageDataWithOptions(const DescribeDcdnDomainUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArea()) {
    query["Area"] = request.getArea();
  }

  if (!!request.hasDataProtocol()) {
    query["DataProtocol"] = request.getDataProtocol();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasField()) {
    query["Field"] = request.getField();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainUsageData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainUsageDataResponse>();
}

/**
 * @summary Queries resource usage about domain names in a billable region.
 *
 * @description * You can call this operation up to 10 times per second per account.
 * * Usage data includes traffic (measured in bytes), bandwidth values (measured in bit/s), and the number of requests.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainUsageDataRequest
 * @return DescribeDcdnDomainUsageDataResponse
 */
DescribeDcdnDomainUsageDataResponse Client::describeDcdnDomainUsageData(const DescribeDcdnDomainUsageDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainUsageDataWithOptions(request, runtime);
}

/**
 * @summary Queries the number of unique visitors (UVs) to an accelerated domain name. Data is collected every hour. You can query data within the last 90 days.
 *
 * @description *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * *   You can specify only one accelerated domain name or all the accelerated domain names that belong to your Alibaba Cloud account.
 *
 * @param request DescribeDcdnDomainUvDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainUvDataResponse
 */
DescribeDcdnDomainUvDataResponse Client::describeDcdnDomainUvDataWithOptions(const DescribeDcdnDomainUvDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainUvData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainUvDataResponse>();
}

/**
 * @summary Queries the number of unique visitors (UVs) to an accelerated domain name. Data is collected every hour. You can query data within the last 90 days.
 *
 * @description *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * *   You can specify only one accelerated domain name or all the accelerated domain names that belong to your Alibaba Cloud account.
 *
 * @param request DescribeDcdnDomainUvDataRequest
 * @return DescribeDcdnDomainUvDataResponse
 */
DescribeDcdnDomainUvDataResponse Client::describeDcdnDomainUvData(const DescribeDcdnDomainUvDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainUvDataWithOptions(request, runtime);
}

/**
 * @summary Queries bandwidth of one or more accelerated domain names for which WebSocket is enabled. You can query the data that is collected over the last 90 days.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainWebsocketBpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainWebsocketBpsDataResponse
 */
DescribeDcdnDomainWebsocketBpsDataResponse Client::describeDcdnDomainWebsocketBpsDataWithOptions(const DescribeDcdnDomainWebsocketBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainWebsocketBpsData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainWebsocketBpsDataResponse>();
}

/**
 * @summary Queries bandwidth of one or more accelerated domain names for which WebSocket is enabled. You can query the data that is collected over the last 90 days.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainWebsocketBpsDataRequest
 * @return DescribeDcdnDomainWebsocketBpsDataResponse
 */
DescribeDcdnDomainWebsocketBpsDataResponse Client::describeDcdnDomainWebsocketBpsData(const DescribeDcdnDomainWebsocketBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainWebsocketBpsDataWithOptions(request, runtime);
}

/**
 * @summary The total number and proportions of HTTP status codes returned from one or more accelerated domain names for which WebSocket is enabled are queried. Data can be collected at minimum intervals of 5 minutes.
 *
 * @description You can call this operation up to 100 times per second per account.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the time range to query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainWebsocketHttpCodeDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainWebsocketHttpCodeDataResponse
 */
DescribeDcdnDomainWebsocketHttpCodeDataResponse Client::describeDcdnDomainWebsocketHttpCodeDataWithOptions(const DescribeDcdnDomainWebsocketHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainWebsocketHttpCodeData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainWebsocketHttpCodeDataResponse>();
}

/**
 * @summary The total number and proportions of HTTP status codes returned from one or more accelerated domain names for which WebSocket is enabled are queried. Data can be collected at minimum intervals of 5 minutes.
 *
 * @description You can call this operation up to 100 times per second per account.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the time range to query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainWebsocketHttpCodeDataRequest
 * @return DescribeDcdnDomainWebsocketHttpCodeDataResponse
 */
DescribeDcdnDomainWebsocketHttpCodeDataResponse Client::describeDcdnDomainWebsocketHttpCodeData(const DescribeDcdnDomainWebsocketHttpCodeDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainWebsocketHttpCodeDataWithOptions(request, runtime);
}

/**
 * @summary Queries the traffic monitoring data for an accelerated domain name with WebSocket enabled. You can query data in the last 90 days.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainWebsocketTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainWebsocketTrafficDataResponse
 */
DescribeDcdnDomainWebsocketTrafficDataResponse Client::describeDcdnDomainWebsocketTrafficDataWithOptions(const DescribeDcdnDomainWebsocketTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainWebsocketTrafficData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainWebsocketTrafficDataResponse>();
}

/**
 * @summary Queries the traffic monitoring data for an accelerated domain name with WebSocket enabled. You can query data in the last 90 days.
 *
 * @description * You can call this operation up to 100 times per second per account.
 * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|4 hours|
 * |1 day|366 days|366 days|04:00 on the next day|
 *
 * @param request DescribeDcdnDomainWebsocketTrafficDataRequest
 * @return DescribeDcdnDomainWebsocketTrafficDataResponse
 */
DescribeDcdnDomainWebsocketTrafficDataResponse Client::describeDcdnDomainWebsocketTrafficData(const DescribeDcdnDomainWebsocketTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainWebsocketTrafficDataWithOptions(request, runtime);
}

/**
 * @summary Queries DCDN-accelerated domain names by origin server.
 *
 * @param request DescribeDcdnDomainsBySourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnDomainsBySourceResponse
 */
DescribeDcdnDomainsBySourceResponse Client::describeDcdnDomainsBySourceWithOptions(const DescribeDcdnDomainsBySourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSources()) {
    query["Sources"] = request.getSources();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnDomainsBySource"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnDomainsBySourceResponse>();
}

/**
 * @summary Queries DCDN-accelerated domain names by origin server.
 *
 * @param request DescribeDcdnDomainsBySourceRequest
 * @return DescribeDcdnDomainsBySourceResponse
 */
DescribeDcdnDomainsBySourceResponse Client::describeDcdnDomainsBySource(const DescribeDcdnDomainsBySourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnDomainsBySourceWithOptions(request, runtime);
}

/**
 * @summary Queries the number of times that a routine is executed within a specified period of time.
 *
 * @description *   You can call this operation up to 10 times per second per account.
 * *   The minimum time granularity for a query is 1 hour. The maximum time span for a query is 24 hours. The time period within which historical data is available for a query is 366 days.
 *
 * @param request DescribeDcdnErUsageDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnErUsageDataResponse
 */
DescribeDcdnErUsageDataResponse Client::describeDcdnErUsageDataWithOptions(const DescribeDcdnErUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasRoutineID()) {
    query["RoutineID"] = request.getRoutineID();
  }

  if (!!request.hasSpec()) {
    query["Spec"] = request.getSpec();
  }

  if (!!request.hasSplitBy()) {
    query["SplitBy"] = request.getSplitBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnErUsageData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnErUsageDataResponse>();
}

/**
 * @summary Queries the number of times that a routine is executed within a specified period of time.
 *
 * @description *   You can call this operation up to 10 times per second per account.
 * *   The minimum time granularity for a query is 1 hour. The maximum time span for a query is 24 hours. The time period within which historical data is available for a query is 366 days.
 *
 * @param request DescribeDcdnErUsageDataRequest
 * @return DescribeDcdnErUsageDataResponse
 */
DescribeDcdnErUsageDataResponse Client::describeDcdnErUsageData(const DescribeDcdnErUsageDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnErUsageDataWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of blocked IP addresses.
 *
 * @description > *   If you specify IP addresses or CIDR blocks, IP addresses that are effective and the corresponding expiration time are returned. If you do not specify IP addresses or CIDR blocks, all effective IP addresses and the corresponding expiration time are returned.
 * > *   The results are written to OSS and returned as OSS URLs. The content in OSS objects is in the format of `IP address-Corresponding expiration time`. The expiration time is in the YYYY-MM-DD hh:mm:ss format.
 * > *   You can share OSS URLs with others. The shared URLs are valid for three days.
 *
 * @param request DescribeDcdnFullDomainsBlockIPConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnFullDomainsBlockIPConfigResponse
 */
DescribeDcdnFullDomainsBlockIPConfigResponse Client::describeDcdnFullDomainsBlockIPConfigWithOptions(const DescribeDcdnFullDomainsBlockIPConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnFullDomainsBlockIPConfig"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnFullDomainsBlockIPConfigResponse>();
}

/**
 * @summary Queries the configurations of blocked IP addresses.
 *
 * @description > *   If you specify IP addresses or CIDR blocks, IP addresses that are effective and the corresponding expiration time are returned. If you do not specify IP addresses or CIDR blocks, all effective IP addresses and the corresponding expiration time are returned.
 * > *   The results are written to OSS and returned as OSS URLs. The content in OSS objects is in the format of `IP address-Corresponding expiration time`. The expiration time is in the YYYY-MM-DD hh:mm:ss format.
 * > *   You can share OSS URLs with others. The shared URLs are valid for three days.
 *
 * @param request DescribeDcdnFullDomainsBlockIPConfigRequest
 * @return DescribeDcdnFullDomainsBlockIPConfigResponse
 */
DescribeDcdnFullDomainsBlockIPConfigResponse Client::describeDcdnFullDomainsBlockIPConfig(const DescribeDcdnFullDomainsBlockIPConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnFullDomainsBlockIPConfigWithOptions(request, runtime);
}

/**
 * @summary 查询用户海量封禁历史
 *
 * @description *   For a specified IP addresses and time range, the time when the IP address was delivered to the edge and the corresponding result are returned.
 * *   If a specified IP address or CIDR block has multiple blocking records in a specified time range, the records are sorted by delivery time in descending order.
 * *   The maximum time range to query is 90 days.
 * *   If no blocking record exists or delivery fails for the given IP address and time range, the delivery time is empty.
 *
 * @param request DescribeDcdnFullDomainsBlockIPHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnFullDomainsBlockIPHistoryResponse
 */
DescribeDcdnFullDomainsBlockIPHistoryResponse Client::describeDcdnFullDomainsBlockIPHistoryWithOptions(const DescribeDcdnFullDomainsBlockIPHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIPList()) {
    body["IPList"] = request.getIPList();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnFullDomainsBlockIPHistory"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnFullDomainsBlockIPHistoryResponse>();
}

/**
 * @summary 查询用户海量封禁历史
 *
 * @description *   For a specified IP addresses and time range, the time when the IP address was delivered to the edge and the corresponding result are returned.
 * *   If a specified IP address or CIDR block has multiple blocking records in a specified time range, the records are sorted by delivery time in descending order.
 * *   The maximum time range to query is 90 days.
 * *   If no blocking record exists or delivery fails for the given IP address and time range, the delivery time is empty.
 *
 * @param request DescribeDcdnFullDomainsBlockIPHistoryRequest
 * @return DescribeDcdnFullDomainsBlockIPHistoryResponse
 */
DescribeDcdnFullDomainsBlockIPHistoryResponse Client::describeDcdnFullDomainsBlockIPHistory(const DescribeDcdnFullDomainsBlockIPHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnFullDomainsBlockIPHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries information about all certificates that belong to your account.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnHttpsDomainListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnHttpsDomainListResponse
 */
DescribeDcdnHttpsDomainListResponse Client::describeDcdnHttpsDomainListWithOptions(const DescribeDcdnHttpsDomainListRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnHttpsDomainList"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnHttpsDomainListResponse>();
}

/**
 * @summary Queries information about all certificates that belong to your account.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnHttpsDomainListRequest
 * @return DescribeDcdnHttpsDomainListResponse
 */
DescribeDcdnHttpsDomainListResponse Client::describeDcdnHttpsDomainList(const DescribeDcdnHttpsDomainListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnHttpsDomainListWithOptions(request, runtime);
}

/**
 * @summary Queries whether an IP address belongs to a POP.
 *
 * @description > You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeDcdnIpInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnIpInfoResponse
 */
DescribeDcdnIpInfoResponse Client::describeDcdnIpInfoWithOptions(const DescribeDcdnIpInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIP()) {
    query["IP"] = request.getIP();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnIpInfo"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnIpInfoResponse>();
}

/**
 * @summary Queries whether an IP address belongs to a POP.
 *
 * @description > You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeDcdnIpInfoRequest
 * @return DescribeDcdnIpInfoResponse
 */
DescribeDcdnIpInfoResponse Client::describeDcdnIpInfo(const DescribeDcdnIpInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnIpInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the back-to-origin CIDR blocks of IPA-accelerated domain names. If you want to call this API operation, you must submit a ticket to apply for the required permissions.
 *
 * @description >  This operation can be called globally up to 50 times per second. This operation can be called up to 10 times per second per account.
 *
 * @param request DescribeDcdnIpaDomainCidrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnIpaDomainCidrResponse
 */
DescribeDcdnIpaDomainCidrResponse Client::describeDcdnIpaDomainCidrWithOptions(const DescribeDcdnIpaDomainCidrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnIpaDomainCidr"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnIpaDomainCidrResponse>();
}

/**
 * @summary Queries the back-to-origin CIDR blocks of IPA-accelerated domain names. If you want to call this API operation, you must submit a ticket to apply for the required permissions.
 *
 * @description >  This operation can be called globally up to 50 times per second. This operation can be called up to 10 times per second per account.
 *
 * @param request DescribeDcdnIpaDomainCidrRequest
 * @return DescribeDcdnIpaDomainCidrResponse
 */
DescribeDcdnIpaDomainCidrResponse Client::describeDcdnIpaDomainCidr(const DescribeDcdnIpaDomainCidrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnIpaDomainCidrWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of an accelerated domain name. You can query the configurations of one or more features in each request.
 *
 * @description > You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnIpaDomainConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnIpaDomainConfigsResponse
 */
DescribeDcdnIpaDomainConfigsResponse Client::describeDcdnIpaDomainConfigsWithOptions(const DescribeDcdnIpaDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasFunctionNames()) {
    query["FunctionNames"] = request.getFunctionNames();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnIpaDomainConfigs"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnIpaDomainConfigsResponse>();
}

/**
 * @summary Queries the configurations of an accelerated domain name. You can query the configurations of one or more features in each request.
 *
 * @description > You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnIpaDomainConfigsRequest
 * @return DescribeDcdnIpaDomainConfigsResponse
 */
DescribeDcdnIpaDomainConfigsResponse Client::describeDcdnIpaDomainConfigs(const DescribeDcdnIpaDomainConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnIpaDomainConfigsWithOptions(request, runtime);
}

/**
 * @summary Queries the basic configuration information about an accelerated domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnIpaDomainDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnIpaDomainDetailResponse
 */
DescribeDcdnIpaDomainDetailResponse Client::describeDcdnIpaDomainDetailWithOptions(const DescribeDcdnIpaDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnIpaDomainDetail"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnIpaDomainDetailResponse>();
}

/**
 * @summary Queries the basic configuration information about an accelerated domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnIpaDomainDetailRequest
 * @return DescribeDcdnIpaDomainDetailResponse
 */
DescribeDcdnIpaDomainDetailResponse Client::describeDcdnIpaDomainDetail(const DescribeDcdnIpaDomainDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnIpaDomainDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the status of IPA. The information includes the time when the service was activated, the current service status, the current billing method, and the billing method of the next cycle.
 *
 * @description **
 * **The maximum number of times that each user can call this operation per second is 20.
 *
 * @param request DescribeDcdnIpaServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnIpaServiceResponse
 */
DescribeDcdnIpaServiceResponse Client::describeDcdnIpaServiceWithOptions(const DescribeDcdnIpaServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnIpaService"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnIpaServiceResponse>();
}

/**
 * @summary Queries the status of IPA. The information includes the time when the service was activated, the current service status, the current billing method, and the billing method of the next cycle.
 *
 * @description **
 * **The maximum number of times that each user can call this operation per second is 20.
 *
 * @param request DescribeDcdnIpaServiceRequest
 * @return DescribeDcdnIpaServiceResponse
 */
DescribeDcdnIpaServiceResponse Client::describeDcdnIpaService(const DescribeDcdnIpaServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnIpaServiceWithOptions(request, runtime);
}

/**
 * @summary Queries information about all domain names that are accelerated by IP Application Accelerator (IPA) in your account. Fuzzy search and filtering by domain status are supported.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnIpaUserDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnIpaUserDomainsResponse
 */
DescribeDcdnIpaUserDomainsResponse Client::describeDcdnIpaUserDomainsWithOptions(const DescribeDcdnIpaUserDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckDomainShow()) {
    query["CheckDomainShow"] = request.getCheckDomainShow();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasDomainSearchType()) {
    query["DomainSearchType"] = request.getDomainSearchType();
  }

  if (!!request.hasDomainStatus()) {
    query["DomainStatus"] = request.getDomainStatus();
  }

  if (!!request.hasFuncFilter()) {
    query["FuncFilter"] = request.getFuncFilter();
  }

  if (!!request.hasFuncId()) {
    query["FuncId"] = request.getFuncId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnIpaUserDomains"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnIpaUserDomainsResponse>();
}

/**
 * @summary Queries information about all domain names that are accelerated by IP Application Accelerator (IPA) in your account. Fuzzy search and filtering by domain status are supported.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnIpaUserDomainsRequest
 * @return DescribeDcdnIpaUserDomainsResponse
 */
DescribeDcdnIpaUserDomainsResponse Client::describeDcdnIpaUserDomains(const DescribeDcdnIpaUserDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnIpaUserDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the key-value pairs that belong to your account.
 *
 * @param request DescribeDcdnKvAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnKvAccountResponse
 */
DescribeDcdnKvAccountResponse Client::describeDcdnKvAccountWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeDcdnKvAccount"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnKvAccountResponse>();
}

/**
 * @summary Queries the information about the key-value pairs that belong to your account.
 *
 * @return DescribeDcdnKvAccountResponse
 */
DescribeDcdnKvAccountResponse Client::describeDcdnKvAccount() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnKvAccountWithOptions(runtime);
}

/**
 * @summary Queries the KV status of an account.
 *
 * @param request DescribeDcdnKvAccountStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnKvAccountStatusResponse
 */
DescribeDcdnKvAccountStatusResponse Client::describeDcdnKvAccountStatusWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeDcdnKvAccountStatus"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnKvAccountStatusResponse>();
}

/**
 * @summary Queries the KV status of an account.
 *
 * @return DescribeDcdnKvAccountStatusResponse
 */
DescribeDcdnKvAccountStatusResponse Client::describeDcdnKvAccountStatus() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnKvAccountStatusWithOptions(runtime);
}

/**
 * @summary Queries the information about a namespace.
 *
 * @param request DescribeDcdnKvNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnKvNamespaceResponse
 */
DescribeDcdnKvNamespaceResponse Client::describeDcdnKvNamespaceWithOptions(const DescribeDcdnKvNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnKvNamespace"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnKvNamespaceResponse>();
}

/**
 * @summary Queries the information about a namespace.
 *
 * @param request DescribeDcdnKvNamespaceRequest
 * @return DescribeDcdnKvNamespaceResponse
 */
DescribeDcdnKvNamespaceResponse Client::describeDcdnKvNamespace(const DescribeDcdnKvNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnKvNamespaceWithOptions(request, runtime);
}

/**
 * @summary Queries CIDR blocks of Dynamic Content Delivery Network (DCDN) points of presence (POPs).
 *
 * @description > *   To use this operation, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex).
 * > *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnL2IpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnL2IpsResponse
 */
DescribeDcdnL2IpsResponse Client::describeDcdnL2IpsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeDcdnL2Ips"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnL2IpsResponse>();
}

/**
 * @summary Queries CIDR blocks of Dynamic Content Delivery Network (DCDN) points of presence (POPs).
 *
 * @description > *   To use this operation, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex).
 * > *   You can call this operation up to 100 times per second per account.
 *
 * @return DescribeDcdnL2IpsResponse
 */
DescribeDcdnL2IpsResponse Client::describeDcdnL2Ips() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnL2IpsWithOptions(runtime);
}

/**
 * @summary Queries the origin CIDR blocks by domain name. The CIDR blocks include IPv4 and IPv6 CIDR blocks.
 *
 * @param request DescribeDcdnL2VipsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnL2VipsResponse
 */
DescribeDcdnL2VipsResponse Client::describeDcdnL2VipsWithOptions(const DescribeDcdnL2VipsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnL2Vips"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnL2VipsResponse>();
}

/**
 * @summary Queries the origin CIDR blocks by domain name. The CIDR blocks include IPv4 and IPv6 CIDR blocks.
 *
 * @param request DescribeDcdnL2VipsRequest
 * @return DescribeDcdnL2VipsResponse
 */
DescribeDcdnL2VipsResponse Client::describeDcdnL2Vips(const DescribeDcdnL2VipsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnL2VipsWithOptions(request, runtime);
}

/**
 * @summary Queries the status of the origin server for a DCDN-accelerated domain name.
 *
 * @param request DescribeDcdnOriginSiteHealthStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnOriginSiteHealthStatusResponse
 */
DescribeDcdnOriginSiteHealthStatusResponse Client::describeDcdnOriginSiteHealthStatusWithOptions(const DescribeDcdnOriginSiteHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnOriginSiteHealthStatus"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnOriginSiteHealthStatusResponse>();
}

/**
 * @summary Queries the status of the origin server for a DCDN-accelerated domain name.
 *
 * @param request DescribeDcdnOriginSiteHealthStatusRequest
 * @return DescribeDcdnOriginSiteHealthStatusResponse
 */
DescribeDcdnOriginSiteHealthStatusResponse Client::describeDcdnOriginSiteHealthStatus(const DescribeDcdnOriginSiteHealthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnOriginSiteHealthStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the fields in real-time log entries.
 *
 * @description >  You can call this API operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnRealTimeDeliveryFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnRealTimeDeliveryFieldResponse
 */
DescribeDcdnRealTimeDeliveryFieldResponse Client::describeDcdnRealTimeDeliveryFieldWithOptions(const DescribeDcdnRealTimeDeliveryFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.getBusinessType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnRealTimeDeliveryField"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnRealTimeDeliveryFieldResponse>();
}

/**
 * @summary Queries the fields in real-time log entries.
 *
 * @description >  You can call this API operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnRealTimeDeliveryFieldRequest
 * @return DescribeDcdnRealTimeDeliveryFieldResponse
 */
DescribeDcdnRealTimeDeliveryFieldResponse Client::describeDcdnRealTimeDeliveryField(const DescribeDcdnRealTimeDeliveryFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnRealTimeDeliveryFieldWithOptions(request, runtime);
}

/**
 * @summary Queries the maximum number and the remaining number of URLs and directories that can be refreshed or the maximum number and the remaining number of URLs that can be prefetched per day.
 *
 * @description > 
 * *   You can call the **RefreshDcdnObjectCaches** operation to refresh content and call the **PreloadDcdnObjectCaches** operation to prefetch content.
 * *   You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnRefreshQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnRefreshQuotaResponse
 */
DescribeDcdnRefreshQuotaResponse Client::describeDcdnRefreshQuotaWithOptions(const DescribeDcdnRefreshQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnRefreshQuota"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnRefreshQuotaResponse>();
}

/**
 * @summary Queries the maximum number and the remaining number of URLs and directories that can be refreshed or the maximum number and the remaining number of URLs that can be prefetched per day.
 *
 * @description > 
 * *   You can call the **RefreshDcdnObjectCaches** operation to refresh content and call the **PreloadDcdnObjectCaches** operation to prefetch content.
 * *   You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnRefreshQuotaRequest
 * @return DescribeDcdnRefreshQuotaResponse
 */
DescribeDcdnRefreshQuotaResponse Client::describeDcdnRefreshQuota(const DescribeDcdnRefreshQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnRefreshQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries the status of refresh or prefetch tasks by task ID.
 *
 * @description > 
 * *   You can query data within the last three days.
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnRefreshTaskByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnRefreshTaskByIdResponse
 */
DescribeDcdnRefreshTaskByIdResponse Client::describeDcdnRefreshTaskByIdWithOptions(const DescribeDcdnRefreshTaskByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnRefreshTaskById"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnRefreshTaskByIdResponse>();
}

/**
 * @summary Queries the status of refresh or prefetch tasks by task ID.
 *
 * @description > 
 * *   You can query data within the last three days.
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnRefreshTaskByIdRequest
 * @return DescribeDcdnRefreshTaskByIdResponse
 */
DescribeDcdnRefreshTaskByIdResponse Client::describeDcdnRefreshTaskById(const DescribeDcdnRefreshTaskByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnRefreshTaskByIdWithOptions(request, runtime);
}

/**
 * @summary Queries the refresh or prefetch tasks. You can query the tasks in the last three days.
 *
 * @description *   You can query the refresh or prefetch tasks by ID or URL.
 * *   You can set both **TaskId** and **ObjectPath** in a request. If you do not set **TaskId** or **ObjectPath**, the data in the last 3 days on the first page is returned. By default, a maximum of 20 entries can be displayed on each page.
 * *   If you specify **DomainName** or **Status**, you must also specify **ObjectType**.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeDcdnRefreshTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnRefreshTasksResponse
 */
DescribeDcdnRefreshTasksResponse Client::describeDcdnRefreshTasksWithOptions(const DescribeDcdnRefreshTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasObjectPath()) {
    query["ObjectPath"] = request.getObjectPath();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.getObjectType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnRefreshTasks"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnRefreshTasksResponse>();
}

/**
 * @summary Queries the refresh or prefetch tasks. You can query the tasks in the last three days.
 *
 * @description *   You can query the refresh or prefetch tasks by ID or URL.
 * *   You can set both **TaskId** and **ObjectPath** in a request. If you do not set **TaskId** or **ObjectPath**, the data in the last 3 days on the first page is returned. By default, a maximum of 20 entries can be displayed on each page.
 * *   If you specify **DomainName** or **Status**, you must also specify **ObjectType**.
 * *   You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeDcdnRefreshTasksRequest
 * @return DescribeDcdnRefreshTasksResponse
 */
DescribeDcdnRefreshTasksResponse Client::describeDcdnRefreshTasks(const DescribeDcdnRefreshTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnRefreshTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the list of Internet service providers (ISPs) and regions.
 *
 * @description >  You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnRegionAndIspRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnRegionAndIspResponse
 */
DescribeDcdnRegionAndIspResponse Client::describeDcdnRegionAndIspWithOptions(const DescribeDcdnRegionAndIspRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnRegionAndIsp"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnRegionAndIspResponse>();
}

/**
 * @summary Queries the list of Internet service providers (ISPs) and regions.
 *
 * @description >  You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnRegionAndIspRequest
 * @return DescribeDcdnRegionAndIspResponse
 */
DescribeDcdnRegionAndIspResponse Client::describeDcdnRegionAndIsp(const DescribeDcdnRegionAndIspRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnRegionAndIspWithOptions(request, runtime);
}

/**
 * @summary Queries the content of an operations report.
 *
 * @description > You can call this operation up to three times per second per account.
 *
 * @param request DescribeDcdnReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnReportResponse
 */
DescribeDcdnReportResponse Client::describeDcdnReportWithOptions(const DescribeDcdnReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArea()) {
    query["Area"] = request.getArea();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasHttpCode()) {
    query["HttpCode"] = request.getHttpCode();
  }

  if (!!request.hasIsOverseas()) {
    query["IsOverseas"] = request.getIsOverseas();
  }

  if (!!request.hasReportId()) {
    query["ReportId"] = request.getReportId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnReport"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnReportResponse>();
}

/**
 * @summary Queries the content of an operations report.
 *
 * @description > You can call this operation up to three times per second per account.
 *
 * @param request DescribeDcdnReportRequest
 * @return DescribeDcdnReportResponse
 */
DescribeDcdnReportResponse Client::describeDcdnReport(const DescribeDcdnReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnReportWithOptions(request, runtime);
}

/**
 * @summary Queries custom operations reports.
 *
 * @description > * This operation queries the metadata of all operations reports. The statistics in the reports are not returned.
 * > * You can call this operation up to three times per second per account.
 *
 * @param request DescribeDcdnReportListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnReportListResponse
 */
DescribeDcdnReportListResponse Client::describeDcdnReportListWithOptions(const DescribeDcdnReportListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReportId()) {
    query["ReportId"] = request.getReportId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnReportList"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnReportListResponse>();
}

/**
 * @summary Queries custom operations reports.
 *
 * @description > * This operation queries the metadata of all operations reports. The statistics in the reports are not returned.
 * > * You can call this operation up to three times per second per account.
 *
 * @param request DescribeDcdnReportListRequest
 * @return DescribeDcdnReportListResponse
 */
DescribeDcdnReportListResponse Client::describeDcdnReportList(const DescribeDcdnReportListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnReportListWithOptions(request, runtime);
}

/**
 * @summary Queries supported types of real-time logs.
 *
 * @param request DescribeDcdnSLSRealTimeLogTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnSLSRealTimeLogTypeResponse
 */
DescribeDcdnSLSRealTimeLogTypeResponse Client::describeDcdnSLSRealTimeLogTypeWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeDcdnSLSRealTimeLogType"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnSLSRealTimeLogTypeResponse>();
}

/**
 * @summary Queries supported types of real-time logs.
 *
 * @return DescribeDcdnSLSRealTimeLogTypeResponse
 */
DescribeDcdnSLSRealTimeLogTypeResponse Client::describeDcdnSLSRealTimeLogType() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnSLSRealTimeLogTypeWithOptions(runtime);
}

/**
 * @summary Queries a real-time log delivery project.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnSLSRealtimeLogDeliveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnSLSRealtimeLogDeliveryResponse
 */
DescribeDcdnSLSRealtimeLogDeliveryResponse Client::describeDcdnSLSRealtimeLogDeliveryWithOptions(const DescribeDcdnSLSRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.getProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnSLSRealtimeLogDelivery"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnSLSRealtimeLogDeliveryResponse>();
}

/**
 * @summary Queries a real-time log delivery project.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnSLSRealtimeLogDeliveryRequest
 * @return DescribeDcdnSLSRealtimeLogDeliveryResponse
 */
DescribeDcdnSLSRealtimeLogDeliveryResponse Client::describeDcdnSLSRealtimeLogDelivery(const DescribeDcdnSLSRealtimeLogDeliveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnSLSRealtimeLogDeliveryWithOptions(request, runtime);
}

/**
 * @summary Queries the details about a ShangMi (SM) certificate.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnSMCertificateDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnSMCertificateDetailResponse
 */
DescribeDcdnSMCertificateDetailResponse Client::describeDcdnSMCertificateDetailWithOptions(const DescribeDcdnSMCertificateDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertIdentifier()) {
    query["CertIdentifier"] = request.getCertIdentifier();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnSMCertificateDetail"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnSMCertificateDetailResponse>();
}

/**
 * @summary Queries the details about a ShangMi (SM) certificate.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnSMCertificateDetailRequest
 * @return DescribeDcdnSMCertificateDetailResponse
 */
DescribeDcdnSMCertificateDetailResponse Client::describeDcdnSMCertificateDetail(const DescribeDcdnSMCertificateDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnSMCertificateDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the ShangMi (SM) certificates of an accelerated domain name.
 *
 * @description >  You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnSMCertificateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnSMCertificateListResponse
 */
DescribeDcdnSMCertificateListResponse Client::describeDcdnSMCertificateListWithOptions(const DescribeDcdnSMCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnSMCertificateList"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnSMCertificateListResponse>();
}

/**
 * @summary Queries the ShangMi (SM) certificates of an accelerated domain name.
 *
 * @description >  You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnSMCertificateListRequest
 * @return DescribeDcdnSMCertificateListResponse
 */
DescribeDcdnSMCertificateListResponse Client::describeDcdnSMCertificateList(const DescribeDcdnSMCertificateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnSMCertificateListWithOptions(request, runtime);
}

/**
 * @summary Queries the certificates of accelerated domain names.
 *
 * @param request DescribeDcdnSSLCertificateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnSSLCertificateListResponse
 */
DescribeDcdnSSLCertificateListResponse Client::describeDcdnSSLCertificateListWithOptions(const DescribeDcdnSSLCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

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
    {"action" , "DescribeDcdnSSLCertificateList"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnSSLCertificateListResponse>();
}

/**
 * @summary Queries the certificates of accelerated domain names.
 *
 * @param request DescribeDcdnSSLCertificateListRequest
 * @return DescribeDcdnSSLCertificateListResponse
 */
DescribeDcdnSSLCertificateListResponse Client::describeDcdnSSLCertificateList(const DescribeDcdnSSLCertificateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnSSLCertificateListWithOptions(request, runtime);
}

/**
 * @summary Creates an edge security drop-down list in the Dynamic Content Delivery Network (DCDN) console.
 *
 * @description > You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeDcdnSecFuncInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnSecFuncInfoResponse
 */
DescribeDcdnSecFuncInfoResponse Client::describeDcdnSecFuncInfoWithOptions(const DescribeDcdnSecFuncInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSecFuncType()) {
    query["SecFuncType"] = request.getSecFuncType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnSecFuncInfo"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnSecFuncInfoResponse>();
}

/**
 * @summary Creates an edge security drop-down list in the Dynamic Content Delivery Network (DCDN) console.
 *
 * @description > You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeDcdnSecFuncInfoRequest
 * @return DescribeDcdnSecFuncInfoResponse
 */
DescribeDcdnSecFuncInfoResponse Client::describeDcdnSecFuncInfo(const DescribeDcdnSecFuncInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnSecFuncInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the version of secure Dynamic Route for CDN (DCDN) and the security rules.
 *
 * @description > You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeDcdnSecSpecInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnSecSpecInfoResponse
 */
DescribeDcdnSecSpecInfoResponse Client::describeDcdnSecSpecInfoWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeDcdnSecSpecInfo"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnSecSpecInfoResponse>();
}

/**
 * @summary Queries the version of secure Dynamic Route for CDN (DCDN) and the security rules.
 *
 * @description > You can call this operation up to 50 times per second per account.
 *
 * @return DescribeDcdnSecSpecInfoResponse
 */
DescribeDcdnSecSpecInfoResponse Client::describeDcdnSecSpecInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnSecSpecInfoWithOptions(runtime);
}

/**
 * @summary Queries information about the Dynamic Content Delivery Network (DCDN) service. The information includes the time when the service was activated, the current service status, the current billing method, and the billing method of the next cycle.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnServiceResponse
 */
DescribeDcdnServiceResponse Client::describeDcdnServiceWithOptions(const DescribeDcdnServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnService"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnServiceResponse>();
}

/**
 * @summary Queries information about the Dynamic Content Delivery Network (DCDN) service. The information includes the time when the service was activated, the current service status, the current billing method, and the billing method of the next cycle.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnServiceRequest
 * @return DescribeDcdnServiceResponse
 */
DescribeDcdnServiceResponse Client::describeDcdnService(const DescribeDcdnServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnServiceWithOptions(request, runtime);
}

/**
 * @summary Queries valid virtual IP addresses (VIPs) in the staging environment.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnStagingIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnStagingIpResponse
 */
DescribeDcdnStagingIpResponse Client::describeDcdnStagingIpWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeDcdnStagingIp"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnStagingIpResponse>();
}

/**
 * @summary Queries valid virtual IP addresses (VIPs) in the staging environment.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @return DescribeDcdnStagingIpResponse
 */
DescribeDcdnStagingIpResponse Client::describeDcdnStagingIp() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnStagingIpWithOptions(runtime);
}

/**
 * @summary Queries custom operations reports.
 *
 * @description > *   By default, this operation queries all custom operations reports. However, only one operations report can be displayed. Therefore, only one operations report is returned.
 * > *   You can call this API operation up to three times per second per account.
 *
 * @param request DescribeDcdnSubListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnSubListResponse
 */
DescribeDcdnSubListResponse Client::describeDcdnSubListWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeDcdnSubList"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnSubListResponse>();
}

/**
 * @summary Queries custom operations reports.
 *
 * @description > *   By default, this operation queries all custom operations reports. However, only one operations report can be displayed. Therefore, only one operations report is returned.
 * > *   You can call this API operation up to three times per second per account.
 *
 * @return DescribeDcdnSubListResponse
 */
DescribeDcdnSubListResponse Client::describeDcdnSubList() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnSubListWithOptions(runtime);
}

/**
 * @summary Queries the tags of one or more resources.
 *
 * @description > You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeDcdnTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnTagResourcesResponse
 */
DescribeDcdnTagResourcesResponse Client::describeDcdnTagResourcesWithOptions(const DescribeDcdnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnTagResources"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnTagResourcesResponse>();
}

/**
 * @summary Queries the tags of one or more resources.
 *
 * @description > You can call this operation up to 10 times per second per account.
 *
 * @param request DescribeDcdnTagResourcesRequest
 * @return DescribeDcdnTagResourcesResponse
 */
DescribeDcdnTagResourcesResponse Client::describeDcdnTagResources(const DescribeDcdnTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries domain names ranked by network traffic. You can query data within the last 90 days.
 *
 * @description If you do not specify the StartTime and EndTime parameters, the data within the current month is queried. If you specify the StartTime and EndTime parameters, the data within the specified time range is queried.
 *
 * @param request DescribeDcdnTopDomainsByFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnTopDomainsByFlowResponse
 */
DescribeDcdnTopDomainsByFlowResponse Client::describeDcdnTopDomainsByFlowWithOptions(const DescribeDcdnTopDomainsByFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnTopDomainsByFlow"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnTopDomainsByFlowResponse>();
}

/**
 * @summary Queries domain names ranked by network traffic. You can query data within the last 90 days.
 *
 * @description If you do not specify the StartTime and EndTime parameters, the data within the current month is queried. If you specify the StartTime and EndTime parameters, the data within the specified time range is queried.
 *
 * @param request DescribeDcdnTopDomainsByFlowRequest
 * @return DescribeDcdnTopDomainsByFlowResponse
 */
DescribeDcdnTopDomainsByFlowResponse Client::describeDcdnTopDomainsByFlow(const DescribeDcdnTopDomainsByFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnTopDomainsByFlowWithOptions(request, runtime);
}

/**
 * @summary Queries the billing records of an Alibaba Cloud account. The maximum time range that you can specify is one month.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnUserBillHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnUserBillHistoryResponse
 */
DescribeDcdnUserBillHistoryResponse Client::describeDcdnUserBillHistoryWithOptions(const DescribeDcdnUserBillHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnUserBillHistory"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnUserBillHistoryResponse>();
}

/**
 * @summary Queries the billing records of an Alibaba Cloud account. The maximum time range that you can specify is one month.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnUserBillHistoryRequest
 * @return DescribeDcdnUserBillHistoryResponse
 */
DescribeDcdnUserBillHistoryResponse Client::describeDcdnUserBillHistory(const DescribeDcdnUserBillHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnUserBillHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries the metering method that is used in Dynamic Content Delivery Network (DCDN).
 *
 * @param request DescribeDcdnUserBillTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnUserBillTypeResponse
 */
DescribeDcdnUserBillTypeResponse Client::describeDcdnUserBillTypeWithOptions(const DescribeDcdnUserBillTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnUserBillType"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnUserBillTypeResponse>();
}

/**
 * @summary Queries the metering method that is used in Dynamic Content Delivery Network (DCDN).
 *
 * @param request DescribeDcdnUserBillTypeRequest
 * @return DescribeDcdnUserBillTypeResponse
 */
DescribeDcdnUserBillTypeResponse Client::describeDcdnUserBillType(const DescribeDcdnUserBillTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnUserBillTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the number of domain names whose SSL certificates are about to expire or have already expired.
 *
 * @description You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnUserCertificateExpireCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnUserCertificateExpireCountResponse
 */
DescribeDcdnUserCertificateExpireCountResponse Client::describeDcdnUserCertificateExpireCountWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeDcdnUserCertificateExpireCount"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnUserCertificateExpireCountResponse>();
}

/**
 * @summary Queries the number of domain names whose SSL certificates are about to expire or have already expired.
 *
 * @description You can call this operation up to 100 times per second per account.
 *
 * @return DescribeDcdnUserCertificateExpireCountResponse
 */
DescribeDcdnUserCertificateExpireCountResponse Client::describeDcdnUserCertificateExpireCount() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnUserCertificateExpireCountWithOptions(runtime);
}

/**
 * @summary Queries the configurations of security features.
 *
 * @description You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnUserConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnUserConfigsResponse
 */
DescribeDcdnUserConfigsResponse Client::describeDcdnUserConfigsWithOptions(const DescribeDcdnUserConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFunctionName()) {
    query["FunctionName"] = request.getFunctionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnUserConfigs"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnUserConfigsResponse>();
}

/**
 * @summary Queries the configurations of security features.
 *
 * @description You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnUserConfigsRequest
 * @return DescribeDcdnUserConfigsResponse
 */
DescribeDcdnUserConfigsResponse Client::describeDcdnUserConfigs(const DescribeDcdnUserConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnUserConfigsWithOptions(request, runtime);
}

/**
 * @summary Queries the accelerated domain names that belong to your Alibaba Cloud account. You can filter domains by name or by status. Fuzzy match is supported when you filter domains by name.
 *
 * @description > You can call this operation up to 80 times per second per account.
 *
 * @param request DescribeDcdnUserDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnUserDomainsResponse
 */
DescribeDcdnUserDomainsResponse Client::describeDcdnUserDomainsWithOptions(const DescribeDcdnUserDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChangeEndTime()) {
    query["ChangeEndTime"] = request.getChangeEndTime();
  }

  if (!!request.hasChangeStartTime()) {
    query["ChangeStartTime"] = request.getChangeStartTime();
  }

  if (!!request.hasCheckDomainShow()) {
    query["CheckDomainShow"] = request.getCheckDomainShow();
  }

  if (!!request.hasCoverage()) {
    query["Coverage"] = request.getCoverage();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasDomainSearchType()) {
    query["DomainSearchType"] = request.getDomainSearchType();
  }

  if (!!request.hasDomainStatus()) {
    query["DomainStatus"] = request.getDomainStatus();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasWebSiteType()) {
    query["WebSiteType"] = request.getWebSiteType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnUserDomains"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnUserDomainsResponse>();
}

/**
 * @summary Queries the accelerated domain names that belong to your Alibaba Cloud account. You can filter domains by name or by status. Fuzzy match is supported when you filter domains by name.
 *
 * @description > You can call this operation up to 80 times per second per account.
 *
 * @param request DescribeDcdnUserDomainsRequest
 * @return DescribeDcdnUserDomainsResponse
 */
DescribeDcdnUserDomainsResponse Client::describeDcdnUserDomains(const DescribeDcdnUserDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnUserDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries all accelerated domain names with specified features configured that belong to your Alibaba Cloud account based on the FuncId parameter.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnUserDomainsByFuncRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnUserDomainsByFuncResponse
 */
DescribeDcdnUserDomainsByFuncResponse Client::describeDcdnUserDomainsByFuncWithOptions(const DescribeDcdnUserDomainsByFuncRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasFuncFilter()) {
    query["FuncFilter"] = request.getFuncFilter();
  }

  if (!!request.hasFuncId()) {
    query["FuncId"] = request.getFuncId();
  }

  if (!!request.hasMatchType()) {
    query["MatchType"] = request.getMatchType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnUserDomainsByFunc"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnUserDomainsByFuncResponse>();
}

/**
 * @summary Queries all accelerated domain names with specified features configured that belong to your Alibaba Cloud account based on the FuncId parameter.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnUserDomainsByFuncRequest
 * @return DescribeDcdnUserDomainsByFuncResponse
 */
DescribeDcdnUserDomainsByFuncResponse Client::describeDcdnUserDomainsByFunc(const DescribeDcdnUserDomainsByFuncRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnUserDomainsByFuncWithOptions(request, runtime);
}

/**
 * @summary Queries the resource quotas and the used resources.
 *
 * @description >  The maximum number of times that each user can call this operation per second is 30.
 *
 * @param request DescribeDcdnUserQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnUserQuotaResponse
 */
DescribeDcdnUserQuotaResponse Client::describeDcdnUserQuotaWithOptions(const DescribeDcdnUserQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnUserQuota"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnUserQuotaResponse>();
}

/**
 * @summary Queries the resource quotas and the used resources.
 *
 * @description >  The maximum number of times that each user can call this operation per second is 30.
 *
 * @param request DescribeDcdnUserQuotaRequest
 * @return DescribeDcdnUserQuotaResponse
 */
DescribeDcdnUserQuotaResponse Client::describeDcdnUserQuota(const DescribeDcdnUserQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnUserQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries the fields that are selected.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnUserRealTimeDeliveryFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnUserRealTimeDeliveryFieldResponse
 */
DescribeDcdnUserRealTimeDeliveryFieldResponse Client::describeDcdnUserRealTimeDeliveryFieldWithOptions(const DescribeDcdnUserRealTimeDeliveryFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnUserRealTimeDeliveryField"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnUserRealTimeDeliveryFieldResponse>();
}

/**
 * @summary Queries the fields that are selected.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnUserRealTimeDeliveryFieldRequest
 * @return DescribeDcdnUserRealTimeDeliveryFieldResponse
 */
DescribeDcdnUserRealTimeDeliveryFieldResponse Client::describeDcdnUserRealTimeDeliveryField(const DescribeDcdnUserRealTimeDeliveryFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnUserRealTimeDeliveryFieldWithOptions(request, runtime);
}

/**
 * @summary Queries information about the resource plans in your Alibaba Cloud account.
 *
 * @description The maximum number of times that each user can call this operation per second is 30.
 *
 * @param request DescribeDcdnUserResourcePackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnUserResourcePackageResponse
 */
DescribeDcdnUserResourcePackageResponse Client::describeDcdnUserResourcePackageWithOptions(const DescribeDcdnUserResourcePackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnUserResourcePackage"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnUserResourcePackageResponse>();
}

/**
 * @summary Queries information about the resource plans in your Alibaba Cloud account.
 *
 * @description The maximum number of times that each user can call this operation per second is 30.
 *
 * @param request DescribeDcdnUserResourcePackageRequest
 * @return DescribeDcdnUserResourcePackageResponse
 */
DescribeDcdnUserResourcePackageResponse Client::describeDcdnUserResourcePackage(const DescribeDcdnUserResourcePackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnUserResourcePackageWithOptions(request, runtime);
}

/**
 * @summary Queries the number of packets blocked by a specified security feature.
 *
 * @description > You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeDcdnUserSecDropRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnUserSecDropResponse
 */
DescribeDcdnUserSecDropResponse Client::describeDcdnUserSecDropWithOptions(const DescribeDcdnUserSecDropRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasData()) {
    query["Data"] = request.getData();
  }

  if (!!request.hasMetric()) {
    query["Metric"] = request.getMetric();
  }

  if (!!request.hasSecFunc()) {
    query["SecFunc"] = request.getSecFunc();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnUserSecDrop"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnUserSecDropResponse>();
}

/**
 * @summary Queries the number of packets blocked by a specified security feature.
 *
 * @description > You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeDcdnUserSecDropRequest
 * @return DescribeDcdnUserSecDropResponse
 */
DescribeDcdnUserSecDropResponse Client::describeDcdnUserSecDrop(const DescribeDcdnUserSecDropRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnUserSecDropWithOptions(request, runtime);
}

/**
 * @summary Queries the number of packets that are blocked by security features at the application layer in a specific time range.
 *
 * @description > You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeDcdnUserSecDropByMinuteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnUserSecDropByMinuteResponse
 */
DescribeDcdnUserSecDropByMinuteResponse Client::describeDcdnUserSecDropByMinuteWithOptions(const DescribeDcdnUserSecDropByMinuteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasObject()) {
    query["Object"] = request.getObject();
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

  if (!!request.hasSecFunc()) {
    query["SecFunc"] = request.getSecFunc();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnUserSecDropByMinute"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnUserSecDropByMinuteResponse>();
}

/**
 * @summary Queries the number of packets that are blocked by security features at the application layer in a specific time range.
 *
 * @description > You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeDcdnUserSecDropByMinuteRequest
 * @return DescribeDcdnUserSecDropByMinuteResponse
 */
DescribeDcdnUserSecDropByMinuteResponse Client::describeDcdnUserSecDropByMinute(const DescribeDcdnUserSecDropByMinuteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnUserSecDropByMinuteWithOptions(request, runtime);
}

/**
 * @summary Queries user tags.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnUserTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnUserTagsResponse
 */
DescribeDcdnUserTagsResponse Client::describeDcdnUserTagsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeDcdnUserTags"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnUserTagsResponse>();
}

/**
 * @summary Queries user tags.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @return DescribeDcdnUserTagsResponse
 */
DescribeDcdnUserTagsResponse Client::describeDcdnUserTags() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnUserTagsWithOptions(runtime);
}

/**
 * @summary Queries virtual IP addresses of the POPs by domain name.
 *
 * @description >  You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnUserVipsByDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnUserVipsByDomainResponse
 */
DescribeDcdnUserVipsByDomainResponse Client::describeDcdnUserVipsByDomainWithOptions(const DescribeDcdnUserVipsByDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAvailable()) {
    query["Available"] = request.getAvailable();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnUserVipsByDomain"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnUserVipsByDomainResponse>();
}

/**
 * @summary Queries virtual IP addresses of the POPs by domain name.
 *
 * @description >  You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeDcdnUserVipsByDomainRequest
 * @return DescribeDcdnUserVipsByDomainResponse
 */
DescribeDcdnUserVipsByDomainResponse Client::describeDcdnUserVipsByDomain(const DescribeDcdnUserVipsByDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnUserVipsByDomainWithOptions(request, runtime);
}

/**
 * @summary Queries the ownership verification content of a domain name.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnVerifyContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnVerifyContentResponse
 */
DescribeDcdnVerifyContentResponse Client::describeDcdnVerifyContentWithOptions(const DescribeDcdnVerifyContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnVerifyContent"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnVerifyContentResponse>();
}

/**
 * @summary Queries the ownership verification content of a domain name.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnVerifyContentRequest
 * @return DescribeDcdnVerifyContentResponse
 */
DescribeDcdnVerifyContentResponse Client::describeDcdnVerifyContent(const DescribeDcdnVerifyContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnVerifyContentWithOptions(request, runtime);
}

/**
 * @summary Queries the SDK authentication key for the Alibaba Cloud account. You can also use the SDK authentication key to send SDK initialization requests. The key must be included in the integration code.
 *
 * @param request DescribeDcdnWafBotAppKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnWafBotAppKeyResponse
 */
DescribeDcdnWafBotAppKeyResponse Client::describeDcdnWafBotAppKeyWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeDcdnWafBotAppKey"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnWafBotAppKeyResponse>();
}

/**
 * @summary Queries the SDK authentication key for the Alibaba Cloud account. You can also use the SDK authentication key to send SDK initialization requests. The key must be included in the integration code.
 *
 * @return DescribeDcdnWafBotAppKeyResponse
 */
DescribeDcdnWafBotAppKeyResponse Client::describeDcdnWafBotAppKey() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnWafBotAppKeyWithOptions(runtime);
}

/**
 * @summary Queries the default configurations of a WAF rule.
 *
 * @param request DescribeDcdnWafDefaultRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnWafDefaultRulesResponse
 */
DescribeDcdnWafDefaultRulesResponse Client::describeDcdnWafDefaultRulesWithOptions(const DescribeDcdnWafDefaultRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQueryArgs()) {
    query["QueryArgs"] = request.getQueryArgs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnWafDefaultRules"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnWafDefaultRulesResponse>();
}

/**
 * @summary Queries the default configurations of a WAF rule.
 *
 * @param request DescribeDcdnWafDefaultRulesRequest
 * @return DescribeDcdnWafDefaultRulesResponse
 */
DescribeDcdnWafDefaultRulesResponse Client::describeDcdnWafDefaultRules(const DescribeDcdnWafDefaultRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnWafDefaultRulesWithOptions(request, runtime);
}

/**
 * @summary Queries domain names that have Web Application Firewall (WAF) enabled and the relevant information, including the status of the access control list (ACL), protection against HTTP flood attacks, domain name, and WAF.
 *
 * @description > You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeDcdnWafDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnWafDomainResponse
 */
DescribeDcdnWafDomainResponse Client::describeDcdnWafDomainWithOptions(const DescribeDcdnWafDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnWafDomain"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnWafDomainResponse>();
}

/**
 * @summary Queries domain names that have Web Application Firewall (WAF) enabled and the relevant information, including the status of the access control list (ACL), protection against HTTP flood attacks, domain name, and WAF.
 *
 * @description > You can call this operation up to 50 times per second per account.
 *
 * @param request DescribeDcdnWafDomainRequest
 * @return DescribeDcdnWafDomainResponse
 */
DescribeDcdnWafDomainResponse Client::describeDcdnWafDomain(const DescribeDcdnWafDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnWafDomainWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the protection policy of a domain name.
 *
 * @description You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafDomainDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnWafDomainDetailResponse
 */
DescribeDcdnWafDomainDetailResponse Client::describeDcdnWafDomainDetailWithOptions(const DescribeDcdnWafDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnWafDomainDetail"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnWafDomainDetailResponse>();
}

/**
 * @summary Queries the information about the protection policy of a domain name.
 *
 * @description You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafDomainDetailRequest
 * @return DescribeDcdnWafDomainDetailResponse
 */
DescribeDcdnWafDomainDetailResponse Client::describeDcdnWafDomainDetail(const DescribeDcdnWafDomainDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnWafDomainDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the accelerated domain names that are protected by Web Application Firewall (WAF). Fuzzy search is supported.
 *
 * @description You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnWafDomainsResponse
 */
DescribeDcdnWafDomainsResponse Client::describeDcdnWafDomainsWithOptions(const DescribeDcdnWafDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryArgs()) {
    query["QueryArgs"] = request.getQueryArgs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnWafDomains"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnWafDomainsResponse>();
}

/**
 * @summary Queries the accelerated domain names that are protected by Web Application Firewall (WAF). Fuzzy search is supported.
 *
 * @description You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafDomainsRequest
 * @return DescribeDcdnWafDomainsResponse
 */
DescribeDcdnWafDomainsResponse Client::describeDcdnWafDomains(const DescribeDcdnWafDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnWafDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about match conditions in a custom protection rule, such as the match fields, logical characters, and match content.
 *
 * @description You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafFilterInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnWafFilterInfoResponse
 */
DescribeDcdnWafFilterInfoResponse Client::describeDcdnWafFilterInfoWithOptions(const DescribeDcdnWafFilterInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseScenes()) {
    query["DefenseScenes"] = request.getDefenseScenes();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnWafFilterInfo"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnWafFilterInfoResponse>();
}

/**
 * @summary Queries the information about match conditions in a custom protection rule, such as the match fields, logical characters, and match content.
 *
 * @description You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafFilterInfoRequest
 * @return DescribeDcdnWafFilterInfoResponse
 */
DescribeDcdnWafFilterInfoResponse Client::describeDcdnWafFilterInfo(const DescribeDcdnWafFilterInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnWafFilterInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the countries and regions that can be added to the blacklist of Web Application Firewall (WAF).
 *
 * @description > You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafGeoInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnWafGeoInfoResponse
 */
DescribeDcdnWafGeoInfoResponse Client::describeDcdnWafGeoInfoWithOptions(const DescribeDcdnWafGeoInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnWafGeoInfo"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnWafGeoInfoResponse>();
}

/**
 * @summary Queries the countries and regions that can be added to the blacklist of Web Application Firewall (WAF).
 *
 * @description > You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafGeoInfoRequest
 * @return DescribeDcdnWafGeoInfoResponse
 */
DescribeDcdnWafGeoInfoResponse Client::describeDcdnWafGeoInfo(const DescribeDcdnWafGeoInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnWafGeoInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a custom WAF rule group by page.
 *
 * @param request DescribeDcdnWafGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnWafGroupResponse
 */
DescribeDcdnWafGroupResponse Client::describeDcdnWafGroupWithOptions(const DescribeDcdnWafGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryArgs()) {
    query["QueryArgs"] = request.getQueryArgs();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnWafGroup"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnWafGroupResponse>();
}

/**
 * @summary Queries the details of a custom WAF rule group by page.
 *
 * @param request DescribeDcdnWafGroupRequest
 * @return DescribeDcdnWafGroupResponse
 */
DescribeDcdnWafGroupResponse Client::describeDcdnWafGroup(const DescribeDcdnWafGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnWafGroupWithOptions(request, runtime);
}

/**
 * @summary Queries custom Web Application Firewall (WAF) rule groups.
 *
 * @param request DescribeDcdnWafGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnWafGroupsResponse
 */
DescribeDcdnWafGroupsResponse Client::describeDcdnWafGroupsWithOptions(const DescribeDcdnWafGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryArgs()) {
    query["QueryArgs"] = request.getQueryArgs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnWafGroups"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnWafGroupsResponse>();
}

/**
 * @summary Queries custom Web Application Firewall (WAF) rule groups.
 *
 * @param request DescribeDcdnWafGroupsRequest
 * @return DescribeDcdnWafGroupsResponse
 */
DescribeDcdnWafGroupsResponse Client::describeDcdnWafGroups(const DescribeDcdnWafGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnWafGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the address from which you can download the Web Application Firewall (WAF) logs of a domain name.
 *
 * @description > 
 * *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * *   The log data is collected every hour.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnWafLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnWafLogsResponse
 */
DescribeDcdnWafLogsResponse Client::describeDcdnWafLogsWithOptions(const DescribeDcdnWafLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnWafLogs"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnWafLogsResponse>();
}

/**
 * @summary Queries the address from which you can download the Web Application Firewall (WAF) logs of a domain name.
 *
 * @description > 
 * *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * *   The log data is collected every hour.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeDcdnWafLogsRequest
 * @return DescribeDcdnWafLogsResponse
 */
DescribeDcdnWafLogsResponse Client::describeDcdnWafLogs(const DescribeDcdnWafLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnWafLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the Web Application Firewall (WAF) protection policies that you configured.
 *
 * @description You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafPoliciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnWafPoliciesResponse
 */
DescribeDcdnWafPoliciesResponse Client::describeDcdnWafPoliciesWithOptions(const DescribeDcdnWafPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryArgs()) {
    query["QueryArgs"] = request.getQueryArgs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnWafPolicies"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnWafPoliciesResponse>();
}

/**
 * @summary Queries the details of the Web Application Firewall (WAF) protection policies that you configured.
 *
 * @description You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafPoliciesRequest
 * @return DescribeDcdnWafPoliciesResponse
 */
DescribeDcdnWafPoliciesResponse Client::describeDcdnWafPolicies(const DescribeDcdnWafPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnWafPoliciesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a protection policy.
 *
 * @description > You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnWafPolicyResponse
 */
DescribeDcdnWafPolicyResponse Client::describeDcdnWafPolicyWithOptions(const DescribeDcdnWafPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPolicyId()) {
    query["PolicyId"] = request.getPolicyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnWafPolicy"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnWafPolicyResponse>();
}

/**
 * @summary Queries the details of a protection policy.
 *
 * @description > You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafPolicyRequest
 * @return DescribeDcdnWafPolicyResponse
 */
DescribeDcdnWafPolicyResponse Client::describeDcdnWafPolicy(const DescribeDcdnWafPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnWafPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the accelerated domain names that are protected by a specified Web Application Firewall (WAF) protection policy.
 *
 * @description You can call this operation up to 20 times per second per user.
 *
 * @param request DescribeDcdnWafPolicyDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnWafPolicyDomainsResponse
 */
DescribeDcdnWafPolicyDomainsResponse Client::describeDcdnWafPolicyDomainsWithOptions(const DescribeDcdnWafPolicyDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeDcdnWafPolicyDomains"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnWafPolicyDomainsResponse>();
}

/**
 * @summary Queries the accelerated domain names that are protected by a specified Web Application Firewall (WAF) protection policy.
 *
 * @description You can call this operation up to 20 times per second per user.
 *
 * @param request DescribeDcdnWafPolicyDomainsRequest
 * @return DescribeDcdnWafPolicyDomainsResponse
 */
DescribeDcdnWafPolicyDomainsResponse Client::describeDcdnWafPolicyDomains(const DescribeDcdnWafPolicyDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnWafPolicyDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries the domain names that can be bound to a custom protection policy.
 *
 * @description You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafPolicyValidDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnWafPolicyValidDomainsResponse
 */
DescribeDcdnWafPolicyValidDomainsResponse Client::describeDcdnWafPolicyValidDomainsWithOptions(const DescribeDcdnWafPolicyValidDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseScene()) {
    query["DefenseScene"] = request.getDefenseScene();
  }

  if (!!request.hasDomainNameLike()) {
    query["DomainNameLike"] = request.getDomainNameLike();
  }

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
    {"action" , "DescribeDcdnWafPolicyValidDomains"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnWafPolicyValidDomainsResponse>();
}

/**
 * @summary Queries the domain names that can be bound to a custom protection policy.
 *
 * @description You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafPolicyValidDomainsRequest
 * @return DescribeDcdnWafPolicyValidDomainsResponse
 */
DescribeDcdnWafPolicyValidDomainsResponse Client::describeDcdnWafPolicyValidDomains(const DescribeDcdnWafPolicyValidDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnWafPolicyValidDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified protection rule.
 *
 * @description #
 * You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnWafRuleResponse
 */
DescribeDcdnWafRuleResponse Client::describeDcdnWafRuleWithOptions(const DescribeDcdnWafRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnWafRule"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnWafRuleResponse>();
}

/**
 * @summary Queries the details of a specified protection rule.
 *
 * @description #
 * You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafRuleRequest
 * @return DescribeDcdnWafRuleResponse
 */
DescribeDcdnWafRuleResponse Client::describeDcdnWafRule(const DescribeDcdnWafRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnWafRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the details of the protection rules that you configured.
 *
 * @description You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnWafRulesResponse
 */
DescribeDcdnWafRulesResponse Client::describeDcdnWafRulesWithOptions(const DescribeDcdnWafRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryArgs()) {
    query["QueryArgs"] = request.getQueryArgs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnWafRules"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnWafRulesResponse>();
}

/**
 * @summary Queries the details of the protection rules that you configured.
 *
 * @description You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafRulesRequest
 * @return DescribeDcdnWafRulesResponse
 */
DescribeDcdnWafRulesResponse Client::describeDcdnWafRules(const DescribeDcdnWafRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnWafRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the type of the protection policy that you use.
 *
 * @description You can call this operation up to 20 times per second per user.
 *
 * @param request DescribeDcdnWafScenesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnWafScenesResponse
 */
DescribeDcdnWafScenesResponse Client::describeDcdnWafScenesWithOptions(const DescribeDcdnWafScenesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefenseScenes()) {
    query["DefenseScenes"] = request.getDefenseScenes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnWafScenes"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnWafScenesResponse>();
}

/**
 * @summary Queries the information about the type of the protection policy that you use.
 *
 * @description You can call this operation up to 20 times per second per user.
 *
 * @param request DescribeDcdnWafScenesRequest
 * @return DescribeDcdnWafScenesResponse
 */
DescribeDcdnWafScenesResponse Client::describeDcdnWafScenes(const DescribeDcdnWafScenesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnWafScenesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about Dynamic Content Delivery Network (DCDN) Web Application Firewall WAF), including the time when WAF is enabled, edition of WAF, current status of WAF, metering method for requests, and metering method for rules.
 *
 * @description # Usage notes
 * You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnWafServiceResponse
 */
DescribeDcdnWafServiceResponse Client::describeDcdnWafServiceWithOptions(const DescribeDcdnWafServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnWafService"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnWafServiceResponse>();
}

/**
 * @summary Queries the information about Dynamic Content Delivery Network (DCDN) Web Application Firewall WAF), including the time when WAF is enabled, edition of WAF, current status of WAF, metering method for requests, and metering method for rules.
 *
 * @description # Usage notes
 * You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafServiceRequest
 * @return DescribeDcdnWafServiceResponse
 */
DescribeDcdnWafServiceResponse Client::describeDcdnWafService(const DescribeDcdnWafServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnWafServiceWithOptions(request, runtime);
}

/**
 * @summary Queries the version of Web Application Firewall (WAF) used in Dynamic Content Delivery Network (DCDN).
 *
 * @description You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnWafSpecInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnWafSpecInfoResponse
 */
DescribeDcdnWafSpecInfoResponse Client::describeDcdnWafSpecInfoWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeDcdnWafSpecInfo"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnWafSpecInfoResponse>();
}

/**
 * @summary Queries the version of Web Application Firewall (WAF) used in Dynamic Content Delivery Network (DCDN).
 *
 * @description You can call this operation up to 20 times per second per account.
 *
 * @return DescribeDcdnWafSpecInfoResponse
 */
DescribeDcdnWafSpecInfoResponse Client::describeDcdnWafSpecInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnWafSpecInfoWithOptions(runtime);
}

/**
 * @summary The number of used SeCUs.
 *
 * @description *   You can call this operation up to 10 times per second per account.
 * *   The minimum time granularity for a query is 5 minutes. The maximum time span for a query is 31 days. The time period within which historical data is available for a query is 90 days.
 *
 * @param request DescribeDcdnWafUsageDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnWafUsageDataResponse
 */
DescribeDcdnWafUsageDataResponse Client::describeDcdnWafUsageDataWithOptions(const DescribeDcdnWafUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasSplitBy()) {
    query["SplitBy"] = request.getSplitBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnWafUsageData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnWafUsageDataResponse>();
}

/**
 * @summary The number of used SeCUs.
 *
 * @description *   You can call this operation up to 10 times per second per account.
 * *   The minimum time granularity for a query is 5 minutes. The maximum time span for a query is 31 days. The time period within which historical data is available for a query is 90 days.
 *
 * @param request DescribeDcdnWafUsageDataRequest
 * @return DescribeDcdnWafUsageDataResponse
 */
DescribeDcdnWafUsageDataResponse Client::describeDcdnWafUsageData(const DescribeDcdnWafUsageDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnWafUsageDataWithOptions(request, runtime);
}

/**
 * @summary Queries the information about Dynamic Content Delivery Network (DCDN), such as the service activation time, the expiration time, and the current status.
 *
 * @description > You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnsecServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDcdnsecServiceResponse
 */
DescribeDcdnsecServiceResponse Client::describeDcdnsecServiceWithOptions(const DescribeDcdnsecServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDcdnsecService"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDcdnsecServiceResponse>();
}

/**
 * @summary Queries the information about Dynamic Content Delivery Network (DCDN), such as the service activation time, the expiration time, and the current status.
 *
 * @description > You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeDcdnsecServiceRequest
 * @return DescribeDcdnsecServiceResponse
 */
DescribeDcdnsecServiceResponse Client::describeDcdnsecService(const DescribeDcdnsecServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDcdnsecServiceWithOptions(request, runtime);
}

/**
 * @summary Queries attack events.
 *
 * @param request DescribeDdosAllEventListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDdosAllEventListResponse
 */
DescribeDdosAllEventListResponse Client::describeDdosAllEventListWithOptions(const DescribeDdosAllEventListRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDdosAllEventList"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDdosAllEventListResponse>();
}

/**
 * @summary Queries attack events.
 *
 * @param request DescribeDdosAllEventListRequest
 * @return DescribeDdosAllEventListResponse
 */
DescribeDdosAllEventListResponse Client::describeDdosAllEventList(const DescribeDdosAllEventListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDdosAllEventListWithOptions(request, runtime);
}

/**
 * @summary Queries the encrypted RoutineUid of a routine.
 *
 * @param request DescribeEncryptRoutineUidRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEncryptRoutineUidResponse
 */
DescribeEncryptRoutineUidResponse Client::describeEncryptRoutineUidWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeEncryptRoutineUid"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEncryptRoutineUidResponse>();
}

/**
 * @summary Queries the encrypted RoutineUid of a routine.
 *
 * @return DescribeEncryptRoutineUidResponse
 */
DescribeEncryptRoutineUidResponse Client::describeEncryptRoutineUid() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEncryptRoutineUidWithOptions(runtime);
}

/**
 * @summary Queries the highlighted data of attack details. You can query the reasons for which requests are blocked based on TraceIDs in logs of requests that are blocked by Basic Web Protection. The highlighted data matches the content blocked by the basic web protection module.
 *
 * @param request DescribeHighlightInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHighlightInfoResponse
 */
DescribeHighlightInfoResponse Client::describeHighlightInfoWithOptions(const DescribeHighlightInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTraceId()) {
    query["TraceId"] = request.getTraceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHighlightInfo"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHighlightInfoResponse>();
}

/**
 * @summary Queries the highlighted data of attack details. You can query the reasons for which requests are blocked based on TraceIDs in logs of requests that are blocked by Basic Web Protection. The highlighted data matches the content blocked by the basic web protection module.
 *
 * @param request DescribeHighlightInfoRequest
 * @return DescribeHighlightInfoResponse
 */
DescribeHighlightInfoResponse Client::describeHighlightInfo(const DescribeHighlightInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHighlightInfoWithOptions(request, runtime);
}

/**
 * @summary kv存储实时Qps监控数据
 *
 * @param request DescribeKvRealTimeQpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeKvRealTimeQpsDataResponse
 */
DescribeKvRealTimeQpsDataResponse Client::describeKvRealTimeQpsDataWithOptions(const DescribeKvRealTimeQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessType()) {
    query["AccessType"] = request.getAccessType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasSplitBy()) {
    query["SplitBy"] = request.getSplitBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeKvRealTimeQpsData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeKvRealTimeQpsDataResponse>();
}

/**
 * @summary kv存储实时Qps监控数据
 *
 * @param request DescribeKvRealTimeQpsDataRequest
 * @return DescribeKvRealTimeQpsDataResponse
 */
DescribeKvRealTimeQpsDataResponse Client::describeKvRealTimeQpsData(const DescribeKvRealTimeQpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeKvRealTimeQpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the usage data of KV storage.
 *
 * @description **Note*** You can call this operation up to 5 times per second per account.
 * * The usage data indicates the number of requests.
 * **Time granularity:** This operation supports only the time granularity of 1 hour.
 * |Time granularity|Time range to query|Historical data available|Data latency|
 * |---|---|---|---|
 * |1 hour|31 days|90 days|3 to 4 hours|
 *
 * @param request DescribeKvUsageDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeKvUsageDataResponse
 */
DescribeKvUsageDataResponse Client::describeKvUsageDataWithOptions(const DescribeKvUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessType()) {
    query["AccessType"] = request.getAccessType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasField()) {
    query["Field"] = request.getField();
  }

  if (!!request.hasNamespaceId()) {
    query["NamespaceId"] = request.getNamespaceId();
  }

  if (!!request.hasResponseType()) {
    query["ResponseType"] = request.getResponseType();
  }

  if (!!request.hasSplitBy()) {
    query["SplitBy"] = request.getSplitBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeKvUsageData"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeKvUsageDataResponse>();
}

/**
 * @summary Queries the usage data of KV storage.
 *
 * @description **Note*** You can call this operation up to 5 times per second per account.
 * * The usage data indicates the number of requests.
 * **Time granularity:** This operation supports only the time granularity of 1 hour.
 * |Time granularity|Time range to query|Historical data available|Data latency|
 * |---|---|---|---|
 * |1 hour|31 days|90 days|3 to 4 hours|
 *
 * @param request DescribeKvUsageDataRequest
 * @return DescribeKvUsageDataResponse
 */
DescribeKvUsageDataResponse Client::describeKvUsageData(const DescribeKvUsageDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeKvUsageDataWithOptions(request, runtime);
}

/**
 * @summary Queries the feature configurations of an accelerated domain name in the resource directory.
 *
 * @param request DescribeRDDomainConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRDDomainConfigResponse
 */
DescribeRDDomainConfigResponse Client::describeRDDomainConfigWithOptions(const DescribeRDDomainConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasFunctionName()) {
    query["FunctionName"] = request.getFunctionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRDDomainConfig"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRDDomainConfigResponse>();
}

/**
 * @summary Queries the feature configurations of an accelerated domain name in the resource directory.
 *
 * @param request DescribeRDDomainConfigRequest
 * @return DescribeRDDomainConfigResponse
 */
DescribeRDDomainConfigResponse Client::describeRDDomainConfig(const DescribeRDDomainConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRDDomainConfigWithOptions(request, runtime);
}

/**
 * @summary Queries all domain names of Alibaba Cloud CDN and Dynamic Content Delivery Network (DCDN) in a Resource Directory (RD).
 *
 * @description A domain name can be in one of the following states:
 * *   online
 * *   offline
 * *   configuring
 * *   configure_failed
 * *   checking
 * *   check_failed
 *
 * @param request DescribeRDDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRDDomainsResponse
 */
DescribeRDDomainsResponse Client::describeRDDomainsWithOptions(const DescribeRDDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "DescribeRDDomains"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRDDomainsResponse>();
}

/**
 * @summary Queries all domain names of Alibaba Cloud CDN and Dynamic Content Delivery Network (DCDN) in a Resource Directory (RD).
 *
 * @description A domain name can be in one of the following states:
 * *   online
 * *   offline
 * *   configuring
 * *   configure_failed
 * *   checking
 * *   check_failed
 *
 * @param request DescribeRDDomainsRequest
 * @return DescribeRDDomainsResponse
 */
DescribeRDDomainsResponse Client::describeRDDomains(const DescribeRDDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRDDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries the metadata of a specified routine. The metadata includes the routine configuration, configuration version, and code version.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeRoutineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRoutineResponse
 */
DescribeRoutineResponse Client::describeRoutineWithOptions(const DescribeRoutineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeRoutine"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRoutineResponse>();
}

/**
 * @summary Queries the metadata of a specified routine. The metadata includes the routine configuration, configuration version, and code version.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeRoutineRequest
 * @return DescribeRoutineResponse
 */
DescribeRoutineResponse Client::describeRoutine(const DescribeRoutineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRoutineWithOptions(request, runtime);
}

/**
 * @summary Queries the canary release environments that are supported by a routine.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeRoutineCanaryEnvsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRoutineCanaryEnvsResponse
 */
DescribeRoutineCanaryEnvsResponse Client::describeRoutineCanaryEnvsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeRoutineCanaryEnvs"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRoutineCanaryEnvsResponse>();
}

/**
 * @summary Queries the canary release environments that are supported by a routine.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @return DescribeRoutineCanaryEnvsResponse
 */
DescribeRoutineCanaryEnvsResponse Client::describeRoutineCanaryEnvs() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRoutineCanaryEnvsWithOptions(runtime);
}

/**
 * @summary Queries the JavaScript code version of a routine.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeRoutineCodeRevisionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRoutineCodeRevisionResponse
 */
DescribeRoutineCodeRevisionResponse Client::describeRoutineCodeRevisionWithOptions(const DescribeRoutineCodeRevisionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSelectCodeRevision()) {
    body["SelectCodeRevision"] = request.getSelectCodeRevision();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeRoutineCodeRevision"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRoutineCodeRevisionResponse>();
}

/**
 * @summary Queries the JavaScript code version of a routine.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeRoutineCodeRevisionRequest
 * @return DescribeRoutineCodeRevisionResponse
 */
DescribeRoutineCodeRevisionResponse Client::describeRoutineCodeRevision(const DescribeRoutineCodeRevisionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRoutineCodeRevisionWithOptions(request, runtime);
}

/**
 * @summary Queries the list of domain names that are associated with a routine.
 *
 * @param request DescribeRoutineRelatedDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRoutineRelatedDomainsResponse
 */
DescribeRoutineRelatedDomainsResponse Client::describeRoutineRelatedDomainsWithOptions(const DescribeRoutineRelatedDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeRoutineRelatedDomains"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRoutineRelatedDomainsResponse>();
}

/**
 * @summary Queries the list of domain names that are associated with a routine.
 *
 * @param request DescribeRoutineRelatedDomainsRequest
 * @return DescribeRoutineRelatedDomainsResponse
 */
DescribeRoutineRelatedDomainsResponse Client::describeRoutineRelatedDomains(const DescribeRoutineRelatedDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRoutineRelatedDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries the supported specifications for routines. The private preview supports the following CPU time slice specifications: 5 ms, 50 ms, and 100 ms.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeRoutineSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRoutineSpecResponse
 */
DescribeRoutineSpecResponse Client::describeRoutineSpecWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeRoutineSpec"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRoutineSpecResponse>();
}

/**
 * @summary Queries the supported specifications for routines. The private preview supports the following CPU time slice specifications: 5 ms, 50 ms, and 100 ms.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @return DescribeRoutineSpecResponse
 */
DescribeRoutineSpecResponse Client::describeRoutineSpec() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRoutineSpecWithOptions(runtime);
}

/**
 * @summary Queries the subdomains and routines that belong to your Alibaba Cloud account.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request DescribeRoutineUserInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRoutineUserInfoResponse
 */
DescribeRoutineUserInfoResponse Client::describeRoutineUserInfoWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeRoutineUserInfo"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRoutineUserInfoResponse>();
}

/**
 * @summary Queries the subdomains and routines that belong to your Alibaba Cloud account.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @return DescribeRoutineUserInfoResponse
 */
DescribeRoutineUserInfoResponse Client::describeRoutineUserInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRoutineUserInfoWithOptions(runtime);
}

/**
 * @summary Whether IPA is enabled and whether you have overdue payments for your IPA are queried.
 *
 * @description **
 * **The maximum number of times that each user can call this operation per second is 20.
 *
 * @param request DescribeUserDcdnIpaStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserDcdnIpaStatusResponse
 */
DescribeUserDcdnIpaStatusResponse Client::describeUserDcdnIpaStatusWithOptions(const DescribeUserDcdnIpaStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserDcdnIpaStatus"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserDcdnIpaStatusResponse>();
}

/**
 * @summary Whether IPA is enabled and whether you have overdue payments for your IPA are queried.
 *
 * @description **
 * **The maximum number of times that each user can call this operation per second is 20.
 *
 * @param request DescribeUserDcdnIpaStatusRequest
 * @return DescribeUserDcdnIpaStatusResponse
 */
DescribeUserDcdnIpaStatusResponse Client::describeUserDcdnIpaStatus(const DescribeUserDcdnIpaStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserDcdnIpaStatusWithOptions(request, runtime);
}

/**
 * @summary Queries whether DCDN is activated and whether your account has overdue payments.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeUserDcdnStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserDcdnStatusResponse
 */
DescribeUserDcdnStatusResponse Client::describeUserDcdnStatusWithOptions(const DescribeUserDcdnStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserDcdnStatus"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserDcdnStatusResponse>();
}

/**
 * @summary Queries whether DCDN is activated and whether your account has overdue payments.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeUserDcdnStatusRequest
 * @return DescribeUserDcdnStatusResponse
 */
DescribeUserDcdnStatusResponse Client::describeUserDcdnStatus(const DescribeUserDcdnStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserDcdnStatusWithOptions(request, runtime);
}

/**
 * @summary Queries whether EdgeRoutine (ER) is activated or has an overdue payment.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeUserErStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserErStatusResponse
 */
DescribeUserErStatusResponse Client::describeUserErStatusWithOptions(const DescribeUserErStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserErStatus"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserErStatusResponse>();
}

/**
 * @summary Queries whether EdgeRoutine (ER) is activated or has an overdue payment.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request DescribeUserErStatusRequest
 * @return DescribeUserErStatusResponse
 */
DescribeUserErStatusResponse Client::describeUserErStatus(const DescribeUserErStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserErStatusWithOptions(request, runtime);
}

/**
 * @summary Queries whether Log Service is activated and whether you have overdue payments for your Log Service.
 *
 * @description > You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeUserLogserviceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserLogserviceStatusResponse
 */
DescribeUserLogserviceStatusResponse Client::describeUserLogserviceStatusWithOptions(const DescribeUserLogserviceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserLogserviceStatus"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserLogserviceStatusResponse>();
}

/**
 * @summary Queries whether Log Service is activated and whether you have overdue payments for your Log Service.
 *
 * @description > You can call this operation up to 20 times per second per account.
 *
 * @param request DescribeUserLogserviceStatusRequest
 * @return DescribeUserLogserviceStatusResponse
 */
DescribeUserLogserviceStatusResponse Client::describeUserLogserviceStatus(const DescribeUserLogserviceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserLogserviceStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a routine.
 *
 * @description > 
 * *   This operation modifies only the specified configurations. Other configurations remain unchanged.
 * *   If you want to delete a setting, delete the parameter value.
 * *   This operation can add canary release environments. Make sure that the environment names comply with the naming rules. Otherwise, you will fail to add the environments.
 * *   Dynamic Route for CDN (DCDN) provides 35 canary release environments. Among these environments, 34 are deployed in China and 1 is deployed outside China. The canary release environments are:
 *     *   Outside China: presetCanaryOverseas.
 *     *   In China: The 34 canary release environments are named in the format of presetCanaryXX. For example, presetCanaryBeijing represents the canary release environment in Beijing. A canary release environment is in each of the following regions: Anhui, Beijing, Chongqing, Fujian, Gansu, Guangdong, Guangxi, Guizhou, Hainan, Hebei, Heilongjiang, Henan, Hong Kong, Hubei, Hunan, Jiangsu, Jiangxi, Jilin, Liaoning, Macao, Neimenggu, Ningxia, Qinghai, Shaanxi, Shandong, Shanghai, Shanxi, Sichuan, Taiwan, Tianjin, Xinjiang, Xizang, Yunan, and Zhejiang.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param tmpReq EditRoutineConfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditRoutineConfResponse
 */
EditRoutineConfResponse Client::editRoutineConfWithOptions(const EditRoutineConfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  EditRoutineConfShrinkRequest request = EditRoutineConfShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEnvConf()) {
    request.setEnvConfShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEnvConf(), "EnvConf", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnvConfShrink()) {
    body["EnvConf"] = request.getEnvConfShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EditRoutineConf"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EditRoutineConfResponse>();
}

/**
 * @summary Modifies the configurations of a routine.
 *
 * @description > 
 * *   This operation modifies only the specified configurations. Other configurations remain unchanged.
 * *   If you want to delete a setting, delete the parameter value.
 * *   This operation can add canary release environments. Make sure that the environment names comply with the naming rules. Otherwise, you will fail to add the environments.
 * *   Dynamic Route for CDN (DCDN) provides 35 canary release environments. Among these environments, 34 are deployed in China and 1 is deployed outside China. The canary release environments are:
 *     *   Outside China: presetCanaryOverseas.
 *     *   In China: The 34 canary release environments are named in the format of presetCanaryXX. For example, presetCanaryBeijing represents the canary release environment in Beijing. A canary release environment is in each of the following regions: Anhui, Beijing, Chongqing, Fujian, Gansu, Guangdong, Guangxi, Guizhou, Hainan, Hebei, Heilongjiang, Henan, Hong Kong, Hubei, Hunan, Jiangsu, Jiangxi, Jilin, Liaoning, Macao, Neimenggu, Ningxia, Qinghai, Shaanxi, Shandong, Shanghai, Shanxi, Sichuan, Taiwan, Tianjin, Xinjiang, Xizang, Yunan, and Zhejiang.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request EditRoutineConfRequest
 * @return EditRoutineConfResponse
 */
EditRoutineConfResponse Client::editRoutineConf(const EditRoutineConfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editRoutineConfWithOptions(request, runtime);
}

/**
 * @summary Queries the value of a key in a key-value pair.
 *
 * @param request GetDcdnKvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDcdnKvResponse
 */
GetDcdnKvResponse Client::getDcdnKvWithOptions(const GetDcdnKvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDcdnKv"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDcdnKvResponse>();
}

/**
 * @summary Queries the value of a key in a key-value pair.
 *
 * @param request GetDcdnKvRequest
 * @return GetDcdnKvResponse
 */
GetDcdnKvResponse Client::getDcdnKv(const GetDcdnKvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDcdnKvWithOptions(request, runtime);
}

/**
 * @summary 查询KV对的值以及TTL信息
 *
 * @param request GetDcdnKvDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDcdnKvDetailResponse
 */
GetDcdnKvDetailResponse Client::getDcdnKvDetailWithOptions(const GetDcdnKvDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDcdnKvDetail"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDcdnKvDetailResponse>();
}

/**
 * @summary 查询KV对的值以及TTL信息
 *
 * @param request GetDcdnKvDetailRequest
 * @return GetDcdnKvDetailResponse
 */
GetDcdnKvDetailResponse Client::getDcdnKvDetail(const GetDcdnKvDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDcdnKvDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the KV status by key value.
 *
 * @param request GetDcdnKvStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDcdnKvStatusResponse
 */
GetDcdnKvStatusResponse Client::getDcdnKvStatusWithOptions(const GetDcdnKvStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetDcdnKvStatus"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDcdnKvStatusResponse>();
}

/**
 * @summary Queries the KV status by key value.
 *
 * @param request GetDcdnKvStatusRequest
 * @return GetDcdnKvStatusResponse
 */
GetDcdnKvStatusResponse Client::getDcdnKvStatus(const GetDcdnKvStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDcdnKvStatusWithOptions(request, runtime);
}

/**
 * @summary Traverses the values of keys in a namespace.
 *
 * @param request ListDcdnKvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDcdnKvResponse
 */
ListDcdnKvResponse Client::listDcdnKvWithOptions(const ListDcdnKvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDcdnKv"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDcdnKvResponse>();
}

/**
 * @summary Traverses the values of keys in a namespace.
 *
 * @param request ListDcdnKvRequest
 * @return ListDcdnKvResponse
 */
ListDcdnKvResponse Client::listDcdnKv(const ListDcdnKvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDcdnKvWithOptions(request, runtime);
}

/**
 * @summary Queries information about a real-time log delivery project.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request ListDcdnRealTimeDeliveryProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDcdnRealTimeDeliveryProjectResponse
 */
ListDcdnRealTimeDeliveryProjectResponse Client::listDcdnRealTimeDeliveryProjectWithOptions(const ListDcdnRealTimeDeliveryProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

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
    {"action" , "ListDcdnRealTimeDeliveryProject"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDcdnRealTimeDeliveryProjectResponse>();
}

/**
 * @summary Queries information about a real-time log delivery project.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request ListDcdnRealTimeDeliveryProjectRequest
 * @return ListDcdnRealTimeDeliveryProjectResponse
 */
ListDcdnRealTimeDeliveryProjectResponse Client::listDcdnRealTimeDeliveryProject(const ListDcdnRealTimeDeliveryProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDcdnRealTimeDeliveryProjectWithOptions(request, runtime);
}

/**
 * @summary A客户定制新增修改域名采样率接口
 *
 * @param request ModifyCustomDomainSampleRateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCustomDomainSampleRateResponse
 */
ModifyCustomDomainSampleRateResponse Client::modifyCustomDomainSampleRateWithOptions(const ModifyCustomDomainSampleRateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaseConfigID()) {
    body["BaseConfigID"] = request.getBaseConfigID();
  }

  if (!!request.hasDomainNames()) {
    body["DomainNames"] = request.getDomainNames();
  }

  if (!!request.hasSampleRate()) {
    body["SampleRate"] = request.getSampleRate();
  }

  if (!!request.hasSinkID()) {
    body["SinkID"] = request.getSinkID();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyCustomDomainSampleRate"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCustomDomainSampleRateResponse>();
}

/**
 * @summary A客户定制新增修改域名采样率接口
 *
 * @param request ModifyCustomDomainSampleRateRequest
 * @return ModifyCustomDomainSampleRateResponse
 */
ModifyCustomDomainSampleRateResponse Client::modifyCustomDomainSampleRate(const ModifyCustomDomainSampleRateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCustomDomainSampleRateWithOptions(request, runtime);
}

/**
 * @summary Changes the acceleration region.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request ModifyDCdnDomainSchdmByPropertyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDCdnDomainSchdmByPropertyResponse
 */
ModifyDCdnDomainSchdmByPropertyResponse Client::modifyDCdnDomainSchdmByPropertyWithOptions(const ModifyDCdnDomainSchdmByPropertyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasProperty()) {
    query["Property"] = request.getProperty();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDCdnDomainSchdmByProperty"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDCdnDomainSchdmByPropertyResponse>();
}

/**
 * @summary Changes the acceleration region.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request ModifyDCdnDomainSchdmByPropertyRequest
 * @return ModifyDCdnDomainSchdmByPropertyResponse
 */
ModifyDCdnDomainSchdmByPropertyResponse Client::modifyDCdnDomainSchdmByProperty(const ModifyDCdnDomainSchdmByPropertyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDCdnDomainSchdmByPropertyWithOptions(request, runtime);
}

/**
 * @summary Modifies a custom Web Application Firewall (WAF) rule group.
 *
 * @param request ModifyDcdnWafGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDcdnWafGroupResponse
 */
ModifyDcdnWafGroupResponse Client::modifyDcdnWafGroupWithOptions(const ModifyDcdnWafGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRules()) {
    body["Rules"] = request.getRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyDcdnWafGroup"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDcdnWafGroupResponse>();
}

/**
 * @summary Modifies a custom Web Application Firewall (WAF) rule group.
 *
 * @param request ModifyDcdnWafGroupRequest
 * @return ModifyDcdnWafGroupResponse
 */
ModifyDcdnWafGroupResponse Client::modifyDcdnWafGroup(const ModifyDcdnWafGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDcdnWafGroupWithOptions(request, runtime);
}

/**
 * @summary Changes the name or the status of a protection policy.
 *
 * @description *   You can call this operation up to 20 times per second per account.
 * *   Alibaba Cloud Dynamic Content Delivery Network (DCDN) supports POST requests.
 *
 * @param request ModifyDcdnWafPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDcdnWafPolicyResponse
 */
ModifyDcdnWafPolicyResponse Client::modifyDcdnWafPolicyWithOptions(const ModifyDcdnWafPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasPolicyName()) {
    body["PolicyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicyStatus()) {
    body["PolicyStatus"] = request.getPolicyStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyDcdnWafPolicy"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDcdnWafPolicyResponse>();
}

/**
 * @summary Changes the name or the status of a protection policy.
 *
 * @description *   You can call this operation up to 20 times per second per account.
 * *   Alibaba Cloud Dynamic Content Delivery Network (DCDN) supports POST requests.
 *
 * @param request ModifyDcdnWafPolicyRequest
 * @return ModifyDcdnWafPolicyResponse
 */
ModifyDcdnWafPolicyResponse Client::modifyDcdnWafPolicy(const ModifyDcdnWafPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDcdnWafPolicyWithOptions(request, runtime);
}

/**
 * @summary Changes the accelerated domain names that are bound to a protection policy.
 *
 * @description # Usage notes
 * *   You can call this operation up to 20 times per second per account.
 * *   Alibaba Cloud Dynamic Route for CDN (DCDN) supports POST requests.
 *
 * @param request ModifyDcdnWafPolicyDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDcdnWafPolicyDomainsResponse
 */
ModifyDcdnWafPolicyDomainsResponse Client::modifyDcdnWafPolicyDomainsWithOptions(const ModifyDcdnWafPolicyDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBindDomains()) {
    body["BindDomains"] = request.getBindDomains();
  }

  if (!!request.hasMethod()) {
    body["Method"] = request.getMethod();
  }

  if (!!request.hasPolicyId()) {
    body["PolicyId"] = request.getPolicyId();
  }

  if (!!request.hasUnbindDomains()) {
    body["UnbindDomains"] = request.getUnbindDomains();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyDcdnWafPolicyDomains"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDcdnWafPolicyDomainsResponse>();
}

/**
 * @summary Changes the accelerated domain names that are bound to a protection policy.
 *
 * @description # Usage notes
 * *   You can call this operation up to 20 times per second per account.
 * *   Alibaba Cloud Dynamic Route for CDN (DCDN) supports POST requests.
 *
 * @param request ModifyDcdnWafPolicyDomainsRequest
 * @return ModifyDcdnWafPolicyDomainsResponse
 */
ModifyDcdnWafPolicyDomainsResponse Client::modifyDcdnWafPolicyDomains(const ModifyDcdnWafPolicyDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDcdnWafPolicyDomainsWithOptions(request, runtime);
}

/**
 * @summary Changes the name, status, or configurations of a protection rule.
 *
 * @description *   You can call this operation up to 20 times per second per account.
 * *   Alibaba Cloud Dynamic Content Delivery Network (DCDN) supports POST requests.
 * *   You must configure at least one of the **RuleStatus**, **RuleName** and **RuleConfig** parameters.
 *
 * @param request ModifyDcdnWafRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDcdnWafRuleResponse
 */
ModifyDcdnWafRuleResponse Client::modifyDcdnWafRuleWithOptions(const ModifyDcdnWafRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRuleConfig()) {
    body["RuleConfig"] = request.getRuleConfig();
  }

  if (!!request.hasRuleId()) {
    body["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    body["RuleName"] = request.getRuleName();
  }

  if (!!request.hasRuleStatus()) {
    body["RuleStatus"] = request.getRuleStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyDcdnWafRule"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDcdnWafRuleResponse>();
}

/**
 * @summary Changes the name, status, or configurations of a protection rule.
 *
 * @description *   You can call this operation up to 20 times per second per account.
 * *   Alibaba Cloud Dynamic Content Delivery Network (DCDN) supports POST requests.
 * *   You must configure at least one of the **RuleStatus**, **RuleName** and **RuleConfig** parameters.
 *
 * @param request ModifyDcdnWafRuleRequest
 * @return ModifyDcdnWafRuleResponse
 */
ModifyDcdnWafRuleResponse Client::modifyDcdnWafRule(const ModifyDcdnWafRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDcdnWafRuleWithOptions(request, runtime);
}

/**
 * @summary Activates Dynamic Route for CDN (DCDN).
 *
 * @description > 
 * *   DCDN can be activated only once per Alibaba Cloud account. The Alibaba Cloud account must pass real-name verification.
 * *   You can call this operation up to five times per second per user.
 *
 * @param request OpenDcdnServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenDcdnServiceResponse
 */
OpenDcdnServiceResponse Client::openDcdnServiceWithOptions(const OpenDcdnServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillType()) {
    query["BillType"] = request.getBillType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasWebsocketBillType()) {
    query["WebsocketBillType"] = request.getWebsocketBillType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenDcdnService"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenDcdnServiceResponse>();
}

/**
 * @summary Activates Dynamic Route for CDN (DCDN).
 *
 * @description > 
 * *   DCDN can be activated only once per Alibaba Cloud account. The Alibaba Cloud account must pass real-name verification.
 * *   You can call this operation up to five times per second per user.
 *
 * @param request OpenDcdnServiceRequest
 * @return OpenDcdnServiceResponse
 */
OpenDcdnServiceResponse Client::openDcdnService(const OpenDcdnServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openDcdnServiceWithOptions(request, runtime);
}

/**
 * @summary Prefetches content from origin servers to points of presence (POPs). This reduces workloads on origin servers because users can hit cache upon their first visits.
 *
 * @description *   You can call the [RefreshDcdnObjectCaches](https://help.aliyun.com/document_detail/130620.html) operation to refresh content and call the [PreloadDcdnObjectCaches](https://help.aliyun.com/document_detail/130636.html) operation to prefetch content.
 * *   Dynamic Content Delivery Network (DCDN) supports POST requests in which parameters are sent as a form.
 * *   By default, each Alibaba Cloud account can submit up to 1,000 URLs per day. If the daily peak bandwidth value of your workloads exceeds 200 Mbit/s, you can [submit a ticket](https://account.alibabacloud.com/login/login.htm?oauth_callback=https%3A//ticket-intl.console.aliyun.com/%23/ticket/createIndex) to increase your daily quota. Alibaba Cloud reviews your application and then increases the quota accordingly.
 * *   You can specify up to 100 URLs to prefetch.
 * *   The prefetch queue of each Alibaba Cloud account can contain up to 100,000 URLs. DCDN executes prefetch tasks based on the time at which you submit the URLs.
 * *   You can call this operation up to 15 times per second per account.
 * ## Description
 * *   After a refresh task is submitted and completed, the POPs immediately start to retrieve resources from the origin server. Therefore, a large number of refresh tasks cause a large number of concurrent download tasks. This increases the number of requests that are redirected to the origin server. The back-to-origin routing process consumes more bandwidth resources and the origin server may be overwhelmed.
 * *   The time required for a prefetch task to complete is proportional to the size of the prefetched file. In actual practice, most prefetch tasks require 5 to 30 minutes to complete. A task with a smaller average file size requires less time.
 * *   To allow RAM users to perform this operation, you need to first grant them the required permissions. For more information, see [Authorize a RAM user to prefetch and refresh resources](https://help.aliyun.com/document_detail/445051.html).
 *
 * @param request PreloadDcdnObjectCachesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreloadDcdnObjectCachesResponse
 */
PreloadDcdnObjectCachesResponse Client::preloadDcdnObjectCachesWithOptions(const PreloadDcdnObjectCachesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArea()) {
    query["Area"] = request.getArea();
  }

  if (!!request.hasL2Preload()) {
    query["L2Preload"] = request.getL2Preload();
  }

  if (!!request.hasObjectPath()) {
    query["ObjectPath"] = request.getObjectPath();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQueryHashkey()) {
    query["QueryHashkey"] = request.getQueryHashkey();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasWithHeader()) {
    query["WithHeader"] = request.getWithHeader();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PreloadDcdnObjectCaches"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreloadDcdnObjectCachesResponse>();
}

/**
 * @summary Prefetches content from origin servers to points of presence (POPs). This reduces workloads on origin servers because users can hit cache upon their first visits.
 *
 * @description *   You can call the [RefreshDcdnObjectCaches](https://help.aliyun.com/document_detail/130620.html) operation to refresh content and call the [PreloadDcdnObjectCaches](https://help.aliyun.com/document_detail/130636.html) operation to prefetch content.
 * *   Dynamic Content Delivery Network (DCDN) supports POST requests in which parameters are sent as a form.
 * *   By default, each Alibaba Cloud account can submit up to 1,000 URLs per day. If the daily peak bandwidth value of your workloads exceeds 200 Mbit/s, you can [submit a ticket](https://account.alibabacloud.com/login/login.htm?oauth_callback=https%3A//ticket-intl.console.aliyun.com/%23/ticket/createIndex) to increase your daily quota. Alibaba Cloud reviews your application and then increases the quota accordingly.
 * *   You can specify up to 100 URLs to prefetch.
 * *   The prefetch queue of each Alibaba Cloud account can contain up to 100,000 URLs. DCDN executes prefetch tasks based on the time at which you submit the URLs.
 * *   You can call this operation up to 15 times per second per account.
 * ## Description
 * *   After a refresh task is submitted and completed, the POPs immediately start to retrieve resources from the origin server. Therefore, a large number of refresh tasks cause a large number of concurrent download tasks. This increases the number of requests that are redirected to the origin server. The back-to-origin routing process consumes more bandwidth resources and the origin server may be overwhelmed.
 * *   The time required for a prefetch task to complete is proportional to the size of the prefetched file. In actual practice, most prefetch tasks require 5 to 30 minutes to complete. A task with a smaller average file size requires less time.
 * *   To allow RAM users to perform this operation, you need to first grant them the required permissions. For more information, see [Authorize a RAM user to prefetch and refresh resources](https://help.aliyun.com/document_detail/445051.html).
 *
 * @param request PreloadDcdnObjectCachesRequest
 * @return PreloadDcdnObjectCachesResponse
 */
PreloadDcdnObjectCachesResponse Client::preloadDcdnObjectCaches(const PreloadDcdnObjectCachesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return preloadDcdnObjectCachesWithOptions(request, runtime);
}

/**
 * @summary Publishes the configurations of an accelerated domain name from the staging environment to the production environment.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request PublishDcdnStagingConfigToProductionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishDcdnStagingConfigToProductionResponse
 */
PublishDcdnStagingConfigToProductionResponse Client::publishDcdnStagingConfigToProductionWithOptions(const PublishDcdnStagingConfigToProductionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasFunctionName()) {
    query["FunctionName"] = request.getFunctionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishDcdnStagingConfigToProduction"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishDcdnStagingConfigToProductionResponse>();
}

/**
 * @summary Publishes the configurations of an accelerated domain name from the staging environment to the production environment.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request PublishDcdnStagingConfigToProductionRequest
 * @return PublishDcdnStagingConfigToProductionResponse
 */
PublishDcdnStagingConfigToProductionResponse Client::publishDcdnStagingConfigToProduction(const PublishDcdnStagingConfigToProductionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishDcdnStagingConfigToProductionWithOptions(request, runtime);
}

/**
 * @summary Publishes a specified version of routine code to an environment.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param tmpReq PublishRoutineCodeRevisionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishRoutineCodeRevisionResponse
 */
PublishRoutineCodeRevisionResponse Client::publishRoutineCodeRevisionWithOptions(const PublishRoutineCodeRevisionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PublishRoutineCodeRevisionShrinkRequest request = PublishRoutineCodeRevisionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEnvs()) {
    request.setEnvsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEnvs(), "Envs", "json"));
  }

  json body = {};
  if (!!request.hasEnvsShrink()) {
    body["Envs"] = request.getEnvsShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSelectCodeRevision()) {
    body["SelectCodeRevision"] = request.getSelectCodeRevision();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PublishRoutineCodeRevision"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishRoutineCodeRevisionResponse>();
}

/**
 * @summary Publishes a specified version of routine code to an environment.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request PublishRoutineCodeRevisionRequest
 * @return PublishRoutineCodeRevisionResponse
 */
PublishRoutineCodeRevisionResponse Client::publishRoutineCodeRevision(const PublishRoutineCodeRevisionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishRoutineCodeRevisionWithOptions(request, runtime);
}

/**
 * @summary Sets key-value pairs in a namespace.
 *
 * @param request PutDcdnKvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutDcdnKvResponse
 */
PutDcdnKvResponse Client::putDcdnKvWithOptions(const PutDcdnKvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "PutDcdnKv"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutDcdnKvResponse>();
}

/**
 * @summary Sets key-value pairs in a namespace.
 *
 * @param request PutDcdnKvRequest
 * @return PutDcdnKvResponse
 */
PutDcdnKvResponse Client::putDcdnKv(const PutDcdnKvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putDcdnKvWithOptions(request, runtime);
}

/**
 * @summary Adds namespaces to your account.
 *
 * @param request PutDcdnKvNamespaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutDcdnKvNamespaceResponse
 */
PutDcdnKvNamespaceResponse Client::putDcdnKvNamespaceWithOptions(const PutDcdnKvNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "PutDcdnKvNamespace"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutDcdnKvNamespaceResponse>();
}

/**
 * @summary Adds namespaces to your account.
 *
 * @param request PutDcdnKvNamespaceRequest
 * @return PutDcdnKvNamespaceResponse
 */
PutDcdnKvNamespaceResponse Client::putDcdnKvNamespace(const PutDcdnKvNamespaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putDcdnKvNamespaceWithOptions(request, runtime);
}

/**
 * @summary 设置Namespace的key-value对，支持最大25M的请求体
 *
 * @param request PutDcdnKvWithHighCapacityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutDcdnKvWithHighCapacityResponse
 */
PutDcdnKvWithHighCapacityResponse Client::putDcdnKvWithHighCapacityWithOptions(const PutDcdnKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "PutDcdnKvWithHighCapacity"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutDcdnKvWithHighCapacityResponse>();
}

/**
 * @summary 设置Namespace的key-value对，支持最大25M的请求体
 *
 * @param request PutDcdnKvWithHighCapacityRequest
 * @return PutDcdnKvWithHighCapacityResponse
 */
PutDcdnKvWithHighCapacityResponse Client::putDcdnKvWithHighCapacity(const PutDcdnKvWithHighCapacityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putDcdnKvWithHighCapacityWithOptions(request, runtime);
}

/**
 * @summary 指定缓存tag刷新节点上的文件内容
 *
 * @param request RefreshDcdnObjectCacheByCacheTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshDcdnObjectCacheByCacheTagResponse
 */
RefreshDcdnObjectCacheByCacheTagResponse Client::refreshDcdnObjectCacheByCacheTagWithOptions(const RefreshDcdnObjectCacheByCacheTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCacheTag()) {
    query["CacheTag"] = request.getCacheTag();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshDcdnObjectCacheByCacheTag"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshDcdnObjectCacheByCacheTagResponse>();
}

/**
 * @summary 指定缓存tag刷新节点上的文件内容
 *
 * @param request RefreshDcdnObjectCacheByCacheTagRequest
 * @return RefreshDcdnObjectCacheByCacheTagResponse
 */
RefreshDcdnObjectCacheByCacheTagResponse Client::refreshDcdnObjectCacheByCacheTag(const RefreshDcdnObjectCacheByCacheTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshDcdnObjectCacheByCacheTagWithOptions(request, runtime);
}

/**
 * @summary Refreshes specified objects on points of presence (POPs). The objects can be included in the content of files or URLs. You can refresh multiple URLs in each request.
 *
 * @description *   Dynamic Content Delivery Network (DCDN) supports POST requests in which parameters are sent as a form.
 * *   You can call the [RefreshDcdnObjectCaches](https://help.aliyun.com/document_detail/130620.html) operation to purge content and call the [PreloadDcdnObjectCaches](https://help.aliyun.com/document_detail/130636.html) operation to prefetch content.
 * *   By default, each Alibaba Cloud account can purge content from a maximum of 10,000 URLs and 100 directories including subdirectories per day. If the daily peak bandwidth of your Alibaba Cloud account exceeds 200 Mbit/s, [submit a ticket](https://account.alibabacloud.com/login/login.htm?oauth_callback=https%3A//ticket-intl.console.aliyun.com/%23/ticket/createIndex) to request a quota increase. Alibaba Cloud determines whether to approve your application based on your workloads.
 * *   You can specify up to 1,000 URLs or 100 directories that you want to purge in each request.
 * *   You can specify up to 1,000 URLs that you want to purge per minute for each domain name.
 * *   You can call this operation up to 30 times per second per account.
 * #### [](#)Precautions
 * *   After a purge task is completed, your resources that are cached on points of presence (POPs) are removed. When a POP receives a request for your resources, the request is redirected to the origin server to retrieve the resources. Then, the resources are returned to the client and cached on POPs. If you frequently run purge tasks, more requests are redirected to the origin server for resources. This results in high bandwidth costs and more loads on the origin server.
 * *   A purge task takes effect 5 to 6 minutes after being submitted. If the resource you want to purge has a TTL of less than 5 minutes, you wait for it to expire instead of manually running a purge task.
 * *   To allow RAM users to perform this operation, you need to first grant them the required permissions. For more information, see [Authorize a RAM user to prefetch and refresh resources](https://help.aliyun.com/document_detail/445051.html).
 *
 * @param request RefreshDcdnObjectCachesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshDcdnObjectCachesResponse
 */
RefreshDcdnObjectCachesResponse Client::refreshDcdnObjectCachesWithOptions(const RefreshDcdnObjectCachesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasObjectPath()) {
    query["ObjectPath"] = request.getObjectPath();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.getObjectType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshDcdnObjectCaches"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshDcdnObjectCachesResponse>();
}

/**
 * @summary Refreshes specified objects on points of presence (POPs). The objects can be included in the content of files or URLs. You can refresh multiple URLs in each request.
 *
 * @description *   Dynamic Content Delivery Network (DCDN) supports POST requests in which parameters are sent as a form.
 * *   You can call the [RefreshDcdnObjectCaches](https://help.aliyun.com/document_detail/130620.html) operation to purge content and call the [PreloadDcdnObjectCaches](https://help.aliyun.com/document_detail/130636.html) operation to prefetch content.
 * *   By default, each Alibaba Cloud account can purge content from a maximum of 10,000 URLs and 100 directories including subdirectories per day. If the daily peak bandwidth of your Alibaba Cloud account exceeds 200 Mbit/s, [submit a ticket](https://account.alibabacloud.com/login/login.htm?oauth_callback=https%3A//ticket-intl.console.aliyun.com/%23/ticket/createIndex) to request a quota increase. Alibaba Cloud determines whether to approve your application based on your workloads.
 * *   You can specify up to 1,000 URLs or 100 directories that you want to purge in each request.
 * *   You can specify up to 1,000 URLs that you want to purge per minute for each domain name.
 * *   You can call this operation up to 30 times per second per account.
 * #### [](#)Precautions
 * *   After a purge task is completed, your resources that are cached on points of presence (POPs) are removed. When a POP receives a request for your resources, the request is redirected to the origin server to retrieve the resources. Then, the resources are returned to the client and cached on POPs. If you frequently run purge tasks, more requests are redirected to the origin server for resources. This results in high bandwidth costs and more loads on the origin server.
 * *   A purge task takes effect 5 to 6 minutes after being submitted. If the resource you want to purge has a TTL of less than 5 minutes, you wait for it to expire instead of manually running a purge task.
 * *   To allow RAM users to perform this operation, you need to first grant them the required permissions. For more information, see [Authorize a RAM user to prefetch and refresh resources](https://help.aliyun.com/document_detail/445051.html).
 *
 * @param request RefreshDcdnObjectCachesRequest
 * @return RefreshDcdnObjectCachesResponse
 */
RefreshDcdnObjectCachesResponse Client::refreshDcdnObjectCaches(const RefreshDcdnObjectCachesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshDcdnObjectCachesWithOptions(request, runtime);
}

/**
 * @summary Refreshes the cache that is written by calling the cache operation of EdgeRoutine. You can refresh multiple URLs in each request.
 *
 * @description > *   Dynamic Content Delivery Network (DCDN) supports POST requests in which parameters are sent as a form.
 * > *   Related operation: [RefreshDcdnObjectCaches](https://help.aliyun.com/document_detail/130620.html).
 * > *   By default, each Alibaba Cloud account can purge content from a maxim> um of 10,000 URLs and 100 directories including subdirectories per day.
 * > *   You can specify up to 1,000 URLs or 100 directories that you want to purge in each request.
 * > *   You can specify up to 1,000 URLs that you want to purge per minute for each domain name.
 * > *   You can call this operation up to 30 times per second per account.
 *
 * @param request RefreshErObjectCachesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshErObjectCachesResponse
 */
RefreshErObjectCachesResponse Client::refreshErObjectCachesWithOptions(const RefreshErObjectCachesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasMergeDomainName()) {
    query["MergeDomainName"] = request.getMergeDomainName();
  }

  if (!!request.hasObjectPath()) {
    query["ObjectPath"] = request.getObjectPath();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.getObjectType();
  }

  if (!!request.hasRoutineId()) {
    query["RoutineId"] = request.getRoutineId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshErObjectCaches"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshErObjectCachesResponse>();
}

/**
 * @summary Refreshes the cache that is written by calling the cache operation of EdgeRoutine. You can refresh multiple URLs in each request.
 *
 * @description > *   Dynamic Content Delivery Network (DCDN) supports POST requests in which parameters are sent as a form.
 * > *   Related operation: [RefreshDcdnObjectCaches](https://help.aliyun.com/document_detail/130620.html).
 * > *   By default, each Alibaba Cloud account can purge content from a maxim> um of 10,000 URLs and 100 directories including subdirectories per day.
 * > *   You can specify up to 1,000 URLs or 100 directories that you want to purge in each request.
 * > *   You can specify up to 1,000 URLs that you want to purge per minute for each domain name.
 * > *   You can call this operation up to 30 times per second per account.
 *
 * @param request RefreshErObjectCachesRequest
 * @return RefreshErObjectCachesResponse
 */
RefreshErObjectCachesResponse Client::refreshErObjectCaches(const RefreshErObjectCachesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshErObjectCachesWithOptions(request, runtime);
}

/**
 * @summary ER场景下的cache tag粒度的刷新接口
 *
 * @param request RefreshErObjectCachesByCacheTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshErObjectCachesByCacheTagResponse
 */
RefreshErObjectCachesByCacheTagResponse Client::refreshErObjectCachesByCacheTagWithOptions(const RefreshErObjectCachesByCacheTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCacheTag()) {
    query["CacheTag"] = request.getCacheTag();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasMergeDomainName()) {
    query["MergeDomainName"] = request.getMergeDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshErObjectCachesByCacheTag"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshErObjectCachesByCacheTagResponse>();
}

/**
 * @summary ER场景下的cache tag粒度的刷新接口
 *
 * @param request RefreshErObjectCachesByCacheTagRequest
 * @return RefreshErObjectCachesByCacheTagResponse
 */
RefreshErObjectCachesByCacheTagResponse Client::refreshErObjectCachesByCacheTag(const RefreshErObjectCachesByCacheTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshErObjectCachesByCacheTagWithOptions(request, runtime);
}

/**
 * @summary Rolls back the configurations of an accelerated domain name from the staging environment to the production environment.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request RollbackDcdnStagingConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackDcdnStagingConfigResponse
 */
RollbackDcdnStagingConfigResponse Client::rollbackDcdnStagingConfigWithOptions(const RollbackDcdnStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RollbackDcdnStagingConfig"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackDcdnStagingConfigResponse>();
}

/**
 * @summary Rolls back the configurations of an accelerated domain name from the staging environment to the production environment.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request RollbackDcdnStagingConfigRequest
 * @return RollbackDcdnStagingConfigResponse
 */
RollbackDcdnStagingConfigResponse Client::rollbackDcdnStagingConfig(const RollbackDcdnStagingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackDcdnStagingConfigWithOptions(request, runtime);
}

/**
 * @summary Configures an SSL certificate for a specified domain name.
 *
 * @param request SetDcdnDomainCSRCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDcdnDomainCSRCertificateResponse
 */
SetDcdnDomainCSRCertificateResponse Client::setDcdnDomainCSRCertificateWithOptions(const SetDcdnDomainCSRCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasServerCertificate()) {
    query["ServerCertificate"] = request.getServerCertificate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDcdnDomainCSRCertificate"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDcdnDomainCSRCertificateResponse>();
}

/**
 * @summary Configures an SSL certificate for a specified domain name.
 *
 * @param request SetDcdnDomainCSRCertificateRequest
 * @return SetDcdnDomainCSRCertificateResponse
 */
SetDcdnDomainCSRCertificateResponse Client::setDcdnDomainCSRCertificate(const SetDcdnDomainCSRCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDcdnDomainCSRCertificateWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the ShangMi (SM) certificate for a domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request SetDcdnDomainSMCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDcdnDomainSMCertificateResponse
 */
SetDcdnDomainSMCertificateResponse Client::setDcdnDomainSMCertificateWithOptions(const SetDcdnDomainSMCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertIdentifier()) {
    query["CertIdentifier"] = request.getCertIdentifier();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSSLProtocol()) {
    query["SSLProtocol"] = request.getSSLProtocol();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDcdnDomainSMCertificate"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDcdnDomainSMCertificateResponse>();
}

/**
 * @summary Enables or disables the ShangMi (SM) certificate for a domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request SetDcdnDomainSMCertificateRequest
 * @return SetDcdnDomainSMCertificateResponse
 */
SetDcdnDomainSMCertificateResponse Client::setDcdnDomainSMCertificate(const SetDcdnDomainSMCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDcdnDomainSMCertificateWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the SSL certificate for a domain name and updates certificate details.
 *
 * @param request SetDcdnDomainSSLCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDcdnDomainSSLCertificateResponse
 */
SetDcdnDomainSSLCertificateResponse Client::setDcdnDomainSSLCertificateWithOptions(const SetDcdnDomainSSLCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertId()) {
    query["CertId"] = request.getCertId();
  }

  if (!!request.hasCertName()) {
    query["CertName"] = request.getCertName();
  }

  if (!!request.hasCertRegion()) {
    query["CertRegion"] = request.getCertRegion();
  }

  if (!!request.hasCertType()) {
    query["CertType"] = request.getCertType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSSLPri()) {
    query["SSLPri"] = request.getSSLPri();
  }

  if (!!request.hasSSLProtocol()) {
    query["SSLProtocol"] = request.getSSLProtocol();
  }

  if (!!request.hasSSLPub()) {
    query["SSLPub"] = request.getSSLPub();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDcdnDomainSSLCertificate"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDcdnDomainSSLCertificateResponse>();
}

/**
 * @summary Enables or disables the SSL certificate for a domain name and updates certificate details.
 *
 * @param request SetDcdnDomainSSLCertificateRequest
 * @return SetDcdnDomainSSLCertificateResponse
 */
SetDcdnDomainSSLCertificateResponse Client::setDcdnDomainSSLCertificate(const SetDcdnDomainSSLCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDcdnDomainSSLCertificateWithOptions(request, runtime);
}

/**
 * @summary Sets or modifies the domain name configuration in the canary release environment.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request SetDcdnDomainStagingConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDcdnDomainStagingConfigResponse
 */
SetDcdnDomainStagingConfigResponse Client::setDcdnDomainStagingConfigWithOptions(const SetDcdnDomainStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasFunctions()) {
    query["Functions"] = request.getFunctions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDcdnDomainStagingConfig"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDcdnDomainStagingConfigResponse>();
}

/**
 * @summary Sets or modifies the domain name configuration in the canary release environment.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request SetDcdnDomainStagingConfigRequest
 * @return SetDcdnDomainStagingConfigResponse
 */
SetDcdnDomainStagingConfigResponse Client::setDcdnDomainStagingConfig(const SetDcdnDomainStagingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDcdnDomainStagingConfigWithOptions(request, runtime);
}

/**
 * @summary Blocks or unblocks IP addresses or CIDR blocks.
 *
 * @description >  You can call this operation to block or unblock a large number of IP addresses or CIDR blocks. You can block or unblock up to 1,000 IP addresses or CIDR blocks in a request.
 *
 * @param request SetDcdnFullDomainsBlockIPRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDcdnFullDomainsBlockIPResponse
 */
SetDcdnFullDomainsBlockIPResponse Client::setDcdnFullDomainsBlockIPWithOptions(const SetDcdnFullDomainsBlockIPRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBlockInterval()) {
    body["BlockInterval"] = request.getBlockInterval();
  }

  if (!!request.hasIPList()) {
    body["IPList"] = request.getIPList();
  }

  if (!!request.hasOperationType()) {
    body["OperationType"] = request.getOperationType();
  }

  if (!!request.hasUpdateType()) {
    body["UpdateType"] = request.getUpdateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SetDcdnFullDomainsBlockIP"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDcdnFullDomainsBlockIPResponse>();
}

/**
 * @summary Blocks or unblocks IP addresses or CIDR blocks.
 *
 * @description >  You can call this operation to block or unblock a large number of IP addresses or CIDR blocks. You can block or unblock up to 1,000 IP addresses or CIDR blocks in a request.
 *
 * @param request SetDcdnFullDomainsBlockIPRequest
 * @return SetDcdnFullDomainsBlockIPResponse
 */
SetDcdnFullDomainsBlockIPResponse Client::setDcdnFullDomainsBlockIP(const SetDcdnFullDomainsBlockIPRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDcdnFullDomainsBlockIPWithOptions(request, runtime);
}

/**
 * @summary Configures features for a user.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request SetDcdnUserConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDcdnUserConfigResponse
 */
SetDcdnUserConfigResponse Client::setDcdnUserConfigWithOptions(const SetDcdnUserConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigs()) {
    query["Configs"] = request.getConfigs();
  }

  if (!!request.hasFunctionId()) {
    query["FunctionId"] = request.getFunctionId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDcdnUserConfig"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDcdnUserConfigResponse>();
}

/**
 * @summary Configures features for a user.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request SetDcdnUserConfigRequest
 * @return SetDcdnUserConfigResponse
 */
SetDcdnUserConfigResponse Client::setDcdnUserConfig(const SetDcdnUserConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDcdnUserConfigWithOptions(request, runtime);
}

/**
 * @summary Configures a subdomain for a routine.
 *
 * @description > 
 * *   Each subdomain is globally unique. Resource Access Management (RAM) users cannot create duplicate subdomains.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param tmpReq SetRoutineSubdomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetRoutineSubdomainResponse
 */
SetRoutineSubdomainResponse Client::setRoutineSubdomainWithOptions(const SetRoutineSubdomainRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetRoutineSubdomainShrinkRequest request = SetRoutineSubdomainShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSubdomains()) {
    request.setSubdomainsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSubdomains(), "Subdomains", "json"));
  }

  json body = {};
  if (!!request.hasSubdomainsShrink()) {
    body["Subdomains"] = request.getSubdomainsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SetRoutineSubdomain"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetRoutineSubdomainResponse>();
}

/**
 * @summary Configures a subdomain for a routine.
 *
 * @description > 
 * *   Each subdomain is globally unique. Resource Access Management (RAM) users cannot create duplicate subdomains.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request SetRoutineSubdomainRequest
 * @return SetRoutineSubdomainResponse
 */
SetRoutineSubdomainResponse Client::setRoutineSubdomain(const SetRoutineSubdomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setRoutineSubdomainWithOptions(request, runtime);
}

/**
 * @summary Enables a specified disabled accelerated domain. After the accelerated domain is enabled, the value of the DomainStatus parameter changes to Online for the domain.
 *
 * @description > 
 * *   If an accelerated domain name is in invalid state or your account has an overdue payment, the accelerated domain name cannot be enabled.
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request StartDcdnDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDcdnDomainResponse
 */
StartDcdnDomainResponse Client::startDcdnDomainWithOptions(const StartDcdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartDcdnDomain"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartDcdnDomainResponse>();
}

/**
 * @summary Enables a specified disabled accelerated domain. After the accelerated domain is enabled, the value of the DomainStatus parameter changes to Online for the domain.
 *
 * @description > 
 * *   If an accelerated domain name is in invalid state or your account has an overdue payment, the accelerated domain name cannot be enabled.
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request StartDcdnDomainRequest
 * @return StartDcdnDomainResponse
 */
StartDcdnDomainResponse Client::startDcdnDomain(const StartDcdnDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDcdnDomainWithOptions(request, runtime);
}

/**
 * @summary Enables one or more accelerated domain names. After the accelerated domain names are enabled, the value of the DomainStatus parameter for the domain names changes to Online.
 *
 * @description *   If an accelerated domain name is in invalid state or your account has an overdue payment, the accelerated domain name cannot be enabled.
 * *   You can call this operation up to 20 times per second per account.
 *
 * @param request StartDcdnIpaDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDcdnIpaDomainResponse
 */
StartDcdnIpaDomainResponse Client::startDcdnIpaDomainWithOptions(const StartDcdnIpaDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartDcdnIpaDomain"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartDcdnIpaDomainResponse>();
}

/**
 * @summary Enables one or more accelerated domain names. After the accelerated domain names are enabled, the value of the DomainStatus parameter for the domain names changes to Online.
 *
 * @description *   If an accelerated domain name is in invalid state or your account has an overdue payment, the accelerated domain name cannot be enabled.
 * *   You can call this operation up to 20 times per second per account.
 *
 * @param request StartDcdnIpaDomainRequest
 * @return StartDcdnIpaDomainResponse
 */
StartDcdnIpaDomainResponse Client::startDcdnIpaDomain(const StartDcdnIpaDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDcdnIpaDomainWithOptions(request, runtime);
}

/**
 * @summary Disables a specified accelerated domain. After the accelerated domain is disabled,
 *                   the value of the DomainStatus parameter changes to Offline for the domain.
 *
 * @description > 
 * *   After an accelerated domain is disabled, Dynamic Content Delivery Network (DCDN) retains its information and routes all the requests that are destined for the accelerated domain to the origin server.
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request StopDcdnDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDcdnDomainResponse
 */
StopDcdnDomainResponse Client::stopDcdnDomainWithOptions(const StopDcdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDcdnDomain"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDcdnDomainResponse>();
}

/**
 * @summary Disables a specified accelerated domain. After the accelerated domain is disabled,
 *                   the value of the DomainStatus parameter changes to Offline for the domain.
 *
 * @description > 
 * *   After an accelerated domain is disabled, Dynamic Content Delivery Network (DCDN) retains its information and routes all the requests that are destined for the accelerated domain to the origin server.
 * *   You can call this operation up to 30 times per second per account.
 *
 * @param request StopDcdnDomainRequest
 * @return StopDcdnDomainResponse
 */
StopDcdnDomainResponse Client::stopDcdnDomain(const StopDcdnDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDcdnDomainWithOptions(request, runtime);
}

/**
 * @summary Disables an accelerated domain name. After an accelerated domain name is disabled, the value of the DomainStatus parameter for the domain name changes to Offline.
 *
 * @description > 
 * *   If you disable an accelerated domain, the configurations of the accelerated domain are still retained. The system automatically forwards all the requests that are destined for this domain to the origin.
 * *   You can call this operation up to 20 times per second per account.
 *
 * @param request StopDcdnIpaDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDcdnIpaDomainResponse
 */
StopDcdnIpaDomainResponse Client::stopDcdnIpaDomainWithOptions(const StopDcdnIpaDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDcdnIpaDomain"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDcdnIpaDomainResponse>();
}

/**
 * @summary Disables an accelerated domain name. After an accelerated domain name is disabled, the value of the DomainStatus parameter for the domain name changes to Offline.
 *
 * @description > 
 * *   If you disable an accelerated domain, the configurations of the accelerated domain are still retained. The system automatically forwards all the requests that are destined for this domain to the origin.
 * *   You can call this operation up to 20 times per second per account.
 *
 * @param request StopDcdnIpaDomainRequest
 * @return StopDcdnIpaDomainResponse
 */
StopDcdnIpaDomainResponse Client::stopDcdnIpaDomain(const StopDcdnIpaDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDcdnIpaDomainWithOptions(request, runtime);
}

/**
 * @summary Adds one or more tags to a resource.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request TagDcdnResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagDcdnResourcesResponse
 */
TagDcdnResourcesResponse Client::tagDcdnResourcesWithOptions(const TagDcdnResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagDcdnResources"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagDcdnResourcesResponse>();
}

/**
 * @summary Adds one or more tags to a resource.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request TagDcdnResourcesRequest
 * @return TagDcdnResourcesResponse
 */
TagDcdnResourcesResponse Client::tagDcdnResources(const TagDcdnResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagDcdnResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes one or more tags from a resource.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request UntagDcdnResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagDcdnResourcesResponse
 */
UntagDcdnResourcesResponse Client::untagDcdnResourcesWithOptions(const UntagDcdnResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagDcdnResources"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagDcdnResourcesResponse>();
}

/**
 * @summary Removes one or more tags from a resource.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request UntagDcdnResourcesRequest
 * @return UntagDcdnResourcesResponse
 */
UntagDcdnResourcesResponse Client::untagDcdnResources(const UntagDcdnResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagDcdnResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates a tracking task by task ID.
 *
 * @description > You can call this operation up to three times per second per account.
 *
 * @param request UpdateDcdnDeliverTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDcdnDeliverTaskResponse
 */
UpdateDcdnDeliverTaskResponse Client::updateDcdnDeliverTaskWithOptions(const UpdateDcdnDeliverTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDeliver()) {
    body["Deliver"] = request.getDeliver();
  }

  if (!!request.hasDeliverId()) {
    body["DeliverId"] = request.getDeliverId();
  }

  if (!!request.hasDomainName()) {
    body["DomainName"] = request.getDomainName();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasReports()) {
    body["Reports"] = request.getReports();
  }

  if (!!request.hasSchedule()) {
    body["Schedule"] = request.getSchedule();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDcdnDeliverTask"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDcdnDeliverTaskResponse>();
}

/**
 * @summary Updates a tracking task by task ID.
 *
 * @description > You can call this operation up to three times per second per account.
 *
 * @param request UpdateDcdnDeliverTaskRequest
 * @return UpdateDcdnDeliverTaskResponse
 */
UpdateDcdnDeliverTaskResponse Client::updateDcdnDeliverTask(const UpdateDcdnDeliverTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDcdnDeliverTaskWithOptions(request, runtime);
}

/**
 * @summary Modifies an accelerated domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request UpdateDcdnDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDcdnDomainResponse
 */
UpdateDcdnDomainResponse Client::updateDcdnDomainWithOptions(const UpdateDcdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSources()) {
    query["Sources"] = request.getSources();
  }

  if (!!request.hasTopLevelDomain()) {
    query["TopLevelDomain"] = request.getTopLevelDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDcdnDomain"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDcdnDomainResponse>();
}

/**
 * @summary Modifies an accelerated domain name.
 *
 * @description > You can call this operation up to 30 times per second per account.
 *
 * @param request UpdateDcdnDomainRequest
 * @return UpdateDcdnDomainResponse
 */
UpdateDcdnDomainResponse Client::updateDcdnDomain(const UpdateDcdnDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDcdnDomainWithOptions(request, runtime);
}

/**
 * @summary Modifies a domain name that is accelerated by IP Application Accelerator (IPA).
 *
 * @description >  You can call this operation up to 20 times per second per account.
 *
 * @param request UpdateDcdnIpaDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDcdnIpaDomainResponse
 */
UpdateDcdnIpaDomainResponse Client::updateDcdnIpaDomainWithOptions(const UpdateDcdnIpaDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSources()) {
    query["Sources"] = request.getSources();
  }

  if (!!request.hasTopLevelDomain()) {
    query["TopLevelDomain"] = request.getTopLevelDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDcdnIpaDomain"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDcdnIpaDomainResponse>();
}

/**
 * @summary Modifies a domain name that is accelerated by IP Application Accelerator (IPA).
 *
 * @description >  You can call this operation up to 20 times per second per account.
 *
 * @param request UpdateDcdnIpaDomainRequest
 * @return UpdateDcdnIpaDomainResponse
 */
UpdateDcdnIpaDomainResponse Client::updateDcdnIpaDomain(const UpdateDcdnIpaDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDcdnIpaDomainWithOptions(request, runtime);
}

/**
 * @summary Updates a real-time log delivery project.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request UpdateDcdnSLSRealtimeLogDeliveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDcdnSLSRealtimeLogDeliveryResponse
 */
UpdateDcdnSLSRealtimeLogDeliveryResponse Client::updateDcdnSLSRealtimeLogDeliveryWithOptions(const UpdateDcdnSLSRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataCenter()) {
    body["DataCenter"] = request.getDataCenter();
  }

  if (!!request.hasDomainName()) {
    body["DomainName"] = request.getDomainName();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.getProjectName();
  }

  if (!!request.hasSLSLogStore()) {
    body["SLSLogStore"] = request.getSLSLogStore();
  }

  if (!!request.hasSLSProject()) {
    body["SLSProject"] = request.getSLSProject();
  }

  if (!!request.hasSLSRegion()) {
    body["SLSRegion"] = request.getSLSRegion();
  }

  if (!!request.hasSamplingRate()) {
    body["SamplingRate"] = request.getSamplingRate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDcdnSLSRealtimeLogDelivery"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDcdnSLSRealtimeLogDeliveryResponse>();
}

/**
 * @summary Updates a real-time log delivery project.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request UpdateDcdnSLSRealtimeLogDeliveryRequest
 * @return UpdateDcdnSLSRealtimeLogDeliveryResponse
 */
UpdateDcdnSLSRealtimeLogDeliveryResponse Client::updateDcdnSLSRealtimeLogDelivery(const UpdateDcdnSLSRealtimeLogDeliveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDcdnSLSRealtimeLogDeliveryWithOptions(request, runtime);
}

/**
 * @summary Updates one or more operations reports.
 *
 * @description > You can call this operation up to three times per second per account.
 *
 * @param request UpdateDcdnSubTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDcdnSubTaskResponse
 */
UpdateDcdnSubTaskResponse Client::updateDcdnSubTaskWithOptions(const UpdateDcdnSubTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDomainName()) {
    body["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasReportIds()) {
    body["ReportIds"] = request.getReportIds();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDcdnSubTask"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDcdnSubTaskResponse>();
}

/**
 * @summary Updates one or more operations reports.
 *
 * @description > You can call this operation up to three times per second per account.
 *
 * @param request UpdateDcdnSubTaskRequest
 * @return UpdateDcdnSubTaskResponse
 */
UpdateDcdnSubTaskResponse Client::updateDcdnSubTask(const UpdateDcdnSubTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDcdnSubTaskWithOptions(request, runtime);
}

/**
 * @summary Updates the fields in real-time log entries.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request UpdateDcdnUserRealTimeDeliveryFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDcdnUserRealTimeDeliveryFieldResponse
 */
UpdateDcdnUserRealTimeDeliveryFieldResponse Client::updateDcdnUserRealTimeDeliveryFieldWithOptions(const UpdateDcdnUserRealTimeDeliveryFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasFields()) {
    query["Fields"] = request.getFields();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDcdnUserRealTimeDeliveryField"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDcdnUserRealTimeDeliveryFieldResponse>();
}

/**
 * @summary Updates the fields in real-time log entries.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request UpdateDcdnUserRealTimeDeliveryFieldRequest
 * @return UpdateDcdnUserRealTimeDeliveryFieldResponse
 */
UpdateDcdnUserRealTimeDeliveryFieldResponse Client::updateDcdnUserRealTimeDeliveryField(const UpdateDcdnUserRealTimeDeliveryFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDcdnUserRealTimeDeliveryFieldWithOptions(request, runtime);
}

/**
 * @summary Uploads code to EdgeRoutine (ER).
 *
 * @description > 
 * *   Each time you submit code, a version of the code is generated. You can manage and publish code by version.
 * *   Each routine can retain at most 10 versions. If the upper limit is reached, you must call the DeleteRoutineCodeRevision operation to manually delete versions that are no longer needed before new versions can be saved.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request UploadRoutineCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadRoutineCodeResponse
 */
UploadRoutineCodeResponse Client::uploadRoutineCodeWithOptions(const UploadRoutineCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "UploadRoutineCode"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadRoutineCodeResponse>();
}

/**
 * @summary Uploads code to EdgeRoutine (ER).
 *
 * @description > 
 * *   Each time you submit code, a version of the code is generated. You can manage and publish code by version.
 * *   Each routine can retain at most 10 versions. If the upper limit is reached, you must call the DeleteRoutineCodeRevision operation to manually delete versions that are no longer needed before new versions can be saved.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request UploadRoutineCodeRequest
 * @return UploadRoutineCodeResponse
 */
UploadRoutineCodeResponse Client::uploadRoutineCode(const UploadRoutineCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadRoutineCodeWithOptions(request, runtime);
}

/**
 * @summary Uploads code to a routine for testing.
 *
 * @description > 
 * *   Each time you upload code to a routine, a version is generated. The number of versions is counted by CodeRev. The uploaded code is used only for testing.
 * *   The code is automatically published to a staging environment.
 * *   Each routine can retain at most 10 versions. If the upper limit is reached, you need to call the DeleteRoutineCodeRevision operation to manually delete versions that are no longer needed before new versions can be saved.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request UploadStagingRoutineCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadStagingRoutineCodeResponse
 */
UploadStagingRoutineCodeResponse Client::uploadStagingRoutineCodeWithOptions(const UploadStagingRoutineCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "UploadStagingRoutineCode"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadStagingRoutineCodeResponse>();
}

/**
 * @summary Uploads code to a routine for testing.
 *
 * @description > 
 * *   Each time you upload code to a routine, a version is generated. The number of versions is counted by CodeRev. The uploaded code is used only for testing.
 * *   The code is automatically published to a staging environment.
 * *   Each routine can retain at most 10 versions. If the upper limit is reached, you need to call the DeleteRoutineCodeRevision operation to manually delete versions that are no longer needed before new versions can be saved.
 * *   You can call this operation up to 100 times per second per account.
 *
 * @param request UploadStagingRoutineCodeRequest
 * @return UploadStagingRoutineCodeResponse
 */
UploadStagingRoutineCodeResponse Client::uploadStagingRoutineCode(const UploadStagingRoutineCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadStagingRoutineCodeWithOptions(request, runtime);
}

/**
 * @summary Verifies the ownership of a domain name.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request VerifyDcdnDomainOwnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyDcdnDomainOwnerResponse
 */
VerifyDcdnDomainOwnerResponse Client::verifyDcdnDomainOwnerWithOptions(const VerifyDcdnDomainOwnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasVerifyType()) {
    query["VerifyType"] = request.getVerifyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyDcdnDomainOwner"},
    {"version" , "2018-01-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyDcdnDomainOwnerResponse>();
}

/**
 * @summary Verifies the ownership of a domain name.
 *
 * @description > You can call this operation up to 100 times per second per account.
 *
 * @param request VerifyDcdnDomainOwnerRequest
 * @return VerifyDcdnDomainOwnerResponse
 */
VerifyDcdnDomainOwnerResponse Client::verifyDcdnDomainOwner(const VerifyDcdnDomainOwnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyDcdnDomainOwnerWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Dcdn20180115