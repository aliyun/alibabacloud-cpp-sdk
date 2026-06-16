#include <darabonba/Core.hpp>
#include <alibabacloud/Xtee20210910.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <darabonba/Runtime.hpp>
#include <darabonba/policy/Retry.hpp>
#include <darabonba/Exception.hpp>
#include <darabonba/Convert.hpp>
#include <darabonba/http/Form.hpp>
#include <map>
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
using namespace AlibabaCloud::Credentials::Models;
using namespace AlibabaCloud::Xtee20210910::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Xtee20210910
{

AlibabaCloud::Xtee20210910::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("xtee", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Add Sample Data via CSV
 *
 * @param request AddSampleDataByCsvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSampleDataByCsvResponse
 */
AddSampleDataByCsvResponse Client::addSampleDataByCsvWithOptions(const AddSampleDataByCsvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOssFileName()) {
    query["ossFileName"] = request.getOssFileName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasSampleBatchUuid()) {
    query["sampleBatchUuid"] = request.getSampleBatchUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddSampleDataByCsv"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSampleDataByCsvResponse>();
}

/**
 * @summary Add Sample Data via CSV
 *
 * @param request AddSampleDataByCsvRequest
 * @return AddSampleDataByCsvResponse
 */
AddSampleDataByCsvResponse Client::addSampleDataByCsv(const AddSampleDataByCsvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSampleDataByCsvWithOptions(request, runtime);
}

/**
 * @summary Add list data through a text box for samples
 *
 * @param request AddSampleDataByTextRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSampleDataByTextResponse
 */
AddSampleDataByTextResponse Client::addSampleDataByTextWithOptions(const AddSampleDataByTextRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasDataValue()) {
    query["dataValue"] = request.getDataValue();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasSampleBatchUuid()) {
    query["sampleBatchUuid"] = request.getSampleBatchUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddSampleDataByText"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSampleDataByTextResponse>();
}

/**
 * @summary Add list data through a text box for samples
 *
 * @param request AddSampleDataByTextRequest
 * @return AddSampleDataByTextResponse
 */
AddSampleDataByTextResponse Client::addSampleDataByText(const AddSampleDataByTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSampleDataByTextWithOptions(request, runtime);
}

/**
 * @summary Batch Delete Sample List Data
 *
 * @param request BatchDeleteSampleDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteSampleDataResponse
 */
BatchDeleteSampleDataResponse Client::batchDeleteSampleDataWithOptions(const BatchDeleteSampleDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasUuids()) {
    query["uuids"] = request.getUuids();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchDeleteSampleData"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteSampleDataResponse>();
}

/**
 * @summary Batch Delete Sample List Data
 *
 * @param request BatchDeleteSampleDataRequest
 * @return BatchDeleteSampleDataResponse
 */
BatchDeleteSampleDataResponse Client::batchDeleteSampleData(const BatchDeleteSampleDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteSampleDataWithOptions(request, runtime);
}

/**
 * @summary Performs a variable binding operation.
 *
 * @param request BindVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindVariableResponse
 */
BindVariableResponse Client::bindVariableWithOptions(const BindVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasApiRegionId()) {
    query["apiRegionId"] = request.getApiRegionId();
  }

  if (!!request.hasApiType()) {
    query["apiType"] = request.getApiType();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasDefineId()) {
    query["defineId"] = request.getDefineId();
  }

  if (!!request.hasDefineIds()) {
    query["defineIds"] = request.getDefineIds();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasExceptionValue()) {
    query["exceptionValue"] = request.getExceptionValue();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasOutputField()) {
    query["outputField"] = request.getOutputField();
  }

  if (!!request.hasOutputType()) {
    query["outputType"] = request.getOutputType();
  }

  if (!!request.hasParams()) {
    query["params"] = request.getParams();
  }

  if (!!request.hasParamsList()) {
    query["paramsList"] = request.getParamsList();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasSourceType()) {
    query["sourceType"] = request.getSourceType();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindVariableResponse>();
}

/**
 * @summary Performs a variable binding operation.
 *
 * @param request BindVariableRequest
 * @return BindVariableResponse
 */
BindVariableResponse Client::bindVariable(const BindVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindVariableWithOptions(request, runtime);
}

/**
 * @summary Create a task group
 *
 * @param request CancelSubTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelSubTaskResponse
 */
CancelSubTaskResponse Client::cancelSubTaskWithOptions(const CancelSubTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasSubTaskId()) {
    query["SubTaskId"] = request.getSubTaskId();
  }

  if (!!request.hasTab()) {
    query["Tab"] = request.getTab();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelSubTask"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelSubTaskResponse>();
}

/**
 * @summary Create a task group
 *
 * @param request CancelSubTaskRequest
 * @return CancelSubTaskResponse
 */
CancelSubTaskResponse Client::cancelSubTask(const CancelSubTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelSubTaskWithOptions(request, runtime);
}

/**
 * @summary Policy Replication Lineage Check
 *
 * @param request CheckCopyRuleVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckCopyRuleVariableResponse
 */
CheckCopyRuleVariableResponse Client::checkCopyRuleVariableWithOptions(const CheckCopyRuleVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateType()) {
    query["CreateType"] = request.getCreateType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasSourceRuleId()) {
    query["SourceRuleId"] = request.getSourceRuleId();
  }

  if (!!request.hasSourceRuleIds()) {
    query["SourceRuleIds"] = request.getSourceRuleIds();
  }

  if (!!request.hasTargetEventCode()) {
    query["TargetEventCode"] = request.getTargetEventCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckCopyRuleVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckCopyRuleVariableResponse>();
}

/**
 * @summary Policy Replication Lineage Check
 *
 * @param request CheckCopyRuleVariableRequest
 * @return CheckCopyRuleVariableResponse
 */
CheckCopyRuleVariableResponse Client::checkCopyRuleVariable(const CheckCopyRuleVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkCopyRuleVariableWithOptions(request, runtime);
}

/**
 * @summary Checks whether the number of cumulative variables exceeds the limit.
 *
 * @param request CheckCustVariableLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckCustVariableLimitResponse
 */
CheckCustVariableLimitResponse Client::checkCustVariableLimitWithOptions(const CheckCustVariableLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckCustVariableLimit"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckCustVariableLimitResponse>();
}

/**
 * @summary Checks whether the number of cumulative variables exceeds the limit.
 *
 * @param request CheckCustVariableLimitRequest
 * @return CheckCustVariableLimitResponse
 */
CheckCustVariableLimitResponse Client::checkCustVariableLimit(const CheckCustVariableLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkCustVariableLimitWithOptions(request, runtime);
}

/**
 * @summary Checks whether creating a variable exceeds the upper limit.
 *
 * @param request CheckExpressionVariableLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckExpressionVariableLimitResponse
 */
CheckExpressionVariableLimitResponse Client::checkExpressionVariableLimitWithOptions(const CheckExpressionVariableLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckExpressionVariableLimit"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckExpressionVariableLimitResponse>();
}

/**
 * @summary Checks whether creating a variable exceeds the upper limit.
 *
 * @param request CheckExpressionVariableLimitRequest
 * @return CheckExpressionVariableLimitResponse
 */
CheckExpressionVariableLimitResponse Client::checkExpressionVariableLimit(const CheckExpressionVariableLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkExpressionVariableLimitWithOptions(request, runtime);
}

/**
 * @summary Checks whether the number of fields exceeds the specified limit.
 *
 * @param request CheckFieldLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckFieldLimitResponse
 */
CheckFieldLimitResponse Client::checkFieldLimitWithOptions(const CheckFieldLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasSource()) {
    query["source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckFieldLimit"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckFieldLimitResponse>();
}

/**
 * @summary Checks whether the number of fields exceeds the specified limit.
 *
 * @param request CheckFieldLimitRequest
 * @return CheckFieldLimitResponse
 */
CheckFieldLimitResponse Client::checkFieldLimit(const CheckFieldLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkFieldLimitWithOptions(request, runtime);
}

/**
 * @summary Validate sample name uniqueness
 *
 * @param request CheckSampleNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckSampleNameResponse
 */
CheckSampleNameResponse Client::checkSampleNameWithOptions(const CheckSampleNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasSampleName()) {
    query["SampleName"] = request.getSampleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckSampleName"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckSampleNameResponse>();
}

/**
 * @summary Validate sample name uniqueness
 *
 * @param request CheckSampleNameRequest
 * @return CheckSampleNameResponse
 */
CheckSampleNameResponse Client::checkSampleName(const CheckSampleNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkSampleNameWithOptions(request, runtime);
}

/**
 * @summary Validate the uniqueness of the task group name
 *
 * @param request CheckTaskGroupNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckTaskGroupNameResponse
 */
CheckTaskGroupNameResponse Client::checkTaskGroupNameWithOptions(const CheckTaskGroupNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasTaskGroupName()) {
    query["TaskGroupName"] = request.getTaskGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckTaskGroupName"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckTaskGroupNameResponse>();
}

/**
 * @summary Validate the uniqueness of the task group name
 *
 * @param request CheckTaskGroupNameRequest
 * @return CheckTaskGroupNameResponse
 */
CheckTaskGroupNameResponse Client::checkTaskGroupName(const CheckTaskGroupNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkTaskGroupNameWithOptions(request, runtime);
}

/**
 * @summary Checks variable references.
 *
 * @param request CheckUsageVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckUsageVariableResponse
 */
CheckUsageVariableResponse Client::checkUsageVariableWithOptions(const CheckUsageVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckUsageVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckUsageVariableResponse>();
}

/**
 * @summary Checks variable references.
 *
 * @param request CheckUsageVariableRequest
 * @return CheckUsageVariableResponse
 */
CheckUsageVariableResponse Client::checkUsageVariable(const CheckUsageVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkUsageVariableWithOptions(request, runtime);
}

/**
 * @summary Policy Comparison
 *
 * @param request CompareCopyRuleVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompareCopyRuleVariableResponse
 */
CompareCopyRuleVariableResponse Client::compareCopyRuleVariableWithOptions(const CompareCopyRuleVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateType()) {
    query["CreateType"] = request.getCreateType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasSourceRuleId()) {
    query["SourceRuleId"] = request.getSourceRuleId();
  }

  if (!!request.hasSourceRuleIds()) {
    query["SourceRuleIds"] = request.getSourceRuleIds();
  }

  if (!!request.hasTargetEventCode()) {
    query["TargetEventCode"] = request.getTargetEventCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CompareCopyRuleVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompareCopyRuleVariableResponse>();
}

/**
 * @summary Policy Comparison
 *
 * @param request CompareCopyRuleVariableRequest
 * @return CompareCopyRuleVariableResponse
 */
CompareCopyRuleVariableResponse Client::compareCopyRuleVariable(const CompareCopyRuleVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return compareCopyRuleVariableWithOptions(request, runtime);
}

/**
 * @summary Policy Comparison.
 *
 * @param request CompareRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompareRuleResponse
 */
CompareRuleResponse Client::compareRuleWithOptions(const CompareRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPreviousRuleVersionId()) {
    query["previousRuleVersionId"] = request.getPreviousRuleVersionId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRuleVersionId()) {
    query["ruleVersionId"] = request.getRuleVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CompareRule"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompareRuleResponse>();
}

/**
 * @summary Policy Comparison.
 *
 * @param request CompareRuleRequest
 * @return CompareRuleResponse
 */
CompareRuleResponse Client::compareRule(const CompareRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return compareRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a query condition.
 *
 * @param request CreateAnalysisConditionFavoriteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAnalysisConditionFavoriteResponse
 */
CreateAnalysisConditionFavoriteResponse Client::createAnalysisConditionFavoriteWithOptions(const CreateAnalysisConditionFavoriteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCondition()) {
    query["condition"] = request.getCondition();
  }

  if (!!request.hasEventBeginTime()) {
    query["eventBeginTime"] = request.getEventBeginTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasEventEndTime()) {
    query["eventEndTime"] = request.getEventEndTime();
  }

  if (!!request.hasFieldName()) {
    query["fieldName"] = request.getFieldName();
  }

  if (!!request.hasFieldValue()) {
    query["fieldValue"] = request.getFieldValue();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAnalysisConditionFavorite"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAnalysisConditionFavoriteResponse>();
}

/**
 * @summary Creates a query condition.
 *
 * @param request CreateAnalysisConditionFavoriteRequest
 * @return CreateAnalysisConditionFavoriteResponse
 */
CreateAnalysisConditionFavoriteResponse Client::createAnalysisConditionFavorite(const CreateAnalysisConditionFavoriteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAnalysisConditionFavoriteWithOptions(request, runtime);
}

/**
 * @summary Creates an export task.
 *
 * @param request CreateAnalysisExportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAnalysisExportTaskResponse
 */
CreateAnalysisExportTaskResponse Client::createAnalysisExportTaskWithOptions(const CreateAnalysisExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasColumns()) {
    query["columns"] = request.getColumns();
  }

  if (!!request.hasConditions()) {
    query["conditions"] = request.getConditions();
  }

  if (!!request.hasEventBeginTime()) {
    query["eventBeginTime"] = request.getEventBeginTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasEventEndTime()) {
    query["eventEndTime"] = request.getEventEndTime();
  }

  if (!!request.hasFieldName()) {
    query["fieldName"] = request.getFieldName();
  }

  if (!!request.hasFieldValue()) {
    query["fieldValue"] = request.getFieldValue();
  }

  if (!!request.hasFileFormat()) {
    query["fileFormat"] = request.getFileFormat();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasScope()) {
    query["scope"] = request.getScope();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAnalysisExportTask"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAnalysisExportTaskResponse>();
}

/**
 * @summary Creates an export task.
 *
 * @param request CreateAnalysisExportTaskRequest
 * @return CreateAnalysisExportTaskResponse
 */
CreateAnalysisExportTaskResponse Client::createAnalysisExportTask(const CreateAnalysisExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAnalysisExportTaskWithOptions(request, runtime);
}

/**
 * @summary Create an AppKey.
 *
 * @param request CreateAppKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppKeyResponse
 */
CreateAppKeyResponse Client::createAppKeyWithOptions(const CreateAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppKey"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppKeyResponse>();
}

/**
 * @summary Create an AppKey.
 *
 * @param request CreateAppKeyRequest
 * @return CreateAppKeyResponse
 */
CreateAppKeyResponse Client::createAppKey(const CreateAppKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppKeyWithOptions(request, runtime);
}

/**
 * @summary Creates a cumulative variable.
 *
 * @param request CreateCustVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustVariableResponse
 */
CreateCustVariableResponse Client::createCustVariableWithOptions(const CreateCustVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCondition()) {
    query["condition"] = request.getCondition();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasHistoryValueType()) {
    query["historyValueType"] = request.getHistoryValueType();
  }

  if (!!request.hasObject()) {
    query["object"] = request.getObject();
  }

  if (!!request.hasOutputs()) {
    query["outputs"] = request.getOutputs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasSubject()) {
    query["subject"] = request.getSubject();
  }

  if (!!request.hasTimeType()) {
    query["timeType"] = request.getTimeType();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.getTitle();
  }

  if (!!request.hasTwCount()) {
    query["twCount"] = request.getTwCount();
  }

  if (!!request.hasVelocityFC()) {
    query["velocityFC"] = request.getVelocityFC();
  }

  if (!!request.hasVelocityTW()) {
    query["velocityTW"] = request.getVelocityTW();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustVariableResponse>();
}

/**
 * @summary Creates a cumulative variable.
 *
 * @param request CreateCustVariableRequest
 * @return CreateCustVariableResponse
 */
CreateCustVariableResponse Client::createCustVariable(const CreateCustVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustVariableWithOptions(request, runtime);
}

/**
 * @summary Creates a data source.
 *
 * @param request CreateDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataSourceResponse
 */
CreateDataSourceResponse Client::createDataSourceWithOptions(const CreateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasOssKey()) {
    query["ossKey"] = request.getOssKey();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataSource"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataSourceResponse>();
}

/**
 * @summary Creates a data source.
 *
 * @param request CreateDataSourceRequest
 * @return CreateDataSourceResponse
 */
CreateDataSourceResponse Client::createDataSource(const CreateDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataSourceWithOptions(request, runtime);
}

/**
 * @summary Creates an event.
 *
 * @param request CreateEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEventResponse
 */
CreateEventResponse Client::createEventWithOptions(const CreateEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasEventName()) {
    query["eventName"] = request.getEventName();
  }

  if (!!request.hasInputFieldsStr()) {
    query["inputFieldsStr"] = request.getInputFieldsStr();
  }

  if (!!request.hasMemo()) {
    query["memo"] = request.getMemo();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTemplateCode()) {
    query["templateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTemplateName()) {
    query["templateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateType()) {
    query["templateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEvent"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEventResponse>();
}

/**
 * @summary Creates an event.
 *
 * @param request CreateEventRequest
 * @return CreateEventResponse
 */
CreateEventResponse Client::createEvent(const CreateEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEventWithOptions(request, runtime);
}

/**
 * @summary Creates a custom variable.
 *
 * @param request CreateExpressionVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExpressionVariableResponse
 */
CreateExpressionVariableResponse Client::createExpressionVariableWithOptions(const CreateExpressionVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasExpression()) {
    query["expression"] = request.getExpression();
  }

  if (!!request.hasExpressionTitle()) {
    query["expressionTitle"] = request.getExpressionTitle();
  }

  if (!!request.hasExpressionVariable()) {
    query["expressionVariable"] = request.getExpressionVariable();
  }

  if (!!request.hasOutlier()) {
    query["outlier"] = request.getOutlier();
  }

  if (!!request.hasOutputs()) {
    query["outputs"] = request.getOutputs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateExpressionVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExpressionVariableResponse>();
}

/**
 * @summary Creates a custom variable.
 *
 * @param request CreateExpressionVariableRequest
 * @return CreateExpressionVariableResponse
 */
CreateExpressionVariableResponse Client::createExpressionVariable(const CreateExpressionVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createExpressionVariableWithOptions(request, runtime);
}

/**
 * @summary Creates a field.
 *
 * @param request CreateFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFieldResponse
 */
CreateFieldResponse Client::createFieldWithOptions(const CreateFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasClassify()) {
    query["classify"] = request.getClassify();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasEnumData()) {
    query["enumData"] = request.getEnumData();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasSource()) {
    query["source"] = request.getSource();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.getTitle();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateField"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFieldResponse>();
}

/**
 * @summary Creates a field.
 *
 * @param request CreateFieldRequest
 * @return CreateFieldResponse
 */
CreateFieldResponse Client::createField(const CreateFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFieldWithOptions(request, runtime);
}

/**
 * @summary Create a sample record for the customer.
 *
 * @param request CreateForeignPocSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateForeignPocSampleResponse
 */
CreateForeignPocSampleResponse Client::createForeignPocSampleWithOptions(const CreateForeignPocSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFile()) {
    query["File"] = request.getFile();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasSampleName()) {
    query["SampleName"] = request.getSampleName();
  }

  if (!!request.hasTab()) {
    query["Tab"] = request.getTab();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateForeignPocSample"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateForeignPocSampleResponse>();
}

/**
 * @summary Create a sample record for the customer.
 *
 * @param request CreateForeignPocSampleRequest
 * @return CreateForeignPocSampleResponse
 */
CreateForeignPocSampleResponse Client::createForeignPocSample(const CreateForeignPocSampleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createForeignPocSampleWithOptions(request, runtime);
}

CreateForeignPocSampleResponse Client::createForeignPocSampleAdvance(const CreateForeignPocSampleAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "xtee"},
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
  CreateForeignPocSampleRequest createForeignPocSampleReq = CreateForeignPocSampleRequest();
  Utils::Utils::convert(request, createForeignPocSampleReq);
  if (!!request.hasFileObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getFileObject()},
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
    createForeignPocSampleReq.setFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  CreateForeignPocSampleResponse createForeignPocSampleResp = createForeignPocSampleWithOptions(createForeignPocSampleReq, runtime);
  return createForeignPocSampleResp;
}

/**
 * @summary Submit Task
 *
 * @param request CreateModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelResponse
 */
CreateModelResponse Client::createModelWithOptions(const CreateModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucId()) {
    query["BucId"] = request.getBucId();
  }

  if (!!request.hasCounts()) {
    query["Counts"] = request.getCounts();
  }

  if (!!request.hasFileMD5()) {
    query["FileMD5"] = request.getFileMD5();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasModelScene()) {
    query["ModelScene"] = request.getModelScene();
  }

  if (!!request.hasParameterNum()) {
    query["ParameterNum"] = request.getParameterNum();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasUserLocalFileName()) {
    query["UserLocalFileName"] = request.getUserLocalFileName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateModel"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelResponse>();
}

/**
 * @summary Submit Task
 *
 * @param request CreateModelRequest
 * @return CreateModelResponse
 */
CreateModelResponse Client::createModel(const CreateModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createModelWithOptions(request, runtime);
}

/**
 * @summary Creates a POC.
 *
 * @param request CreatePocEvRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePocEvResponse
 */
CreatePocEvResponse Client::createPocEvWithOptions(const CreatePocEvRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDateFormat()) {
    query["DateFormat"] = request.getDateFormat();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasFileType()) {
    query["FileType"] = request.getFileType();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  if (!!request.hasServiceName()) {
    query["ServiceName"] = request.getServiceName();
  }

  if (!!request.hasTab()) {
    query["Tab"] = request.getTab();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePocEv"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePocEvResponse>();
}

/**
 * @summary Creates a POC.
 *
 * @param request CreatePocEvRequest
 * @return CreatePocEvResponse
 */
CreatePocEvResponse Client::createPocEv(const CreatePocEvRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPocEvWithOptions(request, runtime);
}

/**
 * @summary Create a sample record
 *
 * @param request CreatePocSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePocSampleResponse
 */
CreatePocSampleResponse Client::createPocSampleWithOptions(const CreatePocSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasSampleName()) {
    query["SampleName"] = request.getSampleName();
  }

  if (!!request.hasTab()) {
    query["Tab"] = request.getTab();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePocSample"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePocSampleResponse>();
}

/**
 * @summary Create a sample record
 *
 * @param request CreatePocSampleRequest
 * @return CreatePocSampleResponse
 */
CreatePocSampleResponse Client::createPocSample(const CreatePocSampleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPocSampleWithOptions(request, runtime);
}

/**
 * @summary Creates a custom query variable.
 *
 * @param request CreateQueryVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQueryVariableResponse
 */
CreateQueryVariableResponse Client::createQueryVariableWithOptions(const CreateQueryVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasDataSourceCode()) {
    query["dataSourceCode"] = request.getDataSourceCode();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasExpression()) {
    query["expression"] = request.getExpression();
  }

  if (!!request.hasExpressionTitle()) {
    query["expressionTitle"] = request.getExpressionTitle();
  }

  if (!!request.hasExpressionVariable()) {
    query["expressionVariable"] = request.getExpressionVariable();
  }

  if (!!request.hasOutlier()) {
    query["outlier"] = request.getOutlier();
  }

  if (!!request.hasOutputs()) {
    query["outputs"] = request.getOutputs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateQueryVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQueryVariableResponse>();
}

/**
 * @summary Creates a custom query variable.
 *
 * @param request CreateQueryVariableRequest
 * @return CreateQueryVariableResponse
 */
CreateQueryVariableResponse Client::createQueryVariable(const CreateQueryVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQueryVariableWithOptions(request, runtime);
}

/**
 * @summary Creates a recommended event policy.
 *
 * @param request CreateRecommendEventRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecommendEventRuleResponse
 */
CreateRecommendEventRuleResponse Client::createRecommendEventRuleWithOptions(const CreateRecommendEventRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasEventName()) {
    query["eventName"] = request.getEventName();
  }

  if (!!request.hasRecommendRuleIdsStr()) {
    query["recommendRuleIdsStr"] = request.getRecommendRuleIdsStr();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRecommendEventRule"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecommendEventRuleResponse>();
}

/**
 * @summary Creates a recommended event policy.
 *
 * @param request CreateRecommendEventRuleRequest
 * @return CreateRecommendEventRuleResponse
 */
CreateRecommendEventRuleResponse Client::createRecommendEventRule(const CreateRecommendEventRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRecommendEventRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a recommendation task.
 *
 * @param request CreateRecommendTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecommendTaskResponse
 */
CreateRecommendTaskResponse Client::createRecommendTaskWithOptions(const CreateRecommendTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasSampleId()) {
    query["sampleId"] = request.getSampleId();
  }

  if (!!request.hasVariablesStr()) {
    query["variablesStr"] = request.getVariablesStr();
  }

  if (!!request.hasVelocitiesStr()) {
    query["velocitiesStr"] = request.getVelocitiesStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRecommendTask"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecommendTaskResponse>();
}

/**
 * @summary Creates a recommendation task.
 *
 * @param request CreateRecommendTaskRequest
 * @return CreateRecommendTaskResponse
 */
CreateRecommendTaskResponse Client::createRecommendTask(const CreateRecommendTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRecommendTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a policy and version.
 *
 * @param request CreateRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRuleResponse
 */
CreateRuleResponse Client::createRuleWithOptions(const CreateRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasConsoleRuleId()) {
    query["consoleRuleId"] = request.getConsoleRuleId();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasEventName()) {
    query["eventName"] = request.getEventName();
  }

  if (!!request.hasLogicExpression()) {
    query["logicExpression"] = request.getLogicExpression();
  }

  if (!!request.hasMemo()) {
    query["memo"] = request.getMemo();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRuleActions()) {
    query["ruleActions"] = request.getRuleActions();
  }

  if (!!request.hasRuleBody()) {
    query["ruleBody"] = request.getRuleBody();
  }

  if (!!request.hasRuleExpressions()) {
    query["ruleExpressions"] = request.getRuleExpressions();
  }

  if (!!request.hasRuleName()) {
    query["ruleName"] = request.getRuleName();
  }

  if (!!request.hasRuleStatus()) {
    query["ruleStatus"] = request.getRuleStatus();
  }

  if (!!request.hasRuleType()) {
    query["ruleType"] = request.getRuleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRule"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRuleResponse>();
}

/**
 * @summary Creates a policy and version.
 *
 * @param request CreateRuleRequest
 * @return CreateRuleResponse
 */
CreateRuleResponse Client::createRule(const CreateRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRuleWithOptions(request, runtime);
}

/**
 * @summary Adds a data sample.
 *
 * @param request CreateSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSampleResponse
 */
CreateSampleResponse Client::createSampleWithOptions(const CreateSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasClientFileName()) {
    query["clientFileName"] = request.getClientFileName();
  }

  if (!!request.hasClientPath()) {
    query["clientPath"] = request.getClientPath();
  }

  if (!!request.hasFileType()) {
    query["fileType"] = request.getFileType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasSampleTag()) {
    query["sampleTag"] = request.getSampleTag();
  }

  if (!!request.hasSampleType()) {
    query["sampleType"] = request.getSampleType();
  }

  if (!!request.hasSampleValues()) {
    query["sampleValues"] = request.getSampleValues();
  }

  if (!!request.hasUploadType()) {
    query["uploadType"] = request.getUploadType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSample"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSampleResponse>();
}

/**
 * @summary Adds a data sample.
 *
 * @param request CreateSampleRequest
 * @return CreateSampleResponse
 */
CreateSampleResponse Client::createSample(const CreateSampleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSampleWithOptions(request, runtime);
}

/**
 * @summary Creates a sample batch for a single API at the user level.
 *
 * @param request CreateSampleApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSampleApiResponse
 */
CreateSampleApiResponse Client::createSampleApiWithOptions(const CreateSampleApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataType()) {
    query["DataType"] = request.getDataType();
  }

  if (!!request.hasDataValue()) {
    query["DataValue"] = request.getDataValue();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasSampleBatchType()) {
    query["SampleBatchType"] = request.getSampleBatchType();
  }

  if (!!request.hasServiceList()) {
    query["ServiceList"] = request.getServiceList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSampleApi"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSampleApiResponse>();
}

/**
 * @summary Creates a sample batch for a single API at the user level.
 *
 * @param request CreateSampleApiRequest
 * @return CreateSampleApiResponse
 */
CreateSampleApiResponse Client::createSampleApi(const CreateSampleApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSampleApiWithOptions(request, runtime);
}

/**
 * @summary Create Sample Batch
 *
 * @param request CreateSampleBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSampleBatchResponse
 */
CreateSampleBatchResponse Client::createSampleBatchWithOptions(const CreateSampleBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBatchName()) {
    query["batchName"] = request.getBatchName();
  }

  if (!!request.hasDataType()) {
    query["dataType"] = request.getDataType();
  }

  if (!!request.hasDataValue()) {
    query["dataValue"] = request.getDataValue();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasOssFileName()) {
    query["ossFileName"] = request.getOssFileName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasSampleBatchType()) {
    query["sampleBatchType"] = request.getSampleBatchType();
  }

  if (!!request.hasServiceList()) {
    query["serviceList"] = request.getServiceList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSampleBatch"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSampleBatchResponse>();
}

/**
 * @summary Create Sample Batch
 *
 * @param request CreateSampleBatchRequest
 * @return CreateSampleBatchResponse
 */
CreateSampleBatchResponse Client::createSampleBatch(const CreateSampleBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSampleBatchWithOptions(request, runtime);
}

/**
 * @summary Creates sample data.
 *
 * @param request CreateSampleDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSampleDataResponse
 */
CreateSampleDataResponse Client::createSampleDataWithOptions(const CreateSampleDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasEncryptType()) {
    query["encryptType"] = request.getEncryptType();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRiskValue()) {
    query["riskValue"] = request.getRiskValue();
  }

  if (!!request.hasScene()) {
    query["scene"] = request.getScene();
  }

  if (!!request.hasStorePath()) {
    query["storePath"] = request.getStorePath();
  }

  if (!!request.hasStoreType()) {
    query["storeType"] = request.getStoreType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSampleData"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSampleDataResponse>();
}

/**
 * @summary Creates sample data.
 *
 * @param request CreateSampleDataRequest
 * @return CreateSampleDataResponse
 */
CreateSampleDataResponse Client::createSampleData(const CreateSampleDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSampleDataWithOptions(request, runtime);
}

/**
 * @summary Creates a task.
 *
 * @param request CreateSimulationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSimulationTaskResponse
 */
CreateSimulationTaskResponse Client::createSimulationTaskWithOptions(const CreateSimulationTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasDataSourceConfig()) {
    query["dataSourceConfig"] = request.getDataSourceConfig();
  }

  if (!!request.hasDataSourceType()) {
    query["dataSourceType"] = request.getDataSourceType();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasFiltersStr()) {
    query["filtersStr"] = request.getFiltersStr();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRulesStr()) {
    query["rulesStr"] = request.getRulesStr();
  }

  if (!!request.hasRunTask()) {
    query["runTask"] = request.getRunTask();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  if (!!request.hasTaskName()) {
    query["taskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSimulationTask"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSimulationTaskResponse>();
}

/**
 * @summary Creates a task.
 *
 * @param request CreateSimulationTaskRequest
 * @return CreateSimulationTaskResponse
 */
CreateSimulationTaskResponse Client::createSimulationTask(const CreateSimulationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSimulationTaskWithOptions(request, runtime);
}

/**
 * @summary Cancels a subtask.
 *
 * @param request CreateTaskGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTaskGroupResponse
 */
CreateTaskGroupResponse Client::createTaskGroupWithOptions(const CreateTaskGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasSampleIds()) {
    query["SampleIds"] = request.getSampleIds();
  }

  if (!!request.hasScenes()) {
    query["Scenes"] = request.getScenes();
  }

  if (!!request.hasServiceCodes()) {
    query["ServiceCodes"] = request.getServiceCodes();
  }

  if (!!request.hasServiceList()) {
    query["ServiceList"] = request.getServiceList();
  }

  if (!!request.hasServiceNames()) {
    query["ServiceNames"] = request.getServiceNames();
  }

  if (!!request.hasTab()) {
    query["Tab"] = request.getTab();
  }

  if (!!request.hasTaskGroupName()) {
    query["TaskGroupName"] = request.getTaskGroupName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTaskGroup"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTaskGroupResponse>();
}

/**
 * @summary Cancels a subtask.
 *
 * @param request CreateTaskGroupRequest
 * @return CreateTaskGroupResponse
 */
CreateTaskGroupResponse Client::createTaskGroup(const CreateTaskGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTaskGroupWithOptions(request, runtime);
}

/**
 * @summary Policy Replication
 *
 * @param request DeepCopyRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeepCopyRuleResponse
 */
DeepCopyRuleResponse Client::deepCopyRuleWithOptions(const DeepCopyRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateType()) {
    query["CreateType"] = request.getCreateType();
  }

  if (!!request.hasCustInsertInfo()) {
    query["CustInsertInfo"] = request.getCustInsertInfo();
  }

  if (!!request.hasCustWriteInfo()) {
    query["CustWriteInfo"] = request.getCustWriteInfo();
  }

  if (!!request.hasExpressionVariableInfo()) {
    query["ExpressionVariableInfo"] = request.getExpressionVariableInfo();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasQueryExpressionVariableInfo()) {
    query["QueryExpressionVariableInfo"] = request.getQueryExpressionVariableInfo();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasSourceRuleId()) {
    query["SourceRuleId"] = request.getSourceRuleId();
  }

  if (!!request.hasSourceRuleIds()) {
    query["SourceRuleIds"] = request.getSourceRuleIds();
  }

  if (!!request.hasTargetEventCode()) {
    query["TargetEventCode"] = request.getTargetEventCode();
  }

  if (!!request.hasTargetEventName()) {
    query["TargetEventName"] = request.getTargetEventName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeepCopyRule"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeepCopyRuleResponse>();
}

/**
 * @summary Policy Replication
 *
 * @param request DeepCopyRuleRequest
 * @return DeepCopyRuleResponse
 */
DeepCopyRuleResponse Client::deepCopyRule(const DeepCopyRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deepCopyRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a query condition.
 *
 * @param request DeleteAnalysisConditionFavoriteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAnalysisConditionFavoriteResponse
 */
DeleteAnalysisConditionFavoriteResponse Client::deleteAnalysisConditionFavoriteWithOptions(const DeleteAnalysisConditionFavoriteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAnalysisConditionFavorite"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAnalysisConditionFavoriteResponse>();
}

/**
 * @summary Deletes a query condition.
 *
 * @param request DeleteAnalysisConditionFavoriteRequest
 * @return DeleteAnalysisConditionFavoriteResponse
 */
DeleteAnalysisConditionFavoriteResponse Client::deleteAnalysisConditionFavorite(const DeleteAnalysisConditionFavoriteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAnalysisConditionFavoriteWithOptions(request, runtime);
}

/**
 * @summary Deletes a bypass event.
 *
 * @param request DeleteByPassShuntEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteByPassShuntEventResponse
 */
DeleteByPassShuntEventResponse Client::deleteByPassShuntEventWithOptions(const DeleteByPassShuntEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEventId()) {
    query["eventId"] = request.getEventId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteByPassShuntEvent"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteByPassShuntEventResponse>();
}

/**
 * @summary Deletes a bypass event.
 *
 * @param request DeleteByPassShuntEventRequest
 * @return DeleteByPassShuntEventResponse
 */
DeleteByPassShuntEventResponse Client::deleteByPassShuntEvent(const DeleteByPassShuntEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteByPassShuntEventWithOptions(request, runtime);
}

/**
 * @summary Deletes a cumulative variable.
 *
 * @param request DeleteCustVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustVariableResponse
 */
DeleteCustVariableResponse Client::deleteCustVariableWithOptions(const DeleteCustVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasDataVersion()) {
    query["dataVersion"] = request.getDataVersion();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasVariableId()) {
    query["variableId"] = request.getVariableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustVariableResponse>();
}

/**
 * @summary Deletes a cumulative variable.
 *
 * @param request DeleteCustVariableRequest
 * @return DeleteCustVariableResponse
 */
DeleteCustVariableResponse Client::deleteCustVariable(const DeleteCustVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustVariableWithOptions(request, runtime);
}

/**
 * @summary Deletes a data source.
 *
 * @param request DeleteDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataSourceResponse
 */
DeleteDataSourceResponse Client::deleteDataSourceWithOptions(const DeleteDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataSource"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataSourceResponse>();
}

/**
 * @summary Deletes a data source.
 *
 * @param request DeleteDataSourceRequest
 * @return DeleteDataSourceResponse
 */
DeleteDataSourceResponse Client::deleteDataSource(const DeleteDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataSourceWithOptions(request, runtime);
}

/**
 * @summary Delete Event Field
 *
 * @param request DeleteEventFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEventFieldResponse
 */
DeleteEventFieldResponse Client::deleteEventFieldWithOptions(const DeleteEventFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasFieldName()) {
    query["fieldName"] = request.getFieldName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEventField"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEventFieldResponse>();
}

/**
 * @summary Delete Event Field
 *
 * @param request DeleteEventFieldRequest
 * @return DeleteEventFieldResponse
 */
DeleteEventFieldResponse Client::deleteEventField(const DeleteEventFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEventFieldWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom variable.
 *
 * @param request DeleteExpressionVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExpressionVariableResponse
 */
DeleteExpressionVariableResponse Client::deleteExpressionVariableWithOptions(const DeleteExpressionVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasDataVersion()) {
    query["dataVersion"] = request.getDataVersion();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteExpressionVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExpressionVariableResponse>();
}

/**
 * @summary Deletes a custom variable.
 *
 * @param request DeleteExpressionVariableRequest
 * @return DeleteExpressionVariableResponse
 */
DeleteExpressionVariableResponse Client::deleteExpressionVariable(const DeleteExpressionVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteExpressionVariableWithOptions(request, runtime);
}

/**
 * @summary Deletes a field.
 *
 * @param request DeleteFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFieldResponse
 */
DeleteFieldResponse Client::deleteFieldWithOptions(const DeleteFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteField"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFieldResponse>();
}

/**
 * @summary Deletes a field.
 *
 * @param request DeleteFieldRequest
 * @return DeleteFieldResponse
 */
DeleteFieldResponse Client::deleteField(const DeleteFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFieldWithOptions(request, runtime);
}

/**
 * @summary Deletes a list.
 *
 * @param request DeleteNameListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNameListResponse
 */
DeleteNameListResponse Client::deleteNameListWithOptions(const DeleteNameListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasIds()) {
    query["ids"] = request.getIds();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNameList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNameListResponse>();
}

/**
 * @summary Deletes a list.
 *
 * @param request DeleteNameListRequest
 * @return DeleteNameListResponse
 */
DeleteNameListResponse Client::deleteNameList(const DeleteNameListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNameListWithOptions(request, runtime);
}

/**
 * @summary Deletes list variable data.
 *
 * @param request DeleteNameListDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNameListDataResponse
 */
DeleteNameListDataResponse Client::deleteNameListDataWithOptions(const DeleteNameListDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasVariableId()) {
    query["variableId"] = request.getVariableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNameListData"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNameListDataResponse>();
}

/**
 * @summary Deletes list variable data.
 *
 * @param request DeleteNameListDataRequest
 * @return DeleteNameListDataResponse
 */
DeleteNameListDataResponse Client::deleteNameListData(const DeleteNameListDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNameListDataWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom query variable.
 *
 * @param request DeleteQueryVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQueryVariableResponse
 */
DeleteQueryVariableResponse Client::deleteQueryVariableWithOptions(const DeleteQueryVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteQueryVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQueryVariableResponse>();
}

/**
 * @summary Deletes a custom query variable.
 *
 * @param request DeleteQueryVariableRequest
 * @return DeleteQueryVariableResponse
 */
DeleteQueryVariableResponse Client::deleteQueryVariable(const DeleteQueryVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQueryVariableWithOptions(request, runtime);
}

/**
 * @summary Deletes a policy version.
 *
 * @param request DeleteRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRuleResponse
 */
DeleteRuleResponse Client::deleteRuleWithOptions(const DeleteRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasConsoleRuleId()) {
    query["consoleRuleId"] = request.getConsoleRuleId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.getRuleId();
  }

  if (!!request.hasRuleVersionId()) {
    query["ruleVersionId"] = request.getRuleVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRule"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRuleResponse>();
}

/**
 * @summary Deletes a policy version.
 *
 * @param request DeleteRuleRequest
 * @return DeleteRuleResponse
 */
DeleteRuleResponse Client::deleteRule(const DeleteRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRuleWithOptions(request, runtime);
}

/**
 * @summary Delete sample
 *
 * @param request DeleteSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSampleResponse
 */
DeleteSampleResponse Client::deleteSampleWithOptions(const DeleteSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasSampleId()) {
    query["SampleId"] = request.getSampleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSample"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSampleResponse>();
}

/**
 * @summary Delete sample
 *
 * @param request DeleteSampleRequest
 * @return DeleteSampleResponse
 */
DeleteSampleResponse Client::deleteSample(const DeleteSampleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSampleWithOptions(request, runtime);
}

/**
 * @summary Deletes samples in batches.
 *
 * @param request DeleteSampleBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSampleBatchResponse
 */
DeleteSampleBatchResponse Client::deleteSampleBatchWithOptions(const DeleteSampleBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasIds()) {
    query["ids"] = request.getIds();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasVersions()) {
    query["versions"] = request.getVersions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSampleBatch"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSampleBatchResponse>();
}

/**
 * @summary Deletes samples in batches.
 *
 * @param request DeleteSampleBatchRequest
 * @return DeleteSampleBatchResponse
 */
DeleteSampleBatchResponse Client::deleteSampleBatch(const DeleteSampleBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSampleBatchWithOptions(request, runtime);
}

/**
 * @summary Sample Deletion
 *
 * @param request DeleteSampleBatchMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSampleBatchMetaResponse
 */
DeleteSampleBatchMetaResponse Client::deleteSampleBatchMetaWithOptions(const DeleteSampleBatchMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBatchUuid()) {
    query["batchUuid"] = request.getBatchUuid();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSampleBatchMeta"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSampleBatchMetaResponse>();
}

/**
 * @summary Sample Deletion
 *
 * @param request DeleteSampleBatchMetaRequest
 * @return DeleteSampleBatchMetaResponse
 */
DeleteSampleBatchMetaResponse Client::deleteSampleBatchMeta(const DeleteSampleBatchMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSampleBatchMetaWithOptions(request, runtime);
}

/**
 * @summary Deletes sample data.
 *
 * @param request DeleteSampleDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSampleDataResponse
 */
DeleteSampleDataResponse Client::deleteSampleDataWithOptions(const DeleteSampleDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSampleData"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSampleDataResponse>();
}

/**
 * @summary Deletes sample data.
 *
 * @param request DeleteSampleDataRequest
 * @return DeleteSampleDataResponse
 */
DeleteSampleDataResponse Client::deleteSampleData(const DeleteSampleDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSampleDataWithOptions(request, runtime);
}

/**
 * @summary Delete Custom System Variable
 *
 * @param request DeleteSelfBindVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSelfBindVariableResponse
 */
DeleteSelfBindVariableResponse Client::deleteSelfBindVariableWithOptions(const DeleteSelfBindVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSelfBindVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSelfBindVariableResponse>();
}

/**
 * @summary Delete Custom System Variable
 *
 * @param request DeleteSelfBindVariableRequest
 * @return DeleteSelfBindVariableResponse
 */
DeleteSelfBindVariableResponse Client::deleteSelfBindVariable(const DeleteSelfBindVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSelfBindVariableWithOptions(request, runtime);
}

/**
 * @summary Retrieves left-hand variables for advanced queries.
 *
 * @param request DescribeAdvanceSearchLeftVariableListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdvanceSearchLeftVariableListResponse
 */
DescribeAdvanceSearchLeftVariableListResponse Client::describeAdvanceSearchLeftVariableListWithOptions(const DescribeAdvanceSearchLeftVariableListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasScene()) {
    query["scene"] = request.getScene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAdvanceSearchLeftVariableList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdvanceSearchLeftVariableListResponse>();
}

/**
 * @summary Retrieves left-hand variables for advanced queries.
 *
 * @param request DescribeAdvanceSearchLeftVariableListRequest
 * @return DescribeAdvanceSearchLeftVariableListResponse
 */
DescribeAdvanceSearchLeftVariableListResponse Client::describeAdvanceSearchLeftVariableList(const DescribeAdvanceSearchLeftVariableListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdvanceSearchLeftVariableListWithOptions(request, runtime);
}

/**
 * @summary Performs an advanced query for event analysis.
 *
 * @param request DescribeAdvanceSearchPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdvanceSearchPageListResponse
 */
DescribeAdvanceSearchPageListResponse Client::describeAdvanceSearchPageListWithOptions(const DescribeAdvanceSearchPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCondition()) {
    query["condition"] = request.getCondition();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEventBeginTime()) {
    query["eventBeginTime"] = request.getEventBeginTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasEventEndTime()) {
    query["eventEndTime"] = request.getEventEndTime();
  }

  if (!!request.hasFieldName()) {
    query["fieldName"] = request.getFieldName();
  }

  if (!!request.hasFieldValue()) {
    query["fieldValue"] = request.getFieldValue();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAdvanceSearchPageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdvanceSearchPageListResponse>();
}

/**
 * @summary Performs an advanced query for event analysis.
 *
 * @param request DescribeAdvanceSearchPageListRequest
 * @return DescribeAdvanceSearchPageListResponse
 */
DescribeAdvanceSearchPageListResponse Client::describeAdvanceSearchPageList(const DescribeAdvanceSearchPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdvanceSearchPageListWithOptions(request, runtime);
}

/**
 * @summary Lists data sources.
 *
 * @param request DescribeAllDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAllDataSourceResponse
 */
DescribeAllDataSourceResponse Client::describeAllDataSourceWithOptions(const DescribeAllDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAllDataSource"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAllDataSourceResponse>();
}

/**
 * @summary Lists data sources.
 *
 * @param request DescribeAllDataSourceRequest
 * @return DescribeAllDataSourceResponse
 */
DescribeAllDataSourceResponse Client::describeAllDataSource(const DescribeAllDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAllDataSourceWithOptions(request, runtime);
}

/**
 * @summary Queries the event list.
 *
 * @param request DescribeAllEventNameAndCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAllEventNameAndCodeResponse
 */
DescribeAllEventNameAndCodeResponse Client::describeAllEventNameAndCodeWithOptions(const DescribeAllEventNameAndCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAllEventNameAndCode"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAllEventNameAndCodeResponse>();
}

/**
 * @summary Queries the event list.
 *
 * @param request DescribeAllEventNameAndCodeRequest
 * @return DescribeAllEventNameAndCodeResponse
 */
DescribeAllEventNameAndCodeResponse Client::describeAllEventNameAndCode(const DescribeAllEventNameAndCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAllEventNameAndCodeWithOptions(request, runtime);
}

/**
 * @summary Displays all root variables during custom expression testing.
 *
 * @param request DescribeAllRootVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAllRootVariableResponse
 */
DescribeAllRootVariableResponse Client::describeAllRootVariableWithOptions(const DescribeAllRootVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasDeviceVariableIds()) {
    query["deviceVariableIds"] = request.getDeviceVariableIds();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasExpressionVariableIds()) {
    query["expressionVariableIds"] = request.getExpressionVariableIds();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasNativeVariableIds()) {
    query["nativeVariableIds"] = request.getNativeVariableIds();
  }

  if (!!request.hasQueryVariableIds()) {
    query["queryVariableIds"] = request.getQueryVariableIds();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasVelocityVariableIds()) {
    query["velocityVariableIds"] = request.getVelocityVariableIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAllRootVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAllRootVariableResponse>();
}

/**
 * @summary Displays all root variables during custom expression testing.
 *
 * @param request DescribeAllRootVariableRequest
 * @return DescribeAllRootVariableResponse
 */
DescribeAllRootVariableResponse Client::describeAllRootVariable(const DescribeAllRootVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAllRootVariableWithOptions(request, runtime);
}

/**
 * @summary Displays all fields.
 *
 * @param request DescribeAnalysisColumnFieldListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAnalysisColumnFieldListResponse
 */
DescribeAnalysisColumnFieldListResponse Client::describeAnalysisColumnFieldListWithOptions(const DescribeAnalysisColumnFieldListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAnalysisColumnFieldList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAnalysisColumnFieldListResponse>();
}

/**
 * @summary Displays all fields.
 *
 * @param request DescribeAnalysisColumnFieldListRequest
 * @return DescribeAnalysisColumnFieldListResponse
 */
DescribeAnalysisColumnFieldListResponse Client::describeAnalysisColumnFieldList(const DescribeAnalysisColumnFieldListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAnalysisColumnFieldListWithOptions(request, runtime);
}

/**
 * @summary Queries custom columns.
 *
 * @param request DescribeAnalysisColumnListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAnalysisColumnListResponse
 */
DescribeAnalysisColumnListResponse Client::describeAnalysisColumnListWithOptions(const DescribeAnalysisColumnListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAnalysisColumnList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAnalysisColumnListResponse>();
}

/**
 * @summary Queries custom columns.
 *
 * @param request DescribeAnalysisColumnListRequest
 * @return DescribeAnalysisColumnListResponse
 */
DescribeAnalysisColumnListResponse Client::describeAnalysisColumnList(const DescribeAnalysisColumnListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAnalysisColumnListWithOptions(request, runtime);
}

/**
 * @summary Queries the condition favorite list.
 *
 * @param request DescribeAnalysisConditionFavoriteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAnalysisConditionFavoriteListResponse
 */
DescribeAnalysisConditionFavoriteListResponse Client::describeAnalysisConditionFavoriteListWithOptions(const DescribeAnalysisConditionFavoriteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAnalysisConditionFavoriteList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAnalysisConditionFavoriteListResponse>();
}

/**
 * @summary Queries the condition favorite list.
 *
 * @param request DescribeAnalysisConditionFavoriteListRequest
 * @return DescribeAnalysisConditionFavoriteListResponse
 */
DescribeAnalysisConditionFavoriteListResponse Client::describeAnalysisConditionFavoriteList(const DescribeAnalysisConditionFavoriteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAnalysisConditionFavoriteListWithOptions(request, runtime);
}

/**
 * @summary Download query results.
 *
 * @param request DescribeAnalysisExportTaskDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAnalysisExportTaskDownloadUrlResponse
 */
DescribeAnalysisExportTaskDownloadUrlResponse Client::describeAnalysisExportTaskDownloadUrlWithOptions(const DescribeAnalysisExportTaskDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAnalysisExportTaskDownloadUrl"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAnalysisExportTaskDownloadUrlResponse>();
}

/**
 * @summary Download query results.
 *
 * @param request DescribeAnalysisExportTaskDownloadUrlRequest
 * @return DescribeAnalysisExportTaskDownloadUrlResponse
 */
DescribeAnalysisExportTaskDownloadUrlResponse Client::describeAnalysisExportTaskDownloadUrl(const DescribeAnalysisExportTaskDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAnalysisExportTaskDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an API.
 *
 * @param request DescribeApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiResponse
 */
DescribeApiResponse Client::describeApiWithOptions(const DescribeApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasApiId()) {
    query["apiId"] = request.getApiId();
  }

  if (!!request.hasApiRegionId()) {
    query["apiRegionId"] = request.getApiRegionId();
  }

  if (!!request.hasApiType()) {
    query["apiType"] = request.getApiType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApi"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiResponse>();
}

/**
 * @summary Retrieves the details of an API.
 *
 * @param request DescribeApiRequest
 * @return DescribeApiResponse
 */
DescribeApiResponse Client::describeApi(const DescribeApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiWithOptions(request, runtime);
}

/**
 * @summary Retrieves API groups, including purchased and custom groups.
 *
 * @param request DescribeApiGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiGroupsResponse
 */
DescribeApiGroupsResponse Client::describeApiGroupsWithOptions(const DescribeApiGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasApiRegionId()) {
    query["apiRegionId"] = request.getApiRegionId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiGroups"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiGroupsResponse>();
}

/**
 * @summary Retrieves API groups, including purchased and custom groups.
 *
 * @param request DescribeApiGroupsRequest
 * @return DescribeApiGroupsResponse
 */
DescribeApiGroupsResponse Client::describeApiGroups(const DescribeApiGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the limit information for creating API tasks.
 *
 * @param request DescribeApiLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiLimitResponse
 */
DescribeApiLimitResponse Client::describeApiLimitWithOptions(const DescribeApiLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiLimit"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiLimitResponse>();
}

/**
 * @summary Queries the limit information for creating API tasks.
 *
 * @param request DescribeApiLimitRequest
 * @return DescribeApiLimitResponse
 */
DescribeApiLimitResponse Client::describeApiLimit(const DescribeApiLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiLimitWithOptions(request, runtime);
}

/**
 * @summary Retrieves API service names.
 *
 * @param request DescribeApiNameListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiNameListResponse
 */
DescribeApiNameListResponse Client::describeApiNameListWithOptions(const DescribeApiNameListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiNameList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiNameListResponse>();
}

/**
 * @summary Retrieves API service names.
 *
 * @param request DescribeApiNameListRequest
 * @return DescribeApiNameListResponse
 */
DescribeApiNameListResponse Client::describeApiNameList(const DescribeApiNameListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiNameListWithOptions(request, runtime);
}

/**
 * @summary Query variable details.
 *
 * @param request DescribeApiVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApiVariableResponse
 */
DescribeApiVariableResponse Client::describeApiVariableWithOptions(const DescribeApiVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApiVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApiVariableResponse>();
}

/**
 * @summary Query variable details.
 *
 * @param request DescribeApiVariableRequest
 * @return DescribeApiVariableResponse
 */
DescribeApiVariableResponse Client::describeApiVariable(const DescribeApiVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApiVariableWithOptions(request, runtime);
}

/**
 * @summary Retrieves the API list, including purchased and custom APIs.
 *
 * @param request DescribeApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApisResponse
 */
DescribeApisResponse Client::describeApisWithOptions(const DescribeApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasApiGroupId()) {
    query["apiGroupId"] = request.getApiGroupId();
  }

  if (!!request.hasApiRegionId()) {
    query["apiRegionId"] = request.getApiRegionId();
  }

  if (!!request.hasApiType()) {
    query["apiType"] = request.getApiType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApis"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApisResponse>();
}

/**
 * @summary Retrieves the API list, including purchased and custom APIs.
 *
 * @param request DescribeApisRequest
 * @return DescribeApisResponse
 */
DescribeApisResponse Client::describeApis(const DescribeApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApisWithOptions(request, runtime);
}

/**
 * @summary Queries the list of appKeys.
 *
 * @param request DescribeAppKeyPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppKeyPageResponse
 */
DescribeAppKeyPageResponse Client::describeAppKeyPageWithOptions(const DescribeAppKeyPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppKeyPage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppKeyPageResponse>();
}

/**
 * @summary Queries the list of appKeys.
 *
 * @param request DescribeAppKeyPageRequest
 * @return DescribeAppKeyPageResponse
 */
DescribeAppKeyPageResponse Client::describeAppKeyPage(const DescribeAppKeyPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppKeyPageWithOptions(request, runtime);
}

/**
 * @summary Configures the approval switch.
 *
 * @param request DescribeAuditConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuditConfigResponse
 */
DescribeAuditConfigResponse Client::describeAuditConfigWithOptions(const DescribeAuditConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasAuditRelationType()) {
    query["auditRelationType"] = request.getAuditRelationType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuditConfig"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuditConfigResponse>();
}

/**
 * @summary Configures the approval switch.
 *
 * @param request DescribeAuditConfigRequest
 * @return DescribeAuditConfigResponse
 */
DescribeAuditConfigResponse Client::describeAuditConfig(const DescribeAuditConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuditConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieves approval details.
 *
 * @param request DescribeAuditDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuditDetailsResponse
 */
DescribeAuditDetailsResponse Client::describeAuditDetailsWithOptions(const DescribeAuditDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuditDetails"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuditDetailsResponse>();
}

/**
 * @summary Retrieves approval details.
 *
 * @param request DescribeAuditDetailsRequest
 * @return DescribeAuditDetailsResponse
 */
DescribeAuditDetailsResponse Client::describeAuditDetails(const DescribeAuditDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuditDetailsWithOptions(request, runtime);
}

/**
 * @summary Displays and queries the audit list.
 *
 * @param request DescribeAuditPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuditPageListResponse
 */
DescribeAuditPageListResponse Client::describeAuditPageListWithOptions(const DescribeAuditPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasAuditStatus()) {
    query["auditStatus"] = request.getAuditStatus();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRuleName()) {
    query["ruleName"] = request.getRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuditPageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuditPageListResponse>();
}

/**
 * @summary Displays and queries the audit list.
 *
 * @param request DescribeAuditPageListRequest
 * @return DescribeAuditPageListResponse
 */
DescribeAuditPageListResponse Client::describeAuditPageList(const DescribeAuditPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuditPageListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of event names for the current user.
 *
 * @param request DescribeAuthEventNameListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuthEventNameListResponse
 */
DescribeAuthEventNameListResponse Client::describeAuthEventNameListWithOptions(const DescribeAuthEventNameListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuthEventNameList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuthEventNameListResponse>();
}

/**
 * @summary Queries the list of event names for the current user.
 *
 * @param request DescribeAuthEventNameListRequest
 * @return DescribeAuthEventNameListResponse
 */
DescribeAuthEventNameListResponse Client::describeAuthEventNameList(const DescribeAuthEventNameListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuthEventNameListWithOptions(request, runtime);
}

/**
 * @summary Queries a list of policies.
 *
 * @param request DescribeAuthRulePageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuthRulePageListResponse
 */
DescribeAuthRulePageListResponse Client::describeAuthRulePageListWithOptions(const DescribeAuthRulePageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRuleName()) {
    query["ruleName"] = request.getRuleName();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuthRulePageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuthRulePageListResponse>();
}

/**
 * @summary Queries a list of policies.
 *
 * @param request DescribeAuthRulePageListRequest
 * @return DescribeAuthRulePageListResponse
 */
DescribeAuthRulePageListResponse Client::describeAuthRulePageList(const DescribeAuthRulePageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuthRulePageListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of scenarios.
 *
 * @param request DescribeAuthSceneListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuthSceneListResponse
 */
DescribeAuthSceneListResponse Client::describeAuthSceneListWithOptions(const DescribeAuthSceneListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuthSceneList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuthSceneListResponse>();
}

/**
 * @summary Queries the list of scenarios.
 *
 * @param request DescribeAuthSceneListRequest
 * @return DescribeAuthSceneListResponse
 */
DescribeAuthSceneListResponse Client::describeAuthSceneList(const DescribeAuthSceneListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuthSceneListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of scenarios.
 *
 * @param request DescribeAuthScenePageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuthScenePageListResponse
 */
DescribeAuthScenePageListResponse Client::describeAuthScenePageListWithOptions(const DescribeAuthScenePageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasSceneName()) {
    query["sceneName"] = request.getSceneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuthScenePageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuthScenePageListResponse>();
}

/**
 * @summary Queries the list of scenarios.
 *
 * @param request DescribeAuthScenePageListRequest
 * @return DescribeAuthScenePageListResponse
 */
DescribeAuthScenePageListResponse Client::describeAuthScenePageList(const DescribeAuthScenePageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuthScenePageListWithOptions(request, runtime);
}

/**
 * @summary Checks whether authorization is granted.
 *
 * @param request DescribeAuthStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuthStatusResponse
 */
DescribeAuthStatusResponse Client::describeAuthStatusWithOptions(const DescribeAuthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuthStatus"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuthStatusResponse>();
}

/**
 * @summary Checks whether authorization is granted.
 *
 * @param request DescribeAuthStatusRequest
 * @return DescribeAuthStatusResponse
 */
DescribeAuthStatusResponse Client::describeAuthStatus(const DescribeAuthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuthStatusWithOptions(request, runtime);
}

/**
 * @summary Average execution duration.
 *
 * @param request DescribeAvgExecuteCostReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvgExecuteCostReportResponse
 */
DescribeAvgExecuteCostReportResponse Client::describeAvgExecuteCostReportWithOptions(const DescribeAvgExecuteCostReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAvgExecuteCostReport"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAvgExecuteCostReportResponse>();
}

/**
 * @summary Average execution duration.
 *
 * @param request DescribeAvgExecuteCostReportRequest
 * @return DescribeAvgExecuteCostReportResponse
 */
DescribeAvgExecuteCostReportResponse Client::describeAvgExecuteCostReport(const DescribeAvgExecuteCostReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvgExecuteCostReportWithOptions(request, runtime);
}

/**
 * @summary Performs a basic query.
 *
 * @param request DescribeBasicSearchPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBasicSearchPageListResponse
 */
DescribeBasicSearchPageListResponse Client::describeBasicSearchPageListWithOptions(const DescribeBasicSearchPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEventBeginTime()) {
    query["eventBeginTime"] = request.getEventBeginTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasEventEndTime()) {
    query["eventEndTime"] = request.getEventEndTime();
  }

  if (!!request.hasFieldName()) {
    query["fieldName"] = request.getFieldName();
  }

  if (!!request.hasFieldValue()) {
    query["fieldValue"] = request.getFieldValue();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBasicSearchPageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBasicSearchPageListResponse>();
}

/**
 * @summary Performs a basic query.
 *
 * @param request DescribeBasicSearchPageListRequest
 * @return DescribeBasicSearchPageListResponse
 */
DescribeBasicSearchPageListResponse Client::describeBasicSearchPageList(const DescribeBasicSearchPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBasicSearchPageListWithOptions(request, runtime);
}

/**
 * @summary Queries basic statistics.
 *
 * @param request DescribeBasicStartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBasicStartResponse
 */
DescribeBasicStartResponse Client::describeBasicStartWithOptions(const DescribeBasicStartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["appKey"] = request.getAppKey();
  }

  if (!!request.hasEndDs()) {
    query["endDs"] = request.getEndDs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasService()) {
    query["service"] = request.getService();
  }

  if (!!request.hasStartDs()) {
    query["startDs"] = request.getStartDs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBasicStart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBasicStartResponse>();
}

/**
 * @summary Queries basic statistics.
 *
 * @param request DescribeBasicStartRequest
 * @return DescribeBasicStartResponse
 */
DescribeBasicStartResponse Client::describeBasicStart(const DescribeBasicStartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBasicStartWithOptions(request, runtime);
}

/**
 * @summary Queries a bypass event.
 *
 * @param request DescribeByPassShuntEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeByPassShuntEventResponse
 */
DescribeByPassShuntEventResponse Client::describeByPassShuntEventWithOptions(const DescribeByPassShuntEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEventId()) {
    query["eventId"] = request.getEventId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeByPassShuntEvent"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeByPassShuntEventResponse>();
}

/**
 * @summary Queries a bypass event.
 *
 * @param request DescribeByPassShuntEventRequest
 * @return DescribeByPassShuntEventResponse
 */
DescribeByPassShuntEventResponse Client::describeByPassShuntEvent(const DescribeByPassShuntEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeByPassShuntEventWithOptions(request, runtime);
}

/**
 * @summary Queries the type configurations of custom cumulative variables.
 *
 * @param request DescribeCustVariableConfigListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustVariableConfigListResponse
 */
DescribeCustVariableConfigListResponse Client::describeCustVariableConfigListWithOptions(const DescribeCustVariableConfigListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBizType()) {
    query["bizType"] = request.getBizType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTimeType()) {
    query["timeType"] = request.getTimeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustVariableConfigList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustVariableConfigListResponse>();
}

/**
 * @summary Queries the type configurations of custom cumulative variables.
 *
 * @param request DescribeCustVariableConfigListRequest
 * @return DescribeCustVariableConfigListResponse
 */
DescribeCustVariableConfigListResponse Client::describeCustVariableConfigList(const DescribeCustVariableConfigListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustVariableConfigListWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a cumulative variable.
 *
 * @param request DescribeCustVariableDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustVariableDetailResponse
 */
DescribeCustVariableDetailResponse Client::describeCustVariableDetailWithOptions(const DescribeCustVariableDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustVariableDetail"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustVariableDetailResponse>();
}

/**
 * @summary Queries the details of a cumulative variable.
 *
 * @param request DescribeCustVariableDetailRequest
 * @return DescribeCustVariableDetailResponse
 */
DescribeCustVariableDetailResponse Client::describeCustVariableDetail(const DescribeCustVariableDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustVariableDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the list of custom cumulative variables.
 *
 * @description Queries the list of cumulative variables.
 *
 * @param request DescribeCustVariablePageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustVariablePageResponse
 */
DescribeCustVariablePageResponse Client::describeCustVariablePageWithOptions(const DescribeCustVariablePageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustVariablePage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustVariablePageResponse>();
}

/**
 * @summary Queries the list of custom cumulative variables.
 *
 * @description Queries the list of cumulative variables.
 *
 * @param request DescribeCustVariablePageRequest
 * @return DescribeCustVariablePageResponse
 */
DescribeCustVariablePageResponse Client::describeCustVariablePage(const DescribeCustVariablePageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustVariablePageWithOptions(request, runtime);
}

/**
 * @summary Retrieves the download URL for data source data.
 *
 * @param request DescribeDataSourceDataDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataSourceDataDownloadUrlResponse
 */
DescribeDataSourceDataDownloadUrlResponse Client::describeDataSourceDataDownloadUrlWithOptions(const DescribeDataSourceDataDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasDataSourceId()) {
    query["dataSourceId"] = request.getDataSourceId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataSourceDataDownloadUrl"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataSourceDataDownloadUrlResponse>();
}

/**
 * @summary Retrieves the download URL for data source data.
 *
 * @param request DescribeDataSourceDataDownloadUrlRequest
 * @return DescribeDataSourceDataDownloadUrlResponse
 */
DescribeDataSourceDataDownloadUrlResponse Client::describeDataSourceDataDownloadUrl(const DescribeDataSourceDataDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataSourceDataDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Retrieves all fields of a data source.
 *
 * @param request DescribeDataSourceFieldsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataSourceFieldsResponse
 */
DescribeDataSourceFieldsResponse Client::describeDataSourceFieldsWithOptions(const DescribeDataSourceFieldsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasDataSourceCode()) {
    query["dataSourceCode"] = request.getDataSourceCode();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataSourceFields"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataSourceFieldsResponse>();
}

/**
 * @summary Retrieves all fields of a data source.
 *
 * @param request DescribeDataSourceFieldsRequest
 * @return DescribeDataSourceFieldsResponse
 */
DescribeDataSourceFieldsResponse Client::describeDataSourceFields(const DescribeDataSourceFieldsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataSourceFieldsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of data sources.
 *
 * @param request DescribeDataSourcePageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDataSourcePageListResponse
 */
DescribeDataSourcePageListResponse Client::describeDataSourcePageListWithOptions(const DescribeDataSourcePageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDataSourcePageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDataSourcePageListResponse>();
}

/**
 * @summary Queries a list of data sources.
 *
 * @param request DescribeDataSourcePageListRequest
 * @return DescribeDataSourcePageListResponse
 */
DescribeDataSourcePageListResponse Client::describeDataSourcePageList(const DescribeDataSourcePageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDataSourcePageListWithOptions(request, runtime);
}

/**
 * @summary Detects fluctuations in decision results.
 *
 * @param request DescribeDecisionResultFluctuationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDecisionResultFluctuationResponse
 */
DescribeDecisionResultFluctuationResponse Client::describeDecisionResultFluctuationWithOptions(const DescribeDecisionResultFluctuationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDecisionResultFluctuation"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDecisionResultFluctuationResponse>();
}

/**
 * @summary Detects fluctuations in decision results.
 *
 * @param request DescribeDecisionResultFluctuationRequest
 * @return DescribeDecisionResultFluctuationResponse
 */
DescribeDecisionResultFluctuationResponse Client::describeDecisionResultFluctuation(const DescribeDecisionResultFluctuationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDecisionResultFluctuationWithOptions(request, runtime);
}

/**
 * @summary Queries the fluctuation trend of decision results.
 *
 * @param request DescribeDecisionResultTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDecisionResultTrendResponse
 */
DescribeDecisionResultTrendResponse Client::describeDecisionResultTrendWithOptions(const DescribeDecisionResultTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDecisionResultTrend"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDecisionResultTrendResponse>();
}

/**
 * @summary Queries the fluctuation trend of decision results.
 *
 * @param request DescribeDecisionResultTrendRequest
 * @return DescribeDecisionResultTrendResponse
 */
DescribeDecisionResultTrendResponse Client::describeDecisionResultTrend(const DescribeDecisionResultTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDecisionResultTrendWithOptions(request, runtime);
}

/**
 * @summary Retrieves detailed statistics.
 *
 * @param request DescribeDetailStartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDetailStartResponse
 */
DescribeDetailStartResponse Client::describeDetailStartWithOptions(const DescribeDetailStartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["appKey"] = request.getAppKey();
  }

  if (!!request.hasEndDs()) {
    query["endDs"] = request.getEndDs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasService()) {
    query["service"] = request.getService();
  }

  if (!!request.hasStartDs()) {
    query["startDs"] = request.getStartDs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDetailStart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDetailStartResponse>();
}

/**
 * @summary Retrieves detailed statistics.
 *
 * @param request DescribeDetailStartRequest
 * @return DescribeDetailStartResponse
 */
DescribeDetailStartResponse Client::describeDetailStart(const DescribeDetailStartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDetailStartWithOptions(request, runtime);
}

/**
 * @summary Downloads a file.
 *
 * @param request DescribeDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDownloadUrlResponse
 */
DescribeDownloadUrlResponse Client::describeDownloadUrlWithOptions(const DescribeDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileType()) {
    query["FileType"] = request.getFileType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDownloadUrl"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDownloadUrlResponse>();
}

/**
 * @summary Downloads a file.
 *
 * @param request DescribeDownloadUrlRequest
 * @return DescribeDownloadUrlResponse
 */
DescribeDownloadUrlResponse Client::describeDownloadUrl(const DescribeDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Queries event details.
 *
 * @param request DescribeEventBaseInfoByEventCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventBaseInfoByEventCodeResponse
 */
DescribeEventBaseInfoByEventCodeResponse Client::describeEventBaseInfoByEventCodeWithOptions(const DescribeEventBaseInfoByEventCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventBaseInfoByEventCode"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventBaseInfoByEventCodeResponse>();
}

/**
 * @summary Queries event details.
 *
 * @param request DescribeEventBaseInfoByEventCodeRequest
 * @return DescribeEventBaseInfoByEventCodeResponse
 */
DescribeEventBaseInfoByEventCodeResponse Client::describeEventBaseInfoByEventCode(const DescribeEventBaseInfoByEventCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventBaseInfoByEventCodeWithOptions(request, runtime);
}

/**
 * @summary Queries the total number of events.
 *
 * @param request DescribeEventCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventCountResponse
 */
DescribeEventCountResponse Client::describeEventCountWithOptions(const DescribeEventCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventCount"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventCountResponse>();
}

/**
 * @summary Queries the total number of events.
 *
 * @param request DescribeEventCountRequest
 * @return DescribeEventCountResponse
 */
DescribeEventCountResponse Client::describeEventCount(const DescribeEventCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventCountWithOptions(request, runtime);
}

/**
 * @summary Queries event details by request ID.
 *
 * @param request DescribeEventDetailByRequestIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventDetailByRequestIdResponse
 */
DescribeEventDetailByRequestIdResponse Client::describeEventDetailByRequestIdWithOptions(const DescribeEventDetailByRequestIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasEventTime()) {
    query["eventTime"] = request.getEventTime();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasSRequestId()) {
    query["sRequestId"] = request.getSRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventDetailByRequestId"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventDetailByRequestIdResponse>();
}

/**
 * @summary Queries event details by request ID.
 *
 * @param request DescribeEventDetailByRequestIdRequest
 * @return DescribeEventDetailByRequestIdResponse
 */
DescribeEventDetailByRequestIdResponse Client::describeEventDetailByRequestId(const DescribeEventDetailByRequestIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventDetailByRequestIdWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an event history.
 *
 * @param request DescribeEventLogDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventLogDetailResponse
 */
DescribeEventLogDetailResponse Client::describeEventLogDetailWithOptions(const DescribeEventLogDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasReqIdByLog()) {
    query["reqIdByLog"] = request.getReqIdByLog();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventLogDetail"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventLogDetailResponse>();
}

/**
 * @summary Queries the details of an event history.
 *
 * @param request DescribeEventLogDetailRequest
 * @return DescribeEventLogDetailResponse
 */
DescribeEventLogDetailResponse Client::describeEventLogDetail(const DescribeEventLogDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventLogDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the event history list.
 *
 * @param request DescribeEventLogPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventLogPageResponse
 */
DescribeEventLogPageResponse Client::describeEventLogPageWithOptions(const DescribeEventLogPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasAccountIdPRP()) {
    query["accountIdPRP"] = request.getAccountIdPRP();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.getBeginTime();
  }

  if (!!request.hasCondition1AL()) {
    query["condition1AL"] = request.getCondition1AL();
  }

  if (!!request.hasCondition2AL()) {
    query["condition2AL"] = request.getCondition2AL();
  }

  if (!!request.hasCondition3AL()) {
    query["condition3AL"] = request.getCondition3AL();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDeviceTypeLRP()) {
    query["deviceTypeLRP"] = request.getDeviceTypeLRP();
  }

  if (!!request.hasEmailPRP()) {
    query["emailPRP"] = request.getEmailPRP();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasFailReasonLRP()) {
    query["failReasonLRP"] = request.getFailReasonLRP();
  }

  if (!!request.hasIpPRP()) {
    query["ipPRP"] = request.getIpPRP();
  }

  if (!!request.hasLoginResultARP()) {
    query["loginResultARP"] = request.getLoginResultARP();
  }

  if (!!request.hasLoginTypeLRP()) {
    query["loginTypeLRP"] = request.getLoginTypeLRP();
  }

  if (!!request.hasMacPRP()) {
    query["macPRP"] = request.getMacPRP();
  }

  if (!!request.hasMobilePRP()) {
    query["mobilePRP"] = request.getMobilePRP();
  }

  if (!!request.hasNickNamePRP()) {
    query["nickNamePRP"] = request.getNickNamePRP();
  }

  if (!!request.hasOperateSourceLRP()) {
    query["operateSourceLRP"] = request.getOperateSourceLRP();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasReferPRP()) {
    query["referPRP"] = request.getReferPRP();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRegisterIpPRP()) {
    query["registerIpPRP"] = request.getRegisterIpPRP();
  }

  if (!!request.hasReqIdPBS()) {
    query["reqIdPBS"] = request.getReqIdPBS();
  }

  if (!!request.hasScoreEBS()) {
    query["scoreEBS"] = request.getScoreEBS();
  }

  if (!!request.hasScoreSBS()) {
    query["scoreSBS"] = request.getScoreSBS();
  }

  if (!!request.hasServiceABS()) {
    query["serviceABS"] = request.getServiceABS();
  }

  if (!!request.hasTagsLBS()) {
    query["tagsLBS"] = request.getTagsLBS();
  }

  if (!!request.hasUmidPDI()) {
    query["umidPDI"] = request.getUmidPDI();
  }

  if (!!request.hasUserAgentPRP()) {
    query["userAgentPRP"] = request.getUserAgentPRP();
  }

  if (!!request.hasUserNameTypeLRP()) {
    query["userNameTypeLRP"] = request.getUserNameTypeLRP();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventLogPage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventLogPageResponse>();
}

/**
 * @summary Queries the event history list.
 *
 * @param request DescribeEventLogPageRequest
 * @return DescribeEventLogPageResponse
 */
DescribeEventLogPageResponse Client::describeEventLogPage(const DescribeEventLogPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventLogPageWithOptions(request, runtime);
}

/**
 * @summary Queries events by paging.
 *
 * @param request DescribeEventPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventPageListResponse
 */
DescribeEventPageListResponse Client::describeEventPageListWithOptions(const DescribeEventPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasEventName()) {
    query["eventName"] = request.getEventName();
  }

  if (!!request.hasEventStatus()) {
    query["eventStatus"] = request.getEventStatus();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventPageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventPageListResponse>();
}

/**
 * @summary Queries events by paging.
 *
 * @param request DescribeEventPageListRequest
 * @return DescribeEventPageListResponse
 */
DescribeEventPageListResponse Client::describeEventPageList(const DescribeEventPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventPageListWithOptions(request, runtime);
}

/**
 * @summary Risk Dashboard
 *
 * @param request DescribeEventResultBarChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventResultBarChartResponse
 */
DescribeEventResultBarChartResponse Client::describeEventResultBarChartWithOptions(const DescribeEventResultBarChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventResultBarChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventResultBarChartResponse>();
}

/**
 * @summary Risk Dashboard
 *
 * @param request DescribeEventResultBarChartRequest
 * @return DescribeEventResultBarChartResponse
 */
DescribeEventResultBarChartResponse Client::describeEventResultBarChart(const DescribeEventResultBarChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventResultBarChartWithOptions(request, runtime);
}

/**
 * @summary Queries the event overview list.
 *
 * @param request DescribeEventResultListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventResultListResponse
 */
DescribeEventResultListResponse Client::describeEventResultListWithOptions(const DescribeEventResultListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.getBeginTime();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventResultList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventResultListResponse>();
}

/**
 * @summary Queries the event overview list.
 *
 * @param request DescribeEventResultListRequest
 * @return DescribeEventResultListResponse
 */
DescribeEventResultListResponse Client::describeEventResultList(const DescribeEventResultListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventResultListWithOptions(request, runtime);
}

/**
 * @summary Queries the policy download list.
 *
 * @param request DescribeEventTaskHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventTaskHistoryResponse
 */
DescribeEventTaskHistoryResponse Client::describeEventTaskHistoryWithOptions(const DescribeEventTaskHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventTaskHistory"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventTaskHistoryResponse>();
}

/**
 * @summary Queries the policy download list.
 *
 * @param request DescribeEventTaskHistoryRequest
 * @return DescribeEventTaskHistoryResponse
 */
DescribeEventTaskHistoryResponse Client::describeEventTaskHistory(const DescribeEventTaskHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventTaskHistoryWithOptions(request, runtime);
}

/**
 * @summary Call event count
 *
 * @param request DescribeEventTotalCountReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventTotalCountReportResponse
 */
DescribeEventTotalCountReportResponse Client::describeEventTotalCountReportWithOptions(const DescribeEventTotalCountReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventTotalCountReport"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventTotalCountReportResponse>();
}

/**
 * @summary Call event count
 *
 * @param request DescribeEventTotalCountReportRequest
 * @return DescribeEventTotalCountReportResponse
 */
DescribeEventTotalCountReportResponse Client::describeEventTotalCountReport(const DescribeEventTotalCountReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventTotalCountReportWithOptions(request, runtime);
}

/**
 * @summary Imports policies in batches.
 *
 * @param request DescribeEventUploadPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventUploadPolicyResponse
 */
DescribeEventUploadPolicyResponse Client::describeEventUploadPolicyWithOptions(const DescribeEventUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventUploadPolicy"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventUploadPolicyResponse>();
}

/**
 * @summary Imports policies in batches.
 *
 * @param request DescribeEventUploadPolicyRequest
 * @return DescribeEventUploadPolicyResponse
 */
DescribeEventUploadPolicyResponse Client::describeEventUploadPolicy(const DescribeEventUploadPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventUploadPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries event variables.
 *
 * @description Queries the list of cumulative variables.
 *
 * @param request DescribeEventVariableListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventVariableListResponse
 */
DescribeEventVariableListResponse Client::describeEventVariableListWithOptions(const DescribeEventVariableListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasFilterDTO()) {
    query["filterDTO"] = request.getFilterDTO();
  }

  if (!!request.hasRefObjId()) {
    query["refObjId"] = request.getRefObjId();
  }

  if (!!request.hasRefObjType()) {
    query["refObjType"] = request.getRefObjType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventVariableList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventVariableListResponse>();
}

/**
 * @summary Queries event variables.
 *
 * @description Queries the list of cumulative variables.
 *
 * @param request DescribeEventVariableListRequest
 * @return DescribeEventVariableListResponse
 */
DescribeEventVariableListResponse Client::describeEventVariableList(const DescribeEventVariableListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventVariableListWithOptions(request, runtime);
}

/**
 * @summary Queries an event pattern template.
 *
 * @param request DescribeEventVariableTemplateBindRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventVariableTemplateBindResponse
 */
DescribeEventVariableTemplateBindResponse Client::describeEventVariableTemplateBindWithOptions(const DescribeEventVariableTemplateBindRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasInputs()) {
    query["inputs"] = request.getInputs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTemplateCode()) {
    query["templateCode"] = request.getTemplateCode();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventVariableTemplateBind"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventVariableTemplateBindResponse>();
}

/**
 * @summary Queries an event pattern template.
 *
 * @param request DescribeEventVariableTemplateBindRequest
 * @return DescribeEventVariableTemplateBindResponse
 */
DescribeEventVariableTemplateBindResponse Client::describeEventVariableTemplateBind(const DescribeEventVariableTemplateBindRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventVariableTemplateBindWithOptions(request, runtime);
}

/**
 * @summary Queries an event pattern template.
 *
 * @param request DescribeEventVariableTemplateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventVariableTemplateListResponse
 */
DescribeEventVariableTemplateListResponse Client::describeEventVariableTemplateListWithOptions(const DescribeEventVariableTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasInputs()) {
    query["inputs"] = request.getInputs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTemplateCode()) {
    query["templateCode"] = request.getTemplateCode();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventVariableTemplateList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventVariableTemplateListResponse>();
}

/**
 * @summary Queries an event pattern template.
 *
 * @param request DescribeEventVariableTemplateListRequest
 * @return DescribeEventVariableTemplateListResponse
 */
DescribeEventVariableTemplateListResponse Client::describeEventVariableTemplateList(const DescribeEventVariableTemplateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventVariableTemplateListWithOptions(request, runtime);
}

/**
 * @summary Queries event variables.
 *
 * @param request DescribeEventsVariableListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventsVariableListResponse
 */
DescribeEventsVariableListResponse Client::describeEventsVariableListWithOptions(const DescribeEventsVariableListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasFilterDTO()) {
    query["filterDTO"] = request.getFilterDTO();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasScene()) {
    query["scene"] = request.getScene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventsVariableList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventsVariableListResponse>();
}

/**
 * @summary Queries event variables.
 *
 * @param request DescribeEventsVariableListRequest
 * @return DescribeEventsVariableListResponse
 */
DescribeEventsVariableListResponse Client::describeEventsVariableList(const DescribeEventsVariableListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventsVariableListWithOptions(request, runtime);
}

/**
 * @summary Self-service invocation list.
 *
 * @param request DescribeExcuteNumRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExcuteNumResponse
 */
DescribeExcuteNumResponse Client::describeExcuteNumWithOptions(const DescribeExcuteNumRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.getCode();
  }

  if (!!request.hasDegree()) {
    query["Degree"] = request.getDegree();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceIp()) {
    query["SourceIp"] = request.getSourceIp();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExcuteNum"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExcuteNumResponse>();
}

/**
 * @summary Self-service invocation list.
 *
 * @param request DescribeExcuteNumRequest
 * @return DescribeExcuteNumResponse
 */
DescribeExcuteNumResponse Client::describeExcuteNum(const DescribeExcuteNumRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExcuteNumWithOptions(request, runtime);
}

/**
 * @summary Checks whether a field name is duplicate based on the user unit.
 *
 * @param request DescribeExistNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExistNameResponse
 */
DescribeExistNameResponse Client::describeExistNameWithOptions(const DescribeExistNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExistName"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExistNameResponse>();
}

/**
 * @summary Checks whether a field name is duplicate based on the user unit.
 *
 * @param request DescribeExistNameRequest
 * @return DescribeExistNameResponse
 */
DescribeExistNameResponse Client::describeExistName(const DescribeExistNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExistNameWithOptions(request, runtime);
}

/**
 * @summary Checks whether a scenario exists.
 *
 * @param request DescribeExistSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExistSceneResponse
 */
DescribeExistSceneResponse Client::describeExistSceneWithOptions(const DescribeExistSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSceneName()) {
    query["SceneName"] = request.getSceneName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExistScene"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExistSceneResponse>();
}

/**
 * @summary Checks whether a scenario exists.
 *
 * @param request DescribeExistSceneRequest
 * @return DescribeExistSceneResponse
 */
DescribeExistSceneResponse Client::describeExistScene(const DescribeExistSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExistSceneWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a custom variable.
 *
 * @param request DescribeExpressionVariableDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressionVariableDetailResponse
 */
DescribeExpressionVariableDetailResponse Client::describeExpressionVariableDetailWithOptions(const DescribeExpressionVariableDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExpressionVariableDetail"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExpressionVariableDetailResponse>();
}

/**
 * @summary Queries the details of a custom variable.
 *
 * @param request DescribeExpressionVariableDetailRequest
 * @return DescribeExpressionVariableDetailResponse
 */
DescribeExpressionVariableDetailResponse Client::describeExpressionVariableDetail(const DescribeExpressionVariableDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpressionVariableDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the function list.
 *
 * @param request DescribeExpressionVariableFunctionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressionVariableFunctionListResponse
 */
DescribeExpressionVariableFunctionListResponse Client::describeExpressionVariableFunctionListWithOptions(const DescribeExpressionVariableFunctionListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExpressionVariableFunctionList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExpressionVariableFunctionListResponse>();
}

/**
 * @summary Queries the function list.
 *
 * @param request DescribeExpressionVariableFunctionListRequest
 * @return DescribeExpressionVariableFunctionListResponse
 */
DescribeExpressionVariableFunctionListResponse Client::describeExpressionVariableFunctionList(const DescribeExpressionVariableFunctionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpressionVariableFunctionListWithOptions(request, runtime);
}

/**
 * @summary Performs a paging query of custom variables.
 *
 * @param request DescribeExpressionVariablePageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressionVariablePageResponse
 */
DescribeExpressionVariablePageResponse Client::describeExpressionVariablePageWithOptions(const DescribeExpressionVariablePageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasOutputs()) {
    query["outputs"] = request.getOutputs();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasValue()) {
    query["value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExpressionVariablePage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExpressionVariablePageResponse>();
}

/**
 * @summary Performs a paging query of custom variables.
 *
 * @param request DescribeExpressionVariablePageRequest
 * @return DescribeExpressionVariablePageResponse
 */
DescribeExpressionVariablePageResponse Client::describeExpressionVariablePage(const DescribeExpressionVariablePageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpressionVariablePageWithOptions(request, runtime);
}

/**
 * @summary Custom Variable Version Details.
 *
 * @param request DescribeExpressionVariableVersionDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExpressionVariableVersionDetailResponse
 */
DescribeExpressionVariableVersionDetailResponse Client::describeExpressionVariableVersionDetailWithOptions(const DescribeExpressionVariableVersionDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasObjectCode()) {
    query["objectCode"] = request.getObjectCode();
  }

  if (!!request.hasObjectId()) {
    query["objectId"] = request.getObjectId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  if (!!request.hasVersion()) {
    query["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExpressionVariableVersionDetail"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExpressionVariableVersionDetailResponse>();
}

/**
 * @summary Custom Variable Version Details.
 *
 * @param request DescribeExpressionVariableVersionDetailRequest
 * @return DescribeExpressionVariableVersionDetailResponse
 */
DescribeExpressionVariableVersionDetailResponse Client::describeExpressionVariableVersionDetail(const DescribeExpressionVariableVersionDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExpressionVariableVersionDetailWithOptions(request, runtime);
}

/**
 * @summary Retrieves field details.
 *
 * @param request DescribeFieldByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFieldByIdResponse
 */
DescribeFieldByIdResponse Client::describeFieldByIdWithOptions(const DescribeFieldByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFieldById"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFieldByIdResponse>();
}

/**
 * @summary Retrieves field details.
 *
 * @param request DescribeFieldByIdRequest
 * @return DescribeFieldByIdResponse
 */
DescribeFieldByIdResponse Client::describeFieldById(const DescribeFieldByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFieldByIdWithOptions(request, runtime);
}

/**
 * @summary Queries the list of fields.
 *
 * @param request DescribeFieldListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFieldListResponse
 */
DescribeFieldListResponse Client::describeFieldListWithOptions(const DescribeFieldListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCondition()) {
    query["condition"] = request.getCondition();
  }

  if (!!request.hasInputs()) {
    query["inputs"] = request.getInputs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFieldList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFieldListResponse>();
}

/**
 * @summary Queries the list of fields.
 *
 * @param request DescribeFieldListRequest
 * @return DescribeFieldListResponse
 */
DescribeFieldListResponse Client::describeFieldList(const DescribeFieldListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFieldListWithOptions(request, runtime);
}

/**
 * @summary Queries a paginated list of fields.
 *
 * @param request DescribeFieldPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFieldPageResponse
 */
DescribeFieldPageResponse Client::describeFieldPageWithOptions(const DescribeFieldPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasClassify()) {
    query["classify"] = request.getClassify();
  }

  if (!!request.hasCondition()) {
    query["condition"] = request.getCondition();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasSource()) {
    query["source"] = request.getSource();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.getTitle();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFieldPage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFieldPageResponse>();
}

/**
 * @summary Queries a paginated list of fields.
 *
 * @param request DescribeFieldPageRequest
 * @return DescribeFieldPageResponse
 */
DescribeFieldPageResponse Client::describeFieldPage(const DescribeFieldPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFieldPageWithOptions(request, runtime);
}

/**
 * @summary Queries the list of community accounts.
 *
 * @param request DescribeGroupAccountPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupAccountPageResponse
 */
DescribeGroupAccountPageResponse Client::describeGroupAccountPageWithOptions(const DescribeGroupAccountPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCommunityNo()) {
    query["communityNo"] = request.getCommunityNo();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDirection()) {
    query["direction"] = request.getDirection();
  }

  if (!!request.hasFieldKey()) {
    query["fieldKey"] = request.getFieldKey();
  }

  if (!!request.hasFieldVal()) {
    query["fieldVal"] = request.getFieldVal();
  }

  if (!!request.hasIsPage()) {
    query["isPage"] = request.getIsPage();
  }

  if (!!request.hasOrder()) {
    query["order"] = request.getOrder();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroupAccountPage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupAccountPageResponse>();
}

/**
 * @summary Queries the list of community accounts.
 *
 * @param request DescribeGroupAccountPageRequest
 * @return DescribeGroupAccountPageResponse
 */
DescribeGroupAccountPageResponse Client::describeGroupAccountPage(const DescribeGroupAccountPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupAccountPageWithOptions(request, runtime);
}

/**
 * @summary Queries the filter conditions for the community list.
 *
 * @param request DescribeGroupConditionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupConditionListResponse
 */
DescribeGroupConditionListResponse Client::describeGroupConditionListWithOptions(const DescribeGroupConditionListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroupConditionList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupConditionListResponse>();
}

/**
 * @summary Queries the filter conditions for the community list.
 *
 * @param request DescribeGroupConditionListRequest
 * @return DescribeGroupConditionListResponse
 */
DescribeGroupConditionListResponse Client::describeGroupConditionList(const DescribeGroupConditionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupConditionListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of communities.
 *
 * @param request DescribeGroupPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupPageResponse
 */
DescribeGroupPageResponse Client::describeGroupPageWithOptions(const DescribeGroupPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDirection()) {
    query["direction"] = request.getDirection();
  }

  if (!!request.hasOrder()) {
    query["order"] = request.getOrder();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.getTaskId();
  }

  if (!!request.hasTimeType()) {
    query["timeType"] = request.getTimeType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroupPage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupPageResponse>();
}

/**
 * @summary Queries the list of communities.
 *
 * @param request DescribeGroupPageRequest
 * @return DescribeGroupPageResponse
 */
DescribeGroupPageResponse Client::describeGroupPage(const DescribeGroupPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupPageWithOptions(request, runtime);
}

/**
 * @summary Queries the risk communities discovered on the current day.
 *
 * @param request DescribeGroupStatisticsByTodayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupStatisticsByTodayResponse
 */
DescribeGroupStatisticsByTodayResponse Client::describeGroupStatisticsByTodayWithOptions(const DescribeGroupStatisticsByTodayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroupStatisticsByToday"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupStatisticsByTodayResponse>();
}

/**
 * @summary Queries the risk communities discovered on the current day.
 *
 * @param request DescribeGroupStatisticsByTodayRequest
 * @return DescribeGroupStatisticsByTodayResponse
 */
DescribeGroupStatisticsByTodayResponse Client::describeGroupStatisticsByToday(const DescribeGroupStatisticsByTodayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupStatisticsByTodayWithOptions(request, runtime);
}

/**
 * @summary Queries recent trends of risky communities.
 *
 * @param request DescribeGroupTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGroupTrendResponse
 */
DescribeGroupTrendResponse Client::describeGroupTrendWithOptions(const DescribeGroupTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasDay()) {
    query["day"] = request.getDay();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGroupTrend"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGroupTrendResponse>();
}

/**
 * @summary Queries recent trends of risky communities.
 *
 * @param request DescribeGroupTrendRequest
 * @return DescribeGroupTrendResponse
 */
DescribeGroupTrendResponse Client::describeGroupTrend(const DescribeGroupTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGroupTrendWithOptions(request, runtime);
}

/**
 * @summary Queries whether a policy name exists under a specified event name.
 *
 * @param request DescribeHasRuleNameByEventCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHasRuleNameByEventCodeResponse
 */
DescribeHasRuleNameByEventCodeResponse Client::describeHasRuleNameByEventCodeWithOptions(const DescribeHasRuleNameByEventCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasExcludeRuleId()) {
    query["excludeRuleId"] = request.getExcludeRuleId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRuleName()) {
    query["ruleName"] = request.getRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHasRuleNameByEventCode"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHasRuleNameByEventCodeResponse>();
}

/**
 * @summary Queries whether a policy name exists under a specified event name.
 *
 * @param request DescribeHasRuleNameByEventCodeRequest
 * @return DescribeHasRuleNameByEventCodeResponse
 */
DescribeHasRuleNameByEventCodeResponse Client::describeHasRuleNameByEventCode(const DescribeHasRuleNameByEventCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHasRuleNameByEventCodeWithOptions(request, runtime);
}

/**
 * @summary Retrieves the risk map overview chart (pie chart).
 *
 * @param request DescribeHighRiskPieChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHighRiskPieChartResponse
 */
DescribeHighRiskPieChartResponse Client::describeHighRiskPieChartWithOptions(const DescribeHighRiskPieChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHighRiskPieChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHighRiskPieChartResponse>();
}

/**
 * @summary Retrieves the risk map overview chart (pie chart).
 *
 * @param request DescribeHighRiskPieChartRequest
 * @return DescribeHighRiskPieChartResponse
 */
DescribeHighRiskPieChartResponse Client::describeHighRiskPieChart(const DescribeHighRiskPieChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHighRiskPieChartWithOptions(request, runtime);
}

/**
 * @summary Detects fluctuations in policy hits.
 *
 * @param request DescribeHitRuleFluctuationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHitRuleFluctuationResponse
 */
DescribeHitRuleFluctuationResponse Client::describeHitRuleFluctuationWithOptions(const DescribeHitRuleFluctuationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRuleStatus()) {
    query["ruleStatus"] = request.getRuleStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHitRuleFluctuation"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHitRuleFluctuationResponse>();
}

/**
 * @summary Detects fluctuations in policy hits.
 *
 * @param request DescribeHitRuleFluctuationRequest
 * @return DescribeHitRuleFluctuationResponse
 */
DescribeHitRuleFluctuationResponse Client::describeHitRuleFluctuation(const DescribeHitRuleFluctuationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHitRuleFluctuationWithOptions(request, runtime);
}

/**
 * @summary Queries the top 20 policies by hits for main events, bypass, and automatic request distribution.
 *
 * @param request DescribeHitRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHitRuleListResponse
 */
DescribeHitRuleListResponse Client::describeHitRuleListWithOptions(const DescribeHitRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasEventType()) {
    query["eventType"] = request.getEventType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHitRuleList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHitRuleListResponse>();
}

/**
 * @summary Queries the top 20 policies by hits for main events, bypass, and automatic request distribution.
 *
 * @param request DescribeHitRuleListRequest
 * @return DescribeHitRuleListResponse
 */
DescribeHitRuleListResponse Client::describeHitRuleList(const DescribeHitRuleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHitRuleListWithOptions(request, runtime);
}

/**
 * @summary Queries the policy hit trends.
 *
 * @param request DescribeHitRuleTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHitRuleTrendResponse
 */
DescribeHitRuleTrendResponse Client::describeHitRuleTrendWithOptions(const DescribeHitRuleTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRuleStatus()) {
    query["ruleStatus"] = request.getRuleStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHitRuleTrend"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHitRuleTrendResponse>();
}

/**
 * @summary Queries the policy hit trends.
 *
 * @param request DescribeHitRuleTrendRequest
 * @return DescribeHitRuleTrendResponse
 */
DescribeHitRuleTrendResponse Client::describeHitRuleTrend(const DescribeHitRuleTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHitRuleTrendWithOptions(request, runtime);
}

/**
 * @summary Initialization Popup Information
 *
 * @description Add prompt information in BOPS, POC new page initialization popup prompts this information
 *
 * @param request DescribeInitDigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInitDigResponse
 */
DescribeInitDigResponse Client::describeInitDigWithOptions(const DescribeInitDigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInitDig"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInitDigResponse>();
}

/**
 * @summary Initialization Popup Information
 *
 * @description Add prompt information in BOPS, POC new page initialization popup prompts this information
 *
 * @param request DescribeInitDigRequest
 * @return DescribeInitDigResponse
 */
DescribeInitDigResponse Client::describeInitDig(const DescribeInitDigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInitDigWithOptions(request, runtime);
}

/**
 * @summary Queries the total number of events.
 *
 * @param request DescribeInputFeildCountByEventCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInputFeildCountByEventCodeResponse
 */
DescribeInputFeildCountByEventCodeResponse Client::describeInputFeildCountByEventCodeWithOptions(const DescribeInputFeildCountByEventCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInputFeildCountByEventCode"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInputFeildCountByEventCodeResponse>();
}

/**
 * @summary Queries the total number of events.
 *
 * @param request DescribeInputFeildCountByEventCodeRequest
 * @return DescribeInputFeildCountByEventCodeResponse
 */
DescribeInputFeildCountByEventCodeResponse Client::describeInputFeildCountByEventCode(const DescribeInputFeildCountByEventCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInputFeildCountByEventCodeWithOptions(request, runtime);
}

/**
 * @summary Display of Model List
 *
 * @param request DescribeListModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeListModelResponse
 */
DescribeListModelResponse Client::describeListModelWithOptions(const DescribeListModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeListModel"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeListModelResponse>();
}

/**
 * @summary Display of Model List
 *
 * @param request DescribeListModelRequest
 * @return DescribeListModelResponse
 */
DescribeListModelResponse Client::describeListModel(const DescribeListModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeListModelWithOptions(request, runtime);
}

/**
 * @summary Queries the list of tasks.
 *
 * @param request DescribeListPocRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeListPocResponse
 */
DescribeListPocResponse Client::describeListPocWithOptions(const DescribeListPocRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskStatus()) {
    query["TaskStatus"] = request.getTaskStatus();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeListPoc"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeListPocResponse>();
}

/**
 * @summary Queries the list of tasks.
 *
 * @param request DescribeListPocRequest
 * @return DescribeListPocResponse
 */
DescribeListPocResponse Client::describeListPoc(const DescribeListPocRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeListPocWithOptions(request, runtime);
}

/**
 * @summary Queries the list of monitoring objects.
 *
 * @param request DescribeLoanExecListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoanExecListResponse
 */
DescribeLoanExecListResponse Client::describeLoanExecListWithOptions(const DescribeLoanExecListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBatchNo()) {
    query["batchNo"] = request.getBatchNo();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasMonitorObj()) {
    query["monitorObj"] = request.getMonitorObj();
  }

  if (!!request.hasMonitorStatus()) {
    query["monitorStatus"] = request.getMonitorStatus();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoanExecList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoanExecListResponse>();
}

/**
 * @summary Queries the list of monitoring objects.
 *
 * @param request DescribeLoanExecListRequest
 * @return DescribeLoanExecListResponse
 */
DescribeLoanExecListResponse Client::describeLoanExecList(const DescribeLoanExecListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoanExecListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of in-loan monitoring tasks.
 *
 * @param request DescribeLoanTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLoanTaskListResponse
 */
DescribeLoanTaskListResponse Client::describeLoanTaskListWithOptions(const DescribeLoanTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBatchNo()) {
    query["batchNo"] = request.getBatchNo();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasMonitorStatus()) {
    query["monitorStatus"] = request.getMonitorStatus();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLoanTaskList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLoanTaskListResponse>();
}

/**
 * @summary Retrieves the list of in-loan monitoring tasks.
 *
 * @param request DescribeLoanTaskListRequest
 * @return DescribeLoanTaskListResponse
 */
DescribeLoanTaskListResponse Client::describeLoanTaskList(const DescribeLoanTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLoanTaskListWithOptions(request, runtime);
}

/**
 * @summary Queries the tagging list.
 *
 * @param request DescribeMarkPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMarkPageResponse
 */
DescribeMarkPageResponse Client::describeMarkPageWithOptions(const DescribeMarkPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDirection()) {
    query["direction"] = request.getDirection();
  }

  if (!!request.hasIsPage()) {
    query["isPage"] = request.getIsPage();
  }

  if (!!request.hasOrder()) {
    query["order"] = request.getOrder();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTaskLogId()) {
    query["taskLogId"] = request.getTaskLogId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMarkPage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMarkPageResponse>();
}

/**
 * @summary Queries the tagging list.
 *
 * @param request DescribeMarkPageRequest
 * @return DescribeMarkPageResponse
 */
DescribeMarkPageResponse Client::describeMarkPage(const DescribeMarkPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMarkPageWithOptions(request, runtime);
}

/**
 * @summary Queries whether the current user has the specified permission.
 *
 * @param request DescribeMenuPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMenuPermissionResponse
 */
DescribeMenuPermissionResponse Client::describeMenuPermissionWithOptions(const DescribeMenuPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPermissionType()) {
    query["permissionType"] = request.getPermissionType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMenuPermission"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMenuPermissionResponse>();
}

/**
 * @summary Queries whether the current user has the specified permission.
 *
 * @param request DescribeMenuPermissionRequest
 * @return DescribeMenuPermissionResponse
 */
DescribeMenuPermissionResponse Client::describeMenuPermission(const DescribeMenuPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMenuPermissionWithOptions(request, runtime);
}

/**
 * @summary View Result
 *
 * @param request DescribeModelDetailsByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeModelDetailsByIdResponse
 */
DescribeModelDetailsByIdResponse Client::describeModelDetailsByIdWithOptions(const DescribeModelDetailsByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModelId()) {
    query["ModelId"] = request.getModelId();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeModelDetailsById"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeModelDetailsByIdResponse>();
}

/**
 * @summary View Result
 *
 * @param request DescribeModelDetailsByIdRequest
 * @return DescribeModelDetailsByIdResponse
 */
DescribeModelDetailsByIdResponse Client::describeModelDetailsById(const DescribeModelDetailsByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModelDetailsByIdWithOptions(request, runtime);
}

/**
 * @summary Get File Upload Credentials
 *
 * @param request DescribeModelOssPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeModelOssPolicyResponse
 */
DescribeModelOssPolicyResponse Client::describeModelOssPolicyWithOptions(const DescribeModelOssPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeModelOssPolicy"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeModelOssPolicyResponse>();
}

/**
 * @summary Get File Upload Credentials
 *
 * @param request DescribeModelOssPolicyRequest
 * @return DescribeModelOssPolicyResponse
 */
DescribeModelOssPolicyResponse Client::describeModelOssPolicy(const DescribeModelOssPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModelOssPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the limits of tasks.
 *
 * @param request DescribeMonitorTaskLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitorTaskLimitResponse
 */
DescribeMonitorTaskLimitResponse Client::describeMonitorTaskLimitWithOptions(const DescribeMonitorTaskLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMonitorTaskLimit"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMonitorTaskLimitResponse>();
}

/**
 * @summary Queries the limits of tasks.
 *
 * @param request DescribeMonitorTaskLimitRequest
 * @return DescribeMonitorTaskLimitResponse
 */
DescribeMonitorTaskLimitResponse Client::describeMonitorTaskLimit(const DescribeMonitorTaskLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitorTaskLimitWithOptions(request, runtime);
}

/**
 * @summary Queries a name list by page.
 *
 * @param request DescribeNameListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNameListResponse
 */
DescribeNameListResponse Client::describeNameListWithOptions(const DescribeNameListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasValue()) {
    query["value"] = request.getValue();
  }

  if (!!request.hasVariableId()) {
    query["variableId"] = request.getVariableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNameList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNameListResponse>();
}

/**
 * @summary Queries a name list by page.
 *
 * @param request DescribeNameListRequest
 * @return DescribeNameListResponse
 */
DescribeNameListResponse Client::describeNameList(const DescribeNameListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNameListWithOptions(request, runtime);
}

/**
 * @summary Downloads the content of a list.
 *
 * @param request DescribeNameListDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNameListDownloadUrlResponse
 */
DescribeNameListDownloadUrlResponse Client::describeNameListDownloadUrlWithOptions(const DescribeNameListDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasVariableId()) {
    query["variableId"] = request.getVariableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNameListDownloadUrl"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNameListDownloadUrlResponse>();
}

/**
 * @summary Downloads the content of a list.
 *
 * @param request DescribeNameListDownloadUrlRequest
 * @return DescribeNameListDownloadUrlResponse
 */
DescribeNameListDownloadUrlResponse Client::describeNameListDownloadUrl(const DescribeNameListDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNameListDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Queries the quota limit for lists.
 *
 * @param request DescribeNameListLimitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNameListLimitResponse
 */
DescribeNameListLimitResponse Client::describeNameListLimitWithOptions(const DescribeNameListLimitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNameListLimit"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNameListLimitResponse>();
}

/**
 * @summary Queries the quota limit for lists.
 *
 * @param request DescribeNameListLimitRequest
 * @return DescribeNameListLimitResponse
 */
DescribeNameListLimitResponse Client::describeNameListLimit(const DescribeNameListLimitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNameListLimitWithOptions(request, runtime);
}

/**
 * @summary Queries the content of a list.
 *
 * @param request DescribeNameListPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNameListPageListResponse
 */
DescribeNameListPageListResponse Client::describeNameListPageListWithOptions(const DescribeNameListPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasUpdateBeginTime()) {
    query["updateBeginTime"] = request.getUpdateBeginTime();
  }

  if (!!request.hasUpdateEndTime()) {
    query["updateEndTime"] = request.getUpdateEndTime();
  }

  if (!!request.hasValue()) {
    query["value"] = request.getValue();
  }

  if (!!request.hasVariableId()) {
    query["variableId"] = request.getVariableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNameListPageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNameListPageListResponse>();
}

/**
 * @summary Queries the content of a list.
 *
 * @param request DescribeNameListPageListRequest
 * @return DescribeNameListPageListResponse
 */
DescribeNameListPageListResponse Client::describeNameListPageList(const DescribeNameListPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNameListPageListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of name list types.
 *
 * @param request DescribeNameListTypeListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNameListTypeListResponse
 */
DescribeNameListTypeListResponse Client::describeNameListTypeListWithOptions(const DescribeNameListTypeListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNameListTypeList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNameListTypeListResponse>();
}

/**
 * @summary Queries the list of name list types.
 *
 * @param request DescribeNameListTypeListRequest
 * @return DescribeNameListTypeListResponse
 */
DescribeNameListTypeListResponse Client::describeNameListTypeList(const DescribeNameListTypeListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNameListTypeListWithOptions(request, runtime);
}

/**
 * @summary Queries a list of named lists.
 *
 * @param request DescribeNameListVariablePageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNameListVariablePageListResponse
 */
DescribeNameListVariablePageListResponse Client::describeNameListVariablePageListWithOptions(const DescribeNameListVariablePageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasNameListType()) {
    query["nameListType"] = request.getNameListType();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasValue()) {
    query["value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNameListVariablePageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNameListVariablePageListResponse>();
}

/**
 * @summary Queries a list of named lists.
 *
 * @param request DescribeNameListVariablePageListRequest
 * @return DescribeNameListVariablePageListResponse
 */
DescribeNameListVariablePageListResponse Client::describeNameListVariablePageList(const DescribeNameListVariablePageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNameListVariablePageListWithOptions(request, runtime);
}

/**
 * @summary Query Operation Log Monitoring Statistics
 *
 * @param request DescribeOperationLogMonitoringRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOperationLogMonitoringResponse
 */
DescribeOperationLogMonitoringResponse Client::describeOperationLogMonitoringWithOptions(const DescribeOperationLogMonitoringRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEndDate()) {
    query["endDate"] = request.getEndDate();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasStartDate()) {
    query["startDate"] = request.getStartDate();
  }

  if (!!request.hasUserNameSearch()) {
    query["userNameSearch"] = request.getUserNameSearch();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOperationLogMonitoring"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOperationLogMonitoringResponse>();
}

/**
 * @summary Query Operation Log Monitoring Statistics
 *
 * @param request DescribeOperationLogMonitoringRequest
 * @return DescribeOperationLogMonitoringResponse
 */
DescribeOperationLogMonitoringResponse Client::describeOperationLogMonitoring(const DescribeOperationLogMonitoringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOperationLogMonitoringWithOptions(request, runtime);
}

/**
 * @summary Queries the list of events by event name.
 *
 * @param request DescribeOperationLogPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOperationLogPageListResponse
 */
DescribeOperationLogPageListResponse Client::describeOperationLogPageListWithOptions(const DescribeOperationLogPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndDate()) {
    query["endDate"] = request.getEndDate();
  }

  if (!!request.hasOperationSummary()) {
    query["operationSummary"] = request.getOperationSummary();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasStartDate()) {
    query["startDate"] = request.getStartDate();
  }

  if (!!request.hasUserNameSearch()) {
    query["userNameSearch"] = request.getUserNameSearch();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOperationLogPageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOperationLogPageListResponse>();
}

/**
 * @summary Queries the list of events by event name.
 *
 * @param request DescribeOperationLogPageListRequest
 * @return DescribeOperationLogPageListResponse
 */
DescribeOperationLogPageListResponse Client::describeOperationLogPageList(const DescribeOperationLogPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOperationLogPageListWithOptions(request, runtime);
}

/**
 * @summary Queries the operator mapping list by customer ID.
 *
 * @param request DescribeOperatorListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOperatorListResponse
 */
DescribeOperatorListResponse Client::describeOperatorListWithOptions(const DescribeOperatorListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOperatorList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOperatorListResponse>();
}

/**
 * @summary Queries the operator mapping list by customer ID.
 *
 * @param request DescribeOperatorListRequest
 * @return DescribeOperatorListResponse
 */
DescribeOperatorListResponse Client::describeOperatorList(const DescribeOperatorListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOperatorListWithOptions(request, runtime);
}

/**
 * @summary Queries the operator mapping list.
 *
 * @param request DescribeOperatorListBySceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOperatorListBySceneResponse
 */
DescribeOperatorListBySceneResponse Client::describeOperatorListBySceneWithOptions(const DescribeOperatorListBySceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasScene()) {
    query["scene"] = request.getScene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOperatorListByScene"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOperatorListBySceneResponse>();
}

/**
 * @summary Queries the operator mapping list.
 *
 * @param request DescribeOperatorListBySceneRequest
 * @return DescribeOperatorListBySceneResponse
 */
DescribeOperatorListBySceneResponse Client::describeOperatorListByScene(const DescribeOperatorListBySceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOperatorListBySceneWithOptions(request, runtime);
}

/**
 * @summary Queries the list of operator mappings.
 *
 * @param request DescribeOperatorListByTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOperatorListByTypeResponse
 */
DescribeOperatorListByTypeResponse Client::describeOperatorListByTypeWithOptions(const DescribeOperatorListByTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOperatorListByType"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOperatorListByTypeResponse>();
}

/**
 * @summary Queries the list of operator mappings.
 *
 * @param request DescribeOperatorListByTypeRequest
 * @return DescribeOperatorListByTypeResponse
 */
DescribeOperatorListByTypeResponse Client::describeOperatorListByType(const DescribeOperatorListByTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOperatorListByTypeWithOptions(request, runtime);
}

/**
 * @summary Checks whether OSS is authorized.
 *
 * @param request DescribeOssAuthStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOssAuthStatusResponse
 */
DescribeOssAuthStatusResponse Client::describeOssAuthStatusWithOptions(const DescribeOssAuthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOssAuthStatus"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOssAuthStatusResponse>();
}

/**
 * @summary Checks whether OSS is authorized.
 *
 * @param request DescribeOssAuthStatusRequest
 * @return DescribeOssAuthStatusResponse
 */
DescribeOssAuthStatusResponse Client::describeOssAuthStatus(const DescribeOssAuthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOssAuthStatusWithOptions(request, runtime);
}

/**
 * @summary Retrieves the OSS policy.
 *
 * @param request DescribeOssPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOssPolicyResponse
 */
DescribeOssPolicyResponse Client::describeOssPolicyWithOptions(const DescribeOssPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasScene()) {
    query["scene"] = request.getScene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOssPolicy"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOssPolicyResponse>();
}

/**
 * @summary Retrieves the OSS policy.
 *
 * @param request DescribeOssPolicyRequest
 * @return DescribeOssPolicyResponse
 */
DescribeOssPolicyResponse Client::describeOssPolicy(const DescribeOssPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOssPolicyWithOptions(request, runtime);
}

/**
 * @summary Retrieves the upload credential for a file.
 *
 * @param request DescribeOssTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOssTokenResponse
 */
DescribeOssTokenResponse Client::describeOssTokenWithOptions(const DescribeOssTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasFileName()) {
    query["fileName"] = request.getFileName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasUploadType()) {
    query["uploadType"] = request.getUploadType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOssToken"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOssTokenResponse>();
}

/**
 * @summary Retrieves the upload credential for a file.
 *
 * @param request DescribeOssTokenRequest
 * @return DescribeOssTokenResponse
 */
DescribeOssTokenResponse Client::describeOssToken(const DescribeOssTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOssTokenWithOptions(request, runtime);
}

/**
 * @summary Queries the list of event properties.
 *
 * @param request DescribeParamByEventCodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeParamByEventCodesResponse
 */
DescribeParamByEventCodesResponse Client::describeParamByEventCodesWithOptions(const DescribeParamByEventCodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasParma()) {
    query["parma"] = request.getParma();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeParamByEventCodes"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeParamByEventCodesResponse>();
}

/**
 * @summary Queries the list of event properties.
 *
 * @param request DescribeParamByEventCodesRequest
 * @return DescribeParamByEventCodesResponse
 */
DescribeParamByEventCodesResponse Client::describeParamByEventCodes(const DescribeParamByEventCodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeParamByEventCodesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the file upload credential.
 *
 * @param request DescribePocOssTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePocOssTokenResponse
 */
DescribePocOssTokenResponse Client::describePocOssTokenWithOptions(const DescribePocOssTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePocOssToken"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePocOssTokenResponse>();
}

/**
 * @summary Retrieves the file upload credential.
 *
 * @param request DescribePocOssTokenRequest
 * @return DescribePocOssTokenResponse
 */
DescribePocOssTokenResponse Client::describePocOssToken(const DescribePocOssTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePocOssTokenWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of POC tasks.
 *
 * @param request DescribePocTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePocTaskListResponse
 */
DescribePocTaskListResponse Client::describePocTaskListWithOptions(const DescribePocTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePocTaskList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePocTaskListResponse>();
}

/**
 * @summary Retrieves the list of POC tasks.
 *
 * @param request DescribePocTaskListRequest
 * @return DescribePocTaskListResponse
 */
DescribePocTaskListResponse Client::describePocTaskList(const DescribePocTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePocTaskListWithOptions(request, runtime);
}

/**
 * @summary Checks whether the Stack private domain mode is enabled.
 *
 * @param request DescribePrivateStackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePrivateStackResponse
 */
DescribePrivateStackResponse Client::describePrivateStackWithOptions(const DescribePrivateStackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePrivateStack"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePrivateStackResponse>();
}

/**
 * @summary Checks whether the Stack private domain mode is enabled.
 *
 * @param request DescribePrivateStackRequest
 * @return DescribePrivateStackResponse
 */
DescribePrivateStackResponse Client::describePrivateStack(const DescribePrivateStackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePrivateStackWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a custom query variable.
 *
 * @param request DescribeQueryVariableDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQueryVariableDetailResponse
 */
DescribeQueryVariableDetailResponse Client::describeQueryVariableDetailWithOptions(const DescribeQueryVariableDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeQueryVariableDetail"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeQueryVariableDetailResponse>();
}

/**
 * @summary Queries the details of a custom query variable.
 *
 * @param request DescribeQueryVariableDetailRequest
 * @return DescribeQueryVariableDetailResponse
 */
DescribeQueryVariableDetailResponse Client::describeQueryVariableDetail(const DescribeQueryVariableDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQueryVariableDetailWithOptions(request, runtime);
}

/**
 * @summary Queries a list of custom query variables.
 *
 * @param request DescribeQueryVariablePageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQueryVariablePageListResponse
 */
DescribeQueryVariablePageListResponse Client::describeQueryVariablePageListWithOptions(const DescribeQueryVariablePageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDataSourceCode()) {
    query["dataSourceCode"] = request.getDataSourceCode();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeQueryVariablePageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeQueryVariablePageListResponse>();
}

/**
 * @summary Queries a list of custom query variables.
 *
 * @param request DescribeQueryVariablePageListRequest
 * @return DescribeQueryVariablePageListResponse
 */
DescribeQueryVariablePageListResponse Client::describeQueryVariablePageList(const DescribeQueryVariablePageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQueryVariablePageListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of variables under a data sample and scenario.
 *
 * @param request DescribeRecommendSceneVariablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecommendSceneVariablesResponse
 */
DescribeRecommendSceneVariablesResponse Client::describeRecommendSceneVariablesWithOptions(const DescribeRecommendSceneVariablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasSampleId()) {
    query["sampleId"] = request.getSampleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecommendSceneVariables"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecommendSceneVariablesResponse>();
}

/**
 * @summary Queries the list of variables under a data sample and scenario.
 *
 * @param request DescribeRecommendSceneVariablesRequest
 * @return DescribeRecommendSceneVariablesResponse
 */
DescribeRecommendSceneVariablesResponse Client::describeRecommendSceneVariables(const DescribeRecommendSceneVariablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecommendSceneVariablesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of variable recommendations.
 *
 * @param request DescribeRecommendTaskDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecommendTaskDetailResponse
 */
DescribeRecommendTaskDetailResponse Client::describeRecommendTaskDetailWithOptions(const DescribeRecommendTaskDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecommendTaskDetail"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecommendTaskDetailResponse>();
}

/**
 * @summary Queries the details of variable recommendations.
 *
 * @param request DescribeRecommendTaskDetailRequest
 * @return DescribeRecommendTaskDetailResponse
 */
DescribeRecommendTaskDetailResponse Client::describeRecommendTaskDetail(const DescribeRecommendTaskDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecommendTaskDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the variable recommendation list.
 *
 * @param request DescribeRecommendTaskPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecommendTaskPageListResponse
 */
DescribeRecommendTaskPageListResponse Client::describeRecommendTaskPageListWithOptions(const DescribeRecommendTaskPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTaskName()) {
    query["taskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecommendTaskPageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecommendTaskPageListResponse>();
}

/**
 * @summary Queries the variable recommendation list.
 *
 * @param request DescribeRecommendTaskPageListRequest
 * @return DescribeRecommendTaskPageListResponse
 */
DescribeRecommendTaskPageListResponse Client::describeRecommendTaskPageList(const DescribeRecommendTaskPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecommendTaskPageListWithOptions(request, runtime);
}

/**
 * @summary Queries the metric information of a variable.
 *
 * @param request DescribeRecommendVariablesVelocityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecommendVariablesVelocityResponse
 */
DescribeRecommendVariablesVelocityResponse Client::describeRecommendVariablesVelocityWithOptions(const DescribeRecommendVariablesVelocityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTaskId()) {
    query["taskId"] = request.getTaskId();
  }

  if (!!request.hasVariableIdsStr()) {
    query["variableIdsStr"] = request.getVariableIdsStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecommendVariablesVelocity"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecommendVariablesVelocityResponse>();
}

/**
 * @summary Queries the metric information of a variable.
 *
 * @param request DescribeRecommendVariablesVelocityRequest
 * @return DescribeRecommendVariablesVelocityResponse
 */
DescribeRecommendVariablesVelocityResponse Client::describeRecommendVariablesVelocity(const DescribeRecommendVariablesVelocityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecommendVariablesVelocityWithOptions(request, runtime);
}

/**
 * @summary Queries the list of supported metrics.
 *
 * @param request DescribeRecommendVelocitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecommendVelocitiesResponse
 */
DescribeRecommendVelocitiesResponse Client::describeRecommendVelocitiesWithOptions(const DescribeRecommendVelocitiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCode()) {
    query["code"] = request.getCode();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecommendVelocities"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecommendVelocitiesResponse>();
}

/**
 * @summary Queries the list of supported metrics.
 *
 * @param request DescribeRecommendVelocitiesRequest
 * @return DescribeRecommendVelocitiesResponse
 */
DescribeRecommendVelocitiesResponse Client::describeRecommendVelocities(const DescribeRecommendVelocitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecommendVelocitiesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of regions supported by API Gateway.
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Queries the list of regions supported by API Gateway.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the hit details of a request.
 *
 * @param request DescribeRequestHitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRequestHitResponse
 */
DescribeRequestHitResponse Client::describeRequestHitWithOptions(const DescribeRequestHitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasSRequestId()) {
    query["sRequestId"] = request.getSRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRequestHit"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRequestHitResponse>();
}

/**
 * @summary Queries the hit details of a request.
 *
 * @param request DescribeRequestHitRequest
 * @return DescribeRequestHitResponse
 */
DescribeRequestHitResponse Client::describeRequestHit(const DescribeRequestHitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRequestHitWithOptions(request, runtime);
}

/**
 * @summary Request Rate (QPS).
 *
 * @param request DescribeRequestPeakReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRequestPeakReportResponse
 */
DescribeRequestPeakReportResponse Client::describeRequestPeakReportWithOptions(const DescribeRequestPeakReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRequestPeakReport"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRequestPeakReportResponse>();
}

/**
 * @summary Request Rate (QPS).
 *
 * @param request DescribeRequestPeakReportRequest
 * @return DescribeRequestPeakReportResponse
 */
DescribeRequestPeakReportResponse Client::describeRequestPeakReport(const DescribeRequestPeakReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRequestPeakReportWithOptions(request, runtime);
}

/**
 * @summary Performs drill-down analysis.
 *
 * @param request DescribeResultCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResultCountResponse
 */
DescribeResultCountResponse Client::describeResultCountWithOptions(const DescribeResultCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResultCount"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResultCountResponse>();
}

/**
 * @summary Performs drill-down analysis.
 *
 * @param request DescribeResultCountRequest
 * @return DescribeResultCountResponse
 */
DescribeResultCountResponse Client::describeResultCount(const DescribeResultCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResultCountWithOptions(request, runtime);
}

/**
 * @summary Risk Map Overview Chart (Line Chart)
 *
 * @param request DescribeRiskLineChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRiskLineChartResponse
 */
DescribeRiskLineChartResponse Client::describeRiskLineChartWithOptions(const DescribeRiskLineChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRiskLineChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRiskLineChartResponse>();
}

/**
 * @summary Risk Map Overview Chart (Line Chart)
 *
 * @param request DescribeRiskLineChartRequest
 * @return DescribeRiskLineChartResponse
 */
DescribeRiskLineChartResponse Client::describeRiskLineChart(const DescribeRiskLineChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRiskLineChartWithOptions(request, runtime);
}

/**
 * @summary Tag Hit Rate Tag Hit Dimension
 *
 * @param request DescribeRiskTagsLineChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRiskTagsLineChartResponse
 */
DescribeRiskTagsLineChartResponse Client::describeRiskTagsLineChartWithOptions(const DescribeRiskTagsLineChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasEventCodes()) {
    query["EventCodes"] = request.getEventCodes();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRiskTagsLineChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRiskTagsLineChartResponse>();
}

/**
 * @summary Tag Hit Rate Tag Hit Dimension
 *
 * @param request DescribeRiskTagsLineChartRequest
 * @return DescribeRiskTagsLineChartResponse
 */
DescribeRiskTagsLineChartResponse Client::describeRiskTagsLineChart(const DescribeRiskTagsLineChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRiskTagsLineChartWithOptions(request, runtime);
}

/**
 * @summary Queries the policy overview list.
 *
 * @param request DescribeRuleBarChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleBarChartResponse
 */
DescribeRuleBarChartResponse Client::describeRuleBarChartWithOptions(const DescribeRuleBarChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleBarChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleBarChartResponse>();
}

/**
 * @summary Queries the policy overview list.
 *
 * @param request DescribeRuleBarChartRequest
 * @return DescribeRuleBarChartResponse
 */
DescribeRuleBarChartResponse Client::describeRuleBarChart(const DescribeRuleBarChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleBarChartWithOptions(request, runtime);
}

/**
 * @summary Queries the number of policies by user ID.
 *
 * @param request DescribeRuleCountByUserIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleCountByUserIdResponse
 */
DescribeRuleCountByUserIdResponse Client::describeRuleCountByUserIdWithOptions(const DescribeRuleCountByUserIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleCountByUserId"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleCountByUserIdResponse>();
}

/**
 * @summary Queries the number of policies by user ID.
 *
 * @param request DescribeRuleCountByUserIdRequest
 * @return DescribeRuleCountByUserIdResponse
 */
DescribeRuleCountByUserIdResponse Client::describeRuleCountByUserId(const DescribeRuleCountByUserIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleCountByUserIdWithOptions(request, runtime);
}

/**
 * @summary Query policy/version details.
 *
 * @param request DescribeRuleDetailByRuleIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleDetailByRuleIdResponse
 */
DescribeRuleDetailByRuleIdResponse Client::describeRuleDetailByRuleIdWithOptions(const DescribeRuleDetailByRuleIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasConsoleRuleId()) {
    query["consoleRuleId"] = request.getConsoleRuleId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.getRuleId();
  }

  if (!!request.hasRuleVersionId()) {
    query["ruleVersionId"] = request.getRuleVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleDetailByRuleId"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleDetailByRuleIdResponse>();
}

/**
 * @summary Query policy/version details.
 *
 * @param request DescribeRuleDetailByRuleIdRequest
 * @return DescribeRuleDetailByRuleIdResponse
 */
DescribeRuleDetailByRuleIdResponse Client::describeRuleDetailByRuleId(const DescribeRuleDetailByRuleIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleDetailByRuleIdWithOptions(request, runtime);
}

/**
 * @summary Queries the details of policy rule hits.
 *
 * @param request DescribeRuleHitRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleHitResponse
 */
DescribeRuleHitResponse Client::describeRuleHitWithOptions(const DescribeRuleHitRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRequestTime()) {
    query["requestTime"] = request.getRequestTime();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.getRuleId();
  }

  if (!!request.hasRuleSnapshotId()) {
    query["ruleSnapshotId"] = request.getRuleSnapshotId();
  }

  if (!!request.hasSRequestId()) {
    query["sRequestId"] = request.getSRequestId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleHit"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleHitResponse>();
}

/**
 * @summary Queries the details of policy rule hits.
 *
 * @param request DescribeRuleHitRequest
 * @return DescribeRuleHitResponse
 */
DescribeRuleHitResponse Client::describeRuleHit(const DescribeRuleHitRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleHitWithOptions(request, runtime);
}

/**
 * @summary Queries a list of policies.
 *
 * @param request DescribeRuleListByEventCodesListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleListByEventCodesListResponse
 */
DescribeRuleListByEventCodesListResponse Client::describeRuleListByEventCodesListWithOptions(const DescribeRuleListByEventCodesListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleListByEventCodesList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleListByEventCodesListResponse>();
}

/**
 * @summary Queries a list of policies.
 *
 * @param request DescribeRuleListByEventCodesListRequest
 * @return DescribeRuleListByEventCodesListResponse
 */
DescribeRuleListByEventCodesListResponse Client::describeRuleListByEventCodesList(const DescribeRuleListByEventCodesListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleListByEventCodesListWithOptions(request, runtime);
}

/**
 * @summary Queries a list of policies.
 *
 * @param request DescribeRulePageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRulePageListResponse
 */
DescribeRulePageListResponse Client::describeRulePageListWithOptions(const DescribeRulePageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRuleAuthType()) {
    query["ruleAuthType"] = request.getRuleAuthType();
  }

  if (!!request.hasRuleName()) {
    query["ruleName"] = request.getRuleName();
  }

  if (!!request.hasRuleStatus()) {
    query["ruleStatus"] = request.getRuleStatus();
  }

  if (!!request.hasSort()) {
    query["sort"] = request.getSort();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRulePageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRulePageListResponse>();
}

/**
 * @summary Queries a list of policies.
 *
 * @param request DescribeRulePageListRequest
 * @return DescribeRulePageListResponse
 */
DescribeRulePageListResponse Client::describeRulePageList(const DescribeRulePageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRulePageListWithOptions(request, runtime);
}

/**
 * @summary Query historical snapshots based on ruleId and version.
 *
 * @param request DescribeRuleSnapshotRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleSnapshotResponse
 */
DescribeRuleSnapshotResponse Client::describeRuleSnapshotWithOptions(const DescribeRuleSnapshotRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.getRuleId();
  }

  if (!!request.hasSnapshotVersion()) {
    query["snapshotVersion"] = request.getSnapshotVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleSnapshot"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleSnapshotResponse>();
}

/**
 * @summary Query historical snapshots based on ruleId and version.
 *
 * @param request DescribeRuleSnapshotRequest
 * @return DescribeRuleSnapshotResponse
 */
DescribeRuleSnapshotResponse Client::describeRuleSnapshot(const DescribeRuleSnapshotRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleSnapshotWithOptions(request, runtime);
}

/**
 * @summary Queries the list of policy versions.
 *
 * @param request DescribeRuleVersionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRuleVersionListResponse
 */
DescribeRuleVersionListResponse Client::describeRuleVersionListWithOptions(const DescribeRuleVersionListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasConsoleRuleId()) {
    query["consoleRuleId"] = request.getConsoleRuleId();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRuleVersionList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRuleVersionListResponse>();
}

/**
 * @summary Queries the list of policy versions.
 *
 * @param request DescribeRuleVersionListRequest
 * @return DescribeRuleVersionListResponse
 */
DescribeRuleVersionListResponse Client::describeRuleVersionList(const DescribeRuleVersionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRuleVersionListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of SDK downloads.
 *
 * @param request DescribeSDKDownloadListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSDKDownloadListResponse
 */
DescribeSDKDownloadListResponse Client::describeSDKDownloadListWithOptions(const DescribeSDKDownloadListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasDeviceType()) {
    query["deviceType"] = request.getDeviceType();
  }

  if (!!request.hasListType()) {
    query["listType"] = request.getListType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSDKDownloadList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSDKDownloadListResponse>();
}

/**
 * @summary Queries the list of SDK downloads.
 *
 * @param request DescribeSDKDownloadListRequest
 * @return DescribeSDKDownloadListResponse
 */
DescribeSDKDownloadListResponse Client::describeSDKDownloadList(const DescribeSDKDownloadListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSDKDownloadListWithOptions(request, runtime);
}

/**
 * @summary Queries SAF permissions.
 *
 * @param request DescribeSafConsoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSafConsoleResponse
 */
DescribeSafConsoleResponse Client::describeSafConsoleWithOptions(const DescribeSafConsoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasContent()) {
    query["content"] = request.getContent();
  }

  if (!!request.hasService()) {
    query["service"] = request.getService();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSafConsole"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSafConsoleResponse>();
}

/**
 * @summary Queries SAF permissions.
 *
 * @param request DescribeSafConsoleRequest
 * @return DescribeSafConsoleResponse
 */
DescribeSafConsoleResponse Client::describeSafConsole(const DescribeSafConsoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSafConsoleWithOptions(request, runtime);
}

/**
 * @summary Queries saf_de orders.
 *
 * @param request DescribeSafDeOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSafDeOrderResponse
 */
DescribeSafDeOrderResponse Client::describeSafDeOrderWithOptions(const DescribeSafDeOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndDate()) {
    query["endDate"] = request.getEndDate();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasStartDate()) {
    query["startDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSafDeOrder"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSafDeOrderResponse>();
}

/**
 * @summary Queries saf_de orders.
 *
 * @param request DescribeSafDeOrderRequest
 * @return DescribeSafDeOrderResponse
 */
DescribeSafDeOrderResponse Client::describeSafDeOrder(const DescribeSafDeOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSafDeOrderWithOptions(request, runtime);
}

/**
 * @summary Queries order information.
 *
 * @param request DescribeSafOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSafOrderResponse
 */
DescribeSafOrderResponse Client::describeSafOrderWithOptions(const DescribeSafOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEndDate()) {
    query["endDate"] = request.getEndDate();
  }

  if (!!request.hasExactProductCode()) {
    query["exactProductCode"] = request.getExactProductCode();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasStartDate()) {
    query["startDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSafOrder"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSafOrderResponse>();
}

/**
 * @summary Queries order information.
 *
 * @param request DescribeSafOrderRequest
 * @return DescribeSafOrderResponse
 */
DescribeSafOrderResponse Client::describeSafOrder(const DescribeSafOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSafOrderWithOptions(request, runtime);
}

/**
 * @summary Queries the access configuration.
 *
 * @param request DescribeSafStartConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSafStartConfigResponse
 */
DescribeSafStartConfigResponse Client::describeSafStartConfigWithOptions(const DescribeSafStartConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSafStartConfig"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSafStartConfigResponse>();
}

/**
 * @summary Queries the access configuration.
 *
 * @param request DescribeSafStartConfigRequest
 * @return DescribeSafStartConfigResponse
 */
DescribeSafStartConfigResponse Client::describeSafStartConfig(const DescribeSafStartConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSafStartConfigWithOptions(request, runtime);
}

/**
 * @summary Queries access configurations.
 *
 * @param request DescribeSafStartStepsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSafStartStepsResponse
 */
DescribeSafStartStepsResponse Client::describeSafStartStepsWithOptions(const DescribeSafStartStepsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasAliyunServer()) {
    query["aliyunServer"] = request.getAliyunServer();
  }

  if (!!request.hasDeviceTypesStr()) {
    query["deviceTypesStr"] = request.getDeviceTypesStr();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasLanguage()) {
    query["language"] = request.getLanguage();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasServerRegion()) {
    query["serverRegion"] = request.getServerRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSafStartSteps"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSafStartStepsResponse>();
}

/**
 * @summary Queries access configurations.
 *
 * @param request DescribeSafStartStepsRequest
 * @return DescribeSafStartStepsResponse
 */
DescribeSafStartStepsResponse Client::describeSafStartSteps(const DescribeSafStartStepsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSafStartStepsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of risk labels.
 *
 * @param request DescribeSafTagListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSafTagListResponse
 */
DescribeSafTagListResponse Client::describeSafTagListWithOptions(const DescribeSafTagListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTagName()) {
    query["TagName"] = request.getTagName();
  }

  if (!!request.hasApiId()) {
    query["apiId"] = request.getApiId();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSafTagList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSafTagListResponse>();
}

/**
 * @summary Retrieves the list of risk labels.
 *
 * @param request DescribeSafTagListRequest
 * @return DescribeSafTagListResponse
 */
DescribeSafTagListResponse Client::describeSafTagList(const DescribeSafTagListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSafTagListWithOptions(request, runtime);
}

/**
 * @summary Get File Upload Credentials
 *
 * @param request DescribeSampleBatchOssPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleBatchOssPolicyResponse
 */
DescribeSampleBatchOssPolicyResponse Client::describeSampleBatchOssPolicyWithOptions(const DescribeSampleBatchOssPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBatchName()) {
    query["batchName"] = request.getBatchName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleBatchOssPolicy"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleBatchOssPolicyResponse>();
}

/**
 * @summary Get File Upload Credentials
 *
 * @param request DescribeSampleBatchOssPolicyRequest
 * @return DescribeSampleBatchOssPolicyResponse
 */
DescribeSampleBatchOssPolicyResponse Client::describeSampleBatchOssPolicy(const DescribeSampleBatchOssPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleBatchOssPolicyWithOptions(request, runtime);
}

/**
 * @summary Sample List
 *
 * @param request DescribeSampleDataByBatchUUidPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleDataByBatchUUidPageResponse
 */
DescribeSampleDataByBatchUUidPageResponse Client::describeSampleDataByBatchUUidPageWithOptions(const DescribeSampleDataByBatchUUidPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBatchUuid()) {
    query["batchUuid"] = request.getBatchUuid();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDataValue()) {
    query["dataValue"] = request.getDataValue();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasUpdateBeginTime()) {
    query["updateBeginTime"] = request.getUpdateBeginTime();
  }

  if (!!request.hasUpdateEndTime()) {
    query["updateEndTime"] = request.getUpdateEndTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleDataByBatchUUidPage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleDataByBatchUUidPageResponse>();
}

/**
 * @summary Sample List
 *
 * @param request DescribeSampleDataByBatchUUidPageRequest
 * @return DescribeSampleDataByBatchUUidPageResponse
 */
DescribeSampleDataByBatchUUidPageResponse Client::describeSampleDataByBatchUUidPage(const DescribeSampleDataByBatchUUidPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleDataByBatchUUidPageWithOptions(request, runtime);
}

/**
 * @summary Performs a paging query on the sample list.
 *
 * @param request DescribeSampleDataListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleDataListResponse
 */
DescribeSampleDataListResponse Client::describeSampleDataListWithOptions(const DescribeSampleDataListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDeleteTag()) {
    query["deleteTag"] = request.getDeleteTag();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryContent()) {
    query["queryContent"] = request.getQueryContent();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasSampleId()) {
    query["sampleId"] = request.getSampleId();
  }

  if (!!request.hasScene()) {
    query["scene"] = request.getScene();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleDataList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleDataListResponse>();
}

/**
 * @summary Performs a paging query on the sample list.
 *
 * @param request DescribeSampleDataListRequest
 * @return DescribeSampleDataListResponse
 */
DescribeSampleDataListResponse Client::describeSampleDataList(const DescribeSampleDataListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleDataListWithOptions(request, runtime);
}

/**
 * @summary Sample List
 *
 * @param request DescribeSampleDataPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleDataPageResponse
 */
DescribeSampleDataPageResponse Client::describeSampleDataPageWithOptions(const DescribeSampleDataPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDataValue()) {
    query["dataValue"] = request.getDataValue();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasUpdateBeginTime()) {
    query["updateBeginTime"] = request.getUpdateBeginTime();
  }

  if (!!request.hasUpdateEndTime()) {
    query["updateEndTime"] = request.getUpdateEndTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleDataPage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleDataPageResponse>();
}

/**
 * @summary Sample List
 *
 * @param request DescribeSampleDataPageRequest
 * @return DescribeSampleDataPageResponse
 */
DescribeSampleDataPageResponse Client::describeSampleDataPage(const DescribeSampleDataPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleDataPageWithOptions(request, runtime);
}

/**
 * @summary Queries the authorization of a data sample.
 *
 * @param request DescribeSampleDemoDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleDemoDownloadUrlResponse
 */
DescribeSampleDemoDownloadUrlResponse Client::describeSampleDemoDownloadUrlWithOptions(const DescribeSampleDemoDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasScene()) {
    query["scene"] = request.getScene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleDemoDownloadUrl"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleDemoDownloadUrlResponse>();
}

/**
 * @summary Queries the authorization of a data sample.
 *
 * @param request DescribeSampleDemoDownloadUrlRequest
 * @return DescribeSampleDemoDownloadUrlResponse
 */
DescribeSampleDemoDownloadUrlResponse Client::describeSampleDemoDownloadUrl(const DescribeSampleDemoDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleDemoDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Queries the authorization information for downloading a data sample.
 *
 * @param request DescribeSampleDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleDownloadUrlResponse
 */
DescribeSampleDownloadUrlResponse Client::describeSampleDownloadUrlWithOptions(const DescribeSampleDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasSampleId()) {
    query["sampleId"] = request.getSampleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleDownloadUrl"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleDownloadUrlResponse>();
}

/**
 * @summary Queries the authorization information for downloading a data sample.
 *
 * @param request DescribeSampleDownloadUrlRequest
 * @return DescribeSampleDownloadUrlResponse
 */
DescribeSampleDownloadUrlResponse Client::describeSampleDownloadUrl(const DescribeSampleDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a data sample.
 *
 * @param request DescribeSampleInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleInfoResponse
 */
DescribeSampleInfoResponse Client::describeSampleInfoWithOptions(const DescribeSampleInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasVersions()) {
    query["versions"] = request.getVersions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleInfo"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleInfoResponse>();
}

/**
 * @summary Queries the details of a data sample.
 *
 * @param request DescribeSampleInfoRequest
 * @return DescribeSampleInfoResponse
 */
DescribeSampleInfoResponse Client::describeSampleInfo(const DescribeSampleInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the sample list.
 *
 * @param request DescribeSampleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleListResponse
 */
DescribeSampleListResponse Client::describeSampleListWithOptions(const DescribeSampleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasSampleType()) {
    query["sampleType"] = request.getSampleType();
  }

  if (!!request.hasSampleValue()) {
    query["sampleValue"] = request.getSampleValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleListResponse>();
}

/**
 * @summary Queries the sample list.
 *
 * @param request DescribeSampleListRequest
 * @return DescribeSampleListResponse
 */
DescribeSampleListResponse Client::describeSampleList(const DescribeSampleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of scenarios.
 *
 * @param request DescribeSampleSceneListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleSceneListResponse
 */
DescribeSampleSceneListResponse Client::describeSampleSceneListWithOptions(const DescribeSampleSceneListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleSceneList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleSceneListResponse>();
}

/**
 * @summary Queries the list of scenarios.
 *
 * @param request DescribeSampleSceneListRequest
 * @return DescribeSampleSceneListResponse
 */
DescribeSampleSceneListResponse Client::describeSampleSceneList(const DescribeSampleSceneListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleSceneListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of labels.
 *
 * @param request DescribeSampleTagListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleTagListResponse
 */
DescribeSampleTagListResponse Client::describeSampleTagListWithOptions(const DescribeSampleTagListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleTagList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleTagListResponse>();
}

/**
 * @summary Retrieves the list of labels.
 *
 * @param request DescribeSampleTagListRequest
 * @return DescribeSampleTagListResponse
 */
DescribeSampleTagListResponse Client::describeSampleTagList(const DescribeSampleTagListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleTagListWithOptions(request, runtime);
}

/**
 * @summary Queries the authorization information for sample uploads.
 *
 * @param request DescribeSampleUploadPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSampleUploadPolicyResponse
 */
DescribeSampleUploadPolicyResponse Client::describeSampleUploadPolicyWithOptions(const DescribeSampleUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSampleUploadPolicy"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSampleUploadPolicyResponse>();
}

/**
 * @summary Queries the authorization information for sample uploads.
 *
 * @param request DescribeSampleUploadPolicyRequest
 * @return DescribeSampleUploadPolicyResponse
 */
DescribeSampleUploadPolicyResponse Client::describeSampleUploadPolicy(const DescribeSampleUploadPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSampleUploadPolicyWithOptions(request, runtime);
}

/**
 * @summary Sample Batch List
 *
 * @param request DescribeSamplebatchPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSamplebatchPageResponse
 */
DescribeSamplebatchPageResponse Client::describeSamplebatchPageWithOptions(const DescribeSamplebatchPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasDataValue()) {
    query["dataValue"] = request.getDataValue();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSamplebatchPage"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSamplebatchPageResponse>();
}

/**
 * @summary Sample Batch List
 *
 * @param request DescribeSamplebatchPageRequest
 * @return DescribeSamplebatchPageResponse
 */
DescribeSamplebatchPageResponse Client::describeSamplebatchPage(const DescribeSamplebatchPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSamplebatchPageWithOptions(request, runtime);
}

/**
 * @summary Queries the dropdown list of scenario-based risk control events.
 *
 * @description Queries the dropdown list of scenario-based risk control events.
 *
 * @param request DescribeSceneAllEventNameCodeListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSceneAllEventNameCodeListResponse
 */
DescribeSceneAllEventNameCodeListResponse Client::describeSceneAllEventNameCodeListWithOptions(const DescribeSceneAllEventNameCodeListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSceneAllEventNameCodeList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSceneAllEventNameCodeListResponse>();
}

/**
 * @summary Queries the dropdown list of scenario-based risk control events.
 *
 * @description Queries the dropdown list of scenario-based risk control events.
 *
 * @param request DescribeSceneAllEventNameCodeListRequest
 * @return DescribeSceneAllEventNameCodeListResponse
 */
DescribeSceneAllEventNameCodeListResponse Client::describeSceneAllEventNameCodeList(const DescribeSceneAllEventNameCodeListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSceneAllEventNameCodeListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of scenario-based risk control events.
 *
 * @param request DescribeSceneEventPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSceneEventPageListResponse
 */
DescribeSceneEventPageListResponse Client::describeSceneEventPageListWithOptions(const DescribeSceneEventPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasNameOrCode()) {
    query["nameOrCode"] = request.getNameOrCode();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSceneEventPageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSceneEventPageListResponse>();
}

/**
 * @summary Queries the list of scenario-based risk control events.
 *
 * @param request DescribeSceneEventPageListRequest
 * @return DescribeSceneEventPageListResponse
 */
DescribeSceneEventPageListResponse Client::describeSceneEventPageList(const DescribeSceneEventPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSceneEventPageListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of scenario-based risk control event policies.
 *
 * @description Queries the list of scenario-based risk control event policies.
 *
 * @param request DescribeSceneRulePageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSceneRulePageListResponse
 */
DescribeSceneRulePageListResponse Client::describeSceneRulePageListWithOptions(const DescribeSceneRulePageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRuleAuthType()) {
    query["ruleAuthType"] = request.getRuleAuthType();
  }

  if (!!request.hasRuleName()) {
    query["ruleName"] = request.getRuleName();
  }

  if (!!request.hasRuleStatus()) {
    query["ruleStatus"] = request.getRuleStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSceneRulePageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSceneRulePageListResponse>();
}

/**
 * @summary Queries the list of scenario-based risk control event policies.
 *
 * @description Queries the list of scenario-based risk control event policies.
 *
 * @param request DescribeSceneRulePageListRequest
 * @return DescribeSceneRulePageListResponse
 */
DescribeSceneRulePageListResponse Client::describeSceneRulePageList(const DescribeSceneRulePageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSceneRulePageListWithOptions(request, runtime);
}

/**
 * @summary Score Distribution
 *
 * @param request DescribeScoreListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScoreListResponse
 */
DescribeScoreListResponse Client::describeScoreListWithOptions(const DescribeScoreListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScoreList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScoreListResponse>();
}

/**
 * @summary Score Distribution
 *
 * @param request DescribeScoreListRequest
 * @return DescribeScoreListResponse
 */
DescribeScoreListResponse Client::describeScoreList(const DescribeScoreListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScoreListWithOptions(request, runtime);
}

/**
 * @summary Analyzes the quantity distribution across score ranges.
 *
 * @param request DescribeScoreSectionNumLineChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScoreSectionNumLineChartResponse
 */
DescribeScoreSectionNumLineChartResponse Client::describeScoreSectionNumLineChartWithOptions(const DescribeScoreSectionNumLineChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.getBeginTime();
  }

  if (!!request.hasByPassEventCodes()) {
    query["byPassEventCodes"] = request.getByPassEventCodes();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasMainEventCodes()) {
    query["mainEventCodes"] = request.getMainEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasShuntEventCodes()) {
    query["shuntEventCodes"] = request.getShuntEventCodes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScoreSectionNumLineChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScoreSectionNumLineChartResponse>();
}

/**
 * @summary Analyzes the quantity distribution across score ranges.
 *
 * @param request DescribeScoreSectionNumLineChartRequest
 * @return DescribeScoreSectionNumLineChartResponse
 */
DescribeScoreSectionNumLineChartResponse Client::describeScoreSectionNumLineChart(const DescribeScoreSectionNumLineChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScoreSectionNumLineChartWithOptions(request, runtime);
}

/**
 * @summary Queries the score range distribution of main events, bypass events, and diversion events.
 *
 * @param request DescribeScoreSectionPieChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScoreSectionPieChartResponse
 */
DescribeScoreSectionPieChartResponse Client::describeScoreSectionPieChartWithOptions(const DescribeScoreSectionPieChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasEventType()) {
    query["eventType"] = request.getEventType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScoreSectionPieChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScoreSectionPieChartResponse>();
}

/**
 * @summary Queries the score range distribution of main events, bypass events, and diversion events.
 *
 * @param request DescribeScoreSectionPieChartRequest
 * @return DescribeScoreSectionPieChartResponse
 */
DescribeScoreSectionPieChartResponse Client::describeScoreSectionPieChart(const DescribeScoreSectionPieChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScoreSectionPieChartWithOptions(request, runtime);
}

/**
 * @summary Score Range Proportion Analysis
 *
 * @param request DescribeScoreSectionRatioLineChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScoreSectionRatioLineChartResponse
 */
DescribeScoreSectionRatioLineChartResponse Client::describeScoreSectionRatioLineChartWithOptions(const DescribeScoreSectionRatioLineChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.getBeginTime();
  }

  if (!!request.hasByPassEventCodes()) {
    query["byPassEventCodes"] = request.getByPassEventCodes();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasMainEventCodes()) {
    query["mainEventCodes"] = request.getMainEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasShuntEventCodes()) {
    query["shuntEventCodes"] = request.getShuntEventCodes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScoreSectionRatioLineChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScoreSectionRatioLineChartResponse>();
}

/**
 * @summary Score Range Proportion Analysis
 *
 * @param request DescribeScoreSectionRatioLineChartRequest
 * @return DescribeScoreSectionRatioLineChartResponse
 */
DescribeScoreSectionRatioLineChartResponse Client::describeScoreSectionRatioLineChart(const DescribeScoreSectionRatioLineChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeScoreSectionRatioLineChartWithOptions(request, runtime);
}

/**
 * @summary Queries the list of task IDs.
 *
 * @param request DescribeSelectItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSelectItemResponse
 */
DescribeSelectItemResponse Client::describeSelectItemWithOptions(const DescribeSelectItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSelectItem"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSelectItemResponse>();
}

/**
 * @summary Queries the list of task IDs.
 *
 * @param request DescribeSelectItemRequest
 * @return DescribeSelectItemResponse
 */
DescribeSelectItemResponse Client::describeSelectItem(const DescribeSelectItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSelectItemWithOptions(request, runtime);
}

/**
 * @summary Retrieves the dropdown values for ServiceAppkey.
 *
 * @param request DescribeServiceAppKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceAppKeyResponse
 */
DescribeServiceAppKeyResponse Client::describeServiceAppKeyWithOptions(const DescribeServiceAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceAppKey"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceAppKeyResponse>();
}

/**
 * @summary Retrieves the dropdown values for ServiceAppkey.
 *
 * @param request DescribeServiceAppKeyRequest
 * @return DescribeServiceAppKeyResponse
 */
DescribeServiceAppKeyResponse Client::describeServiceAppKey(const DescribeServiceAppKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceAppKeyWithOptions(request, runtime);
}

/**
 * @summary ServiceCodeName Information
 *
 * @param request DescribeServiceCodeNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceCodeNameResponse
 */
DescribeServiceCodeNameResponse Client::describeServiceCodeNameWithOptions(const DescribeServiceCodeNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTab()) {
    query["Tab"] = request.getTab();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceCodeName"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceCodeNameResponse>();
}

/**
 * @summary ServiceCodeName Information
 *
 * @param request DescribeServiceCodeNameRequest
 * @return DescribeServiceCodeNameResponse
 */
DescribeServiceCodeNameResponse Client::describeServiceCodeName(const DescribeServiceCodeNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceCodeNameWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of services.
 *
 * @param request DescribeServiceListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeServiceListResponse
 */
DescribeServiceListResponse Client::describeServiceListWithOptions(const DescribeServiceListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeServiceList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeServiceListResponse>();
}

/**
 * @summary Retrieves the list of services.
 *
 * @param request DescribeServiceListRequest
 * @return DescribeServiceListResponse
 */
DescribeServiceListResponse Client::describeServiceList(const DescribeServiceListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeServiceListWithOptions(request, runtime);
}

/**
 * @summary Estimates call information.
 *
 * @param request DescribeSimulationPreditInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSimulationPreditInfoResponse
 */
DescribeSimulationPreditInfoResponse Client::describeSimulationPreditInfoWithOptions(const DescribeSimulationPreditInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRulesStr()) {
    query["rulesStr"] = request.getRulesStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSimulationPreditInfo"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSimulationPreditInfoResponse>();
}

/**
 * @summary Estimates call information.
 *
 * @param request DescribeSimulationPreditInfoRequest
 * @return DescribeSimulationPreditInfoResponse
 */
DescribeSimulationPreditInfoResponse Client::describeSimulationPreditInfo(const DescribeSimulationPreditInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSimulationPreditInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the number of task records.
 *
 * @param request DescribeSimulationTaskCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSimulationTaskCountResponse
 */
DescribeSimulationTaskCountResponse Client::describeSimulationTaskCountWithOptions(const DescribeSimulationTaskCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasDataSourceConfig()) {
    query["dataSourceConfig"] = request.getDataSourceConfig();
  }

  if (!!request.hasDataSourceType()) {
    query["dataSourceType"] = request.getDataSourceType();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasFiltersStr()) {
    query["filtersStr"] = request.getFiltersStr();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSimulationTaskCount"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSimulationTaskCountResponse>();
}

/**
 * @summary Queries the number of task records.
 *
 * @param request DescribeSimulationTaskCountRequest
 * @return DescribeSimulationTaskCountResponse
 */
DescribeSimulationTaskCountResponse Client::describeSimulationTaskCount(const DescribeSimulationTaskCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSimulationTaskCountWithOptions(request, runtime);
}

/**
 * @summary Queries the task list.
 *
 * @param request DescribeSimulationTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSimulationTaskListResponse
 */
DescribeSimulationTaskListResponse Client::describeSimulationTaskListWithOptions(const DescribeSimulationTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSimulationTaskList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSimulationTaskListResponse>();
}

/**
 * @summary Queries the task list.
 *
 * @param request DescribeSimulationTaskListRequest
 * @return DescribeSimulationTaskListResponse
 */
DescribeSimulationTaskListResponse Client::describeSimulationTaskList(const DescribeSimulationTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSimulationTaskListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the project configuration.
 *
 * @param request DescribeSlsUrlConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlsUrlConfigResponse
 */
DescribeSlsUrlConfigResponse Client::describeSlsUrlConfigWithOptions(const DescribeSlsUrlConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlsUrlConfig"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlsUrlConfigResponse>();
}

/**
 * @summary Retrieves the project configuration.
 *
 * @param request DescribeSlsUrlConfigRequest
 * @return DescribeSlsUrlConfigResponse
 */
DescribeSlsUrlConfigResponse Client::describeSlsUrlConfig(const DescribeSlsUrlConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlsUrlConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the list of policies that support simulation.
 *
 * @param request DescribeSupportRuleListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSupportRuleListResponse
 */
DescribeSupportRuleListResponse Client::describeSupportRuleListWithOptions(const DescribeSupportRuleListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSupportRuleList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSupportRuleListResponse>();
}

/**
 * @summary Queries the list of policies that support simulation.
 *
 * @param request DescribeSupportRuleListRequest
 * @return DescribeSupportRuleListResponse
 */
DescribeSupportRuleListResponse Client::describeSupportRuleList(const DescribeSupportRuleListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSupportRuleListWithOptions(request, runtime);
}

/**
 * @summary Queries the label list.
 *
 * @param request DescribeTagListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagListResponse
 */
DescribeTagListResponse Client::describeTagListWithOptions(const DescribeTagListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagListResponse>();
}

/**
 * @summary Queries the label list.
 *
 * @param request DescribeTagListRequest
 * @return DescribeTagListResponse
 */
DescribeTagListResponse Client::describeTagList(const DescribeTagListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagListWithOptions(request, runtime);
}

/**
 * @summary Queries the tag overview list.
 *
 * @param request DescribeTagsBarChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagsBarChartResponse
 */
DescribeTagsBarChartResponse Client::describeTagsBarChartWithOptions(const DescribeTagsBarChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasResult()) {
    query["result"] = request.getResult();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagsBarChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagsBarChartResponse>();
}

/**
 * @summary Queries the tag overview list.
 *
 * @param request DescribeTagsBarChartRequest
 * @return DescribeTagsBarChartResponse
 */
DescribeTagsBarChartResponse Client::describeTagsBarChart(const DescribeTagsBarChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsBarChartWithOptions(request, runtime);
}

/**
 * @summary Detects label fluctuations.
 *
 * @param request DescribeTagsFluctuationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagsFluctuationResponse
 */
DescribeTagsFluctuationResponse Client::describeTagsFluctuationWithOptions(const DescribeTagsFluctuationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagsFluctuation"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagsFluctuationResponse>();
}

/**
 * @summary Detects label fluctuations.
 *
 * @param request DescribeTagsFluctuationRequest
 * @return DescribeTagsFluctuationResponse
 */
DescribeTagsFluctuationResponse Client::describeTagsFluctuation(const DescribeTagsFluctuationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsFluctuationWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of labels.
 *
 * @param request DescribeTagsListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagsListResponse
 */
DescribeTagsListResponse Client::describeTagsListWithOptions(const DescribeTagsListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagsList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagsListResponse>();
}

/**
 * @summary Retrieves the list of labels.
 *
 * @param request DescribeTagsListRequest
 * @return DescribeTagsListResponse
 */
DescribeTagsListResponse Client::describeTagsList(const DescribeTagsListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsListWithOptions(request, runtime);
}

/**
 * @summary Analyzes the number of label hits.
 *
 * @param request DescribeTagsNumLineChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagsNumLineChartResponse
 */
DescribeTagsNumLineChartResponse Client::describeTagsNumLineChartWithOptions(const DescribeTagsNumLineChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.getBeginTime();
  }

  if (!!request.hasByPassEventCodes()) {
    query["byPassEventCodes"] = request.getByPassEventCodes();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasMainEventCodes()) {
    query["mainEventCodes"] = request.getMainEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasShuntEventCodes()) {
    query["shuntEventCodes"] = request.getShuntEventCodes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagsNumLineChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagsNumLineChartResponse>();
}

/**
 * @summary Analyzes the number of label hits.
 *
 * @param request DescribeTagsNumLineChartRequest
 * @return DescribeTagsNumLineChartResponse
 */
DescribeTagsNumLineChartResponse Client::describeTagsNumLineChart(const DescribeTagsNumLineChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsNumLineChartWithOptions(request, runtime);
}

/**
 * @summary Analyzes the tag hit ratio distribution.
 *
 * @param request DescribeTagsRatioLineChartRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagsRatioLineChartResponse
 */
DescribeTagsRatioLineChartResponse Client::describeTagsRatioLineChartWithOptions(const DescribeTagsRatioLineChartRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.getBeginTime();
  }

  if (!!request.hasByPassEventCodes()) {
    query["byPassEventCodes"] = request.getByPassEventCodes();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasMainEventCodes()) {
    query["mainEventCodes"] = request.getMainEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasShuntEventCodes()) {
    query["shuntEventCodes"] = request.getShuntEventCodes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagsRatioLineChart"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagsRatioLineChartResponse>();
}

/**
 * @summary Analyzes the tag hit ratio distribution.
 *
 * @param request DescribeTagsRatioLineChartRequest
 * @return DescribeTagsRatioLineChartResponse
 */
DescribeTagsRatioLineChartResponse Client::describeTagsRatioLineChart(const DescribeTagsRatioLineChartRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsRatioLineChartWithOptions(request, runtime);
}

/**
 * @summary Queries the trend of tag hits.
 *
 * @param request DescribeTagsTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagsTrendResponse
 */
DescribeTagsTrendResponse Client::describeTagsTrendWithOptions(const DescribeTagsTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBeginTime()) {
    query["beginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasResult()) {
    query["result"] = request.getResult();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTagsTrend"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagsTrendResponse>();
}

/**
 * @summary Queries the trend of tag hits.
 *
 * @param request DescribeTagsTrendRequest
 * @return DescribeTagsTrendResponse
 */
DescribeTagsTrendResponse Client::describeTagsTrend(const DescribeTagsTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsTrendWithOptions(request, runtime);
}

/**
 * @summary Queries the task list.
 *
 * @param request DescribeTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTaskListResponse
 */
DescribeTaskListResponse Client::describeTaskListWithOptions(const DescribeTaskListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasIsPage()) {
    query["IsPage"] = request.getIsPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTaskList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTaskListResponse>();
}

/**
 * @summary Queries the task list.
 *
 * @param request DescribeTaskListRequest
 * @return DescribeTaskListResponse
 */
DescribeTaskListResponse Client::describeTaskList(const DescribeTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTaskListWithOptions(request, runtime);
}

/**
 * @summary Queries the task logs.
 *
 * @param request DescribeTaskLogListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTaskLogListResponse
 */
DescribeTaskLogListResponse Client::describeTaskLogListWithOptions(const DescribeTaskLogListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasIsPage()) {
    query["IsPage"] = request.getIsPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskLogId()) {
    query["TaskLogId"] = request.getTaskLogId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTaskLogList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTaskLogListResponse>();
}

/**
 * @summary Queries the task logs.
 *
 * @param request DescribeTaskLogListRequest
 * @return DescribeTaskLogListResponse
 */
DescribeTaskLogListResponse Client::describeTaskLogList(const DescribeTaskLogListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTaskLogListWithOptions(request, runtime);
}

/**
 * @summary Queries the total number of events.
 *
 * @param request DescribeTemplateCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplateCountResponse
 */
DescribeTemplateCountResponse Client::describeTemplateCountWithOptions(const DescribeTemplateCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTemplateCount"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTemplateCountResponse>();
}

/**
 * @summary Queries the total number of events.
 *
 * @param request DescribeTemplateCountRequest
 * @return DescribeTemplateCountResponse
 */
DescribeTemplateCountResponse Client::describeTemplateCount(const DescribeTemplateCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTemplateCountWithOptions(request, runtime);
}

/**
 * @summary Downloads a template.
 *
 * @param request DescribeTemplateDownloadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplateDownloadResponse
 */
DescribeTemplateDownloadResponse Client::describeTemplateDownloadWithOptions(const DescribeTemplateDownloadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTemplateDownload"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTemplateDownloadResponse>();
}

/**
 * @summary Downloads a template.
 *
 * @param request DescribeTemplateDownloadRequest
 * @return DescribeTemplateDownloadResponse
 */
DescribeTemplateDownloadResponse Client::describeTemplateDownload(const DescribeTemplateDownloadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTemplateDownloadWithOptions(request, runtime);
}

/**
 * @summary Queries a list of events by event name.
 *
 * @param request DescribeTemplatePageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTemplatePageListResponse
 */
DescribeTemplatePageListResponse Client::describeTemplatePageListWithOptions(const DescribeTemplatePageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTemplateName()) {
    query["templateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateSearchItem()) {
    query["templateSearchItem"] = request.getTemplateSearchItem();
  }

  if (!!request.hasTemplateStatus()) {
    query["templateStatus"] = request.getTemplateStatus();
  }

  if (!!request.hasTemplateType()) {
    query["templateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTemplatePageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTemplatePageListResponse>();
}

/**
 * @summary Queries a list of events by event name.
 *
 * @param request DescribeTemplatePageListRequest
 * @return DescribeTemplatePageListResponse
 */
DescribeTemplatePageListResponse Client::describeTemplatePageList(const DescribeTemplatePageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTemplatePageListWithOptions(request, runtime);
}

/**
 * @summary Queries the list of services used by the user.
 *
 * @param request DescribeUsedServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUsedServiceResponse
 */
DescribeUsedServiceResponse Client::describeUsedServiceWithOptions(const DescribeUsedServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUsedService"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUsedServiceResponse>();
}

/**
 * @summary Queries the list of services used by the user.
 *
 * @param request DescribeUsedServiceRequest
 * @return DescribeUsedServiceResponse
 */
DescribeUsedServiceResponse Client::describeUsedService(const DescribeUsedServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUsedServiceWithOptions(request, runtime);
}

/**
 * @summary Retrieves the information about the current logged-on user.
 *
 * @param request DescribeUserInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserInfoResponse
 */
DescribeUserInfoResponse Client::describeUserInfoWithOptions(const DescribeUserInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserInfo"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserInfoResponse>();
}

/**
 * @summary Retrieves the information about the current logged-on user.
 *
 * @param request DescribeUserInfoRequest
 * @return DescribeUserInfoResponse
 */
DescribeUserInfoResponse Client::describeUserInfo(const DescribeUserInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserInfoWithOptions(request, runtime);
}

/**
 * @summary Queries variable binding information.
 *
 * @param request DescribeVariableBindDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVariableBindDetailResponse
 */
DescribeVariableBindDetailResponse Client::describeVariableBindDetailWithOptions(const DescribeVariableBindDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasDefineId()) {
    query["defineId"] = request.getDefineId();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVariableBindDetail"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVariableBindDetailResponse>();
}

/**
 * @summary Queries variable binding information.
 *
 * @param request DescribeVariableBindDetailRequest
 * @return DescribeVariableBindDetailResponse
 */
DescribeVariableBindDetailResponse Client::describeVariableBindDetail(const DescribeVariableBindDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVariableBindDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a variable.
 *
 * @param request DescribeVariableDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVariableDetailResponse
 */
DescribeVariableDetailResponse Client::describeVariableDetailWithOptions(const DescribeVariableDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVariableDetail"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVariableDetailResponse>();
}

/**
 * @summary Queries the details of a variable.
 *
 * @param request DescribeVariableDetailRequest
 * @return DescribeVariableDetailResponse
 */
DescribeVariableDetailResponse Client::describeVariableDetail(const DescribeVariableDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVariableDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the billing information of variables.
 *
 * @param request DescribeVariableFeeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVariableFeeResponse
 */
DescribeVariableFeeResponse Client::describeVariableFeeWithOptions(const DescribeVariableFeeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasIds()) {
    query["ids"] = request.getIds();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVariableFee"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVariableFeeResponse>();
}

/**
 * @summary Queries the billing information of variables.
 *
 * @param request DescribeVariableFeeRequest
 * @return DescribeVariableFeeResponse
 */
DescribeVariableFeeResponse Client::describeVariableFee(const DescribeVariableFeeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVariableFeeWithOptions(request, runtime);
}

/**
 * @summary Queries the details of variables.
 *
 * @param request DescribeVariableListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVariableListResponse
 */
DescribeVariableListResponse Client::describeVariableListWithOptions(const DescribeVariableListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRefObjId()) {
    query["refObjId"] = request.getRefObjId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasSourceType()) {
    query["sourceType"] = request.getSourceType();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  if (!!request.hasTypesStr()) {
    query["typesStr"] = request.getTypesStr();
  }

  if (!!request.hasValue()) {
    query["value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVariableList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVariableListResponse>();
}

/**
 * @summary Queries the details of variables.
 *
 * @param request DescribeVariableListRequest
 * @return DescribeVariableListResponse
 */
DescribeVariableListResponse Client::describeVariableList(const DescribeVariableListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVariableListWithOptions(request, runtime);
}

/**
 * @summary Queries variable definitions.
 *
 * @param request DescribeVariableMarketListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVariableMarketListResponse
 */
DescribeVariableMarketListResponse Client::describeVariableMarketListWithOptions(const DescribeVariableMarketListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasChargingMode()) {
    query["chargingMode"] = request.getChargingMode();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPaging()) {
    query["paging"] = request.getPaging();
  }

  if (!!request.hasQueryContent()) {
    query["queryContent"] = request.getQueryContent();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasScenesStr()) {
    query["scenesStr"] = request.getScenesStr();
  }

  if (!!request.hasSource()) {
    query["source"] = request.getSource();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVariableMarketList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVariableMarketListResponse>();
}

/**
 * @summary Queries variable definitions.
 *
 * @param request DescribeVariableMarketListRequest
 * @return DescribeVariableMarketListResponse
 */
DescribeVariableMarketListResponse Client::describeVariableMarketList(const DescribeVariableMarketListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVariableMarketListWithOptions(request, runtime);
}

/**
 * @summary Queries configuration information.
 *
 * @param request DescribeVariableSceneListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVariableSceneListResponse
 */
DescribeVariableSceneListResponse Client::describeVariableSceneListWithOptions(const DescribeVariableSceneListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBizType()) {
    query["bizType"] = request.getBizType();
  }

  if (!!request.hasConfigKey()) {
    query["configKey"] = request.getConfigKey();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPaging()) {
    query["paging"] = request.getPaging();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVariableSceneList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVariableSceneListResponse>();
}

/**
 * @summary Queries configuration information.
 *
 * @param request DescribeVariableSceneListRequest
 * @return DescribeVariableSceneListResponse
 */
DescribeVariableSceneListResponse Client::describeVariableSceneList(const DescribeVariableSceneListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVariableSceneListWithOptions(request, runtime);
}

/**
 * @summary Cumulative Variable Version Details.
 *
 * @param request DescribeVariableVersionDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVariableVersionDetailResponse
 */
DescribeVariableVersionDetailResponse Client::describeVariableVersionDetailWithOptions(const DescribeVariableVersionDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasObjectCode()) {
    query["objectCode"] = request.getObjectCode();
  }

  if (!!request.hasObjectId()) {
    query["objectId"] = request.getObjectId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  if (!!request.hasVersion()) {
    query["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVariableVersionDetail"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVariableVersionDetailResponse>();
}

/**
 * @summary Cumulative Variable Version Details.
 *
 * @param request DescribeVariableVersionDetailRequest
 * @return DescribeVariableVersionDetailResponse
 */
DescribeVariableVersionDetailResponse Client::describeVariableVersionDetail(const DescribeVariableVersionDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVariableVersionDetailWithOptions(request, runtime);
}

/**
 * @summary Variable Version List Query
 *
 * @param request DescribeVersionPageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVersionPageListResponse
 */
DescribeVersionPageListResponse Client::describeVersionPageListWithOptions(const DescribeVersionPageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasObjectCode()) {
    query["objectCode"] = request.getObjectCode();
  }

  if (!!request.hasObjectId()) {
    query["objectId"] = request.getObjectId();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPaging()) {
    query["paging"] = request.getPaging();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVersionPageList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVersionPageListResponse>();
}

/**
 * @summary Variable Version List Query
 *
 * @param request DescribeVersionPageListRequest
 * @return DescribeVersionPageListResponse
 */
DescribeVersionPageListResponse Client::describeVersionPageList(const DescribeVersionPageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVersionPageListWithOptions(request, runtime);
}

/**
 * @summary Download sample file
 *
 * @param request DownloadSampleFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadSampleFileResponse
 */
DownloadSampleFileResponse Client::downloadSampleFileWithOptions(const DownloadSampleFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasSampleId()) {
    query["SampleId"] = request.getSampleId();
  }

  if (!!request.hasTab()) {
    query["Tab"] = request.getTab();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadSampleFile"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadSampleFileResponse>();
}

/**
 * @summary Download sample file
 *
 * @param request DownloadSampleFileRequest
 * @return DownloadSampleFileResponse
 */
DownloadSampleFileResponse Client::downloadSampleFile(const DownloadSampleFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadSampleFileWithOptions(request, runtime);
}

/**
 * @summary Sample List Data Download
 *
 * @param request DownloadSmapleBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadSmapleBatchResponse
 */
DownloadSmapleBatchResponse Client::downloadSmapleBatchWithOptions(const DownloadSmapleBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBatchUuid()) {
    query["batchUuid"] = request.getBatchUuid();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadSmapleBatch"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadSmapleBatchResponse>();
}

/**
 * @summary Sample List Data Download
 *
 * @param request DownloadSmapleBatchRequest
 * @return DownloadSmapleBatchResponse
 */
DownloadSmapleBatchResponse Client::downloadSmapleBatch(const DownloadSmapleBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadSmapleBatchWithOptions(request, runtime);
}

/**
 * @summary Download subtask result
 *
 * @param request DownloadSubTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadSubTaskResultResponse
 */
DownloadSubTaskResultResponse Client::downloadSubTaskResultWithOptions(const DownloadSubTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasSubTaskId()) {
    query["SubTaskId"] = request.getSubTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadSubTaskResult"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadSubTaskResultResponse>();
}

/**
 * @summary Download subtask result
 *
 * @param request DownloadSubTaskResultRequest
 * @return DownloadSubTaskResultResponse
 */
DownloadSubTaskResultResponse Client::downloadSubTaskResult(const DownloadSubTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadSubTaskResultWithOptions(request, runtime);
}

/**
 * @summary Tests a custom variable.
 *
 * @param request ExpressionTestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExpressionTestResponse
 */
ExpressionTestResponse Client::expressionTestWithOptions(const ExpressionTestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasExpression()) {
    query["expression"] = request.getExpression();
  }

  if (!!request.hasExpressionVariable()) {
    query["expressionVariable"] = request.getExpressionVariable();
  }

  if (!!request.hasExpressionVariableIds()) {
    query["expressionVariableIds"] = request.getExpressionVariableIds();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasScene()) {
    query["scene"] = request.getScene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExpressionTest"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExpressionTestResponse>();
}

/**
 * @summary Tests a custom variable.
 *
 * @param request ExpressionTestRequest
 * @return ExpressionTestResponse
 */
ExpressionTestResponse Client::expressionTest(const ExpressionTestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return expressionTestWithOptions(request, runtime);
}

/**
 * @summary Uploads a file.
 *
 * @param request FileUploadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FileUploadResponse
 */
FileUploadResponse Client::fileUploadWithOptions(const FileUploadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTab()) {
    query["Tab"] = request.getTab();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FileUpload"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FileUploadResponse>();
}

/**
 * @summary Uploads a file.
 *
 * @param request FileUploadRequest
 * @return FileUploadResponse
 */
FileUploadResponse Client::fileUpload(const FileUploadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return fileUploadWithOptions(request, runtime);
}

/**
 * @summary Create a sample record
 *
 * @param request GetSampleDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSampleDetailResponse
 */
GetSampleDetailResponse Client::getSampleDetailWithOptions(const GetSampleDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasSampleId()) {
    query["SampleId"] = request.getSampleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSampleDetail"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSampleDetailResponse>();
}

/**
 * @summary Create a sample record
 *
 * @param request GetSampleDetailRequest
 * @return GetSampleDetailResponse
 */
GetSampleDetailResponse Client::getSampleDetail(const GetSampleDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSampleDetailWithOptions(request, runtime);
}

/**
 * @summary View subtask results
 *
 * @param request GetSubTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSubTaskResultResponse
 */
GetSubTaskResultResponse Client::getSubTaskResultWithOptions(const GetSubTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasSubTaskId()) {
    query["SubTaskId"] = request.getSubTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSubTaskResult"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSubTaskResultResponse>();
}

/**
 * @summary View subtask results
 *
 * @param request GetSubTaskResultRequest
 * @return GetSubTaskResultResponse
 */
GetSubTaskResultResponse Client::getSubTaskResult(const GetSubTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSubTaskResultWithOptions(request, runtime);
}

/**
 * @summary Batch Import
 *
 * @param request ImportFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportFieldResponse
 */
ImportFieldResponse Client::importFieldWithOptions(const ImportFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportField"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportFieldResponse>();
}

/**
 * @summary Batch Import
 *
 * @param request ImportFieldRequest
 * @return ImportFieldResponse
 */
ImportFieldResponse Client::importField(const ImportFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importFieldWithOptions(request, runtime);
}

/**
 * @summary Creates or imports a list.
 *
 * @param request ImportNameListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportNameListResponse
 */
ImportNameListResponse Client::importNameListWithOptions(const ImportNameListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasData()) {
    query["data"] = request.getData();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasImportType()) {
    query["importType"] = request.getImportType();
  }

  if (!!request.hasMemo()) {
    query["memo"] = request.getMemo();
  }

  if (!!request.hasNameListType()) {
    query["nameListType"] = request.getNameListType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.getTitle();
  }

  if (!!request.hasVariableId()) {
    query["variableId"] = request.getVariableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportNameList"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportNameListResponse>();
}

/**
 * @summary Creates or imports a list.
 *
 * @param request ImportNameListRequest
 * @return ImportNameListResponse
 */
ImportNameListResponse Client::importNameList(const ImportNameListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importNameListWithOptions(request, runtime);
}

/**
 * @summary Imports template events.
 *
 * @param request ImportTemplateEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportTemplateEventResponse
 */
ImportTemplateEventResponse Client::importTemplateEventWithOptions(const ImportTemplateEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEventTemplateIds()) {
    query["eventTemplateIds"] = request.getEventTemplateIds();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportTemplateEvent"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportTemplateEventResponse>();
}

/**
 * @summary Imports template events.
 *
 * @param request ImportTemplateEventRequest
 * @return ImportTemplateEventResponse
 */
ImportTemplateEventResponse Client::importTemplateEvent(const ImportTemplateEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importTemplateEventWithOptions(request, runtime);
}

/**
 * @summary Sample List Query
 *
 * @param request ListSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSampleResponse
 */
ListSampleResponse Client::listSampleWithOptions(const ListSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasSampleName()) {
    query["SampleName"] = request.getSampleName();
  }

  if (!!request.hasTab()) {
    query["Tab"] = request.getTab();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUploadTimeEnd()) {
    query["UploadTimeEnd"] = request.getUploadTimeEnd();
  }

  if (!!request.hasUploadTimeStart()) {
    query["UploadTimeStart"] = request.getUploadTimeStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSample"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSampleResponse>();
}

/**
 * @summary Sample List Query
 *
 * @param request ListSampleRequest
 * @return ListSampleResponse
 */
ListSampleResponse Client::listSample(const ListSampleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSampleWithOptions(request, runtime);
}

/**
 * @summary Query task group list
 *
 * @param request ListTaskGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTaskGroupResponse
 */
ListTaskGroupResponse Client::listTaskGroupWithOptions(const ListTaskGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasSampleName()) {
    query["SampleName"] = request.getSampleName();
  }

  if (!!request.hasTaskGroupName()) {
    query["TaskGroupName"] = request.getTaskGroupName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTaskGroup"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTaskGroupResponse>();
}

/**
 * @summary Query task group list
 *
 * @param request ListTaskGroupRequest
 * @return ListTaskGroupResponse
 */
ListTaskGroupResponse Client::listTaskGroup(const ListTaskGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTaskGroupWithOptions(request, runtime);
}

/**
 * @summary Query Variable Definition
 *
 * @param request ListVariableDefineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVariableDefineResponse
 */
ListVariableDefineResponse Client::listVariableDefineWithOptions(const ListVariableDefineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasAllowBind()) {
    query["allowBind"] = request.getAllowBind();
  }

  if (!!request.hasChargingMode()) {
    query["chargingMode"] = request.getChargingMode();
  }

  if (!!request.hasCurrentPage()) {
    query["currentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPaging()) {
    query["paging"] = request.getPaging();
  }

  if (!!request.hasQueryContent()) {
    query["queryContent"] = request.getQueryContent();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRoleType()) {
    query["roleType"] = request.getRoleType();
  }

  if (!!request.hasScenesStr()) {
    query["scenesStr"] = request.getScenesStr();
  }

  if (!!request.hasSource()) {
    query["source"] = request.getSource();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.getTitle();
  }

  if (!!request.hasTypesStr()) {
    query["typesStr"] = request.getTypesStr();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVariableDefine"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVariableDefineResponse>();
}

/**
 * @summary Query Variable Definition
 *
 * @param request ListVariableDefineRequest
 * @return ListVariableDefineResponse
 */
ListVariableDefineResponse Client::listVariableDefine(const ListVariableDefineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVariableDefineWithOptions(request, runtime);
}

/**
 * @summary Merge Download
 *
 * @param request MergeDownloadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MergeDownloadResponse
 */
MergeDownloadResponse Client::mergeDownloadWithOptions(const MergeDownloadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasSubTaskIds()) {
    query["SubTaskIds"] = request.getSubTaskIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MergeDownload"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MergeDownloadResponse>();
}

/**
 * @summary Merge Download
 *
 * @param request MergeDownloadRequest
 * @return MergeDownloadResponse
 */
MergeDownloadResponse Client::mergeDownload(const MergeDownloadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return mergeDownloadWithOptions(request, runtime);
}

/**
 * @summary Delete
 *
 * @param request ModelDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelDeleteResponse
 */
ModelDeleteResponse Client::modelDeleteWithOptions(const ModelDeleteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelDelete"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelDeleteResponse>();
}

/**
 * @summary Delete
 *
 * @param request ModelDeleteRequest
 * @return ModelDeleteResponse
 */
ModelDeleteResponse Client::modelDelete(const ModelDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modelDeleteWithOptions(request, runtime);
}

/**
 * @summary File Upload
 *
 * @param request ModelFileUploadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelFileUploadResponse
 */
ModelFileUploadResponse Client::modelFileUploadWithOptions(const ModelFileUploadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasObjectName()) {
    query["ObjectName"] = request.getObjectName();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelFileUpload"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelFileUploadResponse>();
}

/**
 * @summary File Upload
 *
 * @param request ModelFileUploadRequest
 * @return ModelFileUploadResponse
 */
ModelFileUploadResponse Client::modelFileUpload(const ModelFileUploadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modelFileUploadWithOptions(request, runtime);
}

/**
 * @summary Enable, Disable
 *
 * @param request ModelIsUsingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelIsUsingResponse
 */
ModelIsUsingResponse Client::modelIsUsingWithOptions(const ModelIsUsingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModelCode()) {
    query["ModelCode"] = request.getModelCode();
  }

  if (!!request.hasModelId()) {
    query["ModelId"] = request.getModelId();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelIsUsing"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelIsUsingResponse>();
}

/**
 * @summary Enable, Disable
 *
 * @param request ModelIsUsingRequest
 * @return ModelIsUsingResponse
 */
ModelIsUsingResponse Client::modelIsUsing(const ModelIsUsingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modelIsUsingWithOptions(request, runtime);
}

/**
 * @summary Is Model Name Duplicated
 *
 * @param request ModelNameIsDuplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelNameIsDuplicationResponse
 */
ModelNameIsDuplicationResponse Client::modelNameIsDuplicationWithOptions(const ModelNameIsDuplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelNameIsDuplication"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelNameIsDuplicationResponse>();
}

/**
 * @summary Is Model Name Duplicated
 *
 * @param request ModelNameIsDuplicationRequest
 * @return ModelNameIsDuplicationResponse
 */
ModelNameIsDuplicationResponse Client::modelNameIsDuplication(const ModelNameIsDuplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modelNameIsDuplicationWithOptions(request, runtime);
}

/**
 * @summary Template Download
 *
 * @param request ModelSampleDownloadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModelSampleDownloadResponse
 */
ModelSampleDownloadResponse Client::modelSampleDownloadWithOptions(const ModelSampleDownloadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModelSampleDownload"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModelSampleDownloadResponse>();
}

/**
 * @summary Template Download
 *
 * @param request ModelSampleDownloadRequest
 * @return ModelSampleDownloadResponse
 */
ModelSampleDownloadResponse Client::modelSampleDownload(const ModelSampleDownloadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modelSampleDownloadWithOptions(request, runtime);
}

/**
 * @summary Update memo.
 *
 * @param request ModifyAppKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppKeyResponse
 */
ModifyAppKeyResponse Client::modifyAppKeyWithOptions(const ModifyAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasAppKey()) {
    query["appKey"] = request.getAppKey();
  }

  if (!!request.hasMemo()) {
    query["memo"] = request.getMemo();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAppKey"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppKeyResponse>();
}

/**
 * @summary Update memo.
 *
 * @param request ModifyAppKeyRequest
 * @return ModifyAppKeyResponse
 */
ModifyAppKeyResponse Client::modifyAppKey(const ModifyAppKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppKeyWithOptions(request, runtime);
}

/**
 * @summary Edits a cumulative variable.
 *
 * @param request ModifyCustVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCustVariableResponse
 */
ModifyCustVariableResponse Client::modifyCustVariableWithOptions(const ModifyCustVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCondition()) {
    query["condition"] = request.getCondition();
  }

  if (!!request.hasDataVersion()) {
    query["dataVersion"] = request.getDataVersion();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasEventCodes()) {
    query["eventCodes"] = request.getEventCodes();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasOutputs()) {
    query["outputs"] = request.getOutputs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCustVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCustVariableResponse>();
}

/**
 * @summary Edits a cumulative variable.
 *
 * @param request ModifyCustVariableRequest
 * @return ModifyCustVariableResponse
 */
ModifyCustVariableResponse Client::modifyCustVariable(const ModifyCustVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCustVariableWithOptions(request, runtime);
}

/**
 * @summary Edits an event.
 *
 * @param request ModifyEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEventResponse
 */
ModifyEventResponse Client::modifyEventWithOptions(const ModifyEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBizVersion()) {
    query["bizVersion"] = request.getBizVersion();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasEventName()) {
    query["eventName"] = request.getEventName();
  }

  if (!!request.hasInputFieldsStr()) {
    query["inputFieldsStr"] = request.getInputFieldsStr();
  }

  if (!!request.hasMemo()) {
    query["memo"] = request.getMemo();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTemplateType()) {
    query["templateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyEvent"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyEventResponse>();
}

/**
 * @summary Edits an event.
 *
 * @param request ModifyEventRequest
 * @return ModifyEventResponse
 */
ModifyEventResponse Client::modifyEvent(const ModifyEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEventWithOptions(request, runtime);
}

/**
 * @summary Modifies the status of an event.
 *
 * @param request ModifyEventStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEventStatusResponse
 */
ModifyEventStatusResponse Client::modifyEventStatusWithOptions(const ModifyEventStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasFromEventSatus()) {
    query["fromEventSatus"] = request.getFromEventSatus();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasToEventSatus()) {
    query["toEventSatus"] = request.getToEventSatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyEventStatus"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyEventStatusResponse>();
}

/**
 * @summary Modifies the status of an event.
 *
 * @param request ModifyEventStatusRequest
 * @return ModifyEventStatusResponse
 */
ModifyEventStatusResponse Client::modifyEventStatus(const ModifyEventStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEventStatusWithOptions(request, runtime);
}

/**
 * @summary Edits a custom variable.
 *
 * @param request ModifyExpressionVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyExpressionVariableResponse
 */
ModifyExpressionVariableResponse Client::modifyExpressionVariableWithOptions(const ModifyExpressionVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasDataVersion()) {
    query["dataVersion"] = request.getDataVersion();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasExpression()) {
    query["expression"] = request.getExpression();
  }

  if (!!request.hasExpressionTitle()) {
    query["expressionTitle"] = request.getExpressionTitle();
  }

  if (!!request.hasExpressionVariable()) {
    query["expressionVariable"] = request.getExpressionVariable();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasOutlier()) {
    query["outlier"] = request.getOutlier();
  }

  if (!!request.hasOutputs()) {
    query["outputs"] = request.getOutputs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyExpressionVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyExpressionVariableResponse>();
}

/**
 * @summary Edits a custom variable.
 *
 * @param request ModifyExpressionVariableRequest
 * @return ModifyExpressionVariableResponse
 */
ModifyExpressionVariableResponse Client::modifyExpressionVariable(const ModifyExpressionVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyExpressionVariableWithOptions(request, runtime);
}

/**
 * @summary Modifies a field.
 *
 * @param request ModifyFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyFieldResponse
 */
ModifyFieldResponse Client::modifyFieldWithOptions(const ModifyFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasClassify()) {
    query["classify"] = request.getClassify();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasEnumData()) {
    query["enumData"] = request.getEnumData();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyField"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyFieldResponse>();
}

/**
 * @summary Modifies a field.
 *
 * @param request ModifyFieldRequest
 * @return ModifyFieldResponse
 */
ModifyFieldResponse Client::modifyField(const ModifyFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyFieldWithOptions(request, runtime);
}

/**
 * @summary Modifies the priority of a policy.
 *
 * @param request ModifyRulePriorityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRulePriorityResponse
 */
ModifyRulePriorityResponse Client::modifyRulePriorityWithOptions(const ModifyRulePriorityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasConsoleRuleId()) {
    query["consoleRuleId"] = request.getConsoleRuleId();
  }

  if (!!request.hasPriority()) {
    query["priority"] = request.getPriority();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.getRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRulePriority"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRulePriorityResponse>();
}

/**
 * @summary Modifies the priority of a policy.
 *
 * @param request ModifyRulePriorityRequest
 * @return ModifyRulePriorityResponse
 */
ModifyRulePriorityResponse Client::modifyRulePriority(const ModifyRulePriorityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRulePriorityWithOptions(request, runtime);
}

/**
 * @summary Changes the approval status of a policy version.
 *
 * @param request ModifyRuleStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyRuleStatusResponse
 */
ModifyRuleStatusResponse Client::modifyRuleStatusWithOptions(const ModifyRuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasApplyUserId()) {
    query["applyUserId"] = request.getApplyUserId();
  }

  if (!!request.hasApplyUserName()) {
    query["applyUserName"] = request.getApplyUserName();
  }

  if (!!request.hasAuditRemark()) {
    query["auditRemark"] = request.getAuditRemark();
  }

  if (!!request.hasAuditUserId()) {
    query["auditUserId"] = request.getAuditUserId();
  }

  if (!!request.hasAuditUserName()) {
    query["auditUserName"] = request.getAuditUserName();
  }

  if (!!request.hasConsoleRuleId()) {
    query["consoleRuleId"] = request.getConsoleRuleId();
  }

  if (!!request.hasEventType()) {
    query["eventType"] = request.getEventType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRuleAuditType()) {
    query["ruleAuditType"] = request.getRuleAuditType();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.getRuleId();
  }

  if (!!request.hasRuleVersionId()) {
    query["ruleVersionId"] = request.getRuleVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyRuleStatus"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyRuleStatusResponse>();
}

/**
 * @summary Changes the approval status of a policy version.
 *
 * @param request ModifyRuleStatusRequest
 * @return ModifyRuleStatusResponse
 */
ModifyRuleStatusResponse Client::modifyRuleStatus(const ModifyRuleStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyRuleStatusWithOptions(request, runtime);
}

/**
 * @summary Activates a service.
 *
 * @param request OpenConsoleSlsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenConsoleSlsResponse
 */
OpenConsoleSlsResponse Client::openConsoleSlsWithOptions(const OpenConsoleSlsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasScene()) {
    query["scene"] = request.getScene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenConsoleSls"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenConsoleSlsResponse>();
}

/**
 * @summary Activates a service.
 *
 * @param request OpenConsoleSlsRequest
 * @return OpenConsoleSlsResponse
 */
OpenConsoleSlsResponse Client::openConsoleSls(const OpenConsoleSlsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openConsoleSlsWithOptions(request, runtime);
}

/**
 * @summary Manages favorites.
 *
 * @param request OperateFavoriteVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateFavoriteVariableResponse
 */
OperateFavoriteVariableResponse Client::operateFavoriteVariableWithOptions(const OperateFavoriteVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasOperate()) {
    query["operate"] = request.getOperate();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateFavoriteVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateFavoriteVariableResponse>();
}

/**
 * @summary Manages favorites.
 *
 * @param request OperateFavoriteVariableRequest
 * @return OperateFavoriteVariableResponse
 */
OperateFavoriteVariableResponse Client::operateFavoriteVariable(const OperateFavoriteVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateFavoriteVariableWithOptions(request, runtime);
}

/**
 * @summary Performs a precondition check.
 *
 * @param request PermissionCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PermissionCheckResponse
 */
PermissionCheckResponse Client::permissionCheckWithOptions(const PermissionCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PermissionCheck"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PermissionCheckResponse>();
}

/**
 * @summary Performs a precondition check.
 *
 * @param request PermissionCheckRequest
 * @return PermissionCheckResponse
 */
PermissionCheckResponse Client::permissionCheck(const PermissionCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return permissionCheckWithOptions(request, runtime);
}

/**
 * @summary createTask
 *
 * @param request PocCreateTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PocCreateTaskResponse
 */
PocCreateTaskResponse Client::pocCreateTaskWithOptions(const PocCreateTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDateFormat()) {
    query["DateFormat"] = request.getDateFormat();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PocCreateTask"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PocCreateTaskResponse>();
}

/**
 * @summary createTask
 *
 * @param request PocCreateTaskRequest
 * @return PocCreateTaskResponse
 */
PocCreateTaskResponse Client::pocCreateTask(const PocCreateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pocCreateTaskWithOptions(request, runtime);
}

/**
 * @summary PocGetDownloadUrl
 *
 * @param request PocGetDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PocGetDownloadUrlResponse
 */
PocGetDownloadUrlResponse Client::pocGetDownloadUrlWithOptions(const PocGetDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PocGetDownloadUrl"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PocGetDownloadUrlResponse>();
}

/**
 * @summary PocGetDownloadUrl
 *
 * @param request PocGetDownloadUrlRequest
 * @return PocGetDownloadUrlResponse
 */
PocGetDownloadUrlResponse Client::pocGetDownloadUrl(const PocGetDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pocGetDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary getToken
 *
 * @param request PocGetTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PocGetTokenResponse
 */
PocGetTokenResponse Client::pocGetTokenWithOptions(const PocGetTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasServiceCode()) {
    query["ServiceCode"] = request.getServiceCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PocGetToken"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PocGetTokenResponse>();
}

/**
 * @summary getToken
 *
 * @param request PocGetTokenRequest
 * @return PocGetTokenResponse
 */
PocGetTokenResponse Client::pocGetToken(const PocGetTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pocGetTokenWithOptions(request, runtime);
}

/**
 * @summary sendData
 *
 * @param request PocSendDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PocSendDataResponse
 */
PocSendDataResponse Client::pocSendDataWithOptions(const PocSendDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBatchNo()) {
    query["BatchNo"] = request.getBatchNo();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasParamsList()) {
    query["ParamsList"] = request.getParamsList();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PocSendData"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PocSendDataResponse>();
}

/**
 * @summary sendData
 *
 * @param request PocSendDataRequest
 * @return PocSendDataResponse
 */
PocSendDataResponse Client::pocSendData(const PocSendDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pocSendDataWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a whitebox implementation policy.
 *
 * @param request QueryAuthRuleDetailByRuleIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAuthRuleDetailByRuleIdResponse
 */
QueryAuthRuleDetailByRuleIdResponse Client::queryAuthRuleDetailByRuleIdWithOptions(const QueryAuthRuleDetailByRuleIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasConsoleRuleId()) {
    query["consoleRuleId"] = request.getConsoleRuleId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.getRuleId();
  }

  if (!!request.hasRuleVersionId()) {
    query["ruleVersionId"] = request.getRuleVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAuthRuleDetailByRuleId"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAuthRuleDetailByRuleIdResponse>();
}

/**
 * @summary Queries the details of a whitebox implementation policy.
 *
 * @param request QueryAuthRuleDetailByRuleIdRequest
 * @return QueryAuthRuleDetailByRuleIdResponse
 */
QueryAuthRuleDetailByRuleIdResponse Client::queryAuthRuleDetailByRuleId(const QueryAuthRuleDetailByRuleIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAuthRuleDetailByRuleIdWithOptions(request, runtime);
}

/**
 * @summary Withdraws a review.
 *
 * @param request RecallRuleAuditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RecallRuleAuditResponse
 */
RecallRuleAuditResponse Client::recallRuleAuditWithOptions(const RecallRuleAuditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RecallRuleAudit"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RecallRuleAuditResponse>();
}

/**
 * @summary Withdraws a review.
 *
 * @param request RecallRuleAuditRequest
 * @return RecallRuleAuditResponse
 */
RecallRuleAuditResponse Client::recallRuleAudit(const RecallRuleAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return recallRuleAuditWithOptions(request, runtime);
}

/**
 * @summary Deletes an event.
 *
 * @param request RemoveEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveEventResponse
 */
RemoveEventResponse Client::removeEventWithOptions(const RemoveEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCreateType()) {
    query["createType"] = request.getCreateType();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTemplateCode()) {
    query["templateCode"] = request.getTemplateCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveEvent"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveEventResponse>();
}

/**
 * @summary Deletes an event.
 *
 * @param request RemoveEventRequest
 * @return RemoveEventResponse
 */
RemoveEventResponse Client::removeEvent(const RemoveEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeEventWithOptions(request, runtime);
}

/**
 * @summary Download template.
 *
 * @param request SampleFileDownloadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SampleFileDownloadResponse
 */
SampleFileDownloadResponse Client::sampleFileDownloadWithOptions(const SampleFileDownloadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasTab()) {
    query["Tab"] = request.getTab();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SampleFileDownload"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SampleFileDownloadResponse>();
}

/**
 * @summary Download template.
 *
 * @param request SampleFileDownloadRequest
 * @return SampleFileDownloadResponse
 */
SampleFileDownloadResponse Client::sampleFileDownload(const SampleFileDownloadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sampleFileDownloadWithOptions(request, runtime);
}

/**
 * @summary Saves custom columns.
 *
 * @param request SaveAnalysisColumnRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveAnalysisColumnResponse
 */
SaveAnalysisColumnResponse Client::saveAnalysisColumnWithOptions(const SaveAnalysisColumnRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasColumns()) {
    query["columns"] = request.getColumns();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveAnalysisColumn"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveAnalysisColumnResponse>();
}

/**
 * @summary Saves custom columns.
 *
 * @param request SaveAnalysisColumnRequest
 * @return SaveAnalysisColumnResponse
 */
SaveAnalysisColumnResponse Client::saveAnalysisColumn(const SaveAnalysisColumnRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveAnalysisColumnWithOptions(request, runtime);
}

/**
 * @summary The bypass/diversion configuration.
 *
 * @param request SaveByPassOrShuntEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveByPassOrShuntEventResponse
 */
SaveByPassOrShuntEventResponse Client::saveByPassOrShuntEventWithOptions(const SaveByPassOrShuntEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEventId()) {
    query["eventId"] = request.getEventId();
  }

  if (!!request.hasEventName()) {
    query["eventName"] = request.getEventName();
  }

  if (!!request.hasEventType()) {
    query["eventType"] = request.getEventType();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveByPassOrShuntEvent"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveByPassOrShuntEventResponse>();
}

/**
 * @summary The bypass/diversion configuration.
 *
 * @param request SaveByPassOrShuntEventRequest
 * @return SaveByPassOrShuntEventResponse
 */
SaveByPassOrShuntEventResponse Client::saveByPassOrShuntEvent(const SaveByPassOrShuntEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveByPassOrShuntEventWithOptions(request, runtime);
}

/**
 * @summary Sample Search
 *
 * @param request SearchSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchSampleResponse
 */
SearchSampleResponse Client::searchSampleWithOptions(const SearchSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasTab()) {
    query["Tab"] = request.getTab();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUploadTimeEnd()) {
    query["UploadTimeEnd"] = request.getUploadTimeEnd();
  }

  if (!!request.hasUploadTimeStart()) {
    query["UploadTimeStart"] = request.getUploadTimeStart();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchSample"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchSampleResponse>();
}

/**
 * @summary Sample Search
 *
 * @param request SearchSampleRequest
 * @return SearchSampleResponse
 */
SearchSampleResponse Client::searchSample(const SearchSampleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchSampleWithOptions(request, runtime);
}

/**
 * @summary Starts or stops a bypass event.
 *
 * @param request StartOrStopByPassShuntEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartOrStopByPassShuntEventResponse
 */
StartOrStopByPassShuntEventResponse Client::startOrStopByPassShuntEventWithOptions(const StartOrStopByPassShuntEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEventId()) {
    query["eventId"] = request.getEventId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartOrStopByPassShuntEvent"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartOrStopByPassShuntEventResponse>();
}

/**
 * @summary Starts or stops a bypass event.
 *
 * @param request StartOrStopByPassShuntEventRequest
 * @return StartOrStopByPassShuntEventResponse
 */
StartOrStopByPassShuntEventResponse Client::startOrStopByPassShuntEvent(const StartOrStopByPassShuntEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startOrStopByPassShuntEventWithOptions(request, runtime);
}

/**
 * @summary Starts executing a task.
 *
 * @param request StartSimulationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartSimulationTaskResponse
 */
StartSimulationTaskResponse Client::startSimulationTaskWithOptions(const StartSimulationTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartSimulationTask"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartSimulationTaskResponse>();
}

/**
 * @summary Starts executing a task.
 *
 * @param request StartSimulationTaskRequest
 * @return StartSimulationTaskResponse
 */
StartSimulationTaskResponse Client::startSimulationTask(const StartSimulationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startSimulationTaskWithOptions(request, runtime);
}

/**
 * @summary Stops a task.
 *
 * @param request StopSimulationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopSimulationTaskResponse
 */
StopSimulationTaskResponse Client::stopSimulationTaskWithOptions(const StopSimulationTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopSimulationTask"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopSimulationTaskResponse>();
}

/**
 * @summary Stops a task.
 *
 * @param request StopSimulationTaskRequest
 * @return StopSimulationTaskResponse
 */
StopSimulationTaskResponse Client::stopSimulationTask(const StopSimulationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopSimulationTaskWithOptions(request, runtime);
}

/**
 * @summary Enables or disables a custom variable.
 *
 * @param request SwitchExpressionVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchExpressionVariableResponse
 */
SwitchExpressionVariableResponse Client::switchExpressionVariableWithOptions(const SwitchExpressionVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasDataVersion()) {
    query["dataVersion"] = request.getDataVersion();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchExpressionVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchExpressionVariableResponse>();
}

/**
 * @summary Enables or disables a custom variable.
 *
 * @param request SwitchExpressionVariableRequest
 * @return SwitchExpressionVariableResponse
 */
SwitchExpressionVariableResponse Client::switchExpressionVariable(const SwitchExpressionVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchExpressionVariableWithOptions(request, runtime);
}

/**
 * @summary Toggles a field on or off.
 *
 * @param request SwitchFieldRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchFieldResponse
 */
SwitchFieldResponse Client::switchFieldWithOptions(const SwitchFieldRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasSource()) {
    query["source"] = request.getSource();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchField"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchFieldResponse>();
}

/**
 * @summary Toggles a field on or off.
 *
 * @param request SwitchFieldRequest
 * @return SwitchFieldResponse
 */
SwitchFieldResponse Client::switchField(const SwitchFieldRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchFieldWithOptions(request, runtime);
}

/**
 * @summary Queries the enabling or disabling status of a variable.
 *
 * @param request SwitchQueryVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchQueryVariableResponse
 */
SwitchQueryVariableResponse Client::switchQueryVariableWithOptions(const SwitchQueryVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchQueryVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchQueryVariableResponse>();
}

/**
 * @summary Queries the enabling or disabling status of a variable.
 *
 * @param request SwitchQueryVariableRequest
 * @return SwitchQueryVariableResponse
 */
SwitchQueryVariableResponse Client::switchQueryVariable(const SwitchQueryVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchQueryVariableWithOptions(request, runtime);
}

/**
 * @summary Switches an event to online with one click.
 *
 * @param request SwitchToOnlineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchToOnlineResponse
 */
SwitchToOnlineResponse Client::switchToOnlineWithOptions(const SwitchToOnlineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEventId()) {
    query["eventId"] = request.getEventId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchToOnline"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchToOnlineResponse>();
}

/**
 * @summary Switches an event to online with one click.
 *
 * @param request SwitchToOnlineRequest
 * @return SwitchToOnlineResponse
 */
SwitchToOnlineResponse Client::switchToOnline(const SwitchToOnlineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchToOnlineWithOptions(request, runtime);
}

/**
 * @summary Enables or disables a cumulative variable.
 *
 * @param request SwitchVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchVariableResponse
 */
SwitchVariableResponse Client::switchVariableWithOptions(const SwitchVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasDataVersion()) {
    query["dataVersion"] = request.getDataVersion();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchVariableResponse>();
}

/**
 * @summary Enables or disables a cumulative variable.
 *
 * @param request SwitchVariableRequest
 * @return SwitchVariableResponse
 */
SwitchVariableResponse Client::switchVariable(const SwitchVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchVariableWithOptions(request, runtime);
}

/**
 * @summary Checks whether a task name is duplicate.
 *
 * @param request TaskNameByUserIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TaskNameByUserIdResponse
 */
TaskNameByUserIdResponse Client::taskNameByUserIdWithOptions(const TaskNameByUserIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TaskNameByUserId"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TaskNameByUserIdResponse>();
}

/**
 * @summary Checks whether a task name is duplicate.
 *
 * @param request TaskNameByUserIdRequest
 * @return TaskNameByUserIdResponse
 */
TaskNameByUserIdResponse Client::taskNameByUserId(const TaskNameByUserIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return taskNameByUserIdWithOptions(request, runtime);
}

/**
 * @summary Modifies a query condition.
 *
 * @param request UpdateAnalysisConditionFavoriteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAnalysisConditionFavoriteResponse
 */
UpdateAnalysisConditionFavoriteResponse Client::updateAnalysisConditionFavoriteWithOptions(const UpdateAnalysisConditionFavoriteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasCondition()) {
    query["condition"] = request.getCondition();
  }

  if (!!request.hasEventBeginTime()) {
    query["eventBeginTime"] = request.getEventBeginTime();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasEventEndTime()) {
    query["eventEndTime"] = request.getEventEndTime();
  }

  if (!!request.hasFieldName()) {
    query["fieldName"] = request.getFieldName();
  }

  if (!!request.hasFieldValue()) {
    query["fieldValue"] = request.getFieldValue();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAnalysisConditionFavorite"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAnalysisConditionFavoriteResponse>();
}

/**
 * @summary Modifies a query condition.
 *
 * @param request UpdateAnalysisConditionFavoriteRequest
 * @return UpdateAnalysisConditionFavoriteResponse
 */
UpdateAnalysisConditionFavoriteResponse Client::updateAnalysisConditionFavorite(const UpdateAnalysisConditionFavoriteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAnalysisConditionFavoriteWithOptions(request, runtime);
}

/**
 * @summary Processes an approval request.
 *
 * @param request UpdateAuditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAuditResponse
 */
UpdateAuditResponse Client::updateAuditWithOptions(const UpdateAuditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasAuditMsg()) {
    query["auditMsg"] = request.getAuditMsg();
  }

  if (!!request.hasAuditRelationType()) {
    query["auditRelationType"] = request.getAuditRelationType();
  }

  if (!!request.hasAuditStatus()) {
    query["auditStatus"] = request.getAuditStatus();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAudit"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAuditResponse>();
}

/**
 * @summary Processes an approval request.
 *
 * @param request UpdateAuditRequest
 * @return UpdateAuditResponse
 */
UpdateAuditResponse Client::updateAudit(const UpdateAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAuditWithOptions(request, runtime);
}

/**
 * @summary Modifies an authorization policy.
 *
 * @param request UpdateAuthRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAuthRuleResponse
 */
UpdateAuthRuleResponse Client::updateAuthRuleWithOptions(const UpdateAuthRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasConsoleRuleId()) {
    query["consoleRuleId"] = request.getConsoleRuleId();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRuleActions()) {
    query["ruleActions"] = request.getRuleActions();
  }

  if (!!request.hasRuleExpressions()) {
    query["ruleExpressions"] = request.getRuleExpressions();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.getRuleId();
  }

  if (!!request.hasRuleVersionId()) {
    query["ruleVersionId"] = request.getRuleVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAuthRule"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAuthRuleResponse>();
}

/**
 * @summary Modifies an authorization policy.
 *
 * @param request UpdateAuthRuleRequest
 * @return UpdateAuthRuleResponse
 */
UpdateAuthRuleResponse Client::updateAuthRule(const UpdateAuthRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAuthRuleWithOptions(request, runtime);
}

/**
 * @summary Edits a bypass event.
 *
 * @param request UpdateByPassShuntEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateByPassShuntEventResponse
 */
UpdateByPassShuntEventResponse Client::updateByPassShuntEventWithOptions(const UpdateByPassShuntEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasEventId()) {
    query["eventId"] = request.getEventId();
  }

  if (!!request.hasEventName()) {
    query["eventName"] = request.getEventName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateByPassShuntEvent"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateByPassShuntEventResponse>();
}

/**
 * @summary Edits a bypass event.
 *
 * @param request UpdateByPassShuntEventRequest
 * @return UpdateByPassShuntEventResponse
 */
UpdateByPassShuntEventResponse Client::updateByPassShuntEvent(const UpdateByPassShuntEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateByPassShuntEventWithOptions(request, runtime);
}

/**
 * @summary Modifies a data source.
 *
 * @param request UpdateDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataSourceResponse
 */
UpdateDataSourceResponse Client::updateDataSourceWithOptions(const UpdateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasOssKey()) {
    query["ossKey"] = request.getOssKey();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDataSource"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataSourceResponse>();
}

/**
 * @summary Modifies a data source.
 *
 * @param request UpdateDataSourceRequest
 * @return UpdateDataSourceResponse
 */
UpdateDataSourceResponse Client::updateDataSource(const UpdateDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataSourceWithOptions(request, runtime);
}

/**
 * @summary Modifies a custom query variable.
 *
 * @param request UpdateQueryVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateQueryVariableResponse
 */
UpdateQueryVariableResponse Client::updateQueryVariableWithOptions(const UpdateQueryVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasDataSourceCode()) {
    query["dataSourceCode"] = request.getDataSourceCode();
  }

  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasExpression()) {
    query["expression"] = request.getExpression();
  }

  if (!!request.hasExpressionTitle()) {
    query["expressionTitle"] = request.getExpressionTitle();
  }

  if (!!request.hasExpressionVariable()) {
    query["expressionVariable"] = request.getExpressionVariable();
  }

  if (!!request.hasId()) {
    query["id"] = request.getId();
  }

  if (!!request.hasOutlier()) {
    query["outlier"] = request.getOutlier();
  }

  if (!!request.hasOutputs()) {
    query["outputs"] = request.getOutputs();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTitle()) {
    query["title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateQueryVariable"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateQueryVariableResponse>();
}

/**
 * @summary Modifies a custom query variable.
 *
 * @param request UpdateQueryVariableRequest
 * @return UpdateQueryVariableResponse
 */
UpdateQueryVariableResponse Client::updateQueryVariable(const UpdateQueryVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateQueryVariableWithOptions(request, runtime);
}

/**
 * @summary Updates a policy.
 *
 * @param request UpdateRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRuleResponse
 */
UpdateRuleResponse Client::updateRuleWithOptions(const UpdateRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasConsoleRuleId()) {
    query["consoleRuleId"] = request.getConsoleRuleId();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasLogicExpression()) {
    query["logicExpression"] = request.getLogicExpression();
  }

  if (!!request.hasMemo()) {
    query["memo"] = request.getMemo();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRuleActions()) {
    query["ruleActions"] = request.getRuleActions();
  }

  if (!!request.hasRuleBody()) {
    query["ruleBody"] = request.getRuleBody();
  }

  if (!!request.hasRuleExpressions()) {
    query["ruleExpressions"] = request.getRuleExpressions();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["ruleName"] = request.getRuleName();
  }

  if (!!request.hasRuleStatus()) {
    query["ruleStatus"] = request.getRuleStatus();
  }

  if (!!request.hasRuleType()) {
    query["ruleType"] = request.getRuleType();
  }

  if (!!request.hasRuleVersionId()) {
    query["ruleVersionId"] = request.getRuleVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRule"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRuleResponse>();
}

/**
 * @summary Updates a policy.
 *
 * @param request UpdateRuleRequest
 * @return UpdateRuleResponse
 */
UpdateRuleResponse Client::updateRule(const UpdateRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRuleWithOptions(request, runtime);
}

/**
 * @summary Updates the basic information of a policy.
 *
 * @param request UpdateRuleBaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRuleBaseResponse
 */
UpdateRuleBaseResponse Client::updateRuleBaseWithOptions(const UpdateRuleBaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasConsoleRuleId()) {
    query["consoleRuleId"] = request.getConsoleRuleId();
  }

  if (!!request.hasEventCode()) {
    query["eventCode"] = request.getEventCode();
  }

  if (!!request.hasMemo()) {
    query["memo"] = request.getMemo();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasRuleId()) {
    query["ruleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["ruleName"] = request.getRuleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRuleBase"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRuleBaseResponse>();
}

/**
 * @summary Updates the basic information of a policy.
 *
 * @param request UpdateRuleBaseRequest
 * @return UpdateRuleBaseResponse
 */
UpdateRuleBaseResponse Client::updateRuleBase(const UpdateRuleBaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRuleBaseWithOptions(request, runtime);
}

/**
 * @summary Modifies samples in batches.
 *
 * @param request UpdateSampleBatchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSampleBatchResponse
 */
UpdateSampleBatchResponse Client::updateSampleBatchWithOptions(const UpdateSampleBatchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasIds()) {
    query["ids"] = request.getIds();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasTags()) {
    query["tags"] = request.getTags();
  }

  if (!!request.hasVersions()) {
    query["versions"] = request.getVersions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSampleBatch"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSampleBatchResponse>();
}

/**
 * @summary Modifies samples in batches.
 *
 * @param request UpdateSampleBatchRequest
 * @return UpdateSampleBatchResponse
 */
UpdateSampleBatchResponse Client::updateSampleBatch(const UpdateSampleBatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSampleBatchWithOptions(request, runtime);
}

/**
 * @summary Sample Inspection
 *
 * @param request UploadFileCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadFileCheckResponse
 */
UploadFileCheckResponse Client::uploadFileCheckWithOptions(const UploadFileCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasBatchName()) {
    query["batchName"] = request.getBatchName();
  }

  if (!!request.hasDataType()) {
    query["dataType"] = request.getDataType();
  }

  if (!!request.hasOssFileName()) {
    query["ossFileName"] = request.getOssFileName();
  }

  if (!!request.hasRegId()) {
    query["regId"] = request.getRegId();
  }

  if (!!request.hasSampleTagType()) {
    query["sampleTagType"] = request.getSampleTagType();
  }

  if (!!request.hasServiceList()) {
    query["serviceList"] = request.getServiceList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadFileCheck"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadFileCheckResponse>();
}

/**
 * @summary Sample Inspection
 *
 * @param request UploadFileCheckRequest
 * @return UploadFileCheckResponse
 */
UploadFileCheckResponse Client::uploadFileCheck(const UploadFileCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadFileCheckWithOptions(request, runtime);
}

/**
 * @summary Upload and validate the sample file for the customer.
 *
 * @param request UploadForeignSampleFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadForeignSampleFileResponse
 */
UploadForeignSampleFileResponse Client::uploadForeignSampleFileWithOptions(const UploadForeignSampleFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFile()) {
    query["File"] = request.getFile();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasTab()) {
    query["Tab"] = request.getTab();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadForeignSampleFile"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadForeignSampleFileResponse>();
}

/**
 * @summary Upload and validate the sample file for the customer.
 *
 * @param request UploadForeignSampleFileRequest
 * @return UploadForeignSampleFileResponse
 */
UploadForeignSampleFileResponse Client::uploadForeignSampleFile(const UploadForeignSampleFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadForeignSampleFileWithOptions(request, runtime);
}

UploadForeignSampleFileResponse Client::uploadForeignSampleFileAdvance(const UploadForeignSampleFileAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "xtee"},
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
  UploadForeignSampleFileRequest uploadForeignSampleFileReq = UploadForeignSampleFileRequest();
  Utils::Utils::convert(request, uploadForeignSampleFileReq);
  if (!!request.hasFileObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getFileObject()},
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
    uploadForeignSampleFileReq.setFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  UploadForeignSampleFileResponse uploadForeignSampleFileResp = uploadForeignSampleFileWithOptions(uploadForeignSampleFileReq, runtime);
  return uploadForeignSampleFileResp;
}

/**
 * @summary Upload and validate the sample file
 *
 * @param request UploadSampleFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadSampleFileResponse
 */
UploadSampleFileResponse Client::uploadSampleFileWithOptions(const UploadSampleFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRegId()) {
    query["RegId"] = request.getRegId();
  }

  if (!!request.hasTab()) {
    query["Tab"] = request.getTab();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadSampleFile"},
    {"version" , "2021-09-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadSampleFileResponse>();
}

/**
 * @summary Upload and validate the sample file
 *
 * @param request UploadSampleFileRequest
 * @return UploadSampleFileResponse
 */
UploadSampleFileResponse Client::uploadSampleFile(const UploadSampleFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadSampleFileWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Xtee20210910