#include <darabonba/Core.hpp>
#include <alibabacloud/Clickhouse20230522.hpp>
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
using namespace AlibabaCloud::Clickhouse20230522::Models;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{

AlibabaCloud::Clickhouse20230522::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-2-pop" , "clickhouse.aliyuncs.com"},
    {"ap-southeast-1" , "clickhouse.aliyuncs.com"},
    {"cn-beijing" , "clickhouse.aliyuncs.com"},
    {"cn-beijing-finance-1" , "clickhouse.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "clickhouse.aliyuncs.com"},
    {"cn-beijing-gov-1" , "clickhouse.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "clickhouse.aliyuncs.com"},
    {"cn-edge-1" , "clickhouse.aliyuncs.com"},
    {"cn-fujian" , "clickhouse.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "clickhouse.aliyuncs.com"},
    {"cn-hangzhou" , "clickhouse.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "clickhouse.aliyuncs.com"},
    {"cn-hangzhou-finance" , "clickhouse.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "clickhouse.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "clickhouse.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "clickhouse.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "clickhouse.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "clickhouse.aliyuncs.com"},
    {"cn-hongkong" , "clickhouse.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "clickhouse.aliyuncs.com"},
    {"cn-north-2-gov-1" , "clickhouse.aliyuncs.com"},
    {"cn-qingdao" , "clickhouse.aliyuncs.com"},
    {"cn-qingdao-nebula" , "clickhouse.aliyuncs.com"},
    {"cn-shanghai" , "clickhouse.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "clickhouse.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "clickhouse.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "clickhouse.aliyuncs.com"},
    {"cn-shanghai-inner" , "clickhouse.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "clickhouse.aliyuncs.com"},
    {"cn-shenzhen" , "clickhouse.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "clickhouse.aliyuncs.com"},
    {"cn-shenzhen-inner" , "clickhouse.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "clickhouse.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "clickhouse.aliyuncs.com"},
    {"cn-wuhan" , "clickhouse.aliyuncs.com"},
    {"cn-yushanfang" , "clickhouse.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "clickhouse.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "clickhouse.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "clickhouse.aliyuncs.com"},
    {"eu-west-1-oxs" , "clickhouse.aliyuncs.com"},
    {"me-east-1" , "clickhouse.aliyuncs.com"},
    {"rus-west-1-pop" , "clickhouse.aliyuncs.com"},
    {"us-east-1" , "clickhouse.aliyuncs.com"},
    {"us-west-1" , "clickhouse.aliyuncs.com"},
    {"me-central-1" , "clickhouse.me-central-1.aliyuncs.com"},
    {"eu-west-1" , "clickhouse.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "clickhouse.eu-central-1.aliyuncs.com"},
    {"cn-zhangjiakou" , "clickhouse.cn-zhangjiakou.aliyuncs.com"},
    {"cn-wulanchabu" , "clickhouse.aliyuncs.com"},
    {"cn-huhehaote" , "clickhouse.cn-huhehaote.aliyuncs.com"},
    {"cn-guangzhou" , "clickhouse.cn-guangzhou.aliyuncs.com"},
    {"cn-chengdu" , "clickhouse.cn-chengdu.aliyuncs.com"},
    {"ap-southeast-6" , "clickhouse.ap-southeast-6.aliyuncs.com"},
    {"ap-southeast-5" , "clickhouse.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-3" , "clickhouse.aliyuncs.com"},
    {"ap-northeast-1" , "clickhouse.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("clickhouse", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Attaches a whitelist template to instances.
 *
 * @param request AttachWhitelistTemplateToInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachWhitelistTemplateToInstanceResponse
 */
AttachWhitelistTemplateToInstanceResponse Client::attachWhitelistTemplateToInstanceWithOptions(const AttachWhitelistTemplateToInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachWhitelistTemplateToInstance"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachWhitelistTemplateToInstanceResponse>();
}

/**
 * @summary Attaches a whitelist template to instances.
 *
 * @param request AttachWhitelistTemplateToInstanceRequest
 * @return AttachWhitelistTemplateToInstanceResponse
 */
AttachWhitelistTemplateToInstanceResponse Client::attachWhitelistTemplateToInstance(const AttachWhitelistTemplateToInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachWhitelistTemplateToInstanceWithOptions(request, runtime);
}

/**
 * @summary Changes the resource group of a ClickHouse Enterprise instance.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.getResourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Changes the resource group of a ClickHouse Enterprise instance.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a database account for an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param tmpReq CreateAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccountWithOptions(const CreateAccountRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAccountShrinkRequest request = CreateAccountShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDmlAuthSetting()) {
    request.setDmlAuthSettingShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDmlAuthSetting(), "DmlAuthSetting", "json"));
  }

  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasAccountType()) {
    query["AccountType"] = request.getAccountType();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDmlAuthSettingShrink()) {
    query["DmlAuthSetting"] = request.getDmlAuthSettingShrink();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAccount"},
    {"version" , "2023-05-22"},
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
 * @summary Creates a database account for an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request CreateAccountRequest
 * @return CreateAccountResponse
 */
CreateAccountResponse Client::createAccount(const CreateAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAccountWithOptions(request, runtime);
}

/**
 * @summary Creates a backup policy for a specified ClickHouse Enterprise Edition cluster.
 *
 * @param request CreateBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBackupPolicyResponse
 */
CreateBackupPolicyResponse Client::createBackupPolicyWithOptions(const CreateBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupRetentionPeriod()) {
    query["BackupRetentionPeriod"] = request.getBackupRetentionPeriod();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasPreferredBackupPeriod()) {
    query["PreferredBackupPeriod"] = request.getPreferredBackupPeriod();
  }

  if (!!request.hasPreferredBackupTime()) {
    query["PreferredBackupTime"] = request.getPreferredBackupTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateBackupPolicy"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBackupPolicyResponse>();
}

/**
 * @summary Creates a backup policy for a specified ClickHouse Enterprise Edition cluster.
 *
 * @param request CreateBackupPolicyRequest
 * @return CreateBackupPolicyResponse
 */
CreateBackupPolicyResponse Client::createBackupPolicy(const CreateBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Creates a database.
 *
 * @param request CreateDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBResponse
 */
CreateDBResponse Client::createDBWithOptions(const CreateDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDB"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBResponse>();
}

/**
 * @summary Creates a database.
 *
 * @param request CreateDBRequest
 * @return CreateDBResponse
 */
CreateDBResponse Client::createDB(const CreateDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBWithOptions(request, runtime);
}

/**
 * @summary To create a ClickHouse Enterprise Edition cluster, call the `CreateDBInstance` API.
 *
 * @param tmpReq CreateDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDBInstanceResponse
 */
CreateDBInstanceResponse Client::createDBInstanceWithOptions(const CreateDBInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDBInstanceShrinkRequest request = CreateDBInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMultiZone()) {
    request.setMultiZoneShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMultiZone(), "MultiZone", "json"));
  }

  json query = {};
  if (!!request.hasBackupSetId()) {
    query["BackupSetId"] = request.getBackupSetId();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceDescription()) {
    query["DBInstanceDescription"] = request.getDBInstanceDescription();
  }

  if (!!request.hasDBTimeZone()) {
    query["DBTimeZone"] = request.getDBTimeZone();
  }

  if (!!request.hasDeploySchema()) {
    query["DeploySchema"] = request.getDeploySchema();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineVersion()) {
    query["EngineVersion"] = request.getEngineVersion();
  }

  if (!!request.hasMultiZoneShrink()) {
    query["MultiZone"] = request.getMultiZoneShrink();
  }

  if (!!request.hasNodeCount()) {
    query["NodeCount"] = request.getNodeCount();
  }

  if (!!request.hasNodeScaleMax()) {
    query["NodeScaleMax"] = request.getNodeScaleMax();
  }

  if (!!request.hasNodeScaleMin()) {
    query["NodeScaleMin"] = request.getNodeScaleMin();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasScaleMax()) {
    query["ScaleMax"] = request.getScaleMax();
  }

  if (!!request.hasScaleMin()) {
    query["ScaleMin"] = request.getScaleMin();
  }

  if (!!request.hasSourceDBInstanceId()) {
    query["SourceDBInstanceId"] = request.getSourceDBInstanceId();
  }

  if (!!request.hasStorageQuota()) {
    query["StorageQuota"] = request.getStorageQuota();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasVpcId()) {
    query["VpcId"] = request.getVpcId();
  }

  if (!!request.hasVswitchId()) {
    query["VswitchId"] = request.getVswitchId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDBInstance"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDBInstanceResponse>();
}

/**
 * @summary To create a ClickHouse Enterprise Edition cluster, call the `CreateDBInstance` API.
 *
 * @param request CreateDBInstanceRequest
 * @return CreateDBInstanceResponse
 */
CreateDBInstanceResponse Client::createDBInstance(const CreateDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a public endpoint that provides a public address to access a cluster.
 *
 * @param request CreateEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEndpointResponse
 */
CreateEndpointResponse Client::createEndpointWithOptions(const CreateEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputingGroupId()) {
    query["ComputingGroupId"] = request.getComputingGroupId();
  }

  if (!!request.hasConnectionPrefix()) {
    query["ConnectionPrefix"] = request.getConnectionPrefix();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceNetType()) {
    query["DBInstanceNetType"] = request.getDBInstanceNetType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEndpoint"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEndpointResponse>();
}

/**
 * @summary Creates a public endpoint that provides a public address to access a cluster.
 *
 * @param request CreateEndpointRequest
 * @return CreateEndpointResponse
 */
CreateEndpointResponse Client::createEndpoint(const CreateEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEndpointWithOptions(request, runtime);
}

/**
 * @summary Creates a Langfuse organization.
 *
 * @param request CreateLangfuseOrgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLangfuseOrgResponse
 */
CreateLangfuseOrgResponse Client::createLangfuseOrgWithOptions(const CreateLangfuseOrgRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerEmail()) {
    query["OwnerEmail"] = request.getOwnerEmail();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLangfuseOrg"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLangfuseOrgResponse>();
}

/**
 * @summary Creates a Langfuse organization.
 *
 * @param request CreateLangfuseOrgRequest
 * @return CreateLangfuseOrgResponse
 */
CreateLangfuseOrgResponse Client::createLangfuseOrg(const CreateLangfuseOrgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLangfuseOrgWithOptions(request, runtime);
}

/**
 * @summary Adds a user to a Langfuse organization.
 *
 * @param request CreateLangfuseOrgMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLangfuseOrgMemberResponse
 */
CreateLangfuseOrgMemberResponse Client::createLangfuseOrgMemberWithOptions(const CreateLangfuseOrgMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasOrganizationId()) {
    query["OrganizationId"] = request.getOrganizationId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.getRole();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLangfuseOrgMember"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLangfuseOrgMemberResponse>();
}

/**
 * @summary Adds a user to a Langfuse organization.
 *
 * @param request CreateLangfuseOrgMemberRequest
 * @return CreateLangfuseOrgMemberResponse
 */
CreateLangfuseOrgMemberResponse Client::createLangfuseOrgMember(const CreateLangfuseOrgMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLangfuseOrgMemberWithOptions(request, runtime);
}

/**
 * @summary Creates a Langfuse project.
 *
 * @param request CreateLangfuseProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLangfuseProjectResponse
 */
CreateLangfuseProjectResponse Client::createLangfuseProjectWithOptions(const CreateLangfuseProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrganizationId()) {
    query["OrganizationId"] = request.getOrganizationId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLangfuseProject"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLangfuseProjectResponse>();
}

/**
 * @summary Creates a Langfuse project.
 *
 * @param request CreateLangfuseProjectRequest
 * @return CreateLangfuseProjectResponse
 */
CreateLangfuseProjectResponse Client::createLangfuseProject(const CreateLangfuseProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLangfuseProjectWithOptions(request, runtime);
}

/**
 * @summary Creates a Langfuse user.
 *
 * @param request CreateLangfuseUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLangfuseUserResponse
 */
CreateLangfuseUserResponse Client::createLangfuseUserWithOptions(const CreateLangfuseUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrgRole()) {
    query["OrgRole"] = request.getOrgRole();
  }

  if (!!request.hasOrganizationId()) {
    query["OrganizationId"] = request.getOrganizationId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLangfuseUser"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLangfuseUserResponse>();
}

/**
 * @summary Creates a Langfuse user.
 *
 * @param request CreateLangfuseUserRequest
 * @return CreateLangfuseUserResponse
 */
CreateLangfuseUserResponse Client::createLangfuseUser(const CreateLangfuseUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLangfuseUserWithOptions(request, runtime);
}

/**
 * @summary Creates a whitelist template.
 *
 * @param request CreateWhitelistTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWhitelistTemplateResponse
 */
CreateWhitelistTemplateResponse Client::createWhitelistTemplateWithOptions(const CreateWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  json body = {};
  if (!!request.hasSecurityIPList()) {
    body["SecurityIPList"] = request.getSecurityIPList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWhitelistTemplate"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWhitelistTemplateResponse>();
}

/**
 * @summary Creates a whitelist template.
 *
 * @param request CreateWhitelistTemplateRequest
 * @return CreateWhitelistTemplateResponse
 */
CreateWhitelistTemplateResponse Client::createWhitelistTemplate(const CreateWhitelistTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWhitelistTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a database account from an ApsaraDB for ClickHouse cluster.
 *
 * @param request DeleteAccountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccountWithOptions(const DeleteAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAccount"},
    {"version" , "2023-05-22"},
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
 * @summary Deletes a database account from an ApsaraDB for ClickHouse cluster.
 *
 * @param request DeleteAccountRequest
 * @return DeleteAccountResponse
 */
DeleteAccountResponse Client::deleteAccount(const DeleteAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAccountWithOptions(request, runtime);
}

/**
 * @summary Deletes the backup policy for a ClickHouse Enterprise Edition cluster.
 *
 * @param request DeleteBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBackupPolicyResponse
 */
DeleteBackupPolicyResponse Client::deleteBackupPolicyWithOptions(const DeleteBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBackupPolicy"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBackupPolicyResponse>();
}

/**
 * @summary Deletes the backup policy for a ClickHouse Enterprise Edition cluster.
 *
 * @param request DeleteBackupPolicyRequest
 * @return DeleteBackupPolicyResponse
 */
DeleteBackupPolicyResponse Client::deleteBackupPolicy(const DeleteBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Call this operation to delete a database.
 *
 * @param request DeleteDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBResponse
 */
DeleteDBResponse Client::deleteDBWithOptions(const DeleteDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDB"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBResponse>();
}

/**
 * @summary Call this operation to delete a database.
 *
 * @param request DeleteDBRequest
 * @return DeleteDBResponse
 */
DeleteDBResponse Client::deleteDB(const DeleteDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBWithOptions(request, runtime);
}

/**
 * @summary The DeleteDBInstance operation releases an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request DeleteDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDBInstanceResponse
 */
DeleteDBInstanceResponse Client::deleteDBInstanceWithOptions(const DeleteDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDBInstance"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDBInstanceResponse>();
}

/**
 * @summary The DeleteDBInstance operation releases an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request DeleteDBInstanceRequest
 * @return DeleteDBInstanceResponse
 */
DeleteDBInstanceResponse Client::deleteDBInstance(const DeleteDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes a public endpoint.
 *
 * @param request DeleteEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEndpointResponse
 */
DeleteEndpointResponse Client::deleteEndpointWithOptions(const DeleteEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputingGroupId()) {
    query["ComputingGroupId"] = request.getComputingGroupId();
  }

  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.getConnectionString();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceNetType()) {
    query["DBInstanceNetType"] = request.getDBInstanceNetType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEndpoint"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEndpointResponse>();
}

/**
 * @summary Deletes a public endpoint.
 *
 * @param request DeleteEndpointRequest
 * @return DeleteEndpointResponse
 */
DeleteEndpointResponse Client::deleteEndpoint(const DeleteEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEndpointWithOptions(request, runtime);
}

/**
 * @summary Releases a Langfuse instance.
 *
 * @param request DeleteLangfuseInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLangfuseInstanceResponse
 */
DeleteLangfuseInstanceResponse Client::deleteLangfuseInstanceWithOptions(const DeleteLangfuseInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLangfuseInstance"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLangfuseInstanceResponse>();
}

/**
 * @summary Releases a Langfuse instance.
 *
 * @param request DeleteLangfuseInstanceRequest
 * @return DeleteLangfuseInstanceResponse
 */
DeleteLangfuseInstanceResponse Client::deleteLangfuseInstance(const DeleteLangfuseInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLangfuseInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes a Langfuse organization.
 *
 * @param request DeleteLangfuseOrgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLangfuseOrgResponse
 */
DeleteLangfuseOrgResponse Client::deleteLangfuseOrgWithOptions(const DeleteLangfuseOrgRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOrganizationId()) {
    query["OrganizationId"] = request.getOrganizationId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLangfuseOrg"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLangfuseOrgResponse>();
}

/**
 * @summary Deletes a Langfuse organization.
 *
 * @param request DeleteLangfuseOrgRequest
 * @return DeleteLangfuseOrgResponse
 */
DeleteLangfuseOrgResponse Client::deleteLangfuseOrg(const DeleteLangfuseOrgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLangfuseOrgWithOptions(request, runtime);
}

/**
 * @summary Removes a user from a Langfuse organization.
 *
 * @param request DeleteLangfuseOrgMembershipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLangfuseOrgMembershipResponse
 */
DeleteLangfuseOrgMembershipResponse Client::deleteLangfuseOrgMembershipWithOptions(const DeleteLangfuseOrgMembershipRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasOrganizationId()) {
    query["OrganizationId"] = request.getOrganizationId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLangfuseOrgMembership"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLangfuseOrgMembershipResponse>();
}

/**
 * @summary Removes a user from a Langfuse organization.
 *
 * @param request DeleteLangfuseOrgMembershipRequest
 * @return DeleteLangfuseOrgMembershipResponse
 */
DeleteLangfuseOrgMembershipResponse Client::deleteLangfuseOrgMembership(const DeleteLangfuseOrgMembershipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLangfuseOrgMembershipWithOptions(request, runtime);
}

/**
 * @summary Deletes a Langfuse project.
 *
 * @param request DeleteLangfuseProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLangfuseProjectResponse
 */
DeleteLangfuseProjectResponse Client::deleteLangfuseProjectWithOptions(const DeleteLangfuseProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOrganizationId()) {
    query["OrganizationId"] = request.getOrganizationId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLangfuseProject"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLangfuseProjectResponse>();
}

/**
 * @summary Deletes a Langfuse project.
 *
 * @param request DeleteLangfuseProjectRequest
 * @return DeleteLangfuseProjectResponse
 */
DeleteLangfuseProjectResponse Client::deleteLangfuseProject(const DeleteLangfuseProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLangfuseProjectWithOptions(request, runtime);
}

/**
 * @summary Deletes a Langfuse user.
 *
 * @param request DeleteLangfuseUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLangfuseUserResponse
 */
DeleteLangfuseUserResponse Client::deleteLangfuseUserWithOptions(const DeleteLangfuseUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLangfuseUser"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLangfuseUserResponse>();
}

/**
 * @summary Deletes a Langfuse user.
 *
 * @param request DeleteLangfuseUserRequest
 * @return DeleteLangfuseUserResponse
 */
DeleteLangfuseUserResponse Client::deleteLangfuseUser(const DeleteLangfuseUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLangfuseUserWithOptions(request, runtime);
}

/**
 * @summary Deletes a whitelist template.
 *
 * @param request DeleteWhitelistTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWhitelistTemplateResponse
 */
DeleteWhitelistTemplateResponse Client::deleteWhitelistTemplateWithOptions(const DeleteWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWhitelistTemplate"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWhitelistTemplateResponse>();
}

/**
 * @summary Deletes a whitelist template.
 *
 * @param request DeleteWhitelistTemplateRequest
 * @return DeleteWhitelistTemplateResponse
 */
DeleteWhitelistTemplateResponse Client::deleteWhitelistTemplate(const DeleteWhitelistTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWhitelistTemplateWithOptions(request, runtime);
}

/**
 * @summary Call the DescribeAccountAuthority operation to query the permissions of an account.
 *
 * @param request DescribeAccountAuthorityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountAuthorityResponse
 */
DescribeAccountAuthorityResponse Client::describeAccountAuthorityWithOptions(const DescribeAccountAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccountAuthority"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAccountAuthorityResponse>();
}

/**
 * @summary Call the DescribeAccountAuthority operation to query the permissions of an account.
 *
 * @param request DescribeAccountAuthorityRequest
 * @return DescribeAccountAuthorityResponse
 */
DescribeAccountAuthorityResponse Client::describeAccountAuthority(const DescribeAccountAuthorityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountAuthorityWithOptions(request, runtime);
}

/**
 * @summary Queries database accounts for an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeAccountsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAccountsResponse
 */
DescribeAccountsResponse Client::describeAccountsWithOptions(const DescribeAccountsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAccounts"},
    {"version" , "2023-05-22"},
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
 * @summary Queries database accounts for an ApsaraDB for ClickHouse cluster.
 *
 * @param request DescribeAccountsRequest
 * @return DescribeAccountsResponse
 */
DescribeAccountsResponse Client::describeAccounts(const DescribeAccountsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAccountsWithOptions(request, runtime);
}

/**
 * @summary Queries the backup policy of a ClickHouse Enterprise Edition cluster.
 *
 * @param request DescribeBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicyWithOptions(const DescribeBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackupPolicy"},
    {"version" , "2023-05-22"},
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
 * @summary Queries the backup policy of a ClickHouse Enterprise Edition cluster.
 *
 * @param request DescribeBackupPolicyRequest
 * @return DescribeBackupPolicyResponse
 */
DescribeBackupPolicyResponse Client::describeBackupPolicy(const DescribeBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the backup sets of a ClickHouse Enterprise Edition cluster.
 *
 * @param request DescribeBackupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeBackupsResponse
 */
DescribeBackupsResponse Client::describeBackupsWithOptions(const DescribeBackupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupId()) {
    query["BackupId"] = request.getBackupId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeBackups"},
    {"version" , "2023-05-22"},
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
 * @summary Queries the backup sets of a ClickHouse Enterprise Edition cluster.
 *
 * @param request DescribeBackupsRequest
 * @return DescribeBackupsResponse
 */
DescribeBackupsResponse Client::describeBackups(const DescribeBackupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeBackupsWithOptions(request, runtime);
}

/**
 * @summary Call DescribeDBInstanceAttribute to query the details of an ApsaraDB for ClickHouse enterprise edition cluster.
 *
 * @param request DescribeDBInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceAttributeResponse
 */
DescribeDBInstanceAttributeResponse Client::describeDBInstanceAttributeWithOptions(const DescribeDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceAttribute"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceAttributeResponse>();
}

/**
 * @summary Call DescribeDBInstanceAttribute to query the details of an ApsaraDB for ClickHouse enterprise edition cluster.
 *
 * @param request DescribeDBInstanceAttributeRequest
 * @return DescribeDBInstanceAttributeResponse
 */
DescribeDBInstanceAttributeResponse Client::describeDBInstanceAttribute(const DescribeDBInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the parameter configuration of an instance
 *
 * @param request DescribeDBInstanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceConfigResponse
 */
DescribeDBInstanceConfigResponse Client::describeDBInstanceConfigWithOptions(const DescribeDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceConfig"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceConfigResponse>();
}

/**
 * @summary Queries the parameter configuration of an instance
 *
 * @param request DescribeDBInstanceConfigRequest
 * @return DescribeDBInstanceConfigResponse
 */
DescribeDBInstanceConfigResponse Client::describeDBInstanceConfig(const DescribeDBInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the parameter configuration records of an instance
 *
 * @param request DescribeDBInstanceConfigChangeLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceConfigChangeLogResponse
 */
DescribeDBInstanceConfigChangeLogResponse Client::describeDBInstanceConfigChangeLogWithOptions(const DescribeDBInstanceConfigChangeLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceConfigChangeLog"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceConfigChangeLogResponse>();
}

/**
 * @summary Queries the parameter configuration records of an instance
 *
 * @param request DescribeDBInstanceConfigChangeLogRequest
 * @return DescribeDBInstanceConfigChangeLogResponse
 */
DescribeDBInstanceConfigChangeLogResponse Client::describeDBInstanceConfigChangeLog(const DescribeDBInstanceConfigChangeLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceConfigChangeLogWithOptions(request, runtime);
}

/**
 * @summary Queries the schema of a database or a table.
 *
 * @param request DescribeDBInstanceDataSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstanceDataSourcesResponse
 */
DescribeDBInstanceDataSourcesResponse Client::describeDBInstanceDataSourcesWithOptions(const DescribeDBInstanceDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBName()) {
    query["DBName"] = request.getDBName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstanceDataSources"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstanceDataSourcesResponse>();
}

/**
 * @summary Queries the schema of a database or a table.
 *
 * @param request DescribeDBInstanceDataSourcesRequest
 * @return DescribeDBInstanceDataSourcesResponse
 */
DescribeDBInstanceDataSourcesResponse Client::describeDBInstanceDataSources(const DescribeDBInstanceDataSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstanceDataSourcesWithOptions(request, runtime);
}

/**
 * @summary Call the DescribeDBInstances API to query a list of DB instances.
 *
 * @param request DescribeDBInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDBInstancesResponse
 */
DescribeDBInstancesResponse Client::describeDBInstancesWithOptions(const DescribeDBInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceIds()) {
    query["DBInstanceIds"] = request.getDBInstanceIds();
  }

  if (!!request.hasDBInstanceStatus()) {
    query["DBInstanceStatus"] = request.getDBInstanceStatus();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasVpcIds()) {
    query["VpcIds"] = request.getVpcIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDBInstances"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDBInstancesResponse>();
}

/**
 * @summary Call the DescribeDBInstances API to query a list of DB instances.
 *
 * @param request DescribeDBInstancesRequest
 * @return DescribeDBInstancesResponse
 */
DescribeDBInstancesResponse Client::describeDBInstances(const DescribeDBInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDBInstancesWithOptions(request, runtime);
}

/**
 * @summary To retrieve the cluster endpoints, call DescribeEndpoints.
 *
 * @param request DescribeEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEndpointsResponse
 */
DescribeEndpointsResponse Client::describeEndpointsWithOptions(const DescribeEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputingGroupId()) {
    query["ComputingGroupId"] = request.getComputingGroupId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEndpoints"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEndpointsResponse>();
}

/**
 * @summary To retrieve the cluster endpoints, call DescribeEndpoints.
 *
 * @param request DescribeEndpointsRequest
 * @return DescribeEndpointsResponse
 */
DescribeEndpointsResponse Client::describeEndpoints(const DescribeEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEndpointsWithOptions(request, runtime);
}

/**
 * @summary Queries the access endpoint of a Langfuse instance.
 *
 * @param request DescribeLangfuseEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLangfuseEndpointsResponse
 */
DescribeLangfuseEndpointsResponse Client::describeLangfuseEndpointsWithOptions(const DescribeLangfuseEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLangfuseEndpoints"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLangfuseEndpointsResponse>();
}

/**
 * @summary Queries the access endpoint of a Langfuse instance.
 *
 * @param request DescribeLangfuseEndpointsRequest
 * @return DescribeLangfuseEndpointsResponse
 */
DescribeLangfuseEndpointsResponse Client::describeLangfuseEndpoints(const DescribeLangfuseEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLangfuseEndpointsWithOptions(request, runtime);
}

/**
 * @summary Queries the member information of a Langfuse organization.
 *
 * @param request DescribeLangfuseOrgMembershipsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLangfuseOrgMembershipsResponse
 */
DescribeLangfuseOrgMembershipsResponse Client::describeLangfuseOrgMembershipsWithOptions(const DescribeLangfuseOrgMembershipsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOrganizationId()) {
    query["OrganizationId"] = request.getOrganizationId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLangfuseOrgMemberships"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLangfuseOrgMembershipsResponse>();
}

/**
 * @summary Queries the member information of a Langfuse organization.
 *
 * @param request DescribeLangfuseOrgMembershipsRequest
 * @return DescribeLangfuseOrgMembershipsResponse
 */
DescribeLangfuseOrgMembershipsResponse Client::describeLangfuseOrgMemberships(const DescribeLangfuseOrgMembershipsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLangfuseOrgMembershipsWithOptions(request, runtime);
}

/**
 * @summary 查询Langfuse实例组织列表
 *
 * @param request DescribeLangfuseOrgsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLangfuseOrgsResponse
 */
DescribeLangfuseOrgsResponse Client::describeLangfuseOrgsWithOptions(const DescribeLangfuseOrgsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLangfuseOrgs"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLangfuseOrgsResponse>();
}

/**
 * @summary 查询Langfuse实例组织列表
 *
 * @param request DescribeLangfuseOrgsRequest
 * @return DescribeLangfuseOrgsResponse
 */
DescribeLangfuseOrgsResponse Client::describeLangfuseOrgs(const DescribeLangfuseOrgsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLangfuseOrgsWithOptions(request, runtime);
}

/**
 * @summary Queries user roles in a Langfuse project.
 *
 * @param request DescribeLangfuseProjectMembershipsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLangfuseProjectMembershipsResponse
 */
DescribeLangfuseProjectMembershipsResponse Client::describeLangfuseProjectMembershipsWithOptions(const DescribeLangfuseProjectMembershipsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOrganizationId()) {
    query["OrganizationId"] = request.getOrganizationId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLangfuseProjectMemberships"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLangfuseProjectMembershipsResponse>();
}

/**
 * @summary Queries user roles in a Langfuse project.
 *
 * @param request DescribeLangfuseProjectMembershipsRequest
 * @return DescribeLangfuseProjectMembershipsResponse
 */
DescribeLangfuseProjectMembershipsResponse Client::describeLangfuseProjectMemberships(const DescribeLangfuseProjectMembershipsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLangfuseProjectMembershipsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of Langfuse projects.
 *
 * @param request DescribeLangfuseProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLangfuseProjectsResponse
 */
DescribeLangfuseProjectsResponse Client::describeLangfuseProjectsWithOptions(const DescribeLangfuseProjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasOrganizationId()) {
    query["OrganizationId"] = request.getOrganizationId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLangfuseProjects"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLangfuseProjectsResponse>();
}

/**
 * @summary Queries the list of Langfuse projects.
 *
 * @param request DescribeLangfuseProjectsRequest
 * @return DescribeLangfuseProjectsResponse
 */
DescribeLangfuseProjectsResponse Client::describeLangfuseProjects(const DescribeLangfuseProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLangfuseProjectsWithOptions(request, runtime);
}

/**
 * @summary Queries the Langfuse whitelist.
 *
 * @param request DescribeLangfuseSecurityIPListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLangfuseSecurityIPListResponse
 */
DescribeLangfuseSecurityIPListResponse Client::describeLangfuseSecurityIPListWithOptions(const DescribeLangfuseSecurityIPListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLangfuseSecurityIPList"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLangfuseSecurityIPListResponse>();
}

/**
 * @summary Queries the Langfuse whitelist.
 *
 * @param request DescribeLangfuseSecurityIPListRequest
 * @return DescribeLangfuseSecurityIPListResponse
 */
DescribeLangfuseSecurityIPListResponse Client::describeLangfuseSecurityIPList(const DescribeLangfuseSecurityIPListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLangfuseSecurityIPListWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a Langfuse user.
 *
 * @param request DescribeLangfuseUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLangfuseUserResponse
 */
DescribeLangfuseUserResponse Client::describeLangfuseUserWithOptions(const DescribeLangfuseUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLangfuseUser"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLangfuseUserResponse>();
}

/**
 * @summary Queries the details of a Langfuse user.
 *
 * @param request DescribeLangfuseUserRequest
 * @return DescribeLangfuseUserResponse
 */
DescribeLangfuseUserResponse Client::describeLangfuseUser(const DescribeLangfuseUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLangfuseUserWithOptions(request, runtime);
}

/**
 * @summary Queries the list of Langfuse users.
 *
 * @param request DescribeLangfuseUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeLangfuseUsersResponse
 */
DescribeLangfuseUsersResponse Client::describeLangfuseUsersWithOptions(const DescribeLangfuseUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeLangfuseUsers"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeLangfuseUsersResponse>();
}

/**
 * @summary Queries the list of Langfuse users.
 *
 * @param request DescribeLangfuseUsersRequest
 * @return DescribeLangfuseUsersResponse
 */
DescribeLangfuseUsersResponse Client::describeLangfuseUsers(const DescribeLangfuseUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeLangfuseUsersWithOptions(request, runtime);
}

/**
 * @summary Describes currently running queries.
 *
 * @param request DescribeProcessListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProcessListResponse
 */
DescribeProcessListResponse Client::describeProcessListWithOptions(const DescribeProcessListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputingGroupId()) {
    query["ComputingGroupId"] = request.getComputingGroupId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasInitialQueryId()) {
    query["InitialQueryId"] = request.getInitialQueryId();
  }

  if (!!request.hasInitialUser()) {
    query["InitialUser"] = request.getInitialUser();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryDurationMs()) {
    query["QueryDurationMs"] = request.getQueryDurationMs();
  }

  if (!!request.hasQueryOrder()) {
    query["QueryOrder"] = request.getQueryOrder();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeProcessList"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProcessListResponse>();
}

/**
 * @summary Describes currently running queries.
 *
 * @param request DescribeProcessListRequest
 * @return DescribeProcessListResponse
 */
DescribeProcessListResponse Client::describeProcessList(const DescribeProcessListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeProcessListWithOptions(request, runtime);
}

/**
 * @summary Returns information about the available regions and zones for ApsaraDB for ClickHouse.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2023-05-22"},
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
 * @summary Returns information about the available regions and zones for ApsaraDB for ClickHouse.
 *
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRegionsWithOptions(runtime);
}

/**
 * @summary Queries a whitelist.
 *
 * @param request DescribeSecurityIPListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSecurityIPListResponse
 */
DescribeSecurityIPListResponse Client::describeSecurityIPListWithOptions(const DescribeSecurityIPListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSecurityIPList"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSecurityIPListResponse>();
}

/**
 * @summary Queries a whitelist.
 *
 * @param request DescribeSecurityIPListRequest
 * @return DescribeSecurityIPListResponse
 */
DescribeSecurityIPListResponse Client::describeSecurityIPList(const DescribeSecurityIPListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSecurityIPListWithOptions(request, runtime);
}

/**
 * @summary Call DescribeSlowLogRecords to query slow log records.
 *
 * @param request DescribeSlowLogRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecordsWithOptions(const DescribeSlowLogRecordsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputingGroupId()) {
    query["ComputingGroupId"] = request.getComputingGroupId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
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

  if (!!request.hasQueryDurationMs()) {
    query["QueryDurationMs"] = request.getQueryDurationMs();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlowLogRecords"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlowLogRecordsResponse>();
}

/**
 * @summary Call DescribeSlowLogRecords to query slow log records.
 *
 * @param request DescribeSlowLogRecordsRequest
 * @return DescribeSlowLogRecordsResponse
 */
DescribeSlowLogRecordsResponse Client::describeSlowLogRecords(const DescribeSlowLogRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogRecordsWithOptions(request, runtime);
}

/**
 * @summary Queries the slow log trend.
 *
 * @param request DescribeSlowLogTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSlowLogTrendResponse
 */
DescribeSlowLogTrendResponse Client::describeSlowLogTrendWithOptions(const DescribeSlowLogTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputingGroupId()) {
    query["ComputingGroupId"] = request.getComputingGroupId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasQueryDurationMs()) {
    query["QueryDurationMs"] = request.getQueryDurationMs();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSlowLogTrend"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSlowLogTrendResponse>();
}

/**
 * @summary Queries the slow log trend.
 *
 * @param request DescribeSlowLogTrendRequest
 * @return DescribeSlowLogTrendResponse
 */
DescribeSlowLogTrendResponse Client::describeSlowLogTrend(const DescribeSlowLogTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSlowLogTrendWithOptions(request, runtime);
}

/**
 * @summary Disassociate a whitelist template from an instance.
 *
 * @param request DetachWhitelistTemplateToInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachWhitelistTemplateToInstanceResponse
 */
DetachWhitelistTemplateToInstanceResponse Client::detachWhitelistTemplateToInstanceWithOptions(const DetachWhitelistTemplateToInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachWhitelistTemplateToInstance"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachWhitelistTemplateToInstanceResponse>();
}

/**
 * @summary Disassociate a whitelist template from an instance.
 *
 * @param request DetachWhitelistTemplateToInstanceRequest
 * @return DetachWhitelistTemplateToInstanceResponse
 */
DetachWhitelistTemplateToInstanceResponse Client::detachWhitelistTemplateToInstance(const DetachWhitelistTemplateToInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachWhitelistTemplateToInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a whitelist template.
 *
 * @param request GetWhitelistTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWhitelistTemplateResponse
 */
GetWhitelistTemplateResponse Client::getWhitelistTemplateWithOptions(const GetWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWhitelistTemplate"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWhitelistTemplateResponse>();
}

/**
 * @summary Queries the details of a whitelist template.
 *
 * @param request GetWhitelistTemplateRequest
 * @return GetWhitelistTemplateResponse
 */
GetWhitelistTemplateResponse Client::getWhitelistTemplate(const GetWhitelistTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWhitelistTemplateWithOptions(request, runtime);
}

/**
 * @summary Terminates a running task.
 *
 * @param request KillProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return KillProcessResponse
 */
KillProcessResponse Client::killProcessWithOptions(const KillProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputingGroupId()) {
    query["ComputingGroupId"] = request.getComputingGroupId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasInitialQueryId()) {
    query["InitialQueryId"] = request.getInitialQueryId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "KillProcess"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<KillProcessResponse>();
}

/**
 * @summary Terminates a running task.
 *
 * @param request KillProcessRequest
 * @return KillProcessResponse
 */
KillProcessResponse Client::killProcess(const KillProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return killProcessWithOptions(request, runtime);
}

/**
 * @summary Lists the available time zones for ClickHouse.
 *
 * @param request ListClickHouseDBTimezonesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClickHouseDBTimezonesResponse
 */
ListClickHouseDBTimezonesResponse Client::listClickHouseDBTimezonesWithOptions(const ListClickHouseDBTimezonesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListClickHouseDBTimezones"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClickHouseDBTimezonesResponse>();
}

/**
 * @summary Lists the available time zones for ClickHouse.
 *
 * @param request ListClickHouseDBTimezonesRequest
 * @return ListClickHouseDBTimezonesResponse
 */
ListClickHouseDBTimezonesResponse Client::listClickHouseDBTimezones(const ListClickHouseDBTimezonesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClickHouseDBTimezonesWithOptions(request, runtime);
}

/**
 * @summary Lists the IP address whitelist templates linked to an instance.
 *
 * @param request ListInstanceLinkedWhitelistTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceLinkedWhitelistTemplatesResponse
 */
ListInstanceLinkedWhitelistTemplatesResponse Client::listInstanceLinkedWhitelistTemplatesWithOptions(const ListInstanceLinkedWhitelistTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceLinkedWhitelistTemplates"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceLinkedWhitelistTemplatesResponse>();
}

/**
 * @summary Lists the IP address whitelist templates linked to an instance.
 *
 * @param request ListInstanceLinkedWhitelistTemplatesRequest
 * @return ListInstanceLinkedWhitelistTemplatesResponse
 */
ListInstanceLinkedWhitelistTemplatesResponse Client::listInstanceLinkedWhitelistTemplates(const ListInstanceLinkedWhitelistTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceLinkedWhitelistTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the whitelist templates associated with an instance.
 *
 * @param request ListWhitelistTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWhitelistTemplatesResponse
 */
ListWhitelistTemplatesResponse Client::listWhitelistTemplatesWithOptions(const ListWhitelistTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWhitelistTemplates"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWhitelistTemplatesResponse>();
}

/**
 * @summary Queries the whitelist templates associated with an instance.
 *
 * @param request ListWhitelistTemplatesRequest
 * @return ListWhitelistTemplatesResponse
 */
ListWhitelistTemplatesResponse Client::listWhitelistTemplates(const ListWhitelistTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWhitelistTemplatesWithOptions(request, runtime);
}

/**
 * @summary Modifies the permissions of a database account.
 *
 * @param tmpReq ModifyAccountAuthorityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountAuthorityResponse
 */
ModifyAccountAuthorityResponse Client::modifyAccountAuthorityWithOptions(const ModifyAccountAuthorityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyAccountAuthorityShrinkRequest request = ModifyAccountAuthorityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDmlAuthSetting()) {
    request.setDmlAuthSettingShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDmlAuthSetting(), "DmlAuthSetting", "json"));
  }

  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDmlAuthSettingShrink()) {
    query["DmlAuthSetting"] = request.getDmlAuthSettingShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountAuthority"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAccountAuthorityResponse>();
}

/**
 * @summary Modifies the permissions of a database account.
 *
 * @param request ModifyAccountAuthorityRequest
 * @return ModifyAccountAuthorityResponse
 */
ModifyAccountAuthorityResponse Client::modifyAccountAuthority(const ModifyAccountAuthorityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountAuthorityWithOptions(request, runtime);
}

/**
 * @summary Modifies the description of a database account.
 *
 * @param request ModifyAccountDescriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescriptionWithOptions(const ModifyAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAccountDescription"},
    {"version" , "2023-05-22"},
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
 * @summary Modifies the description of a database account.
 *
 * @param request ModifyAccountDescriptionRequest
 * @return ModifyAccountDescriptionResponse
 */
ModifyAccountDescriptionResponse Client::modifyAccountDescription(const ModifyAccountDescriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAccountDescriptionWithOptions(request, runtime);
}

/**
 * @summary Modifies the backup policy of an ApsaraDB for ClickHouse cluster.
 *
 * @description > Data backup is supported only for ApsaraDB for ClickHouse clusters that run version 20.3, 20.8, or 21.8.
 *
 * @param request ModifyBackupPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicyWithOptions(const ModifyBackupPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackupRetentionPeriod()) {
    query["BackupRetentionPeriod"] = request.getBackupRetentionPeriod();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasPreferredBackupPeriod()) {
    query["PreferredBackupPeriod"] = request.getPreferredBackupPeriod();
  }

  if (!!request.hasPreferredBackupTime()) {
    query["PreferredBackupTime"] = request.getPreferredBackupTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyBackupPolicy"},
    {"version" , "2023-05-22"},
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
 * @summary Modifies the backup policy of an ApsaraDB for ClickHouse cluster.
 *
 * @description > Data backup is supported only for ApsaraDB for ClickHouse clusters that run version 20.3, 20.8, or 21.8.
 *
 * @param request ModifyBackupPolicyRequest
 * @return ModifyBackupPolicyResponse
 */
ModifyBackupPolicyResponse Client::modifyBackupPolicy(const ModifyBackupPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyBackupPolicyWithOptions(request, runtime);
}

/**
 * @summary You can call the ModifyDBInstanceAttribute operation to modify the configuration of a cluster.
 *
 * @param request ModifyDBInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceAttributeResponse
 */
ModifyDBInstanceAttributeResponse Client::modifyDBInstanceAttributeWithOptions(const ModifyDBInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttributeType()) {
    query["AttributeType"] = request.getAttributeType();
  }

  if (!!request.hasAttributeValue()) {
    query["AttributeValue"] = request.getAttributeValue();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceAttribute"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceAttributeResponse>();
}

/**
 * @summary You can call the ModifyDBInstanceAttribute operation to modify the configuration of a cluster.
 *
 * @param request ModifyDBInstanceAttributeRequest
 * @return ModifyDBInstanceAttributeResponse
 */
ModifyDBInstanceAttributeResponse Client::modifyDBInstanceAttribute(const ModifyDBInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Use `ModifyDBInstanceClass` to modify the scaling configuration of a cluster.
 *
 * @description Before you call this API, make sure that you understand the billing method and [pricing](https://help.aliyun.com/document_detail/167450.html) of ApsaraDB for ClickHouse.
 *
 * @param tmpReq ModifyDBInstanceClassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceClassResponse
 */
ModifyDBInstanceClassResponse Client::modifyDBInstanceClassWithOptions(const ModifyDBInstanceClassRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyDBInstanceClassShrinkRequest request = ModifyDBInstanceClassShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAutoScaleConfig()) {
    request.setAutoScaleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAutoScaleConfig(), "AutoScaleConfig", "json"));
  }

  json query = {};
  if (!!request.hasAutoScaleConfigShrink()) {
    query["AutoScaleConfig"] = request.getAutoScaleConfigShrink();
  }

  if (!!request.hasComputingGroupId()) {
    query["ComputingGroupId"] = request.getComputingGroupId();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasNodeCount()) {
    query["NodeCount"] = request.getNodeCount();
  }

  if (!!request.hasNodeScaleMax()) {
    query["NodeScaleMax"] = request.getNodeScaleMax();
  }

  if (!!request.hasNodeScaleMin()) {
    query["NodeScaleMin"] = request.getNodeScaleMin();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScaleMax()) {
    query["ScaleMax"] = request.getScaleMax();
  }

  if (!!request.hasScaleMin()) {
    query["ScaleMin"] = request.getScaleMin();
  }

  if (!!request.hasStorageQuota()) {
    query["StorageQuota"] = request.getStorageQuota();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceClass"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceClassResponse>();
}

/**
 * @summary Use `ModifyDBInstanceClass` to modify the scaling configuration of a cluster.
 *
 * @description Before you call this API, make sure that you understand the billing method and [pricing](https://help.aliyun.com/document_detail/167450.html) of ApsaraDB for ClickHouse.
 *
 * @param request ModifyDBInstanceClassRequest
 * @return ModifyDBInstanceClassResponse
 */
ModifyDBInstanceClassResponse Client::modifyDBInstanceClass(const ModifyDBInstanceClassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceClassWithOptions(request, runtime);
}

/**
 * @summary Modifies the parameter settings for a DB instance.
 *
 * @param request ModifyDBInstanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceConfigResponse
 */
ModifyDBInstanceConfigResponse Client::modifyDBInstanceConfigWithOptions(const ModifyDBInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.getParameters();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceConfig"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceConfigResponse>();
}

/**
 * @summary Modifies the parameter settings for a DB instance.
 *
 * @param request ModifyDBInstanceConfigRequest
 * @return ModifyDBInstanceConfigResponse
 */
ModifyDBInstanceConfigResponse Client::modifyDBInstanceConfig(const ModifyDBInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the connection string of a cluster.
 *
 * @param request ModifyDBInstanceConnectionStringRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyDBInstanceConnectionStringResponse
 */
ModifyDBInstanceConnectionStringResponse Client::modifyDBInstanceConnectionStringWithOptions(const ModifyDBInstanceConnectionStringRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComputingGroupId()) {
    query["ComputingGroupId"] = request.getComputingGroupId();
  }

  if (!!request.hasConnectionString()) {
    query["ConnectionString"] = request.getConnectionString();
  }

  if (!!request.hasConnectionStringPrefix()) {
    query["ConnectionStringPrefix"] = request.getConnectionStringPrefix();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasDBInstanceNetType()) {
    query["DBInstanceNetType"] = request.getDBInstanceNetType();
  }

  if (!!request.hasDisablePorts()) {
    query["DisablePorts"] = request.getDisablePorts();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyDBInstanceConnectionString"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyDBInstanceConnectionStringResponse>();
}

/**
 * @summary Modifies the connection string of a cluster.
 *
 * @param request ModifyDBInstanceConnectionStringRequest
 * @return ModifyDBInstanceConnectionStringResponse
 */
ModifyDBInstanceConnectionStringResponse Client::modifyDBInstanceConnectionString(const ModifyDBInstanceConnectionStringRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyDBInstanceConnectionStringWithOptions(request, runtime);
}

/**
 * @summary Modifies the permissions of a user in a Langfuse organization.
 *
 * @param request ModifyLangfuseOrgMembershipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLangfuseOrgMembershipResponse
 */
ModifyLangfuseOrgMembershipResponse Client::modifyLangfuseOrgMembershipWithOptions(const ModifyLangfuseOrgMembershipRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasOrganizationId()) {
    query["OrganizationId"] = request.getOrganizationId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.getRole();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyLangfuseOrgMembership"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyLangfuseOrgMembershipResponse>();
}

/**
 * @summary Modifies the permissions of a user in a Langfuse organization.
 *
 * @param request ModifyLangfuseOrgMembershipRequest
 * @return ModifyLangfuseOrgMembershipResponse
 */
ModifyLangfuseOrgMembershipResponse Client::modifyLangfuseOrgMembership(const ModifyLangfuseOrgMembershipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLangfuseOrgMembershipWithOptions(request, runtime);
}

/**
 * @summary Modifies the permissions of a user in a Langfuse project.
 *
 * @param request ModifyLangfuseProjectMembershipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyLangfuseProjectMembershipResponse
 */
ModifyLangfuseProjectMembershipResponse Client::modifyLangfuseProjectMembershipWithOptions(const ModifyLangfuseProjectMembershipRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasOrganizationId()) {
    query["OrganizationId"] = request.getOrganizationId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.getRole();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyLangfuseProjectMembership"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyLangfuseProjectMembershipResponse>();
}

/**
 * @summary Modifies the permissions of a user in a Langfuse project.
 *
 * @param request ModifyLangfuseProjectMembershipRequest
 * @return ModifyLangfuseProjectMembershipResponse
 */
ModifyLangfuseProjectMembershipResponse Client::modifyLangfuseProjectMembership(const ModifyLangfuseProjectMembershipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyLangfuseProjectMembershipWithOptions(request, runtime);
}

/**
 * @summary Modifies the whitelist settings of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifySecurityIPListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySecurityIPListResponse
 */
ModifySecurityIPListResponse Client::modifySecurityIPListWithOptions(const ModifySecurityIPListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasModifyMode()) {
    query["ModifyMode"] = request.getModifyMode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.getSecurityIPList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySecurityIPList"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySecurityIPListResponse>();
}

/**
 * @summary Modifies the whitelist settings of an ApsaraDB for ClickHouse cluster.
 *
 * @param request ModifySecurityIPListRequest
 * @return ModifySecurityIPListResponse
 */
ModifySecurityIPListResponse Client::modifySecurityIPList(const ModifySecurityIPListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySecurityIPListWithOptions(request, runtime);
}

/**
 * @summary Resets the password of a database account for an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request ResetAccountPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPasswordWithOptions(const ResetAccountPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccount()) {
    query["Account"] = request.getAccount();
  }

  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasProduct()) {
    query["Product"] = request.getProduct();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetAccountPassword"},
    {"version" , "2023-05-22"},
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
 * @summary Resets the password of a database account for an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request ResetAccountPasswordRequest
 * @return ResetAccountPasswordResponse
 */
ResetAccountPasswordResponse Client::resetAccountPassword(const ResetAccountPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetAccountPasswordWithOptions(request, runtime);
}

/**
 * @summary Resets the password of a Langfuse user.
 *
 * @param request ResetLangfuseUserPasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetLangfuseUserPasswordResponse
 */
ResetLangfuseUserPasswordResponse Client::resetLangfuseUserPasswordWithOptions(const ResetLangfuseUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasNewPassword()) {
    query["NewPassword"] = request.getNewPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetLangfuseUserPassword"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetLangfuseUserPasswordResponse>();
}

/**
 * @summary Resets the password of a Langfuse user.
 *
 * @param request ResetLangfuseUserPasswordRequest
 * @return ResetLangfuseUserPasswordResponse
 */
ResetLangfuseUserPasswordResponse Client::resetLangfuseUserPassword(const ResetLangfuseUserPasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetLangfuseUserPasswordWithOptions(request, runtime);
}

/**
 * @summary Restarts an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request RestartDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartDBInstanceResponse
 */
RestartDBInstanceResponse Client::restartDBInstanceWithOptions(const RestartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartDBInstance"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartDBInstanceResponse>();
}

/**
 * @summary Restarts an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request RestartDBInstanceRequest
 * @return RestartDBInstanceResponse
 */
RestartDBInstanceResponse Client::restartDBInstance(const RestartDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Starts an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request StartDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDBInstanceResponse
 */
StartDBInstanceResponse Client::startDBInstanceWithOptions(const StartDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartDBInstance"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartDBInstanceResponse>();
}

/**
 * @summary Starts an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request StartDBInstanceRequest
 * @return StartDBInstanceResponse
 */
StartDBInstanceResponse Client::startDBInstance(const StartDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Stops an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request StopDBInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDBInstanceResponse
 */
StopDBInstanceResponse Client::stopDBInstanceWithOptions(const StopDBInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDBInstance"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDBInstanceResponse>();
}

/**
 * @summary Stops an ApsaraDB for ClickHouse Enterprise Edition cluster.
 *
 * @param request StopDBInstanceRequest
 * @return StopDBInstanceResponse
 */
StopDBInstanceResponse Client::stopDBInstance(const StopDBInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDBInstanceWithOptions(request, runtime);
}

/**
 * @summary Updates a whitelist template.
 *
 * @param request UpdateWhitelistTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWhitelistTemplateResponse
 */
UpdateWhitelistTemplateResponse Client::updateWhitelistTemplateWithOptions(const UpdateWhitelistTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityIPList()) {
    query["SecurityIPList"] = request.getSecurityIPList();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateWhitelistTemplate"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWhitelistTemplateResponse>();
}

/**
 * @summary Updates a whitelist template.
 *
 * @param request UpdateWhitelistTemplateRequest
 * @return UpdateWhitelistTemplateResponse
 */
UpdateWhitelistTemplateResponse Client::updateWhitelistTemplate(const UpdateWhitelistTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWhitelistTemplateWithOptions(request, runtime);
}

/**
 * @summary Updates the minor engine version of an ApsaraDB for ClickHouse cluster that runs Enterprise Edition.
 *
 * @param request UpgradeMinorVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeMinorVersionResponse
 */
UpgradeMinorVersionResponse Client::upgradeMinorVersionWithOptions(const UpgradeMinorVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBInstanceId()) {
    query["DBInstanceId"] = request.getDBInstanceId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSwitchTime()) {
    query["SwitchTime"] = request.getSwitchTime();
  }

  if (!!request.hasSwitchTimeMode()) {
    query["SwitchTimeMode"] = request.getSwitchTimeMode();
  }

  if (!!request.hasTargetMinorVersion()) {
    query["TargetMinorVersion"] = request.getTargetMinorVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeMinorVersion"},
    {"version" , "2023-05-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeMinorVersionResponse>();
}

/**
 * @summary Updates the minor engine version of an ApsaraDB for ClickHouse cluster that runs Enterprise Edition.
 *
 * @param request UpgradeMinorVersionRequest
 * @return UpgradeMinorVersionResponse
 */
UpgradeMinorVersionResponse Client::upgradeMinorVersion(const UpgradeMinorVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeMinorVersionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Clickhouse20230522