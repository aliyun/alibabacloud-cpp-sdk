#include <darabonba/Core.hpp>
#include <alibabacloud/MarketingEvent20210101.hpp>
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
using namespace AlibabaCloud::MarketingEvent20210101::Models;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{

AlibabaCloud::MarketingEvent20210101::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("marketing_event", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @param request AddSumRecordFlowPopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSumRecordFlowPopResponse
 */
AddSumRecordFlowPopResponse Client::addSumRecordFlowPopWithOptions(const AddSumRecordFlowPopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActivityId()) {
    query["ActivityId"] = request.activityId();
  }

  if (!!request.hasCode()) {
    query["Code"] = request.code();
  }

  if (!!request.hasConferenceName()) {
    query["ConferenceName"] = request.conferenceName();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasEntryName()) {
    query["EntryName"] = request.entryName();
  }

  if (!!request.hasIdcard()) {
    query["Idcard"] = request.idcard();
  }

  if (!!request.hasSignTime()) {
    query["SignTime"] = request.signTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddSumRecordFlowPop"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSumRecordFlowPopResponse>();
}

/**
 * @param request AddSumRecordFlowPopRequest
 * @return AddSumRecordFlowPopResponse
 */
AddSumRecordFlowPopResponse Client::addSumRecordFlowPop(const AddSumRecordFlowPopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSumRecordFlowPopWithOptions(request, runtime);
}

/**
 * @param request BindExhibitorRfidPopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindExhibitorRfidPopResponse
 */
BindExhibitorRfidPopResponse Client::bindExhibitorRfidPopWithOptions(const BindExhibitorRfidPopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActivityId()) {
    query["ActivityId"] = request.activityId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasGmtCreate()) {
    query["GmtCreate"] = request.gmtCreate();
  }

  if (!!request.hasGmtModified()) {
    query["GmtModified"] = request.gmtModified();
  }

  if (!!request.hasGuestTicketRecordId()) {
    query["GuestTicketRecordId"] = request.guestTicketRecordId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasRfid()) {
    query["Rfid"] = request.rfid();
  }

  if (!!request.hasTicketCode()) {
    query["TicketCode"] = request.ticketCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindExhibitorRfidPop"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindExhibitorRfidPopResponse>();
}

/**
 * @param request BindExhibitorRfidPopRequest
 * @return BindExhibitorRfidPopResponse
 */
BindExhibitorRfidPopResponse Client::bindExhibitorRfidPop(const BindExhibitorRfidPopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindExhibitorRfidPopWithOptions(request, runtime);
}

/**
 * @param request BindGuestRfidPopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindGuestRfidPopResponse
 */
BindGuestRfidPopResponse Client::bindGuestRfidPopWithOptions(const BindGuestRfidPopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActivityId()) {
    query["ActivityId"] = request.activityId();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasGmtCreate()) {
    query["GmtCreate"] = request.gmtCreate();
  }

  if (!!request.hasGmtModified()) {
    query["GmtModified"] = request.gmtModified();
  }

  if (!!request.hasGuestTicketRecordId()) {
    query["GuestTicketRecordId"] = request.guestTicketRecordId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasRfid()) {
    query["Rfid"] = request.rfid();
  }

  if (!!request.hasTicketCode()) {
    query["TicketCode"] = request.ticketCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindGuestRfidPop"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindGuestRfidPopResponse>();
}

/**
 * @param request BindGuestRfidPopRequest
 * @return BindGuestRfidPopResponse
 */
BindGuestRfidPopResponse Client::bindGuestRfidPop(const BindGuestRfidPopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindGuestRfidPopWithOptions(request, runtime);
}

/**
 * @param request CheckNFCBindPopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckNFCBindPopResponse
 */
CheckNFCBindPopResponse Client::checkNFCBindPopWithOptions(const CheckNFCBindPopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActivityId()) {
    query["ActivityId"] = request.activityId();
  }

  if (!!request.hasNfcId()) {
    query["NfcId"] = request.nfcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckNFCBindPop"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckNFCBindPopResponse>();
}

/**
 * @param request CheckNFCBindPopRequest
 * @return CheckNFCBindPopResponse
 */
CheckNFCBindPopResponse Client::checkNFCBindPop(const CheckNFCBindPopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkNFCBindPopWithOptions(request, runtime);
}

/**
 * @summary 拉取领证人员记录
 *
 * @param request FindGuestCredentialsRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FindGuestCredentialsRecordResponse
 */
FindGuestCredentialsRecordResponse Client::findGuestCredentialsRecordWithOptions(const FindGuestCredentialsRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActivityId()) {
    query["ActivityId"] = request.activityId();
  }

  if (!!request.hasDateTimeString()) {
    query["DateTimeString"] = request.dateTimeString();
  }

  if (!!request.hasEndDateTime()) {
    query["EndDateTime"] = request.endDateTime();
  }

  if (!!request.hasStartDateTime()) {
    query["StartDateTime"] = request.startDateTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FindGuestCredentialsRecord"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FindGuestCredentialsRecordResponse>();
}

/**
 * @summary 拉取领证人员记录
 *
 * @param request FindGuestCredentialsRecordRequest
 * @return FindGuestCredentialsRecordResponse
 */
FindGuestCredentialsRecordResponse Client::findGuestCredentialsRecord(const FindGuestCredentialsRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return findGuestCredentialsRecordWithOptions(request, runtime);
}

/**
 * @summary 云栖大会获取取票人信息list接口
 *
 * @param request FindGuestTicketRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FindGuestTicketRecordResponse
 */
FindGuestTicketRecordResponse Client::findGuestTicketRecordWithOptions(const FindGuestTicketRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActivityId()) {
    query["ActivityId"] = request.activityId();
  }

  if (!!request.hasDateTimeString()) {
    query["DateTimeString"] = request.dateTimeString();
  }

  if (!!request.hasEndDateTime()) {
    query["EndDateTime"] = request.endDateTime();
  }

  if (!!request.hasStartDateTime()) {
    query["StartDateTime"] = request.startDateTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FindGuestTicketRecord"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FindGuestTicketRecordResponse>();
}

/**
 * @summary 云栖大会获取取票人信息list接口
 *
 * @param request FindGuestTicketRecordRequest
 * @return FindGuestTicketRecordResponse
 */
FindGuestTicketRecordResponse Client::findGuestTicketRecord(const FindGuestTicketRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return findGuestTicketRecordWithOptions(request, runtime);
}

/**
 * @param request QueryAllActivityInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAllActivityInfoResponse
 */
QueryAllActivityInfoResponse Client::queryAllActivityInfoWithOptions(const QueryAllActivityInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAllActivityInfo"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAllActivityInfoResponse>();
}

/**
 * @param request QueryAllActivityInfoRequest
 * @return QueryAllActivityInfoResponse
 */
QueryAllActivityInfoResponse Client::queryAllActivityInfo(const QueryAllActivityInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAllActivityInfoWithOptions(request, runtime);
}

/**
 * @param request QueryOrderSessionListPopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryOrderSessionListPopResponse
 */
QueryOrderSessionListPopResponse Client::queryOrderSessionListPopWithOptions(const QueryOrderSessionListPopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActivityId()) {
    query["ActivityId"] = request.activityId();
  }

  if (!!request.hasNfcId()) {
    query["NfcId"] = request.nfcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryOrderSessionListPop"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryOrderSessionListPopResponse>();
}

/**
 * @param request QueryOrderSessionListPopRequest
 * @return QueryOrderSessionListPopResponse
 */
QueryOrderSessionListPopResponse Client::queryOrderSessionListPop(const QueryOrderSessionListPopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryOrderSessionListPopWithOptions(request, runtime);
}

/**
 * @param request QuerySessionByActivityIdPopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySessionByActivityIdPopResponse
 */
QuerySessionByActivityIdPopResponse Client::querySessionByActivityIdPopWithOptions(const QuerySessionByActivityIdPopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActivityId()) {
    query["ActivityId"] = request.activityId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySessionByActivityIdPop"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySessionByActivityIdPopResponse>();
}

/**
 * @param request QuerySessionByActivityIdPopRequest
 * @return QuerySessionByActivityIdPopResponse
 */
QuerySessionByActivityIdPopResponse Client::querySessionByActivityIdPop(const QuerySessionByActivityIdPopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySessionByActivityIdPopWithOptions(request, runtime);
}

/**
 * @param request QuerySessionListPopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySessionListPopResponse
 */
QuerySessionListPopResponse Client::querySessionListPopWithOptions(const QuerySessionListPopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActivityId()) {
    query["ActivityId"] = request.activityId();
  }

  if (!!request.hasNfcId()) {
    query["NfcId"] = request.nfcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySessionListPop"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySessionListPopResponse>();
}

/**
 * @param request QuerySessionListPopRequest
 * @return QuerySessionListPopResponse
 */
QuerySessionListPopResponse Client::querySessionListPop(const QuerySessionListPopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySessionListPopWithOptions(request, runtime);
}

/**
 * @param request QuerySignInRecordPopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySignInRecordPopResponse
 */
QuerySignInRecordPopResponse Client::querySignInRecordPopWithOptions(const QuerySignInRecordPopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActivityId()) {
    query["ActivityId"] = request.activityId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySignInRecordPop"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySignInRecordPopResponse>();
}

/**
 * @param request QuerySignInRecordPopRequest
 * @return QuerySignInRecordPopResponse
 */
QuerySignInRecordPopResponse Client::querySignInRecordPop(const QuerySignInRecordPopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySignInRecordPopWithOptions(request, runtime);
}

/**
 * @param request QuerySingleActivityInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySingleActivityInfoResponse
 */
QuerySingleActivityInfoResponse Client::querySingleActivityInfoWithOptions(const QuerySingleActivityInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySingleActivityInfo"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySingleActivityInfoResponse>();
}

/**
 * @param request QuerySingleActivityInfoRequest
 * @return QuerySingleActivityInfoResponse
 */
QuerySingleActivityInfoResponse Client::querySingleActivityInfo(const QuerySingleActivityInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySingleActivityInfoWithOptions(request, runtime);
}

/**
 * @param request SyncSignInInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncSignInInfoResponse
 */
SyncSignInInfoResponse Client::syncSignInInfoWithOptions(const SyncSignInInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SyncSignInInfo"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncSignInInfoResponse>();
}

/**
 * @param request SyncSignInInfoRequest
 * @return SyncSignInInfoResponse
 */
SyncSignInInfoResponse Client::syncSignInInfo(const SyncSignInInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return syncSignInInfoWithOptions(request, runtime);
}

/**
 * @param request TicketOrCredentialsSignInPopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TicketOrCredentialsSignInPopResponse
 */
TicketOrCredentialsSignInPopResponse Client::ticketOrCredentialsSignInPopWithOptions(const TicketOrCredentialsSignInPopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActivityId()) {
    query["ActivityId"] = request.activityId();
  }

  if (!!request.hasCode()) {
    query["Code"] = request.code();
  }

  if (!!request.hasConferenceName()) {
    query["ConferenceName"] = request.conferenceName();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.deviceId();
  }

  if (!!request.hasEntryName()) {
    query["EntryName"] = request.entryName();
  }

  if (!!request.hasIdcard()) {
    query["Idcard"] = request.idcard();
  }

  if (!!request.hasSignTime()) {
    query["SignTime"] = request.signTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TicketOrCredentialsSignInPop"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TicketOrCredentialsSignInPopResponse>();
}

/**
 * @param request TicketOrCredentialsSignInPopRequest
 * @return TicketOrCredentialsSignInPopResponse
 */
TicketOrCredentialsSignInPopResponse Client::ticketOrCredentialsSignInPop(const TicketOrCredentialsSignInPopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return ticketOrCredentialsSignInPopWithOptions(request, runtime);
}

/**
 * @param request UpdateCredentialsStatusPopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCredentialsStatusPopResponse
 */
UpdateCredentialsStatusPopResponse Client::updateCredentialsStatusPopWithOptions(const UpdateCredentialsStatusPopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.code();
  }

  if (!!request.hasProxyRecipientName()) {
    query["ProxyRecipientName"] = request.proxyRecipientName();
  }

  if (!!request.hasProxyRecipientPhoneNumber()) {
    query["ProxyRecipientPhoneNumber"] = request.proxyRecipientPhoneNumber();
  }

  if (!!request.hasReceiptLocation()) {
    query["ReceiptLocation"] = request.receiptLocation();
  }

  if (!!request.hasTime()) {
    query["Time"] = request.time();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCredentialsStatusPop"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCredentialsStatusPopResponse>();
}

/**
 * @param request UpdateCredentialsStatusPopRequest
 * @return UpdateCredentialsStatusPopResponse
 */
UpdateCredentialsStatusPopResponse Client::updateCredentialsStatusPop(const UpdateCredentialsStatusPopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCredentialsStatusPopWithOptions(request, runtime);
}

/**
 * @param request UpdateTicketRecordByticketCodePopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTicketRecordByticketCodePopResponse
 */
UpdateTicketRecordByticketCodePopResponse Client::updateTicketRecordByticketCodePopWithOptions(const UpdateTicketRecordByticketCodePopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgendaId()) {
    query["AgendaId"] = request.agendaId();
  }

  if (!!request.hasCode()) {
    query["Code"] = request.code();
  }

  if (!!request.hasEvent()) {
    query["Event"] = request.event();
  }

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.sceneId();
  }

  if (!!request.hasTime()) {
    query["Time"] = request.time();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTicketRecordByticketCodePop"},
    {"version" , "2021-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTicketRecordByticketCodePopResponse>();
}

/**
 * @param request UpdateTicketRecordByticketCodePopRequest
 * @return UpdateTicketRecordByticketCodePopResponse
 */
UpdateTicketRecordByticketCodePopResponse Client::updateTicketRecordByticketCodePop(const UpdateTicketRecordByticketCodePopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTicketRecordByticketCodePopWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101