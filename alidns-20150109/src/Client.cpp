#include <darabonba/Core.hpp>
#include <alibabacloud/Alidns20150109.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Alidns20150109::Models;
namespace AlibabaCloud
{
namespace Alidns20150109
{

AlibabaCloud::Alidns20150109::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"public" , "alidns.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("alidns", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds a custom line for a domain name.
 *
 * @description The end IP address of an IP address segment must be greater than or equal to its start IP address.
 * The IP address ranges of segments cannot overlap across any custom lines for the domain name.
 *
 * @param request AddCustomLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddCustomLineResponse
 */
AddCustomLineResponse Client::addCustomLineWithOptions(const AddCustomLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasIpSegment()) {
    query["IpSegment"] = request.getIpSegment();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLineName()) {
    query["LineName"] = request.getLineName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddCustomLine"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddCustomLineResponse>();
}

/**
 * @summary Adds a custom line for a domain name.
 *
 * @description The end IP address of an IP address segment must be greater than or equal to its start IP address.
 * The IP address ranges of segments cannot overlap across any custom lines for the domain name.
 *
 * @param request AddCustomLineRequest
 * @return AddCustomLineResponse
 */
AddCustomLineResponse Client::addCustomLine(const AddCustomLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addCustomLineWithOptions(request, runtime);
}

/**
 * @summary Adds a domain name to the DNS authoritative proxy service.
 *
 * @param request AddDnsCacheDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDnsCacheDomainResponse
 */
AddDnsCacheDomainResponse Client::addDnsCacheDomainWithOptions(const AddDnsCacheDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCacheTtlMax()) {
    query["CacheTtlMax"] = request.getCacheTtlMax();
  }

  if (!!request.hasCacheTtlMin()) {
    query["CacheTtlMin"] = request.getCacheTtlMin();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasSourceDnsServer()) {
    query["SourceDnsServer"] = request.getSourceDnsServer();
  }

  if (!!request.hasSourceEdns()) {
    query["SourceEdns"] = request.getSourceEdns();
  }

  if (!!request.hasSourceProtocol()) {
    query["SourceProtocol"] = request.getSourceProtocol();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDnsCacheDomain"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDnsCacheDomainResponse>();
}

/**
 * @summary Adds a domain name to the DNS authoritative proxy service.
 *
 * @param request AddDnsCacheDomainRequest
 * @return AddDnsCacheDomainResponse
 */
AddDnsCacheDomainResponse Client::addDnsCacheDomain(const AddDnsCacheDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDnsCacheDomainWithOptions(request, runtime);
}

/**
 * @summary Adds an access strategy.
 *
 * @param request AddDnsGtmAccessStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDnsGtmAccessStrategyResponse
 */
AddDnsGtmAccessStrategyResponse Client::addDnsGtmAccessStrategyWithOptions(const AddDnsGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefaultAddrPool()) {
    query["DefaultAddrPool"] = request.getDefaultAddrPool();
  }

  if (!!request.hasDefaultAddrPoolType()) {
    query["DefaultAddrPoolType"] = request.getDefaultAddrPoolType();
  }

  if (!!request.hasDefaultLatencyOptimization()) {
    query["DefaultLatencyOptimization"] = request.getDefaultLatencyOptimization();
  }

  if (!!request.hasDefaultLbaStrategy()) {
    query["DefaultLbaStrategy"] = request.getDefaultLbaStrategy();
  }

  if (!!request.hasDefaultMaxReturnAddrNum()) {
    query["DefaultMaxReturnAddrNum"] = request.getDefaultMaxReturnAddrNum();
  }

  if (!!request.hasDefaultMinAvailableAddrNum()) {
    query["DefaultMinAvailableAddrNum"] = request.getDefaultMinAvailableAddrNum();
  }

  if (!!request.hasFailoverAddrPool()) {
    query["FailoverAddrPool"] = request.getFailoverAddrPool();
  }

  if (!!request.hasFailoverAddrPoolType()) {
    query["FailoverAddrPoolType"] = request.getFailoverAddrPoolType();
  }

  if (!!request.hasFailoverLatencyOptimization()) {
    query["FailoverLatencyOptimization"] = request.getFailoverLatencyOptimization();
  }

  if (!!request.hasFailoverLbaStrategy()) {
    query["FailoverLbaStrategy"] = request.getFailoverLbaStrategy();
  }

  if (!!request.hasFailoverMaxReturnAddrNum()) {
    query["FailoverMaxReturnAddrNum"] = request.getFailoverMaxReturnAddrNum();
  }

  if (!!request.hasFailoverMinAvailableAddrNum()) {
    query["FailoverMinAvailableAddrNum"] = request.getFailoverMinAvailableAddrNum();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLines()) {
    query["Lines"] = request.getLines();
  }

  if (!!request.hasStrategyMode()) {
    query["StrategyMode"] = request.getStrategyMode();
  }

  if (!!request.hasStrategyName()) {
    query["StrategyName"] = request.getStrategyName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDnsGtmAccessStrategy"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDnsGtmAccessStrategyResponse>();
}

/**
 * @summary Adds an access strategy.
 *
 * @param request AddDnsGtmAccessStrategyRequest
 * @return AddDnsGtmAccessStrategyResponse
 */
AddDnsGtmAccessStrategyResponse Client::addDnsGtmAccessStrategy(const AddDnsGtmAccessStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDnsGtmAccessStrategyWithOptions(request, runtime);
}

/**
 * @summary Adds an address pool.
 *
 * @param request AddDnsGtmAddressPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDnsGtmAddressPoolResponse
 */
AddDnsGtmAddressPoolResponse Client::addDnsGtmAddressPoolWithOptions(const AddDnsGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddr()) {
    query["Addr"] = request.getAddr();
  }

  if (!!request.hasEvaluationCount()) {
    query["EvaluationCount"] = request.getEvaluationCount();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspCityNode()) {
    query["IspCityNode"] = request.getIspCityNode();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLbaStrategy()) {
    query["LbaStrategy"] = request.getLbaStrategy();
  }

  if (!!request.hasMonitorExtendInfo()) {
    query["MonitorExtendInfo"] = request.getMonitorExtendInfo();
  }

  if (!!request.hasMonitorStatus()) {
    query["MonitorStatus"] = request.getMonitorStatus();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasProtocolType()) {
    query["ProtocolType"] = request.getProtocolType();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDnsGtmAddressPool"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDnsGtmAddressPoolResponse>();
}

/**
 * @summary Adds an address pool.
 *
 * @param request AddDnsGtmAddressPoolRequest
 * @return AddDnsGtmAddressPoolResponse
 */
AddDnsGtmAddressPoolResponse Client::addDnsGtmAddressPool(const AddDnsGtmAddressPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDnsGtmAddressPoolWithOptions(request, runtime);
}

/**
 * @summary Creates a health check.
 *
 * @description ***
 *
 * @param request AddDnsGtmMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDnsGtmMonitorResponse
 */
AddDnsGtmMonitorResponse Client::addDnsGtmMonitorWithOptions(const AddDnsGtmMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddrPoolId()) {
    query["AddrPoolId"] = request.getAddrPoolId();
  }

  if (!!request.hasEvaluationCount()) {
    query["EvaluationCount"] = request.getEvaluationCount();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspCityNode()) {
    query["IspCityNode"] = request.getIspCityNode();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMonitorExtendInfo()) {
    query["MonitorExtendInfo"] = request.getMonitorExtendInfo();
  }

  if (!!request.hasProtocolType()) {
    query["ProtocolType"] = request.getProtocolType();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDnsGtmMonitor"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDnsGtmMonitorResponse>();
}

/**
 * @summary Creates a health check.
 *
 * @description ***
 *
 * @param request AddDnsGtmMonitorRequest
 * @return AddDnsGtmMonitorResponse
 */
AddDnsGtmMonitorResponse Client::addDnsGtmMonitor(const AddDnsGtmMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDnsGtmMonitorWithOptions(request, runtime);
}

/**
 * @summary Adds a domain name.
 *
 * @description For more information, see <props="china">[Domain name validity](https://help.aliyun.com/document_detail/67788.html)<props="intl">[Domain name validity](https://www.alibabacloud.com/help/zh/doc-detail/67788.htm).
 *
 * @param request AddDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDomainResponse
 */
AddDomainResponse Client::addDomainWithOptions(const AddDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDomain"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDomainResponse>();
}

/**
 * @summary Adds a domain name.
 *
 * @description For more information, see <props="china">[Domain name validity](https://help.aliyun.com/document_detail/67788.html)<props="intl">[Domain name validity](https://www.alibabacloud.com/help/zh/doc-detail/67788.htm).
 *
 * @param request AddDomainRequest
 * @return AddDomainResponse
 */
AddDomainResponse Client::addDomain(const AddDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDomainWithOptions(request, runtime);
}

/**
 * @summary Creates a backup for a domain based on the specified domain name and backup cycle.
 *
 * @param request AddDomainBackupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDomainBackupResponse
 */
AddDomainBackupResponse Client::addDomainBackupWithOptions(const AddDomainBackupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPeriodType()) {
    query["PeriodType"] = request.getPeriodType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDomainBackup"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDomainBackupResponse>();
}

/**
 * @summary Creates a backup for a domain based on the specified domain name and backup cycle.
 *
 * @param request AddDomainBackupRequest
 * @return AddDomainBackupResponse
 */
AddDomainBackupResponse Client::addDomainBackup(const AddDomainBackupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDomainBackupWithOptions(request, runtime);
}

/**
 * @summary Creates a domain name group.
 *
 * @param request AddDomainGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDomainGroupResponse
 */
AddDomainGroupResponse Client::addDomainGroupWithOptions(const AddDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDomainGroup"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDomainGroupResponse>();
}

/**
 * @summary Creates a domain name group.
 *
 * @param request AddDomainGroupRequest
 * @return AddDomainGroupResponse
 */
AddDomainGroupResponse Client::addDomainGroup(const AddDomainGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDomainGroupWithOptions(request, runtime);
}

/**
 * @summary Adds a DNS record.
 *
 * @param request AddDomainRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddDomainRecordResponse
 */
AddDomainRecordResponse Client::addDomainRecordWithOptions(const AddDomainRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLine()) {
    query["Line"] = request.getLine();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasRR()) {
    query["RR"] = request.getRR();
  }

  if (!!request.hasTTL()) {
    query["TTL"] = request.getTTL();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddDomainRecord"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddDomainRecordResponse>();
}

/**
 * @summary Adds a DNS record.
 *
 * @param request AddDomainRecordRequest
 * @return AddDomainRecordResponse
 */
AddDomainRecordResponse Client::addDomainRecord(const AddDomainRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addDomainRecordWithOptions(request, runtime);
}

/**
 * @summary Creates an access strategy based on the specified parameters.
 *
 * @param request AddGtmAccessStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddGtmAccessStrategyResponse
 */
AddGtmAccessStrategyResponse Client::addGtmAccessStrategyWithOptions(const AddGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessLines()) {
    query["AccessLines"] = request.getAccessLines();
  }

  if (!!request.hasDefaultAddrPoolId()) {
    query["DefaultAddrPoolId"] = request.getDefaultAddrPoolId();
  }

  if (!!request.hasFailoverAddrPoolId()) {
    query["FailoverAddrPoolId"] = request.getFailoverAddrPoolId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStrategyName()) {
    query["StrategyName"] = request.getStrategyName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddGtmAccessStrategy"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddGtmAccessStrategyResponse>();
}

/**
 * @summary Creates an access strategy based on the specified parameters.
 *
 * @param request AddGtmAccessStrategyRequest
 * @return AddGtmAccessStrategyResponse
 */
AddGtmAccessStrategyResponse Client::addGtmAccessStrategy(const AddGtmAccessStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addGtmAccessStrategyWithOptions(request, runtime);
}

/**
 * @summary Adds an address pool.
 *
 * @param request AddGtmAddressPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddGtmAddressPoolResponse
 */
AddGtmAddressPoolResponse Client::addGtmAddressPoolWithOptions(const AddGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddr()) {
    query["Addr"] = request.getAddr();
  }

  if (!!request.hasEvaluationCount()) {
    query["EvaluationCount"] = request.getEvaluationCount();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspCityNode()) {
    query["IspCityNode"] = request.getIspCityNode();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMinAvailableAddrNum()) {
    query["MinAvailableAddrNum"] = request.getMinAvailableAddrNum();
  }

  if (!!request.hasMonitorExtendInfo()) {
    query["MonitorExtendInfo"] = request.getMonitorExtendInfo();
  }

  if (!!request.hasMonitorStatus()) {
    query["MonitorStatus"] = request.getMonitorStatus();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasProtocolType()) {
    query["ProtocolType"] = request.getProtocolType();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddGtmAddressPool"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddGtmAddressPoolResponse>();
}

/**
 * @summary Adds an address pool.
 *
 * @param request AddGtmAddressPoolRequest
 * @return AddGtmAddressPoolResponse
 */
AddGtmAddressPoolResponse Client::addGtmAddressPool(const AddGtmAddressPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addGtmAddressPoolWithOptions(request, runtime);
}

/**
 * @summary Adds a health check.
 *
 * @param request AddGtmMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddGtmMonitorResponse
 */
AddGtmMonitorResponse Client::addGtmMonitorWithOptions(const AddGtmMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddrPoolId()) {
    query["AddrPoolId"] = request.getAddrPoolId();
  }

  if (!!request.hasEvaluationCount()) {
    query["EvaluationCount"] = request.getEvaluationCount();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspCityNode()) {
    query["IspCityNode"] = request.getIspCityNode();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMonitorExtendInfo()) {
    query["MonitorExtendInfo"] = request.getMonitorExtendInfo();
  }

  if (!!request.hasProtocolType()) {
    query["ProtocolType"] = request.getProtocolType();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddGtmMonitor"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddGtmMonitorResponse>();
}

/**
 * @summary Adds a health check.
 *
 * @param request AddGtmMonitorRequest
 * @return AddGtmMonitorResponse
 */
AddGtmMonitorResponse Client::addGtmMonitor(const AddGtmMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addGtmMonitorWithOptions(request, runtime);
}

/**
 * @summary Adds a disaster recovery plan.
 *
 * @param request AddGtmRecoveryPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddGtmRecoveryPlanResponse
 */
AddGtmRecoveryPlanResponse Client::addGtmRecoveryPlanWithOptions(const AddGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFaultAddrPool()) {
    query["FaultAddrPool"] = request.getFaultAddrPool();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddGtmRecoveryPlan"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddGtmRecoveryPlanResponse>();
}

/**
 * @summary Adds a disaster recovery plan.
 *
 * @param request AddGtmRecoveryPlanRequest
 * @return AddGtmRecoveryPlanResponse
 */
AddGtmRecoveryPlanResponse Client::addGtmRecoveryPlan(const AddGtmRecoveryPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addGtmRecoveryPlanWithOptions(request, runtime);
}

/**
 * @summary Adds an authoritative record for recursive resolution.
 *
 * @description - You can specify a domain name (DomainName), page number (PageNumber), and page size (PageSize) to retrieve the list of DNS records for that domain name.
 * - To find DNS records that contain a specific keyword, you can specify the keyword for the host record (RRKeyWord), record type (TypeKeyWord), or record value (ValueKeyWord).
 * - By default, the list of DNS records is sorted from newest to oldest.
 * - You can specify a domain group ID (GroupId). The \\`All Domains\\` group includes all domain names. The \\`Default Group\\` includes domain names that are not assigned to a group.
 *
 * @param request AddRecursionRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRecursionRecordResponse
 */
AddRecursionRecordResponse Client::addRecursionRecordWithOptions(const AddRecursionRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasRequestSource()) {
    query["RequestSource"] = request.getRequestSource();
  }

  if (!!request.hasRr()) {
    query["Rr"] = request.getRr();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.getValue();
  }

  if (!!request.hasWeight()) {
    query["Weight"] = request.getWeight();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddRecursionRecord"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddRecursionRecordResponse>();
}

/**
 * @summary Adds an authoritative record for recursive resolution.
 *
 * @description - You can specify a domain name (DomainName), page number (PageNumber), and page size (PageSize) to retrieve the list of DNS records for that domain name.
 * - To find DNS records that contain a specific keyword, you can specify the keyword for the host record (RRKeyWord), record type (TypeKeyWord), or record value (ValueKeyWord).
 * - By default, the list of DNS records is sorted from newest to oldest.
 * - You can specify a domain group ID (GroupId). The \\`All Domains\\` group includes all domain names. The \\`Default Group\\` includes domain names that are not assigned to a group.
 *
 * @param request AddRecursionRecordRequest
 * @return AddRecursionRecordResponse
 */
AddRecursionRecordResponse Client::addRecursionRecord(const AddRecursionRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addRecursionRecordWithOptions(request, runtime);
}

/**
 * @summary Adds a built-in authoritative domain name zone for recursive resolution.
 *
 * @description The end IP address of each IP range must be greater than or equal to the start IP address.
 * The IP address ranges of all IP ranges in all custom lines for a domain name cannot overlap.
 *
 * @param request AddRecursionZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRecursionZoneResponse
 */
AddRecursionZoneResponse Client::addRecursionZoneWithOptions(const AddRecursionZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasProxyPattern()) {
    query["ProxyPattern"] = request.getProxyPattern();
  }

  if (!!request.hasZoneName()) {
    query["ZoneName"] = request.getZoneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddRecursionZone"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddRecursionZoneResponse>();
}

/**
 * @summary Adds a built-in authoritative domain name zone for recursive resolution.
 *
 * @description The end IP address of each IP range must be greater than or equal to the start IP address.
 * The IP address ranges of all IP ranges in all custom lines for a domain name cannot overlap.
 *
 * @param request AddRecursionZoneRequest
 * @return AddRecursionZoneResponse
 */
AddRecursionZoneResponse Client::addRecursionZone(const AddRecursionZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addRecursionZoneWithOptions(request, runtime);
}

/**
 * @summary Adds the serverHold status to a specified domain name.
 *
 * @description ## Request description
 * - This API adds the serverHold property to a specified domain name.
 *
 * @param request AddRspDomainServerHoldStatusForGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRspDomainServerHoldStatusForGatewayResponse
 */
AddRspDomainServerHoldStatusForGatewayResponse Client::addRspDomainServerHoldStatusForGatewayWithOptions(const AddRspDomainServerHoldStatusForGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasStatusMsg()) {
    query["StatusMsg"] = request.getStatusMsg();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddRspDomainServerHoldStatusForGateway"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddRspDomainServerHoldStatusForGatewayResponse>();
}

/**
 * @summary Adds the serverHold status to a specified domain name.
 *
 * @description ## Request description
 * - This API adds the serverHold property to a specified domain name.
 *
 * @param request AddRspDomainServerHoldStatusForGatewayRequest
 * @return AddRspDomainServerHoldStatusForGatewayResponse
 */
AddRspDomainServerHoldStatusForGatewayResponse Client::addRspDomainServerHoldStatusForGateway(const AddRspDomainServerHoldStatusForGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addRspDomainServerHoldStatusForGatewayWithOptions(request, runtime);
}

/**
 * @summary Adds the serverHold status for a specified domain name.
 *
 * @description ## Request description
 * - Adds the serverHold status for a specified domain name.
 *
 * @param request AddRspDomainServerHoldStatusForGatewayOteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRspDomainServerHoldStatusForGatewayOteResponse
 */
AddRspDomainServerHoldStatusForGatewayOteResponse Client::addRspDomainServerHoldStatusForGatewayOteWithOptions(const AddRspDomainServerHoldStatusForGatewayOteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasStatusMsg()) {
    query["StatusMsg"] = request.getStatusMsg();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddRspDomainServerHoldStatusForGatewayOte"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddRspDomainServerHoldStatusForGatewayOteResponse>();
}

/**
 * @summary Adds the serverHold status for a specified domain name.
 *
 * @description ## Request description
 * - Adds the serverHold status for a specified domain name.
 *
 * @param request AddRspDomainServerHoldStatusForGatewayOteRequest
 * @return AddRspDomainServerHoldStatusForGatewayOteResponse
 */
AddRspDomainServerHoldStatusForGatewayOteResponse Client::addRspDomainServerHoldStatusForGatewayOte(const AddRspDomainServerHoldStatusForGatewayOteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addRspDomainServerHoldStatusForGatewayOteWithOptions(request, runtime);
}

/**
 * @summary Binds paid domain names in Alibaba Cloud DNS to an instance ID.
 *
 * @description An instance is considered a new instance if its ID starts with \\"dns-\\". New instances support multiple domain names. You can call this operation to bind domain names directly to the instance. An error occurs if the number of domain names exceeds the instance\\"s limit.
 * An instance is considered a legacy instance if its ID does not start with \\"dns-\\". Legacy instances support only one domain name. If you call this operation on a legacy instance that already has a domain name, the existing domain name is replaced.
 *
 * @param request BindInstanceDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindInstanceDomainsResponse
 */
BindInstanceDomainsResponse Client::bindInstanceDomainsWithOptions(const BindInstanceDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.getDomainNames();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindInstanceDomains"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindInstanceDomainsResponse>();
}

/**
 * @summary Binds paid domain names in Alibaba Cloud DNS to an instance ID.
 *
 * @description An instance is considered a new instance if its ID starts with \\"dns-\\". New instances support multiple domain names. You can call this operation to bind domain names directly to the instance. An error occurs if the number of domain names exceeds the instance\\"s limit.
 * An instance is considered a legacy instance if its ID does not start with \\"dns-\\". Legacy instances support only one domain name. If you call this operation on a legacy instance that already has a domain name, the existing domain name is replaced.
 *
 * @param request BindInstanceDomainsRequest
 * @return BindInstanceDomainsResponse
 */
BindInstanceDomainsResponse Client::bindInstanceDomains(const BindInstanceDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindInstanceDomainsWithOptions(request, runtime);
}

/**
 * @summary Moves a domain name to a new group.
 *
 * @description You can specify the ID of a domain name group (GroupId). The All Domains group contains all domain names, while the Default group contains domain names that are not assigned to any group.
 *
 * @param request ChangeDomainGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeDomainGroupResponse
 */
ChangeDomainGroupResponse Client::changeDomainGroupWithOptions(const ChangeDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeDomainGroup"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeDomainGroupResponse>();
}

/**
 * @summary Moves a domain name to a new group.
 *
 * @description You can specify the ID of a domain name group (GroupId). The All Domains group contains all domain names, while the Default group contains domain names that are not assigned to any group.
 *
 * @param request ChangeDomainGroupRequest
 * @return ChangeDomainGroupResponse
 */
ChangeDomainGroupResponse Client::changeDomainGroup(const ChangeDomainGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeDomainGroupWithOptions(request, runtime);
}

/**
 * @summary Changes the domain name that is attached to a Cloud DNS product.
 *
 * @description - **You can call this operation to change the domain name that is attached to a Cloud DNS product. To detach a domain name, call this operation and leave the NewDomain parameter empty.**
 * - **This operation applies to instances of earlier versions. If you use a new edition, such as Personal Edition, Enterprise Standard Edition, or Enterprise Ultimate Edition, call the BindInstanceDomains operation instead.**
 *
 * @param request ChangeDomainOfDnsProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeDomainOfDnsProductResponse
 */
ChangeDomainOfDnsProductResponse Client::changeDomainOfDnsProductWithOptions(const ChangeDomainOfDnsProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNewDomain()) {
    query["NewDomain"] = request.getNewDomain();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeDomainOfDnsProduct"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeDomainOfDnsProductResponse>();
}

/**
 * @summary Changes the domain name that is attached to a Cloud DNS product.
 *
 * @description - **You can call this operation to change the domain name that is attached to a Cloud DNS product. To detach a domain name, call this operation and leave the NewDomain parameter empty.**
 * - **This operation applies to instances of earlier versions. If you use a new edition, such as Personal Edition, Enterprise Standard Edition, or Enterprise Ultimate Edition, call the BindInstanceDomains operation instead.**
 *
 * @param request ChangeDomainOfDnsProductRequest
 * @return ChangeDomainOfDnsProductResponse
 */
ChangeDomainOfDnsProductResponse Client::changeDomainOfDnsProduct(const ChangeDomainOfDnsProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeDomainOfDnsProductWithOptions(request, runtime);
}

/**
 * @summary Copies a Global Traffic Manager (GTM) configuration.
 *
 * @param request CopyGtmConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopyGtmConfigResponse
 */
CopyGtmConfigResponse Client::copyGtmConfigWithOptions(const CopyGtmConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCopyType()) {
    query["CopyType"] = request.getCopyType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.getSourceId();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CopyGtmConfig"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopyGtmConfigResponse>();
}

/**
 * @summary Copies a Global Traffic Manager (GTM) configuration.
 *
 * @param request CopyGtmConfigRequest
 * @return CopyGtmConfigResponse
 */
CopyGtmConfigResponse Client::copyGtmConfig(const CopyGtmConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copyGtmConfigWithOptions(request, runtime);
}

/**
 * @summary Registers an agent.
 *
 * @param tmpReq CreateAtiAgentRegisterInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAtiAgentRegisterInfoResponse
 */
CreateAtiAgentRegisterInfoResponse Client::createAtiAgentRegisterInfoWithOptions(const CreateAtiAgentRegisterInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAtiAgentRegisterInfoShrinkRequest request = CreateAtiAgentRegisterInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEndpoints()) {
    request.setEndpointsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEndpoints(), "Endpoints", "json"));
  }

  json query = {};
  if (!!request.hasAgentDescription()) {
    query["AgentDescription"] = request.getAgentDescription();
  }

  if (!!request.hasAgentDisplayName()) {
    query["AgentDisplayName"] = request.getAgentDisplayName();
  }

  if (!!request.hasAgentHost()) {
    query["AgentHost"] = request.getAgentHost();
  }

  if (!!request.hasAgentVersion()) {
    query["AgentVersion"] = request.getAgentVersion();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointsShrink()) {
    query["Endpoints"] = request.getEndpointsShrink();
  }

  if (!!request.hasRegistrantId()) {
    query["RegistrantId"] = request.getRegistrantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAtiAgentRegisterInfo"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAtiAgentRegisterInfoResponse>();
}

/**
 * @summary Registers an agent.
 *
 * @param request CreateAtiAgentRegisterInfoRequest
 * @return CreateAtiAgentRegisterInfoResponse
 */
CreateAtiAgentRegisterInfoResponse Client::createAtiAgentRegisterInfo(const CreateAtiAgentRegisterInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAtiAgentRegisterInfoWithOptions(request, runtime);
}

/**
 * @summary Registers an agent - Step 2: Generates a DNS record for domain ownership verification.
 *
 * @param request CreateAtiAgentRegisterInfoAcmeChallengeRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAtiAgentRegisterInfoAcmeChallengeRecordResponse
 */
CreateAtiAgentRegisterInfoAcmeChallengeRecordResponse Client::createAtiAgentRegisterInfoAcmeChallengeRecordWithOptions(const CreateAtiAgentRegisterInfoAcmeChallengeRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentRegisterInfoId()) {
    query["AgentRegisterInfoId"] = request.getAgentRegisterInfoId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAtiAgentRegisterInfoAcmeChallengeRecord"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAtiAgentRegisterInfoAcmeChallengeRecordResponse>();
}

/**
 * @summary Registers an agent - Step 2: Generates a DNS record for domain ownership verification.
 *
 * @param request CreateAtiAgentRegisterInfoAcmeChallengeRecordRequest
 * @return CreateAtiAgentRegisterInfoAcmeChallengeRecordResponse
 */
CreateAtiAgentRegisterInfoAcmeChallengeRecordResponse Client::createAtiAgentRegisterInfoAcmeChallengeRecord(const CreateAtiAgentRegisterInfoAcmeChallengeRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAtiAgentRegisterInfoAcmeChallengeRecordWithOptions(request, runtime);
}

/**
 * @summary Submits a real-name registrant.
 *
 * @param request CreateAtiRegistrantRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAtiRegistrantResponse
 */
CreateAtiRegistrantResponse Client::createAtiRegistrantWithOptions(const CreateAtiRegistrantRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCc()) {
    query["Cc"] = request.getCc();
  }

  if (!!request.hasCity()) {
    query["City"] = request.getCity();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDocumentCode()) {
    query["DocumentCode"] = request.getDocumentCode();
  }

  if (!!request.hasDocumentImage()) {
    query["DocumentImage"] = request.getDocumentImage();
  }

  if (!!request.hasDocumentType()) {
    query["DocumentType"] = request.getDocumentType();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.getPhone();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  if (!!request.hasStreet()) {
    query["Street"] = request.getStreet();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAtiRegistrant"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAtiRegistrantResponse>();
}

/**
 * @summary Submits a real-name registrant.
 *
 * @param request CreateAtiRegistrantRequest
 * @return CreateAtiRegistrantResponse
 */
CreateAtiRegistrantResponse Client::createAtiRegistrant(const CreateAtiRegistrantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAtiRegistrantWithOptions(request, runtime);
}

/**
 * @summary Creates an address in Global Traffic Manager (GTM) 3.0.
 *
 * @param tmpReq CreateCloudGtmAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudGtmAddressResponse
 */
CreateCloudGtmAddressResponse Client::createCloudGtmAddressWithOptions(const CreateCloudGtmAddressRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCloudGtmAddressShrinkRequest request = CreateCloudGtmAddressShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHealthTasks()) {
    request.setHealthTasksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHealthTasks(), "HealthTasks", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasAttributeInfo()) {
    query["AttributeInfo"] = request.getAttributeInfo();
  }

  if (!!request.hasAvailableMode()) {
    query["AvailableMode"] = request.getAvailableMode();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnableStatus()) {
    query["EnableStatus"] = request.getEnableStatus();
  }

  if (!!request.hasHealthJudgement()) {
    query["HealthJudgement"] = request.getHealthJudgement();
  }

  if (!!request.hasHealthTasksShrink()) {
    query["HealthTasks"] = request.getHealthTasksShrink();
  }

  if (!!request.hasManualAvailableStatus()) {
    query["ManualAvailableStatus"] = request.getManualAvailableStatus();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCloudGtmAddress"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudGtmAddressResponse>();
}

/**
 * @summary Creates an address in Global Traffic Manager (GTM) 3.0.
 *
 * @param request CreateCloudGtmAddressRequest
 * @return CreateCloudGtmAddressResponse
 */
CreateCloudGtmAddressResponse Client::createCloudGtmAddress(const CreateCloudGtmAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudGtmAddressWithOptions(request, runtime);
}

/**
 * @summary Creates an address pool based on the specified parameters.
 *
 * @param request CreateCloudGtmAddressPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudGtmAddressPoolResponse
 */
CreateCloudGtmAddressPoolResponse Client::createCloudGtmAddressPoolWithOptions(const CreateCloudGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddressPoolName()) {
    query["AddressPoolName"] = request.getAddressPoolName();
  }

  if (!!request.hasAddressPoolType()) {
    query["AddressPoolType"] = request.getAddressPoolType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnableStatus()) {
    query["EnableStatus"] = request.getEnableStatus();
  }

  if (!!request.hasHealthJudgement()) {
    query["HealthJudgement"] = request.getHealthJudgement();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCloudGtmAddressPool"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudGtmAddressPoolResponse>();
}

/**
 * @summary Creates an address pool based on the specified parameters.
 *
 * @param request CreateCloudGtmAddressPoolRequest
 * @return CreateCloudGtmAddressPoolResponse
 */
CreateCloudGtmAddressPoolResponse Client::createCloudGtmAddressPool(const CreateCloudGtmAddressPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudGtmAddressPoolWithOptions(request, runtime);
}

/**
 * @summary Creates a configuration for a Global Traffic Manager (GTM) instance.
 *
 * @param request CreateCloudGtmInstanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudGtmInstanceConfigResponse
 */
CreateCloudGtmInstanceConfigResponse Client::createCloudGtmInstanceConfigWithOptions(const CreateCloudGtmInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnableStatus()) {
    query["EnableStatus"] = request.getEnableStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasScheduleHostname()) {
    query["ScheduleHostname"] = request.getScheduleHostname();
  }

  if (!!request.hasScheduleRrType()) {
    query["ScheduleRrType"] = request.getScheduleRrType();
  }

  if (!!request.hasScheduleZoneMode()) {
    query["ScheduleZoneMode"] = request.getScheduleZoneMode();
  }

  if (!!request.hasScheduleZoneName()) {
    query["ScheduleZoneName"] = request.getScheduleZoneName();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCloudGtmInstanceConfig"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudGtmInstanceConfigResponse>();
}

/**
 * @summary Creates a configuration for a Global Traffic Manager (GTM) instance.
 *
 * @param request CreateCloudGtmInstanceConfigRequest
 * @return CreateCloudGtmInstanceConfigResponse
 */
CreateCloudGtmInstanceConfigResponse Client::createCloudGtmInstanceConfig(const CreateCloudGtmInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudGtmInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary Creates a health check template in Global Traffic Manager (GTM) 3.0.
 *
 * @param tmpReq CreateCloudGtmMonitorTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudGtmMonitorTemplateResponse
 */
CreateCloudGtmMonitorTemplateResponse Client::createCloudGtmMonitorTemplateWithOptions(const CreateCloudGtmMonitorTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCloudGtmMonitorTemplateShrinkRequest request = CreateCloudGtmMonitorTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIspCityNodes()) {
    request.setIspCityNodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIspCityNodes(), "IspCityNodes", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEvaluationCount()) {
    query["EvaluationCount"] = request.getEvaluationCount();
  }

  if (!!request.hasExtendInfo()) {
    query["ExtendInfo"] = request.getExtendInfo();
  }

  if (!!request.hasFailureRate()) {
    query["FailureRate"] = request.getFailureRate();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasIspCityNodesShrink()) {
    query["IspCityNodes"] = request.getIspCityNodesShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCloudGtmMonitorTemplate"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudGtmMonitorTemplateResponse>();
}

/**
 * @summary Creates a health check template in Global Traffic Manager (GTM) 3.0.
 *
 * @param request CreateCloudGtmMonitorTemplateRequest
 * @return CreateCloudGtmMonitorTemplateResponse
 */
CreateCloudGtmMonitorTemplateResponse Client::createCloudGtmMonitorTemplate(const CreateCloudGtmMonitorTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudGtmMonitorTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a public DNS AccessKey.
 *
 * @param request CreatePdnsAppKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePdnsAppKeyResponse
 */
CreatePdnsAppKeyResponse Client::createPdnsAppKeyWithOptions(const CreatePdnsAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePdnsAppKey"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePdnsAppKeyResponse>();
}

/**
 * @summary Creates a public DNS AccessKey.
 *
 * @param request CreatePdnsAppKeyRequest
 * @return CreatePdnsAppKeyResponse
 */
CreatePdnsAppKeyResponse Client::createPdnsAppKey(const CreatePdnsAppKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPdnsAppKeyWithOptions(request, runtime);
}

/**
 * @summary Create Public DNS UDP IP Address Segment
 *
 * @param request CreatePdnsUdpIpSegmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePdnsUdpIpSegmentResponse
 */
CreatePdnsUdpIpSegmentResponse Client::createPdnsUdpIpSegmentWithOptions(const CreatePdnsUdpIpSegmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasIpToken()) {
    query["IpToken"] = request.getIpToken();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePdnsUdpIpSegment"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePdnsUdpIpSegmentResponse>();
}

/**
 * @summary Create Public DNS UDP IP Address Segment
 *
 * @param request CreatePdnsUdpIpSegmentRequest
 * @return CreatePdnsUdpIpSegmentResponse
 */
CreatePdnsUdpIpSegmentResponse Client::createPdnsUdpIpSegment(const CreatePdnsUdpIpSegmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPdnsUdpIpSegmentWithOptions(request, runtime);
}

/**
 * @summary Deletes Agent registration information.
 *
 * @param request DeleteAtiAgentRegisterInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAtiAgentRegisterInfoResponse
 */
DeleteAtiAgentRegisterInfoResponse Client::deleteAtiAgentRegisterInfoWithOptions(const DeleteAtiAgentRegisterInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentRegisterInfoId()) {
    query["AgentRegisterInfoId"] = request.getAgentRegisterInfoId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAtiAgentRegisterInfo"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAtiAgentRegisterInfoResponse>();
}

/**
 * @summary Deletes Agent registration information.
 *
 * @param request DeleteAtiAgentRegisterInfoRequest
 * @return DeleteAtiAgentRegisterInfoResponse
 */
DeleteAtiAgentRegisterInfoResponse Client::deleteAtiAgentRegisterInfo(const DeleteAtiAgentRegisterInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAtiAgentRegisterInfoWithOptions(request, runtime);
}

/**
 * @summary Revokes a verified registrant.
 *
 * @param request DeleteAtiRegistrantRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAtiRegistrantResponse
 */
DeleteAtiRegistrantResponse Client::deleteAtiRegistrantWithOptions(const DeleteAtiRegistrantRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegistrantId()) {
    query["RegistrantId"] = request.getRegistrantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAtiRegistrant"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAtiRegistrantResponse>();
}

/**
 * @summary Revokes a verified registrant.
 *
 * @param request DeleteAtiRegistrantRequest
 * @return DeleteAtiRegistrantResponse
 */
DeleteAtiRegistrantResponse Client::deleteAtiRegistrant(const DeleteAtiRegistrantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAtiRegistrantWithOptions(request, runtime);
}

/**
 * @summary Deletes an address.
 *
 * @param request DeleteCloudGtmAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudGtmAddressResponse
 */
DeleteCloudGtmAddressResponse Client::deleteCloudGtmAddressWithOptions(const DeleteCloudGtmAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddressId()) {
    query["AddressId"] = request.getAddressId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCloudGtmAddress"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCloudGtmAddressResponse>();
}

/**
 * @summary Deletes an address.
 *
 * @param request DeleteCloudGtmAddressRequest
 * @return DeleteCloudGtmAddressResponse
 */
DeleteCloudGtmAddressResponse Client::deleteCloudGtmAddress(const DeleteCloudGtmAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudGtmAddressWithOptions(request, runtime);
}

/**
 * @summary Deletes an address pool.
 *
 * @param request DeleteCloudGtmAddressPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudGtmAddressPoolResponse
 */
DeleteCloudGtmAddressPoolResponse Client::deleteCloudGtmAddressPoolWithOptions(const DeleteCloudGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddressPoolId()) {
    query["AddressPoolId"] = request.getAddressPoolId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCloudGtmAddressPool"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCloudGtmAddressPoolResponse>();
}

/**
 * @summary Deletes an address pool.
 *
 * @param request DeleteCloudGtmAddressPoolRequest
 * @return DeleteCloudGtmAddressPoolResponse
 */
DeleteCloudGtmAddressPoolResponse Client::deleteCloudGtmAddressPool(const DeleteCloudGtmAddressPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudGtmAddressPoolWithOptions(request, runtime);
}

/**
 * @summary Deletes an access domain name from the configuration of a Global Traffic Manager (GTM) 3.0 instance.
 *
 * @param request DeleteCloudGtmInstanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudGtmInstanceConfigResponse
 */
DeleteCloudGtmInstanceConfigResponse Client::deleteCloudGtmInstanceConfigWithOptions(const DeleteCloudGtmInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCloudGtmInstanceConfig"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCloudGtmInstanceConfigResponse>();
}

/**
 * @summary Deletes an access domain name from the configuration of a Global Traffic Manager (GTM) 3.0 instance.
 *
 * @param request DeleteCloudGtmInstanceConfigRequest
 * @return DeleteCloudGtmInstanceConfigResponse
 */
DeleteCloudGtmInstanceConfigResponse Client::deleteCloudGtmInstanceConfig(const DeleteCloudGtmInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudGtmInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes a health check template.
 *
 * @param request DeleteCloudGtmMonitorTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudGtmMonitorTemplateResponse
 */
DeleteCloudGtmMonitorTemplateResponse Client::deleteCloudGtmMonitorTemplateWithOptions(const DeleteCloudGtmMonitorTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCloudGtmMonitorTemplate"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCloudGtmMonitorTemplateResponse>();
}

/**
 * @summary Deletes a health check template.
 *
 * @param request DeleteCloudGtmMonitorTemplateRequest
 * @return DeleteCloudGtmMonitorTemplateResponse
 */
DeleteCloudGtmMonitorTemplateResponse Client::deleteCloudGtmMonitorTemplate(const DeleteCloudGtmMonitorTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudGtmMonitorTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a batch of custom lines by specifying their unique IDs.
 *
 * @param request DeleteCustomLinesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomLinesResponse
 */
DeleteCustomLinesResponse Client::deleteCustomLinesWithOptions(const DeleteCustomLinesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLineIds()) {
    query["LineIds"] = request.getLineIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomLines"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomLinesResponse>();
}

/**
 * @summary Deletes a batch of custom lines by specifying their unique IDs.
 *
 * @param request DeleteCustomLinesRequest
 * @return DeleteCustomLinesResponse
 */
DeleteCustomLinesResponse Client::deleteCustomLines(const DeleteCustomLinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomLinesWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified domain name from the authoritative DNS proxy.
 *
 * @param request DeleteDnsCacheDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDnsCacheDomainResponse
 */
DeleteDnsCacheDomainResponse Client::deleteDnsCacheDomainWithOptions(const DeleteDnsCacheDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDnsCacheDomain"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDnsCacheDomainResponse>();
}

/**
 * @summary Deletes a specified domain name from the authoritative DNS proxy.
 *
 * @param request DeleteDnsCacheDomainRequest
 * @return DeleteDnsCacheDomainResponse
 */
DeleteDnsCacheDomainResponse Client::deleteDnsCacheDomain(const DeleteDnsCacheDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDnsCacheDomainWithOptions(request, runtime);
}

/**
 * @summary Deletes an access policy by its ID.
 *
 * @param request DeleteDnsGtmAccessStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDnsGtmAccessStrategyResponse
 */
DeleteDnsGtmAccessStrategyResponse Client::deleteDnsGtmAccessStrategyWithOptions(const DeleteDnsGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStrategyId()) {
    query["StrategyId"] = request.getStrategyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDnsGtmAccessStrategy"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDnsGtmAccessStrategyResponse>();
}

/**
 * @summary Deletes an access policy by its ID.
 *
 * @param request DeleteDnsGtmAccessStrategyRequest
 * @return DeleteDnsGtmAccessStrategyResponse
 */
DeleteDnsGtmAccessStrategyResponse Client::deleteDnsGtmAccessStrategy(const DeleteDnsGtmAccessStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDnsGtmAccessStrategyWithOptions(request, runtime);
}

/**
 * @summary Deletes an address pool by its ID.
 *
 * @param request DeleteDnsGtmAddressPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDnsGtmAddressPoolResponse
 */
DeleteDnsGtmAddressPoolResponse Client::deleteDnsGtmAddressPoolWithOptions(const DeleteDnsGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddrPoolId()) {
    query["AddrPoolId"] = request.getAddrPoolId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDnsGtmAddressPool"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDnsGtmAddressPoolResponse>();
}

/**
 * @summary Deletes an address pool by its ID.
 *
 * @param request DeleteDnsGtmAddressPoolRequest
 * @return DeleteDnsGtmAddressPoolResponse
 */
DeleteDnsGtmAddressPoolResponse Client::deleteDnsGtmAddressPool(const DeleteDnsGtmAddressPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDnsGtmAddressPoolWithOptions(request, runtime);
}

/**
 * @summary Deletes the specified domain name.
 *
 * @param request DeleteDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainResponse
 */
DeleteDomainResponse Client::deleteDomainWithOptions(const DeleteDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDomain"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDomainResponse>();
}

/**
 * @summary Deletes the specified domain name.
 *
 * @param request DeleteDomainRequest
 * @return DeleteDomainResponse
 */
DeleteDomainResponse Client::deleteDomain(const DeleteDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDomainWithOptions(request, runtime);
}

/**
 * @summary Deletes a domain name group and moves its domain names to the default group.
 *
 * @description > The default group cannot be deleted.
 *
 * @param request DeleteDomainGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainGroupResponse
 */
DeleteDomainGroupResponse Client::deleteDomainGroupWithOptions(const DeleteDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDomainGroup"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDomainGroupResponse>();
}

/**
 * @summary Deletes a domain name group and moves its domain names to the default group.
 *
 * @description > The default group cannot be deleted.
 *
 * @param request DeleteDomainGroupRequest
 * @return DeleteDomainGroupResponse
 */
DeleteDomainGroupResponse Client::deleteDomainGroup(const DeleteDomainGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDomainGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a DNS record based on the specified request parameters.
 *
 * @param request DeleteDomainRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDomainRecordResponse
 */
DeleteDomainRecordResponse Client::deleteDomainRecordWithOptions(const DeleteDomainRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDomainRecord"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDomainRecordResponse>();
}

/**
 * @summary Deletes a DNS record based on the specified request parameters.
 *
 * @param request DeleteDomainRecordRequest
 * @return DeleteDomainRecordResponse
 */
DeleteDomainRecordResponse Client::deleteDomainRecord(const DeleteDomainRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDomainRecordWithOptions(request, runtime);
}

/**
 * @summary Deletes an access policy.
 *
 * @param request DeleteGtmAccessStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGtmAccessStrategyResponse
 */
DeleteGtmAccessStrategyResponse Client::deleteGtmAccessStrategyWithOptions(const DeleteGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStrategyId()) {
    query["StrategyId"] = request.getStrategyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGtmAccessStrategy"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGtmAccessStrategyResponse>();
}

/**
 * @summary Deletes an access policy.
 *
 * @param request DeleteGtmAccessStrategyRequest
 * @return DeleteGtmAccessStrategyResponse
 */
DeleteGtmAccessStrategyResponse Client::deleteGtmAccessStrategy(const DeleteGtmAccessStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGtmAccessStrategyWithOptions(request, runtime);
}

/**
 * @summary Deletes an address pool.
 *
 * @param request DeleteGtmAddressPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGtmAddressPoolResponse
 */
DeleteGtmAddressPoolResponse Client::deleteGtmAddressPoolWithOptions(const DeleteGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddrPoolId()) {
    query["AddrPoolId"] = request.getAddrPoolId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGtmAddressPool"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGtmAddressPoolResponse>();
}

/**
 * @summary Deletes an address pool.
 *
 * @param request DeleteGtmAddressPoolRequest
 * @return DeleteGtmAddressPoolResponse
 */
DeleteGtmAddressPoolResponse Client::deleteGtmAddressPool(const DeleteGtmAddressPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGtmAddressPoolWithOptions(request, runtime);
}

/**
 * @summary Deletes a disaster recovery plan.
 *
 * @param request DeleteGtmRecoveryPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteGtmRecoveryPlanResponse
 */
DeleteGtmRecoveryPlanResponse Client::deleteGtmRecoveryPlanWithOptions(const DeleteGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRecoveryPlanId()) {
    query["RecoveryPlanId"] = request.getRecoveryPlanId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteGtmRecoveryPlan"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteGtmRecoveryPlanResponse>();
}

/**
 * @summary Deletes a disaster recovery plan.
 *
 * @param request DeleteGtmRecoveryPlanRequest
 * @return DeleteGtmRecoveryPlanResponse
 */
DeleteGtmRecoveryPlanResponse Client::deleteGtmRecoveryPlan(const DeleteGtmRecoveryPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteGtmRecoveryPlanWithOptions(request, runtime);
}

/**
 * @summary Deletes a built-in authoritative DNS record used for recursive resolution.
 *
 * @param request DeleteRecursionRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecursionRecordResponse
 */
DeleteRecursionRecordResponse Client::deleteRecursionRecordWithOptions(const DeleteRecursionRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRecursionRecord"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRecursionRecordResponse>();
}

/**
 * @summary Deletes a built-in authoritative DNS record used for recursive resolution.
 *
 * @param request DeleteRecursionRecordRequest
 * @return DeleteRecursionRecordResponse
 */
DeleteRecursionRecordResponse Client::deleteRecursionRecord(const DeleteRecursionRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRecursionRecordWithOptions(request, runtime);
}

/**
 * @summary Deletes a built-in authoritative zone used for recursive resolution.
 *
 * @description If a zone contains locked DNS records, this operation does not delete them.
 *
 * @param request DeleteRecursionZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecursionZoneResponse
 */
DeleteRecursionZoneResponse Client::deleteRecursionZoneWithOptions(const DeleteRecursionZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRecursionZone"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRecursionZoneResponse>();
}

/**
 * @summary Deletes a built-in authoritative zone used for recursive resolution.
 *
 * @description If a zone contains locked DNS records, this operation does not delete them.
 *
 * @param request DeleteRecursionZoneRequest
 * @return DeleteRecursionZoneResponse
 */
DeleteRecursionZoneResponse Client::deleteRecursionZone(const DeleteRecursionZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRecursionZoneWithOptions(request, runtime);
}

/**
 * @summary Deletes the DNS records for a specified host record.
 *
 * @description Locked DNS records will not be deleted.
 *
 * @param request DeleteSubDomainRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSubDomainRecordsResponse
 */
DeleteSubDomainRecordsResponse Client::deleteSubDomainRecordsWithOptions(const DeleteSubDomainRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRR()) {
    query["RR"] = request.getRR();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSubDomainRecords"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSubDomainRecordsResponse>();
}

/**
 * @summary Deletes the DNS records for a specified host record.
 *
 * @description Locked DNS records will not be deleted.
 *
 * @param request DeleteSubDomainRecordsRequest
 * @return DeleteSubDomainRecordsResponse
 */
DeleteSubDomainRecordsResponse Client::deleteSubDomainRecords(const DeleteSubDomainRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSubDomainRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an Agent registration.
 *
 * @param request DescribeAtiAgentRegisterInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAtiAgentRegisterInfoResponse
 */
DescribeAtiAgentRegisterInfoResponse Client::describeAtiAgentRegisterInfoWithOptions(const DescribeAtiAgentRegisterInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentRegisterInfoId()) {
    query["AgentRegisterInfoId"] = request.getAgentRegisterInfoId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAtiAgentRegisterInfo"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAtiAgentRegisterInfoResponse>();
}

/**
 * @summary Queries the details of an Agent registration.
 *
 * @param request DescribeAtiAgentRegisterInfoRequest
 * @return DescribeAtiAgentRegisterInfoResponse
 */
DescribeAtiAgentRegisterInfoResponse Client::describeAtiAgentRegisterInfo(const DescribeAtiAgentRegisterInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAtiAgentRegisterInfoWithOptions(request, runtime);
}

/**
 * @summary 为sdk查询agent信息功能
 *
 * @param request DescribeAtiAgentRegisterInfoMarketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAtiAgentRegisterInfoMarketResponse
 */
DescribeAtiAgentRegisterInfoMarketResponse Client::describeAtiAgentRegisterInfoMarketWithOptions(const DescribeAtiAgentRegisterInfoMarketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentHost()) {
    query["AgentHost"] = request.getAgentHost();
  }

  if (!!request.hasAgentVersion()) {
    query["AgentVersion"] = request.getAgentVersion();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAtiAgentRegisterInfoMarket"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAtiAgentRegisterInfoMarketResponse>();
}

/**
 * @summary 为sdk查询agent信息功能
 *
 * @param request DescribeAtiAgentRegisterInfoMarketRequest
 * @return DescribeAtiAgentRegisterInfoMarketResponse
 */
DescribeAtiAgentRegisterInfoMarketResponse Client::describeAtiAgentRegisterInfoMarket(const DescribeAtiAgentRegisterInfoMarketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAtiAgentRegisterInfoMarketWithOptions(request, runtime);
}

/**
 * @summary Queries alert settings.
 *
 * @param request DescribeAtiAlertSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAtiAlertSettingsResponse
 */
DescribeAtiAlertSettingsResponse Client::describeAtiAlertSettingsWithOptions(const DescribeAtiAlertSettingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAtiAlertSettings"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAtiAlertSettingsResponse>();
}

/**
 * @summary Queries alert settings.
 *
 * @param request DescribeAtiAlertSettingsRequest
 * @return DescribeAtiAlertSettingsResponse
 */
DescribeAtiAlertSettingsResponse Client::describeAtiAlertSettings(const DescribeAtiAlertSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAtiAlertSettingsWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a certificate.
 *
 * @param request DescribeAtiCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAtiCertificateResponse
 */
DescribeAtiCertificateResponse Client::describeAtiCertificateWithOptions(const DescribeAtiCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentCertificateId()) {
    query["AgentCertificateId"] = request.getAgentCertificateId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAtiCertificate"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAtiCertificateResponse>();
}

/**
 * @summary Queries the details of a certificate.
 *
 * @param request DescribeAtiCertificateRequest
 * @return DescribeAtiCertificateResponse
 */
DescribeAtiCertificateResponse Client::describeAtiCertificate(const DescribeAtiCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAtiCertificateWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a real-name verified registrant.
 *
 * @param request DescribeAtiRegistrantRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAtiRegistrantResponse
 */
DescribeAtiRegistrantResponse Client::describeAtiRegistrantWithOptions(const DescribeAtiRegistrantRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegistrantId()) {
    query["RegistrantId"] = request.getRegistrantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAtiRegistrant"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAtiRegistrantResponse>();
}

/**
 * @summary Retrieves the details of a real-name verified registrant.
 *
 * @param request DescribeAtiRegistrantRequest
 * @return DescribeAtiRegistrantResponse
 */
DescribeAtiRegistrantResponse Client::describeAtiRegistrant(const DescribeAtiRegistrantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAtiRegistrantWithOptions(request, runtime);
}

/**
 * @summary Queries the execution results of a batch operation task using a task ID. If you do not specify a task ID, the results of the most recent batch task are returned.
 *
 * @param request DescribeBatchResultCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBatchResultCountResponse
 */
DescribeBatchResultCountResponse Client::describeBatchResultCountWithOptions(const DescribeBatchResultCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBatchType()) {
    query["BatchType"] = request.getBatchType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBatchResultCount"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBatchResultCountResponse>();
}

/**
 * @summary Queries the execution results of a batch operation task using a task ID. If you do not specify a task ID, the results of the most recent batch task are returned.
 *
 * @param request DescribeBatchResultCountRequest
 * @return DescribeBatchResultCountResponse
 */
DescribeBatchResultCountResponse Client::describeBatchResultCount(const DescribeBatchResultCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBatchResultCountWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a batch processing result.
 *
 * @description **Prerequisite: You can call this operation after the batch task is complete.**
 *
 * @param request DescribeBatchResultDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBatchResultDetailResponse
 */
DescribeBatchResultDetailResponse Client::describeBatchResultDetailWithOptions(const DescribeBatchResultDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBatchType()) {
    query["BatchType"] = request.getBatchType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
    {"action" , "DescribeBatchResultDetail"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBatchResultDetailResponse>();
}

/**
 * @summary Retrieves the details of a batch processing result.
 *
 * @description **Prerequisite: You can call this operation after the batch task is complete.**
 *
 * @param request DescribeBatchResultDetailRequest
 * @return DescribeBatchResultDetailResponse
 */
DescribeBatchResultDetailResponse Client::describeBatchResultDetail(const DescribeBatchResultDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBatchResultDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration of an address based on the specified input parameters.
 *
 * @param request DescribeCloudGtmAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudGtmAddressResponse
 */
DescribeCloudGtmAddressResponse Client::describeCloudGtmAddressWithOptions(const DescribeCloudGtmAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddressId()) {
    query["AddressId"] = request.getAddressId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudGtmAddress"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudGtmAddressResponse>();
}

/**
 * @summary Queries the configuration of an address based on the specified input parameters.
 *
 * @param request DescribeCloudGtmAddressRequest
 * @return DescribeCloudGtmAddressResponse
 */
DescribeCloudGtmAddressResponse Client::describeCloudGtmAddress(const DescribeCloudGtmAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudGtmAddressWithOptions(request, runtime);
}

/**
 * @summary Retrieves the configuration of a specified address pool.
 *
 * @param request DescribeCloudGtmAddressPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudGtmAddressPoolResponse
 */
DescribeCloudGtmAddressPoolResponse Client::describeCloudGtmAddressPoolWithOptions(const DescribeCloudGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddressPoolId()) {
    query["AddressPoolId"] = request.getAddressPoolId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudGtmAddressPool"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudGtmAddressPoolResponse>();
}

/**
 * @summary Retrieves the configuration of a specified address pool.
 *
 * @param request DescribeCloudGtmAddressPoolRequest
 * @return DescribeCloudGtmAddressPoolResponse
 */
DescribeCloudGtmAddressPoolResponse Client::describeCloudGtmAddressPool(const DescribeCloudGtmAddressPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudGtmAddressPoolWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about the instances that reference an address pool.
 *
 * @param request DescribeCloudGtmAddressPoolReferenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudGtmAddressPoolReferenceResponse
 */
DescribeCloudGtmAddressPoolReferenceResponse Client::describeCloudGtmAddressPoolReferenceWithOptions(const DescribeCloudGtmAddressPoolReferenceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddressPoolId()) {
    query["AddressPoolId"] = request.getAddressPoolId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudGtmAddressPoolReference"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudGtmAddressPoolReferenceResponse>();
}

/**
 * @summary Retrieves information about the instances that reference an address pool.
 *
 * @param request DescribeCloudGtmAddressPoolReferenceRequest
 * @return DescribeCloudGtmAddressPoolReferenceResponse
 */
DescribeCloudGtmAddressPoolReferenceResponse Client::describeCloudGtmAddressPoolReference(const DescribeCloudGtmAddressPoolReferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudGtmAddressPoolReferenceWithOptions(request, runtime);
}

/**
 * @summary Queries the address pools and Global Traffic Manager (GTM) 3.0 instances that reference a specified address.
 *
 * @param request DescribeCloudGtmAddressReferenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudGtmAddressReferenceResponse
 */
DescribeCloudGtmAddressReferenceResponse Client::describeCloudGtmAddressReferenceWithOptions(const DescribeCloudGtmAddressReferenceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddressId()) {
    query["AddressId"] = request.getAddressId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudGtmAddressReference"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudGtmAddressReferenceResponse>();
}

/**
 * @summary Queries the address pools and Global Traffic Manager (GTM) 3.0 instances that reference a specified address.
 *
 * @param request DescribeCloudGtmAddressReferenceRequest
 * @return DescribeCloudGtmAddressReferenceResponse
 */
DescribeCloudGtmAddressReferenceResponse Client::describeCloudGtmAddressReference(const DescribeCloudGtmAddressReferenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudGtmAddressReferenceWithOptions(request, runtime);
}

/**
 * @summary Queries the global alert configuration for Global Traffic Manager (GTM).
 *
 * @param request DescribeCloudGtmGlobalAlertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudGtmGlobalAlertResponse
 */
DescribeCloudGtmGlobalAlertResponse Client::describeCloudGtmGlobalAlertWithOptions(const DescribeCloudGtmGlobalAlertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudGtmGlobalAlert"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudGtmGlobalAlertResponse>();
}

/**
 * @summary Queries the global alert configuration for Global Traffic Manager (GTM).
 *
 * @param request DescribeCloudGtmGlobalAlertRequest
 * @return DescribeCloudGtmGlobalAlertResponse
 */
DescribeCloudGtmGlobalAlertResponse Client::describeCloudGtmGlobalAlert(const DescribeCloudGtmGlobalAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudGtmGlobalAlertWithOptions(request, runtime);
}

/**
 * @summary Queries the alert configuration for an instance.
 *
 * @param request DescribeCloudGtmInstanceConfigAlertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudGtmInstanceConfigAlertResponse
 */
DescribeCloudGtmInstanceConfigAlertResponse Client::describeCloudGtmInstanceConfigAlertWithOptions(const DescribeCloudGtmInstanceConfigAlertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudGtmInstanceConfigAlert"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudGtmInstanceConfigAlertResponse>();
}

/**
 * @summary Queries the alert configuration for an instance.
 *
 * @param request DescribeCloudGtmInstanceConfigAlertRequest
 * @return DescribeCloudGtmInstanceConfigAlertResponse
 */
DescribeCloudGtmInstanceConfigAlertResponse Client::describeCloudGtmInstanceConfigAlert(const DescribeCloudGtmInstanceConfigAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudGtmInstanceConfigAlertWithOptions(request, runtime);
}

/**
 * @summary Queries the full configuration of a GTM 3.0 access domain name, including alert settings, address pools, and address details.
 *
 * @param request DescribeCloudGtmInstanceConfigFullInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudGtmInstanceConfigFullInfoResponse
 */
DescribeCloudGtmInstanceConfigFullInfoResponse Client::describeCloudGtmInstanceConfigFullInfoWithOptions(const DescribeCloudGtmInstanceConfigFullInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudGtmInstanceConfigFullInfo"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudGtmInstanceConfigFullInfoResponse>();
}

/**
 * @summary Queries the full configuration of a GTM 3.0 access domain name, including alert settings, address pools, and address details.
 *
 * @param request DescribeCloudGtmInstanceConfigFullInfoRequest
 * @return DescribeCloudGtmInstanceConfigFullInfoResponse
 */
DescribeCloudGtmInstanceConfigFullInfoResponse Client::describeCloudGtmInstanceConfigFullInfo(const DescribeCloudGtmInstanceConfigFullInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudGtmInstanceConfigFullInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the configuration of a specified health check template.
 *
 * @param request DescribeCloudGtmMonitorTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudGtmMonitorTemplateResponse
 */
DescribeCloudGtmMonitorTemplateResponse Client::describeCloudGtmMonitorTemplateWithOptions(const DescribeCloudGtmMonitorTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudGtmMonitorTemplate"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudGtmMonitorTemplateResponse>();
}

/**
 * @summary Retrieves the configuration of a specified health check template.
 *
 * @param request DescribeCloudGtmMonitorTemplateRequest
 * @return DescribeCloudGtmMonitorTemplateResponse
 */
DescribeCloudGtmMonitorTemplateResponse Client::describeCloudGtmMonitorTemplate(const DescribeCloudGtmMonitorTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudGtmMonitorTemplateWithOptions(request, runtime);
}

/**
 * @param request DescribeCloudGtmSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudGtmSummaryResponse
 */
DescribeCloudGtmSummaryResponse Client::describeCloudGtmSummaryWithOptions(const DescribeCloudGtmSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudGtmSummary"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudGtmSummaryResponse>();
}

/**
 * @param request DescribeCloudGtmSummaryRequest
 * @return DescribeCloudGtmSummaryResponse
 */
DescribeCloudGtmSummaryResponse Client::describeCloudGtmSummary(const DescribeCloudGtmSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudGtmSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries the system lines supported by Global Traffic Manager (GTM).
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudGtmSystemLinesResponse
 */
DescribeCloudGtmSystemLinesResponse Client::describeCloudGtmSystemLinesWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeCloudGtmSystemLines"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudGtmSystemLinesResponse>();
}

/**
 * @summary Queries the system lines supported by Global Traffic Manager (GTM).
 *
 * @return DescribeCloudGtmSystemLinesResponse
 */
DescribeCloudGtmSystemLinesResponse Client::describeCloudGtmSystemLines() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudGtmSystemLinesWithOptions(runtime);
}

/**
 * @summary Queries a custom line by its unique ID.
 *
 * @param request DescribeCustomLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomLineResponse
 */
DescribeCustomLineResponse Client::describeCustomLineWithOptions(const DescribeCustomLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLineId()) {
    query["LineId"] = request.getLineId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCustomLine"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomLineResponse>();
}

/**
 * @summary Queries a custom line by its unique ID.
 *
 * @param request DescribeCustomLineRequest
 * @return DescribeCustomLineResponse
 */
DescribeCustomLineResponse Client::describeCustomLine(const DescribeCustomLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomLineWithOptions(request, runtime);
}

/**
 * @summary Queries the custom lines for a domain name.
 *
 * @param request DescribeCustomLinesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCustomLinesResponse
 */
DescribeCustomLinesResponse Client::describeCustomLinesWithOptions(const DescribeCustomLinesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
    {"action" , "DescribeCustomLines"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCustomLinesResponse>();
}

/**
 * @summary Queries the custom lines for a domain name.
 *
 * @param request DescribeCustomLinesRequest
 * @return DescribeCustomLinesResponse
 */
DescribeCustomLinesResponse Client::describeCustomLines(const DescribeCustomLinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCustomLinesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of subdomains that have weight configurations based on the specified parameters.
 *
 * @param request DescribeDNSSLBSubDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDNSSLBSubDomainsResponse
 */
DescribeDNSSLBSubDomainsResponse Client::describeDNSSLBSubDomainsWithOptions(const DescribeDNSSLBSubDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRr()) {
    query["Rr"] = request.getRr();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDNSSLBSubDomains"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDNSSLBSubDomainsResponse>();
}

/**
 * @summary Retrieves a list of subdomains that have weight configurations based on the specified parameters.
 *
 * @param request DescribeDNSSLBSubDomainsRequest
 * @return DescribeDNSSLBSubDomainsResponse
 */
DescribeDNSSLBSubDomainsResponse Client::describeDNSSLBSubDomains(const DescribeDNSSLBSubDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDNSSLBSubDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries authoritative proxy domain names based on the specified parameters.
 *
 * @param request DescribeDnsCacheDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnsCacheDomainsResponse
 */
DescribeDnsCacheDomainsResponse Client::describeDnsCacheDomainsWithOptions(const DescribeDnsCacheDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
    {"action" , "DescribeDnsCacheDomains"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDnsCacheDomainsResponse>();
}

/**
 * @summary Queries authoritative proxy domain names based on the specified parameters.
 *
 * @param request DescribeDnsCacheDomainsRequest
 * @return DescribeDnsCacheDomainsResponse
 */
DescribeDnsCacheDomainsResponse Client::describeDnsCacheDomains(const DescribeDnsCacheDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDnsCacheDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries the access strategies for a Global Traffic Manager (GTM) instance.
 *
 * @param request DescribeDnsGtmAccessStrategiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnsGtmAccessStrategiesResponse
 */
DescribeDnsGtmAccessStrategiesResponse Client::describeDnsGtmAccessStrategiesWithOptions(const DescribeDnsGtmAccessStrategiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStrategyMode()) {
    query["StrategyMode"] = request.getStrategyMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDnsGtmAccessStrategies"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDnsGtmAccessStrategiesResponse>();
}

/**
 * @summary Queries the access strategies for a Global Traffic Manager (GTM) instance.
 *
 * @param request DescribeDnsGtmAccessStrategiesRequest
 * @return DescribeDnsGtmAccessStrategiesResponse
 */
DescribeDnsGtmAccessStrategiesResponse Client::describeDnsGtmAccessStrategies(const DescribeDnsGtmAccessStrategiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDnsGtmAccessStrategiesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified access strategy.
 *
 * @param request DescribeDnsGtmAccessStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnsGtmAccessStrategyResponse
 */
DescribeDnsGtmAccessStrategyResponse Client::describeDnsGtmAccessStrategyWithOptions(const DescribeDnsGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStrategyId()) {
    query["StrategyId"] = request.getStrategyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDnsGtmAccessStrategy"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDnsGtmAccessStrategyResponse>();
}

/**
 * @summary Retrieves the details of a specified access strategy.
 *
 * @param request DescribeDnsGtmAccessStrategyRequest
 * @return DescribeDnsGtmAccessStrategyResponse
 */
DescribeDnsGtmAccessStrategyResponse Client::describeDnsGtmAccessStrategy(const DescribeDnsGtmAccessStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDnsGtmAccessStrategyWithOptions(request, runtime);
}

/**
 * @summary Describes the available configurations for an access policy based on an instance ID.
 *
 * @param request DescribeDnsGtmAccessStrategyAvailableConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnsGtmAccessStrategyAvailableConfigResponse
 */
DescribeDnsGtmAccessStrategyAvailableConfigResponse Client::describeDnsGtmAccessStrategyAvailableConfigWithOptions(const DescribeDnsGtmAccessStrategyAvailableConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStrategyMode()) {
    query["StrategyMode"] = request.getStrategyMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDnsGtmAccessStrategyAvailableConfig"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDnsGtmAccessStrategyAvailableConfigResponse>();
}

/**
 * @summary Describes the available configurations for an access policy based on an instance ID.
 *
 * @param request DescribeDnsGtmAccessStrategyAvailableConfigRequest
 * @return DescribeDnsGtmAccessStrategyAvailableConfigResponse
 */
DescribeDnsGtmAccessStrategyAvailableConfigResponse Client::describeDnsGtmAccessStrategyAvailableConfig(const DescribeDnsGtmAccessStrategyAvailableConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDnsGtmAccessStrategyAvailableConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the region where an address is located.
 *
 * @param request DescribeDnsGtmAddrAttributeInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnsGtmAddrAttributeInfoResponse
 */
DescribeDnsGtmAddrAttributeInfoResponse Client::describeDnsGtmAddrAttributeInfoWithOptions(const DescribeDnsGtmAddrAttributeInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddrs()) {
    query["Addrs"] = request.getAddrs();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDnsGtmAddrAttributeInfo"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDnsGtmAddrAttributeInfoResponse>();
}

/**
 * @summary Queries the region where an address is located.
 *
 * @param request DescribeDnsGtmAddrAttributeInfoRequest
 * @return DescribeDnsGtmAddrAttributeInfoResponse
 */
DescribeDnsGtmAddrAttributeInfoResponse Client::describeDnsGtmAddrAttributeInfo(const DescribeDnsGtmAddrAttributeInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDnsGtmAddrAttributeInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the available configurations for an address pool in a Global Traffic Manager (GTM) instance.
 *
 * @param request DescribeDnsGtmAddressPoolAvailableConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnsGtmAddressPoolAvailableConfigResponse
 */
DescribeDnsGtmAddressPoolAvailableConfigResponse Client::describeDnsGtmAddressPoolAvailableConfigWithOptions(const DescribeDnsGtmAddressPoolAvailableConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDnsGtmAddressPoolAvailableConfig"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDnsGtmAddressPoolAvailableConfigResponse>();
}

/**
 * @summary Queries the available configurations for an address pool in a Global Traffic Manager (GTM) instance.
 *
 * @param request DescribeDnsGtmAddressPoolAvailableConfigRequest
 * @return DescribeDnsGtmAddressPoolAvailableConfigResponse
 */
DescribeDnsGtmAddressPoolAvailableConfigResponse Client::describeDnsGtmAddressPoolAvailableConfig(const DescribeDnsGtmAddressPoolAvailableConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDnsGtmAddressPoolAvailableConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the available alert contact groups.
 *
 * @param request DescribeDnsGtmAvailableAlertGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnsGtmAvailableAlertGroupResponse
 */
DescribeDnsGtmAvailableAlertGroupResponse Client::describeDnsGtmAvailableAlertGroupWithOptions(const DescribeDnsGtmAvailableAlertGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDnsGtmAvailableAlertGroup"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDnsGtmAvailableAlertGroupResponse>();
}

/**
 * @summary Queries the available alert contact groups.
 *
 * @param request DescribeDnsGtmAvailableAlertGroupRequest
 * @return DescribeDnsGtmAvailableAlertGroupResponse
 */
DescribeDnsGtmAvailableAlertGroupResponse Client::describeDnsGtmAvailableAlertGroup(const DescribeDnsGtmAvailableAlertGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDnsGtmAvailableAlertGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an instance based on the specified instance ID.
 *
 * @param request DescribeDnsGtmInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnsGtmInstanceResponse
 */
DescribeDnsGtmInstanceResponse Client::describeDnsGtmInstanceWithOptions(const DescribeDnsGtmInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDnsGtmInstance"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDnsGtmInstanceResponse>();
}

/**
 * @summary Queries the details of an instance based on the specified instance ID.
 *
 * @param request DescribeDnsGtmInstanceRequest
 * @return DescribeDnsGtmInstanceResponse
 */
DescribeDnsGtmInstanceResponse Client::describeDnsGtmInstance(const DescribeDnsGtmInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDnsGtmInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an address pool by its ID.
 *
 * @param request DescribeDnsGtmInstanceAddressPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnsGtmInstanceAddressPoolResponse
 */
DescribeDnsGtmInstanceAddressPoolResponse Client::describeDnsGtmInstanceAddressPoolWithOptions(const DescribeDnsGtmInstanceAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddrPoolId()) {
    query["AddrPoolId"] = request.getAddrPoolId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDnsGtmInstanceAddressPool"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDnsGtmInstanceAddressPoolResponse>();
}

/**
 * @summary Queries the details of an address pool by its ID.
 *
 * @param request DescribeDnsGtmInstanceAddressPoolRequest
 * @return DescribeDnsGtmInstanceAddressPoolResponse
 */
DescribeDnsGtmInstanceAddressPoolResponse Client::describeDnsGtmInstanceAddressPool(const DescribeDnsGtmInstanceAddressPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDnsGtmInstanceAddressPoolWithOptions(request, runtime);
}

/**
 * @summary Retrieves the address pools of a Global Traffic Manager (GTM) instance.
 *
 * @param request DescribeDnsGtmInstanceAddressPoolsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnsGtmInstanceAddressPoolsResponse
 */
DescribeDnsGtmInstanceAddressPoolsResponse Client::describeDnsGtmInstanceAddressPoolsWithOptions(const DescribeDnsGtmInstanceAddressPoolsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
    {"action" , "DescribeDnsGtmInstanceAddressPools"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDnsGtmInstanceAddressPoolsResponse>();
}

/**
 * @summary Retrieves the address pools of a Global Traffic Manager (GTM) instance.
 *
 * @param request DescribeDnsGtmInstanceAddressPoolsRequest
 * @return DescribeDnsGtmInstanceAddressPoolsResponse
 */
DescribeDnsGtmInstanceAddressPoolsResponse Client::describeDnsGtmInstanceAddressPools(const DescribeDnsGtmInstanceAddressPoolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDnsGtmInstanceAddressPoolsWithOptions(request, runtime);
}

/**
 * @summary Describes the status of an instance based on its ID.
 *
 * @param request DescribeDnsGtmInstanceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnsGtmInstanceStatusResponse
 */
DescribeDnsGtmInstanceStatusResponse Client::describeDnsGtmInstanceStatusWithOptions(const DescribeDnsGtmInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDnsGtmInstanceStatus"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDnsGtmInstanceStatusResponse>();
}

/**
 * @summary Describes the status of an instance based on its ID.
 *
 * @param request DescribeDnsGtmInstanceStatusRequest
 * @return DescribeDnsGtmInstanceStatusResponse
 */
DescribeDnsGtmInstanceStatusResponse Client::describeDnsGtmInstanceStatus(const DescribeDnsGtmInstanceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDnsGtmInstanceStatusWithOptions(request, runtime);
}

/**
 * @summary Retrieves the system-assigned CNAME based on the specified instance ID.
 *
 * @param request DescribeDnsGtmInstanceSystemCnameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnsGtmInstanceSystemCnameResponse
 */
DescribeDnsGtmInstanceSystemCnameResponse Client::describeDnsGtmInstanceSystemCnameWithOptions(const DescribeDnsGtmInstanceSystemCnameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDnsGtmInstanceSystemCname"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDnsGtmInstanceSystemCnameResponse>();
}

/**
 * @summary Retrieves the system-assigned CNAME based on the specified instance ID.
 *
 * @param request DescribeDnsGtmInstanceSystemCnameRequest
 * @return DescribeDnsGtmInstanceSystemCnameResponse
 */
DescribeDnsGtmInstanceSystemCnameResponse Client::describeDnsGtmInstanceSystemCname(const DescribeDnsGtmInstanceSystemCnameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDnsGtmInstanceSystemCnameWithOptions(request, runtime);
}

/**
 * @summary Queries a list of instances.
 *
 * @param request DescribeDnsGtmInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnsGtmInstancesResponse
 */
DescribeDnsGtmInstancesResponse Client::describeDnsGtmInstancesWithOptions(const DescribeDnsGtmInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
    {"action" , "DescribeDnsGtmInstances"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDnsGtmInstancesResponse>();
}

/**
 * @summary Queries a list of instances.
 *
 * @param request DescribeDnsGtmInstancesRequest
 * @return DescribeDnsGtmInstancesResponse
 */
DescribeDnsGtmInstancesResponse Client::describeDnsGtmInstances(const DescribeDnsGtmInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDnsGtmInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the operation logs for an instance.
 *
 * @param request DescribeDnsGtmLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnsGtmLogsResponse
 */
DescribeDnsGtmLogsResponse Client::describeDnsGtmLogsWithOptions(const DescribeDnsGtmLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDnsGtmLogs"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDnsGtmLogsResponse>();
}

/**
 * @summary Queries the operation logs for an instance.
 *
 * @param request DescribeDnsGtmLogsRequest
 * @return DescribeDnsGtmLogsResponse
 */
DescribeDnsGtmLogsResponse Client::describeDnsGtmLogs(const DescribeDnsGtmLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDnsGtmLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the available configurations for DNS health checks.
 *
 * @param request DescribeDnsGtmMonitorAvailableConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnsGtmMonitorAvailableConfigResponse
 */
DescribeDnsGtmMonitorAvailableConfigResponse Client::describeDnsGtmMonitorAvailableConfigWithOptions(const DescribeDnsGtmMonitorAvailableConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDnsGtmMonitorAvailableConfig"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDnsGtmMonitorAvailableConfigResponse>();
}

/**
 * @summary Queries the available configurations for DNS health checks.
 *
 * @param request DescribeDnsGtmMonitorAvailableConfigRequest
 * @return DescribeDnsGtmMonitorAvailableConfigResponse
 */
DescribeDnsGtmMonitorAvailableConfigResponse Client::describeDnsGtmMonitorAvailableConfig(const DescribeDnsGtmMonitorAvailableConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDnsGtmMonitorAvailableConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the health check configuration for an address pool.
 *
 * @param request DescribeDnsGtmMonitorConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnsGtmMonitorConfigResponse
 */
DescribeDnsGtmMonitorConfigResponse Client::describeDnsGtmMonitorConfigWithOptions(const DescribeDnsGtmMonitorConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMonitorConfigId()) {
    query["MonitorConfigId"] = request.getMonitorConfigId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDnsGtmMonitorConfig"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDnsGtmMonitorConfigResponse>();
}

/**
 * @summary Queries the health check configuration for an address pool.
 *
 * @param request DescribeDnsGtmMonitorConfigRequest
 * @return DescribeDnsGtmMonitorConfigResponse
 */
DescribeDnsGtmMonitorConfigResponse Client::describeDnsGtmMonitorConfig(const DescribeDnsGtmMonitorConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDnsGtmMonitorConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a paid Alibaba Cloud DNS instance by its instance ID.
 *
 * @param request DescribeDnsProductInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnsProductInstanceResponse
 */
DescribeDnsProductInstanceResponse Client::describeDnsProductInstanceWithOptions(const DescribeDnsProductInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDnsProductInstance"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDnsProductInstanceResponse>();
}

/**
 * @summary Retrieves the details of a paid Alibaba Cloud DNS instance by its instance ID.
 *
 * @param request DescribeDnsProductInstanceRequest
 * @return DescribeDnsProductInstanceResponse
 */
DescribeDnsProductInstanceResponse Client::describeDnsProductInstance(const DescribeDnsProductInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDnsProductInstanceWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of paid DNS product instances that match the specified parameters.
 *
 * @description > **If the response does not contain a domain name, the Alibaba Cloud DNS instance is not associated with any domain names.**
 *
 * @param request DescribeDnsProductInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDnsProductInstancesResponse
 */
DescribeDnsProductInstancesResponse Client::describeDnsProductInstancesWithOptions(const DescribeDnsProductInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasDomainType()) {
    query["DomainType"] = request.getDomainType();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasVersionCode()) {
    query["VersionCode"] = request.getVersionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDnsProductInstances"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDnsProductInstancesResponse>();
}

/**
 * @summary Retrieves a list of paid DNS product instances that match the specified parameters.
 *
 * @description > **If the response does not contain a domain name, the Alibaba Cloud DNS instance is not associated with any domain names.**
 *
 * @param request DescribeDnsProductInstancesRequest
 * @return DescribeDnsProductInstancesResponse
 */
DescribeDnsProductInstancesResponse Client::describeDnsProductInstances(const DescribeDnsProductInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDnsProductInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries an overview of request statistics for a DNS over HTTPS (DoH) account.
 *
 * @param request DescribeDohAccountStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDohAccountStatisticsResponse
 */
DescribeDohAccountStatisticsResponse Client::describeDohAccountStatisticsWithOptions(const DescribeDohAccountStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDohAccountStatistics"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDohAccountStatisticsResponse>();
}

/**
 * @summary Queries an overview of request statistics for a DNS over HTTPS (DoH) account.
 *
 * @param request DescribeDohAccountStatisticsRequest
 * @return DescribeDohAccountStatisticsResponse
 */
DescribeDohAccountStatisticsResponse Client::describeDohAccountStatistics(const DescribeDohAccountStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDohAccountStatisticsWithOptions(request, runtime);
}

/**
 * @summary Retrieves an overview of statistics for DNS over HTTPS (DoH) requests for a domain name.
 *
 * @param request DescribeDohDomainStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDohDomainStatisticsResponse
 */
DescribeDohDomainStatisticsResponse Client::describeDohDomainStatisticsWithOptions(const DescribeDohDomainStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDohDomainStatistics"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDohDomainStatisticsResponse>();
}

/**
 * @summary Retrieves an overview of statistics for DNS over HTTPS (DoH) requests for a domain name.
 *
 * @param request DescribeDohDomainStatisticsRequest
 * @return DescribeDohDomainStatisticsResponse
 */
DescribeDohDomainStatisticsResponse Client::describeDohDomainStatistics(const DescribeDohDomainStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDohDomainStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries request statistics for DNS over HTTPS (DoH) domain names.
 *
 * @param request DescribeDohDomainStatisticsSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDohDomainStatisticsSummaryResponse
 */
DescribeDohDomainStatisticsSummaryResponse Client::describeDohDomainStatisticsSummaryWithOptions(const DescribeDohDomainStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDohDomainStatisticsSummary"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDohDomainStatisticsSummaryResponse>();
}

/**
 * @summary Queries request statistics for DNS over HTTPS (DoH) domain names.
 *
 * @param request DescribeDohDomainStatisticsSummaryRequest
 * @return DescribeDohDomainStatisticsSummaryResponse
 */
DescribeDohDomainStatisticsSummaryResponse Client::describeDohDomainStatisticsSummary(const DescribeDohDomainStatisticsSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDohDomainStatisticsSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries for statistics on DNS over HTTPS (DoH) requests for a subdomain.
 *
 * @param request DescribeDohSubDomainStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDohSubDomainStatisticsResponse
 */
DescribeDohSubDomainStatisticsResponse Client::describeDohSubDomainStatisticsWithOptions(const DescribeDohSubDomainStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasSubDomain()) {
    query["SubDomain"] = request.getSubDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDohSubDomainStatistics"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDohSubDomainStatisticsResponse>();
}

/**
 * @summary Queries for statistics on DNS over HTTPS (DoH) requests for a subdomain.
 *
 * @param request DescribeDohSubDomainStatisticsRequest
 * @return DescribeDohSubDomainStatisticsResponse
 */
DescribeDohSubDomainStatisticsResponse Client::describeDohSubDomainStatistics(const DescribeDohSubDomainStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDohSubDomainStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries a summary of request statistics for subdomains using DNS over HTTPS (DoH).
 *
 * @param request DescribeDohSubDomainStatisticsSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDohSubDomainStatisticsSummaryResponse
 */
DescribeDohSubDomainStatisticsSummaryResponse Client::describeDohSubDomainStatisticsSummaryWithOptions(const DescribeDohSubDomainStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasSubDomain()) {
    query["SubDomain"] = request.getSubDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDohSubDomainStatisticsSummary"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDohSubDomainStatisticsSummaryResponse>();
}

/**
 * @summary Queries a summary of request statistics for subdomains using DNS over HTTPS (DoH).
 *
 * @param request DescribeDohSubDomainStatisticsSummaryRequest
 * @return DescribeDohSubDomainStatisticsSummaryResponse
 */
DescribeDohSubDomainStatisticsSummaryResponse Client::describeDohSubDomainStatisticsSummary(const DescribeDohSubDomainStatisticsSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDohSubDomainStatisticsSummaryWithOptions(request, runtime);
}

/**
 * @summary Retrieves the basic information of a DNS over HTTPS (DoH) user.
 *
 * @param request DescribeDohUserInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDohUserInfoResponse
 */
DescribeDohUserInfoResponse Client::describeDohUserInfoWithOptions(const DescribeDohUserInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDohUserInfo"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDohUserInfoResponse>();
}

/**
 * @summary Retrieves the basic information of a DNS over HTTPS (DoH) user.
 *
 * @param request DescribeDohUserInfoRequest
 * @return DescribeDohUserInfoResponse
 */
DescribeDohUserInfoResponse Client::describeDohUserInfo(const DescribeDohUserInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDohUserInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the Domain Name System Security Extensions (DNSSEC) information for a specified domain name.
 *
 * @param request DescribeDomainDnssecInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainDnssecInfoResponse
 */
DescribeDomainDnssecInfoResponse Client::describeDomainDnssecInfoWithOptions(const DescribeDomainDnssecInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainDnssecInfo"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainDnssecInfoResponse>();
}

/**
 * @summary Queries the Domain Name System Security Extensions (DNSSEC) information for a specified domain name.
 *
 * @param request DescribeDomainDnssecInfoRequest
 * @return DescribeDomainDnssecInfoResponse
 */
DescribeDomainDnssecInfoResponse Client::describeDomainDnssecInfo(const DescribeDomainDnssecInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainDnssecInfoWithOptions(request, runtime);
}

/**
 * @summary Queries domain name groups.
 *
 * @param request DescribeDomainGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainGroupsResponse
 */
DescribeDomainGroupsResponse Client::describeDomainGroupsWithOptions(const DescribeDomainGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.getKeyWord();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
    {"action" , "DescribeDomainGroups"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainGroupsResponse>();
}

/**
 * @summary Queries domain name groups.
 *
 * @param request DescribeDomainGroupsRequest
 * @return DescribeDomainGroupsResponse
 */
DescribeDomainGroupsResponse Client::describeDomainGroups(const DescribeDomainGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries information about a specified domain name.
 *
 * @description In this example, the domain name is bound to an instance of Alibaba Cloud DNS Ultimate Edition. For more information about line enumeration, see the RecordLines response parameter.
 *
 * @param request DescribeDomainInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainInfoResponse
 */
DescribeDomainInfoResponse Client::describeDomainInfoWithOptions(const DescribeDomainInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNeedDetailAttributes()) {
    query["NeedDetailAttributes"] = request.getNeedDetailAttributes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainInfo"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainInfoResponse>();
}

/**
 * @summary Queries information about a specified domain name.
 *
 * @description In this example, the domain name is bound to an instance of Alibaba Cloud DNS Ultimate Edition. For more information about line enumeration, see the RecordLines response parameter.
 *
 * @param request DescribeDomainInfoRequest
 * @return DescribeDomainInfoResponse
 */
DescribeDomainInfoResponse Client::describeDomainInfo(const DescribeDomainInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the operation logs for a domain name based on the specified parameters.
 *
 * @param request DescribeDomainLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainLogsResponse
 */
DescribeDomainLogsResponse Client::describeDomainLogsWithOptions(const DescribeDomainLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.getKeyWord();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasEndDate()) {
    query["endDate"] = request.getEndDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainLogs"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainLogsResponse>();
}

/**
 * @summary Queries the operation logs for a domain name based on the specified parameters.
 *
 * @param request DescribeDomainLogsRequest
 * @return DescribeDomainLogsResponse
 */
DescribeDomainLogsResponse Client::describeDomainLogs(const DescribeDomainLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the current list of name servers for a domain name and determines whether the servers are managed by Alibaba Cloud DNS.
 *
 * @description > This operation directly queries the authoritative server of the domain name registry to retrieve the DNS server names for the domain name. An error may be returned if the domain name is inactive. For example, if the domain name has a serverHold or clientHold status, or has not passed identity verification.
 *
 * @param request DescribeDomainNsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainNsResponse
 */
DescribeDomainNsResponse Client::describeDomainNsWithOptions(const DescribeDomainNsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainNs"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainNsResponse>();
}

/**
 * @summary Queries the current list of name servers for a domain name and determines whether the servers are managed by Alibaba Cloud DNS.
 *
 * @description > This operation directly queries the authoritative server of the domain name registry to retrieve the DNS server names for the domain name. An error may be returned if the domain name is inactive. For example, if the domain name has a serverHold or clientHold status, or has not passed identity verification.
 *
 * @param request DescribeDomainNsRequest
 * @return DescribeDomainNsResponse
 */
DescribeDomainNsResponse Client::describeDomainNs(const DescribeDomainNsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainNsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a DNS record by its ID.
 *
 * @param request DescribeDomainRecordInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainRecordInfoResponse
 */
DescribeDomainRecordInfoResponse Client::describeDomainRecordInfoWithOptions(const DescribeDomainRecordInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainRecordInfo"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainRecordInfoResponse>();
}

/**
 * @summary Retrieves the details of a DNS record by its ID.
 *
 * @param request DescribeDomainRecordInfoRequest
 * @return DescribeDomainRecordInfoResponse
 */
DescribeDomainRecordInfoResponse Client::describeDomainRecordInfo(const DescribeDomainRecordInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainRecordInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the DNS records for a specified root domain based on the input parameters.
 *
 * @description - You can specify the domain name (DomainName), page number (PageNumber), and page size (PageSize) to retrieve a list of DNS records.
 * - You can specify a keyword for the host record (RRKeyWord), record type (TypeKeyWord), or record value (ValueKeyWord) to query DNS records that contain the keyword.
 * - By default, DNS records are sorted in descending order by the time they were added.
 * - You can specify a domain group ID (GroupId) to query the DNS records in a specific group.
 *
 * @param request DescribeDomainRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainRecordsResponse
 */
DescribeDomainRecordsResponse Client::describeDomainRecordsWithOptions(const DescribeDomainRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.getKeyWord();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLine()) {
    query["Line"] = request.getLine();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRRKeyWord()) {
    query["RRKeyWord"] = request.getRRKeyWord();
  }

  if (!!request.hasSearchMode()) {
    query["SearchMode"] = request.getSearchMode();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasTypeKeyWord()) {
    query["TypeKeyWord"] = request.getTypeKeyWord();
  }

  if (!!request.hasValueKeyWord()) {
    query["ValueKeyWord"] = request.getValueKeyWord();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainRecords"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainRecordsResponse>();
}

/**
 * @summary Retrieves the DNS records for a specified root domain based on the input parameters.
 *
 * @description - You can specify the domain name (DomainName), page number (PageNumber), and page size (PageSize) to retrieve a list of DNS records.
 * - You can specify a keyword for the host record (RRKeyWord), record type (TypeKeyWord), or record value (ValueKeyWord) to query DNS records that contain the keyword.
 * - By default, DNS records are sorted in descending order by the time they were added.
 * - You can specify a domain group ID (GroupId) to query the DNS records in a specific group.
 *
 * @param request DescribeDomainRecordsRequest
 * @return DescribeDomainRecordsResponse
 */
DescribeDomainRecordsResponse Client::describeDomainRecords(const DescribeDomainRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the request volumes for all paid domain names in your account.
 *
 * @param request DescribeDomainResolveStatisticsSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainResolveStatisticsSummaryResponse
 */
DescribeDomainResolveStatisticsSummaryResponse Client::describeDomainResolveStatisticsSummaryWithOptions(const DescribeDomainResolveStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchMode()) {
    query["SearchMode"] = request.getSearchMode();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainResolveStatisticsSummary"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainResolveStatisticsSummaryResponse>();
}

/**
 * @summary Queries the request volumes for all paid domain names in your account.
 *
 * @param request DescribeDomainResolveStatisticsSummaryRequest
 * @return DescribeDomainResolveStatisticsSummaryResponse
 */
DescribeDomainResolveStatisticsSummaryResponse Client::describeDomainResolveStatisticsSummary(const DescribeDomainResolveStatisticsSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainResolveStatisticsSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries the number of real-time requests for a specified primary domain name.
 *
 * @description Real-time data is collected hourly.
 *
 * @param request DescribeDomainStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainStatisticsResponse
 */
DescribeDomainStatisticsResponse Client::describeDomainStatisticsWithOptions(const DescribeDomainStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasDomainType()) {
    query["DomainType"] = request.getDomainType();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainStatistics"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainStatisticsResponse>();
}

/**
 * @summary Queries the number of real-time requests for a specified primary domain name.
 *
 * @description Real-time data is collected hourly.
 *
 * @param request DescribeDomainStatisticsRequest
 * @return DescribeDomainStatisticsResponse
 */
DescribeDomainStatisticsResponse Client::describeDomainStatistics(const DescribeDomainStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries the number of requests for all paid domain names in your account.
 *
 * @param request DescribeDomainStatisticsSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainStatisticsSummaryResponse
 */
DescribeDomainStatisticsSummaryResponse Client::describeDomainStatisticsSummaryWithOptions(const DescribeDomainStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchMode()) {
    query["SearchMode"] = request.getSearchMode();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomainStatisticsSummary"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainStatisticsSummaryResponse>();
}

/**
 * @summary Queries the number of requests for all paid domain names in your account.
 *
 * @param request DescribeDomainStatisticsSummaryRequest
 * @return DescribeDomainStatisticsSummaryResponse
 */
DescribeDomainStatisticsSummaryResponse Client::describeDomainStatisticsSummary(const DescribeDomainStatisticsSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainStatisticsSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries a list of domain names based on specified parameters.
 *
 * @description 1. You can specify a page number (PageNumber) and page size (PageSize) to retrieve a paginated list of domain names.
 * 2. You can specify a keyword (KeyWord) to query for domain names that contain the specified keyword.
 * 3. By default, domain names are sorted in descending order of their creation time.
 * 4. You can specify a domain name group ID (GroupId) to query for domain names in a specific group. This lets you retrieve all domain names or only the domain names that are not assigned to a group.
 *
 * @param request DescribeDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDomainsResponse
 */
DescribeDomainsResponse Client::describeDomainsWithOptions(const DescribeDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.getKeyWord();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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

  if (!!request.hasSearchMode()) {
    query["SearchMode"] = request.getSearchMode();
  }

  if (!!request.hasStarmark()) {
    query["Starmark"] = request.getStarmark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDomains"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDomainsResponse>();
}

/**
 * @summary Queries a list of domain names based on specified parameters.
 *
 * @description 1. You can specify a page number (PageNumber) and page size (PageSize) to retrieve a paginated list of domain names.
 * 2. You can specify a keyword (KeyWord) to query for domain names that contain the specified keyword.
 * 3. By default, domain names are sorted in descending order of their creation time.
 * 4. You can specify a domain name group ID (GroupId) to query for domain names in a specific group. This lets you retrieve all domain names or only the domain names that are not assigned to a group.
 *
 * @param request DescribeDomainsRequest
 * @return DescribeDomainsResponse
 */
DescribeDomainsResponse Client::describeDomains(const DescribeDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries the access policies for an instance.
 *
 * @param request DescribeGtmAccessStrategiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGtmAccessStrategiesResponse
 */
DescribeGtmAccessStrategiesResponse Client::describeGtmAccessStrategiesWithOptions(const DescribeGtmAccessStrategiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
    {"action" , "DescribeGtmAccessStrategies"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGtmAccessStrategiesResponse>();
}

/**
 * @summary Queries the access policies for an instance.
 *
 * @param request DescribeGtmAccessStrategiesRequest
 * @return DescribeGtmAccessStrategiesResponse
 */
DescribeGtmAccessStrategiesResponse Client::describeGtmAccessStrategies(const DescribeGtmAccessStrategiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGtmAccessStrategiesWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an access policy based on the policy ID.
 *
 * @param request DescribeGtmAccessStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGtmAccessStrategyResponse
 */
DescribeGtmAccessStrategyResponse Client::describeGtmAccessStrategyWithOptions(const DescribeGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStrategyId()) {
    query["StrategyId"] = request.getStrategyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGtmAccessStrategy"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGtmAccessStrategyResponse>();
}

/**
 * @summary Queries the details of an access policy based on the policy ID.
 *
 * @param request DescribeGtmAccessStrategyRequest
 * @return DescribeGtmAccessStrategyResponse
 */
DescribeGtmAccessStrategyResponse Client::describeGtmAccessStrategy(const DescribeGtmAccessStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGtmAccessStrategyWithOptions(request, runtime);
}

/**
 * @summary Queries the available configurations for an access policy.
 *
 * @param request DescribeGtmAccessStrategyAvailableConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGtmAccessStrategyAvailableConfigResponse
 */
DescribeGtmAccessStrategyAvailableConfigResponse Client::describeGtmAccessStrategyAvailableConfigWithOptions(const DescribeGtmAccessStrategyAvailableConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGtmAccessStrategyAvailableConfig"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGtmAccessStrategyAvailableConfigResponse>();
}

/**
 * @summary Queries the available configurations for an access policy.
 *
 * @param request DescribeGtmAccessStrategyAvailableConfigRequest
 * @return DescribeGtmAccessStrategyAvailableConfigResponse
 */
DescribeGtmAccessStrategyAvailableConfigResponse Client::describeGtmAccessStrategyAvailableConfig(const DescribeGtmAccessStrategyAvailableConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGtmAccessStrategyAvailableConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the list of available alert contact groups for a Global Traffic Manager (GTM) instance.
 *
 * @param request DescribeGtmAvailableAlertGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGtmAvailableAlertGroupResponse
 */
DescribeGtmAvailableAlertGroupResponse Client::describeGtmAvailableAlertGroupWithOptions(const DescribeGtmAvailableAlertGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGtmAvailableAlertGroup"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGtmAvailableAlertGroupResponse>();
}

/**
 * @summary Queries the list of available alert contact groups for a Global Traffic Manager (GTM) instance.
 *
 * @param request DescribeGtmAvailableAlertGroupRequest
 * @return DescribeGtmAvailableAlertGroupResponse
 */
DescribeGtmAvailableAlertGroupResponse Client::describeGtmAvailableAlertGroup(const DescribeGtmAvailableAlertGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGtmAvailableAlertGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a Global Traffic Manager (GTM) instance.
 *
 * @param request DescribeGtmInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGtmInstanceResponse
 */
DescribeGtmInstanceResponse Client::describeGtmInstanceWithOptions(const DescribeGtmInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNeedDetailAttributes()) {
    query["NeedDetailAttributes"] = request.getNeedDetailAttributes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGtmInstance"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGtmInstanceResponse>();
}

/**
 * @summary Queries the details of a Global Traffic Manager (GTM) instance.
 *
 * @param request DescribeGtmInstanceRequest
 * @return DescribeGtmInstanceResponse
 */
DescribeGtmInstanceResponse Client::describeGtmInstance(const DescribeGtmInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGtmInstanceWithOptions(request, runtime);
}

/**
 * @summary Describes the details of an address pool.
 *
 * @param request DescribeGtmInstanceAddressPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGtmInstanceAddressPoolResponse
 */
DescribeGtmInstanceAddressPoolResponse Client::describeGtmInstanceAddressPoolWithOptions(const DescribeGtmInstanceAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddrPoolId()) {
    query["AddrPoolId"] = request.getAddrPoolId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGtmInstanceAddressPool"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGtmInstanceAddressPoolResponse>();
}

/**
 * @summary Describes the details of an address pool.
 *
 * @param request DescribeGtmInstanceAddressPoolRequest
 * @return DescribeGtmInstanceAddressPoolResponse
 */
DescribeGtmInstanceAddressPoolResponse Client::describeGtmInstanceAddressPool(const DescribeGtmInstanceAddressPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGtmInstanceAddressPoolWithOptions(request, runtime);
}

/**
 * @summary Describes the address pools of a Global Traffic Manager (GTM) instance.
 *
 * @param request DescribeGtmInstanceAddressPoolsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGtmInstanceAddressPoolsResponse
 */
DescribeGtmInstanceAddressPoolsResponse Client::describeGtmInstanceAddressPoolsWithOptions(const DescribeGtmInstanceAddressPoolsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
    {"action" , "DescribeGtmInstanceAddressPools"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGtmInstanceAddressPoolsResponse>();
}

/**
 * @summary Describes the address pools of a Global Traffic Manager (GTM) instance.
 *
 * @param request DescribeGtmInstanceAddressPoolsRequest
 * @return DescribeGtmInstanceAddressPoolsResponse
 */
DescribeGtmInstanceAddressPoolsResponse Client::describeGtmInstanceAddressPools(const DescribeGtmInstanceAddressPoolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGtmInstanceAddressPoolsWithOptions(request, runtime);
}

/**
 * @summary Queries the current status of an instance.
 *
 * @param request DescribeGtmInstanceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGtmInstanceStatusResponse
 */
DescribeGtmInstanceStatusResponse Client::describeGtmInstanceStatusWithOptions(const DescribeGtmInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGtmInstanceStatus"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGtmInstanceStatusResponse>();
}

/**
 * @summary Queries the current status of an instance.
 *
 * @param request DescribeGtmInstanceStatusRequest
 * @return DescribeGtmInstanceStatusResponse
 */
DescribeGtmInstanceStatusResponse Client::describeGtmInstanceStatus(const DescribeGtmInstanceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGtmInstanceStatusWithOptions(request, runtime);
}

/**
 * @summary Retrieves the system-assigned CNAME domain name.
 *
 * @param request DescribeGtmInstanceSystemCnameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGtmInstanceSystemCnameResponse
 */
DescribeGtmInstanceSystemCnameResponse Client::describeGtmInstanceSystemCnameWithOptions(const DescribeGtmInstanceSystemCnameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGtmInstanceSystemCname"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGtmInstanceSystemCnameResponse>();
}

/**
 * @summary Retrieves the system-assigned CNAME domain name.
 *
 * @param request DescribeGtmInstanceSystemCnameRequest
 * @return DescribeGtmInstanceSystemCnameResponse
 */
DescribeGtmInstanceSystemCnameResponse Client::describeGtmInstanceSystemCname(const DescribeGtmInstanceSystemCnameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGtmInstanceSystemCnameWithOptions(request, runtime);
}

/**
 * @summary Queries Global Traffic Manager (GTM) instances.
 *
 * @param request DescribeGtmInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGtmInstancesResponse
 */
DescribeGtmInstancesResponse Client::describeGtmInstancesWithOptions(const DescribeGtmInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNeedDetailAttributes()) {
    query["NeedDetailAttributes"] = request.getNeedDetailAttributes();
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
    {"action" , "DescribeGtmInstances"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGtmInstancesResponse>();
}

/**
 * @summary Queries Global Traffic Manager (GTM) instances.
 *
 * @param request DescribeGtmInstancesRequest
 * @return DescribeGtmInstancesResponse
 */
DescribeGtmInstancesResponse Client::describeGtmInstances(const DescribeGtmInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGtmInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of logs.
 *
 * @param request DescribeGtmLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGtmLogsResponse
 */
DescribeGtmLogsResponse Client::describeGtmLogsWithOptions(const DescribeGtmLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGtmLogs"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGtmLogsResponse>();
}

/**
 * @summary Queries a list of logs.
 *
 * @param request DescribeGtmLogsRequest
 * @return DescribeGtmLogsResponse
 */
DescribeGtmLogsResponse Client::describeGtmLogs(const DescribeGtmLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGtmLogsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the available configurations for health checks.
 *
 * @param request DescribeGtmMonitorAvailableConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGtmMonitorAvailableConfigResponse
 */
DescribeGtmMonitorAvailableConfigResponse Client::describeGtmMonitorAvailableConfigWithOptions(const DescribeGtmMonitorAvailableConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGtmMonitorAvailableConfig"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGtmMonitorAvailableConfigResponse>();
}

/**
 * @summary Retrieves the available configurations for health checks.
 *
 * @param request DescribeGtmMonitorAvailableConfigRequest
 * @return DescribeGtmMonitorAvailableConfigResponse
 */
DescribeGtmMonitorAvailableConfigResponse Client::describeGtmMonitorAvailableConfig(const DescribeGtmMonitorAvailableConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGtmMonitorAvailableConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieves the health check configuration for an address pool.
 *
 * @param request DescribeGtmMonitorConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGtmMonitorConfigResponse
 */
DescribeGtmMonitorConfigResponse Client::describeGtmMonitorConfigWithOptions(const DescribeGtmMonitorConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMonitorConfigId()) {
    query["MonitorConfigId"] = request.getMonitorConfigId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGtmMonitorConfig"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGtmMonitorConfigResponse>();
}

/**
 * @summary Retrieves the health check configuration for an address pool.
 *
 * @param request DescribeGtmMonitorConfigRequest
 * @return DescribeGtmMonitorConfigResponse
 */
DescribeGtmMonitorConfigResponse Client::describeGtmMonitorConfig(const DescribeGtmMonitorConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGtmMonitorConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a disaster recovery plan.
 *
 * @param request DescribeGtmRecoveryPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGtmRecoveryPlanResponse
 */
DescribeGtmRecoveryPlanResponse Client::describeGtmRecoveryPlanWithOptions(const DescribeGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRecoveryPlanId()) {
    query["RecoveryPlanId"] = request.getRecoveryPlanId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGtmRecoveryPlan"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGtmRecoveryPlanResponse>();
}

/**
 * @summary Retrieves the details of a disaster recovery plan.
 *
 * @param request DescribeGtmRecoveryPlanRequest
 * @return DescribeGtmRecoveryPlanResponse
 */
DescribeGtmRecoveryPlanResponse Client::describeGtmRecoveryPlan(const DescribeGtmRecoveryPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGtmRecoveryPlanWithOptions(request, runtime);
}

/**
 * @summary Describes the available configurations for a disaster recovery plan.
 *
 * @param request DescribeGtmRecoveryPlanAvailableConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGtmRecoveryPlanAvailableConfigResponse
 */
DescribeGtmRecoveryPlanAvailableConfigResponse Client::describeGtmRecoveryPlanAvailableConfigWithOptions(const DescribeGtmRecoveryPlanAvailableConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeGtmRecoveryPlanAvailableConfig"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGtmRecoveryPlanAvailableConfigResponse>();
}

/**
 * @summary Describes the available configurations for a disaster recovery plan.
 *
 * @param request DescribeGtmRecoveryPlanAvailableConfigRequest
 * @return DescribeGtmRecoveryPlanAvailableConfigResponse
 */
DescribeGtmRecoveryPlanAvailableConfigResponse Client::describeGtmRecoveryPlanAvailableConfig(const DescribeGtmRecoveryPlanAvailableConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGtmRecoveryPlanAvailableConfigWithOptions(request, runtime);
}

/**
 * @summary Queries a list of disaster recovery plans.
 *
 * @param request DescribeGtmRecoveryPlansRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeGtmRecoveryPlansResponse
 */
DescribeGtmRecoveryPlansResponse Client::describeGtmRecoveryPlansWithOptions(const DescribeGtmRecoveryPlansRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
    {"action" , "DescribeGtmRecoveryPlans"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeGtmRecoveryPlansResponse>();
}

/**
 * @summary Queries a list of disaster recovery plans.
 *
 * @param request DescribeGtmRecoveryPlansRequest
 * @return DescribeGtmRecoveryPlansResponse
 */
DescribeGtmRecoveryPlansResponse Client::describeGtmRecoveryPlans(const DescribeGtmRecoveryPlansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeGtmRecoveryPlansWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of domain names that are attached to an instance.
 *
 * @param request DescribeInstanceDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceDomainsResponse
 */
DescribeInstanceDomainsResponse Client::describeInstanceDomainsWithOptions(const DescribeInstanceDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainKeywords()) {
    query["DomainKeywords"] = request.getDomainKeywords();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
    {"action" , "DescribeInstanceDomains"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceDomainsResponse>();
}

/**
 * @summary Retrieves a list of domain names that are attached to an instance.
 *
 * @param request DescribeInstanceDomainsRequest
 * @return DescribeInstanceDomainsResponse
 */
DescribeInstanceDomainsResponse Client::describeInstanceDomains(const DescribeInstanceDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceDomainsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a global overview of statistics for public authoritative DNS.
 *
 * @description Real-time data is aggregated hourly.
 *
 * @param request DescribeInterAuthStatisticsGlobalOverviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInterAuthStatisticsGlobalOverviewResponse
 */
DescribeInterAuthStatisticsGlobalOverviewResponse Client::describeInterAuthStatisticsGlobalOverviewWithOptions(const DescribeInterAuthStatisticsGlobalOverviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasOverviewPeriod()) {
    query["OverviewPeriod"] = request.getOverviewPeriod();
  }

  if (!!request.hasServerRegion()) {
    query["ServerRegion"] = request.getServerRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInterAuthStatisticsGlobalOverview"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInterAuthStatisticsGlobalOverviewResponse>();
}

/**
 * @summary Retrieves a global overview of statistics for public authoritative DNS.
 *
 * @description Real-time data is aggregated hourly.
 *
 * @param request DescribeInterAuthStatisticsGlobalOverviewRequest
 * @return DescribeInterAuthStatisticsGlobalOverviewResponse
 */
DescribeInterAuthStatisticsGlobalOverviewResponse Client::describeInterAuthStatisticsGlobalOverview(const DescribeInterAuthStatisticsGlobalOverviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInterAuthStatisticsGlobalOverviewWithOptions(request, runtime);
}

/**
 * @summary Historical statistics for public authoritative DNS resolution
 *
 * @description Real-time data statistics are aggregated hourly.
 *
 * @param request DescribeInterAuthStatisticsHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInterAuthStatisticsHistoryResponse
 */
DescribeInterAuthStatisticsHistoryResponse Client::describeInterAuthStatisticsHistoryWithOptions(const DescribeInterAuthStatisticsHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasRcode()) {
    query["Rcode"] = request.getRcode();
  }

  if (!!request.hasServerRegion()) {
    query["ServerRegion"] = request.getServerRegion();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
  }

  if (!!request.hasStatisticalType()) {
    query["StatisticalType"] = request.getStatisticalType();
  }

  if (!!request.hasZoneName()) {
    query["ZoneName"] = request.getZoneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInterAuthStatisticsHistory"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInterAuthStatisticsHistoryResponse>();
}

/**
 * @summary Historical statistics for public authoritative DNS resolution
 *
 * @description Real-time data statistics are aggregated hourly.
 *
 * @param request DescribeInterAuthStatisticsHistoryRequest
 * @return DescribeInterAuthStatisticsHistoryResponse
 */
DescribeInterAuthStatisticsHistoryResponse Client::describeInterAuthStatisticsHistory(const DescribeInterAuthStatisticsHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInterAuthStatisticsHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries the summary list of public authoritative parse statistics.
 *
 * @description Real-time data is aggregated by hour.
 *
 * @param request DescribeInterAuthStatisticsSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInterAuthStatisticsSummaryResponse
 */
DescribeInterAuthStatisticsSummaryResponse Client::describeInterAuthStatisticsSummaryWithOptions(const DescribeInterAuthStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasGrowType()) {
    query["GrowType"] = request.getGrowType();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasRcode()) {
    query["Rcode"] = request.getRcode();
  }

  if (!!request.hasServerRegion()) {
    query["ServerRegion"] = request.getServerRegion();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
  }

  if (!!request.hasStatisticalType()) {
    query["StatisticalType"] = request.getStatisticalType();
  }

  if (!!request.hasZoneName()) {
    query["ZoneName"] = request.getZoneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInterAuthStatisticsSummary"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInterAuthStatisticsSummaryResponse>();
}

/**
 * @summary Queries the summary list of public authoritative parse statistics.
 *
 * @description Real-time data is aggregated by hour.
 *
 * @param request DescribeInterAuthStatisticsSummaryRequest
 * @return DescribeInterAuthStatisticsSummaryResponse
 */
DescribeInterAuthStatisticsSummaryResponse Client::describeInterAuthStatisticsSummary(const DescribeInterAuthStatisticsSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInterAuthStatisticsSummaryWithOptions(request, runtime);
}

/**
 * @summary Retrieves a zone-level overview of statistics for public authoritative DNS.
 *
 * @param request DescribeInterAuthStatisticsZoneOverviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInterAuthStatisticsZoneOverviewResponse
 */
DescribeInterAuthStatisticsZoneOverviewResponse Client::describeInterAuthStatisticsZoneOverviewWithOptions(const DescribeInterAuthStatisticsZoneOverviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOverviewPeriod()) {
    query["OverviewPeriod"] = request.getOverviewPeriod();
  }

  if (!!request.hasServerRegion()) {
    query["ServerRegion"] = request.getServerRegion();
  }

  if (!!request.hasZoneName()) {
    query["ZoneName"] = request.getZoneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInterAuthStatisticsZoneOverview"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInterAuthStatisticsZoneOverviewResponse>();
}

/**
 * @summary Retrieves a zone-level overview of statistics for public authoritative DNS.
 *
 * @param request DescribeInterAuthStatisticsZoneOverviewRequest
 * @return DescribeInterAuthStatisticsZoneOverviewResponse
 */
DescribeInterAuthStatisticsZoneOverviewResponse Client::describeInterAuthStatisticsZoneOverview(const DescribeInterAuthStatisticsZoneOverviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInterAuthStatisticsZoneOverviewWithOptions(request, runtime);
}

/**
 * @summary Query parsing logs
 *
 * @param request DescribeInternetDnsLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInternetDnsLogsResponse
 */
DescribeInternetDnsLogsResponse Client::describeInternetDnsLogsWithOptions(const DescribeInternetDnsLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["AccountId"] = request.getAccountId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasModule()) {
    query["Module"] = request.getModule();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPreciseSort()) {
    query["PreciseSort"] = request.getPreciseSort();
  }

  if (!!request.hasQueryCondition()) {
    query["QueryCondition"] = request.getQueryCondition();
  }

  if (!!request.hasRecursionProtocolType()) {
    query["RecursionProtocolType"] = request.getRecursionProtocolType();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInternetDnsLogs"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInternetDnsLogsResponse>();
}

/**
 * @summary Query parsing logs
 *
 * @param request DescribeInternetDnsLogsRequest
 * @return DescribeInternetDnsLogsResponse
 */
DescribeInternetDnsLogsResponse Client::describeInternetDnsLogs(const DescribeInternetDnsLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInternetDnsLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of cache refresh instances.
 *
 * @param request DescribeIspFlushCacheInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIspFlushCacheInstancesResponse
 */
DescribeIspFlushCacheInstancesResponse Client::describeIspFlushCacheInstancesWithOptions(const DescribeIspFlushCacheInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.getIsp();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIspFlushCacheInstances"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIspFlushCacheInstancesResponse>();
}

/**
 * @summary Queries the list of cache refresh instances.
 *
 * @param request DescribeIspFlushCacheInstancesRequest
 * @return DescribeIspFlushCacheInstancesResponse
 */
DescribeIspFlushCacheInstancesResponse Client::describeIspFlushCacheInstances(const DescribeIspFlushCacheInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIspFlushCacheInstancesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the remaining number of cache refresh operations available.
 *
 * @param request DescribeIspFlushCacheRemainQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIspFlushCacheRemainQuotaResponse
 */
DescribeIspFlushCacheRemainQuotaResponse Client::describeIspFlushCacheRemainQuotaWithOptions(const DescribeIspFlushCacheRemainQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIspFlushCacheRemainQuota"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIspFlushCacheRemainQuotaResponse>();
}

/**
 * @summary Retrieves the remaining number of cache refresh operations available.
 *
 * @param request DescribeIspFlushCacheRemainQuotaRequest
 * @return DescribeIspFlushCacheRemainQuotaResponse
 */
DescribeIspFlushCacheRemainQuotaResponse Client::describeIspFlushCacheRemainQuota(const DescribeIspFlushCacheRemainQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIspFlushCacheRemainQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a cache flush task.
 *
 * @param request DescribeIspFlushCacheTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIspFlushCacheTaskResponse
 */
DescribeIspFlushCacheTaskResponse Client::describeIspFlushCacheTaskWithOptions(const DescribeIspFlushCacheTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeIspFlushCacheTask"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIspFlushCacheTaskResponse>();
}

/**
 * @summary Queries the details of a cache flush task.
 *
 * @param request DescribeIspFlushCacheTaskRequest
 * @return DescribeIspFlushCacheTaskResponse
 */
DescribeIspFlushCacheTaskResponse Client::describeIspFlushCacheTask(const DescribeIspFlushCacheTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIspFlushCacheTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the list of cache refresh tasks.
 *
 * @param request DescribeIspFlushCacheTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeIspFlushCacheTasksResponse
 */
DescribeIspFlushCacheTasksResponse Client::describeIspFlushCacheTasksWithOptions(const DescribeIspFlushCacheTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.getIsp();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
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
    {"action" , "DescribeIspFlushCacheTasks"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeIspFlushCacheTasksResponse>();
}

/**
 * @summary Queries the list of cache refresh tasks.
 *
 * @param request DescribeIspFlushCacheTasksRequest
 * @return DescribeIspFlushCacheTasksResponse
 */
DescribeIspFlushCacheTasksResponse Client::describeIspFlushCacheTasks(const DescribeIspFlushCacheTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeIspFlushCacheTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the overview of Public DNS user data.
 *
 * @param request DescribePdnsAccountSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePdnsAccountSummaryResponse
 */
DescribePdnsAccountSummaryResponse Client::describePdnsAccountSummaryWithOptions(const DescribePdnsAccountSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePdnsAccountSummary"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePdnsAccountSummaryResponse>();
}

/**
 * @summary Queries the overview of Public DNS user data.
 *
 * @param request DescribePdnsAccountSummaryRequest
 * @return DescribePdnsAccountSummaryResponse
 */
DescribePdnsAccountSummaryResponse Client::describePdnsAccountSummary(const DescribePdnsAccountSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePdnsAccountSummaryWithOptions(request, runtime);
}

/**
 * @summary Query the details of a public DNS AppKey
 *
 * @param request DescribePdnsAppKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePdnsAppKeyResponse
 */
DescribePdnsAppKeyResponse Client::describePdnsAppKeyWithOptions(const DescribePdnsAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKeyId()) {
    query["AppKeyId"] = request.getAppKeyId();
  }

  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePdnsAppKey"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePdnsAppKeyResponse>();
}

/**
 * @summary Query the details of a public DNS AppKey
 *
 * @param request DescribePdnsAppKeyRequest
 * @return DescribePdnsAppKeyResponse
 */
DescribePdnsAppKeyResponse Client::describePdnsAppKey(const DescribePdnsAppKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePdnsAppKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the list of AppKeys of Public DNS
 *
 * @param request DescribePdnsAppKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePdnsAppKeysResponse
 */
DescribePdnsAppKeysResponse Client::describePdnsAppKeysWithOptions(const DescribePdnsAppKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePdnsAppKeys"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePdnsAppKeysResponse>();
}

/**
 * @summary Queries the list of AppKeys of Public DNS
 *
 * @param request DescribePdnsAppKeysRequest
 * @return DescribePdnsAppKeysResponse
 */
DescribePdnsAppKeysResponse Client::describePdnsAppKeys(const DescribePdnsAppKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePdnsAppKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the operation log list of Public DNS.
 *
 * @param request DescribePdnsOperateLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePdnsOperateLogsResponse
 */
DescribePdnsOperateLogsResponse Client::describePdnsOperateLogsWithOptions(const DescribePdnsOperateLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionType()) {
    query["ActionType"] = request.getActionType();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePdnsOperateLogs"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePdnsOperateLogsResponse>();
}

/**
 * @summary Queries the operation log list of Public DNS.
 *
 * @param request DescribePdnsOperateLogsRequest
 * @return DescribePdnsOperateLogsResponse
 */
DescribePdnsOperateLogsResponse Client::describePdnsOperateLogs(const DescribePdnsOperateLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePdnsOperateLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the request statistics for Public DNS.
 *
 * @param request DescribePdnsRequestStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePdnsRequestStatisticResponse
 */
DescribePdnsRequestStatisticResponse Client::describePdnsRequestStatisticWithOptions(const DescribePdnsRequestStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasSubDomain()) {
    query["SubDomain"] = request.getSubDomain();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePdnsRequestStatistic"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePdnsRequestStatisticResponse>();
}

/**
 * @summary Queries the request statistics for Public DNS.
 *
 * @param request DescribePdnsRequestStatisticRequest
 * @return DescribePdnsRequestStatisticResponse
 */
DescribePdnsRequestStatisticResponse Client::describePdnsRequestStatistic(const DescribePdnsRequestStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePdnsRequestStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries the request statistics for a specified subdomain.
 *
 * @param request DescribePdnsRequestStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePdnsRequestStatisticsResponse
 */
DescribePdnsRequestStatisticsResponse Client::describePdnsRequestStatisticsWithOptions(const DescribePdnsRequestStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasSubDomain()) {
    query["SubDomain"] = request.getSubDomain();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePdnsRequestStatistics"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePdnsRequestStatisticsResponse>();
}

/**
 * @summary Queries the request statistics for a specified subdomain.
 *
 * @param request DescribePdnsRequestStatisticsRequest
 * @return DescribePdnsRequestStatisticsResponse
 */
DescribePdnsRequestStatisticsResponse Client::describePdnsRequestStatistics(const DescribePdnsRequestStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePdnsRequestStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of Public DNS threat logs.
 *
 * @param request DescribePdnsThreatLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePdnsThreatLogsResponse
 */
DescribePdnsThreatLogsResponse Client::describePdnsThreatLogsWithOptions(const DescribePdnsThreatLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasThreatLevel()) {
    query["ThreatLevel"] = request.getThreatLevel();
  }

  if (!!request.hasThreatSourceIp()) {
    query["ThreatSourceIp"] = request.getThreatSourceIp();
  }

  if (!!request.hasThreatType()) {
    query["ThreatType"] = request.getThreatType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePdnsThreatLogs"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePdnsThreatLogsResponse>();
}

/**
 * @summary Queries the list of Public DNS threat logs.
 *
 * @param request DescribePdnsThreatLogsRequest
 * @return DescribePdnsThreatLogsResponse
 */
DescribePdnsThreatLogsResponse Client::describePdnsThreatLogs(const DescribePdnsThreatLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePdnsThreatLogsWithOptions(request, runtime);
}

/**
 * @summary Retrieves Public DNS threat statistics.
 *
 * @param request DescribePdnsThreatStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePdnsThreatStatisticResponse
 */
DescribePdnsThreatStatisticResponse Client::describePdnsThreatStatisticWithOptions(const DescribePdnsThreatStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasThreatSourceIp()) {
    query["ThreatSourceIp"] = request.getThreatSourceIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePdnsThreatStatistic"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePdnsThreatStatisticResponse>();
}

/**
 * @summary Retrieves Public DNS threat statistics.
 *
 * @param request DescribePdnsThreatStatisticRequest
 * @return DescribePdnsThreatStatisticResponse
 */
DescribePdnsThreatStatisticResponse Client::describePdnsThreatStatistic(const DescribePdnsThreatStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePdnsThreatStatisticWithOptions(request, runtime);
}

/**
 * @summary Retrieves the public DNS threat statistics list.
 *
 * @param request DescribePdnsThreatStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePdnsThreatStatisticsResponse
 */
DescribePdnsThreatStatisticsResponse Client::describePdnsThreatStatisticsWithOptions(const DescribePdnsThreatStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasSubDomain()) {
    query["SubDomain"] = request.getSubDomain();
  }

  if (!!request.hasThreatLevel()) {
    query["ThreatLevel"] = request.getThreatLevel();
  }

  if (!!request.hasThreatSourceIp()) {
    query["ThreatSourceIp"] = request.getThreatSourceIp();
  }

  if (!!request.hasThreatType()) {
    query["ThreatType"] = request.getThreatType();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePdnsThreatStatistics"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePdnsThreatStatisticsResponse>();
}

/**
 * @summary Retrieves the public DNS threat statistics list.
 *
 * @param request DescribePdnsThreatStatisticsRequest
 * @return DescribePdnsThreatStatisticsResponse
 */
DescribePdnsThreatStatisticsResponse Client::describePdnsThreatStatistics(const DescribePdnsThreatStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePdnsThreatStatisticsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of Public DNS UDP IP address ranges.
 *
 * @param request DescribePdnsUdpIpSegmentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePdnsUdpIpSegmentsResponse
 */
DescribePdnsUdpIpSegmentsResponse Client::describePdnsUdpIpSegmentsWithOptions(const DescribePdnsUdpIpSegmentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
    {"action" , "DescribePdnsUdpIpSegments"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePdnsUdpIpSegmentsResponse>();
}

/**
 * @summary Retrieves the list of Public DNS UDP IP address ranges.
 *
 * @param request DescribePdnsUdpIpSegmentsRequest
 * @return DescribePdnsUdpIpSegmentsResponse
 */
DescribePdnsUdpIpSegmentsResponse Client::describePdnsUdpIpSegments(const DescribePdnsUdpIpSegmentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePdnsUdpIpSegmentsWithOptions(request, runtime);
}

/**
 * @summary Retrieves user information for Public DNS.
 *
 * @param request DescribePdnsUserInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePdnsUserInfoResponse
 */
DescribePdnsUserInfoResponse Client::describePdnsUserInfoWithOptions(const DescribePdnsUserInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePdnsUserInfo"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePdnsUserInfoResponse>();
}

/**
 * @summary Retrieves user information for Public DNS.
 *
 * @param request DescribePdnsUserInfoRequest
 * @return DescribePdnsUserInfoResponse
 */
DescribePdnsUserInfoResponse Client::describePdnsUserInfo(const DescribePdnsUserInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePdnsUserInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the operation logs for the DNS records of a domain name.
 *
 * @param request DescribeRecordLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecordLogsResponse
 */
DescribeRecordLogsResponse Client::describeRecordLogsWithOptions(const DescribeRecordLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.getKeyWord();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasEndDate()) {
    query["endDate"] = request.getEndDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecordLogs"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecordLogsResponse>();
}

/**
 * @summary Queries the operation logs for the DNS records of a domain name.
 *
 * @param request DescribeRecordLogsRequest
 * @return DescribeRecordLogsResponse
 */
DescribeRecordLogsResponse Client::describeRecordLogs(const DescribeRecordLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecordLogsWithOptions(request, runtime);
}

/**
 * @summary Queries statistics on the request volume for all subdomains of a specified domain name.
 *
 * @param request DescribeRecordResolveStatisticsSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecordResolveStatisticsSummaryResponse
 */
DescribeRecordResolveStatisticsSummaryResponse Client::describeRecordResolveStatisticsSummaryWithOptions(const DescribeRecordResolveStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasDomainType()) {
    query["DomainType"] = request.getDomainType();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchMode()) {
    query["SearchMode"] = request.getSearchMode();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecordResolveStatisticsSummary"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecordResolveStatisticsSummaryResponse>();
}

/**
 * @summary Queries statistics on the request volume for all subdomains of a specified domain name.
 *
 * @param request DescribeRecordResolveStatisticsSummaryRequest
 * @return DescribeRecordResolveStatisticsSummaryResponse
 */
DescribeRecordResolveStatisticsSummaryResponse Client::describeRecordResolveStatisticsSummary(const DescribeRecordResolveStatisticsSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecordResolveStatisticsSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries real-time data about DNS requests for a specified subdomain.
 *
 * @description Real-time data is collected hourly.
 *
 * @param request DescribeRecordStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecordStatisticsResponse
 */
DescribeRecordStatisticsResponse Client::describeRecordStatisticsWithOptions(const DescribeRecordStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasDomainType()) {
    query["DomainType"] = request.getDomainType();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRr()) {
    query["Rr"] = request.getRr();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecordStatistics"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecordStatisticsResponse>();
}

/**
 * @summary Queries real-time data about DNS requests for a specified subdomain.
 *
 * @description Real-time data is collected hourly.
 *
 * @param request DescribeRecordStatisticsRequest
 * @return DescribeRecordStatisticsResponse
 */
DescribeRecordStatisticsResponse Client::describeRecordStatistics(const DescribeRecordStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecordStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries statistics on the request volume for all subdomains of a specified domain name.
 *
 * @param request DescribeRecordStatisticsSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecordStatisticsSummaryResponse
 */
DescribeRecordStatisticsSummaryResponse Client::describeRecordStatisticsSummaryWithOptions(const DescribeRecordStatisticsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasDomainType()) {
    query["DomainType"] = request.getDomainType();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchMode()) {
    query["SearchMode"] = request.getSearchMode();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecordStatisticsSummary"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecordStatisticsSummaryResponse>();
}

/**
 * @summary Queries statistics on the request volume for all subdomains of a specified domain name.
 *
 * @param request DescribeRecordStatisticsSummaryRequest
 * @return DescribeRecordStatisticsSummaryResponse
 */
DescribeRecordStatisticsSummaryResponse Client::describeRecordStatisticsSummary(const DescribeRecordStatisticsSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecordStatisticsSummaryWithOptions(request, runtime);
}

/**
 * @summary Describes a built-in authoritative DNS record used for recursive resolution.
 *
 * @param request DescribeRecursionRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecursionRecordResponse
 */
DescribeRecursionRecordResponse Client::describeRecursionRecordWithOptions(const DescribeRecursionRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecursionRecord"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecursionRecordResponse>();
}

/**
 * @summary Describes a built-in authoritative DNS record used for recursive resolution.
 *
 * @param request DescribeRecursionRecordRequest
 * @return DescribeRecursionRecordResponse
 */
DescribeRecursionRecordResponse Client::describeRecursionRecord(const DescribeRecursionRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecursionRecordWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an authoritative zone for recursive resolution.
 *
 * @description Real-time data is measured hourly.
 *
 * @param request DescribeRecursionZoneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecursionZoneResponse
 */
DescribeRecursionZoneResponse Client::describeRecursionZoneWithOptions(const DescribeRecursionZoneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecursionZone"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecursionZoneResponse>();
}

/**
 * @summary Queries the details of an authoritative zone for recursive resolution.
 *
 * @description Real-time data is measured hourly.
 *
 * @param request DescribeRecursionZoneRequest
 * @return DescribeRecursionZoneResponse
 */
DescribeRecursionZoneResponse Client::describeRecursionZone(const DescribeRecursionZoneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecursionZoneWithOptions(request, runtime);
}

/**
 * @summary Retrieves all DNS records for a specific subdomain based on the specified parameters.
 *
 * @param request DescribeSubDomainRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSubDomainRecordsResponse
 */
DescribeSubDomainRecordsResponse Client::describeSubDomainRecordsWithOptions(const DescribeSubDomainRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLine()) {
    query["Line"] = request.getLine();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSubDomain()) {
    query["SubDomain"] = request.getSubDomain();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSubDomainRecords"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSubDomainRecordsResponse>();
}

/**
 * @summary Retrieves all DNS records for a specific subdomain based on the specified parameters.
 *
 * @param request DescribeSubDomainRecordsRequest
 * @return DescribeSubDomainRecordsResponse
 */
DescribeSubDomainRecordsResponse Client::describeSubDomainRecords(const DescribeSubDomainRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSubDomainRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries all lines supported by Cloud DNS.
 *
 * @param request DescribeSupportLinesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSupportLinesResponse
 */
DescribeSupportLinesResponse Client::describeSupportLinesWithOptions(const DescribeSupportLinesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSupportLines"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSupportLinesResponse>();
}

/**
 * @summary Queries all lines supported by Cloud DNS.
 *
 * @param request DescribeSupportLinesRequest
 * @return DescribeSupportLinesResponse
 */
DescribeSupportLinesResponse Client::describeSupportLines(const DescribeSupportLinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSupportLinesWithOptions(request, runtime);
}

/**
 * @summary Queries existing tags.
 *
 * @param request DescribeTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTagsResponse
 */
DescribeTagsResponse Client::describeTagsWithOptions(const DescribeTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTags"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTagsResponse>();
}

/**
 * @summary Queries existing tags.
 *
 * @param request DescribeTagsRequest
 * @return DescribeTagsResponse
 */
DescribeTagsResponse Client::describeTags(const DescribeTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTagsWithOptions(request, runtime);
}

/**
 * @summary Queries the domain names transferred between accounts based on the specified input parameters.
 *
 * @param request DescribeTransferDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTransferDomainsResponse
 */
DescribeTransferDomainsResponse Client::describeTransferDomainsWithOptions(const DescribeTransferDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasFromUserId()) {
    query["FromUserId"] = request.getFromUserId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTargetUserId()) {
    query["TargetUserId"] = request.getTargetUserId();
  }

  if (!!request.hasTransferType()) {
    query["TransferType"] = request.getTransferType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTransferDomains"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTransferDomainsResponse>();
}

/**
 * @summary Queries the domain names transferred between accounts based on the specified input parameters.
 *
 * @param request DescribeTransferDomainsRequest
 * @return DescribeTransferDomainsResponse
 */
DescribeTransferDomainsResponse Client::describeTransferDomains(const DescribeTransferDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTransferDomainsWithOptions(request, runtime);
}

/**
 * @summary Executes a disaster recovery plan.
 *
 * @param request ExecuteGtmRecoveryPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteGtmRecoveryPlanResponse
 */
ExecuteGtmRecoveryPlanResponse Client::executeGtmRecoveryPlanWithOptions(const ExecuteGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRecoveryPlanId()) {
    query["RecoveryPlanId"] = request.getRecoveryPlanId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExecuteGtmRecoveryPlan"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteGtmRecoveryPlanResponse>();
}

/**
 * @summary Executes a disaster recovery plan.
 *
 * @param request ExecuteGtmRecoveryPlanRequest
 * @return ExecuteGtmRecoveryPlanResponse
 */
ExecuteGtmRecoveryPlanResponse Client::executeGtmRecoveryPlan(const ExecuteGtmRecoveryPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeGtmRecoveryPlanWithOptions(request, runtime);
}

/**
 * @summary Retrieves the primary domain name from a specified domain name.
 *
 * @description For more information about primary and subdomain name levels, see
 * <props="china">[Domain name levels](https://help.aliyun.com/document_detail/39803.html?spm=a2c4g.2357293.0.0.211f41ffUR1cPb). For example, if you enter `www.abc.com`, the output is abc.com.
 * <props="intl">[Domain name levels](https://www.alibabacloud.com/help/zh/faq-detail/39803.htm). For example, if you enter `www.abc.com`, the output is abc.com.
 *
 * @param request GetMainDomainNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMainDomainNameResponse
 */
GetMainDomainNameResponse Client::getMainDomainNameWithOptions(const GetMainDomainNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInputString()) {
    query["InputString"] = request.getInputString();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMainDomainName"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMainDomainNameResponse>();
}

/**
 * @summary Retrieves the primary domain name from a specified domain name.
 *
 * @description For more information about primary and subdomain name levels, see
 * <props="china">[Domain name levels](https://help.aliyun.com/document_detail/39803.html?spm=a2c4g.2357293.0.0.211f41ffUR1cPb). For example, if you enter `www.abc.com`, the output is abc.com.
 * <props="intl">[Domain name levels](https://www.alibabacloud.com/help/zh/faq-detail/39803.htm). For example, if you enter `www.abc.com`, the output is abc.com.
 *
 * @param request GetMainDomainNameRequest
 * @return GetMainDomainNameResponse
 */
GetMainDomainNameResponse Client::getMainDomainName(const GetMainDomainNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMainDomainNameWithOptions(request, runtime);
}

/**
 * @summary Generates a TXT record for domain and subdomain verification. This operation supports batch retrieval.
 *
 * @param request GetTxtRecordForVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTxtRecordForVerifyResponse
 */
GetTxtRecordForVerifyResponse Client::getTxtRecordForVerifyWithOptions(const GetTxtRecordForVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTxtRecordForVerify"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTxtRecordForVerifyResponse>();
}

/**
 * @summary Generates a TXT record for domain and subdomain verification. This operation supports batch retrieval.
 *
 * @param request GetTxtRecordForVerifyRequest
 * @return GetTxtRecordForVerifyResponse
 */
GetTxtRecordForVerifyResponse Client::getTxtRecordForVerify(const GetTxtRecordForVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTxtRecordForVerifyWithOptions(request, runtime);
}

/**
 * @summary Queries the list of Agent registration information.
 *
 * @param request ListAtiAgentRegisterInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAtiAgentRegisterInfosResponse
 */
ListAtiAgentRegisterInfosResponse Client::listAtiAgentRegisterInfosWithOptions(const ListAtiAgentRegisterInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentDisplayName()) {
    query["AgentDisplayName"] = request.getAgentDisplayName();
  }

  if (!!request.hasAgentHost()) {
    query["AgentHost"] = request.getAgentHost();
  }

  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasAgentVersion()) {
    query["AgentVersion"] = request.getAgentVersion();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAtiAgentRegisterInfos"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAtiAgentRegisterInfosResponse>();
}

/**
 * @summary Queries the list of Agent registration information.
 *
 * @param request ListAtiAgentRegisterInfosRequest
 * @return ListAtiAgentRegisterInfosResponse
 */
ListAtiAgentRegisterInfosResponse Client::listAtiAgentRegisterInfos(const ListAtiAgentRegisterInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAtiAgentRegisterInfosWithOptions(request, runtime);
}

/**
 * @summary Queries the list of real-name registered contacts.
 *
 * @param request ListAtiChangeLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAtiChangeLogsResponse
 */
ListAtiChangeLogsResponse Client::listAtiChangeLogsWithOptions(const ListAtiChangeLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["AgentId"] = request.getAgentId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasOperationType()) {
    query["OperationType"] = request.getOperationType();
  }

  if (!!request.hasOperatorAccount()) {
    query["OperatorAccount"] = request.getOperatorAccount();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
  }

  if (!!request.hasTimeRange()) {
    query["TimeRange"] = request.getTimeRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAtiChangeLogs"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAtiChangeLogsResponse>();
}

/**
 * @summary Queries the list of real-name registered contacts.
 *
 * @param request ListAtiChangeLogsRequest
 * @return ListAtiChangeLogsResponse
 */
ListAtiChangeLogsResponse Client::listAtiChangeLogs(const ListAtiChangeLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAtiChangeLogsWithOptions(request, runtime);
}

/**
 * @summary 查询实名注册人列表
 *
 * @param request ListAtiRegistrantsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAtiRegistrantsResponse
 */
ListAtiRegistrantsResponse Client::listAtiRegistrantsWithOptions(const ListAtiRegistrantsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAtiRegistrants"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAtiRegistrantsResponse>();
}

/**
 * @summary 查询实名注册人列表
 *
 * @param request ListAtiRegistrantsRequest
 * @return ListAtiRegistrantsResponse
 */
ListAtiRegistrantsResponse Client::listAtiRegistrants(const ListAtiRegistrantsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAtiRegistrantsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of address pools in Global Traffic Manager (GTM) 3.0.
 *
 * @param request ListCloudGtmAddressPoolsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloudGtmAddressPoolsResponse
 */
ListCloudGtmAddressPoolsResponse Client::listCloudGtmAddressPoolsWithOptions(const ListCloudGtmAddressPoolsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddressPoolName()) {
    query["AddressPoolName"] = request.getAddressPoolName();
  }

  if (!!request.hasAddressPoolType()) {
    query["AddressPoolType"] = request.getAddressPoolType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnableStatus()) {
    query["EnableStatus"] = request.getEnableStatus();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCloudGtmAddressPools"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloudGtmAddressPoolsResponse>();
}

/**
 * @summary Queries the list of address pools in Global Traffic Manager (GTM) 3.0.
 *
 * @param request ListCloudGtmAddressPoolsRequest
 * @return ListCloudGtmAddressPoolsResponse
 */
ListCloudGtmAddressPoolsResponse Client::listCloudGtmAddressPools(const ListCloudGtmAddressPoolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloudGtmAddressPoolsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of addresses based on the specified parameters.
 *
 * @param request ListCloudGtmAddressesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloudGtmAddressesResponse
 */
ListCloudGtmAddressesResponse Client::listCloudGtmAddressesWithOptions(const ListCloudGtmAddressesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasAddressId()) {
    query["AddressId"] = request.getAddressId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnableStatus()) {
    query["EnableStatus"] = request.getEnableStatus();
  }

  if (!!request.hasHealthStatus()) {
    query["HealthStatus"] = request.getHealthStatus();
  }

  if (!!request.hasMonitorTemplateId()) {
    query["MonitorTemplateId"] = request.getMonitorTemplateId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCloudGtmAddresses"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloudGtmAddressesResponse>();
}

/**
 * @summary Queries a list of addresses based on the specified parameters.
 *
 * @param request ListCloudGtmAddressesRequest
 * @return ListCloudGtmAddressesResponse
 */
ListCloudGtmAddressesResponse Client::listCloudGtmAddresses(const ListCloudGtmAddressesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloudGtmAddressesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of alert logs.
 *
 * @param request ListCloudGtmAlertLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloudGtmAlertLogsResponse
 */
ListCloudGtmAlertLogsResponse Client::listCloudGtmAlertLogsWithOptions(const ListCloudGtmAlertLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionType()) {
    query["ActionType"] = request.getActionType();
  }

  if (!!request.hasEndTimestamp()) {
    query["EndTimestamp"] = request.getEndTimestamp();
  }

  if (!!request.hasEntityType()) {
    query["EntityType"] = request.getEntityType();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTimestamp()) {
    query["StartTimestamp"] = request.getStartTimestamp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCloudGtmAlertLogs"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloudGtmAlertLogsResponse>();
}

/**
 * @summary Queries a list of alert logs.
 *
 * @param request ListCloudGtmAlertLogsRequest
 * @return ListCloudGtmAlertLogsResponse
 */
ListCloudGtmAlertLogsResponse Client::listCloudGtmAlertLogs(const ListCloudGtmAlertLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloudGtmAlertLogsWithOptions(request, runtime);
}

/**
 * @param request ListCloudGtmAvailableAlertGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloudGtmAvailableAlertGroupsResponse
 */
ListCloudGtmAvailableAlertGroupsResponse Client::listCloudGtmAvailableAlertGroupsWithOptions(const ListCloudGtmAvailableAlertGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCloudGtmAvailableAlertGroups"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloudGtmAvailableAlertGroupsResponse>();
}

/**
 * @param request ListCloudGtmAvailableAlertGroupsRequest
 * @return ListCloudGtmAvailableAlertGroupsResponse
 */
ListCloudGtmAvailableAlertGroupsResponse Client::listCloudGtmAvailableAlertGroups(const ListCloudGtmAvailableAlertGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloudGtmAvailableAlertGroupsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of instance configurations that contain access domain names and address pool information.
 *
 * @param request ListCloudGtmInstanceConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloudGtmInstanceConfigsResponse
 */
ListCloudGtmInstanceConfigsResponse Client::listCloudGtmInstanceConfigsWithOptions(const ListCloudGtmInstanceConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnableStatus()) {
    query["EnableStatus"] = request.getEnableStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasScheduleDomainName()) {
    query["ScheduleDomainName"] = request.getScheduleDomainName();
  }

  if (!!request.hasScheduleZoneName()) {
    query["ScheduleZoneName"] = request.getScheduleZoneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCloudGtmInstanceConfigs"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloudGtmInstanceConfigsResponse>();
}

/**
 * @summary Retrieves a list of instance configurations that contain access domain names and address pool information.
 *
 * @param request ListCloudGtmInstanceConfigsRequest
 * @return ListCloudGtmInstanceConfigsResponse
 */
ListCloudGtmInstanceConfigsResponse Client::listCloudGtmInstanceConfigs(const ListCloudGtmInstanceConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloudGtmInstanceConfigsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of GTM 3.0 instances based on the specified parameters.
 *
 * @param request ListCloudGtmInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloudGtmInstancesResponse
 */
ListCloudGtmInstancesResponse Client::listCloudGtmInstancesWithOptions(const ListCloudGtmInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
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
    {"action" , "ListCloudGtmInstances"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloudGtmInstancesResponse>();
}

/**
 * @summary Retrieves a list of GTM 3.0 instances based on the specified parameters.
 *
 * @param request ListCloudGtmInstancesRequest
 * @return ListCloudGtmInstancesResponse
 */
ListCloudGtmInstancesResponse Client::listCloudGtmInstances(const ListCloudGtmInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloudGtmInstancesWithOptions(request, runtime);
}

/**
 * @summary Lists the health check monitoring nodes based on the specified input parameters.
 *
 * @param request ListCloudGtmMonitorNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloudGtmMonitorNodesResponse
 */
ListCloudGtmMonitorNodesResponse Client::listCloudGtmMonitorNodesWithOptions(const ListCloudGtmMonitorNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasShowDisabledNodes()) {
    query["ShowDisabledNodes"] = request.getShowDisabledNodes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCloudGtmMonitorNodes"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloudGtmMonitorNodesResponse>();
}

/**
 * @summary Lists the health check monitoring nodes based on the specified input parameters.
 *
 * @param request ListCloudGtmMonitorNodesRequest
 * @return ListCloudGtmMonitorNodesResponse
 */
ListCloudGtmMonitorNodesResponse Client::listCloudGtmMonitorNodes(const ListCloudGtmMonitorNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloudGtmMonitorNodesWithOptions(request, runtime);
}

/**
 * @summary Queries health check templates based on the specified parameters.
 *
 * @param request ListCloudGtmMonitorTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloudGtmMonitorTemplatesResponse
 */
ListCloudGtmMonitorTemplatesResponse Client::listCloudGtmMonitorTemplatesWithOptions(const ListCloudGtmMonitorTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCloudGtmMonitorTemplates"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloudGtmMonitorTemplatesResponse>();
}

/**
 * @summary Queries health check templates based on the specified parameters.
 *
 * @param request ListCloudGtmMonitorTemplatesRequest
 * @return ListCloudGtmMonitorTemplatesResponse
 */
ListCloudGtmMonitorTemplatesResponse Client::listCloudGtmMonitorTemplates(const ListCloudGtmMonitorTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloudGtmMonitorTemplatesWithOptions(request, runtime);
}

/**
 * @summary Lists the built-in authoritative records for recursive resolution.
 *
 * @param request ListRecursionRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecursionRecordsResponse
 */
ListRecursionRecordsResponse Client::listRecursionRecordsWithOptions(const ListRecursionRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnable()) {
    query["Enable"] = request.getEnable();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasRequestSource()) {
    query["RequestSource"] = request.getRequestSource();
  }

  if (!!request.hasRr()) {
    query["Rr"] = request.getRr();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasWeight()) {
    query["Weight"] = request.getWeight();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRecursionRecords"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecursionRecordsResponse>();
}

/**
 * @summary Lists the built-in authoritative records for recursive resolution.
 *
 * @param request ListRecursionRecordsRequest
 * @return ListRecursionRecordsResponse
 */
ListRecursionRecordsResponse Client::listRecursionRecords(const ListRecursionRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRecursionRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the zones that are used for recursive resolution of built-in authoritative domain names.
 *
 * @description - Specify at least ResourceId.N or Tag.N (Tag.N.Key and Tag.N.Value) in your request to identify the resources to retrieve.
 * - Tag.N is a resource tag that consists of a key-value pair. If you specify only Tag.N.Key, all tag values associated with the tag key are returned. An error is returned if you specify only Tag.N.Value.
 * - If you specify both Tag.N and ResourceId.N to filter resources, only the resources that are specified by ResourceId.N and match all the specified key-value pairs are returned.
 * - If you specify multiple tag key-value pairs, the resources that match all of them are returned.
 *
 * @param request ListRecursionZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecursionZonesResponse
 */
ListRecursionZonesResponse Client::listRecursionZonesWithOptions(const ListRecursionZonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasZoneName()) {
    query["ZoneName"] = request.getZoneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRecursionZones"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecursionZonesResponse>();
}

/**
 * @summary Queries the zones that are used for recursive resolution of built-in authoritative domain names.
 *
 * @description - Specify at least ResourceId.N or Tag.N (Tag.N.Key and Tag.N.Value) in your request to identify the resources to retrieve.
 * - Tag.N is a resource tag that consists of a key-value pair. If you specify only Tag.N.Key, all tag values associated with the tag key are returned. An error is returned if you specify only Tag.N.Value.
 * - If you specify both Tag.N and ResourceId.N to filter resources, only the resources that are specified by ResourceId.N and match all the specified key-value pairs are returned.
 * - If you specify multiple tag key-value pairs, the resources that match all of them are returned.
 *
 * @param request ListRecursionZonesRequest
 * @return ListRecursionZonesResponse
 */
ListRecursionZonesResponse Client::listRecursionZones(const ListRecursionZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRecursionZonesWithOptions(request, runtime);
}

/**
 * @summary Queries resources by tag.
 *
 * @description - To specify the objects to retrieve, your request must contain at least one of the following parameters: `ResourceId.N` or `Tag.N` (which consists of Tag.N.Key and Tag.N.Value).
 * - Tag.N is a resource tag that consists of a key-value pair. If you specify only Tag.N.Key, all tag values associated with that tag key are returned. An error occurs if you specify only Tag.N.Value.
 * - If you specify both Tag.N and ResourceId.N to filter resources, only the resources that are specified by ResourceId.N and match all the specified tag key-value pairs are returned.
 * - If you specify multiple tag key-value pairs, only the resources that have all the specified key-value pairs are returned.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

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
    {"action" , "ListTagResources"},
    {"version" , "2015-01-09"},
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
 * @summary Queries resources by tag.
 *
 * @description - To specify the objects to retrieve, your request must contain at least one of the following parameters: `ResourceId.N` or `Tag.N` (which consists of Tag.N.Key and Tag.N.Value).
 * - Tag.N is a resource tag that consists of a key-value pair. If you specify only Tag.N.Key, all tag values associated with that tag key are returned. An error occurs if you specify only Tag.N.Value.
 * - If you specify both Tag.N and ResourceId.N to filter resources, only the resources that are specified by ResourceId.N and match all the specified tag key-value pairs are returned.
 * - If you specify multiple tag key-value pairs, only the resources that have all the specified key-value pairs are returned.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Changes the DNS servers for a domain name from a third-party provider to Alibaba Cloud DNS.
 *
 * @description After the operation is successful, the DNS servers are changed to Alibaba Cloud DNS servers. The names of these new servers end with hichina.com.
 * > **Prerequisite: This operation applies to domain names that are registered with Alibaba Cloud and currently use third-party DNS servers.**
 *
 * @param request ModifyHichinaDomainDNSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyHichinaDomainDNSResponse
 */
ModifyHichinaDomainDNSResponse Client::modifyHichinaDomainDNSWithOptions(const ModifyHichinaDomainDNSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyHichinaDomainDNS"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyHichinaDomainDNSResponse>();
}

/**
 * @summary Changes the DNS servers for a domain name from a third-party provider to Alibaba Cloud DNS.
 *
 * @description After the operation is successful, the DNS servers are changed to Alibaba Cloud DNS servers. The names of these new servers end with hichina.com.
 * > **Prerequisite: This operation applies to domain names that are registered with Alibaba Cloud and currently use third-party DNS servers.**
 *
 * @param request ModifyHichinaDomainDNSRequest
 * @return ModifyHichinaDomainDNSResponse
 */
ModifyHichinaDomainDNSResponse Client::modifyHichinaDomainDNS(const ModifyHichinaDomainDNSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyHichinaDomainDNSWithOptions(request, runtime);
}

/**
 * @summary Moves a domain name to a different resource group.
 *
 * @param request MoveDomainResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveDomainResourceGroupResponse
 */
MoveDomainResourceGroupResponse Client::moveDomainResourceGroupWithOptions(const MoveDomainResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveDomainResourceGroup"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveDomainResourceGroupResponse>();
}

/**
 * @summary Moves a domain name to a different resource group.
 *
 * @param request MoveDomainResourceGroupRequest
 * @return MoveDomainResourceGroupResponse
 */
MoveDomainResourceGroupResponse Client::moveDomainResourceGroup(const MoveDomainResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveDomainResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Moves a Global Traffic Manager (GTM) instance to a new resource group.
 *
 * @param request MoveGtmResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveGtmResourceGroupResponse
 */
MoveGtmResourceGroupResponse Client::moveGtmResourceGroupWithOptions(const MoveGtmResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.getNewResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveGtmResourceGroup"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveGtmResourceGroupResponse>();
}

/**
 * @summary Moves a Global Traffic Manager (GTM) instance to a new resource group.
 *
 * @param request MoveGtmResourceGroupRequest
 * @return MoveGtmResourceGroupResponse
 */
MoveGtmResourceGroupResponse Client::moveGtmResourceGroup(const MoveGtmResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveGtmResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Adds or deletes domain names and DNS records in batches.
 *
 * @description Use this operation for batch DNS tasks that do not require immediate execution.
 *
 * @param request OperateBatchDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OperateBatchDomainResponse
 */
OperateBatchDomainResponse Client::operateBatchDomainWithOptions(const OperateBatchDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainRecordInfo()) {
    query["DomainRecordInfo"] = request.getDomainRecordInfo();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OperateBatchDomain"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OperateBatchDomainResponse>();
}

/**
 * @summary Adds or deletes domain names and DNS records in batches.
 *
 * @description Use this operation for batch DNS tasks that do not require immediate execution.
 *
 * @param request OperateBatchDomainRequest
 * @return OperateBatchDomainResponse
 */
OperateBatchDomainResponse Client::operateBatchDomain(const OperateBatchDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return operateBatchDomainWithOptions(request, runtime);
}

/**
 * @summary Pause Public DNS Service
 *
 * @param request PausePdnsServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PausePdnsServiceResponse
 */
PausePdnsServiceResponse Client::pausePdnsServiceWithOptions(const PausePdnsServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.getServiceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PausePdnsService"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PausePdnsServiceResponse>();
}

/**
 * @summary Pause Public DNS Service
 *
 * @param request PausePdnsServiceRequest
 * @return PausePdnsServiceResponse
 */
PausePdnsServiceResponse Client::pausePdnsService(const PausePdnsServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pausePdnsServiceWithOptions(request, runtime);
}

/**
 * @summary Previews a disaster recovery plan.
 *
 * @param request PreviewGtmRecoveryPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreviewGtmRecoveryPlanResponse
 */
PreviewGtmRecoveryPlanResponse Client::previewGtmRecoveryPlanWithOptions(const PreviewGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRecoveryPlanId()) {
    query["RecoveryPlanId"] = request.getRecoveryPlanId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PreviewGtmRecoveryPlan"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreviewGtmRecoveryPlanResponse>();
}

/**
 * @summary Previews a disaster recovery plan.
 *
 * @param request PreviewGtmRecoveryPlanRequest
 * @return PreviewGtmRecoveryPlanResponse
 */
PreviewGtmRecoveryPlanResponse Client::previewGtmRecoveryPlan(const PreviewGtmRecoveryPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return previewGtmRecoveryPlanWithOptions(request, runtime);
}

/**
 * @summary Delete Public DNS AppKey
 *
 * @param request RemovePdnsAppKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemovePdnsAppKeyResponse
 */
RemovePdnsAppKeyResponse Client::removePdnsAppKeyWithOptions(const RemovePdnsAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKeyId()) {
    query["AppKeyId"] = request.getAppKeyId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemovePdnsAppKey"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemovePdnsAppKeyResponse>();
}

/**
 * @summary Delete Public DNS AppKey
 *
 * @param request RemovePdnsAppKeyRequest
 * @return RemovePdnsAppKeyResponse
 */
RemovePdnsAppKeyResponse Client::removePdnsAppKey(const RemovePdnsAppKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removePdnsAppKeyWithOptions(request, runtime);
}

/**
 * @summary Remove Public DNS UDP IP Segment
 *
 * @param request RemovePdnsUdpIpSegmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemovePdnsUdpIpSegmentResponse
 */
RemovePdnsUdpIpSegmentResponse Client::removePdnsUdpIpSegmentWithOptions(const RemovePdnsUdpIpSegmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemovePdnsUdpIpSegment"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemovePdnsUdpIpSegmentResponse>();
}

/**
 * @summary Remove Public DNS UDP IP Segment
 *
 * @param request RemovePdnsUdpIpSegmentRequest
 * @return RemovePdnsUdpIpSegmentResponse
 */
RemovePdnsUdpIpSegmentResponse Client::removePdnsUdpIpSegment(const RemovePdnsUdpIpSegmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removePdnsUdpIpSegmentWithOptions(request, runtime);
}

/**
 * @summary Removes the serverHold status of a specified domain name.
 *
 * @description ## Description
 * - This operation removes the serverHold status of a specified domain name.
 *
 * @param request RemoveRspDomainServerHoldStatusForGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveRspDomainServerHoldStatusForGatewayResponse
 */
RemoveRspDomainServerHoldStatusForGatewayResponse Client::removeRspDomainServerHoldStatusForGatewayWithOptions(const RemoveRspDomainServerHoldStatusForGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasStatusMsg()) {
    query["StatusMsg"] = request.getStatusMsg();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveRspDomainServerHoldStatusForGateway"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveRspDomainServerHoldStatusForGatewayResponse>();
}

/**
 * @summary Removes the serverHold status of a specified domain name.
 *
 * @description ## Description
 * - This operation removes the serverHold status of a specified domain name.
 *
 * @param request RemoveRspDomainServerHoldStatusForGatewayRequest
 * @return RemoveRspDomainServerHoldStatusForGatewayResponse
 */
RemoveRspDomainServerHoldStatusForGatewayResponse Client::removeRspDomainServerHoldStatusForGateway(const RemoveRspDomainServerHoldStatusForGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeRspDomainServerHoldStatusForGatewayWithOptions(request, runtime);
}

/**
 * @summary Removes the serverHold status for a specified domain name.
 *
 * @description ## Description
 * - This operation removes the serverHold status for a specified domain name.
 *
 * @param request RemoveRspDomainServerHoldStatusForGatewayOteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveRspDomainServerHoldStatusForGatewayOteResponse
 */
RemoveRspDomainServerHoldStatusForGatewayOteResponse Client::removeRspDomainServerHoldStatusForGatewayOteWithOptions(const RemoveRspDomainServerHoldStatusForGatewayOteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasStatusMsg()) {
    query["StatusMsg"] = request.getStatusMsg();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveRspDomainServerHoldStatusForGatewayOte"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveRspDomainServerHoldStatusForGatewayOteResponse>();
}

/**
 * @summary Removes the serverHold status for a specified domain name.
 *
 * @description ## Description
 * - This operation removes the serverHold status for a specified domain name.
 *
 * @param request RemoveRspDomainServerHoldStatusForGatewayOteRequest
 * @return RemoveRspDomainServerHoldStatusForGatewayOteResponse
 */
RemoveRspDomainServerHoldStatusForGatewayOteResponse Client::removeRspDomainServerHoldStatusForGatewayOte(const RemoveRspDomainServerHoldStatusForGatewayOteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeRspDomainServerHoldStatusForGatewayOteWithOptions(request, runtime);
}

/**
 * @summary Replaces the addresses in a specified address pool.
 *
 * @param tmpReq ReplaceCloudGtmAddressPoolAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReplaceCloudGtmAddressPoolAddressResponse
 */
ReplaceCloudGtmAddressPoolAddressResponse Client::replaceCloudGtmAddressPoolAddressWithOptions(const ReplaceCloudGtmAddressPoolAddressRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReplaceCloudGtmAddressPoolAddressShrinkRequest request = ReplaceCloudGtmAddressPoolAddressShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddresses()) {
    request.setAddressesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddresses(), "Addresses", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddressPoolId()) {
    query["AddressPoolId"] = request.getAddressPoolId();
  }

  if (!!request.hasAddressesShrink()) {
    query["Addresses"] = request.getAddressesShrink();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReplaceCloudGtmAddressPoolAddress"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplaceCloudGtmAddressPoolAddressResponse>();
}

/**
 * @summary Replaces the addresses in a specified address pool.
 *
 * @param request ReplaceCloudGtmAddressPoolAddressRequest
 * @return ReplaceCloudGtmAddressPoolAddressResponse
 */
ReplaceCloudGtmAddressPoolAddressResponse Client::replaceCloudGtmAddressPoolAddress(const ReplaceCloudGtmAddressPoolAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return replaceCloudGtmAddressPoolAddressWithOptions(request, runtime);
}

/**
 * @summary Replaces the address pools associated with an instance.
 *
 * @param tmpReq ReplaceCloudGtmInstanceConfigAddressPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReplaceCloudGtmInstanceConfigAddressPoolResponse
 */
ReplaceCloudGtmInstanceConfigAddressPoolResponse Client::replaceCloudGtmInstanceConfigAddressPoolWithOptions(const ReplaceCloudGtmInstanceConfigAddressPoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest request = ReplaceCloudGtmInstanceConfigAddressPoolShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAddressPools()) {
    request.setAddressPoolsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAddressPools(), "AddressPools", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddressPoolsShrink()) {
    query["AddressPools"] = request.getAddressPoolsShrink();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReplaceCloudGtmInstanceConfigAddressPool"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReplaceCloudGtmInstanceConfigAddressPoolResponse>();
}

/**
 * @summary Replaces the address pools associated with an instance.
 *
 * @param request ReplaceCloudGtmInstanceConfigAddressPoolRequest
 * @return ReplaceCloudGtmInstanceConfigAddressPoolResponse
 */
ReplaceCloudGtmInstanceConfigAddressPoolResponse Client::replaceCloudGtmInstanceConfigAddressPool(const ReplaceCloudGtmInstanceConfigAddressPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return replaceCloudGtmInstanceConfigAddressPoolWithOptions(request, runtime);
}

/**
 * @summary Resume Public DNS Service
 *
 * @param request ResumePdnsServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumePdnsServiceResponse
 */
ResumePdnsServiceResponse Client::resumePdnsServiceWithOptions(const ResumePdnsServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasServiceType()) {
    query["ServiceType"] = request.getServiceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumePdnsService"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumePdnsServiceResponse>();
}

/**
 * @summary Resume Public DNS Service
 *
 * @param request ResumePdnsServiceRequest
 * @return ResumePdnsServiceResponse
 */
ResumePdnsServiceResponse Client::resumePdnsService(const ResumePdnsServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumePdnsServiceWithOptions(request, runtime);
}

/**
 * @summary Retrieves a domain name.
 *
 * @description Before you can retrieve a domain name, you must verify it using a TXT record. Use this operation in conjunction with the <props="china">[Generate a TXT record](https://help.aliyun.com/document_detail/145533.html) <props="intl">[Generate a TXT record](https://www.alibabacloud.com/help/zh/alibaba-cloud-dns/latest/generating-a-txt-record) operation.
 *
 * @param request RetrieveDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetrieveDomainResponse
 */
RetrieveDomainResponse Client::retrieveDomainWithOptions(const RetrieveDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RetrieveDomain"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetrieveDomainResponse>();
}

/**
 * @summary Retrieves a domain name.
 *
 * @description Before you can retrieve a domain name, you must verify it using a TXT record. Use this operation in conjunction with the <props="china">[Generate a TXT record](https://help.aliyun.com/document_detail/145533.html) <props="intl">[Generate a TXT record](https://www.alibabacloud.com/help/zh/alibaba-cloud-dns/latest/generating-a-txt-record) operation.
 *
 * @param request RetrieveDomainRequest
 * @return RetrieveDomainResponse
 */
RetrieveDomainResponse Client::retrieveDomain(const RetrieveDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return retrieveDomainWithOptions(request, runtime);
}

/**
 * @summary Revokes the registration information of an Agent.
 *
 * @param request RevokeAtiAgentRegisterInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeAtiAgentRegisterInfoResponse
 */
RevokeAtiAgentRegisterInfoResponse Client::revokeAtiAgentRegisterInfoWithOptions(const RevokeAtiAgentRegisterInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentRegisterInfoId()) {
    query["AgentRegisterInfoId"] = request.getAgentRegisterInfoId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasReason()) {
    query["Reason"] = request.getReason();
  }

  if (!!request.hasReasonCode()) {
    query["ReasonCode"] = request.getReasonCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeAtiAgentRegisterInfo"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeAtiAgentRegisterInfoResponse>();
}

/**
 * @summary Revokes the registration information of an Agent.
 *
 * @param request RevokeAtiAgentRegisterInfoRequest
 * @return RevokeAtiAgentRegisterInfoResponse
 */
RevokeAtiAgentRegisterInfoResponse Client::revokeAtiAgentRegisterInfo(const RevokeAtiAgentRegisterInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeAtiAgentRegisterInfoWithOptions(request, runtime);
}

/**
 * @summary Revokes a real-name registrant.
 *
 * @param request RevokeAtiRegistrantRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeAtiRegistrantResponse
 */
RevokeAtiRegistrantResponse Client::revokeAtiRegistrantWithOptions(const RevokeAtiRegistrantRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegistrantId()) {
    query["RegistrantId"] = request.getRegistrantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeAtiRegistrant"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeAtiRegistrantResponse>();
}

/**
 * @summary Revokes a real-name registrant.
 *
 * @param request RevokeAtiRegistrantRequest
 * @return RevokeAtiRegistrantResponse
 */
RevokeAtiRegistrantResponse Client::revokeAtiRegistrant(const RevokeAtiRegistrantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeAtiRegistrantWithOptions(request, runtime);
}

/**
 * @summary Rolls back a disaster recovery plan.
 *
 * @param request RollbackGtmRecoveryPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackGtmRecoveryPlanResponse
 */
RollbackGtmRecoveryPlanResponse Client::rollbackGtmRecoveryPlanWithOptions(const RollbackGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRecoveryPlanId()) {
    query["RecoveryPlanId"] = request.getRecoveryPlanId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RollbackGtmRecoveryPlan"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackGtmRecoveryPlanResponse>();
}

/**
 * @summary Rolls back a disaster recovery plan.
 *
 * @param request RollbackGtmRecoveryPlanRequest
 * @return RollbackGtmRecoveryPlanResponse
 */
RollbackGtmRecoveryPlanResponse Client::rollbackGtmRecoveryPlan(const RollbackGtmRecoveryPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackGtmRecoveryPlanWithOptions(request, runtime);
}

/**
 * @summary Searches for agents in the Agent Marketplace.
 *
 * @param request SearchAtiAgentRegisterInfoMarketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchAtiAgentRegisterInfoMarketResponse
 */
SearchAtiAgentRegisterInfoMarketResponse Client::searchAtiAgentRegisterInfoMarketWithOptions(const SearchAtiAgentRegisterInfoMarketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTrustLevel()) {
    query["TrustLevel"] = request.getTrustLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchAtiAgentRegisterInfoMarket"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchAtiAgentRegisterInfoMarketResponse>();
}

/**
 * @summary Searches for agents in the Agent Marketplace.
 *
 * @param request SearchAtiAgentRegisterInfoMarketRequest
 * @return SearchAtiAgentRegisterInfoMarketResponse
 */
SearchAtiAgentRegisterInfoMarketResponse Client::searchAtiAgentRegisterInfoMarket(const SearchAtiAgentRegisterInfoMarketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchAtiAgentRegisterInfoMarketWithOptions(request, runtime);
}

/**
 * @summary Searches for address pools by name, remarks, or other criteria.
 *
 * @param request SearchCloudGtmAddressPoolsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchCloudGtmAddressPoolsResponse
 */
SearchCloudGtmAddressPoolsResponse Client::searchCloudGtmAddressPoolsWithOptions(const SearchCloudGtmAddressPoolsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddressPoolName()) {
    query["AddressPoolName"] = request.getAddressPoolName();
  }

  if (!!request.hasAddressPoolType()) {
    query["AddressPoolType"] = request.getAddressPoolType();
  }

  if (!!request.hasAvailableStatus()) {
    query["AvailableStatus"] = request.getAvailableStatus();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnableStatus()) {
    query["EnableStatus"] = request.getEnableStatus();
  }

  if (!!request.hasHealthStatus()) {
    query["HealthStatus"] = request.getHealthStatus();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchCloudGtmAddressPools"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchCloudGtmAddressPoolsResponse>();
}

/**
 * @summary Searches for address pools by name, remarks, or other criteria.
 *
 * @param request SearchCloudGtmAddressPoolsRequest
 * @return SearchCloudGtmAddressPoolsResponse
 */
SearchCloudGtmAddressPoolsResponse Client::searchCloudGtmAddressPools(const SearchCloudGtmAddressPoolsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchCloudGtmAddressPoolsWithOptions(request, runtime);
}

/**
 * @summary Searches for addresses based on criteria such as address name, remarks, referenced health check template, or address ID.
 *
 * @param request SearchCloudGtmAddressesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchCloudGtmAddressesResponse
 */
SearchCloudGtmAddressesResponse Client::searchCloudGtmAddressesWithOptions(const SearchCloudGtmAddressesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasAddressId()) {
    query["AddressId"] = request.getAddressId();
  }

  if (!!request.hasAvailableStatus()) {
    query["AvailableStatus"] = request.getAvailableStatus();
  }

  if (!!request.hasEnableStatus()) {
    query["EnableStatus"] = request.getEnableStatus();
  }

  if (!!request.hasHealthStatus()) {
    query["HealthStatus"] = request.getHealthStatus();
  }

  if (!!request.hasMonitorTemplateName()) {
    query["MonitorTemplateName"] = request.getMonitorTemplateName();
  }

  if (!!request.hasNameSearchCondition()) {
    query["NameSearchCondition"] = request.getNameSearchCondition();
  }

  if (!!request.hasNames()) {
    query["Names"] = request.getNames();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRemarkSearchCondition()) {
    query["RemarkSearchCondition"] = request.getRemarkSearchCondition();
  }

  if (!!request.hasRemarks()) {
    query["Remarks"] = request.getRemarks();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchCloudGtmAddresses"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchCloudGtmAddressesResponse>();
}

/**
 * @summary Searches for addresses based on criteria such as address name, remarks, referenced health check template, or address ID.
 *
 * @param request SearchCloudGtmAddressesRequest
 * @return SearchCloudGtmAddressesResponse
 */
SearchCloudGtmAddressesResponse Client::searchCloudGtmAddresses(const SearchCloudGtmAddressesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchCloudGtmAddressesWithOptions(request, runtime);
}

/**
 * @summary Retrieves instance configurations that match the specified parameters.
 *
 * @param request SearchCloudGtmInstanceConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchCloudGtmInstanceConfigsResponse
 */
SearchCloudGtmInstanceConfigsResponse Client::searchCloudGtmInstanceConfigsWithOptions(const SearchCloudGtmInstanceConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAvailableStatus()) {
    query["AvailableStatus"] = request.getAvailableStatus();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnableStatus()) {
    query["EnableStatus"] = request.getEnableStatus();
  }

  if (!!request.hasHealthStatus()) {
    query["HealthStatus"] = request.getHealthStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasScheduleDomainName()) {
    query["ScheduleDomainName"] = request.getScheduleDomainName();
  }

  if (!!request.hasScheduleZoneName()) {
    query["ScheduleZoneName"] = request.getScheduleZoneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchCloudGtmInstanceConfigs"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchCloudGtmInstanceConfigsResponse>();
}

/**
 * @summary Retrieves instance configurations that match the specified parameters.
 *
 * @param request SearchCloudGtmInstanceConfigsRequest
 * @return SearchCloudGtmInstanceConfigsResponse
 */
SearchCloudGtmInstanceConfigsResponse Client::searchCloudGtmInstanceConfigs(const SearchCloudGtmInstanceConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchCloudGtmInstanceConfigsWithOptions(request, runtime);
}

/**
 * @summary This operation searches for instances based on specified parameters.
 *
 * @param request SearchCloudGtmInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchCloudGtmInstancesResponse
 */
SearchCloudGtmInstancesResponse Client::searchCloudGtmInstancesWithOptions(const SearchCloudGtmInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasChargeType()) {
    query["ChargeType"] = request.getChargeType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
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
    {"action" , "SearchCloudGtmInstances"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchCloudGtmInstancesResponse>();
}

/**
 * @summary This operation searches for instances based on specified parameters.
 *
 * @param request SearchCloudGtmInstancesRequest
 * @return SearchCloudGtmInstancesResponse
 */
SearchCloudGtmInstancesResponse Client::searchCloudGtmInstances(const SearchCloudGtmInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchCloudGtmInstancesWithOptions(request, runtime);
}

/**
 * @summary Searches for health check templates.
 *
 * @param request SearchCloudGtmMonitorTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchCloudGtmMonitorTemplatesResponse
 */
SearchCloudGtmMonitorTemplatesResponse Client::searchCloudGtmMonitorTemplatesWithOptions(const SearchCloudGtmMonitorTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasIpVersion()) {
    query["IpVersion"] = request.getIpVersion();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchCloudGtmMonitorTemplates"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchCloudGtmMonitorTemplatesResponse>();
}

/**
 * @summary Searches for health check templates.
 *
 * @param request SearchCloudGtmMonitorTemplatesRequest
 * @return SearchCloudGtmMonitorTemplatesResponse
 */
SearchCloudGtmMonitorTemplatesResponse Client::searchCloudGtmMonitorTemplates(const SearchCloudGtmMonitorTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchCloudGtmMonitorTemplatesWithOptions(request, runtime);
}

/**
 * @summary Searches for built-in authoritative DNS records used for recursive resolution.
 *
 * @param request SearchRecursionRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchRecursionRecordsResponse
 */
SearchRecursionRecordsResponse Client::searchRecursionRecordsWithOptions(const SearchRecursionRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasEnableStatus()) {
    query["EnableStatus"] = request.getEnableStatus();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasRequestSource()) {
    query["RequestSource"] = request.getRequestSource();
  }

  if (!!request.hasRr()) {
    query["Rr"] = request.getRr();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.getValue();
  }

  if (!!request.hasWeight()) {
    query["Weight"] = request.getWeight();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchRecursionRecords"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchRecursionRecordsResponse>();
}

/**
 * @summary Searches for built-in authoritative DNS records used for recursive resolution.
 *
 * @param request SearchRecursionRecordsRequest
 * @return SearchRecursionRecordsResponse
 */
SearchRecursionRecordsResponse Client::searchRecursionRecords(const SearchRecursionRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchRecursionRecordsWithOptions(request, runtime);
}

/**
 * @summary Searches for zones of built-in authoritative domain names used for recursive resolution.
 *
 * @description - To retrieve resources, you must specify at least `ResourceId.N` or `Tag.N` (`Tag.N.Key` and `Tag.N.Value`) in the request.
 * - `Tag.N` is a resource tag that consists of a key-value pair. If you specify only `Tag.N.Key`, all tag values associated with that key are returned. If you specify only `Tag.N.Value`, an error is returned.
 * - If you specify both `Tag.N` and `ResourceId.N`, the operation returns only the resources that are identified by `ResourceId.N` and match all the specified tag key-value pairs.
 * - If you specify multiple tag key-value pairs, only resources that match all of them are returned.
 *
 * @param tmpReq SearchRecursionZonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchRecursionZonesResponse
 */
SearchRecursionZonesResponse Client::searchRecursionZonesWithOptions(const SearchRecursionZonesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SearchRecursionZonesShrinkRequest request = SearchRecursionZonesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEffectiveScopes()) {
    request.setEffectiveScopesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEffectiveScopes(), "EffectiveScopes", "json"));
  }

  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasEffectiveScopesShrink()) {
    query["EffectiveScopes"] = request.getEffectiveScopesShrink();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasZoneName()) {
    query["ZoneName"] = request.getZoneName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchRecursionZones"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchRecursionZonesResponse>();
}

/**
 * @summary Searches for zones of built-in authoritative domain names used for recursive resolution.
 *
 * @description - To retrieve resources, you must specify at least `ResourceId.N` or `Tag.N` (`Tag.N.Key` and `Tag.N.Value`) in the request.
 * - `Tag.N` is a resource tag that consists of a key-value pair. If you specify only `Tag.N.Key`, all tag values associated with that key are returned. If you specify only `Tag.N.Value`, an error is returned.
 * - If you specify both `Tag.N` and `ResourceId.N`, the operation returns only the resources that are identified by `ResourceId.N` and match all the specified tag key-value pairs.
 * - If you specify multiple tag key-value pairs, only resources that match all of them are returned.
 *
 * @param request SearchRecursionZonesRequest
 * @return SearchRecursionZonesResponse
 */
SearchRecursionZonesResponse Client::searchRecursionZones(const SearchRecursionZonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchRecursionZonesWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the network traffic analysis feature for a Global Traffic Manager (GTM) instance. After this feature is enabled, you can view resolution logs and statistical reports for the domain name. You can also use the intelligent alerting feature based on abnormal metrics, such as resolution success rate and sudden changes in queries per second (QPS). This improves the observability and operations and maintenance (O&M) efficiency of the GTM instance.
 *
 * @param request SetCloudGtmInstanceConfigLogSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetCloudGtmInstanceConfigLogSwitchResponse
 */
SetCloudGtmInstanceConfigLogSwitchResponse Client::setCloudGtmInstanceConfigLogSwitchWithOptions(const SetCloudGtmInstanceConfigLogSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetCloudGtmInstanceConfigLogSwitch"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetCloudGtmInstanceConfigLogSwitchResponse>();
}

/**
 * @summary Enables or disables the network traffic analysis feature for a Global Traffic Manager (GTM) instance. After this feature is enabled, you can view resolution logs and statistical reports for the domain name. You can also use the intelligent alerting feature based on abnormal metrics, such as resolution success rate and sudden changes in queries per second (QPS). This improves the observability and operations and maintenance (O&M) efficiency of the GTM instance.
 *
 * @param request SetCloudGtmInstanceConfigLogSwitchRequest
 * @return SetCloudGtmInstanceConfigLogSwitchResponse
 */
SetCloudGtmInstanceConfigLogSwitchResponse Client::setCloudGtmInstanceConfigLogSwitch(const SetCloudGtmInstanceConfigLogSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setCloudGtmInstanceConfigLogSwitchWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the weight configuration.
 *
 * @param request SetDNSSLBStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDNSSLBStatusResponse
 */
SetDNSSLBStatusResponse Client::setDNSSLBStatusWithOptions(const SetDNSSLBStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLine()) {
    query["Line"] = request.getLine();
  }

  if (!!request.hasOpen()) {
    query["Open"] = request.getOpen();
  }

  if (!!request.hasSubDomain()) {
    query["SubDomain"] = request.getSubDomain();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDNSSLBStatus"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDNSSLBStatusResponse>();
}

/**
 * @summary Enables or disables the weight configuration.
 *
 * @param request SetDNSSLBStatusRequest
 * @return SetDNSSLBStatusResponse
 */
SetDNSSLBStatusResponse Client::setDNSSLBStatus(const SetDNSSLBStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDNSSLBStatusWithOptions(request, runtime);
}

/**
 * @summary Sets the access mode for an access policy.
 *
 * @description ***
 *
 * @param request SetDnsGtmAccessModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDnsGtmAccessModeResponse
 */
SetDnsGtmAccessModeResponse Client::setDnsGtmAccessModeWithOptions(const SetDnsGtmAccessModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessMode()) {
    query["AccessMode"] = request.getAccessMode();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStrategyId()) {
    query["StrategyId"] = request.getStrategyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDnsGtmAccessMode"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDnsGtmAccessModeResponse>();
}

/**
 * @summary Sets the access mode for an access policy.
 *
 * @description ***
 *
 * @param request SetDnsGtmAccessModeRequest
 * @return SetDnsGtmAccessModeResponse
 */
SetDnsGtmAccessModeResponse Client::setDnsGtmAccessMode(const SetDnsGtmAccessModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDnsGtmAccessModeWithOptions(request, runtime);
}

/**
 * @summary Sets the health check status for an address pool.
 *
 * @param request SetDnsGtmMonitorStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDnsGtmMonitorStatusResponse
 */
SetDnsGtmMonitorStatusResponse Client::setDnsGtmMonitorStatusWithOptions(const SetDnsGtmMonitorStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMonitorConfigId()) {
    query["MonitorConfigId"] = request.getMonitorConfigId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDnsGtmMonitorStatus"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDnsGtmMonitorStatusResponse>();
}

/**
 * @summary Sets the health check status for an address pool.
 *
 * @param request SetDnsGtmMonitorStatusRequest
 * @return SetDnsGtmMonitorStatusResponse
 */
SetDnsGtmMonitorStatusResponse Client::setDnsGtmMonitorStatus(const SetDnsGtmMonitorStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDnsGtmMonitorStatusWithOptions(request, runtime);
}

/**
 * @summary Enables or disables Domain Name System Security Extensions (DNSSEC) for a domain name. This feature is available only to users of paid Alibaba Cloud DNS.
 *
 * @param request SetDomainDnssecStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDomainDnssecStatusResponse
 */
SetDomainDnssecStatusResponse Client::setDomainDnssecStatusWithOptions(const SetDomainDnssecStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDomainDnssecStatus"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDomainDnssecStatusResponse>();
}

/**
 * @summary Enables or disables Domain Name System Security Extensions (DNSSEC) for a domain name. This feature is available only to users of paid Alibaba Cloud DNS.
 *
 * @param request SetDomainDnssecStatusRequest
 * @return SetDomainDnssecStatusResponse
 */
SetDomainDnssecStatusResponse Client::setDomainDnssecStatus(const SetDomainDnssecStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDomainDnssecStatusWithOptions(request, runtime);
}

/**
 * @summary Sets the status of a DNS record.
 *
 * @param request SetDomainRecordStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDomainRecordStatusResponse
 */
SetDomainRecordStatusResponse Client::setDomainRecordStatusWithOptions(const SetDomainRecordStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDomainRecordStatus"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDomainRecordStatusResponse>();
}

/**
 * @summary Sets the status of a DNS record.
 *
 * @param request SetDomainRecordStatusRequest
 * @return SetDomainRecordStatusResponse
 */
SetDomainRecordStatusResponse Client::setDomainRecordStatus(const SetDomainRecordStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDomainRecordStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the address pool switchover policy based on the request parameters.
 *
 * @param request SetGtmAccessModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetGtmAccessModeResponse
 */
SetGtmAccessModeResponse Client::setGtmAccessModeWithOptions(const SetGtmAccessModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessMode()) {
    query["AccessMode"] = request.getAccessMode();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStrategyId()) {
    query["StrategyId"] = request.getStrategyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetGtmAccessMode"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetGtmAccessModeResponse>();
}

/**
 * @summary Modifies the address pool switchover policy based on the request parameters.
 *
 * @param request SetGtmAccessModeRequest
 * @return SetGtmAccessModeResponse
 */
SetGtmAccessModeResponse Client::setGtmAccessMode(const SetGtmAccessModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setGtmAccessModeWithOptions(request, runtime);
}

/**
 * @summary Sets the health check status of an address pool.
 *
 * @param request SetGtmMonitorStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetGtmMonitorStatusResponse
 */
SetGtmMonitorStatusResponse Client::setGtmMonitorStatusWithOptions(const SetGtmMonitorStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMonitorConfigId()) {
    query["MonitorConfigId"] = request.getMonitorConfigId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetGtmMonitorStatus"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetGtmMonitorStatusResponse>();
}

/**
 * @summary Sets the health check status of an address pool.
 *
 * @param request SetGtmMonitorStatusRequest
 * @return SetGtmMonitorStatusResponse
 */
SetGtmMonitorStatusResponse Client::setGtmMonitorStatus(const SetGtmMonitorStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setGtmMonitorStatusWithOptions(request, runtime);
}

/**
 * @summary Submits Agent registration information.
 *
 * @param request SubmitAtiAgentRegisterInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAtiAgentRegisterInfoResponse
 */
SubmitAtiAgentRegisterInfoResponse Client::submitAtiAgentRegisterInfoWithOptions(const SubmitAtiAgentRegisterInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentRegisterInfoId()) {
    query["AgentRegisterInfoId"] = request.getAgentRegisterInfoId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasIdentityCsr()) {
    query["IdentityCsr"] = request.getIdentityCsr();
  }

  if (!!request.hasServerCertPem()) {
    query["ServerCertPem"] = request.getServerCertPem();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitAtiAgentRegisterInfo"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAtiAgentRegisterInfoResponse>();
}

/**
 * @summary Submits Agent registration information.
 *
 * @param request SubmitAtiAgentRegisterInfoRequest
 * @return SubmitAtiAgentRegisterInfoResponse
 */
SubmitAtiAgentRegisterInfoResponse Client::submitAtiAgentRegisterInfo(const SubmitAtiAgentRegisterInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAtiAgentRegisterInfoWithOptions(request, runtime);
}

/**
 * @summary Submits a cache refresh task.
 *
 * @param request SubmitIspFlushCacheTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitIspFlushCacheTaskResponse
 */
SubmitIspFlushCacheTaskResponse Client::submitIspFlushCacheTaskWithOptions(const SubmitIspFlushCacheTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasIsp()) {
    query["Isp"] = request.getIsp();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitIspFlushCacheTask"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitIspFlushCacheTaskResponse>();
}

/**
 * @summary Submits a cache refresh task.
 *
 * @param request SubmitIspFlushCacheTaskRequest
 * @return SubmitIspFlushCacheTaskResponse
 */
SubmitIspFlushCacheTaskResponse Client::submitIspFlushCacheTask(const SubmitIspFlushCacheTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitIspFlushCacheTaskWithOptions(request, runtime);
}

/**
 * @summary Switches the access strategy mode of an instance.
 *
 * @param request SwitchDnsGtmInstanceStrategyModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SwitchDnsGtmInstanceStrategyModeResponse
 */
SwitchDnsGtmInstanceStrategyModeResponse Client::switchDnsGtmInstanceStrategyModeWithOptions(const SwitchDnsGtmInstanceStrategyModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStrategyMode()) {
    query["StrategyMode"] = request.getStrategyMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SwitchDnsGtmInstanceStrategyMode"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SwitchDnsGtmInstanceStrategyModeResponse>();
}

/**
 * @summary Switches the access strategy mode of an instance.
 *
 * @param request SwitchDnsGtmInstanceStrategyModeRequest
 * @return SwitchDnsGtmInstanceStrategyModeResponse
 */
SwitchDnsGtmInstanceStrategyModeResponse Client::switchDnsGtmInstanceStrategyMode(const SwitchDnsGtmInstanceStrategyModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return switchDnsGtmInstanceStrategyModeWithOptions(request, runtime);
}

/**
 * @summary Adds or modifies tags for resources.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

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
    {"action" , "TagResources"},
    {"version" , "2015-01-09"},
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
 * @summary Adds or modifies tags for resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Batch transfers DNS permissions for multiple domain names to a specified execution account.
 *
 * @param request TransferDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferDomainResponse
 */
TransferDomainResponse Client::transferDomainWithOptions(const TransferDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.getDomainNames();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasTargetUserId()) {
    query["TargetUserId"] = request.getTargetUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TransferDomain"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferDomainResponse>();
}

/**
 * @summary Batch transfers DNS permissions for multiple domain names to a specified execution account.
 *
 * @param request TransferDomainRequest
 * @return TransferDomainResponse
 */
TransferDomainResponse Client::transferDomain(const TransferDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return transferDomainWithOptions(request, runtime);
}

/**
 * @summary Detaches domain names from a paid Alibaba Cloud DNS instance.
 *
 * @description An instance with an ID that starts with \\`dns-\\` is a new version instance. New version instances support attaching multiple domain names. You can call an API operation to attach domain names directly to an instance. An error is returned if the number of domain names exceeds the instance limit.
 * An instance with an ID that does not start with \\`dns-\\` is a legacy instance. Legacy instances support only one domain name. Therefore, if you call this operation for an instance that already has a domain name attached, the domain name is replaced.
 *
 * @param request UnbindInstanceDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindInstanceDomainsResponse
 */
UnbindInstanceDomainsResponse Client::unbindInstanceDomainsWithOptions(const UnbindInstanceDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.getDomainNames();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindInstanceDomains"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindInstanceDomainsResponse>();
}

/**
 * @summary Detaches domain names from a paid Alibaba Cloud DNS instance.
 *
 * @description An instance with an ID that starts with \\`dns-\\` is a new version instance. New version instances support attaching multiple domain names. You can call an API operation to attach domain names directly to an instance. An error is returned if the number of domain names exceeds the instance limit.
 * An instance with an ID that does not start with \\`dns-\\` is a legacy instance. Legacy instances support only one domain name. Therefore, if you call this operation for an instance that already has a domain name attached, the domain name is replaced.
 *
 * @param request UnbindInstanceDomainsRequest
 * @return UnbindInstanceDomainsResponse
 */
UnbindInstanceDomainsResponse Client::unbindInstanceDomains(const UnbindInstanceDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindInstanceDomainsWithOptions(request, runtime);
}

/**
 * @summary Removes tags from resources.
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

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
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
    {"action" , "UntagResources"},
    {"version" , "2015-01-09"},
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
 * @summary Removes tags from resources.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Modify AppKey State
 *
 * @param request UpdateAppKeyStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAppKeyStateResponse
 */
UpdateAppKeyStateResponse Client::updateAppKeyStateWithOptions(const UpdateAppKeyStateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKeyId()) {
    query["AppKeyId"] = request.getAppKeyId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAppKeyState"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAppKeyStateResponse>();
}

/**
 * @summary Modify AppKey State
 *
 * @param request UpdateAppKeyStateRequest
 * @return UpdateAppKeyStateResponse
 */
UpdateAppKeyStateResponse Client::updateAppKeyState(const UpdateAppKeyStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAppKeyStateWithOptions(request, runtime);
}

/**
 * @summary Updates the registration information of an Agent.
 *
 * @param tmpReq UpdateAtiAgentRegisterInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAtiAgentRegisterInfoResponse
 */
UpdateAtiAgentRegisterInfoResponse Client::updateAtiAgentRegisterInfoWithOptions(const UpdateAtiAgentRegisterInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAtiAgentRegisterInfoShrinkRequest request = UpdateAtiAgentRegisterInfoShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEndpoints()) {
    request.setEndpointsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEndpoints(), "Endpoints", "json"));
  }

  json query = {};
  if (!!request.hasAgentDescription()) {
    query["AgentDescription"] = request.getAgentDescription();
  }

  if (!!request.hasAgentDisplayName()) {
    query["AgentDisplayName"] = request.getAgentDisplayName();
  }

  if (!!request.hasAgentHost()) {
    query["AgentHost"] = request.getAgentHost();
  }

  if (!!request.hasAgentRegisterInfoId()) {
    query["AgentRegisterInfoId"] = request.getAgentRegisterInfoId();
  }

  if (!!request.hasAgentVersion()) {
    query["AgentVersion"] = request.getAgentVersion();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEndpointsShrink()) {
    query["Endpoints"] = request.getEndpointsShrink();
  }

  if (!!request.hasRegistrantId()) {
    query["RegistrantId"] = request.getRegistrantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAtiAgentRegisterInfo"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAtiAgentRegisterInfoResponse>();
}

/**
 * @summary Updates the registration information of an Agent.
 *
 * @param request UpdateAtiAgentRegisterInfoRequest
 * @return UpdateAtiAgentRegisterInfoResponse
 */
UpdateAtiAgentRegisterInfoResponse Client::updateAtiAgentRegisterInfo(const UpdateAtiAgentRegisterInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAtiAgentRegisterInfoWithOptions(request, runtime);
}

/**
 * @summary 更新告警设置
 *
 * @param request UpdateAtiAlertSettingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAtiAlertSettingsResponse
 */
UpdateAtiAlertSettingsResponse Client::updateAtiAlertSettingsWithOptions(const UpdateAtiAlertSettingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertConfig()) {
    query["AlertConfig"] = request.getAlertConfig();
  }

  if (!!request.hasAlertGroup()) {
    query["AlertGroup"] = request.getAlertGroup();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAtiAlertSettings"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAtiAlertSettingsResponse>();
}

/**
 * @summary 更新告警设置
 *
 * @param request UpdateAtiAlertSettingsRequest
 * @return UpdateAtiAlertSettingsResponse
 */
UpdateAtiAlertSettingsResponse Client::updateAtiAlertSettings(const UpdateAtiAlertSettingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAtiAlertSettingsWithOptions(request, runtime);
}

/**
 * @summary Modifies a registrant profile.
 *
 * @param request UpdateAtiRegistrantRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAtiRegistrantResponse
 */
UpdateAtiRegistrantResponse Client::updateAtiRegistrantWithOptions(const UpdateAtiRegistrantRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCc()) {
    query["Cc"] = request.getCc();
  }

  if (!!request.hasCity()) {
    query["City"] = request.getCity();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDocumentCode()) {
    query["DocumentCode"] = request.getDocumentCode();
  }

  if (!!request.hasDocumentImage()) {
    query["DocumentImage"] = request.getDocumentImage();
  }

  if (!!request.hasDocumentType()) {
    query["DocumentType"] = request.getDocumentType();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.getPhone();
  }

  if (!!request.hasRegistrantId()) {
    query["RegistrantId"] = request.getRegistrantId();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  if (!!request.hasStreet()) {
    query["Street"] = request.getStreet();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAtiRegistrant"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAtiRegistrantResponse>();
}

/**
 * @summary Modifies a registrant profile.
 *
 * @param request UpdateAtiRegistrantRequest
 * @return UpdateAtiRegistrantResponse
 */
UpdateAtiRegistrantResponse Client::updateAtiRegistrant(const UpdateAtiRegistrantRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAtiRegistrantWithOptions(request, runtime);
}

/**
 * @summary Modifies the basic configuration of a specified address, such as the address name, type, and value.
 *
 * @param tmpReq UpdateCloudGtmAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudGtmAddressResponse
 */
UpdateCloudGtmAddressResponse Client::updateCloudGtmAddressWithOptions(const UpdateCloudGtmAddressRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateCloudGtmAddressShrinkRequest request = UpdateCloudGtmAddressShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHealthTasks()) {
    request.setHealthTasksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHealthTasks(), "HealthTasks", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddress()) {
    query["Address"] = request.getAddress();
  }

  if (!!request.hasAddressId()) {
    query["AddressId"] = request.getAddressId();
  }

  if (!!request.hasAttributeInfo()) {
    query["AttributeInfo"] = request.getAttributeInfo();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasHealthJudgement()) {
    query["HealthJudgement"] = request.getHealthJudgement();
  }

  if (!!request.hasHealthTasksShrink()) {
    query["HealthTasks"] = request.getHealthTasksShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudGtmAddress"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudGtmAddressResponse>();
}

/**
 * @summary Modifies the basic configuration of a specified address, such as the address name, type, and value.
 *
 * @param request UpdateCloudGtmAddressRequest
 * @return UpdateCloudGtmAddressResponse
 */
UpdateCloudGtmAddressResponse Client::updateCloudGtmAddress(const UpdateCloudGtmAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudGtmAddressWithOptions(request, runtime);
}

/**
 * @summary Updates the enabled status of an address.
 *
 * @description - The service status of an address is **active** if the address is **enabled** and its health check status is **Normal**.
 * - The service status of an address is **unavailable** if the address is **disabled** or its health check status is **abnormal**.
 *
 * @param request UpdateCloudGtmAddressEnableStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudGtmAddressEnableStatusResponse
 */
UpdateCloudGtmAddressEnableStatusResponse Client::updateCloudGtmAddressEnableStatusWithOptions(const UpdateCloudGtmAddressEnableStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddressId()) {
    query["AddressId"] = request.getAddressId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnableStatus()) {
    query["EnableStatus"] = request.getEnableStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudGtmAddressEnableStatus"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudGtmAddressEnableStatusResponse>();
}

/**
 * @summary Updates the enabled status of an address.
 *
 * @description - The service status of an address is **active** if the address is **enabled** and its health check status is **Normal**.
 * - The service status of an address is **unavailable** if the address is **disabled** or its health check status is **abnormal**.
 *
 * @param request UpdateCloudGtmAddressEnableStatusRequest
 * @return UpdateCloudGtmAddressEnableStatusResponse
 */
UpdateCloudGtmAddressEnableStatusResponse Client::updateCloudGtmAddressEnableStatus(const UpdateCloudGtmAddressEnableStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudGtmAddressEnableStatusWithOptions(request, runtime);
}

/**
 * @summary Updates the failover method for an address based on the specified parameters.
 *
 * @param request UpdateCloudGtmAddressManualAvailableStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudGtmAddressManualAvailableStatusResponse
 */
UpdateCloudGtmAddressManualAvailableStatusResponse Client::updateCloudGtmAddressManualAvailableStatusWithOptions(const UpdateCloudGtmAddressManualAvailableStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddressId()) {
    query["AddressId"] = request.getAddressId();
  }

  if (!!request.hasAvailableMode()) {
    query["AvailableMode"] = request.getAvailableMode();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasManualAvailableStatus()) {
    query["ManualAvailableStatus"] = request.getManualAvailableStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudGtmAddressManualAvailableStatus"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudGtmAddressManualAvailableStatusResponse>();
}

/**
 * @summary Updates the failover method for an address based on the specified parameters.
 *
 * @param request UpdateCloudGtmAddressManualAvailableStatusRequest
 * @return UpdateCloudGtmAddressManualAvailableStatusResponse
 */
UpdateCloudGtmAddressManualAvailableStatusResponse Client::updateCloudGtmAddressManualAvailableStatus(const UpdateCloudGtmAddressManualAvailableStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudGtmAddressManualAvailableStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the basic configuration of an address pool.
 *
 * @param request UpdateCloudGtmAddressPoolBasicConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudGtmAddressPoolBasicConfigResponse
 */
UpdateCloudGtmAddressPoolBasicConfigResponse Client::updateCloudGtmAddressPoolBasicConfigWithOptions(const UpdateCloudGtmAddressPoolBasicConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddressPoolId()) {
    query["AddressPoolId"] = request.getAddressPoolId();
  }

  if (!!request.hasAddressPoolName()) {
    query["AddressPoolName"] = request.getAddressPoolName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasHealthJudgement()) {
    query["HealthJudgement"] = request.getHealthJudgement();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudGtmAddressPoolBasicConfig"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudGtmAddressPoolBasicConfigResponse>();
}

/**
 * @summary Modifies the basic configuration of an address pool.
 *
 * @param request UpdateCloudGtmAddressPoolBasicConfigRequest
 * @return UpdateCloudGtmAddressPoolBasicConfigResponse
 */
UpdateCloudGtmAddressPoolBasicConfigResponse Client::updateCloudGtmAddressPoolBasicConfig(const UpdateCloudGtmAddressPoolBasicConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudGtmAddressPoolBasicConfigWithOptions(request, runtime);
}

/**
 * @summary Updates the enabled status of an address pool.
 *
 * @description - An address pool is considered **active** if it is **enabled** and its health check status is **Normal**.
 * - An address pool is considered **unavailable** if it is **disabled** or its health check status is **abnormal**.
 *
 * @param request UpdateCloudGtmAddressPoolEnableStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudGtmAddressPoolEnableStatusResponse
 */
UpdateCloudGtmAddressPoolEnableStatusResponse Client::updateCloudGtmAddressPoolEnableStatusWithOptions(const UpdateCloudGtmAddressPoolEnableStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddressPoolId()) {
    query["AddressPoolId"] = request.getAddressPoolId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnableStatus()) {
    query["EnableStatus"] = request.getEnableStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudGtmAddressPoolEnableStatus"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudGtmAddressPoolEnableStatusResponse>();
}

/**
 * @summary Updates the enabled status of an address pool.
 *
 * @description - An address pool is considered **active** if it is **enabled** and its health check status is **Normal**.
 * - An address pool is considered **unavailable** if it is **disabled** or its health check status is **abnormal**.
 *
 * @param request UpdateCloudGtmAddressPoolEnableStatusRequest
 * @return UpdateCloudGtmAddressPoolEnableStatusResponse
 */
UpdateCloudGtmAddressPoolEnableStatusResponse Client::updateCloudGtmAddressPoolEnableStatus(const UpdateCloudGtmAddressPoolEnableStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudGtmAddressPoolEnableStatusWithOptions(request, runtime);
}

/**
 * @summary Updates the load balancing policy of an address pool.
 *
 * @param request UpdateCloudGtmAddressPoolLbStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudGtmAddressPoolLbStrategyResponse
 */
UpdateCloudGtmAddressPoolLbStrategyResponse Client::updateCloudGtmAddressPoolLbStrategyWithOptions(const UpdateCloudGtmAddressPoolLbStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddressLbStrategy()) {
    query["AddressLbStrategy"] = request.getAddressLbStrategy();
  }

  if (!!request.hasAddressPoolId()) {
    query["AddressPoolId"] = request.getAddressPoolId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasSequenceLbStrategyMode()) {
    query["SequenceLbStrategyMode"] = request.getSequenceLbStrategyMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudGtmAddressPoolLbStrategy"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudGtmAddressPoolLbStrategyResponse>();
}

/**
 * @summary Updates the load balancing policy of an address pool.
 *
 * @param request UpdateCloudGtmAddressPoolLbStrategyRequest
 * @return UpdateCloudGtmAddressPoolLbStrategyResponse
 */
UpdateCloudGtmAddressPoolLbStrategyResponse Client::updateCloudGtmAddressPoolLbStrategy(const UpdateCloudGtmAddressPoolLbStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudGtmAddressPoolLbStrategyWithOptions(request, runtime);
}

/**
 * @summary Updates the remarks of an address pool.
 *
 * @param request UpdateCloudGtmAddressPoolRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudGtmAddressPoolRemarkResponse
 */
UpdateCloudGtmAddressPoolRemarkResponse Client::updateCloudGtmAddressPoolRemarkWithOptions(const UpdateCloudGtmAddressPoolRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddressPoolId()) {
    query["AddressPoolId"] = request.getAddressPoolId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudGtmAddressPoolRemark"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudGtmAddressPoolRemarkResponse>();
}

/**
 * @summary Updates the remarks of an address pool.
 *
 * @param request UpdateCloudGtmAddressPoolRemarkRequest
 * @return UpdateCloudGtmAddressPoolRemarkResponse
 */
UpdateCloudGtmAddressPoolRemarkResponse Client::updateCloudGtmAddressPoolRemark(const UpdateCloudGtmAddressPoolRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudGtmAddressPoolRemarkWithOptions(request, runtime);
}

/**
 * @summary Updates the remarks for an address in Global Traffic Manager (GTM) 3.0.
 *
 * @param request UpdateCloudGtmAddressRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudGtmAddressRemarkResponse
 */
UpdateCloudGtmAddressRemarkResponse Client::updateCloudGtmAddressRemarkWithOptions(const UpdateCloudGtmAddressRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddressId()) {
    query["AddressId"] = request.getAddressId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudGtmAddressRemark"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudGtmAddressRemarkResponse>();
}

/**
 * @summary Updates the remarks for an address in Global Traffic Manager (GTM) 3.0.
 *
 * @param request UpdateCloudGtmAddressRemarkRequest
 * @return UpdateCloudGtmAddressRemarkResponse
 */
UpdateCloudGtmAddressRemarkResponse Client::updateCloudGtmAddressRemark(const UpdateCloudGtmAddressRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudGtmAddressRemarkWithOptions(request, runtime);
}

/**
 * @summary 更新全局流量管理告警设置
 *
 * @param tmpReq UpdateCloudGtmGlobalAlertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudGtmGlobalAlertResponse
 */
UpdateCloudGtmGlobalAlertResponse Client::updateCloudGtmGlobalAlertWithOptions(const UpdateCloudGtmGlobalAlertRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateCloudGtmGlobalAlertShrinkRequest request = UpdateCloudGtmGlobalAlertShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAlertConfig()) {
    request.setAlertConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAlertConfig(), "AlertConfig", "json"));
  }

  if (!!tmpReq.hasAlertGroup()) {
    request.setAlertGroupShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAlertGroup(), "AlertGroup", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAlertConfigShrink()) {
    query["AlertConfig"] = request.getAlertConfigShrink();
  }

  if (!!request.hasAlertGroupShrink()) {
    query["AlertGroup"] = request.getAlertGroupShrink();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudGtmGlobalAlert"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudGtmGlobalAlertResponse>();
}

/**
 * @summary 更新全局流量管理告警设置
 *
 * @param request UpdateCloudGtmGlobalAlertRequest
 * @return UpdateCloudGtmGlobalAlertResponse
 */
UpdateCloudGtmGlobalAlertResponse Client::updateCloudGtmGlobalAlert(const UpdateCloudGtmGlobalAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudGtmGlobalAlertWithOptions(request, runtime);
}

/**
 * @param tmpReq UpdateCloudGtmInstanceConfigAlertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudGtmInstanceConfigAlertResponse
 */
UpdateCloudGtmInstanceConfigAlertResponse Client::updateCloudGtmInstanceConfigAlertWithOptions(const UpdateCloudGtmInstanceConfigAlertRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateCloudGtmInstanceConfigAlertShrinkRequest request = UpdateCloudGtmInstanceConfigAlertShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAlertConfig()) {
    request.setAlertConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAlertConfig(), "AlertConfig", "json"));
  }

  if (!!tmpReq.hasAlertGroup()) {
    request.setAlertGroupShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAlertGroup(), "AlertGroup", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAlertConfigShrink()) {
    query["AlertConfig"] = request.getAlertConfigShrink();
  }

  if (!!request.hasAlertGroupShrink()) {
    query["AlertGroup"] = request.getAlertGroupShrink();
  }

  if (!!request.hasAlertMode()) {
    query["AlertMode"] = request.getAlertMode();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudGtmInstanceConfigAlert"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudGtmInstanceConfigAlertResponse>();
}

/**
 * @param request UpdateCloudGtmInstanceConfigAlertRequest
 * @return UpdateCloudGtmInstanceConfigAlertResponse
 */
UpdateCloudGtmInstanceConfigAlertResponse Client::updateCloudGtmInstanceConfigAlert(const UpdateCloudGtmInstanceConfigAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudGtmInstanceConfigAlertWithOptions(request, runtime);
}

/**
 * @summary Updates the global TTL configuration of a Global Traffic Manager (GTM) 3.0 instance based on the specified parameters.
 *
 * @param request UpdateCloudGtmInstanceConfigBasicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudGtmInstanceConfigBasicResponse
 */
UpdateCloudGtmInstanceConfigBasicResponse Client::updateCloudGtmInstanceConfigBasicWithOptions(const UpdateCloudGtmInstanceConfigBasicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScheduleHostname()) {
    query["ScheduleHostname"] = request.getScheduleHostname();
  }

  if (!!request.hasScheduleZoneName()) {
    query["ScheduleZoneName"] = request.getScheduleZoneName();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudGtmInstanceConfigBasic"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudGtmInstanceConfigBasicResponse>();
}

/**
 * @summary Updates the global TTL configuration of a Global Traffic Manager (GTM) 3.0 instance based on the specified parameters.
 *
 * @param request UpdateCloudGtmInstanceConfigBasicRequest
 * @return UpdateCloudGtmInstanceConfigBasicResponse
 */
UpdateCloudGtmInstanceConfigBasicResponse Client::updateCloudGtmInstanceConfigBasic(const UpdateCloudGtmInstanceConfigBasicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudGtmInstanceConfigBasicWithOptions(request, runtime);
}

/**
 * @summary Updates the enablement status of an instance configuration based on the input parameters.
 *
 * @description - If a domain name is **enabled** and its health status is **Normal**, the service associated with the access domain name is **active**.
 * - If a domain name is **disabled** or its health status is **abnormal**, the service associated with the access domain name is **unavailable**.
 *
 * @param request UpdateCloudGtmInstanceConfigEnableStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudGtmInstanceConfigEnableStatusResponse
 */
UpdateCloudGtmInstanceConfigEnableStatusResponse Client::updateCloudGtmInstanceConfigEnableStatusWithOptions(const UpdateCloudGtmInstanceConfigEnableStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasEnableStatus()) {
    query["EnableStatus"] = request.getEnableStatus();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudGtmInstanceConfigEnableStatus"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudGtmInstanceConfigEnableStatusResponse>();
}

/**
 * @summary Updates the enablement status of an instance configuration based on the input parameters.
 *
 * @description - If a domain name is **enabled** and its health status is **Normal**, the service associated with the access domain name is **active**.
 * - If a domain name is **disabled** or its health status is **abnormal**, the service associated with the access domain name is **unavailable**.
 *
 * @param request UpdateCloudGtmInstanceConfigEnableStatusRequest
 * @return UpdateCloudGtmInstanceConfigEnableStatusResponse
 */
UpdateCloudGtmInstanceConfigEnableStatusResponse Client::updateCloudGtmInstanceConfigEnableStatus(const UpdateCloudGtmInstanceConfigEnableStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudGtmInstanceConfigEnableStatusWithOptions(request, runtime);
}

/**
 * @summary Updates the load balancing policy for an instance configuration.
 *
 * @param request UpdateCloudGtmInstanceConfigLbStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudGtmInstanceConfigLbStrategyResponse
 */
UpdateCloudGtmInstanceConfigLbStrategyResponse Client::updateCloudGtmInstanceConfigLbStrategyWithOptions(const UpdateCloudGtmInstanceConfigLbStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasAddressPoolLbStrategy()) {
    query["AddressPoolLbStrategy"] = request.getAddressPoolLbStrategy();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSequenceLbStrategyMode()) {
    query["SequenceLbStrategyMode"] = request.getSequenceLbStrategyMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudGtmInstanceConfigLbStrategy"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudGtmInstanceConfigLbStrategyResponse>();
}

/**
 * @summary Updates the load balancing policy for an instance configuration.
 *
 * @param request UpdateCloudGtmInstanceConfigLbStrategyRequest
 * @return UpdateCloudGtmInstanceConfigLbStrategyResponse
 */
UpdateCloudGtmInstanceConfigLbStrategyResponse Client::updateCloudGtmInstanceConfigLbStrategy(const UpdateCloudGtmInstanceConfigLbStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudGtmInstanceConfigLbStrategyWithOptions(request, runtime);
}

/**
 * @summary Updates the remarks for an instance configuration.
 *
 * @param request UpdateCloudGtmInstanceConfigRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudGtmInstanceConfigRemarkResponse
 */
UpdateCloudGtmInstanceConfigRemarkResponse Client::updateCloudGtmInstanceConfigRemarkWithOptions(const UpdateCloudGtmInstanceConfigRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudGtmInstanceConfigRemark"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudGtmInstanceConfigRemarkResponse>();
}

/**
 * @summary Updates the remarks for an instance configuration.
 *
 * @param request UpdateCloudGtmInstanceConfigRemarkRequest
 * @return UpdateCloudGtmInstanceConfigRemarkResponse
 */
UpdateCloudGtmInstanceConfigRemarkResponse Client::updateCloudGtmInstanceConfigRemark(const UpdateCloudGtmInstanceConfigRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudGtmInstanceConfigRemarkWithOptions(request, runtime);
}

/**
 * @param request UpdateCloudGtmInstanceNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudGtmInstanceNameResponse
 */
UpdateCloudGtmInstanceNameResponse Client::updateCloudGtmInstanceNameWithOptions(const UpdateCloudGtmInstanceNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudGtmInstanceName"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudGtmInstanceNameResponse>();
}

/**
 * @param request UpdateCloudGtmInstanceNameRequest
 * @return UpdateCloudGtmInstanceNameResponse
 */
UpdateCloudGtmInstanceNameResponse Client::updateCloudGtmInstanceName(const UpdateCloudGtmInstanceNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudGtmInstanceNameWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration of a health check template.
 *
 * @param tmpReq UpdateCloudGtmMonitorTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudGtmMonitorTemplateResponse
 */
UpdateCloudGtmMonitorTemplateResponse Client::updateCloudGtmMonitorTemplateWithOptions(const UpdateCloudGtmMonitorTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateCloudGtmMonitorTemplateShrinkRequest request = UpdateCloudGtmMonitorTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIspCityNodes()) {
    request.setIspCityNodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIspCityNodes(), "IspCityNodes", "json"));
  }

  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEvaluationCount()) {
    query["EvaluationCount"] = request.getEvaluationCount();
  }

  if (!!request.hasExtendInfo()) {
    query["ExtendInfo"] = request.getExtendInfo();
  }

  if (!!request.hasFailureRate()) {
    query["FailureRate"] = request.getFailureRate();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspCityNodesShrink()) {
    query["IspCityNodes"] = request.getIspCityNodesShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudGtmMonitorTemplate"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudGtmMonitorTemplateResponse>();
}

/**
 * @summary Updates the configuration of a health check template.
 *
 * @param request UpdateCloudGtmMonitorTemplateRequest
 * @return UpdateCloudGtmMonitorTemplateResponse
 */
UpdateCloudGtmMonitorTemplateResponse Client::updateCloudGtmMonitorTemplate(const UpdateCloudGtmMonitorTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudGtmMonitorTemplateWithOptions(request, runtime);
}

/**
 * @param request UpdateCloudGtmMonitorTemplateRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudGtmMonitorTemplateRemarkResponse
 */
UpdateCloudGtmMonitorTemplateRemarkResponse Client::updateCloudGtmMonitorTemplateRemarkWithOptions(const UpdateCloudGtmMonitorTemplateRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.getAcceptLanguage();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudGtmMonitorTemplateRemark"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudGtmMonitorTemplateRemarkResponse>();
}

/**
 * @param request UpdateCloudGtmMonitorTemplateRemarkRequest
 * @return UpdateCloudGtmMonitorTemplateRemarkResponse
 */
UpdateCloudGtmMonitorTemplateRemarkResponse Client::updateCloudGtmMonitorTemplateRemark(const UpdateCloudGtmMonitorTemplateRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudGtmMonitorTemplateRemarkWithOptions(request, runtime);
}

/**
 * @summary Updates a custom line specified by its unique ID.
 *
 * @description For each IP range, the value of EndIp must be greater than or equal to the value of StartIp.
 * The IP ranges of IP ranges cannot overlap across all custom lines for a domain name.
 *
 * @param request UpdateCustomLineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomLineResponse
 */
UpdateCustomLineResponse Client::updateCustomLineWithOptions(const UpdateCustomLineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIpSegment()) {
    query["IpSegment"] = request.getIpSegment();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLineId()) {
    query["LineId"] = request.getLineId();
  }

  if (!!request.hasLineName()) {
    query["LineName"] = request.getLineName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCustomLine"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomLineResponse>();
}

/**
 * @summary Updates a custom line specified by its unique ID.
 *
 * @description For each IP range, the value of EndIp must be greater than or equal to the value of StartIp.
 * The IP ranges of IP ranges cannot overlap across all custom lines for a domain name.
 *
 * @param request UpdateCustomLineRequest
 * @return UpdateCustomLineResponse
 */
UpdateCustomLineResponse Client::updateCustomLine(const UpdateCustomLineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomLineWithOptions(request, runtime);
}

/**
 * @summary Modifies the weight of a DNS record based on the specified parameters.
 *
 * @param request UpdateDNSSLBWeightRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDNSSLBWeightResponse
 */
UpdateDNSSLBWeightResponse Client::updateDNSSLBWeightWithOptions(const UpdateDNSSLBWeightRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasWeight()) {
    query["Weight"] = request.getWeight();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDNSSLBWeight"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDNSSLBWeightResponse>();
}

/**
 * @summary Modifies the weight of a DNS record based on the specified parameters.
 *
 * @param request UpdateDNSSLBWeightRequest
 * @return UpdateDNSSLBWeightResponse
 */
UpdateDNSSLBWeightResponse Client::updateDNSSLBWeight(const UpdateDNSSLBWeightRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDNSSLBWeightWithOptions(request, runtime);
}

/**
 * @summary Updates a DNS authoritative proxy domain.
 *
 * @param request UpdateDnsCacheDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDnsCacheDomainResponse
 */
UpdateDnsCacheDomainResponse Client::updateDnsCacheDomainWithOptions(const UpdateDnsCacheDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCacheTtlMax()) {
    query["CacheTtlMax"] = request.getCacheTtlMax();
  }

  if (!!request.hasCacheTtlMin()) {
    query["CacheTtlMin"] = request.getCacheTtlMin();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSourceDnsServer()) {
    query["SourceDnsServer"] = request.getSourceDnsServer();
  }

  if (!!request.hasSourceEdns()) {
    query["SourceEdns"] = request.getSourceEdns();
  }

  if (!!request.hasSourceProtocol()) {
    query["SourceProtocol"] = request.getSourceProtocol();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDnsCacheDomain"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDnsCacheDomainResponse>();
}

/**
 * @summary Updates a DNS authoritative proxy domain.
 *
 * @param request UpdateDnsCacheDomainRequest
 * @return UpdateDnsCacheDomainResponse
 */
UpdateDnsCacheDomainResponse Client::updateDnsCacheDomain(const UpdateDnsCacheDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDnsCacheDomainWithOptions(request, runtime);
}

/**
 * @summary Updates the remark for a domain name in the DNS cache.
 *
 * @param request UpdateDnsCacheDomainRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDnsCacheDomainRemarkResponse
 */
UpdateDnsCacheDomainRemarkResponse Client::updateDnsCacheDomainRemarkWithOptions(const UpdateDnsCacheDomainRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDnsCacheDomainRemark"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDnsCacheDomainRemarkResponse>();
}

/**
 * @summary Updates the remark for a domain name in the DNS cache.
 *
 * @param request UpdateDnsCacheDomainRemarkRequest
 * @return UpdateDnsCacheDomainRemarkResponse
 */
UpdateDnsCacheDomainRemarkResponse Client::updateDnsCacheDomainRemark(const UpdateDnsCacheDomainRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDnsCacheDomainRemarkWithOptions(request, runtime);
}

/**
 * @summary Updates an existing access policy.
 *
 * @param request UpdateDnsGtmAccessStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDnsGtmAccessStrategyResponse
 */
UpdateDnsGtmAccessStrategyResponse Client::updateDnsGtmAccessStrategyWithOptions(const UpdateDnsGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessMode()) {
    query["AccessMode"] = request.getAccessMode();
  }

  if (!!request.hasDefaultAddrPool()) {
    query["DefaultAddrPool"] = request.getDefaultAddrPool();
  }

  if (!!request.hasDefaultAddrPoolType()) {
    query["DefaultAddrPoolType"] = request.getDefaultAddrPoolType();
  }

  if (!!request.hasDefaultLatencyOptimization()) {
    query["DefaultLatencyOptimization"] = request.getDefaultLatencyOptimization();
  }

  if (!!request.hasDefaultLbaStrategy()) {
    query["DefaultLbaStrategy"] = request.getDefaultLbaStrategy();
  }

  if (!!request.hasDefaultMaxReturnAddrNum()) {
    query["DefaultMaxReturnAddrNum"] = request.getDefaultMaxReturnAddrNum();
  }

  if (!!request.hasDefaultMinAvailableAddrNum()) {
    query["DefaultMinAvailableAddrNum"] = request.getDefaultMinAvailableAddrNum();
  }

  if (!!request.hasFailoverAddrPool()) {
    query["FailoverAddrPool"] = request.getFailoverAddrPool();
  }

  if (!!request.hasFailoverAddrPoolType()) {
    query["FailoverAddrPoolType"] = request.getFailoverAddrPoolType();
  }

  if (!!request.hasFailoverLatencyOptimization()) {
    query["FailoverLatencyOptimization"] = request.getFailoverLatencyOptimization();
  }

  if (!!request.hasFailoverLbaStrategy()) {
    query["FailoverLbaStrategy"] = request.getFailoverLbaStrategy();
  }

  if (!!request.hasFailoverMaxReturnAddrNum()) {
    query["FailoverMaxReturnAddrNum"] = request.getFailoverMaxReturnAddrNum();
  }

  if (!!request.hasFailoverMinAvailableAddrNum()) {
    query["FailoverMinAvailableAddrNum"] = request.getFailoverMinAvailableAddrNum();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLines()) {
    query["Lines"] = request.getLines();
  }

  if (!!request.hasStrategyId()) {
    query["StrategyId"] = request.getStrategyId();
  }

  if (!!request.hasStrategyName()) {
    query["StrategyName"] = request.getStrategyName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDnsGtmAccessStrategy"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDnsGtmAccessStrategyResponse>();
}

/**
 * @summary Updates an existing access policy.
 *
 * @param request UpdateDnsGtmAccessStrategyRequest
 * @return UpdateDnsGtmAccessStrategyResponse
 */
UpdateDnsGtmAccessStrategyResponse Client::updateDnsGtmAccessStrategy(const UpdateDnsGtmAccessStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDnsGtmAccessStrategyWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration of an address pool.
 *
 * @param request UpdateDnsGtmAddressPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDnsGtmAddressPoolResponse
 */
UpdateDnsGtmAddressPoolResponse Client::updateDnsGtmAddressPoolWithOptions(const UpdateDnsGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddr()) {
    query["Addr"] = request.getAddr();
  }

  if (!!request.hasAddrPoolId()) {
    query["AddrPoolId"] = request.getAddrPoolId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLbaStrategy()) {
    query["LbaStrategy"] = request.getLbaStrategy();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDnsGtmAddressPool"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDnsGtmAddressPoolResponse>();
}

/**
 * @summary Updates the configuration of an address pool.
 *
 * @param request UpdateDnsGtmAddressPoolRequest
 * @return UpdateDnsGtmAddressPoolResponse
 */
UpdateDnsGtmAddressPoolResponse Client::updateDnsGtmAddressPool(const UpdateDnsGtmAddressPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDnsGtmAddressPoolWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration of a Global Traffic Manager (GTM) instance.
 *
 * @param request UpdateDnsGtmInstanceGlobalConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDnsGtmInstanceGlobalConfigResponse
 */
UpdateDnsGtmInstanceGlobalConfigResponse Client::updateDnsGtmInstanceGlobalConfigWithOptions(const UpdateDnsGtmInstanceGlobalConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertConfig()) {
    query["AlertConfig"] = request.getAlertConfig();
  }

  if (!!request.hasAlertGroup()) {
    query["AlertGroup"] = request.getAlertGroup();
  }

  if (!!request.hasCnameType()) {
    query["CnameType"] = request.getCnameType();
  }

  if (!!request.hasForceUpdate()) {
    query["ForceUpdate"] = request.getForceUpdate();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasPublicCnameMode()) {
    query["PublicCnameMode"] = request.getPublicCnameMode();
  }

  if (!!request.hasPublicRr()) {
    query["PublicRr"] = request.getPublicRr();
  }

  if (!!request.hasPublicUserDomainName()) {
    query["PublicUserDomainName"] = request.getPublicUserDomainName();
  }

  if (!!request.hasPublicZoneName()) {
    query["PublicZoneName"] = request.getPublicZoneName();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDnsGtmInstanceGlobalConfig"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDnsGtmInstanceGlobalConfigResponse>();
}

/**
 * @summary Updates the configuration of a Global Traffic Manager (GTM) instance.
 *
 * @param request UpdateDnsGtmInstanceGlobalConfigRequest
 * @return UpdateDnsGtmInstanceGlobalConfigResponse
 */
UpdateDnsGtmInstanceGlobalConfigResponse Client::updateDnsGtmInstanceGlobalConfig(const UpdateDnsGtmInstanceGlobalConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDnsGtmInstanceGlobalConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies a health check configuration.
 *
 * @param request UpdateDnsGtmMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDnsGtmMonitorResponse
 */
UpdateDnsGtmMonitorResponse Client::updateDnsGtmMonitorWithOptions(const UpdateDnsGtmMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEvaluationCount()) {
    query["EvaluationCount"] = request.getEvaluationCount();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspCityNode()) {
    query["IspCityNode"] = request.getIspCityNode();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMonitorConfigId()) {
    query["MonitorConfigId"] = request.getMonitorConfigId();
  }

  if (!!request.hasMonitorExtendInfo()) {
    query["MonitorExtendInfo"] = request.getMonitorExtendInfo();
  }

  if (!!request.hasProtocolType()) {
    query["ProtocolType"] = request.getProtocolType();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDnsGtmMonitor"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDnsGtmMonitorResponse>();
}

/**
 * @summary Modifies a health check configuration.
 *
 * @param request UpdateDnsGtmMonitorRequest
 * @return UpdateDnsGtmMonitorResponse
 */
UpdateDnsGtmMonitorResponse Client::updateDnsGtmMonitor(const UpdateDnsGtmMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDnsGtmMonitorWithOptions(request, runtime);
}

/**
 * @summary Modifies the name of a domain name group.
 *
 * @description This operation modifies the name of an existing domain name group.
 *
 * @param request UpdateDomainGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDomainGroupResponse
 */
UpdateDomainGroupResponse Client::updateDomainGroupWithOptions(const UpdateDomainGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupId()) {
    query["GroupId"] = request.getGroupId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDomainGroup"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDomainGroupResponse>();
}

/**
 * @summary Modifies the name of a domain name group.
 *
 * @description This operation modifies the name of an existing domain name group.
 *
 * @param request UpdateDomainGroupRequest
 * @return UpdateDomainGroupResponse
 */
UpdateDomainGroupResponse Client::updateDomainGroup(const UpdateDomainGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDomainGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies a DNS record based on the specified parameters.
 *
 * @param request UpdateDomainRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDomainRecordResponse
 */
UpdateDomainRecordResponse Client::updateDomainRecordWithOptions(const UpdateDomainRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLine()) {
    query["Line"] = request.getLine();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasRR()) {
    query["RR"] = request.getRR();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  if (!!request.hasTTL()) {
    query["TTL"] = request.getTTL();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDomainRecord"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDomainRecordResponse>();
}

/**
 * @summary Modifies a DNS record based on the specified parameters.
 *
 * @param request UpdateDomainRecordRequest
 * @return UpdateDomainRecordResponse
 */
UpdateDomainRecordResponse Client::updateDomainRecord(const UpdateDomainRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDomainRecordWithOptions(request, runtime);
}

/**
 * @summary Updates the remarks of a DNS record.
 *
 * @param request UpdateDomainRecordRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDomainRecordRemarkResponse
 */
UpdateDomainRecordRemarkResponse Client::updateDomainRecordRemarkWithOptions(const UpdateDomainRecordRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasUserClientIp()) {
    query["UserClientIp"] = request.getUserClientIp();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDomainRecordRemark"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDomainRecordRemarkResponse>();
}

/**
 * @summary Updates the remarks of a DNS record.
 *
 * @param request UpdateDomainRecordRemarkRequest
 * @return UpdateDomainRecordRemarkResponse
 */
UpdateDomainRecordRemarkResponse Client::updateDomainRecordRemark(const UpdateDomainRecordRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDomainRecordRemarkWithOptions(request, runtime);
}

/**
 * @summary Updates the remarks for a domain name.
 *
 * @param request UpdateDomainRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDomainRemarkResponse
 */
UpdateDomainRemarkResponse Client::updateDomainRemarkWithOptions(const UpdateDomainRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDomainRemark"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDomainRemarkResponse>();
}

/**
 * @summary Updates the remarks for a domain name.
 *
 * @param request UpdateDomainRemarkRequest
 * @return UpdateDomainRemarkResponse
 */
UpdateDomainRemarkResponse Client::updateDomainRemark(const UpdateDomainRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDomainRemarkWithOptions(request, runtime);
}

/**
 * @summary Updates an access policy.
 *
 * @param request UpdateGtmAccessStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGtmAccessStrategyResponse
 */
UpdateGtmAccessStrategyResponse Client::updateGtmAccessStrategyWithOptions(const UpdateGtmAccessStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessLines()) {
    query["AccessLines"] = request.getAccessLines();
  }

  if (!!request.hasDefaultAddrPoolId()) {
    query["DefaultAddrPoolId"] = request.getDefaultAddrPoolId();
  }

  if (!!request.hasFailoverAddrPoolId()) {
    query["FailoverAddrPoolId"] = request.getFailoverAddrPoolId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasStrategyId()) {
    query["StrategyId"] = request.getStrategyId();
  }

  if (!!request.hasStrategyName()) {
    query["StrategyName"] = request.getStrategyName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGtmAccessStrategy"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGtmAccessStrategyResponse>();
}

/**
 * @summary Updates an access policy.
 *
 * @param request UpdateGtmAccessStrategyRequest
 * @return UpdateGtmAccessStrategyResponse
 */
UpdateGtmAccessStrategyResponse Client::updateGtmAccessStrategy(const UpdateGtmAccessStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGtmAccessStrategyWithOptions(request, runtime);
}

/**
 * @summary Modifies an address pool.
 *
 * @param request UpdateGtmAddressPoolRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGtmAddressPoolResponse
 */
UpdateGtmAddressPoolResponse Client::updateGtmAddressPoolWithOptions(const UpdateGtmAddressPoolRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddr()) {
    query["Addr"] = request.getAddr();
  }

  if (!!request.hasAddrPoolId()) {
    query["AddrPoolId"] = request.getAddrPoolId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMinAvailableAddrNum()) {
    query["MinAvailableAddrNum"] = request.getMinAvailableAddrNum();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGtmAddressPool"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGtmAddressPoolResponse>();
}

/**
 * @summary Modifies an address pool.
 *
 * @param request UpdateGtmAddressPoolRequest
 * @return UpdateGtmAddressPoolResponse
 */
UpdateGtmAddressPoolResponse Client::updateGtmAddressPool(const UpdateGtmAddressPoolRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGtmAddressPoolWithOptions(request, runtime);
}

/**
 * @summary Updates the global configuration of a Global Traffic Manager (GTM) instance.
 *
 * @param request UpdateGtmInstanceGlobalConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGtmInstanceGlobalConfigResponse
 */
UpdateGtmInstanceGlobalConfigResponse Client::updateGtmInstanceGlobalConfigWithOptions(const UpdateGtmInstanceGlobalConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertGroup()) {
    query["AlertGroup"] = request.getAlertGroup();
  }

  if (!!request.hasCnameCustomDomainName()) {
    query["CnameCustomDomainName"] = request.getCnameCustomDomainName();
  }

  if (!!request.hasCnameMode()) {
    query["CnameMode"] = request.getCnameMode();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasLbaStrategy()) {
    query["LbaStrategy"] = request.getLbaStrategy();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
  }

  if (!!request.hasUserDomainName()) {
    query["UserDomainName"] = request.getUserDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGtmInstanceGlobalConfig"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGtmInstanceGlobalConfigResponse>();
}

/**
 * @summary Updates the global configuration of a Global Traffic Manager (GTM) instance.
 *
 * @param request UpdateGtmInstanceGlobalConfigRequest
 * @return UpdateGtmInstanceGlobalConfigResponse
 */
UpdateGtmInstanceGlobalConfigResponse Client::updateGtmInstanceGlobalConfig(const UpdateGtmInstanceGlobalConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGtmInstanceGlobalConfigWithOptions(request, runtime);
}

/**
 * @summary Updates a health check configuration.
 *
 * @param request UpdateGtmMonitorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGtmMonitorResponse
 */
UpdateGtmMonitorResponse Client::updateGtmMonitorWithOptions(const UpdateGtmMonitorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEvaluationCount()) {
    query["EvaluationCount"] = request.getEvaluationCount();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspCityNode()) {
    query["IspCityNode"] = request.getIspCityNode();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasMonitorConfigId()) {
    query["MonitorConfigId"] = request.getMonitorConfigId();
  }

  if (!!request.hasMonitorExtendInfo()) {
    query["MonitorExtendInfo"] = request.getMonitorExtendInfo();
  }

  if (!!request.hasProtocolType()) {
    query["ProtocolType"] = request.getProtocolType();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGtmMonitor"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGtmMonitorResponse>();
}

/**
 * @summary Updates a health check configuration.
 *
 * @param request UpdateGtmMonitorRequest
 * @return UpdateGtmMonitorResponse
 */
UpdateGtmMonitorResponse Client::updateGtmMonitor(const UpdateGtmMonitorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGtmMonitorWithOptions(request, runtime);
}

/**
 * @summary Updates a disaster recovery plan.
 *
 * @param request UpdateGtmRecoveryPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateGtmRecoveryPlanResponse
 */
UpdateGtmRecoveryPlanResponse Client::updateGtmRecoveryPlanWithOptions(const UpdateGtmRecoveryPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFaultAddrPool()) {
    query["FaultAddrPool"] = request.getFaultAddrPool();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRecoveryPlanId()) {
    query["RecoveryPlanId"] = request.getRecoveryPlanId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateGtmRecoveryPlan"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateGtmRecoveryPlanResponse>();
}

/**
 * @summary Updates a disaster recovery plan.
 *
 * @param request UpdateGtmRecoveryPlanRequest
 * @return UpdateGtmRecoveryPlanResponse
 */
UpdateGtmRecoveryPlanResponse Client::updateGtmRecoveryPlan(const UpdateGtmRecoveryPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateGtmRecoveryPlanWithOptions(request, runtime);
}

/**
 * @summary Modifies the configuration of a cache refresh plan.
 *
 * @param request UpdateIspFlushCacheInstanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIspFlushCacheInstanceConfigResponse
 */
UpdateIspFlushCacheInstanceConfigResponse Client::updateIspFlushCacheInstanceConfigWithOptions(const UpdateIspFlushCacheInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateIspFlushCacheInstanceConfig"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIspFlushCacheInstanceConfigResponse>();
}

/**
 * @summary Modifies the configuration of a cache refresh plan.
 *
 * @param request UpdateIspFlushCacheInstanceConfigRequest
 * @return UpdateIspFlushCacheInstanceConfigResponse
 */
UpdateIspFlushCacheInstanceConfigResponse Client::updateIspFlushCacheInstanceConfig(const UpdateIspFlushCacheInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIspFlushCacheInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies a built-in authoritative record for recursive resolution.
 *
 * @description If a DNS record is locked, it cannot be deleted.
 *
 * @param request UpdateRecursionRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecursionRecordResponse
 */
UpdateRecursionRecordResponse Client::updateRecursionRecordWithOptions(const UpdateRecursionRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  if (!!request.hasRequestSource()) {
    query["RequestSource"] = request.getRequestSource();
  }

  if (!!request.hasRr()) {
    query["Rr"] = request.getRr();
  }

  if (!!request.hasTtl()) {
    query["Ttl"] = request.getTtl();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasValue()) {
    query["Value"] = request.getValue();
  }

  if (!!request.hasWeight()) {
    query["Weight"] = request.getWeight();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRecursionRecord"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecursionRecordResponse>();
}

/**
 * @summary Modifies a built-in authoritative record for recursive resolution.
 *
 * @description If a DNS record is locked, it cannot be deleted.
 *
 * @param request UpdateRecursionRecordRequest
 * @return UpdateRecursionRecordResponse
 */
UpdateRecursionRecordResponse Client::updateRecursionRecord(const UpdateRecursionRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRecursionRecordWithOptions(request, runtime);
}

/**
 * @summary Updates the enable status of a recursion record.
 *
 * @param request UpdateRecursionRecordEnableStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecursionRecordEnableStatusResponse
 */
UpdateRecursionRecordEnableStatusResponse Client::updateRecursionRecordEnableStatusWithOptions(const UpdateRecursionRecordEnableStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnableStatus()) {
    query["EnableStatus"] = request.getEnableStatus();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRecursionRecordEnableStatus"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecursionRecordEnableStatusResponse>();
}

/**
 * @summary Updates the enable status of a recursion record.
 *
 * @param request UpdateRecursionRecordEnableStatusRequest
 * @return UpdateRecursionRecordEnableStatusResponse
 */
UpdateRecursionRecordEnableStatusResponse Client::updateRecursionRecordEnableStatus(const UpdateRecursionRecordEnableStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRecursionRecordEnableStatusWithOptions(request, runtime);
}

/**
 * @summary Updates the remarks for a built-in authoritative record in HTTPDNS.
 *
 * @param request UpdateRecursionRecordRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecursionRecordRemarkResponse
 */
UpdateRecursionRecordRemarkResponse Client::updateRecursionRecordRemarkWithOptions(const UpdateRecursionRecordRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRecursionRecordRemark"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecursionRecordRemarkResponse>();
}

/**
 * @summary Updates the remarks for a built-in authoritative record in HTTPDNS.
 *
 * @param request UpdateRecursionRecordRemarkRequest
 * @return UpdateRecursionRecordRemarkResponse
 */
UpdateRecursionRecordRemarkResponse Client::updateRecursionRecordRemark(const UpdateRecursionRecordRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRecursionRecordRemarkWithOptions(request, runtime);
}

/**
 * @summary Updates the weight of a DNS record for recursive resolution.
 *
 * @param request UpdateRecursionRecordWeightRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecursionRecordWeightResponse
 */
UpdateRecursionRecordWeightResponse Client::updateRecursionRecordWeightWithOptions(const UpdateRecursionRecordWeightRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRecordId()) {
    query["RecordId"] = request.getRecordId();
  }

  if (!!request.hasWeight()) {
    query["Weight"] = request.getWeight();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRecursionRecordWeight"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecursionRecordWeightResponse>();
}

/**
 * @summary Updates the weight of a DNS record for recursive resolution.
 *
 * @param request UpdateRecursionRecordWeightRequest
 * @return UpdateRecursionRecordWeightResponse
 */
UpdateRecursionRecordWeightResponse Client::updateRecursionRecordWeight(const UpdateRecursionRecordWeightRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRecursionRecordWeightWithOptions(request, runtime);
}

/**
 * @summary Updates the enabled status of the weight algorithm for a DNS record used for recursive resolution.
 *
 * @param request UpdateRecursionRecordWeightEnableStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecursionRecordWeightEnableStatusResponse
 */
UpdateRecursionRecordWeightEnableStatusResponse Client::updateRecursionRecordWeightEnableStatusWithOptions(const UpdateRecursionRecordWeightEnableStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnableStatus()) {
    query["EnableStatus"] = request.getEnableStatus();
  }

  if (!!request.hasRequestSource()) {
    query["RequestSource"] = request.getRequestSource();
  }

  if (!!request.hasRr()) {
    query["Rr"] = request.getRr();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRecursionRecordWeightEnableStatus"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecursionRecordWeightEnableStatusResponse>();
}

/**
 * @summary Updates the enabled status of the weight algorithm for a DNS record used for recursive resolution.
 *
 * @param request UpdateRecursionRecordWeightEnableStatusRequest
 * @return UpdateRecursionRecordWeightEnableStatusResponse
 */
UpdateRecursionRecordWeightEnableStatusResponse Client::updateRecursionRecordWeightEnableStatus(const UpdateRecursionRecordWeightEnableStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRecursionRecordWeightEnableStatusWithOptions(request, runtime);
}

/**
 * @summary Updates the effective scope of a built-in authoritative domain name zone in HTTPDNS.
 *
 * @param tmpReq UpdateRecursionZoneEffectiveScopeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecursionZoneEffectiveScopeResponse
 */
UpdateRecursionZoneEffectiveScopeResponse Client::updateRecursionZoneEffectiveScopeWithOptions(const UpdateRecursionZoneEffectiveScopeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateRecursionZoneEffectiveScopeShrinkRequest request = UpdateRecursionZoneEffectiveScopeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEffectiveScopes()) {
    request.setEffectiveScopesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEffectiveScopes(), "EffectiveScopes", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEffectiveScopesShrink()) {
    query["EffectiveScopes"] = request.getEffectiveScopesShrink();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRecursionZoneEffectiveScope"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecursionZoneEffectiveScopeResponse>();
}

/**
 * @summary Updates the effective scope of a built-in authoritative domain name zone in HTTPDNS.
 *
 * @param request UpdateRecursionZoneEffectiveScopeRequest
 * @return UpdateRecursionZoneEffectiveScopeResponse
 */
UpdateRecursionZoneEffectiveScopeResponse Client::updateRecursionZoneEffectiveScope(const UpdateRecursionZoneEffectiveScopeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRecursionZoneEffectiveScopeWithOptions(request, runtime);
}

/**
 * @summary Modifies the recursive proxy mode for a zone.
 *
 * @description The end IP address of each IP segment must be greater than or equal to the start IP address.
 * The IP address ranges of all IP segments for the domain name cannot overlap across custom lines.
 *
 * @param request UpdateRecursionZoneProxyPatternRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecursionZoneProxyPatternResponse
 */
UpdateRecursionZoneProxyPatternResponse Client::updateRecursionZoneProxyPatternWithOptions(const UpdateRecursionZoneProxyPatternRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasProxyPattern()) {
    query["ProxyPattern"] = request.getProxyPattern();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRecursionZoneProxyPattern"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecursionZoneProxyPatternResponse>();
}

/**
 * @summary Modifies the recursive proxy mode for a zone.
 *
 * @description The end IP address of each IP segment must be greater than or equal to the start IP address.
 * The IP address ranges of all IP segments for the domain name cannot overlap across custom lines.
 *
 * @param request UpdateRecursionZoneProxyPatternRequest
 * @return UpdateRecursionZoneProxyPatternResponse
 */
UpdateRecursionZoneProxyPatternResponse Client::updateRecursionZoneProxyPattern(const UpdateRecursionZoneProxyPatternRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRecursionZoneProxyPatternWithOptions(request, runtime);
}

/**
 * @summary Modifies the remarks for a built-in authoritative domain name zone used for recursive resolution.
 *
 * @description The end IP address of each IP segment must be greater than or equal to the start IP address.
 * For a domain name, the IP address ranges of all IP segments in all custom lines cannot overlap.
 *
 * @param request UpdateRecursionZoneRemarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecursionZoneRemarkResponse
 */
UpdateRecursionZoneRemarkResponse Client::updateRecursionZoneRemarkWithOptions(const UpdateRecursionZoneRemarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRecursionZoneRemark"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecursionZoneRemarkResponse>();
}

/**
 * @summary Modifies the remarks for a built-in authoritative domain name zone used for recursive resolution.
 *
 * @description The end IP address of each IP segment must be greater than or equal to the start IP address.
 * For a domain name, the IP address ranges of all IP segments in all custom lines cannot overlap.
 *
 * @param request UpdateRecursionZoneRemarkRequest
 * @return UpdateRecursionZoneRemarkResponse
 */
UpdateRecursionZoneRemarkResponse Client::updateRecursionZoneRemark(const UpdateRecursionZoneRemarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRecursionZoneRemarkWithOptions(request, runtime);
}

/**
 * @summary Updates the server-side status of a domain name.
 *
 * @description ## Request description
 * - This operation updates the server-side status of a domain name.
 *
 * @param request UpdateRspDomainServerProhibitStatusForGatewayRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRspDomainServerProhibitStatusForGatewayResponse
 */
UpdateRspDomainServerProhibitStatusForGatewayResponse Client::updateRspDomainServerProhibitStatusForGatewayWithOptions(const UpdateRspDomainServerProhibitStatusForGatewayRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddStatusList()) {
    query["AddStatusList"] = request.getAddStatusList();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDeleteStatusList()) {
    query["DeleteStatusList"] = request.getDeleteStatusList();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRspDomainServerProhibitStatusForGateway"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRspDomainServerProhibitStatusForGatewayResponse>();
}

/**
 * @summary Updates the server-side status of a domain name.
 *
 * @description ## Request description
 * - This operation updates the server-side status of a domain name.
 *
 * @param request UpdateRspDomainServerProhibitStatusForGatewayRequest
 * @return UpdateRspDomainServerProhibitStatusForGatewayResponse
 */
UpdateRspDomainServerProhibitStatusForGatewayResponse Client::updateRspDomainServerProhibitStatusForGateway(const UpdateRspDomainServerProhibitStatusForGatewayRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRspDomainServerProhibitStatusForGatewayWithOptions(request, runtime);
}

/**
 * @summary Updates the server-side status of a domain name.
 *
 * @description This operation updates the server-side status of a domain name.
 *
 * @param request UpdateRspDomainServerProhibitStatusForGatewayOteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRspDomainServerProhibitStatusForGatewayOteResponse
 */
UpdateRspDomainServerProhibitStatusForGatewayOteResponse Client::updateRspDomainServerProhibitStatusForGatewayOteWithOptions(const UpdateRspDomainServerProhibitStatusForGatewayOteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddStatusList()) {
    query["AddStatusList"] = request.getAddStatusList();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDeleteStatusList()) {
    query["DeleteStatusList"] = request.getDeleteStatusList();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRspDomainServerProhibitStatusForGatewayOte"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRspDomainServerProhibitStatusForGatewayOteResponse>();
}

/**
 * @summary Updates the server-side status of a domain name.
 *
 * @description This operation updates the server-side status of a domain name.
 *
 * @param request UpdateRspDomainServerProhibitStatusForGatewayOteRequest
 * @return UpdateRspDomainServerProhibitStatusForGatewayOteResponse
 */
UpdateRspDomainServerProhibitStatusForGatewayOteResponse Client::updateRspDomainServerProhibitStatusForGatewayOte(const UpdateRspDomainServerProhibitStatusForGatewayOteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRspDomainServerProhibitStatusForGatewayOteWithOptions(request, runtime);
}

/**
 * @summary Checks whether an instance hostname can be added.
 *
 * @param request ValidateDnsGtmCnameRrCanUseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidateDnsGtmCnameRrCanUseResponse
 */
ValidateDnsGtmCnameRrCanUseResponse Client::validateDnsGtmCnameRrCanUseWithOptions(const ValidateDnsGtmCnameRrCanUseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCnameMode()) {
    query["CnameMode"] = request.getCnameMode();
  }

  if (!!request.hasCnameRr()) {
    query["CnameRr"] = request.getCnameRr();
  }

  if (!!request.hasCnameType()) {
    query["CnameType"] = request.getCnameType();
  }

  if (!!request.hasCnameZone()) {
    query["CnameZone"] = request.getCnameZone();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ValidateDnsGtmCnameRrCanUse"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidateDnsGtmCnameRrCanUseResponse>();
}

/**
 * @summary Checks whether an instance hostname can be added.
 *
 * @param request ValidateDnsGtmCnameRrCanUseRequest
 * @return ValidateDnsGtmCnameRrCanUseResponse
 */
ValidateDnsGtmCnameRrCanUseResponse Client::validateDnsGtmCnameRrCanUse(const ValidateDnsGtmCnameRrCanUseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return validateDnsGtmCnameRrCanUseWithOptions(request, runtime);
}

/**
 * @summary Validates a UDP IP address segment for Public DNS.
 *
 * @param request ValidatePdnsUdpIpSegmentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidatePdnsUdpIpSegmentResponse
 */
ValidatePdnsUdpIpSegmentResponse Client::validatePdnsUdpIpSegmentWithOptions(const ValidatePdnsUdpIpSegmentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasIpToken()) {
    query["IpToken"] = request.getIpToken();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ValidatePdnsUdpIpSegment"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidatePdnsUdpIpSegmentResponse>();
}

/**
 * @summary Validates a UDP IP address segment for Public DNS.
 *
 * @param request ValidatePdnsUdpIpSegmentRequest
 * @return ValidatePdnsUdpIpSegmentResponse
 */
ValidatePdnsUdpIpSegmentResponse Client::validatePdnsUdpIpSegment(const ValidatePdnsUdpIpSegmentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return validatePdnsUdpIpSegmentWithOptions(request, runtime);
}

/**
 * @summary Verifies DNS records.
 *
 * @param request VerifyAtiAgentDnsRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyAtiAgentDnsRecordsResponse
 */
VerifyAtiAgentDnsRecordsResponse Client::verifyAtiAgentDnsRecordsWithOptions(const VerifyAtiAgentDnsRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentRegisterInfoId()) {
    query["AgentRegisterInfoId"] = request.getAgentRegisterInfoId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyAtiAgentDnsRecords"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyAtiAgentDnsRecordsResponse>();
}

/**
 * @summary Verifies DNS records.
 *
 * @param request VerifyAtiAgentDnsRecordsRequest
 * @return VerifyAtiAgentDnsRecordsResponse
 */
VerifyAtiAgentDnsRecordsResponse Client::verifyAtiAgentDnsRecords(const VerifyAtiAgentDnsRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyAtiAgentDnsRecordsWithOptions(request, runtime);
}

/**
 * @summary 触发 ACME 预检
 *
 * @param request VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyAtiAgentRegisterInfoAcmeChallengeRecordResponse
 */
VerifyAtiAgentRegisterInfoAcmeChallengeRecordResponse Client::verifyAtiAgentRegisterInfoAcmeChallengeRecordWithOptions(const VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentRegisterInfoId()) {
    query["AgentRegisterInfoId"] = request.getAgentRegisterInfoId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyAtiAgentRegisterInfoAcmeChallengeRecord"},
    {"version" , "2015-01-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyAtiAgentRegisterInfoAcmeChallengeRecordResponse>();
}

/**
 * @summary 触发 ACME 预检
 *
 * @param request VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest
 * @return VerifyAtiAgentRegisterInfoAcmeChallengeRecordResponse
 */
VerifyAtiAgentRegisterInfoAcmeChallengeRecordResponse Client::verifyAtiAgentRegisterInfoAcmeChallengeRecord(const VerifyAtiAgentRegisterInfoAcmeChallengeRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyAtiAgentRegisterInfoAcmeChallengeRecordWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Alidns20150109