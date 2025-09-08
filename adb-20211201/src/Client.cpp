#include <darabonba/Core.hpp>
#include <alibabacloud/Adb20211201.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using namespace AlibabaCloud::Adb20211201::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Adb20211201
{

AlibabaCloud::Adb20211201::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-qingdao" , "adb.aliyuncs.com"},
    {"cn-beijing" , "adb.aliyuncs.com"},
    {"cn-hangzhou" , "adb.aliyuncs.com"},
    {"cn-shanghai" , "adb.aliyuncs.com"},
    {"cn-shenzhen" , "adb.aliyuncs.com"},
    {"cn-hongkong" , "adb.aliyuncs.com"},
    {"ap-southeast-1" , "adb.aliyuncs.com"},
    {"us-west-1" , "adb.aliyuncs.com"},
    {"us-east-1" , "adb.aliyuncs.com"},
    {"cn-hangzhou-finance" , "adb.aliyuncs.com"},
    {"cn-north-2-gov-1" , "adb.aliyuncs.com"},
    {"ap-northeast-2-pop" , "adb.ap-northeast-1.aliyuncs.com"},
    {"cn-beijing-finance-1" , "adb.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "adb.aliyuncs.com"},
    {"cn-beijing-gov-1" , "adb.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "adb.aliyuncs.com"},
    {"cn-edge-1" , "adb.aliyuncs.com"},
    {"cn-fujian" , "adb.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "adb.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "adb.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "adb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "adb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "adb.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "adb.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "adb.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "adb.aliyuncs.com"},
    {"cn-qingdao-nebula" , "adb.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "adb.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "adb.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "adb.aliyuncs.com"},
    {"cn-shanghai-inner" , "adb.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "adb.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "adb.aliyuncs.com"},
    {"cn-shenzhen-inner" , "adb.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "adb.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "adb.aliyuncs.com"},
    {"cn-wuhan" , "adb.aliyuncs.com"},
    {"cn-yushanfang" , "adb.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "adb.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "adb.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "adb.aliyuncs.com"},
    {"eu-west-1-oxs" , "adb.ap-northeast-1.aliyuncs.com"},
    {"me-east-1" , "adb.ap-northeast-1.aliyuncs.com"},
    {"rus-west-1-pop" , "adb.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("adb", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Applies for a public endpoint for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request AllocateClusterPublicConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AllocateClusterPublicConnectionResponse
 */
AllocateClusterPublicConnectionResponse Client::allocateClusterPublicConnectionWithOptions(const AllocateClusterPublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.connectionStringPrefix();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AllocateClusterPublicConnection"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AllocateClusterPublicConnectionResponse>();
}

/**
 * @summary Applies for a public endpoint for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request AllocateClusterPublicConnectionRequest
 * @return AllocateClusterPublicConnectionResponse
 */
AllocateClusterPublicConnectionResponse Client::allocateClusterPublicConnection(const AllocateClusterPublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return allocateClusterPublicConnectionWithOptions(request, runtime);
}

/**
 * @summary Applies an optimization suggestion.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ApplyAdviceByIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyAdviceByIdResponse
 */
ApplyAdviceByIdResponse Client::applyAdviceByIdWithOptions(const ApplyAdviceByIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdviceDate()) {
    query["AdviceDate"] = request.adviceDate();
  }

  if (!!request.hasAdviceId()) {
    query["AdviceId"] = request.adviceId();
  }

  if (!!request.hasApplyType()) {
    query["ApplyType"] = request.applyType();
  }

  if (!!request.hasBuildImmediately()) {
    query["BuildImmediately"] = request.buildImmediately();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApplyAdviceById"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyAdviceByIdResponse>();
}

/**
 * @summary Applies an optimization suggestion.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ApplyAdviceByIdRequest
 * @return ApplyAdviceByIdResponse
 */
ApplyAdviceByIdResponse Client::applyAdviceById(const ApplyAdviceByIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyAdviceByIdWithOptions(request, runtime);
}

/**
 * @summary Attaches an elastic network interface (ENI) to an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request AttachUserENIRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachUserENIResponse
 */
AttachUserENIResponse Client::attachUserENIWithOptions(const AttachUserENIRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachUserENI"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachUserENIResponse>();
}

/**
 * @summary Attaches an elastic network interface (ENI) to an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request AttachUserENIRequest
 * @return AttachUserENIResponse
 */
AttachUserENIResponse Client::attachUserENI(const AttachUserENIRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachUserENIWithOptions(request, runtime);
}

/**
 * @summary Applies optimization suggestions.
 *
 * @param request BatchApplyAdviceByIdListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchApplyAdviceByIdListResponse
 */
BatchApplyAdviceByIdListResponse Client::batchApplyAdviceByIdListWithOptions(const BatchApplyAdviceByIdListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdviceDate()) {
    query["AdviceDate"] = request.adviceDate();
  }

  if (!!request.hasAdviceIdList()) {
    query["AdviceIdList"] = request.adviceIdList();
  }

  if (!!request.hasApplyType()) {
    query["ApplyType"] = request.applyType();
  }

  if (!!request.hasBuildImmediately()) {
    query["BuildImmediately"] = request.buildImmediately();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchApplyAdviceByIdList"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchApplyAdviceByIdListResponse>();
}

/**
 * @summary Applies optimization suggestions.
 *
 * @param request BatchApplyAdviceByIdListRequest
 * @return BatchApplyAdviceByIdListResponse
 */
BatchApplyAdviceByIdListResponse Client::batchApplyAdviceByIdList(const BatchApplyAdviceByIdListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchApplyAdviceByIdListWithOptions(request, runtime);
}

/**
 * @summary Associates a standard account of an AnalyticDB for MySQL cluster with a Resource Access Management (RAM) user.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request BindAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindAccountResponse
 */
BindAccountResponse Client::bindAccountWithOptions(const BindAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRamUser()) {
    query["RamUser"] = request.ramUser();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindAccount"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindAccountResponse>();
}

/**
 * @summary Associates a standard account of an AnalyticDB for MySQL cluster with a Resource Access Management (RAM) user.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request BindAccountRequest
 * @return BindAccountResponse
 */
BindAccountResponse Client::bindAccount(const BindAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindAccountWithOptions(request, runtime);
}

/**
 * @summary Associates a resource group with a database account.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request BindDBResourceGroupWithUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindDBResourceGroupWithUserResponse
 */
BindDBResourceGroupWithUserResponse Client::bindDBResourceGroupWithUserWithOptions(const BindDBResourceGroupWithUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasGroupUser()) {
    query["GroupUser"] = request.groupUser();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BindDBResourceGroupWithUser"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindDBResourceGroupWithUserResponse>();
}

/**
 * @summary Associates a resource group with a database account.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request BindDBResourceGroupWithUserRequest
 * @return BindDBResourceGroupWithUserResponse
 */
BindDBResourceGroupWithUserResponse Client::bindDBResourceGroupWithUser(const BindDBResourceGroupWithUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindDBResourceGroupWithUserWithOptions(request, runtime);
}

/**
 * @summary Terminates part of the code in a Spark job.
 *
 * @param request CancelSparkReplStatementRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelSparkReplStatementResponse
 */
CancelSparkReplStatementResponse Client::cancelSparkReplStatementWithOptions(const CancelSparkReplStatementRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.sessionId();
  }

  if (!!request.hasStatementId()) {
    body["StatementId"] = request.statementId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CancelSparkReplStatement"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelSparkReplStatementResponse>();
}

/**
 * @summary Terminates part of the code in a Spark job.
 *
 * @param request CancelSparkReplStatementRequest
 * @return CancelSparkReplStatementResponse
 */
CancelSparkReplStatementResponse Client::cancelSparkReplStatement(const CancelSparkReplStatementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelSparkReplStatementWithOptions(request, runtime);
}

/**
 * @summary Cancels the execution of a Spark SQL statement.
 *
 * @param request CancelSparkWarehouseBatchSQLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelSparkWarehouseBatchSQLResponse
 */
CancelSparkWarehouseBatchSQLResponse Client::cancelSparkWarehouseBatchSQLWithOptions(const CancelSparkWarehouseBatchSQLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgency()) {
    body["Agency"] = request.agency();
  }

  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasQueryId()) {
    body["QueryId"] = request.queryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CancelSparkWarehouseBatchSQL"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelSparkWarehouseBatchSQLResponse>();
}

/**
 * @summary Cancels the execution of a Spark SQL statement.
 *
 * @param request CancelSparkWarehouseBatchSQLRequest
 * @return CancelSparkWarehouseBatchSQLResponse
 */
CancelSparkWarehouseBatchSQLResponse Client::cancelSparkWarehouseBatchSQL(const CancelSparkWarehouseBatchSQLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelSparkWarehouseBatchSQLWithOptions(request, runtime);
}

/**
 * @summary Queries whether a database account of an AnalyticDB for MySQL cluster is associated with a Resource Access Management (RAM) user.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request CheckBindRamUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckBindRamUserResponse
 */
CheckBindRamUserResponse Client::checkBindRamUserWithOptions(const CheckBindRamUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckBindRamUser"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckBindRamUserResponse>();
}

/**
 * @summary Queries whether a database account of an AnalyticDB for MySQL cluster is associated with a Resource Access Management (RAM) user.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request CheckBindRamUserRequest
 * @return CheckBindRamUserResponse
 */
CheckBindRamUserResponse Client::checkBindRamUser(const CheckBindRamUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkBindRamUserWithOptions(request, runtime);
}

/**
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request CheckSampleDataSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckSampleDataSetResponse
 */
CheckSampleDataSetResponse Client::checkSampleDataSetWithOptions(const CheckSampleDataSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckSampleDataSet"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckSampleDataSetResponse>();
}

/**
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request CheckSampleDataSetRequest
 * @return CheckSampleDataSetResponse
 */
CheckSampleDataSetResponse Client::checkSampleDataSet(const CheckSampleDataSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkSampleDataSetWithOptions(request, runtime);
}

/**
 * @summary Creates an AnalyticDB Pipeline Service (APS) job.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request CreateAPSJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAPSJobResponse
 */
CreateAPSJobResponse Client::createAPSJobWithOptions(const CreateAPSJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApsJobName()) {
    body["ApsJobName"] = request.apsJobName();
  }

  if (!!request.hasDbList()) {
    body["DbList"] = request.dbList();
  }

  if (!!request.hasDestinationEndpointInstanceID()) {
    body["DestinationEndpointInstanceID"] = request.destinationEndpointInstanceID();
  }

  if (!!request.hasDestinationEndpointPassword()) {
    body["DestinationEndpointPassword"] = request.destinationEndpointPassword();
  }

  if (!!request.hasDestinationEndpointUserName()) {
    body["DestinationEndpointUserName"] = request.destinationEndpointUserName();
  }

  if (!!request.hasPartitionList()) {
    body["PartitionList"] = request.partitionList();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasSourceEndpointInstanceID()) {
    body["SourceEndpointInstanceID"] = request.sourceEndpointInstanceID();
  }

  if (!!request.hasSourceEndpointPassword()) {
    body["SourceEndpointPassword"] = request.sourceEndpointPassword();
  }

  if (!!request.hasSourceEndpointRegion()) {
    body["SourceEndpointRegion"] = request.sourceEndpointRegion();
  }

  if (!!request.hasSourceEndpointUserName()) {
    body["SourceEndpointUserName"] = request.sourceEndpointUserName();
  }

  if (!!request.hasTargetTableMode()) {
    body["TargetTableMode"] = request.targetTableMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateAPSJob"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAPSJobResponse>();
}

/**
 * @summary Creates an AnalyticDB Pipeline Service (APS) job.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request CreateAPSJobRequest
 * @return CreateAPSJobResponse
 */
CreateAPSJobResponse Client::createAPSJob(const CreateAPSJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAPSJobWithOptions(request, runtime);
}

/**
 * @summary Creates a database account for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request CreateAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccountWithOptions(const CreateAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountDescription()) {
    query["AccountDescription"] = request.accountDescription();
  }

  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.accountPassword();
  }

  if (!!request.hasAccountType()) {
    query["AccountType"] = request.accountType();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccount"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAccountResponse>();
}

/**
 * @summary Creates a database account for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request CreateAccountRequest
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccount(const CreateAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccountWithOptions(request, runtime);
}

/**
 * @summary Creates an AnalyticDB Pipeline Service (APS) replication job.
 *
 * @param request CreateApsCopyWorkloadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApsCopyWorkloadResponse
 */
CreateApsCopyWorkloadResponse Client::createApsCopyWorkloadWithOptions(const CreateApsCopyWorkloadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDatasourceId()) {
    body["DatasourceId"] = request.datasourceId();
  }

  if (!!request.hasDbName()) {
    body["DbName"] = request.dbName();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  if (!!request.hasWorkloadId()) {
    body["WorkloadId"] = request.workloadId();
  }

  if (!!request.hasWorkloadType()) {
    body["WorkloadType"] = request.workloadType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateApsCopyWorkload"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApsCopyWorkloadResponse>();
}

/**
 * @summary Creates an AnalyticDB Pipeline Service (APS) replication job.
 *
 * @param request CreateApsCopyWorkloadRequest
 * @return CreateApsCopyWorkloadResponse
 */
CreateApsCopyWorkloadResponse Client::createApsCopyWorkload(const CreateApsCopyWorkloadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApsCopyWorkloadWithOptions(request, runtime);
}

/**
 * @summary Creates an AnalyticDB Pipeline Service (APS) data source.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param tmpReq CreateApsDatasoureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApsDatasoureResponse
 */
CreateApsDatasoureResponse Client::createApsDatasoureWithOptions(const CreateApsDatasoureRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateApsDatasoureShrinkRequest request = CreateApsDatasoureShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDatabricksInfo()) {
    request.setDatabricksInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.databricksInfo(), "DatabricksInfo", "json"));
  }

  if (!!tmpReq.hasHiveInfo()) {
    request.setHiveInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.hiveInfo(), "HiveInfo", "json"));
  }

  if (!!tmpReq.hasKafkaInfo()) {
    request.setKafkaInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.kafkaInfo(), "KafkaInfo", "json"));
  }

  if (!!tmpReq.hasPolarDBMysqlInfo()) {
    request.setPolarDBMysqlInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.polarDBMysqlInfo(), "PolarDBMysqlInfo", "json"));
  }

  if (!!tmpReq.hasPolarDBXInfo()) {
    request.setPolarDBXInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.polarDBXInfo(), "PolarDBXInfo", "json"));
  }

  if (!!tmpReq.hasRdsMysqlInfo()) {
    request.setRdsMysqlInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.rdsMysqlInfo(), "RdsMysqlInfo", "json"));
  }

  if (!!tmpReq.hasSlsInfo()) {
    request.setSlsInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.slsInfo(), "SlsInfo", "json"));
  }

  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDatabricksInfoShrink()) {
    body["DatabricksInfo"] = request.databricksInfoShrink();
  }

  if (!!request.hasDatasourceDescription()) {
    body["DatasourceDescription"] = request.datasourceDescription();
  }

  if (!!request.hasDatasourceName()) {
    body["DatasourceName"] = request.datasourceName();
  }

  if (!!request.hasDatasourceType()) {
    body["DatasourceType"] = request.datasourceType();
  }

  if (!!request.hasHiveInfoShrink()) {
    body["HiveInfo"] = request.hiveInfoShrink();
  }

  if (!!request.hasKafkaInfoShrink()) {
    body["KafkaInfo"] = request.kafkaInfoShrink();
  }

  if (!!request.hasMode()) {
    body["Mode"] = request.mode();
  }

  if (!!request.hasPolarDBMysqlInfoShrink()) {
    body["PolarDBMysqlInfo"] = request.polarDBMysqlInfoShrink();
  }

  if (!!request.hasPolarDBXInfoShrink()) {
    body["PolarDBXInfo"] = request.polarDBXInfoShrink();
  }

  if (!!request.hasRdsMysqlInfoShrink()) {
    body["RdsMysqlInfo"] = request.rdsMysqlInfoShrink();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasSlsInfoShrink()) {
    body["SlsInfo"] = request.slsInfoShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateApsDatasoure"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApsDatasoureResponse>();
}

/**
 * @summary Creates an AnalyticDB Pipeline Service (APS) data source.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request CreateApsDatasoureRequest
 * @return CreateApsDatasoureResponse
 */
CreateApsDatasoureResponse Client::createApsDatasoure(const CreateApsDatasoureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApsDatasoureWithOptions(request, runtime);
}

/**
 * @summary Creates an AnalyticDB Pipeline Service (APS) job from a Hive data source.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request CreateApsHiveJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApsHiveJobResponse
 */
CreateApsHiveJobResponse Client::createApsHiveJobWithOptions(const CreateApsHiveJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAdvancedConfig()) {
    body["AdvancedConfig"] = request.advancedConfig();
  }

  if (!!request.hasConflictStrategy()) {
    body["ConflictStrategy"] = request.conflictStrategy();
  }

  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDatasourceId()) {
    body["DatasourceId"] = request.datasourceId();
  }

  if (!!request.hasFullComputeUnit()) {
    body["FullComputeUnit"] = request.fullComputeUnit();
  }

  if (!!request.hasOssLocation()) {
    body["OssLocation"] = request.ossLocation();
  }

  if (!!request.hasParallelism()) {
    body["Parallelism"] = request.parallelism();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroup()) {
    body["ResourceGroup"] = request.resourceGroup();
  }

  if (!!request.hasSyncAllowExpression()) {
    body["SyncAllowExpression"] = request.syncAllowExpression();
  }

  if (!!request.hasSyncDenyExpression()) {
    body["SyncDenyExpression"] = request.syncDenyExpression();
  }

  if (!!request.hasTargetType()) {
    body["TargetType"] = request.targetType();
  }

  if (!!request.hasWorkloadName()) {
    body["WorkloadName"] = request.workloadName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateApsHiveJob"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApsHiveJobResponse>();
}

/**
 * @summary Creates an AnalyticDB Pipeline Service (APS) job from a Hive data source.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request CreateApsHiveJobRequest
 * @return CreateApsHiveJobResponse
 */
CreateApsHiveJobResponse Client::createApsHiveJob(const CreateApsHiveJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApsHiveJobWithOptions(request, runtime);
}

/**
 * @summary 创建Kafka到Huid的APS链路
 *
 * @param tmpReq CreateApsKafkaHudiJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApsKafkaHudiJobResponse
 */
CreateApsKafkaHudiJobResponse Client::createApsKafkaHudiJobWithOptions(const CreateApsKafkaHudiJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateApsKafkaHudiJobShrinkRequest request = CreateApsKafkaHudiJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasColumns()) {
    request.setColumnsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.columns(), "Columns", "json"));
  }

  if (!!tmpReq.hasPartitionSpecs()) {
    request.setPartitionSpecsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.partitionSpecs(), "PartitionSpecs", "json"));
  }

  json body = {};
  if (!!request.hasAcrossRole()) {
    body["AcrossRole"] = request.acrossRole();
  }

  if (!!request.hasAcrossUid()) {
    body["AcrossUid"] = request.acrossUid();
  }

  if (!!request.hasAdvancedConfig()) {
    body["AdvancedConfig"] = request.advancedConfig();
  }

  if (!!request.hasColumnsShrink()) {
    body["Columns"] = request.columnsShrink();
  }

  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDataOutputFormat()) {
    body["DataOutputFormat"] = request.dataOutputFormat();
  }

  if (!!request.hasDatasourceId()) {
    body["DatasourceId"] = request.datasourceId();
  }

  if (!!request.hasDbName()) {
    body["DbName"] = request.dbName();
  }

  if (!!request.hasFullComputeUnit()) {
    body["FullComputeUnit"] = request.fullComputeUnit();
  }

  if (!!request.hasHudiAdvancedConfig()) {
    body["HudiAdvancedConfig"] = request.hudiAdvancedConfig();
  }

  if (!!request.hasIncrementalComputeUnit()) {
    body["IncrementalComputeUnit"] = request.incrementalComputeUnit();
  }

  if (!!request.hasJsonParseLevel()) {
    body["JsonParseLevel"] = request.jsonParseLevel();
  }

  if (!!request.hasKafkaClusterId()) {
    body["KafkaClusterId"] = request.kafkaClusterId();
  }

  if (!!request.hasKafkaTopic()) {
    body["KafkaTopic"] = request.kafkaTopic();
  }

  if (!!request.hasLakehouseId()) {
    body["LakehouseId"] = request.lakehouseId();
  }

  if (!!request.hasMaxOffsetsPerTrigger()) {
    body["MaxOffsetsPerTrigger"] = request.maxOffsetsPerTrigger();
  }

  if (!!request.hasOssLocation()) {
    body["OssLocation"] = request.ossLocation();
  }

  if (!!request.hasOutputFormat()) {
    body["OutputFormat"] = request.outputFormat();
  }

  if (!!request.hasPartitionSpecsShrink()) {
    body["PartitionSpecs"] = request.partitionSpecsShrink();
  }

  if (!!request.hasPrimaryKeyDefinition()) {
    body["PrimaryKeyDefinition"] = request.primaryKeyDefinition();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroup()) {
    body["ResourceGroup"] = request.resourceGroup();
  }

  if (!!request.hasSourceRegionId()) {
    body["SourceRegionId"] = request.sourceRegionId();
  }

  if (!!request.hasStartingOffsets()) {
    body["StartingOffsets"] = request.startingOffsets();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  if (!!request.hasTargetGenerateRule()) {
    body["TargetGenerateRule"] = request.targetGenerateRule();
  }

  if (!!request.hasTargetType()) {
    body["TargetType"] = request.targetType();
  }

  if (!!request.hasWorkloadName()) {
    body["WorkloadName"] = request.workloadName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateApsKafkaHudiJob"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApsKafkaHudiJobResponse>();
}

/**
 * @summary 创建Kafka到Huid的APS链路
 *
 * @param request CreateApsKafkaHudiJobRequest
 * @return CreateApsKafkaHudiJobResponse
 */
CreateApsKafkaHudiJobResponse Client::createApsKafkaHudiJob(const CreateApsKafkaHudiJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApsKafkaHudiJobWithOptions(request, runtime);
}

/**
 * @summary Creates an AnalyticDB Pipeline Service (APS) job from Simple Log Service (SLS) to an AnalyticDB for MySQL Data Warehouse Edition cluster.
 *
 * @param tmpReq CreateApsSlsADBJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApsSlsADBJobResponse
 */
CreateApsSlsADBJobResponse Client::createApsSlsADBJobWithOptions(const CreateApsSlsADBJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateApsSlsADBJobShrinkRequest request = CreateApsSlsADBJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasColumns()) {
    request.setColumnsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.columns(), "Columns", "json"));
  }

  if (!!tmpReq.hasPartitionSpecs()) {
    request.setPartitionSpecsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.partitionSpecs(), "PartitionSpecs", "json"));
  }

  if (!!tmpReq.hasUnixTimestampConvert()) {
    request.setUnixTimestampConvertShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.unixTimestampConvert(), "UnixTimestampConvert", "json"));
  }

  json body = {};
  if (!!request.hasAcrossRole()) {
    body["AcrossRole"] = request.acrossRole();
  }

  if (!!request.hasAcrossUid()) {
    body["AcrossUid"] = request.acrossUid();
  }

  if (!!request.hasAdvancedConfig()) {
    body["AdvancedConfig"] = request.advancedConfig();
  }

  if (!!request.hasColumnsShrink()) {
    body["Columns"] = request.columnsShrink();
  }

  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDatasourceId()) {
    body["DatasourceId"] = request.datasourceId();
  }

  if (!!request.hasDbName()) {
    body["DbName"] = request.dbName();
  }

  if (!!request.hasDirtyDataHandleMode()) {
    body["DirtyDataHandleMode"] = request.dirtyDataHandleMode();
  }

  if (!!request.hasDirtyDataProcessPattern()) {
    body["DirtyDataProcessPattern"] = request.dirtyDataProcessPattern();
  }

  if (!!request.hasExactlyOnce()) {
    body["ExactlyOnce"] = request.exactlyOnce();
  }

  if (!!request.hasFullComputeUnit()) {
    body["FullComputeUnit"] = request.fullComputeUnit();
  }

  if (!!request.hasHudiAdvancedConfig()) {
    body["HudiAdvancedConfig"] = request.hudiAdvancedConfig();
  }

  if (!!request.hasIncrementalComputeUnit()) {
    body["IncrementalComputeUnit"] = request.incrementalComputeUnit();
  }

  if (!!request.hasLakehouseId()) {
    body["LakehouseId"] = request.lakehouseId();
  }

  if (!!request.hasMaxOffsetsPerTrigger()) {
    body["MaxOffsetsPerTrigger"] = request.maxOffsetsPerTrigger();
  }

  if (!!request.hasOssLocation()) {
    body["OssLocation"] = request.ossLocation();
  }

  if (!!request.hasOutputFormat()) {
    body["OutputFormat"] = request.outputFormat();
  }

  if (!!request.hasPartitionSpecsShrink()) {
    body["PartitionSpecs"] = request.partitionSpecsShrink();
  }

  if (!!request.hasPassword()) {
    body["Password"] = request.password();
  }

  if (!!request.hasPrimaryKeyDefinition()) {
    body["PrimaryKeyDefinition"] = request.primaryKeyDefinition();
  }

  if (!!request.hasProject()) {
    body["Project"] = request.project();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroup()) {
    body["ResourceGroup"] = request.resourceGroup();
  }

  if (!!request.hasSourceRegionId()) {
    body["SourceRegionId"] = request.sourceRegionId();
  }

  if (!!request.hasStartingOffsets()) {
    body["StartingOffsets"] = request.startingOffsets();
  }

  if (!!request.hasStore()) {
    body["Store"] = request.store();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  if (!!request.hasTargetGenerateRule()) {
    body["TargetGenerateRule"] = request.targetGenerateRule();
  }

  if (!!request.hasTargetType()) {
    body["TargetType"] = request.targetType();
  }

  if (!!request.hasUnixTimestampConvertShrink()) {
    body["UnixTimestampConvert"] = request.unixTimestampConvertShrink();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.userName();
  }

  if (!!request.hasWorkloadName()) {
    body["WorkloadName"] = request.workloadName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateApsSlsADBJob"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApsSlsADBJobResponse>();
}

/**
 * @summary Creates an AnalyticDB Pipeline Service (APS) job from Simple Log Service (SLS) to an AnalyticDB for MySQL Data Warehouse Edition cluster.
 *
 * @param request CreateApsSlsADBJobRequest
 * @return CreateApsSlsADBJobResponse
 */
CreateApsSlsADBJobResponse Client::createApsSlsADBJob(const CreateApsSlsADBJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApsSlsADBJobWithOptions(request, runtime);
}

/**
 * @summary Creates an AnalyticDB for MySQL Data Lakehouse Edition cluster.
 *
 * @description CreateDBCluster
 *
 * @param request CreateDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBClusterResponse
 */
CreateDBClusterResponse Client::createDBClusterWithOptions(const CreateDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.backupSetId();
  }

  if (!!request.hasCloneSourceRegionId()) {
    query["CloneSourceRegionId"] = request.cloneSourceRegionId();
  }

  if (!!request.hasComputeResource()) {
    query["ComputeResource"] = request.computeResource();
  }

  if (!!request.hasDBClusterDescription()) {
    query["DBClusterDescription"] = request.DBClusterDescription();
  }

  if (!!request.hasDBClusterNetworkType()) {
    query["DBClusterNetworkType"] = request.DBClusterNetworkType();
  }

  if (!!request.hasDBClusterVersion()) {
    query["DBClusterVersion"] = request.DBClusterVersion();
  }

  if (!!request.hasDiskEncryption()) {
    query["DiskEncryption"] = request.diskEncryption();
  }

  if (!!request.hasEnableDefaultResourcePool()) {
    query["EnableDefaultResourcePool"] = request.enableDefaultResourcePool();
  }

  if (!!request.hasKmsId()) {
    query["KmsId"] = request.kmsId();
  }

  if (!!request.hasPayType()) {
    query["PayType"] = request.payType();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasProductForm()) {
    query["ProductForm"] = request.productForm();
  }

  if (!!request.hasProductVersion()) {
    query["ProductVersion"] = request.productVersion();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReservedNodeCount()) {
    query["ReservedNodeCount"] = request.reservedNodeCount();
  }

  if (!!request.hasReservedNodeSize()) {
    query["ReservedNodeSize"] = request.reservedNodeSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasRestoreToTime()) {
    query["RestoreToTime"] = request.restoreToTime();
  }

  if (!!request.hasRestoreType()) {
    query["RestoreType"] = request.restoreType();
  }

  if (!!request.hasSecondaryVSwitchId()) {
    query["SecondaryVSwitchId"] = request.secondaryVSwitchId();
  }

  if (!!request.hasSecondaryZoneId()) {
    query["SecondaryZoneId"] = request.secondaryZoneId();
  }

  if (!!request.hasSourceDbClusterId()) {
    query["SourceDbClusterId"] = request.sourceDbClusterId();
  }

  if (!!request.hasStorageResource()) {
    query["StorageResource"] = request.storageResource();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasUsedTime()) {
    query["UsedTime"] = request.usedTime();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.VPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBCluster"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBClusterResponse>();
}

/**
 * @summary Creates an AnalyticDB for MySQL Data Lakehouse Edition cluster.
 *
 * @description CreateDBCluster
 *
 * @param request CreateDBClusterRequest
 * @return CreateDBClusterResponse
 */
CreateDBClusterResponse Client::createDBCluster(const CreateDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBClusterWithOptions(request, runtime);
}

/**
 * @summary Creates a resource group for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see Endpoints.
 *
 * @param tmpReq CreateDBResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBResourceGroupResponse
 */
CreateDBResourceGroupResponse Client::createDBResourceGroupWithOptions(const CreateDBResourceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDBResourceGroupShrinkRequest request = CreateDBResourceGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEngineParams()) {
    request.setEngineParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.engineParams(), "EngineParams", "json"));
  }

  if (!!tmpReq.hasRayConfig()) {
    request.setRayConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.rayConfig(), "RayConfig", "json"));
  }

  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.rules(), "Rules", "json"));
  }

  json query = {};
  if (!!request.hasAutoStopInterval()) {
    query["AutoStopInterval"] = request.autoStopInterval();
  }

  if (!!request.hasClusterMode()) {
    query["ClusterMode"] = request.clusterMode();
  }

  if (!!request.hasClusterSizeResource()) {
    query["ClusterSizeResource"] = request.clusterSizeResource();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEnableSpot()) {
    query["EnableSpot"] = request.enableSpot();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  if (!!request.hasEngineParamsShrink()) {
    query["EngineParams"] = request.engineParamsShrink();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.groupType();
  }

  if (!!request.hasMaxClusterCount()) {
    query["MaxClusterCount"] = request.maxClusterCount();
  }

  if (!!request.hasMaxComputeResource()) {
    query["MaxComputeResource"] = request.maxComputeResource();
  }

  if (!!request.hasMaxGpuQuantity()) {
    query["MaxGpuQuantity"] = request.maxGpuQuantity();
  }

  if (!!request.hasMinClusterCount()) {
    query["MinClusterCount"] = request.minClusterCount();
  }

  if (!!request.hasMinComputeResource()) {
    query["MinComputeResource"] = request.minComputeResource();
  }

  if (!!request.hasMinGpuQuantity()) {
    query["MinGpuQuantity"] = request.minGpuQuantity();
  }

  if (!!request.hasRayConfigShrink()) {
    query["RayConfig"] = request.rayConfigShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRulesShrink()) {
    query["Rules"] = request.rulesShrink();
  }

  if (!!request.hasSpecName()) {
    query["SpecName"] = request.specName();
  }

  if (!!request.hasTargetResourceGroupName()) {
    query["TargetResourceGroupName"] = request.targetResourceGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBResourceGroup"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBResourceGroupResponse>();
}

/**
 * @summary Creates a resource group for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see Endpoints.
 *
 * @param request CreateDBResourceGroupRequest
 * @return CreateDBResourceGroupResponse
 */
CreateDBResourceGroupResponse Client::createDBResourceGroup(const CreateDBResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a scaling plan for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request CreateElasticPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateElasticPlanResponse
 */
CreateElasticPlanResponse Client::createElasticPlanWithOptions(const CreateElasticPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoScale()) {
    query["AutoScale"] = request.autoScale();
  }

  if (!!request.hasCronExpression()) {
    query["CronExpression"] = request.cronExpression();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasElasticPlanName()) {
    query["ElasticPlanName"] = request.elasticPlanName();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.enabled();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasResourceGroupName()) {
    query["ResourceGroupName"] = request.resourceGroupName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTargetSize()) {
    query["TargetSize"] = request.targetSize();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateElasticPlan"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateElasticPlanResponse>();
}

/**
 * @summary Creates a scaling plan for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request CreateElasticPlanRequest
 * @return CreateElasticPlanResponse
 */
CreateElasticPlanResponse Client::createElasticPlan(const CreateElasticPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createElasticPlanWithOptions(request, runtime);
}

/**
 * @summary Creates a lake storage.
 *
 * @param tmpReq CreateLakeStorageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLakeStorageResponse
 */
CreateLakeStorageResponse Client::createLakeStorageWithOptions(const CreateLakeStorageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateLakeStorageShrinkRequest request = CreateLakeStorageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPermissions()) {
    request.setPermissionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.permissions(), "Permissions", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasPermissionsShrink()) {
    body["Permissions"] = request.permissionsShrink();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateLakeStorage"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLakeStorageResponse>();
}

/**
 * @summary Creates a lake storage.
 *
 * @param request CreateLakeStorageRequest
 * @return CreateLakeStorageResponse
 */
CreateLakeStorageResponse Client::createLakeStorage(const CreateLakeStorageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLakeStorageWithOptions(request, runtime);
}

/**
 * @summary Creates an Object Storage Service (OSS) subdirectory.
 *
 * @description *   General endpoint: `adb.aliyuncs.com`.
 * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request CreateOssSubDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateOssSubDirectoryResponse
 */
CreateOssSubDirectoryResponse Client::createOssSubDirectoryWithOptions(const CreateOssSubDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasPath()) {
    body["Path"] = request.path();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateOssSubDirectory"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateOssSubDirectoryResponse>();
}

/**
 * @summary Creates an Object Storage Service (OSS) subdirectory.
 *
 * @description *   General endpoint: `adb.aliyuncs.com`.
 * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request CreateOssSubDirectoryRequest
 * @return CreateOssSubDirectoryResponse
 */
CreateOssSubDirectoryResponse Client::createOssSubDirectory(const CreateOssSubDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createOssSubDirectoryWithOptions(request, runtime);
}

/**
 * @summary Creates a custom monitoring view.
 *
 * @param tmpReq CreatePerformanceViewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePerformanceViewResponse
 */
CreatePerformanceViewResponse Client::createPerformanceViewWithOptions(const CreatePerformanceViewRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePerformanceViewShrinkRequest request = CreatePerformanceViewShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasViewDetail()) {
    request.setViewDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.viewDetail(), "ViewDetail", "json"));
  }

  json query = {};
  if (!!request.hasCreateFromViewType()) {
    query["CreateFromViewType"] = request.createFromViewType();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasFillOriginViewKeys()) {
    query["FillOriginViewKeys"] = request.fillOriginViewKeys();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasViewDetailShrink()) {
    query["ViewDetail"] = request.viewDetailShrink();
  }

  if (!!request.hasViewName()) {
    query["ViewName"] = request.viewName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePerformanceView"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePerformanceViewResponse>();
}

/**
 * @summary Creates a custom monitoring view.
 *
 * @param request CreatePerformanceViewRequest
 * @return CreatePerformanceViewResponse
 */
CreatePerformanceViewResponse Client::createPerformanceView(const CreatePerformanceViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPerformanceViewWithOptions(request, runtime);
}

/**
 * @summary Creates a Spark application template.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request CreateSparkTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSparkTemplateResponse
 */
CreateSparkTemplateResponse Client::createSparkTemplateWithOptions(const CreateSparkTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasParentId()) {
    body["ParentId"] = request.parentId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateSparkTemplate"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSparkTemplateResponse>();
}

/**
 * @summary Creates a Spark application template.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request CreateSparkTemplateRequest
 * @return CreateSparkTemplateResponse
 */
CreateSparkTemplateResponse Client::createSparkTemplate(const CreateSparkTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSparkTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a database account from an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DeleteAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccountWithOptions(const DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccount"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAccountResponse>();
}

/**
 * @summary Deletes a database account from an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DeleteAccountRequest
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccount(const DeleteAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccountWithOptions(request, runtime);
}

/**
 * @summary Deletes an AnalyticDB Pipeline Service (APS) data source.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DeleteApsDatasoureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApsDatasoureResponse
 */
DeleteApsDatasoureResponse Client::deleteApsDatasoureWithOptions(const DeleteApsDatasoureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDatasourceId()) {
    body["DatasourceId"] = request.datasourceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteApsDatasoure"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApsDatasoureResponse>();
}

/**
 * @summary Deletes an AnalyticDB Pipeline Service (APS) data source.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DeleteApsDatasoureRequest
 * @return DeleteApsDatasoureResponse
 */
DeleteApsDatasoureResponse Client::deleteApsDatasoure(const DeleteApsDatasoureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApsDatasoureWithOptions(request, runtime);
}

/**
 * @summary Deletes an AnalyticDB Pipeline Service (APS) job.
 *
 * @description *   Deleting backup sets is an asynchronous operation and may require 10 to 20 minutes to complete.
 * *   You can delete up to 100 backup sets at a time. If you want to delete more than 100 backup sets, call this operation twice.
 * *   To ensure data security, the system forcibly retains one valid backup set. If you want to delete the last backup set, the system prohibits your operation.
 *
 * @param request DeleteApsJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApsJobResponse
 */
DeleteApsJobResponse Client::deleteApsJobWithOptions(const DeleteApsJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApsJobId()) {
    body["ApsJobId"] = request.apsJobId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteApsJob"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApsJobResponse>();
}

/**
 * @summary Deletes an AnalyticDB Pipeline Service (APS) job.
 *
 * @description *   Deleting backup sets is an asynchronous operation and may require 10 to 20 minutes to complete.
 * *   You can delete up to 100 backup sets at a time. If you want to delete more than 100 backup sets, call this operation twice.
 * *   To ensure data security, the system forcibly retains one valid backup set. If you want to delete the last backup set, the system prohibits your operation.
 *
 * @param request DeleteApsJobRequest
 * @return DeleteApsJobResponse
 */
DeleteApsJobResponse Client::deleteApsJob(const DeleteApsJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApsJobWithOptions(request, runtime);
}

/**
 * @summary Manually deletes backup sets.
 *
 * @description *   You can delete up to 100 backup sets at a time. If you want to delete more than 100 backup sets, call this operation twice.
 * *   To ensure data security, the system forcibly retains one valid backup set. If you want to delete the last backup set, the system prohibits your operation.
 *
 * @param request DeleteBackupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBackupsResponse
 */
DeleteBackupsResponse Client::deleteBackupsWithOptions(const DeleteBackupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupIds()) {
    query["BackupIds"] = request.backupIds();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBackups"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBackupsResponse>();
}

/**
 * @summary Manually deletes backup sets.
 *
 * @description *   You can delete up to 100 backup sets at a time. If you want to delete more than 100 backup sets, call this operation twice.
 * *   To ensure data security, the system forcibly retains one valid backup set. If you want to delete the last backup set, the system prohibits your operation.
 *
 * @param request DeleteBackupsRequest
 * @return DeleteBackupsResponse
 */
DeleteBackupsResponse Client::deleteBackups(const DeleteBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBackupsWithOptions(request, runtime);
}

/**
 * @summary Deletes an AnalyticDB for MySQL cluster.
 *
 * @description ### [](#)
 * *   You can delete only pay-as-you-go clusters.
 * *   The cluster that you want to delete must be in the Running state.
 * *   For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DeleteDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBClusterResponse
 */
DeleteDBClusterResponse Client::deleteDBClusterWithOptions(const DeleteDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBCluster"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBClusterResponse>();
}

/**
 * @summary Deletes an AnalyticDB for MySQL cluster.
 *
 * @description ### [](#)
 * *   You can delete only pay-as-you-go clusters.
 * *   The cluster that you want to delete must be in the Running state.
 * *   For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DeleteDBClusterRequest
 * @return DeleteDBClusterResponse
 */
DeleteDBClusterResponse Client::deleteDBCluster(const DeleteDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBClusterWithOptions(request, runtime);
}

/**
 * @summary Deletes a resource group from an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DeleteDBResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBResourceGroupResponse
 */
DeleteDBResourceGroupResponse Client::deleteDBResourceGroupWithOptions(const DeleteDBResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBResourceGroup"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBResourceGroupResponse>();
}

/**
 * @summary Deletes a resource group from an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DeleteDBResourceGroupRequest
 * @return DeleteDBResourceGroupResponse
 */
DeleteDBResourceGroupResponse Client::deleteDBResourceGroup(const DeleteDBResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a scaling plan from an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DeleteElasticPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteElasticPlanResponse
 */
DeleteElasticPlanResponse Client::deleteElasticPlanWithOptions(const DeleteElasticPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasElasticPlanName()) {
    query["ElasticPlanName"] = request.elasticPlanName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteElasticPlan"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteElasticPlanResponse>();
}

/**
 * @summary Deletes a scaling plan from an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DeleteElasticPlanRequest
 * @return DeleteElasticPlanResponse
 */
DeleteElasticPlanResponse Client::deleteElasticPlan(const DeleteElasticPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteElasticPlanWithOptions(request, runtime);
}

/**
 * @summary Deletes a lake storage.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DeleteLakeStorageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLakeStorageResponse
 */
DeleteLakeStorageResponse Client::deleteLakeStorageWithOptions(const DeleteLakeStorageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  json body = {};
  if (!!request.hasLakeStorageId()) {
    body["LakeStorageId"] = request.lakeStorageId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteLakeStorage"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLakeStorageResponse>();
}

/**
 * @summary Deletes a lake storage.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DeleteLakeStorageRequest
 * @return DeleteLakeStorageResponse
 */
DeleteLakeStorageResponse Client::deleteLakeStorage(const DeleteLakeStorageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLakeStorageWithOptions(request, runtime);
}

/**
 * @summary Deletes a monitoring view.
 *
 * @param request DeletePerformanceViewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePerformanceViewResponse
 */
DeletePerformanceViewResponse Client::deletePerformanceViewWithOptions(const DeletePerformanceViewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasViewName()) {
    query["ViewName"] = request.viewName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePerformanceView"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePerformanceViewResponse>();
}

/**
 * @summary Deletes a monitoring view.
 *
 * @param request DeletePerformanceViewRequest
 * @return DeletePerformanceViewResponse
 */
DeletePerformanceViewResponse Client::deletePerformanceView(const DeletePerformanceViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePerformanceViewWithOptions(request, runtime);
}

/**
 * @summary Deletes Spark template files.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request DeleteSparkTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSparkTemplateResponse
 */
DeleteSparkTemplateResponse Client::deleteSparkTemplateWithOptions(const DeleteSparkTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteSparkTemplate"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSparkTemplateResponse>();
}

/**
 * @summary Deletes Spark template files.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request DeleteSparkTemplateRequest
 * @return DeleteSparkTemplateResponse
 */
DeleteSparkTemplateResponse Client::deleteSparkTemplate(const DeleteSparkTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSparkTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes Spark template files.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request DeleteSparkTemplateFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSparkTemplateFileResponse
 */
DeleteSparkTemplateFileResponse Client::deleteSparkTemplateFileWithOptions(const DeleteSparkTemplateFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteSparkTemplateFile"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSparkTemplateFileResponse>();
}

/**
 * @summary Deletes Spark template files.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request DeleteSparkTemplateFileRequest
 * @return DeleteSparkTemplateFileResponse
 */
DeleteSparkTemplateFileResponse Client::deleteSparkTemplateFile(const DeleteSparkTemplateFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSparkTemplateFileWithOptions(request, runtime);
}

/**
 * @summary Queries a list of AnalyticDB for MySQL clusters for AnalyticDB Pipeline Service (APS) federated analytics.
 *
 * @description You can call this operation to query the performance data of a cluster over a time range based on performance metrics. The collection granularity is 30 seconds. This operation allows you to query information about slow queries, such as the SQL query duration, number of scanned rows, and amount of scanned data.
 *
 * @param request DescribeAPSADBInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAPSADBInstancesResponse
 */
DescribeAPSADBInstancesResponse Client::describeAPSADBInstancesWithOptions(const DescribeAPSADBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAPSADBInstances"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAPSADBInstancesResponse>();
}

/**
 * @summary Queries a list of AnalyticDB for MySQL clusters for AnalyticDB Pipeline Service (APS) federated analytics.
 *
 * @description You can call this operation to query the performance data of a cluster over a time range based on performance metrics. The collection granularity is 30 seconds. This operation allows you to query information about slow queries, such as the SQL query duration, number of scanned rows, and amount of scanned data.
 *
 * @param request DescribeAPSADBInstancesRequest
 * @return DescribeAPSADBInstancesResponse
 */
DescribeAPSADBInstancesResponse Client::describeAPSADBInstances(const DescribeAPSADBInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAPSADBInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries abnormal SQL patterns within a time range.
 *
 * @param request DescribeAbnormalPatternDetectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAbnormalPatternDetectionResponse
 */
DescribeAbnormalPatternDetectionResponse Client::describeAbnormalPatternDetectionWithOptions(const DescribeAbnormalPatternDetectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAbnormalPatternDetection"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAbnormalPatternDetectionResponse>();
}

/**
 * @summary Queries abnormal SQL patterns within a time range.
 *
 * @param request DescribeAbnormalPatternDetectionRequest
 * @return DescribeAbnormalPatternDetectionResponse
 */
DescribeAbnormalPatternDetectionResponse Client::describeAbnormalPatternDetection(const DescribeAbnormalPatternDetectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAbnormalPatternDetectionWithOptions(request, runtime);
}

/**
 * @summary Queries the permissions of a database account on all permission levels.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeAccountAllPrivilegesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountAllPrivilegesResponse
 */
DescribeAccountAllPrivilegesResponse Client::describeAccountAllPrivilegesWithOptions(const DescribeAccountAllPrivilegesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasMarker()) {
    query["Marker"] = request.marker();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccountAllPrivileges"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccountAllPrivilegesResponse>();
}

/**
 * @summary Queries the permissions of a database account on all permission levels.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeAccountAllPrivilegesRequest
 * @return DescribeAccountAllPrivilegesResponse
 */
DescribeAccountAllPrivilegesResponse Client::describeAccountAllPrivileges(const DescribeAccountAllPrivilegesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountAllPrivilegesWithOptions(request, runtime);
}

/**
 * @summary Queries the databases, tables, and columns on which a database account has permissions.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeAccountPrivilegeObjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountPrivilegeObjectsResponse
 */
DescribeAccountPrivilegeObjectsResponse Client::describeAccountPrivilegeObjectsWithOptions(const DescribeAccountPrivilegeObjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasColumnPrivilegeObject()) {
    query["ColumnPrivilegeObject"] = request.columnPrivilegeObject();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDatabasePrivilegeObject()) {
    query["DatabasePrivilegeObject"] = request.databasePrivilegeObject();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPrivilegeType()) {
    query["PrivilegeType"] = request.privilegeType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTablePrivilegeObject()) {
    query["TablePrivilegeObject"] = request.tablePrivilegeObject();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccountPrivilegeObjects"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccountPrivilegeObjectsResponse>();
}

/**
 * @summary Queries the databases, tables, and columns on which a database account has permissions.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeAccountPrivilegeObjectsRequest
 * @return DescribeAccountPrivilegeObjectsResponse
 */
DescribeAccountPrivilegeObjectsResponse Client::describeAccountPrivilegeObjects(const DescribeAccountPrivilegeObjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountPrivilegeObjectsWithOptions(request, runtime);
}

/**
 * @summary 获取某一ADB账户的权限
 *
 * @param request DescribeAccountPrivilegesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountPrivilegesResponse
 */
DescribeAccountPrivilegesResponse Client::describeAccountPrivilegesWithOptions(const DescribeAccountPrivilegesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasColumnPrivilegeObject()) {
    query["ColumnPrivilegeObject"] = request.columnPrivilegeObject();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDatabasePrivilegeObject()) {
    query["DatabasePrivilegeObject"] = request.databasePrivilegeObject();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPrivilegeType()) {
    query["PrivilegeType"] = request.privilegeType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTablePrivilegeObject()) {
    query["TablePrivilegeObject"] = request.tablePrivilegeObject();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccountPrivileges"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccountPrivilegesResponse>();
}

/**
 * @summary 获取某一ADB账户的权限
 *
 * @param request DescribeAccountPrivilegesRequest
 * @return DescribeAccountPrivilegesResponse
 */
DescribeAccountPrivilegesResponse Client::describeAccountPrivileges(const DescribeAccountPrivilegesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountPrivilegesWithOptions(request, runtime);
}

/**
 * @summary Queries the database accounts of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountsResponse
 */
DescribeAccountsResponse Client::describeAccountsWithOptions(const DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccounts"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccountsResponse>();
}

/**
 * @summary Queries the database accounts of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeAccountsRequest
 * @return DescribeAccountsResponse
 */
DescribeAccountsResponse Client::describeAccounts(const DescribeAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about table columns for an AnalyticDB for MySQL cluster.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeAdbMySqlColumnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdbMySqlColumnsResponse
 */
DescribeAdbMySqlColumnsResponse Client::describeAdbMySqlColumnsWithOptions(const DescribeAdbMySqlColumnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSchema()) {
    query["Schema"] = request.schema();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAdbMySqlColumns"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdbMySqlColumnsResponse>();
}

/**
 * @summary Queries the information about table columns for an AnalyticDB for MySQL cluster.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeAdbMySqlColumnsRequest
 * @return DescribeAdbMySqlColumnsResponse
 */
DescribeAdbMySqlColumnsResponse Client::describeAdbMySqlColumns(const DescribeAdbMySqlColumnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdbMySqlColumnsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about table indexes.
 *
 * @param request DescribeAdbMySqlIndexesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdbMySqlIndexesResponse
 */
DescribeAdbMySqlIndexesResponse Client::describeAdbMySqlIndexesWithOptions(const DescribeAdbMySqlIndexesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSchema()) {
    query["Schema"] = request.schema();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAdbMySqlIndexes"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdbMySqlIndexesResponse>();
}

/**
 * @summary Queries the information about table indexes.
 *
 * @param request DescribeAdbMySqlIndexesRequest
 * @return DescribeAdbMySqlIndexesResponse
 */
DescribeAdbMySqlIndexesResponse Client::describeAdbMySqlIndexes(const DescribeAdbMySqlIndexesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdbMySqlIndexesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of databases for an AnalyticDB for MySQL cluster.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeAdbMySqlSchemasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdbMySqlSchemasResponse
 */
DescribeAdbMySqlSchemasResponse Client::describeAdbMySqlSchemasWithOptions(const DescribeAdbMySqlSchemasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAdbMySqlSchemas"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdbMySqlSchemasResponse>();
}

/**
 * @summary Queries a list of databases for an AnalyticDB for MySQL cluster.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeAdbMySqlSchemasRequest
 * @return DescribeAdbMySqlSchemasResponse
 */
DescribeAdbMySqlSchemasResponse Client::describeAdbMySqlSchemas(const DescribeAdbMySqlSchemasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdbMySqlSchemasWithOptions(request, runtime);
}

/**
 * @summary Queries the information about table metadata.
 *
 * @param request DescribeAdbMySqlTableMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdbMySqlTableMetaResponse
 */
DescribeAdbMySqlTableMetaResponse Client::describeAdbMySqlTableMetaWithOptions(const DescribeAdbMySqlTableMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSchema()) {
    query["Schema"] = request.schema();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAdbMySqlTableMeta"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdbMySqlTableMetaResponse>();
}

/**
 * @summary Queries the information about table metadata.
 *
 * @param request DescribeAdbMySqlTableMetaRequest
 * @return DescribeAdbMySqlTableMetaResponse
 */
DescribeAdbMySqlTableMetaResponse Client::describeAdbMySqlTableMeta(const DescribeAdbMySqlTableMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdbMySqlTableMetaWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tables for an AnalyticDB for MySQL cluster.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeAdbMySqlTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdbMySqlTablesResponse
 */
DescribeAdbMySqlTablesResponse Client::describeAdbMySqlTablesWithOptions(const DescribeAdbMySqlTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSchema()) {
    query["Schema"] = request.schema();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAdbMySqlTables"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdbMySqlTablesResponse>();
}

/**
 * @summary Queries a list of tables for an AnalyticDB for MySQL cluster.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeAdbMySqlTablesRequest
 * @return DescribeAdbMySqlTablesResponse
 */
DescribeAdbMySqlTablesResponse Client::describeAdbMySqlTables(const DescribeAdbMySqlTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdbMySqlTablesWithOptions(request, runtime);
}

/**
 * @summary Queries whether the suggestion feature is enabled.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeAdviceServiceEnabledRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAdviceServiceEnabledResponse
 */
DescribeAdviceServiceEnabledResponse Client::describeAdviceServiceEnabledWithOptions(const DescribeAdviceServiceEnabledRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAdviceServiceEnabled"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAdviceServiceEnabledResponse>();
}

/**
 * @summary Queries whether the suggestion feature is enabled.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeAdviceServiceEnabledRequest
 * @return DescribeAdviceServiceEnabledResponse
 */
DescribeAdviceServiceEnabledResponse Client::describeAdviceServiceEnabled(const DescribeAdviceServiceEnabledRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAdviceServiceEnabledWithOptions(request, runtime);
}

/**
 * @summary Queries a list of databases, tables, and columns in an AnalyticDB for MySQL cluster.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeAllDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAllDataSourceResponse
 */
DescribeAllDataSourceResponse Client::describeAllDataSourceWithOptions(const DescribeAllDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.schemaName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAllDataSource"},
    {"version" , "2021-12-01"},
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
 * @summary Queries a list of databases, tables, and columns in an AnalyticDB for MySQL cluster.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeAllDataSourceRequest
 * @return DescribeAllDataSourceResponse
 */
DescribeAllDataSourceResponse Client::describeAllDataSource(const DescribeAllDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAllDataSourceWithOptions(request, runtime);
}

/**
 * @summary Queries the applied optimization suggestions for an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeAppliedAdvicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppliedAdvicesResponse
 */
DescribeAppliedAdvicesResponse Client::describeAppliedAdvicesWithOptions(const DescribeAppliedAdvicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdviceType()) {
    query["AdviceType"] = request.adviceType();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
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

  if (!!request.hasSchemaTableName()) {
    query["SchemaTableName"] = request.schemaTableName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppliedAdvices"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppliedAdvicesResponse>();
}

/**
 * @summary Queries the applied optimization suggestions for an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeAppliedAdvicesRequest
 * @return DescribeAppliedAdvicesResponse
 */
DescribeAppliedAdvicesResponse Client::describeAppliedAdvices(const DescribeAppliedAdvicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppliedAdvicesWithOptions(request, runtime);
}

/**
 * @summary Queries the logs of a real-time data ingestion job for an AnalyticDB for MySQL cluster.
 *
 * @description *   General endpoint: `adb.aliyuncs.com`.
 * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeApsActionLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApsActionLogsResponse
 */
DescribeApsActionLogsResponse Client::describeApsActionLogsWithOptions(const DescribeApsActionLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStage()) {
    query["Stage"] = request.stage();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  if (!!request.hasWorkloadId()) {
    query["WorkloadId"] = request.workloadId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApsActionLogs"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApsActionLogsResponse>();
}

/**
 * @summary Queries the logs of a real-time data ingestion job for an AnalyticDB for MySQL cluster.
 *
 * @description *   General endpoint: `adb.aliyuncs.com`.
 * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeApsActionLogsRequest
 * @return DescribeApsActionLogsResponse
 */
DescribeApsActionLogsResponse Client::describeApsActionLogs(const DescribeApsActionLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApsActionLogsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an AnalyticDB Pipeline Service (APS) data source.
 *
 * @param request DescribeApsDatasourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApsDatasourceResponse
 */
DescribeApsDatasourceResponse Client::describeApsDatasourceWithOptions(const DescribeApsDatasourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDatasourceId()) {
    body["DatasourceId"] = request.datasourceId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeApsDatasource"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApsDatasourceResponse>();
}

/**
 * @summary Queries the information about an AnalyticDB Pipeline Service (APS) data source.
 *
 * @param request DescribeApsDatasourceRequest
 * @return DescribeApsDatasourceResponse
 */
DescribeApsDatasourceResponse Client::describeApsDatasource(const DescribeApsDatasourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApsDatasourceWithOptions(request, runtime);
}

/**
 * @summary Queries a list of AnalyticDB Pipeline Service (APS) data sources.
 *
 * @param request DescribeApsDatasourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApsDatasourcesResponse
 */
DescribeApsDatasourcesResponse Client::describeApsDatasourcesWithOptions(const DescribeApsDatasourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDatasourceName()) {
    body["DatasourceName"] = request.datasourceName();
  }

  if (!!request.hasDatasourceType()) {
    body["DatasourceType"] = request.datasourceType();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeApsDatasources"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApsDatasourcesResponse>();
}

/**
 * @summary Queries a list of AnalyticDB Pipeline Service (APS) data sources.
 *
 * @param request DescribeApsDatasourcesRequest
 * @return DescribeApsDatasourcesResponse
 */
DescribeApsDatasourcesResponse Client::describeApsDatasources(const DescribeApsDatasourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApsDatasourcesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an AnalyticDB Pipeline Service (APS) job from a Hive data source.
 *
 * @param request DescribeApsHiveWorkloadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApsHiveWorkloadResponse
 */
DescribeApsHiveWorkloadResponse Client::describeApsHiveWorkloadWithOptions(const DescribeApsHiveWorkloadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkloadId()) {
    body["WorkloadId"] = request.workloadId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeApsHiveWorkload"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApsHiveWorkloadResponse>();
}

/**
 * @summary Queries the information about an AnalyticDB Pipeline Service (APS) job from a Hive data source.
 *
 * @param request DescribeApsHiveWorkloadRequest
 * @return DescribeApsHiveWorkloadResponse
 */
DescribeApsHiveWorkloadResponse Client::describeApsHiveWorkload(const DescribeApsHiveWorkloadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApsHiveWorkloadWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an AnalyticDB Pipeline Service (APS) job.
 *
 * @param request DescribeApsJobDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApsJobDetailResponse
 */
DescribeApsJobDetailResponse Client::describeApsJobDetailWithOptions(const DescribeApsJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApsJobId()) {
    body["ApsJobId"] = request.apsJobId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeApsJobDetail"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApsJobDetailResponse>();
}

/**
 * @summary Queries the information about an AnalyticDB Pipeline Service (APS) job.
 *
 * @param request DescribeApsJobDetailRequest
 * @return DescribeApsJobDetailResponse
 */
DescribeApsJobDetailResponse Client::describeApsJobDetail(const DescribeApsJobDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApsJobDetailWithOptions(request, runtime);
}

/**
 * @summary Queries a list of AnalyticDB Pipeline Service (APS) jobs.
 *
 * @param request DescribeApsJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApsJobsResponse
 */
DescribeApsJobsResponse Client::describeApsJobsWithOptions(const DescribeApsJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApsJobName()) {
    body["ApsJobName"] = request.apsJobName();
  }

  if (!!request.hasCreateTimeEnd()) {
    body["CreateTimeEnd"] = request.createTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    body["CreateTimeStart"] = request.createTimeStart();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeApsJobs"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApsJobsResponse>();
}

/**
 * @summary Queries a list of AnalyticDB Pipeline Service (APS) jobs.
 *
 * @param request DescribeApsJobsRequest
 * @return DescribeApsJobsResponse
 */
DescribeApsJobsResponse Client::describeApsJobs(const DescribeApsJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApsJobsWithOptions(request, runtime);
}

/**
 * @summary Queries the workloads of AnalyticDB Pipeline Service (APS) migration jobs.
 *
 * @param request DescribeApsMigrationWorkloadsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApsMigrationWorkloadsResponse
 */
DescribeApsMigrationWorkloadsResponse Client::describeApsMigrationWorkloadsWithOptions(const DescribeApsMigrationWorkloadsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasOssLocation()) {
    body["OssLocation"] = request.ossLocation();
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

  if (!!request.hasWorkloadName()) {
    body["WorkloadName"] = request.workloadName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeApsMigrationWorkloads"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApsMigrationWorkloadsResponse>();
}

/**
 * @summary Queries the workloads of AnalyticDB Pipeline Service (APS) migration jobs.
 *
 * @param request DescribeApsMigrationWorkloadsRequest
 * @return DescribeApsMigrationWorkloadsResponse
 */
DescribeApsMigrationWorkloadsResponse Client::describeApsMigrationWorkloads(const DescribeApsMigrationWorkloadsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApsMigrationWorkloadsWithOptions(request, runtime);
}

/**
 * @summary Queries the progress of an AnalyticDB Pipeline Service (APS) job.
 *
 * @param request DescribeApsProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApsProgressResponse
 */
DescribeApsProgressResponse Client::describeApsProgressWithOptions(const DescribeApsProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkloadId()) {
    body["WorkloadId"] = request.workloadId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeApsProgress"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApsProgressResponse>();
}

/**
 * @summary Queries the progress of an AnalyticDB Pipeline Service (APS) job.
 *
 * @param request DescribeApsProgressRequest
 * @return DescribeApsProgressResponse
 */
DescribeApsProgressResponse Client::describeApsProgress(const DescribeApsProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApsProgressWithOptions(request, runtime);
}

/**
 * @summary Queries the information about resource groups of an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeApsResourceGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeApsResourceGroupsResponse
 */
DescribeApsResourceGroupsResponse Client::describeApsResourceGroupsWithOptions(const DescribeApsResourceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkloadId()) {
    body["WorkloadId"] = request.workloadId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DescribeApsResourceGroups"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeApsResourceGroupsResponse>();
}

/**
 * @summary Queries the information about resource groups of an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeApsResourceGroupsRequest
 * @return DescribeApsResourceGroupsResponse
 */
DescribeApsResourceGroupsResponse Client::describeApsResourceGroups(const DescribeApsResourceGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeApsResourceGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the SQL audit logs of an AnalyticDB for MySQL cluster.
 *
 * @description *   SQL audit logs can be queried only when SQL audit is enabled. Only SQL audit logs within the last 30 days can be queried. If SQL audit was disabled and re-enabled, only SQL audit logs from the time when SQL audit was re-enabled can be queried. The following operations are not recorded in SQL audit logs: **INSERT INTO VALUES**, **REPLACE INTO VALUES**, and **UPSERT INTO VALUES**.
 * *   For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeAuditLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAuditLogRecordsResponse
 */
DescribeAuditLogRecordsResponse Client::describeAuditLogRecordsWithOptions(const DescribeAuditLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.DBName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasHostAddress()) {
    query["HostAddress"] = request.hostAddress();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
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

  if (!!request.hasProxyUser()) {
    query["ProxyUser"] = request.proxyUser();
  }

  if (!!request.hasQueryKeyword()) {
    query["QueryKeyword"] = request.queryKeyword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSqlType()) {
    query["SqlType"] = request.sqlType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasSucceed()) {
    query["Succeed"] = request.succeed();
  }

  if (!!request.hasUser()) {
    query["User"] = request.user();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAuditLogRecords"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAuditLogRecordsResponse>();
}

/**
 * @summary Queries the SQL audit logs of an AnalyticDB for MySQL cluster.
 *
 * @description *   SQL audit logs can be queried only when SQL audit is enabled. Only SQL audit logs within the last 30 days can be queried. If SQL audit was disabled and re-enabled, only SQL audit logs from the time when SQL audit was re-enabled can be queried. The following operations are not recorded in SQL audit logs: **INSERT INTO VALUES**, **REPLACE INTO VALUES**, and **UPSERT INTO VALUES**.
 * *   For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeAuditLogRecordsRequest
 * @return DescribeAuditLogRecordsResponse
 */
DescribeAuditLogRecordsResponse Client::describeAuditLogRecords(const DescribeAuditLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAuditLogRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the available optimization suggestions for an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeAvailableAdvicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAvailableAdvicesResponse
 */
DescribeAvailableAdvicesResponse Client::describeAvailableAdvicesWithOptions(const DescribeAvailableAdvicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdviceDate()) {
    query["AdviceDate"] = request.adviceDate();
  }

  if (!!request.hasAdviceType()) {
    query["AdviceType"] = request.adviceType();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
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

  if (!!request.hasSchemaTableName()) {
    query["SchemaTableName"] = request.schemaTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAvailableAdvices"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAvailableAdvicesResponse>();
}

/**
 * @summary Queries the available optimization suggestions for an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeAvailableAdvicesRequest
 * @return DescribeAvailableAdvicesResponse
 */
DescribeAvailableAdvicesResponse Client::describeAvailableAdvices(const DescribeAvailableAdvicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAvailableAdvicesWithOptions(request, runtime);
}

/**
 * @summary 查看集群备份设置
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicyWithOptions(const DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupPolicy"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupPolicyResponse>();
}

/**
 * @summary 查看集群备份设置
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeBackupPolicyRequest
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicy(const DescribeBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary 查询实例备份集
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeBackupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupsResponse
 */
DescribeBackupsResponse Client::describeBackupsWithOptions(const DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.backupId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
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

  if (!!request.hasRemote()) {
    query["Remote"] = request.remote();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackups"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBackupsResponse>();
}

/**
 * @summary 查询实例备份集
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeBackupsRequest
 * @return DescribeBackupsResponse
 */
DescribeBackupsResponse Client::describeBackups(const DescribeBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupsWithOptions(request, runtime);
}

/**
 * @summary Queries the bad SQL statements that affect cluster stability within a time range.
 *
 * @param request DescribeBadSqlDetectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBadSqlDetectionResponse
 */
DescribeBadSqlDetectionResponse Client::describeBadSqlDetectionWithOptions(const DescribeBadSqlDetectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBadSqlDetection"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeBadSqlDetectionResponse>();
}

/**
 * @summary Queries the bad SQL statements that affect cluster stability within a time range.
 *
 * @param request DescribeBadSqlDetectionRequest
 * @return DescribeBadSqlDetectionResponse
 */
DescribeBadSqlDetectionResponse Client::describeBadSqlDetection(const DescribeBadSqlDetectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBadSqlDetectionWithOptions(request, runtime);
}

/**
 * @summary Queries the IP address whitelists of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeClusterAccessWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterAccessWhiteListResponse
 */
DescribeClusterAccessWhiteListResponse Client::describeClusterAccessWhiteListWithOptions(const DescribeClusterAccessWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterAccessWhiteList"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterAccessWhiteListResponse>();
}

/**
 * @summary Queries the IP address whitelists of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeClusterAccessWhiteListRequest
 * @return DescribeClusterAccessWhiteListResponse
 */
DescribeClusterAccessWhiteListResponse Client::describeClusterAccessWhiteList(const DescribeClusterAccessWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterAccessWhiteListWithOptions(request, runtime);
}

/**
 * @summary Queries the network information about an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeClusterNetInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterNetInfoResponse
 */
DescribeClusterNetInfoResponse Client::describeClusterNetInfoWithOptions(const DescribeClusterNetInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterNetInfo"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterNetInfoResponse>();
}

/**
 * @summary Queries the network information about an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeClusterNetInfoRequest
 * @return DescribeClusterNetInfoResponse
 */
DescribeClusterNetInfoResponse Client::describeClusterNetInfo(const DescribeClusterNetInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterNetInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the information about resource usage of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeClusterResourceDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterResourceDetailResponse
 */
DescribeClusterResourceDetailResponse Client::describeClusterResourceDetailWithOptions(const DescribeClusterResourceDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterResourceDetail"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterResourceDetailResponse>();
}

/**
 * @summary Queries the information about resource usage of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeClusterResourceDetailRequest
 * @return DescribeClusterResourceDetailResponse
 */
DescribeClusterResourceDetailResponse Client::describeClusterResourceDetail(const DescribeClusterResourceDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterResourceDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the resource usage of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeClusterResourceUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClusterResourceUsageResponse
 */
DescribeClusterResourceUsageResponse Client::describeClusterResourceUsageWithOptions(const DescribeClusterResourceUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClusterResourceUsage"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClusterResourceUsageResponse>();
}

/**
 * @summary Queries the resource usage of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeClusterResourceUsageRequest
 * @return DescribeClusterResourceUsageResponse
 */
DescribeClusterResourceUsageResponse Client::describeClusterResourceUsage(const DescribeClusterResourceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClusterResourceUsageWithOptions(request, runtime);
}

/**
 * @summary Queries a list of columns in a table.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeColumnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeColumnsResponse
 */
DescribeColumnsResponse Client::describeColumnsWithOptions(const DescribeColumnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.schemaName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeColumns"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeColumnsResponse>();
}

/**
 * @summary Queries a list of columns in a table.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeColumnsRequest
 * @return DescribeColumnsResponse
 */
DescribeColumnsResponse Client::describeColumns(const DescribeColumnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeColumnsWithOptions(request, runtime);
}

/**
 * @summary Queries whether the remote build feature is enabled in the query acceleration configuration of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeCompactionServiceSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCompactionServiceSwitchResponse
 */
DescribeCompactionServiceSwitchResponse Client::describeCompactionServiceSwitchWithOptions(const DescribeCompactionServiceSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCompactionServiceSwitch"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCompactionServiceSwitchResponse>();
}

/**
 * @summary Queries whether the remote build feature is enabled in the query acceleration configuration of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeCompactionServiceSwitchRequest
 * @return DescribeCompactionServiceSwitchResponse
 */
DescribeCompactionServiceSwitchResponse Client::describeCompactionServiceSwitch(const DescribeCompactionServiceSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCompactionServiceSwitchWithOptions(request, runtime);
}

/**
 * @summary Queries the computing resource usage of a resource group in an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeComputeResourceUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeComputeResourceUsageResponse
 */
DescribeComputeResourceUsageResponse Client::describeComputeResourceUsageWithOptions(const DescribeComputeResourceUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasResourceGroupName()) {
    query["ResourceGroupName"] = request.resourceGroupName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeComputeResourceUsage"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeComputeResourceUsageResponse>();
}

/**
 * @summary Queries the computing resource usage of a resource group in an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeComputeResourceUsageRequest
 * @return DescribeComputeResourceUsageResponse
 */
DescribeComputeResourceUsageResponse Client::describeComputeResourceUsage(const DescribeComputeResourceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeComputeResourceUsageWithOptions(request, runtime);
}

/**
 * @summary Queries the diagnostic results of the access layer.
 *
 * @param request DescribeControllerDetectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeControllerDetectionResponse
 */
DescribeControllerDetectionResponse Client::describeControllerDetectionWithOptions(const DescribeControllerDetectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeControllerDetection"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeControllerDetectionResponse>();
}

/**
 * @summary Queries the diagnostic results of the access layer.
 *
 * @param request DescribeControllerDetectionRequest
 * @return DescribeControllerDetectionResponse
 */
DescribeControllerDetectionResponse Client::describeControllerDetection(const DescribeControllerDetectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeControllerDetectionWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeDBClusterAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterAttributeResponse
 */
DescribeDBClusterAttributeResponse Client::describeDBClusterAttributeWithOptions(const DescribeDBClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterAttribute"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterAttributeResponse>();
}

/**
 * @summary Queries the information about an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeDBClusterAttributeRequest
 * @return DescribeDBClusterAttributeResponse
 */
DescribeDBClusterAttributeResponse Client::describeDBClusterAttribute(const DescribeDBClusterAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the health status of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeDBClusterHealthStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterHealthStatusResponse
 */
DescribeDBClusterHealthStatusResponse Client::describeDBClusterHealthStatusWithOptions(const DescribeDBClusterHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterHealthStatus"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterHealthStatusResponse>();
}

/**
 * @summary Queries the health status of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeDBClusterHealthStatusRequest
 * @return DescribeDBClusterHealthStatusResponse
 */
DescribeDBClusterHealthStatusResponse Client::describeDBClusterHealthStatus(const DescribeDBClusterHealthStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterHealthStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the performance data of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeDBClusterPerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterPerformanceResponse
 */
DescribeDBClusterPerformanceResponse Client::describeDBClusterPerformanceWithOptions(const DescribeDBClusterPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourcePools()) {
    query["ResourcePools"] = request.resourcePools();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterPerformance"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterPerformanceResponse>();
}

/**
 * @summary Queries the performance data of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeDBClusterPerformanceRequest
 * @return DescribeDBClusterPerformanceResponse
 */
DescribeDBClusterPerformanceResponse Client::describeDBClusterPerformance(const DescribeDBClusterPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterPerformanceWithOptions(request, runtime);
}

/**
 * @summary 获取SSL配置信息
 *
 * @param request DescribeDBClusterSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterSSLResponse
 */
DescribeDBClusterSSLResponse Client::describeDBClusterSSLWithOptions(const DescribeDBClusterSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterSSL"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterSSLResponse>();
}

/**
 * @summary 获取SSL配置信息
 *
 * @param request DescribeDBClusterSSLRequest
 * @return DescribeDBClusterSSLResponse
 */
DescribeDBClusterSSLResponse Client::describeDBClusterSSL(const DescribeDBClusterSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterSSLWithOptions(request, runtime);
}

/**
 * @summary Queries the storage overview information of an AnalyticDB for MySQL cluster, such as the total data size, hot data size, cold data size, and data growth.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeDBClusterSpaceSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterSpaceSummaryResponse
 */
DescribeDBClusterSpaceSummaryResponse Client::describeDBClusterSpaceSummaryWithOptions(const DescribeDBClusterSpaceSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterSpaceSummary"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterSpaceSummaryResponse>();
}

/**
 * @summary Queries the storage overview information of an AnalyticDB for MySQL cluster, such as the total data size, hot data size, cold data size, and data growth.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeDBClusterSpaceSummaryRequest
 * @return DescribeDBClusterSpaceSummaryResponse
 */
DescribeDBClusterSpaceSummaryResponse Client::describeDBClusterSpaceSummary(const DescribeDBClusterSpaceSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterSpaceSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries the statuses of AnalyticDB for MySQL clusters within a region.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeDBClusterStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClusterStatusResponse
 */
DescribeDBClusterStatusResponse Client::describeDBClusterStatusWithOptions(const DescribeDBClusterStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBClusterStatus"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClusterStatusResponse>();
}

/**
 * @summary Queries the statuses of AnalyticDB for MySQL clusters within a region.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeDBClusterStatusRequest
 * @return DescribeDBClusterStatusResponse
 */
DescribeDBClusterStatusResponse Client::describeDBClusterStatus(const DescribeDBClusterStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClusterStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the information about AnalyticDB for MySQL Data Lakehouse Edition clusters within a region.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeDBClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBClustersResponse
 */
DescribeDBClustersResponse Client::describeDBClustersWithOptions(const DescribeDBClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterDescription()) {
    query["DBClusterDescription"] = request.DBClusterDescription();
  }

  if (!!request.hasDBClusterIds()) {
    query["DBClusterIds"] = request.DBClusterIds();
  }

  if (!!request.hasDBClusterStatus()) {
    query["DBClusterStatus"] = request.DBClusterStatus();
  }

  if (!!request.hasDBClusterVersion()) {
    query["DBClusterVersion"] = request.DBClusterVersion();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductVersion()) {
    query["ProductVersion"] = request.productVersion();
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
    {"action" , "DescribeDBClusters"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBClustersResponse>();
}

/**
 * @summary Queries the information about AnalyticDB for MySQL Data Lakehouse Edition clusters within a region.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeDBClustersRequest
 * @return DescribeDBClustersResponse
 */
DescribeDBClustersResponse Client::describeDBClusters(const DescribeDBClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBClustersWithOptions(request, runtime);
}

/**
 * @summary Queries the information about resource groups of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeDBResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBResourceGroupResponse
 */
DescribeDBResourceGroupResponse Client::describeDBResourceGroupWithOptions(const DescribeDBResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.groupType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBResourceGroup"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBResourceGroupResponse>();
}

/**
 * @summary Queries the information about resource groups of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeDBResourceGroupRequest
 * @return DescribeDBResourceGroupResponse
 */
DescribeDBResourceGroupResponse Client::describeDBResourceGroup(const DescribeDBResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the deduplicated statistics of resource groups, databases, usernames, and source IP addresses about SQL statements that meet a query condition for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeDiagnosisDimensionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiagnosisDimensionsResponse
 */
DescribeDiagnosisDimensionsResponse Client::describeDiagnosisDimensionsWithOptions(const DescribeDiagnosisDimensionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasQueryCondition()) {
    query["QueryCondition"] = request.queryCondition();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiagnosisDimensions"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiagnosisDimensionsResponse>();
}

/**
 * @summary Queries the deduplicated statistics of resource groups, databases, usernames, and source IP addresses about SQL statements that meet a query condition for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeDiagnosisDimensionsRequest
 * @return DescribeDiagnosisDimensionsResponse
 */
DescribeDiagnosisDimensionsResponse Client::describeDiagnosisDimensions(const DescribeDiagnosisDimensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiagnosisDimensionsWithOptions(request, runtime);
}

/**
 * @summary Queries the diagnostic information about SQL statements that meet a query condition for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see Endpoints.
 *
 * @param request DescribeDiagnosisRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiagnosisRecordsResponse
 */
DescribeDiagnosisRecordsResponse Client::describeDiagnosisRecordsWithOptions(const DescribeDiagnosisRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientIp()) {
    query["ClientIp"] = request.clientIp();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMaxPeakMemory()) {
    query["MaxPeakMemory"] = request.maxPeakMemory();
  }

  if (!!request.hasMaxScanSize()) {
    query["MaxScanSize"] = request.maxScanSize();
  }

  if (!!request.hasMinPeakMemory()) {
    query["MinPeakMemory"] = request.minPeakMemory();
  }

  if (!!request.hasMinScanSize()) {
    query["MinScanSize"] = request.minScanSize();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPatternId()) {
    query["PatternId"] = request.patternId();
  }

  if (!!request.hasQueryCondition()) {
    query["QueryCondition"] = request.queryCondition();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroup()) {
    query["ResourceGroup"] = request.resourceGroup();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiagnosisRecords"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiagnosisRecordsResponse>();
}

/**
 * @summary Queries the diagnostic information about SQL statements that meet a query condition for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see Endpoints.
 *
 * @param request DescribeDiagnosisRecordsRequest
 * @return DescribeDiagnosisRecordsResponse
 */
DescribeDiagnosisRecordsResponse Client::describeDiagnosisRecords(const DescribeDiagnosisRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiagnosisRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the execution information about an SQL statement, including the execution plan, execution information, resource usage, and self-diagnostics results.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeDiagnosisSQLInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDiagnosisSQLInfoResponse
 */
DescribeDiagnosisSQLInfoResponse Client::describeDiagnosisSQLInfoWithOptions(const DescribeDiagnosisSQLInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasProcessId()) {
    query["ProcessId"] = request.processId();
  }

  if (!!request.hasProcessRcHost()) {
    query["ProcessRcHost"] = request.processRcHost();
  }

  if (!!request.hasProcessStartTime()) {
    query["ProcessStartTime"] = request.processStartTime();
  }

  if (!!request.hasProcessState()) {
    query["ProcessState"] = request.processState();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDiagnosisSQLInfo"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDiagnosisSQLInfoResponse>();
}

/**
 * @summary Queries the execution information about an SQL statement, including the execution plan, execution information, resource usage, and self-diagnostics results.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeDiagnosisSQLInfoRequest
 * @return DescribeDiagnosisSQLInfoResponse
 */
DescribeDiagnosisSQLInfoResponse Client::describeDiagnosisSQLInfo(const DescribeDiagnosisSQLInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDiagnosisSQLInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the last five SQL query download tasks of an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeDownloadRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDownloadRecordsResponse
 */
DescribeDownloadRecordsResponse Client::describeDownloadRecordsWithOptions(const DescribeDownloadRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDownloadRecords"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDownloadRecordsResponse>();
}

/**
 * @summary Queries the last five SQL query download tasks of an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeDownloadRecordsRequest
 * @return DescribeDownloadRecordsResponse
 */
DescribeDownloadRecordsResponse Client::describeDownloadRecords(const DescribeDownloadRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDownloadRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a scaling plan for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeElasticPlanAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeElasticPlanAttributeResponse
 */
DescribeElasticPlanAttributeResponse Client::describeElasticPlanAttributeWithOptions(const DescribeElasticPlanAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasElasticPlanName()) {
    query["ElasticPlanName"] = request.elasticPlanName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeElasticPlanAttribute"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeElasticPlanAttributeResponse>();
}

/**
 * @summary Queries the information about a scaling plan for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeElasticPlanAttributeRequest
 * @return DescribeElasticPlanAttributeResponse
 */
DescribeElasticPlanAttributeResponse Client::describeElasticPlanAttribute(const DescribeElasticPlanAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeElasticPlanAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries a list of scaling plan jobs for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see Endpoints.
 *
 * @param request DescribeElasticPlanJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeElasticPlanJobsResponse
 */
DescribeElasticPlanJobsResponse Client::describeElasticPlanJobsWithOptions(const DescribeElasticPlanJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasElasticPlanName()) {
    query["ElasticPlanName"] = request.elasticPlanName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupName()) {
    query["ResourceGroupName"] = request.resourceGroupName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeElasticPlanJobs"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeElasticPlanJobsResponse>();
}

/**
 * @summary Queries a list of scaling plan jobs for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see Endpoints.
 *
 * @param request DescribeElasticPlanJobsRequest
 * @return DescribeElasticPlanJobsResponse
 */
DescribeElasticPlanJobsResponse Client::describeElasticPlanJobs(const DescribeElasticPlanJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeElasticPlanJobsWithOptions(request, runtime);
}

/**
 * @summary Queries the resource specifications that are supported by different types of scaling plans of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeElasticPlanSpecificationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeElasticPlanSpecificationsResponse
 */
DescribeElasticPlanSpecificationsResponse Client::describeElasticPlanSpecificationsWithOptions(const DescribeElasticPlanSpecificationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasResourceGroupName()) {
    query["ResourceGroupName"] = request.resourceGroupName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeElasticPlanSpecifications"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeElasticPlanSpecificationsResponse>();
}

/**
 * @summary Queries the resource specifications that are supported by different types of scaling plans of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeElasticPlanSpecificationsRequest
 * @return DescribeElasticPlanSpecificationsResponse
 */
DescribeElasticPlanSpecificationsResponse Client::describeElasticPlanSpecifications(const DescribeElasticPlanSpecificationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeElasticPlanSpecificationsWithOptions(request, runtime);
}

/**
 * @summary Queries scaling plans of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeElasticPlansRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeElasticPlansResponse
 */
DescribeElasticPlansResponse Client::describeElasticPlansWithOptions(const DescribeElasticPlansRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasElasticPlanName()) {
    query["ElasticPlanName"] = request.elasticPlanName();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.enabled();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupName()) {
    query["ResourceGroupName"] = request.resourceGroupName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeElasticPlans"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeElasticPlansResponse>();
}

/**
 * @summary Queries scaling plans of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeElasticPlansRequest
 * @return DescribeElasticPlansResponse
 */
DescribeElasticPlansResponse Client::describeElasticPlans(const DescribeElasticPlansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeElasticPlansWithOptions(request, runtime);
}

/**
 * @summary Queries the permission level and permissions supported for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
 *
 * @param request DescribeEnabledPrivilegesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEnabledPrivilegesResponse
 */
DescribeEnabledPrivilegesResponse Client::describeEnabledPrivilegesWithOptions(const DescribeEnabledPrivilegesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEnabledPrivileges"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEnabledPrivilegesResponse>();
}

/**
 * @summary Queries the permission level and permissions supported for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
 *
 * @param request DescribeEnabledPrivilegesRequest
 * @return DescribeEnabledPrivilegesResponse
 */
DescribeEnabledPrivilegesResponse Client::describeEnabledPrivileges(const DescribeEnabledPrivilegesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEnabledPrivilegesWithOptions(request, runtime);
}

/**
 * @summary Queries the disk cache size in the query acceleration configuration of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeEssdCacheConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEssdCacheConfigResponse
 */
DescribeEssdCacheConfigResponse Client::describeEssdCacheConfigWithOptions(const DescribeEssdCacheConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEssdCacheConfig"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEssdCacheConfigResponse>();
}

/**
 * @summary Queries the disk cache size in the query acceleration configuration of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeEssdCacheConfigRequest
 * @return DescribeEssdCacheConfigResponse
 */
DescribeEssdCacheConfigResponse Client::describeEssdCacheConfig(const DescribeEssdCacheConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEssdCacheConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the information about tables that have excessive primary key fields in an AnalyticDB for MySQL Data Lakehouse Edition (V5.0) cluster.
 *
 * @param request DescribeExcessivePrimaryKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExcessivePrimaryKeysResponse
 */
DescribeExcessivePrimaryKeysResponse Client::describeExcessivePrimaryKeysWithOptions(const DescribeExcessivePrimaryKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExcessivePrimaryKeys"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExcessivePrimaryKeysResponse>();
}

/**
 * @summary Queries the information about tables that have excessive primary key fields in an AnalyticDB for MySQL Data Lakehouse Edition (V5.0) cluster.
 *
 * @param request DescribeExcessivePrimaryKeysRequest
 * @return DescribeExcessivePrimaryKeysResponse
 */
DescribeExcessivePrimaryKeysResponse Client::describeExcessivePrimaryKeys(const DescribeExcessivePrimaryKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExcessivePrimaryKeysWithOptions(request, runtime);
}

/**
 * @summary Queries the diagnostic results of the compute layer.
 *
 * @param request DescribeExecutorDetectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExecutorDetectionResponse
 */
DescribeExecutorDetectionResponse Client::describeExecutorDetectionWithOptions(const DescribeExecutorDetectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExecutorDetection"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExecutorDetectionResponse>();
}

/**
 * @summary Queries the diagnostic results of the compute layer.
 *
 * @param request DescribeExecutorDetectionRequest
 * @return DescribeExecutorDetectionResponse
 */
DescribeExecutorDetectionResponse Client::describeExecutorDetection(const DescribeExecutorDetectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExecutorDetectionWithOptions(request, runtime);
}

/**
 * @summary 任务中心任务列表
 *
 * @param request DescribeHistoryTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHistoryTasksResponse
 */
DescribeHistoryTasksResponse Client::describeHistoryTasksWithOptions(const DescribeHistoryTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFromExecTime()) {
    query["FromExecTime"] = request.fromExecTime();
  }

  if (!!request.hasFromStartTime()) {
    query["FromStartTime"] = request.fromStartTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
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

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  if (!!request.hasToExecTime()) {
    query["ToExecTime"] = request.toExecTime();
  }

  if (!!request.hasToStartTime()) {
    query["ToStartTime"] = request.toStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHistoryTasks"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHistoryTasksResponse>();
}

/**
 * @summary 任务中心任务列表
 *
 * @param request DescribeHistoryTasksRequest
 * @return DescribeHistoryTasksResponse
 */
DescribeHistoryTasksResponse Client::describeHistoryTasks(const DescribeHistoryTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryTasksWithOptions(request, runtime);
}

/**
 * @summary 任务中心任务统计
 *
 * @param request DescribeHistoryTasksStatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeHistoryTasksStatResponse
 */
DescribeHistoryTasksStatResponse Client::describeHistoryTasksStatWithOptions(const DescribeHistoryTasksStatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFromExecTime()) {
    query["FromExecTime"] = request.fromExecTime();
  }

  if (!!request.hasFromStartTime()) {
    query["FromStartTime"] = request.fromStartTime();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  if (!!request.hasToExecTime()) {
    query["ToExecTime"] = request.toExecTime();
  }

  if (!!request.hasToStartTime()) {
    query["ToStartTime"] = request.toStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeHistoryTasksStat"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeHistoryTasksStatResponse>();
}

/**
 * @summary 任务中心任务统计
 *
 * @param request DescribeHistoryTasksStatRequest
 * @return DescribeHistoryTasksStatResponse
 */
DescribeHistoryTasksStatResponse Client::describeHistoryTasksStat(const DescribeHistoryTasksStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeHistoryTasksStatWithOptions(request, runtime);
}

/**
 * @summary Queries the disk usage of all storage nodes.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeInclinedNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInclinedNodesResponse
 */
DescribeInclinedNodesResponse Client::describeInclinedNodesWithOptions(const DescribeInclinedNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInclinedNodes"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInclinedNodesResponse>();
}

/**
 * @summary Queries the disk usage of all storage nodes.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeInclinedNodesRequest
 * @return DescribeInclinedNodesResponse
 */
DescribeInclinedNodesResponse Client::describeInclinedNodes(const DescribeInclinedNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInclinedNodesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about skewed tables for an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeInclinedTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInclinedTablesResponse
 */
DescribeInclinedTablesResponse Client::describeInclinedTablesWithOptions(const DescribeInclinedTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
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

  if (!!request.hasTableType()) {
    query["TableType"] = request.tableType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInclinedTables"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInclinedTablesResponse>();
}

/**
 * @summary Queries the information about skewed tables for an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeInclinedTablesRequest
 * @return DescribeInclinedTablesResponse
 */
DescribeInclinedTablesResponse Client::describeInclinedTables(const DescribeInclinedTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInclinedTablesWithOptions(request, runtime);
}

/**
 * @summary 获取作业资源使用统计
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeJobResourceUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeJobResourceUsageResponse
 */
DescribeJobResourceUsageResponse Client::describeJobResourceUsageWithOptions(const DescribeJobResourceUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
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
    {"action" , "DescribeJobResourceUsage"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeJobResourceUsageResponse>();
}

/**
 * @summary 获取作业资源使用统计
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeJobResourceUsageRequest
 * @return DescribeJobResourceUsageResponse
 */
DescribeJobResourceUsageResponse Client::describeJobResourceUsage(const DescribeJobResourceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeJobResourceUsageWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the minor version of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeKernelVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeKernelVersionResponse
 */
DescribeKernelVersionResponse Client::describeKernelVersionWithOptions(const DescribeKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeKernelVersion"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeKernelVersionResponse>();
}

/**
 * @summary Queries the information about the minor version of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeKernelVersionRequest
 * @return DescribeKernelVersionResponse
 */
DescribeKernelVersionResponse Client::describeKernelVersion(const DescribeKernelVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeKernelVersionWithOptions(request, runtime);
}

/**
 * @summary Queries the answer by a large language model (LLM) to a user question about the use of AnalyticDB for MySQL.
 *
 * @param request DescribeLLMAnswerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLLMAnswerResponse
 */
FutrueGenerator<DescribeLLMAnswerResponse> Client::describeLLMAnswerWithSSE(const DescribeLLMAnswerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLLMAnswer"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<DescribeLLMAnswerResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary Queries the answer by a large language model (LLM) to a user question about the use of AnalyticDB for MySQL.
 *
 * @param request DescribeLLMAnswerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLLMAnswerResponse
 */
DescribeLLMAnswerResponse Client::describeLLMAnswerWithOptions(const DescribeLLMAnswerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLLMAnswer"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLLMAnswerResponse>();
}

/**
 * @summary Queries the answer by a large language model (LLM) to a user question about the use of AnalyticDB for MySQL.
 *
 * @param request DescribeLLMAnswerRequest
 * @return DescribeLLMAnswerResponse
 */
DescribeLLMAnswerResponse Client::describeLLMAnswer(const DescribeLLMAnswerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLLMAnswerWithOptions(request, runtime);
}

/**
 * @summary Queries a list of questions similar to a user question.
 *
 * @param request DescribeLLMSimilarQuestionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLLMSimilarQuestionsResponse
 */
DescribeLLMSimilarQuestionsResponse Client::describeLLMSimilarQuestionsWithOptions(const DescribeLLMSimilarQuestionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLLMSimilarQuestions"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLLMSimilarQuestionsResponse>();
}

/**
 * @summary Queries a list of questions similar to a user question.
 *
 * @param request DescribeLLMSimilarQuestionsRequest
 * @return DescribeLLMSimilarQuestionsResponse
 */
DescribeLLMSimilarQuestionsResponse Client::describeLLMSimilarQuestions(const DescribeLLMSimilarQuestionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLLMSimilarQuestionsWithOptions(request, runtime);
}

/**
 * @summary Queries the lake cache size of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeLakeCacheSizeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLakeCacheSizeResponse
 */
DescribeLakeCacheSizeResponse Client::describeLakeCacheSizeWithOptions(const DescribeLakeCacheSizeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLakeCacheSize"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLakeCacheSizeResponse>();
}

/**
 * @summary Queries the lake cache size of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeLakeCacheSizeRequest
 * @return DescribeLakeCacheSizeResponse
 */
DescribeLakeCacheSizeResponse Client::describeLakeCacheSize(const DescribeLakeCacheSizeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLakeCacheSizeWithOptions(request, runtime);
}

/**
 * @summary Queries the service account permissions of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeOperatorPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOperatorPermissionResponse
 */
DescribeOperatorPermissionResponse Client::describeOperatorPermissionWithOptions(const DescribeOperatorPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOperatorPermission"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOperatorPermissionResponse>();
}

/**
 * @summary Queries the service account permissions of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeOperatorPermissionRequest
 * @return DescribeOperatorPermissionResponse
 */
DescribeOperatorPermissionResponse Client::describeOperatorPermission(const DescribeOperatorPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOperatorPermissionWithOptions(request, runtime);
}

/**
 * @summary Queries the information about oversized non-partitioned tables in an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeOversizeNonPartitionTableInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeOversizeNonPartitionTableInfosResponse
 */
DescribeOversizeNonPartitionTableInfosResponse Client::describeOversizeNonPartitionTableInfosWithOptions(const DescribeOversizeNonPartitionTableInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeOversizeNonPartitionTableInfos"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeOversizeNonPartitionTableInfosResponse>();
}

/**
 * @summary Queries the information about oversized non-partitioned tables in an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeOversizeNonPartitionTableInfosRequest
 * @return DescribeOversizeNonPartitionTableInfosResponse
 */
DescribeOversizeNonPartitionTableInfosResponse Client::describeOversizeNonPartitionTableInfos(const DescribeOversizeNonPartitionTableInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeOversizeNonPartitionTableInfosWithOptions(request, runtime);
}

/**
 * @summary Queries the information about performance metrics of an SQL pattern such as the query duration and average memory usage for an AnalyticDB for MySQL cluster within a time range.
 *
 * @description *   General endpoint: `adb.aliyuncs.com`.
 * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribePatternPerformanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePatternPerformanceResponse
 */
DescribePatternPerformanceResponse Client::describePatternPerformanceWithOptions(const DescribePatternPerformanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPatternId()) {
    query["PatternId"] = request.patternId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePatternPerformance"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePatternPerformanceResponse>();
}

/**
 * @summary Queries the information about performance metrics of an SQL pattern such as the query duration and average memory usage for an AnalyticDB for MySQL cluster within a time range.
 *
 * @description *   General endpoint: `adb.aliyuncs.com`.
 * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribePatternPerformanceRequest
 * @return DescribePatternPerformanceResponse
 */
DescribePatternPerformanceResponse Client::describePatternPerformance(const DescribePatternPerformanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePatternPerformanceWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a monitoring view.
 *
 * @param request DescribePerformanceViewAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePerformanceViewAttributeResponse
 */
DescribePerformanceViewAttributeResponse Client::describePerformanceViewAttributeWithOptions(const DescribePerformanceViewAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasViewName()) {
    query["ViewName"] = request.viewName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePerformanceViewAttribute"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePerformanceViewAttributeResponse>();
}

/**
 * @summary Queries the information about a monitoring view.
 *
 * @param request DescribePerformanceViewAttributeRequest
 * @return DescribePerformanceViewAttributeResponse
 */
DescribePerformanceViewAttributeResponse Client::describePerformanceViewAttribute(const DescribePerformanceViewAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePerformanceViewAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries a list of monitoring views.
 *
 * @param request DescribePerformanceViewsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePerformanceViewsResponse
 */
DescribePerformanceViewsResponse Client::describePerformanceViewsWithOptions(const DescribePerformanceViewsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePerformanceViews"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePerformanceViewsResponse>();
}

/**
 * @summary Queries a list of monitoring views.
 *
 * @param request DescribePerformanceViewsRequest
 * @return DescribePerformanceViewsResponse
 */
DescribePerformanceViewsResponse Client::describePerformanceViews(const DescribePerformanceViewsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePerformanceViewsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of regions and zones in which AnalyticDB for MySQL Data Lakehouse Edition (V3.0) is available.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeRegionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcceptLanguage()) {
    query["AcceptLanguage"] = request.acceptLanguage();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2021-12-01"},
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
 * @summary Queries a list of regions and zones in which AnalyticDB for MySQL Data Lakehouse Edition (V3.0) is available.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about resource group specifications.
 *
 * @description ### [](#)
 * For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeResourceGroupSpecRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeResourceGroupSpecResponse
 */
DescribeResourceGroupSpecResponse Client::describeResourceGroupSpecWithOptions(const DescribeResourceGroupSpecRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupType()) {
    query["ResourceGroupType"] = request.resourceGroupType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeResourceGroupSpec"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeResourceGroupSpecResponse>();
}

/**
 * @summary Queries the information about resource group specifications.
 *
 * @description ### [](#)
 * For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeResourceGroupSpecRequest
 * @return DescribeResourceGroupSpecResponse
 */
DescribeResourceGroupSpecResponse Client::describeResourceGroupSpec(const DescribeResourceGroupSpecRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeResourceGroupSpecWithOptions(request, runtime);
}

/**
 * @summary Queries a list of SQL patterns for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster within a time range.
 *
 * @description *   General endpoint: `adb.aliyuncs.com`.
 * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeSQLPatternsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSQLPatternsResponse
 */
DescribeSQLPatternsResponse Client::describeSQLPatternsWithOptions(const DescribeSQLPatternsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSQLPatterns"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSQLPatternsResponse>();
}

/**
 * @summary Queries a list of SQL patterns for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster within a time range.
 *
 * @description *   General endpoint: `adb.aliyuncs.com`.
 * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeSQLPatternsRequest
 * @return DescribeSQLPatternsResponse
 */
DescribeSQLPatternsResponse Client::describeSQLPatterns(const DescribeSQLPatternsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSQLPatternsWithOptions(request, runtime);
}

/**
 * @summary Queries the WebSocket domain name of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeSQLWebSocketDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSQLWebSocketDomainResponse
 */
DescribeSQLWebSocketDomainResponse Client::describeSQLWebSocketDomainWithOptions(const DescribeSQLWebSocketDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSQLWebSocketDomain"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSQLWebSocketDomainResponse>();
}

/**
 * @summary Queries the WebSocket domain name of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeSQLWebSocketDomainRequest
 * @return DescribeSQLWebSocketDomainResponse
 */
DescribeSQLWebSocketDomainResponse Client::describeSQLWebSocketDomain(const DescribeSQLWebSocketDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSQLWebSocketDomainWithOptions(request, runtime);
}

/**
 * @summary Queries a list of databases in an AnalyticDB for MySQL cluster.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeSchemasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSchemasResponse
 */
DescribeSchemasResponse Client::describeSchemasWithOptions(const DescribeSchemasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSchemas"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSchemasResponse>();
}

/**
 * @summary Queries a list of databases in an AnalyticDB for MySQL cluster.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeSchemasRequest
 * @return DescribeSchemasResponse
 */
DescribeSchemasResponse Client::describeSchemas(const DescribeSchemasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSchemasWithOptions(request, runtime);
}

/**
 * @summary Queries the diagnostic information about a Spark application.
 *
 * @param request DescribeSparkAppDiagnosisInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSparkAppDiagnosisInfoResponse
 */
DescribeSparkAppDiagnosisInfoResponse Client::describeSparkAppDiagnosisInfoWithOptions(const DescribeSparkAppDiagnosisInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSparkAppDiagnosisInfo"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSparkAppDiagnosisInfoResponse>();
}

/**
 * @summary Queries the diagnostic information about a Spark application.
 *
 * @param request DescribeSparkAppDiagnosisInfoRequest
 * @return DescribeSparkAppDiagnosisInfoResponse
 */
DescribeSparkAppDiagnosisInfoResponse Client::describeSparkAppDiagnosisInfo(const DescribeSparkAppDiagnosisInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSparkAppDiagnosisInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the type of a Spark application.
 *
 * @param request DescribeSparkAppTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSparkAppTypeResponse
 */
DescribeSparkAppTypeResponse Client::describeSparkAppTypeWithOptions(const DescribeSparkAppTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSparkAppType"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSparkAppTypeResponse>();
}

/**
 * @summary Queries the type of a Spark application.
 *
 * @param request DescribeSparkAppTypeRequest
 * @return DescribeSparkAppTypeResponse
 */
DescribeSparkAppTypeResponse Client::describeSparkAppType(const DescribeSparkAppTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSparkAppTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the execution logs of Spark code.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeSparkCodeLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSparkCodeLogResponse
 */
DescribeSparkCodeLogResponse Client::describeSparkCodeLogWithOptions(const DescribeSparkCodeLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSparkCodeLog"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSparkCodeLogResponse>();
}

/**
 * @summary Queries the execution logs of Spark code.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeSparkCodeLogRequest
 * @return DescribeSparkCodeLogResponse
 */
DescribeSparkCodeLogResponse Client::describeSparkCodeLog(const DescribeSparkCodeLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSparkCodeLogWithOptions(request, runtime);
}

/**
 * @summary Queries the execution result of Spark code.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeSparkCodeOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSparkCodeOutputResponse
 */
DescribeSparkCodeOutputResponse Client::describeSparkCodeOutputWithOptions(const DescribeSparkCodeOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSparkCodeOutput"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSparkCodeOutputResponse>();
}

/**
 * @summary Queries the execution result of Spark code.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeSparkCodeOutputRequest
 * @return DescribeSparkCodeOutputResponse
 */
DescribeSparkCodeOutputResponse Client::describeSparkCodeOutput(const DescribeSparkCodeOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSparkCodeOutputWithOptions(request, runtime);
}

/**
 * @summary Queries the URL of the web UI for a Spark application.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeSparkCodeWebUiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSparkCodeWebUiResponse
 */
DescribeSparkCodeWebUiResponse Client::describeSparkCodeWebUiWithOptions(const DescribeSparkCodeWebUiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSparkCodeWebUi"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSparkCodeWebUiResponse>();
}

/**
 * @summary Queries the URL of the web UI for a Spark application.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeSparkCodeWebUiRequest
 * @return DescribeSparkCodeWebUiResponse
 */
DescribeSparkCodeWebUiResponse Client::describeSparkCodeWebUi(const DescribeSparkCodeWebUiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSparkCodeWebUiWithOptions(request, runtime);
}

/**
 * @summary Queries the diagnostic information about a Spark SQL query.
 *
 * @param request DescribeSparkSQLDiagnosisAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSparkSQLDiagnosisAttributeResponse
 */
DescribeSparkSQLDiagnosisAttributeResponse Client::describeSparkSQLDiagnosisAttributeWithOptions(const DescribeSparkSQLDiagnosisAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasInnerQueryId()) {
    query["InnerQueryId"] = request.innerQueryId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSparkSQLDiagnosisAttribute"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSparkSQLDiagnosisAttributeResponse>();
}

/**
 * @summary Queries the diagnostic information about a Spark SQL query.
 *
 * @param request DescribeSparkSQLDiagnosisAttributeRequest
 * @return DescribeSparkSQLDiagnosisAttributeResponse
 */
DescribeSparkSQLDiagnosisAttributeResponse Client::describeSparkSQLDiagnosisAttribute(const DescribeSparkSQLDiagnosisAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSparkSQLDiagnosisAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the diagnostic information about Spark SQL queries.
 *
 * @param request DescribeSparkSQLDiagnosisListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSparkSQLDiagnosisListResponse
 */
DescribeSparkSQLDiagnosisListResponse Client::describeSparkSQLDiagnosisListWithOptions(const DescribeSparkSQLDiagnosisListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasMaxStartTime()) {
    query["MaxStartTime"] = request.maxStartTime();
  }

  if (!!request.hasMinStartTime()) {
    query["MinStartTime"] = request.minStartTime();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
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

  if (!!request.hasStatementId()) {
    query["StatementId"] = request.statementId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSparkSQLDiagnosisList"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSparkSQLDiagnosisListResponse>();
}

/**
 * @summary Queries the diagnostic information about Spark SQL queries.
 *
 * @param request DescribeSparkSQLDiagnosisListRequest
 * @return DescribeSparkSQLDiagnosisListResponse
 */
DescribeSparkSQLDiagnosisListResponse Client::describeSparkSQLDiagnosisList(const DescribeSparkSQLDiagnosisListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSparkSQLDiagnosisListWithOptions(request, runtime);
}

/**
 * @summary Queries the information about SQL patterns of an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster within a time range.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeSqlPatternRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSqlPatternResponse
 */
DescribeSqlPatternResponse Client::describeSqlPatternWithOptions(const DescribeSqlPatternRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
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

  if (!!request.hasSqlPattern()) {
    query["SqlPattern"] = request.sqlPattern();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSqlPattern"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSqlPatternResponse>();
}

/**
 * @summary Queries the information about SQL patterns of an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster within a time range.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeSqlPatternRequest
 * @return DescribeSqlPatternResponse
 */
DescribeSqlPatternResponse Client::describeSqlPattern(const DescribeSqlPatternRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSqlPatternWithOptions(request, runtime);
}

/**
 * @summary Queries the storage resource usage of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeStorageResourceUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStorageResourceUsageResponse
 */
DescribeStorageResourceUsageResponse Client::describeStorageResourceUsageWithOptions(const DescribeStorageResourceUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeStorageResourceUsage"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStorageResourceUsageResponse>();
}

/**
 * @summary Queries the storage resource usage of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeStorageResourceUsageRequest
 * @return DescribeStorageResourceUsageResponse
 */
DescribeStorageResourceUsageResponse Client::describeStorageResourceUsage(const DescribeStorageResourceUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStorageResourceUsageWithOptions(request, runtime);
}

/**
 * @summary Queries the number of accesses to a table or all tables in an AnalyticDB for MySQL cluster on a date.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeTableAccessCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTableAccessCountResponse
 */
DescribeTableAccessCountResponse Client::describeTableAccessCountWithOptions(const DescribeTableAccessCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTableAccessCount"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTableAccessCountResponse>();
}

/**
 * @summary Queries the number of accesses to a table or all tables in an AnalyticDB for MySQL cluster on a date.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeTableAccessCountRequest
 * @return DescribeTableAccessCountResponse
 */
DescribeTableAccessCountResponse Client::describeTableAccessCount(const DescribeTableAccessCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTableAccessCountWithOptions(request, runtime);
}

/**
 * @summary Queries the information about data distribution among shards of a table.
 *
 * @param request DescribeTableDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTableDetailResponse
 */
DescribeTableDetailResponse Client::describeTableDetailWithOptions(const DescribeTableDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.schemaName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTableDetail"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTableDetailResponse>();
}

/**
 * @summary Queries the information about data distribution among shards of a table.
 *
 * @param request DescribeTableDetailRequest
 * @return DescribeTableDetailResponse
 */
DescribeTableDetailResponse Client::describeTableDetail(const DescribeTableDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTableDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the information about partition diagnostics.
 *
 * @param request DescribeTablePartitionDiagnoseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTablePartitionDiagnoseResponse
 */
DescribeTablePartitionDiagnoseResponse Client::describeTablePartitionDiagnoseWithOptions(const DescribeTablePartitionDiagnoseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTablePartitionDiagnose"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTablePartitionDiagnoseResponse>();
}

/**
 * @summary Queries the information about partition diagnostics.
 *
 * @param request DescribeTablePartitionDiagnoseRequest
 * @return DescribeTablePartitionDiagnoseResponse
 */
DescribeTablePartitionDiagnoseResponse Client::describeTablePartitionDiagnose(const DescribeTablePartitionDiagnoseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTablePartitionDiagnoseWithOptions(request, runtime);
}

/**
 * @summary Queries the table statistics of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeTableStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTableStatisticsResponse
 */
DescribeTableStatisticsResponse Client::describeTableStatisticsWithOptions(const DescribeTableStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
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

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.schemaName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTableStatistics"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTableStatisticsResponse>();
}

/**
 * @summary Queries the table statistics of an AnalyticDB for MySQL cluster.
 *
 * @param request DescribeTableStatisticsRequest
 * @return DescribeTableStatisticsResponse
 */
DescribeTableStatisticsResponse Client::describeTableStatistics(const DescribeTableStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTableStatisticsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tables in a database.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTablesResponse
 */
DescribeTablesResponse Client::describeTablesWithOptions(const DescribeTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.schemaName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTables"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTablesResponse>();
}

/**
 * @summary Queries a list of tables in a database.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request DescribeTablesRequest
 * @return DescribeTablesResponse
 */
DescribeTablesResponse Client::describeTables(const DescribeTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTablesWithOptions(request, runtime);
}

/**
 * @summary Queries available quotas.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeUserQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserQuotaResponse
 */
DescribeUserQuotaResponse Client::describeUserQuotaWithOptions(const DescribeUserQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserQuota"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserQuotaResponse>();
}

/**
 * @summary Queries available quotas.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DescribeUserQuotaRequest
 * @return DescribeUserQuotaResponse
 */
DescribeUserQuotaResponse Client::describeUserQuota(const DescribeUserQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries the diagnostic results of the storage layer.
 *
 * @param request DescribeWorkerDetectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWorkerDetectionResponse
 */
DescribeWorkerDetectionResponse Client::describeWorkerDetectionWithOptions(const DescribeWorkerDetectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWorkerDetection"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWorkerDetectionResponse>();
}

/**
 * @summary Queries the diagnostic results of the storage layer.
 *
 * @param request DescribeWorkerDetectionRequest
 * @return DescribeWorkerDetectionResponse
 */
DescribeWorkerDetectionResponse Client::describeWorkerDetection(const DescribeWorkerDetectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWorkerDetectionWithOptions(request, runtime);
}

/**
 * @summary 解绑用户弹性网卡
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DetachUserENIRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachUserENIResponse
 */
DetachUserENIResponse Client::detachUserENIWithOptions(const DetachUserENIRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachUserENI"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachUserENIResponse>();
}

/**
 * @summary 解绑用户弹性网卡
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DetachUserENIRequest
 * @return DetachUserENIResponse
 */
DetachUserENIResponse Client::detachUserENI(const DetachUserENIRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachUserENIWithOptions(request, runtime);
}

/**
 * @summary Disables the suggestion feature.
 *
 * @param request DisableAdviceServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableAdviceServiceResponse
 */
DisableAdviceServiceResponse Client::disableAdviceServiceWithOptions(const DisableAdviceServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableAdviceService"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableAdviceServiceResponse>();
}

/**
 * @summary Disables the suggestion feature.
 *
 * @param request DisableAdviceServiceRequest
 * @return DisableAdviceServiceResponse
 */
DisableAdviceServiceResponse Client::disableAdviceService(const DisableAdviceServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableAdviceServiceWithOptions(request, runtime);
}

/**
 * @summary Disables a scaling plan for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DisableElasticPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableElasticPlanResponse
 */
DisableElasticPlanResponse Client::disableElasticPlanWithOptions(const DisableElasticPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasElasticPlanName()) {
    query["ElasticPlanName"] = request.elasticPlanName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableElasticPlan"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableElasticPlanResponse>();
}

/**
 * @summary Disables a scaling plan for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DisableElasticPlanRequest
 * @return DisableElasticPlanResponse
 */
DisableElasticPlanResponse Client::disableElasticPlan(const DisableElasticPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableElasticPlanWithOptions(request, runtime);
}

/**
 * @summary Downloads the diagnostic information about SQL statements that meet a query condition for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DownloadDiagnosisRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadDiagnosisRecordsResponse
 */
DownloadDiagnosisRecordsResponse Client::downloadDiagnosisRecordsWithOptions(const DownloadDiagnosisRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientIp()) {
    query["ClientIp"] = request.clientIp();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDatabase()) {
    query["Database"] = request.database();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.lang();
  }

  if (!!request.hasMaxPeakMemory()) {
    query["MaxPeakMemory"] = request.maxPeakMemory();
  }

  if (!!request.hasMaxScanSize()) {
    query["MaxScanSize"] = request.maxScanSize();
  }

  if (!!request.hasMinPeakMemory()) {
    query["MinPeakMemory"] = request.minPeakMemory();
  }

  if (!!request.hasMinScanSize()) {
    query["MinScanSize"] = request.minScanSize();
  }

  if (!!request.hasQueryCondition()) {
    query["QueryCondition"] = request.queryCondition();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroup()) {
    query["ResourceGroup"] = request.resourceGroup();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadDiagnosisRecords"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadDiagnosisRecordsResponse>();
}

/**
 * @summary Downloads the diagnostic information about SQL statements that meet a query condition for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request DownloadDiagnosisRecordsRequest
 * @return DownloadDiagnosisRecordsResponse
 */
DownloadDiagnosisRecordsResponse Client::downloadDiagnosisRecords(const DownloadDiagnosisRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadDiagnosisRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the Object Storage Service (OSS) URL of the downloaded certificate authority (CA) certificate that is used to connect to the wide table engine.
 *
 * @param request DownloadInstanceCACertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DownloadInstanceCACertificateResponse
 */
DownloadInstanceCACertificateResponse Client::downloadInstanceCACertificateWithOptions(const DownloadInstanceCACertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DownloadInstanceCACertificate"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DownloadInstanceCACertificateResponse>();
}

/**
 * @summary Queries the Object Storage Service (OSS) URL of the downloaded certificate authority (CA) certificate that is used to connect to the wide table engine.
 *
 * @param request DownloadInstanceCACertificateRequest
 * @return DownloadInstanceCACertificateResponse
 */
DownloadInstanceCACertificateResponse Client::downloadInstanceCACertificate(const DownloadInstanceCACertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return downloadInstanceCACertificateWithOptions(request, runtime);
}

/**
 * @summary Enables the suggestion feature.
 *
 * @param request EnableAdviceServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableAdviceServiceResponse
 */
EnableAdviceServiceResponse Client::enableAdviceServiceWithOptions(const EnableAdviceServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableAdviceService"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableAdviceServiceResponse>();
}

/**
 * @summary Enables the suggestion feature.
 *
 * @param request EnableAdviceServiceRequest
 * @return EnableAdviceServiceResponse
 */
EnableAdviceServiceResponse Client::enableAdviceService(const EnableAdviceServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableAdviceServiceWithOptions(request, runtime);
}

/**
 * @summary Enables a scaling plan for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request EnableElasticPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableElasticPlanResponse
 */
EnableElasticPlanResponse Client::enableElasticPlanWithOptions(const EnableElasticPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasElasticPlanName()) {
    query["ElasticPlanName"] = request.elasticPlanName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableElasticPlan"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableElasticPlanResponse>();
}

/**
 * @summary Enables a scaling plan for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request EnableElasticPlanRequest
 * @return EnableElasticPlanResponse
 */
EnableElasticPlanResponse Client::enableElasticPlan(const EnableElasticPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableElasticPlanWithOptions(request, runtime);
}

/**
 * @summary Executes part of the code in a Spark job.
 *
 * @param request ExecuteSparkReplStatementRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteSparkReplStatementResponse
 */
ExecuteSparkReplStatementResponse Client::executeSparkReplStatementWithOptions(const ExecuteSparkReplStatementRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasCode()) {
    body["Code"] = request.code();
  }

  if (!!request.hasCodeType()) {
    body["CodeType"] = request.codeType();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExecuteSparkReplStatement"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteSparkReplStatementResponse>();
}

/**
 * @summary Executes part of the code in a Spark job.
 *
 * @param request ExecuteSparkReplStatementRequest
 * @return ExecuteSparkReplStatementResponse
 */
ExecuteSparkReplStatementResponse Client::executeSparkReplStatement(const ExecuteSparkReplStatementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeSparkReplStatementWithOptions(request, runtime);
}

/**
 * @summary Executes Spark SQL statements in batches.
 *
 * @param request ExecuteSparkWarehouseBatchSQLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteSparkWarehouseBatchSQLResponse
 */
ExecuteSparkWarehouseBatchSQLResponse Client::executeSparkWarehouseBatchSQLWithOptions(const ExecuteSparkWarehouseBatchSQLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgency()) {
    body["Agency"] = request.agency();
  }

  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasExecuteResultLimit()) {
    body["ExecuteResultLimit"] = request.executeResultLimit();
  }

  if (!!request.hasExecuteTimeLimitInSeconds()) {
    body["ExecuteTimeLimitInSeconds"] = request.executeTimeLimitInSeconds();
  }

  if (!!request.hasQuery()) {
    body["Query"] = request.query();
  }

  if (!!request.hasResourceGroupName()) {
    body["ResourceGroupName"] = request.resourceGroupName();
  }

  if (!!request.hasRuntimeConfig()) {
    body["RuntimeConfig"] = request.runtimeConfig();
  }

  if (!!request.hasSchema()) {
    body["Schema"] = request.schema();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExecuteSparkWarehouseBatchSQL"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteSparkWarehouseBatchSQLResponse>();
}

/**
 * @summary Executes Spark SQL statements in batches.
 *
 * @param request ExecuteSparkWarehouseBatchSQLRequest
 * @return ExecuteSparkWarehouseBatchSQLResponse
 */
ExecuteSparkWarehouseBatchSQLResponse Client::executeSparkWarehouseBatchSQL(const ExecuteSparkWarehouseBatchSQLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeSparkWarehouseBatchSQLWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ExistRunningSQLEngine is deprecated
 *
 * @summary Queries whether a running SQL engine exists.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request ExistRunningSQLEngineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExistRunningSQLEngineResponse
 */
ExistRunningSQLEngineResponse Client::existRunningSQLEngineWithOptions(const ExistRunningSQLEngineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasResourceGroupName()) {
    body["ResourceGroupName"] = request.resourceGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExistRunningSQLEngine"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExistRunningSQLEngineResponse>();
}

/**
 * @deprecated OpenAPI ExistRunningSQLEngine is deprecated
 *
 * @summary Queries whether a running SQL engine exists.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request ExistRunningSQLEngineRequest
 * @return ExistRunningSQLEngineResponse
 */
ExistRunningSQLEngineResponse Client::existRunningSQLEngine(const ExistRunningSQLEngineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return existRunningSQLEngineWithOptions(request, runtime);
}

/**
 * @summary 获取Spark权限说明,失败时给出配置权限的帮助信息
 *
 * @param request GetADBSparkNecessaryRAMPermissionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetADBSparkNecessaryRAMPermissionsResponse
 */
GetADBSparkNecessaryRAMPermissionsResponse Client::getADBSparkNecessaryRAMPermissionsWithOptions(const GetADBSparkNecessaryRAMPermissionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetADBSparkNecessaryRAMPermissions"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetADBSparkNecessaryRAMPermissionsResponse>();
}

/**
 * @summary 获取Spark权限说明,失败时给出配置权限的帮助信息
 *
 * @param request GetADBSparkNecessaryRAMPermissionsRequest
 * @return GetADBSparkNecessaryRAMPermissionsResponse
 */
GetADBSparkNecessaryRAMPermissionsResponse Client::getADBSparkNecessaryRAMPermissions(const GetADBSparkNecessaryRAMPermissionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getADBSparkNecessaryRAMPermissionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of databases.
 *
 * @param request GetApsManagedDatabasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApsManagedDatabasesResponse
 */
GetApsManagedDatabasesResponse Client::getApsManagedDatabasesWithOptions(const GetApsManagedDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetApsManagedDatabases"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApsManagedDatabasesResponse>();
}

/**
 * @summary Queries a list of databases.
 *
 * @param request GetApsManagedDatabasesRequest
 * @return GetApsManagedDatabasesResponse
 */
GetApsManagedDatabasesResponse Client::getApsManagedDatabases(const GetApsManagedDatabasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApsManagedDatabasesWithOptions(request, runtime);
}

/**
 * @summary Queries the table creation statement for tables.
 *
 * @param request GetCreateTableSQLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCreateTableSQLResponse
 */
GetCreateTableSQLResponse Client::getCreateTableSQLWithOptions(const GetCreateTableSQLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.schemaName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCreateTableSQL"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCreateTableSQLResponse>();
}

/**
 * @summary Queries the table creation statement for tables.
 *
 * @param request GetCreateTableSQLRequest
 * @return GetCreateTableSQLResponse
 */
GetCreateTableSQLResponse Client::getCreateTableSQL(const GetCreateTableSQLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCreateTableSQLWithOptions(request, runtime);
}

/**
 * @summary Queries the information about databases.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request GetDatabaseObjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatabaseObjectsResponse
 */
GetDatabaseObjectsResponse Client::getDatabaseObjectsWithOptions(const GetDatabaseObjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasFilterOwner()) {
    query["FilterOwner"] = request.filterOwner();
  }

  if (!!request.hasFilterSchemaName()) {
    query["FilterSchemaName"] = request.filterSchemaName();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatabaseObjects"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatabaseObjectsResponse>();
}

/**
 * @summary Queries the information about databases.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request GetDatabaseObjectsRequest
 * @return GetDatabaseObjectsResponse
 */
GetDatabaseObjectsResponse Client::getDatabaseObjects(const GetDatabaseObjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDatabaseObjectsWithOptions(request, runtime);
}

/**
 * @summary Queries a lake storage.
 *
 * @param request GetLakeStorageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLakeStorageResponse
 */
GetLakeStorageResponse Client::getLakeStorageWithOptions(const GetLakeStorageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasLakeStorageId()) {
    query["LakeStorageId"] = request.lakeStorageId();
  }

  json body = {};
  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetLakeStorage"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLakeStorageResponse>();
}

/**
 * @summary Queries a lake storage.
 *
 * @param request GetLakeStorageRequest
 * @return GetLakeStorageResponse
 */
GetLakeStorageResponse Client::getLakeStorage(const GetLakeStorageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLakeStorageWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the retry log of a Spark application.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkAppAttemptLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSparkAppAttemptLogResponse
 */
GetSparkAppAttemptLogResponse Client::getSparkAppAttemptLogWithOptions(const GetSparkAppAttemptLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  json body = {};
  if (!!request.hasAttemptId()) {
    body["AttemptId"] = request.attemptId();
  }

  if (!!request.hasLogLength()) {
    body["LogLength"] = request.logLength();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetSparkAppAttemptLog"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSparkAppAttemptLogResponse>();
}

/**
 * @summary Queries the information about the retry log of a Spark application.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkAppAttemptLogRequest
 * @return GetSparkAppAttemptLogResponse
 */
GetSparkAppAttemptLogResponse Client::getSparkAppAttemptLog(const GetSparkAppAttemptLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSparkAppAttemptLogWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an Spark application.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkAppInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSparkAppInfoResponse
 */
GetSparkAppInfoResponse Client::getSparkAppInfoWithOptions(const GetSparkAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetSparkAppInfo"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSparkAppInfoResponse>();
}

/**
 * @summary Queries the information about an Spark application.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkAppInfoRequest
 * @return GetSparkAppInfoResponse
 */
GetSparkAppInfoResponse Client::getSparkAppInfo(const GetSparkAppInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSparkAppInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the logs of a Spark application.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkAppLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSparkAppLogResponse
 */
GetSparkAppLogResponse Client::getSparkAppLogWithOptions(const GetSparkAppLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasLogLength()) {
    body["LogLength"] = request.logLength();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetSparkAppLog"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSparkAppLogResponse>();
}

/**
 * @summary Queries the logs of a Spark application.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkAppLogRequest
 * @return GetSparkAppLogResponse
 */
GetSparkAppLogResponse Client::getSparkAppLog(const GetSparkAppLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSparkAppLogWithOptions(request, runtime);
}

/**
 * @summary Queries the metrics of a Spark application.
 *
 * @description *   Before you call this operation, you must call the [PreloadSparkAppMetrics](https://help.aliyun.com/document_detail/612447.html) operation to preload the metrics of a Spark application.
 * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkAppMetricsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSparkAppMetricsResponse
 */
GetSparkAppMetricsResponse Client::getSparkAppMetricsWithOptions(const GetSparkAppMetricsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetSparkAppMetrics"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSparkAppMetricsResponse>();
}

/**
 * @summary Queries the metrics of a Spark application.
 *
 * @description *   Before you call this operation, you must call the [PreloadSparkAppMetrics](https://help.aliyun.com/document_detail/612447.html) operation to preload the metrics of a Spark application.
 * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkAppMetricsRequest
 * @return GetSparkAppMetricsResponse
 */
GetSparkAppMetricsResponse Client::getSparkAppMetrics(const GetSparkAppMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSparkAppMetricsWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a Spark application.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkAppStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSparkAppStateResponse
 */
GetSparkAppStateResponse Client::getSparkAppStateWithOptions(const GetSparkAppStateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetSparkAppState"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSparkAppStateResponse>();
}

/**
 * @summary Queries the status of a Spark application.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkAppStateRequest
 * @return GetSparkAppStateResponse
 */
GetSparkAppStateResponse Client::getSparkAppState(const GetSparkAppStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSparkAppStateWithOptions(request, runtime);
}

/**
 * @summary Queries the URL of the web UI for a Spark application.
 *
 * @description *   General endpoint: `adb.aliyuncs.com`.
 * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request GetSparkAppWebUiAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSparkAppWebUiAddressResponse
 */
GetSparkAppWebUiAddressResponse Client::getSparkAppWebUiAddressWithOptions(const GetSparkAppWebUiAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetSparkAppWebUiAddress"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSparkAppWebUiAddressResponse>();
}

/**
 * @summary Queries the URL of the web UI for a Spark application.
 *
 * @description *   General endpoint: `adb.aliyuncs.com`.
 * *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request GetSparkAppWebUiAddressRequest
 * @return GetSparkAppWebUiAddressResponse
 */
GetSparkAppWebUiAddressResponse Client::getSparkAppWebUiAddress(const GetSparkAppWebUiAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSparkAppWebUiAddressWithOptions(request, runtime);
}

/**
 * @summary Queries the Spark log configuration of an AnalyticDB for MySQL cluster, including the default Spark log path.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkConfigLogPathRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSparkConfigLogPathResponse
 */
GetSparkConfigLogPathResponse Client::getSparkConfigLogPathWithOptions(const GetSparkConfigLogPathRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSparkConfigLogPath"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSparkConfigLogPathResponse>();
}

/**
 * @summary Queries the Spark log configuration of an AnalyticDB for MySQL cluster, including the default Spark log path.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkConfigLogPathRequest
 * @return GetSparkConfigLogPathResponse
 */
GetSparkConfigLogPathResponse Client::getSparkConfigLogPath(const GetSparkConfigLogPathRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSparkConfigLogPathWithOptions(request, runtime);
}

/**
 * @summary Queries the results of a Spark log analysis task.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkLogAnalyzeTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSparkLogAnalyzeTaskResponse
 */
GetSparkLogAnalyzeTaskResponse Client::getSparkLogAnalyzeTaskWithOptions(const GetSparkLogAnalyzeTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSparkLogAnalyzeTask"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSparkLogAnalyzeTaskResponse>();
}

/**
 * @summary Queries the results of a Spark log analysis task.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkLogAnalyzeTaskRequest
 * @return GetSparkLogAnalyzeTaskResponse
 */
GetSparkLogAnalyzeTaskResponse Client::getSparkLogAnalyzeTask(const GetSparkLogAnalyzeTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSparkLogAnalyzeTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a Spark session.
 *
 * @param request GetSparkReplSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSparkReplSessionResponse
 */
GetSparkReplSessionResponse Client::getSparkReplSessionWithOptions(const GetSparkReplSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSparkReplSession"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSparkReplSessionResponse>();
}

/**
 * @summary Queries the status of a Spark session.
 *
 * @param request GetSparkReplSessionRequest
 * @return GetSparkReplSessionResponse
 */
GetSparkReplSessionResponse Client::getSparkReplSession(const GetSparkReplSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSparkReplSessionWithOptions(request, runtime);
}

/**
 * @summary Queries the execution result of a code block.
 *
 * @param request GetSparkReplStatementRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSparkReplStatementResponse
 */
GetSparkReplStatementResponse Client::getSparkReplStatementWithOptions(const GetSparkReplStatementRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.sessionId();
  }

  if (!!request.hasStatementId()) {
    body["StatementId"] = request.statementId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSparkReplStatement"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSparkReplStatementResponse>();
}

/**
 * @summary Queries the execution result of a code block.
 *
 * @param request GetSparkReplStatementRequest
 * @return GetSparkReplStatementResponse
 */
GetSparkReplStatementResponse Client::getSparkReplStatement(const GetSparkReplStatementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSparkReplStatementWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetSparkSQLEngineState is deprecated
 *
 * @summary Queries the state information about the Spark SQL engine.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkSQLEngineStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSparkSQLEngineStateResponse
 */
GetSparkSQLEngineStateResponse Client::getSparkSQLEngineStateWithOptions(const GetSparkSQLEngineStateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasResourceGroupName()) {
    body["ResourceGroupName"] = request.resourceGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSparkSQLEngineState"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSparkSQLEngineStateResponse>();
}

/**
 * @deprecated OpenAPI GetSparkSQLEngineState is deprecated
 *
 * @summary Queries the state information about the Spark SQL engine.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkSQLEngineStateRequest
 * @return GetSparkSQLEngineStateResponse
 */
GetSparkSQLEngineStateResponse Client::getSparkSQLEngineState(const GetSparkSQLEngineStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSparkSQLEngineStateWithOptions(request, runtime);
}

/**
 * @summary Queries the content of a Spark application template.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkTemplateFileContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSparkTemplateFileContentResponse
 */
GetSparkTemplateFileContentResponse Client::getSparkTemplateFileContentWithOptions(const GetSparkTemplateFileContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSparkTemplateFileContent"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSparkTemplateFileContentResponse>();
}

/**
 * @summary Queries the content of a Spark application template.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkTemplateFileContentRequest
 * @return GetSparkTemplateFileContentResponse
 */
GetSparkTemplateFileContentResponse Client::getSparkTemplateFileContent(const GetSparkTemplateFileContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSparkTemplateFileContentWithOptions(request, runtime);
}

/**
 * @summary Queries the directory structure of Spark applications.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkTemplateFolderTreeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSparkTemplateFolderTreeResponse
 */
GetSparkTemplateFolderTreeResponse Client::getSparkTemplateFolderTreeWithOptions(const GetSparkTemplateFolderTreeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSparkTemplateFolderTree"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSparkTemplateFolderTreeResponse>();
}

/**
 * @summary Queries the directory structure of Spark applications.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkTemplateFolderTreeRequest
 * @return GetSparkTemplateFolderTreeResponse
 */
GetSparkTemplateFolderTreeResponse Client::getSparkTemplateFolderTree(const GetSparkTemplateFolderTreeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSparkTemplateFolderTreeWithOptions(request, runtime);
}

/**
 * @summary Queries the directory structure of Spark applications.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkTemplateFullTreeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSparkTemplateFullTreeResponse
 */
GetSparkTemplateFullTreeResponse Client::getSparkTemplateFullTreeWithOptions(const GetSparkTemplateFullTreeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSparkTemplateFullTree"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSparkTemplateFullTreeResponse>();
}

/**
 * @summary Queries the directory structure of Spark applications.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request GetSparkTemplateFullTreeRequest
 * @return GetSparkTemplateFullTreeResponse
 */
GetSparkTemplateFullTreeResponse Client::getSparkTemplateFullTree(const GetSparkTemplateFullTreeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSparkTemplateFullTreeWithOptions(request, runtime);
}

/**
 * @summary Queries the execution result of a Spark SQL statement.
 *
 * @param request GetSparkWarehouseBatchSQLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSparkWarehouseBatchSQLResponse
 */
GetSparkWarehouseBatchSQLResponse Client::getSparkWarehouseBatchSQLWithOptions(const GetSparkWarehouseBatchSQLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgency()) {
    body["Agency"] = request.agency();
  }

  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasQueryId()) {
    body["QueryId"] = request.queryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSparkWarehouseBatchSQL"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSparkWarehouseBatchSQLResponse>();
}

/**
 * @summary Queries the execution result of a Spark SQL statement.
 *
 * @param request GetSparkWarehouseBatchSQLRequest
 * @return GetSparkWarehouseBatchSQLResponse
 */
GetSparkWarehouseBatchSQLResponse Client::getSparkWarehouseBatchSQL(const GetSparkWarehouseBatchSQLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSparkWarehouseBatchSQLWithOptions(request, runtime);
}

/**
 * @summary 获取表
 *
 * @param request GetTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableResponse
 */
GetTableResponse Client::getTableWithOptions(const GetTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTable"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableResponse>();
}

/**
 * @summary 获取表
 *
 * @param request GetTableRequest
 * @return GetTableResponse
 */
GetTableResponse Client::getTable(const GetTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTableWithOptions(request, runtime);
}

/**
 * @summary Queries the information about columns.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request GetTableColumnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableColumnsResponse
 */
GetTableColumnsResponse Client::getTableColumnsWithOptions(const GetTableColumnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasColumnName()) {
    query["ColumnName"] = request.columnName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
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

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.schemaName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableColumns"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableColumnsResponse>();
}

/**
 * @summary Queries the information about columns.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request GetTableColumnsRequest
 * @return GetTableColumnsResponse
 */
GetTableColumnsResponse Client::getTableColumns(const GetTableColumnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTableColumnsWithOptions(request, runtime);
}

/**
 * @summary Queries the statement that is used to create a table.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request GetTableDDLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableDDLResponse
 */
GetTableDDLResponse Client::getTableDDLWithOptions(const GetTableDDLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.schemaName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableDDL"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableDDLResponse>();
}

/**
 * @summary Queries the statement that is used to create a table.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request GetTableDDLRequest
 * @return GetTableDDLResponse
 */
GetTableDDLResponse Client::getTableDDL(const GetTableDDLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTableDDLWithOptions(request, runtime);
}

/**
 * @summary 获取table概要信息
 *
 * @param request GetTableObjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableObjectsResponse
 */
GetTableObjectsResponse Client::getTableObjectsWithOptions(const GetTableObjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasFilterDescription()) {
    query["FilterDescription"] = request.filterDescription();
  }

  if (!!request.hasFilterOwner()) {
    query["FilterOwner"] = request.filterOwner();
  }

  if (!!request.hasFilterTblName()) {
    query["FilterTblName"] = request.filterTblName();
  }

  if (!!request.hasFilterTblType()) {
    query["FilterTblType"] = request.filterTblType();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
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

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.schemaName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTableObjects"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableObjectsResponse>();
}

/**
 * @summary 获取table概要信息
 *
 * @param request GetTableObjectsRequest
 * @return GetTableObjectsResponse
 */
GetTableObjectsResponse Client::getTableObjects(const GetTableObjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTableObjectsWithOptions(request, runtime);
}

/**
 * @summary Queries the statement that is used to create a view.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request GetViewDDLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetViewDDLResponse
 */
GetViewDDLResponse Client::getViewDDLWithOptions(const GetViewDDLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.schemaName();
  }

  if (!!request.hasViewName()) {
    query["ViewName"] = request.viewName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetViewDDL"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetViewDDLResponse>();
}

/**
 * @summary Queries the statement that is used to create a view.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request GetViewDDLRequest
 * @return GetViewDDLResponse
 */
GetViewDDLResponse Client::getViewDDL(const GetViewDDLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getViewDDLWithOptions(request, runtime);
}

/**
 * @summary Queries the information about views.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request GetViewObjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetViewObjectsResponse
 */
GetViewObjectsResponse Client::getViewObjectsWithOptions(const GetViewObjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasFilterOwner()) {
    query["FilterOwner"] = request.filterOwner();
  }

  if (!!request.hasFilterViewName()) {
    query["FilterViewName"] = request.filterViewName();
  }

  if (!!request.hasFilterViewType()) {
    query["FilterViewType"] = request.filterViewType();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
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

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.schemaName();
  }

  if (!!request.hasShowMvBaseTable()) {
    query["ShowMvBaseTable"] = request.showMvBaseTable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetViewObjects"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetViewObjectsResponse>();
}

/**
 * @summary Queries the information about views.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 *
 * @param request GetViewObjectsRequest
 * @return GetViewObjectsResponse
 */
GetViewObjectsResponse Client::getViewObjects(const GetViewObjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getViewObjectsWithOptions(request, runtime);
}

/**
 * @summary Grants permissions to the service account of an AnalyticDB for MySQL cluster.
 *
 * @param request GrantOperatorPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantOperatorPermissionResponse
 */
GrantOperatorPermissionResponse Client::grantOperatorPermissionWithOptions(const GrantOperatorPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasExpiredTime()) {
    query["ExpiredTime"] = request.expiredTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPrivileges()) {
    query["Privileges"] = request.privileges();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GrantOperatorPermission"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantOperatorPermissionResponse>();
}

/**
 * @summary Grants permissions to the service account of an AnalyticDB for MySQL cluster.
 *
 * @param request GrantOperatorPermissionRequest
 * @return GrantOperatorPermissionResponse
 */
GrantOperatorPermissionResponse Client::grantOperatorPermission(const GrantOperatorPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantOperatorPermissionWithOptions(request, runtime);
}

/**
 * @summary Terminates an ongoing query.
 *
 * @param request KillProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return KillProcessResponse
 */
KillProcessResponse Client::killProcessWithOptions(const KillProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "KillProcess"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<KillProcessResponse>();
}

/**
 * @summary Terminates an ongoing query.
 *
 * @param request KillProcessRequest
 * @return KillProcessResponse
 */
KillProcessResponse Client::killProcess(const KillProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return killProcessWithOptions(request, runtime);
}

/**
 * @summary Terminates a Spark application.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request KillSparkAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return KillSparkAppResponse
 */
KillSparkAppResponse Client::killSparkAppWithOptions(const KillSparkAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "KillSparkApp"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<KillSparkAppResponse>();
}

/**
 * @summary Terminates a Spark application.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request KillSparkAppRequest
 * @return KillSparkAppResponse
 */
KillSparkAppResponse Client::killSparkApp(const KillSparkAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return killSparkAppWithOptions(request, runtime);
}

/**
 * @summary Terminates a Spark log analysis task and queries the information about the analysis task.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request KillSparkLogAnalyzeTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return KillSparkLogAnalyzeTaskResponse
 */
KillSparkLogAnalyzeTaskResponse Client::killSparkLogAnalyzeTaskWithOptions(const KillSparkLogAnalyzeTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "KillSparkLogAnalyzeTask"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<KillSparkLogAnalyzeTaskResponse>();
}

/**
 * @summary Terminates a Spark log analysis task and queries the information about the analysis task.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request KillSparkLogAnalyzeTaskRequest
 * @return KillSparkLogAnalyzeTaskResponse
 */
KillSparkLogAnalyzeTaskResponse Client::killSparkLogAnalyzeTask(const KillSparkLogAnalyzeTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return killSparkLogAnalyzeTaskWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI KillSparkSQLEngine is deprecated
 *
 * @summary Shuts down a Spark SQL engine.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request KillSparkSQLEngineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return KillSparkSQLEngineResponse
 */
KillSparkSQLEngineResponse Client::killSparkSQLEngineWithOptions(const KillSparkSQLEngineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasResourceGroupName()) {
    body["ResourceGroupName"] = request.resourceGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "KillSparkSQLEngine"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<KillSparkSQLEngineResponse>();
}

/**
 * @deprecated OpenAPI KillSparkSQLEngine is deprecated
 *
 * @summary Shuts down a Spark SQL engine.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request KillSparkSQLEngineRequest
 * @return KillSparkSQLEngineResponse
 */
KillSparkSQLEngineResponse Client::killSparkSQLEngine(const KillSparkSQLEngineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return killSparkSQLEngineWithOptions(request, runtime);
}

/**
 * @summary Queries a list of lifecycle management policies of an AnalyticDB for MySQL cluster.
 *
 * @param request ListApsLifecycleStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApsLifecycleStrategyResponse
 */
ListApsLifecycleStrategyResponse Client::listApsLifecycleStrategyWithOptions(const ListApsLifecycleStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListApsLifecycleStrategy"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApsLifecycleStrategyResponse>();
}

/**
 * @summary Queries a list of lifecycle management policies of an AnalyticDB for MySQL cluster.
 *
 * @param request ListApsLifecycleStrategyRequest
 * @return ListApsLifecycleStrategyResponse
 */
ListApsLifecycleStrategyResponse Client::listApsLifecycleStrategy(const ListApsLifecycleStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApsLifecycleStrategyWithOptions(request, runtime);
}

/**
 * @summary Queries a list of lake storage optimization policies for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ListApsOptimizationStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApsOptimizationStrategyResponse
 */
ListApsOptimizationStrategyResponse Client::listApsOptimizationStrategyWithOptions(const ListApsOptimizationStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListApsOptimizationStrategy"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApsOptimizationStrategyResponse>();
}

/**
 * @summary Queries a list of lake storage optimization policies for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ListApsOptimizationStrategyRequest
 * @return ListApsOptimizationStrategyResponse
 */
ListApsOptimizationStrategyResponse Client::listApsOptimizationStrategy(const ListApsOptimizationStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApsOptimizationStrategyWithOptions(request, runtime);
}

/**
 * @summary Queries a list of optimization jobs executed based on a lifecycle management policy. The system runs optimization jobs on a regular basis based on lifecycle management policies.
 *
 * @param request ListApsOptimizationTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApsOptimizationTasksResponse
 */
ListApsOptimizationTasksResponse Client::listApsOptimizationTasksWithOptions(const ListApsOptimizationTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasStrategyType()) {
    body["StrategyType"] = request.strategyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListApsOptimizationTasks"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApsOptimizationTasksResponse>();
}

/**
 * @summary Queries a list of optimization jobs executed based on a lifecycle management policy. The system runs optimization jobs on a regular basis based on lifecycle management policies.
 *
 * @param request ListApsOptimizationTasksRequest
 * @return ListApsOptimizationTasksResponse
 */
ListApsOptimizationTasksResponse Client::listApsOptimizationTasks(const ListApsOptimizationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApsOptimizationTasksWithOptions(request, runtime);
}

/**
 * @summary Queries a list of lake storages.
 *
 * @param request ListLakeStoragesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLakeStoragesResponse
 */
ListLakeStoragesResponse Client::listLakeStoragesWithOptions(const ListLakeStoragesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLakeStorages"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLakeStoragesResponse>();
}

/**
 * @summary Queries a list of lake storages.
 *
 * @param request ListLakeStoragesRequest
 * @return ListLakeStoragesResponse
 */
ListLakeStoragesResponse Client::listLakeStorages(const ListLakeStoragesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLakeStoragesWithOptions(request, runtime);
}

/**
 * @summary Queries the execution records of result set export jobs of a Resource Access Management (RAM) user.
 *
 * @param tmpReq ListResultExportJobHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResultExportJobHistoryResponse
 */
ListResultExportJobHistoryResponse Client::listResultExportJobHistoryWithOptions(const ListResultExportJobHistoryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListResultExportJobHistoryShrinkRequest request = ListResultExportJobHistoryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOrder()) {
    request.setOrderShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.order(), "Order", "json"));
  }

  if (!!tmpReq.hasStatusList()) {
    request.setStatusListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.statusList(), "StatusList", "json"));
  }

  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDatabaseUser()) {
    body["DatabaseUser"] = request.databaseUser();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasOrderShrink()) {
    body["Order"] = request.orderShrink();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroup()) {
    body["ResourceGroup"] = request.resourceGroup();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.startTime();
  }

  if (!!request.hasStatusListShrink()) {
    body["StatusList"] = request.statusListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListResultExportJobHistory"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResultExportJobHistoryResponse>();
}

/**
 * @summary Queries the execution records of result set export jobs of a Resource Access Management (RAM) user.
 *
 * @param request ListResultExportJobHistoryRequest
 * @return ListResultExportJobHistoryResponse
 */
ListResultExportJobHistoryResponse Client::listResultExportJobHistory(const ListResultExportJobHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResultExportJobHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries the information about retry attempts of a Spark application.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request ListSparkAppAttemptsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSparkAppAttemptsResponse
 */
ListSparkAppAttemptsResponse Client::listSparkAppAttemptsWithOptions(const ListSparkAppAttemptsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

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
    {"action" , "ListSparkAppAttempts"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSparkAppAttemptsResponse>();
}

/**
 * @summary Queries the information about retry attempts of a Spark application.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request ListSparkAppAttemptsRequest
 * @return ListSparkAppAttemptsResponse
 */
ListSparkAppAttemptsResponse Client::listSparkAppAttempts(const ListSparkAppAttemptsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSparkAppAttemptsWithOptions(request, runtime);
}

/**
 * @summary Queries the Spark applications that run on an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
 *
 * @param request ListSparkAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSparkAppsResponse
 */
ListSparkAppsResponse Client::listSparkAppsWithOptions(const ListSparkAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.filters();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupName()) {
    query["ResourceGroupName"] = request.resourceGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSparkApps"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSparkAppsResponse>();
}

/**
 * @summary Queries the Spark applications that run on an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
 *
 * @param request ListSparkAppsRequest
 * @return ListSparkAppsResponse
 */
ListSparkAppsResponse Client::listSparkApps(const ListSparkAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSparkAppsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of Spark log analysis tasks.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request ListSparkLogAnalyzeTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSparkLogAnalyzeTasksResponse
 */
ListSparkLogAnalyzeTasksResponse Client::listSparkLogAnalyzeTasksWithOptions(const ListSparkLogAnalyzeTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListSparkLogAnalyzeTasks"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSparkLogAnalyzeTasksResponse>();
}

/**
 * @summary Queries a list of Spark log analysis tasks.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request ListSparkLogAnalyzeTasksRequest
 * @return ListSparkLogAnalyzeTasksResponse
 */
ListSparkLogAnalyzeTasksResponse Client::listSparkLogAnalyzeTasks(const ListSparkLogAnalyzeTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSparkLogAnalyzeTasksWithOptions(request, runtime);
}

/**
 * @summary Queries a list of Spark template file IDs for AnalyticDB for MySQL clusters.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request ListSparkTemplateFileIdsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSparkTemplateFileIdsResponse
 */
ListSparkTemplateFileIdsResponse Client::listSparkTemplateFileIdsWithOptions(const ListSparkTemplateFileIdsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListSparkTemplateFileIds"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSparkTemplateFileIdsResponse>();
}

/**
 * @summary Queries a list of Spark template file IDs for AnalyticDB for MySQL clusters.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request ListSparkTemplateFileIdsRequest
 * @return ListSparkTemplateFileIdsResponse
 */
ListSparkTemplateFileIdsResponse Client::listSparkTemplateFileIds(const ListSparkTemplateFileIdsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSparkTemplateFileIdsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of Spark SQL statements.
 *
 * @param request ListSparkWarehouseBatchSQLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSparkWarehouseBatchSQLResponse
 */
ListSparkWarehouseBatchSQLResponse Client::listSparkWarehouseBatchSQLWithOptions(const ListSparkWarehouseBatchSQLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupName()) {
    body["ResourceGroupName"] = request.resourceGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListSparkWarehouseBatchSQL"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSparkWarehouseBatchSQLResponse>();
}

/**
 * @summary Queries a list of Spark SQL statements.
 *
 * @param request ListSparkWarehouseBatchSQLRequest
 * @return ListSparkWarehouseBatchSQLResponse
 */
ListSparkWarehouseBatchSQLResponse Client::listSparkWarehouseBatchSQL(const ListSparkWarehouseBatchSQLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSparkWarehouseBatchSQLWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are added to AnalyticDB for MySQL clusters, or the AnalyticDB for MySQL clusters that have tags added.
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

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
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
    {"version" , "2021-12-01"},
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
 * @summary Queries the tags that are added to AnalyticDB for MySQL clusters, or the AnalyticDB for MySQL clusters that have tags added.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Loads a built-in dataset.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request LoadSampleDataSetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LoadSampleDataSetResponse
 */
LoadSampleDataSetResponse Client::loadSampleDataSetWithOptions(const LoadSampleDataSetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LoadSampleDataSet"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LoadSampleDataSetResponse>();
}

/**
 * @summary Loads a built-in dataset.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request LoadSampleDataSetRequest
 * @return LoadSampleDataSetResponse
 */
LoadSampleDataSetResponse Client::loadSampleDataSet(const LoadSampleDataSetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return loadSampleDataSetWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a database account for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ModifyAccountDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescriptionWithOptions(const ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountDescription()) {
    query["AccountDescription"] = request.accountDescription();
  }

  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountDescription"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccountDescriptionResponse>();
}

/**
 * @summary Modifies the description of a database account for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ModifyAccountDescriptionRequest
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies the permissions of a database account.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param tmpReq ModifyAccountPrivilegesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountPrivilegesResponse
 */
ModifyAccountPrivilegesResponse Client::modifyAccountPrivilegesWithOptions(const ModifyAccountPrivilegesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyAccountPrivilegesShrinkRequest request = ModifyAccountPrivilegesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAccountPrivileges()) {
    request.setAccountPrivilegesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.accountPrivileges(), "AccountPrivileges", "json"));
  }

  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAccountPrivilegesShrink()) {
    query["AccountPrivileges"] = request.accountPrivilegesShrink();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountPrivileges"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccountPrivilegesResponse>();
}

/**
 * @summary Modifies the permissions of a database account.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ModifyAccountPrivilegesRequest
 * @return ModifyAccountPrivilegesResponse
 */
ModifyAccountPrivilegesResponse Client::modifyAccountPrivileges(const ModifyAccountPrivilegesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountPrivilegesWithOptions(request, runtime);
}

/**
 * @summary Modifies an AnalyticDB Pipeline Service (APS) data source.
 *
 * @description ### [](#)
 * *   You can call this operation only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition that have 32 cores or more.
 * *   You cannot modify the number of nodes for the USER_DEFAULT resource group.
 *
 * @param tmpReq ModifyApsDatasoureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApsDatasoureResponse
 */
ModifyApsDatasoureResponse Client::modifyApsDatasoureWithOptions(const ModifyApsDatasoureRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyApsDatasoureShrinkRequest request = ModifyApsDatasoureShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasKafkaInfo()) {
    request.setKafkaInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.kafkaInfo(), "KafkaInfo", "json"));
  }

  if (!!tmpReq.hasLakehouseId()) {
    request.setLakehouseIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.lakehouseId(), "LakehouseId", "json"));
  }

  if (!!tmpReq.hasPolarDBMysqlInfo()) {
    request.setPolarDBMysqlInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.polarDBMysqlInfo(), "PolarDBMysqlInfo", "json"));
  }

  if (!!tmpReq.hasRdsMysqlInfo()) {
    request.setRdsMysqlInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.rdsMysqlInfo(), "RdsMysqlInfo", "json"));
  }

  if (!!tmpReq.hasSlsInfo()) {
    request.setSlsInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.slsInfo(), "SlsInfo", "json"));
  }

  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDatasourceDescription()) {
    body["DatasourceDescription"] = request.datasourceDescription();
  }

  if (!!request.hasDatasourceId()) {
    body["DatasourceId"] = request.datasourceId();
  }

  if (!!request.hasDatasourceName()) {
    body["DatasourceName"] = request.datasourceName();
  }

  if (!!request.hasKafkaInfoShrink()) {
    body["KafkaInfo"] = request.kafkaInfoShrink();
  }

  if (!!request.hasLakehouseIdShrink()) {
    body["LakehouseId"] = request.lakehouseIdShrink();
  }

  if (!!request.hasPolarDBMysqlInfoShrink()) {
    body["PolarDBMysqlInfo"] = request.polarDBMysqlInfoShrink();
  }

  if (!!request.hasRdsMysqlInfoShrink()) {
    body["RdsMysqlInfo"] = request.rdsMysqlInfoShrink();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasSlsInfoShrink()) {
    body["SlsInfo"] = request.slsInfoShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyApsDatasoure"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApsDatasoureResponse>();
}

/**
 * @summary Modifies an AnalyticDB Pipeline Service (APS) data source.
 *
 * @description ### [](#)
 * *   You can call this operation only for AnalyticDB for MySQL clusters in elastic mode for Cluster Edition that have 32 cores or more.
 * *   You cannot modify the number of nodes for the USER_DEFAULT resource group.
 *
 * @param request ModifyApsDatasoureRequest
 * @return ModifyApsDatasoureResponse
 */
ModifyApsDatasoureResponse Client::modifyApsDatasoure(const ModifyApsDatasoureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApsDatasoureWithOptions(request, runtime);
}

/**
 * @summary Modifies an AnalyticDB Pipeline Service (APS) job.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ModifyApsJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApsJobResponse
 */
ModifyApsJobResponse Client::modifyApsJobWithOptions(const ModifyApsJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApsJobId()) {
    body["ApsJobId"] = request.apsJobId();
  }

  if (!!request.hasDbList()) {
    body["DbList"] = request.dbList();
  }

  if (!!request.hasPartitionList()) {
    body["PartitionList"] = request.partitionList();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyApsJob"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApsJobResponse>();
}

/**
 * @summary Modifies an AnalyticDB Pipeline Service (APS) job.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ModifyApsJobRequest
 * @return ModifyApsJobResponse
 */
ModifyApsJobResponse Client::modifyApsJob(const ModifyApsJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApsJobWithOptions(request, runtime);
}

/**
 * @summary Modifies an AnalyticDB Pipeline Service (APS) job from Simple Log Service (SLS) to an AnalyticDB for MySQL Data Warehouse Edition cluster.
 *
 * @param tmpReq ModifyApsSlsADBJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApsSlsADBJobResponse
 */
ModifyApsSlsADBJobResponse Client::modifyApsSlsADBJobWithOptions(const ModifyApsSlsADBJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyApsSlsADBJobShrinkRequest request = ModifyApsSlsADBJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasColumns()) {
    request.setColumnsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.columns(), "Columns", "json"));
  }

  json body = {};
  if (!!request.hasColumnsShrink()) {
    body["Columns"] = request.columnsShrink();
  }

  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDbName()) {
    body["DbName"] = request.dbName();
  }

  if (!!request.hasDirtyDataProcessPattern()) {
    body["DirtyDataProcessPattern"] = request.dirtyDataProcessPattern();
  }

  if (!!request.hasExactlyOnce()) {
    body["ExactlyOnce"] = request.exactlyOnce();
  }

  if (!!request.hasPassword()) {
    body["Password"] = request.password();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasStartingOffsets()) {
    body["StartingOffsets"] = request.startingOffsets();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  if (!!request.hasUnixTimestampConvert()) {
    body["UnixTimestampConvert"] = request.unixTimestampConvert();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.userName();
  }

  if (!!request.hasWorkloadId()) {
    body["WorkloadId"] = request.workloadId();
  }

  if (!!request.hasWorkloadName()) {
    body["WorkloadName"] = request.workloadName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyApsSlsADBJob"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApsSlsADBJobResponse>();
}

/**
 * @summary Modifies an AnalyticDB Pipeline Service (APS) job from Simple Log Service (SLS) to an AnalyticDB for MySQL Data Warehouse Edition cluster.
 *
 * @param request ModifyApsSlsADBJobRequest
 * @return ModifyApsSlsADBJobResponse
 */
ModifyApsSlsADBJobResponse Client::modifyApsSlsADBJob(const ModifyApsSlsADBJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApsSlsADBJobWithOptions(request, runtime);
}

/**
 * @summary Modifies the AnalyticDB Pipeline Service (APS) workload name.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ModifyApsWorkloadNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyApsWorkloadNameResponse
 */
ModifyApsWorkloadNameResponse Client::modifyApsWorkloadNameWithOptions(const ModifyApsWorkloadNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasWorkloadId()) {
    body["WorkloadId"] = request.workloadId();
  }

  if (!!request.hasWorkloadName()) {
    body["WorkloadName"] = request.workloadName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ModifyApsWorkloadName"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyApsWorkloadNameResponse>();
}

/**
 * @summary Modifies the AnalyticDB Pipeline Service (APS) workload name.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ModifyApsWorkloadNameRequest
 * @return ModifyApsWorkloadNameResponse
 */
ModifyApsWorkloadNameResponse Client::modifyApsWorkloadName(const ModifyApsWorkloadNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyApsWorkloadNameWithOptions(request, runtime);
}

/**
 * @summary Modifies the SQL audit settings of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ModifyAuditLogConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAuditLogConfigResponse
 */
ModifyAuditLogConfigResponse Client::modifyAuditLogConfigWithOptions(const ModifyAuditLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditLogStatus()) {
    query["AuditLogStatus"] = request.auditLogStatus();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.engineType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAuditLogConfig"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAuditLogConfigResponse>();
}

/**
 * @summary Modifies the SQL audit settings of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ModifyAuditLogConfigRequest
 * @return ModifyAuditLogConfigResponse
 */
ModifyAuditLogConfigResponse Client::modifyAuditLogConfig(const ModifyAuditLogConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAuditLogConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the backup policy of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ModifyBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicyWithOptions(const ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupRetentionPeriod()) {
    query["BackupRetentionPeriod"] = request.backupRetentionPeriod();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEnableBackupLog()) {
    query["EnableBackupLog"] = request.enableBackupLog();
  }

  if (!!request.hasLogBackupRetentionPeriod()) {
    query["LogBackupRetentionPeriod"] = request.logBackupRetentionPeriod();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPreferredBackupPeriod()) {
    query["PreferredBackupPeriod"] = request.preferredBackupPeriod();
  }

  if (!!request.hasPreferredBackupTime()) {
    query["PreferredBackupTime"] = request.preferredBackupTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackupPolicy"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyBackupPolicyResponse>();
}

/**
 * @summary Modifies the backup policy of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ModifyBackupPolicyRequest
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Enables the wide table engine feature for an AnalyticDB for MySQL cluster or modifies the disk cache size of the wide table engine of an AnalyticDB for MySQL cluster for which you enabled the wide table engine feature.
 *
 * @param request ModifyClickhouseEngineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyClickhouseEngineResponse
 */
ModifyClickhouseEngineResponse Client::modifyClickhouseEngineWithOptions(const ModifyClickhouseEngineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCacheSize()) {
    query["CacheSize"] = request.cacheSize();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.enabled();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyClickhouseEngine"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyClickhouseEngineResponse>();
}

/**
 * @summary Enables the wide table engine feature for an AnalyticDB for MySQL cluster or modifies the disk cache size of the wide table engine of an AnalyticDB for MySQL cluster for which you enabled the wide table engine feature.
 *
 * @param request ModifyClickhouseEngineRequest
 * @return ModifyClickhouseEngineResponse
 */
ModifyClickhouseEngineResponse Client::modifyClickhouseEngine(const ModifyClickhouseEngineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyClickhouseEngineWithOptions(request, runtime);
}

/**
 * @summary Modifies the IP address whitelist of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see Endpoints.
 *
 * @param request ModifyClusterAccessWhiteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyClusterAccessWhiteListResponse
 */
ModifyClusterAccessWhiteListResponse Client::modifyClusterAccessWhiteListWithOptions(const ModifyClusterAccessWhiteListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterIPArrayAttribute()) {
    query["DBClusterIPArrayAttribute"] = request.DBClusterIPArrayAttribute();
  }

  if (!!request.hasDBClusterIPArrayName()) {
    query["DBClusterIPArrayName"] = request.DBClusterIPArrayName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasModifyMode()) {
    query["ModifyMode"] = request.modifyMode();
  }

  if (!!request.hasSecurityIps()) {
    query["SecurityIps"] = request.securityIps();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyClusterAccessWhiteList"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyClusterAccessWhiteListResponse>();
}

/**
 * @summary Modifies the IP address whitelist of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see Endpoints.
 *
 * @param request ModifyClusterAccessWhiteListRequest
 * @return ModifyClusterAccessWhiteListResponse
 */
ModifyClusterAccessWhiteListResponse Client::modifyClusterAccessWhiteList(const ModifyClusterAccessWhiteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyClusterAccessWhiteListWithOptions(request, runtime);
}

/**
 * @summary Modifies the public endpoint of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ModifyClusterConnectionStringRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyClusterConnectionStringResponse
 */
ModifyClusterConnectionStringResponse Client::modifyClusterConnectionStringWithOptions(const ModifyClusterConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.connectionStringPrefix();
  }

  if (!!request.hasCurrentConnectionString()) {
    query["CurrentConnectionString"] = request.currentConnectionString();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasPort()) {
    query["Port"] = request.port();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyClusterConnectionString"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyClusterConnectionStringResponse>();
}

/**
 * @summary Modifies the public endpoint of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ModifyClusterConnectionStringRequest
 * @return ModifyClusterConnectionStringResponse
 */
ModifyClusterConnectionStringResponse Client::modifyClusterConnectionString(const ModifyClusterConnectionStringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyClusterConnectionStringWithOptions(request, runtime);
}

/**
 * @summary Modifies the status of the remote build feature in the query acceleration configuration of an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyCompactionServiceSwitchRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCompactionServiceSwitchResponse
 */
ModifyCompactionServiceSwitchResponse Client::modifyCompactionServiceSwitchWithOptions(const ModifyCompactionServiceSwitchRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEnableCompactionService()) {
    query["EnableCompactionService"] = request.enableCompactionService();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCompactionServiceSwitch"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCompactionServiceSwitchResponse>();
}

/**
 * @summary Modifies the status of the remote build feature in the query acceleration configuration of an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyCompactionServiceSwitchRequest
 * @return ModifyCompactionServiceSwitchResponse
 */
ModifyCompactionServiceSwitchResponse Client::modifyCompactionServiceSwitch(const ModifyCompactionServiceSwitchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCompactionServiceSwitchWithOptions(request, runtime);
}

/**
 * @summary Changes the configurations of an AnalyticDB for MySQL Data Lakehouse Edition cluster.
 *
 * @description ### [](#)
 * *   During a scaling event, you are not allowed to execute the `SUBMIT JOB` statement to submit asynchronous jobs. If your business requires asynchronous jobs, perform scaling during appropriate periods.
 * *   When you scale a cluster, data in the cluster is migrated for redistribution. The amount of time that is required to migrate data is proportional to the data volume. During a scaling event, the services provided by the cluster are not interrupted. When you downgrade cluster specifications, data migration may require up to dozens of hours to complete. Proceed with caution especially if your cluster contains a large amount of data.
 * *   If the cluster has a built-in dataset loaded, make sure that the cluster has reserved storage resources of at least 24 AnalyticDB compute units (ACUs). Otherwise, the built-in dataset cannot be used.
 * *   When the scaling process is about to end, transient connections may occur. We recommend that you scale your cluster during off-peak hours or make sure that your application is configured to automatically reconnect to your cluster.
 * *   You can change an AnalyticDB for MySQL cluster from Data Warehouse Edition to Data Lakehouse Edition, but not the other way around. For more information, see Change a cluster from Data Warehouse Edition to Data Lakehouse Edition.
 * *   For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ModifyDBClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterResponse
 */
ModifyDBClusterResponse Client::modifyDBClusterWithOptions(const ModifyDBClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputeResource()) {
    query["ComputeResource"] = request.computeResource();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEnableDefaultResourcePool()) {
    query["EnableDefaultResourcePool"] = request.enableDefaultResourcePool();
  }

  if (!!request.hasProductForm()) {
    query["ProductForm"] = request.productForm();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReservedNodeCount()) {
    query["ReservedNodeCount"] = request.reservedNodeCount();
  }

  if (!!request.hasReservedNodeSize()) {
    query["ReservedNodeSize"] = request.reservedNodeSize();
  }

  if (!!request.hasStorageResource()) {
    query["StorageResource"] = request.storageResource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBCluster"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterResponse>();
}

/**
 * @summary Changes the configurations of an AnalyticDB for MySQL Data Lakehouse Edition cluster.
 *
 * @description ### [](#)
 * *   During a scaling event, you are not allowed to execute the `SUBMIT JOB` statement to submit asynchronous jobs. If your business requires asynchronous jobs, perform scaling during appropriate periods.
 * *   When you scale a cluster, data in the cluster is migrated for redistribution. The amount of time that is required to migrate data is proportional to the data volume. During a scaling event, the services provided by the cluster are not interrupted. When you downgrade cluster specifications, data migration may require up to dozens of hours to complete. Proceed with caution especially if your cluster contains a large amount of data.
 * *   If the cluster has a built-in dataset loaded, make sure that the cluster has reserved storage resources of at least 24 AnalyticDB compute units (ACUs). Otherwise, the built-in dataset cannot be used.
 * *   When the scaling process is about to end, transient connections may occur. We recommend that you scale your cluster during off-peak hours or make sure that your application is configured to automatically reconnect to your cluster.
 * *   You can change an AnalyticDB for MySQL cluster from Data Warehouse Edition to Data Lakehouse Edition, but not the other way around. For more information, see Change a cluster from Data Warehouse Edition to Data Lakehouse Edition.
 * *   For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ModifyDBClusterRequest
 * @return ModifyDBClusterResponse
 */
ModifyDBClusterResponse Client::modifyDBCluster(const ModifyDBClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of an AnalyticDB for MySQL cluster to facilitate the maintenance and management of the cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ModifyDBClusterDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterDescriptionResponse
 */
ModifyDBClusterDescriptionResponse Client::modifyDBClusterDescriptionWithOptions(const ModifyDBClusterDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterDescription()) {
    query["DBClusterDescription"] = request.DBClusterDescription();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterDescription"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterDescriptionResponse>();
}

/**
 * @summary Modifies the description of an AnalyticDB for MySQL cluster to facilitate the maintenance and management of the cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ModifyDBClusterDescriptionRequest
 * @return ModifyDBClusterDescriptionResponse
 */
ModifyDBClusterDescriptionResponse Client::modifyDBClusterDescription(const ModifyDBClusterDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies the maintenance window of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ModifyDBClusterMaintainTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterMaintainTimeResponse
 */
ModifyDBClusterMaintainTimeResponse Client::modifyDBClusterMaintainTimeWithOptions(const ModifyDBClusterMaintainTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasMaintainTime()) {
    query["MaintainTime"] = request.maintainTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterMaintainTime"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterMaintainTimeResponse>();
}

/**
 * @summary Modifies the maintenance window of an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ModifyDBClusterMaintainTimeRequest
 * @return ModifyDBClusterMaintainTimeResponse
 */
ModifyDBClusterMaintainTimeResponse Client::modifyDBClusterMaintainTime(const ModifyDBClusterMaintainTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterMaintainTimeWithOptions(request, runtime);
}

/**
 * @summary Changes the resource group to which an AnalyticDB for MySQL cluster belongs.
 *
 * @param request ModifyDBClusterResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterResourceGroupResponse
 */
ModifyDBClusterResourceGroupResponse Client::modifyDBClusterResourceGroupWithOptions(const ModifyDBClusterResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasNewResourceGroupId()) {
    query["NewResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterResourceGroup"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterResourceGroupResponse>();
}

/**
 * @summary Changes the resource group to which an AnalyticDB for MySQL cluster belongs.
 *
 * @param request ModifyDBClusterResourceGroupRequest
 * @return ModifyDBClusterResourceGroupResponse
 */
ModifyDBClusterResourceGroupResponse Client::modifyDBClusterResourceGroup(const ModifyDBClusterResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterResourceGroupWithOptions(request, runtime);
}

/**
 * @summary 配置SSL
 *
 * @param request ModifyDBClusterSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterSSLResponse
 */
ModifyDBClusterSSLResponse Client::modifyDBClusterSSLWithOptions(const ModifyDBClusterSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.connectionString();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEnableSSL()) {
    query["EnableSSL"] = request.enableSSL();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterSSL"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterSSLResponse>();
}

/**
 * @summary 配置SSL
 *
 * @param request ModifyDBClusterSSLRequest
 * @return ModifyDBClusterSSLResponse
 */
ModifyDBClusterSSLResponse Client::modifyDBClusterSSL(const ModifyDBClusterSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterSSLWithOptions(request, runtime);
}

/**
 * @summary Changes the virtual IP address (VIP) that is used to connect to an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyDBClusterVipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBClusterVipResponse
 */
ModifyDBClusterVipResponse Client::modifyDBClusterVipWithOptions(const ModifyDBClusterVipRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectString()) {
    query["ConnectString"] = request.connectString();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasVPCId()) {
    query["VPCId"] = request.VPCId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBClusterVip"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBClusterVipResponse>();
}

/**
 * @summary Changes the virtual IP address (VIP) that is used to connect to an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyDBClusterVipRequest
 * @return ModifyDBClusterVipResponse
 */
ModifyDBClusterVipResponse Client::modifyDBClusterVip(const ModifyDBClusterVipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBClusterVipWithOptions(request, runtime);
}

/**
 * @summary Modifies the amount of reserved computing resources for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param tmpReq ModifyDBResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBResourceGroupResponse
 */
ModifyDBResourceGroupResponse Client::modifyDBResourceGroupWithOptions(const ModifyDBResourceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyDBResourceGroupShrinkRequest request = ModifyDBResourceGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEngineParams()) {
    request.setEngineParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.engineParams(), "EngineParams", "json"));
  }

  if (!!tmpReq.hasRayConfig()) {
    request.setRayConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.rayConfig(), "RayConfig", "json"));
  }

  if (!!tmpReq.hasRules()) {
    request.setRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.rules(), "Rules", "json"));
  }

  json query = {};
  if (!!request.hasAutoStopInterval()) {
    query["AutoStopInterval"] = request.autoStopInterval();
  }

  if (!!request.hasClusterMode()) {
    query["ClusterMode"] = request.clusterMode();
  }

  if (!!request.hasClusterSizeResource()) {
    query["ClusterSizeResource"] = request.clusterSizeResource();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEnableSpot()) {
    query["EnableSpot"] = request.enableSpot();
  }

  if (!!request.hasEngineParamsShrink()) {
    query["EngineParams"] = request.engineParamsShrink();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasGroupType()) {
    query["GroupType"] = request.groupType();
  }

  if (!!request.hasMaxClusterCount()) {
    query["MaxClusterCount"] = request.maxClusterCount();
  }

  if (!!request.hasMaxComputeResource()) {
    query["MaxComputeResource"] = request.maxComputeResource();
  }

  if (!!request.hasMaxGpuQuantity()) {
    query["MaxGpuQuantity"] = request.maxGpuQuantity();
  }

  if (!!request.hasMinClusterCount()) {
    query["MinClusterCount"] = request.minClusterCount();
  }

  if (!!request.hasMinComputeResource()) {
    query["MinComputeResource"] = request.minComputeResource();
  }

  if (!!request.hasMinGpuQuantity()) {
    query["MinGpuQuantity"] = request.minGpuQuantity();
  }

  if (!!request.hasRayConfigShrink()) {
    query["RayConfig"] = request.rayConfigShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRulesShrink()) {
    query["Rules"] = request.rulesShrink();
  }

  if (!!request.hasSpecName()) {
    query["SpecName"] = request.specName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTargetResourceGroupName()) {
    query["TargetResourceGroupName"] = request.targetResourceGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBResourceGroup"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBResourceGroupResponse>();
}

/**
 * @summary Modifies the amount of reserved computing resources for an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ModifyDBResourceGroupRequest
 * @return ModifyDBResourceGroupResponse
 */
ModifyDBResourceGroupResponse Client::modifyDBResourceGroup(const ModifyDBResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies a scaling plan for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see Endpoints.
 *
 * @param request ModifyElasticPlanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyElasticPlanResponse
 */
ModifyElasticPlanResponse Client::modifyElasticPlanWithOptions(const ModifyElasticPlanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCronExpression()) {
    query["CronExpression"] = request.cronExpression();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasElasticPlanName()) {
    query["ElasticPlanName"] = request.elasticPlanName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTargetSize()) {
    query["TargetSize"] = request.targetSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyElasticPlan"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyElasticPlanResponse>();
}

/**
 * @summary Modifies a scaling plan for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see Endpoints.
 *
 * @param request ModifyElasticPlanRequest
 * @return ModifyElasticPlanResponse
 */
ModifyElasticPlanResponse Client::modifyElasticPlan(const ModifyElasticPlanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyElasticPlanWithOptions(request, runtime);
}

/**
 * @summary Modifies the disk cache size in the query acceleration configuration of an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyEssdCacheConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyEssdCacheConfigResponse
 */
ModifyEssdCacheConfigResponse Client::modifyEssdCacheConfigWithOptions(const ModifyEssdCacheConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEnableEssdCache()) {
    query["EnableEssdCache"] = request.enableEssdCache();
  }

  if (!!request.hasEssdCacheSize()) {
    query["EssdCacheSize"] = request.essdCacheSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyEssdCacheConfig"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyEssdCacheConfigResponse>();
}

/**
 * @summary Modifies the disk cache size in the query acceleration configuration of an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyEssdCacheConfigRequest
 * @return ModifyEssdCacheConfigResponse
 */
ModifyEssdCacheConfigResponse Client::modifyEssdCacheConfig(const ModifyEssdCacheConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyEssdCacheConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the lake cache size of an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyLakeCacheSizeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLakeCacheSizeResponse
 */
ModifyLakeCacheSizeResponse Client::modifyLakeCacheSizeWithOptions(const ModifyLakeCacheSizeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCapacity()) {
    query["Capacity"] = request.capacity();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEnableLakeCache()) {
    query["EnableLakeCache"] = request.enableLakeCache();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyLakeCacheSize"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyLakeCacheSizeResponse>();
}

/**
 * @summary Modifies the lake cache size of an AnalyticDB for MySQL cluster.
 *
 * @param request ModifyLakeCacheSizeRequest
 * @return ModifyLakeCacheSizeResponse
 */
ModifyLakeCacheSizeResponse Client::modifyLakeCacheSize(const ModifyLakeCacheSizeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLakeCacheSizeWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about a custom monitoring view.
 *
 * @param tmpReq ModifyPerformanceViewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyPerformanceViewResponse
 */
ModifyPerformanceViewResponse Client::modifyPerformanceViewWithOptions(const ModifyPerformanceViewRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyPerformanceViewShrinkRequest request = ModifyPerformanceViewShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasViewDetail()) {
    request.setViewDetailShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.viewDetail(), "ViewDetail", "json"));
  }

  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasViewDetailShrink()) {
    query["ViewDetail"] = request.viewDetailShrink();
  }

  if (!!request.hasViewName()) {
    query["ViewName"] = request.viewName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyPerformanceView"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyPerformanceViewResponse>();
}

/**
 * @summary Modifies the information about a custom monitoring view.
 *
 * @param request ModifyPerformanceViewRequest
 * @return ModifyPerformanceViewResponse
 */
ModifyPerformanceViewResponse Client::modifyPerformanceView(const ModifyPerformanceViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyPerformanceViewWithOptions(request, runtime);
}

/**
 * @summary Modifies the vSwitches that are connected to elastic network interfaces (ENIs).
 *
 * @param request ModifyUserEniVswitchOptionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUserEniVswitchOptionsResponse
 */
ModifyUserEniVswitchOptionsResponse Client::modifyUserEniVswitchOptionsWithOptions(const ModifyUserEniVswitchOptionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDbClusterId()) {
    query["DbClusterId"] = request.dbClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  json body = {};
  if (!!request.hasVSwitchOptions()) {
    body["VSwitchOptions"] = request.vSwitchOptions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifyUserEniVswitchOptions"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUserEniVswitchOptionsResponse>();
}

/**
 * @summary Modifies the vSwitches that are connected to elastic network interfaces (ENIs).
 *
 * @param request ModifyUserEniVswitchOptionsRequest
 * @return ModifyUserEniVswitchOptionsResponse
 */
ModifyUserEniVswitchOptionsResponse Client::modifyUserEniVswitchOptions(const ModifyUserEniVswitchOptionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUserEniVswitchOptionsWithOptions(request, runtime);
}

/**
 * @summary Preloads metrics for a Spark application.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request PreloadSparkAppMetricsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreloadSparkAppMetricsResponse
 */
PreloadSparkAppMetricsResponse Client::preloadSparkAppMetricsWithOptions(const PreloadSparkAppMetricsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PreloadSparkAppMetrics"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreloadSparkAppMetricsResponse>();
}

/**
 * @summary Preloads metrics for a Spark application.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request PreloadSparkAppMetricsRequest
 * @return PreloadSparkAppMetricsResponse
 */
PreloadSparkAppMetricsResponse Client::preloadSparkAppMetrics(const PreloadSparkAppMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return preloadSparkAppMetricsWithOptions(request, runtime);
}

/**
 * @summary Releases the public endpoint of an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ReleaseClusterPublicConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ReleaseClusterPublicConnectionResponse
 */
ReleaseClusterPublicConnectionResponse Client::releaseClusterPublicConnectionWithOptions(const ReleaseClusterPublicConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ReleaseClusterPublicConnection"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ReleaseClusterPublicConnectionResponse>();
}

/**
 * @summary Releases the public endpoint of an AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ReleaseClusterPublicConnectionRequest
 * @return ReleaseClusterPublicConnectionResponse
 */
ReleaseClusterPublicConnectionResponse Client::releaseClusterPublicConnection(const ReleaseClusterPublicConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return releaseClusterPublicConnectionWithOptions(request, runtime);
}

/**
 * @summary Resets the password of a database account for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ResetAccountPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPasswordWithOptions(const ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountDescription()) {
    query["AccountDescription"] = request.accountDescription();
  }

  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasAccountPassword()) {
    query["AccountPassword"] = request.accountPassword();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.engine();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetAccountPassword"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetAccountPasswordResponse>();
}

/**
 * @summary Resets the password of a database account for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request ResetAccountPasswordRequest
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPassword(const ResetAccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAccountPasswordWithOptions(request, runtime);
}

/**
 * @summary Revokes permissions from the service account of an AnalyticDB for MySQL cluster.
 *
 * @param request RevokeOperatorPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeOperatorPermissionResponse
 */
RevokeOperatorPermissionResponse Client::revokeOperatorPermissionWithOptions(const RevokeOperatorPermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeOperatorPermission"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeOperatorPermissionResponse>();
}

/**
 * @summary Revokes permissions from the service account of an AnalyticDB for MySQL cluster.
 *
 * @param request RevokeOperatorPermissionRequest
 * @return RevokeOperatorPermissionResponse
 */
RevokeOperatorPermissionResponse Client::revokeOperatorPermission(const RevokeOperatorPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeOperatorPermissionWithOptions(request, runtime);
}

/**
 * @summary Modifies the Spark log configuration.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request SetSparkAppLogRootPathRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetSparkAppLogRootPathResponse
 */
SetSparkAppLogRootPathResponse Client::setSparkAppLogRootPathWithOptions(const SetSparkAppLogRootPathRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasOssLogPath()) {
    body["OssLogPath"] = request.ossLogPath();
  }

  if (!!request.hasUseDefaultOss()) {
    body["UseDefaultOss"] = request.useDefaultOss();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SetSparkAppLogRootPath"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetSparkAppLogRootPathResponse>();
}

/**
 * @summary Modifies the Spark log configuration.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request SetSparkAppLogRootPathRequest
 * @return SetSparkAppLogRootPathResponse
 */
SetSparkAppLogRootPathResponse Client::setSparkAppLogRootPath(const SetSparkAppLogRootPathRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setSparkAppLogRootPathWithOptions(request, runtime);
}

/**
 * @summary Starts an AnalyticDB Pipeline Service (APS) job.
 *
 * @param request StartApsJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartApsJobResponse
 */
StartApsJobResponse Client::startApsJobWithOptions(const StartApsJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApsJobId()) {
    body["ApsJobId"] = request.apsJobId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartApsJob"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartApsJobResponse>();
}

/**
 * @summary Starts an AnalyticDB Pipeline Service (APS) job.
 *
 * @param request StartApsJobRequest
 * @return StartApsJobResponse
 */
StartApsJobResponse Client::startApsJob(const StartApsJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startApsJobWithOptions(request, runtime);
}

/**
 * @summary Starts a Spark session.
 *
 * @param request StartSparkReplSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartSparkReplSessionResponse
 */
StartSparkReplSessionResponse Client::startSparkReplSessionWithOptions(const StartSparkReplSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.config();
  }

  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasResourceGroupName()) {
    body["ResourceGroupName"] = request.resourceGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartSparkReplSession"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartSparkReplSessionResponse>();
}

/**
 * @summary Starts a Spark session.
 *
 * @param request StartSparkReplSessionRequest
 * @return StartSparkReplSessionResponse
 */
StartSparkReplSessionResponse Client::startSparkReplSession(const StartSparkReplSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startSparkReplSessionWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI StartSparkSQLEngine is deprecated
 *
 * @summary Starts the Spark SQL engine.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request StartSparkSQLEngineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartSparkSQLEngineResponse
 */
StartSparkSQLEngineResponse Client::startSparkSQLEngineWithOptions(const StartSparkSQLEngineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.config();
  }

  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasJars()) {
    body["Jars"] = request.jars();
  }

  if (!!request.hasMaxExecutor()) {
    body["MaxExecutor"] = request.maxExecutor();
  }

  if (!!request.hasMinExecutor()) {
    body["MinExecutor"] = request.minExecutor();
  }

  if (!!request.hasResourceGroupName()) {
    body["ResourceGroupName"] = request.resourceGroupName();
  }

  if (!!request.hasSlotNum()) {
    body["SlotNum"] = request.slotNum();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartSparkSQLEngine"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartSparkSQLEngineResponse>();
}

/**
 * @deprecated OpenAPI StartSparkSQLEngine is deprecated
 *
 * @summary Starts the Spark SQL engine.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request StartSparkSQLEngineRequest
 * @return StartSparkSQLEngineResponse
 */
StartSparkSQLEngineResponse Client::startSparkSQLEngine(const StartSparkSQLEngineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startSparkSQLEngineWithOptions(request, runtime);
}

/**
 * @summary Submits an SQL query and exports a result set.
 *
 * @param request SubmitResultExportJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitResultExportJobResponse
 */
SubmitResultExportJobResponse Client::submitResultExportJobWithOptions(const SubmitResultExportJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasEngine()) {
    body["Engine"] = request.engine();
  }

  if (!!request.hasExportType()) {
    body["ExportType"] = request.exportType();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroup()) {
    body["ResourceGroup"] = request.resourceGroup();
  }

  if (!!request.hasSQL()) {
    body["SQL"] = request.SQL();
  }

  if (!!request.hasSchema()) {
    body["Schema"] = request.schema();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitResultExportJob"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitResultExportJobResponse>();
}

/**
 * @summary Submits an SQL query and exports a result set.
 *
 * @param request SubmitResultExportJobRequest
 * @return SubmitResultExportJobResponse
 */
SubmitResultExportJobResponse Client::submitResultExportJob(const SubmitResultExportJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitResultExportJobWithOptions(request, runtime);
}

/**
 * @summary Submits a Spark application.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request SubmitSparkAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSparkAppResponse
 */
SubmitSparkAppResponse Client::submitSparkAppWithOptions(const SubmitSparkAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentSource()) {
    body["AgentSource"] = request.agentSource();
  }

  if (!!request.hasAgentVersion()) {
    body["AgentVersion"] = request.agentVersion();
  }

  if (!!request.hasAppName()) {
    body["AppName"] = request.appName();
  }

  if (!!request.hasAppType()) {
    body["AppType"] = request.appType();
  }

  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasData()) {
    body["Data"] = request.data();
  }

  if (!!request.hasResourceGroupName()) {
    body["ResourceGroupName"] = request.resourceGroupName();
  }

  if (!!request.hasTemplateFileId()) {
    body["TemplateFileId"] = request.templateFileId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitSparkApp"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSparkAppResponse>();
}

/**
 * @summary Submits a Spark application.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request SubmitSparkAppRequest
 * @return SubmitSparkAppResponse
 */
SubmitSparkAppResponse Client::submitSparkApp(const SubmitSparkAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSparkAppWithOptions(request, runtime);
}

/**
 * @summary Submits a Spark log analysis task and queries the analysis results.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request SubmitSparkLogAnalyzeTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSparkLogAnalyzeTaskResponse
 */
SubmitSparkLogAnalyzeTaskResponse Client::submitSparkLogAnalyzeTaskWithOptions(const SubmitSparkLogAnalyzeTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitSparkLogAnalyzeTask"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSparkLogAnalyzeTaskResponse>();
}

/**
 * @summary Submits a Spark log analysis task and queries the analysis results.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request SubmitSparkLogAnalyzeTaskRequest
 * @return SubmitSparkLogAnalyzeTaskResponse
 */
SubmitSparkLogAnalyzeTaskResponse Client::submitSparkLogAnalyzeTask(const SubmitSparkLogAnalyzeTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSparkLogAnalyzeTaskWithOptions(request, runtime);
}

/**
 * @summary Suspends an AnalyticDB Pipeline Service (APS) job.
 *
 * @param request SuspendApsJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendApsJobResponse
 */
SuspendApsJobResponse Client::suspendApsJobWithOptions(const SuspendApsJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApsJobId()) {
    body["ApsJobId"] = request.apsJobId();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SuspendApsJob"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendApsJobResponse>();
}

/**
 * @summary Suspends an AnalyticDB Pipeline Service (APS) job.
 *
 * @param request SuspendApsJobRequest
 * @return SuspendApsJobResponse
 */
SuspendApsJobResponse Client::suspendApsJob(const SuspendApsJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendApsJobWithOptions(request, runtime);
}

/**
 * @summary Disassociates a standard account of an AnalyticDB for MySQL cluster from a Resource Access Management (RAM) user.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request UnbindAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindAccountResponse
 */
UnbindAccountResponse Client::unbindAccountWithOptions(const UnbindAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountName()) {
    query["AccountName"] = request.accountName();
  }

  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindAccount"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindAccountResponse>();
}

/**
 * @summary Disassociates a standard account of an AnalyticDB for MySQL cluster from a Resource Access Management (RAM) user.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request UnbindAccountRequest
 * @return UnbindAccountResponse
 */
UnbindAccountResponse Client::unbindAccount(const UnbindAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindAccountWithOptions(request, runtime);
}

/**
 * @summary Disassociates resource groups from database accounts for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request UnbindDBResourceGroupWithUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindDBResourceGroupWithUserResponse
 */
UnbindDBResourceGroupWithUserResponse Client::unbindDBResourceGroupWithUserWithOptions(const UnbindDBResourceGroupWithUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasGroupUser()) {
    query["GroupUser"] = request.groupUser();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindDBResourceGroupWithUser"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindDBResourceGroupWithUserResponse>();
}

/**
 * @summary Disassociates resource groups from database accounts for an AnalyticDB for MySQL cluster.
 *
 * @description For information about the endpoints of AnalyticDB for MySQL, see [Endpoints](https://help.aliyun.com/document_detail/612373.html).
 *
 * @param request UnbindDBResourceGroupWithUserRequest
 * @return UnbindDBResourceGroupWithUserResponse
 */
UnbindDBResourceGroupWithUserResponse Client::unbindDBResourceGroupWithUser(const UnbindDBResourceGroupWithUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindDBResourceGroupWithUserWithOptions(request, runtime);
}

/**
 * @summary Updates a lake storage.
 *
 * @param tmpReq UpdateLakeStorageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLakeStorageResponse
 */
UpdateLakeStorageResponse Client::updateLakeStorageWithOptions(const UpdateLakeStorageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateLakeStorageShrinkRequest request = UpdateLakeStorageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPermissions()) {
    request.setPermissionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.permissions(), "Permissions", "json"));
  }

  json body = {};
  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasLakeStorageId()) {
    body["LakeStorageId"] = request.lakeStorageId();
  }

  if (!!request.hasPermissionsShrink()) {
    body["Permissions"] = request.permissionsShrink();
  }

  if (!!request.hasRegionId()) {
    body["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateLakeStorage"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLakeStorageResponse>();
}

/**
 * @summary Updates a lake storage.
 *
 * @param request UpdateLakeStorageRequest
 * @return UpdateLakeStorageResponse
 */
UpdateLakeStorageResponse Client::updateLakeStorage(const UpdateLakeStorageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLakeStorageWithOptions(request, runtime);
}

/**
 * @summary Updates a Spark application template.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request UpdateSparkTemplateFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSparkTemplateFileResponse
 */
UpdateSparkTemplateFileResponse Client::updateSparkTemplateFileWithOptions(const UpdateSparkTemplateFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasDBClusterId()) {
    body["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasResourceGroupName()) {
    body["ResourceGroupName"] = request.resourceGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateSparkTemplateFile"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSparkTemplateFileResponse>();
}

/**
 * @summary Updates a Spark application template.
 *
 * @description *   Regional public endpoint: `adb.<region-id>.aliyuncs.com`. Example: `adb.cn-hangzhou.aliyuncs.com`.
 * *   Regional Virtual Private Cloud (VPC) endpoint: `adb-vpc.<region-id>.aliyuncs.com`. Example: `adb-vpc.cn-hangzhou.aliyuncs.com`.
 * >  If HTTP status code 409 is returned when you call this operation in the China (Qingdao), China (Shenzhen), China (Guangzhou), or China (Hong Kong) region, contact technical support.
 *
 * @param request UpdateSparkTemplateFileRequest
 * @return UpdateSparkTemplateFileResponse
 */
UpdateSparkTemplateFileResponse Client::updateSparkTemplateFile(const UpdateSparkTemplateFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSparkTemplateFileWithOptions(request, runtime);
}

/**
 * @summary Updates the minor version of an AnalyticDB for MySQL cluster.
 *
 * @param request UpgradeKernelVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeKernelVersionResponse
 */
UpgradeKernelVersionResponse Client::upgradeKernelVersionWithOptions(const UpgradeKernelVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBClusterId()) {
    query["DBClusterId"] = request.DBClusterId();
  }

  if (!!request.hasDBVersion()) {
    query["DBVersion"] = request.DBVersion();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSwitchMode()) {
    query["SwitchMode"] = request.switchMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeKernelVersion"},
    {"version" , "2021-12-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeKernelVersionResponse>();
}

/**
 * @summary Updates the minor version of an AnalyticDB for MySQL cluster.
 *
 * @param request UpgradeKernelVersionRequest
 * @return UpgradeKernelVersionResponse
 */
UpgradeKernelVersionResponse Client::upgradeKernelVersion(const UpgradeKernelVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeKernelVersionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Adb20211201