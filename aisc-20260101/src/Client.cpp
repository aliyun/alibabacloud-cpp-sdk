#include <darabonba/Core.hpp>
#include <alibabacloud/AISC20260101.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::AISC20260101::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace AISC20260101
{

AlibabaCloud::AISC20260101::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-zhangjiakou" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-wulanchabu" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-nanjing" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-huhehaote" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-hangzhou" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-guangzhou" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-beijing" , "aisc.cn-shanghai.aliyuncs.com"},
    {"ap-southeast-7" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-6" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-2" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-1" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"eu-central-1" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"eu-west-1" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"us-east-1" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"us-west-1" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"me-east-1" , "aisc.ap-southeast-1.aliyuncs.com"},
    {"cn-beijing-finance-1" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-hangzhou-finance" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-heyuan-acdr-1" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "aisc.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "aisc.cn-shanghai.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("aisc", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates an AI Red Teaming scan target (agent or model) and saves its connection configuration for subsequent connectivity tests and scan tasks.
 *
 * @description Creates an attack target (agent or model) and saves its connection configuration for subsequent connectivity tests and scan tasks.
 * This is a synchronous call. Upon success, the system-generated TargetId is returned in Data. You can use this TargetId as a parameter in subsequent calls such as TestConnectivity and scan task creation.
 * Metric description:
 * - When ConnectionMethod is set to enterprise_relay (access through a corporate internal network agent), the values of Endpoint and ModelName are ignored. The platform uses fixed internal network values. The actual target endpoint and credentials are held by the corporate internal network agent.
 * - After ApiKey is submitted, it is encrypted and stored. Subsequent queries do not return the plaintext value.
 * - ConnectionConfig is a JSON character string in JSON format that specifies advanced connection settings. For common provider templates, refer to the metric description of this parameter.
 * After the target is created, its initial connectivity status is verified. You can call TestConnectivity at any time to re-verify.
 * Internal network access (enterprise_relay) workflow:
 * - After the target is created, invoke GenerateRelayPollerScript to obtain an installation script (Linux only) and run it on a machine within the corporate internal network. The actual target endpoint and credentials are entered interactively during installation. The platform does not retain them.
 * - After installation, the poller automatically registers and enters a polling loop. No manual registration or polling invocations are required.
 * - After invoking TestConnectivity to authenticate end-to-end connectivity, you can use CreateTargetScanTask to initiate a scan.
 *
 * @param request CreateAttackTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAttackTargetResponse
 */
CreateAttackTargetResponse Client::createAttackTargetWithOptions(const CreateAttackTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.getApiKey();
  }

  if (!!request.hasConnectionConfig()) {
    query["ConnectionConfig"] = request.getConnectionConfig();
  }

  if (!!request.hasConnectionMethod()) {
    query["ConnectionMethod"] = request.getConnectionMethod();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEndpoint()) {
    query["Endpoint"] = request.getEndpoint();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasProvider()) {
    query["Provider"] = request.getProvider();
  }

  if (!!request.hasTargetName()) {
    query["TargetName"] = request.getTargetName();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAttackTarget"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAttackTargetResponse>();
}

/**
 * @summary Creates an AI Red Teaming scan target (agent or model) and saves its connection configuration for subsequent connectivity tests and scan tasks.
 *
 * @description Creates an attack target (agent or model) and saves its connection configuration for subsequent connectivity tests and scan tasks.
 * This is a synchronous call. Upon success, the system-generated TargetId is returned in Data. You can use this TargetId as a parameter in subsequent calls such as TestConnectivity and scan task creation.
 * Metric description:
 * - When ConnectionMethod is set to enterprise_relay (access through a corporate internal network agent), the values of Endpoint and ModelName are ignored. The platform uses fixed internal network values. The actual target endpoint and credentials are held by the corporate internal network agent.
 * - After ApiKey is submitted, it is encrypted and stored. Subsequent queries do not return the plaintext value.
 * - ConnectionConfig is a JSON character string in JSON format that specifies advanced connection settings. For common provider templates, refer to the metric description of this parameter.
 * After the target is created, its initial connectivity status is verified. You can call TestConnectivity at any time to re-verify.
 * Internal network access (enterprise_relay) workflow:
 * - After the target is created, invoke GenerateRelayPollerScript to obtain an installation script (Linux only) and run it on a machine within the corporate internal network. The actual target endpoint and credentials are entered interactively during installation. The platform does not retain them.
 * - After installation, the poller automatically registers and enters a polling loop. No manual registration or polling invocations are required.
 * - After invoking TestConnectivity to authenticate end-to-end connectivity, you can use CreateTargetScanTask to initiate a scan.
 *
 * @param request CreateAttackTargetRequest
 * @return CreateAttackTargetResponse
 */
CreateAttackTargetResponse Client::createAttackTarget(const CreateAttackTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAttackTargetWithOptions(request, runtime);
}

/**
 * @summary Initiates batch detection for user-defined skills.
 *
 * @param request CreateSkillFileCheckRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSkillFileCheckResponse
 */
CreateSkillFileCheckResponse Client::createSkillFileCheckWithOptions(const CreateSkillFileCheckRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFiles()) {
    query["Files"] = request.getFiles();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSkillFileCheck"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSkillFileCheckResponse>();
}

/**
 * @summary Initiates batch detection for user-defined skills.
 *
 * @param request CreateSkillFileCheckRequest
 * @return CreateSkillFileCheckResponse
 */
CreateSkillFileCheckResponse Client::createSkillFileCheck(const CreateSkillFileCheckRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSkillFileCheckWithOptions(request, runtime);
}

/**
 * @summary Initiates a security scan task against a scan target that has passed connectivity verification. After the task is created, it is asynchronously prepared and executed.
 *
 * @description **Before you use this operation, make sure that you fully understand the billing method and [pricing](https://www.alibabacloud.com/help/en/asc/user-guide/ai-red-teaming#aefbf9b5b4noh) of AI Red Teaming.**
 * Initiates a security scan (AI Red Teaming detection) task against a specified scan target.
 * Before you begin:
 * - The account must have a normal subscription status. Otherwise, a 403 error is returned.
 * - The TargetId must exist and belong to the current tenant.
 * - The connectivity verification status of the target must be verified. You can call TestConnectivity to verify the target first. Otherwise, a 400 error is returned.
 * - Available attack samples must exist within the current scan scope. Otherwise, a 400 error is returned.
 * Execution mode:
 * - The call synchronously returns a TaskId. The initial task status is PREPARING. Sample preparation and scan execution are performed asynchronously. You can call ListScanTasksByTarget to query the task status and progress.
 * Sample selection:
 * - The sample scope is determined based on the target type (agent/model) plus general-purpose samples. SampleLevel determines the detection intensity and derives the technique level. Lang is used to filter samples by language.
 * - If no sample intent is specified, the system automatically derives all available intents based on the scope described above.
 *
 * @param request CreateTargetScanTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTargetScanTaskResponse
 */
CreateTargetScanTaskResponse Client::createTargetScanTaskWithOptions(const CreateTargetScanTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasSampleLevel()) {
    query["SampleLevel"] = request.getSampleLevel();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTargetScanTask"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTargetScanTaskResponse>();
}

/**
 * @summary Initiates a security scan task against a scan target that has passed connectivity verification. After the task is created, it is asynchronously prepared and executed.
 *
 * @description **Before you use this operation, make sure that you fully understand the billing method and [pricing](https://www.alibabacloud.com/help/en/asc/user-guide/ai-red-teaming#aefbf9b5b4noh) of AI Red Teaming.**
 * Initiates a security scan (AI Red Teaming detection) task against a specified scan target.
 * Before you begin:
 * - The account must have a normal subscription status. Otherwise, a 403 error is returned.
 * - The TargetId must exist and belong to the current tenant.
 * - The connectivity verification status of the target must be verified. You can call TestConnectivity to verify the target first. Otherwise, a 400 error is returned.
 * - Available attack samples must exist within the current scan scope. Otherwise, a 400 error is returned.
 * Execution mode:
 * - The call synchronously returns a TaskId. The initial task status is PREPARING. Sample preparation and scan execution are performed asynchronously. You can call ListScanTasksByTarget to query the task status and progress.
 * Sample selection:
 * - The sample scope is determined based on the target type (agent/model) plus general-purpose samples. SampleLevel determines the detection intensity and derives the technique level. Lang is used to filter samples by language.
 * - If no sample intent is specified, the system automatically derives all available intents based on the scope described above.
 *
 * @param request CreateTargetScanTaskRequest
 * @return CreateTargetScanTaskResponse
 */
CreateTargetScanTaskResponse Client::createTargetScanTask(const CreateTargetScanTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTargetScanTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified scan target by TargetId in AI Red Teaming. The target is physically deleted and cannot be recovered. This operation does not stop scan tasks that are in progress.
 *
 * @description Deletes a specified scan target by TargetId. The target is physically deleted.
 * - You can delete only targets that belong to the current tenant. If the target does not exist or belongs to another tenant, a 400 error is returned. This prevents exposing whether the resource exists.
 * - Physical deletion: The target cannot be recovered after deletion. Confirm before you proceed.
 * - This operation deletes only the target record. It does not stop scan tasks that are in progress for the target or delete historical scan task records. To stop or clean up tasks, call StopScannerTask or DeleteScannerTask first.
 * - After deletion, the connection configurations of the target, including encrypted credentials and connectivity verification results, are also removed.
 *
 * @param request DeleteAttackTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAttackTargetResponse
 */
DeleteAttackTargetResponse Client::deleteAttackTargetWithOptions(const DeleteAttackTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAttackTarget"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAttackTargetResponse>();
}

/**
 * @summary Deletes a specified scan target by TargetId in AI Red Teaming. The target is physically deleted and cannot be recovered. This operation does not stop scan tasks that are in progress.
 *
 * @description Deletes a specified scan target by TargetId. The target is physically deleted.
 * - You can delete only targets that belong to the current tenant. If the target does not exist or belongs to another tenant, a 400 error is returned. This prevents exposing whether the resource exists.
 * - Physical deletion: The target cannot be recovered after deletion. Confirm before you proceed.
 * - This operation deletes only the target record. It does not stop scan tasks that are in progress for the target or delete historical scan task records. To stop or clean up tasks, call StopScannerTask or DeleteScannerTask first.
 * - After deletion, the connection configurations of the target, including encrypted credentials and connectivity verification results, are also removed.
 *
 * @param request DeleteAttackTargetRequest
 * @return DeleteAttackTargetResponse
 */
DeleteAttackTargetResponse Client::deleteAttackTarget(const DeleteAttackTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAttackTargetWithOptions(request, runtime);
}

/**
 * @summary Physically deletes a specified scan task by ScannerTaskId in AI Red Teaming.
 *
 * @description Physically deletes a specified scan task by ScannerTaskId.
 * - Only tasks that belong to the current tenant can be deleted. If the task does not exist or belongs to another tenant, a 400 error is returned without exposing whether the resource exists.
 * - If the task is in progress (sample preparation, waiting, processing, or report generation), the task is automatically canceled before deletion. A cancellation failure does not block the deletion.
 * - Physical deletion: After deletion, the task record and its status and progress information cannot be queried or recovered. Confirm before you delete.
 * - Deleting a task record does not affect the scan target itself.
 *
 * @param request DeleteScannerTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScannerTaskResponse
 */
DeleteScannerTaskResponse Client::deleteScannerTaskWithOptions(const DeleteScannerTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasScannerTaskId()) {
    query["ScannerTaskId"] = request.getScannerTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScannerTask"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScannerTaskResponse>();
}

/**
 * @summary Physically deletes a specified scan task by ScannerTaskId in AI Red Teaming.
 *
 * @description Physically deletes a specified scan task by ScannerTaskId.
 * - Only tasks that belong to the current tenant can be deleted. If the task does not exist or belongs to another tenant, a 400 error is returned without exposing whether the resource exists.
 * - If the task is in progress (sample preparation, waiting, processing, or report generation), the task is automatically canceled before deletion. A cancellation failure does not block the deletion.
 * - Physical deletion: After deletion, the task record and its status and progress information cannot be queried or recovered. Confirm before you delete.
 * - Deleting a task record does not affect the scan target itself.
 *
 * @param request DeleteScannerTaskRequest
 * @return DeleteScannerTaskResponse
 */
DeleteScannerTaskResponse Client::deleteScannerTask(const DeleteScannerTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScannerTaskWithOptions(request, runtime);
}

/**
 * @summary Generates a one-time installation script for a scan target of the enterprise_relay type in AI Red Teaming. Only Linux platforms are supported. The script contains a one-time access code.
 *
 * @description Generates an installation script for the internal network agent (relay-poller) for a specified scan target.
 * - The target must use the enterprise_relay connection method (see CreateAttackTarget). Otherwise, HTTP status code 400 is returned. If the target does not exist or belongs to another tenant, HTTP status code 400 is returned without exposing whether the resource exists.
 * - Only Linux is supported for the platform. The Platform parameter uses the "operating system-architecture" format and accepts only linux-amd64 and linux-arm64. Compatible architecture values include amd64, x86_64, x86, arm64, and aarch64. If only the architecture is specified, the operating system defaults to linux. Other operating systems such as macOS and Windows return HTTP status code 400. If this parameter is not specified, the default value is linux-amd64.
 * - The script contains a one-time access code. Each call issues a new access code, and the previous code automatically expires. Re-downloading the script generates a new access code. Use the latest generated script for installation.
 * - The script contains a temporary download link (a signed link valid for 1 hour) and a checksum for the poller binary. The binary is available only for Linux in both architectures.
 * - The script does not contain the actual endpoint or credentials of the target. The installer interactively enters these values when running the script. The platform does not store them.
 * - After installation, the poller automatically completes registration and enters a polling cycle. The registration and polling operations are automatically called by the script and do not require manual invocation. You can call TestConnectivity to verify end-to-end connectivity.
 *
 * @param request GenerateRelayPollerScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateRelayPollerScriptResponse
 */
GenerateRelayPollerScriptResponse Client::generateRelayPollerScriptWithOptions(const GenerateRelayPollerScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPlatform()) {
    query["Platform"] = request.getPlatform();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateRelayPollerScript"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateRelayPollerScriptResponse>();
}

/**
 * @summary Generates a one-time installation script for a scan target of the enterprise_relay type in AI Red Teaming. Only Linux platforms are supported. The script contains a one-time access code.
 *
 * @description Generates an installation script for the internal network agent (relay-poller) for a specified scan target.
 * - The target must use the enterprise_relay connection method (see CreateAttackTarget). Otherwise, HTTP status code 400 is returned. If the target does not exist or belongs to another tenant, HTTP status code 400 is returned without exposing whether the resource exists.
 * - Only Linux is supported for the platform. The Platform parameter uses the "operating system-architecture" format and accepts only linux-amd64 and linux-arm64. Compatible architecture values include amd64, x86_64, x86, arm64, and aarch64. If only the architecture is specified, the operating system defaults to linux. Other operating systems such as macOS and Windows return HTTP status code 400. If this parameter is not specified, the default value is linux-amd64.
 * - The script contains a one-time access code. Each call issues a new access code, and the previous code automatically expires. Re-downloading the script generates a new access code. Use the latest generated script for installation.
 * - The script contains a temporary download link (a signed link valid for 1 hour) and a checksum for the poller binary. The binary is available only for Linux in both architectures.
 * - The script does not contain the actual endpoint or credentials of the target. The installer interactively enters these values when running the script. The platform does not store them.
 * - After installation, the poller automatically completes registration and enters a polling cycle. The registration and polling operations are automatically called by the script and do not require manual invocation. You can call TestConnectivity to verify end-to-end connectivity.
 *
 * @param request GenerateRelayPollerScriptRequest
 * @return GenerateRelayPollerScriptResponse
 */
GenerateRelayPollerScriptResponse Client::generateRelayPollerScript(const GenerateRelayPollerScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateRelayPollerScriptWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a scan target by TargetId for AI Red Teaming, including connection configuration and scan task configuration.
 *
 * @description Queries the details of a scan target by TargetId.
 * - Only targets that belong to the current tenant can be queried. If the target does not exist or belongs to another tenant, a 400 error is returned to avoid exposing whether the resource exists.
 * - The response includes basic target information, advanced connection configuration (ConnectionConfig), and scan task configuration (ScanTaskConfig).
 * - The following six aggregate fields are not populated by this operation and return empty values: cumulative scan count (ScanCount), last scan status (LastScanStatus), risk level (RiskLevel), first scan time (FirstScanTime), last scan time (LastScanTime), and last scan failure reason (LastScanFailMessage). Query these fields by calling ListAttackTargets or ListScanTasksByTarget.
 * - The response does not include sensitive credentials such as ApiKey in plaintext.
 *
 * @param request GetAttackTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAttackTargetResponse
 */
GetAttackTargetResponse Client::getAttackTargetWithOptions(const GetAttackTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAttackTarget"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAttackTargetResponse>();
}

/**
 * @summary Queries the details of a scan target by TargetId for AI Red Teaming, including connection configuration and scan task configuration.
 *
 * @description Queries the details of a scan target by TargetId.
 * - Only targets that belong to the current tenant can be queried. If the target does not exist or belongs to another tenant, a 400 error is returned to avoid exposing whether the resource exists.
 * - The response includes basic target information, advanced connection configuration (ConnectionConfig), and scan task configuration (ScanTaskConfig).
 * - The following six aggregate fields are not populated by this operation and return empty values: cumulative scan count (ScanCount), last scan status (LastScanStatus), risk level (RiskLevel), first scan time (FirstScanTime), last scan time (LastScanTime), and last scan failure reason (LastScanFailMessage). Query these fields by calling ListAttackTargets or ListScanTasksByTarget.
 * - The response does not include sensitive credentials such as ApiKey in plaintext.
 *
 * @param request GetAttackTargetRequest
 * @return GetAttackTargetResponse
 */
GetAttackTargetResponse Client::getAttackTarget(const GetAttackTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAttackTargetWithOptions(request, runtime);
}

/**
 * @summary Retrieves a temporary download URL for the attack hit data (hits.csv) of a specified scan task in AI Red Teaming. The URL is valid for 2 hours. An empty string is returned if the data has not been generated.
 *
 * @description Retrieves a temporary download URL for the attack hit data (hits.csv) of a specified scan task.
 * - ScannerTaskId is required in practice. An empty value returns HTTP status code 400.
 * - You can query only tasks that belong to the current tenant. If the task does not exist or belongs to another tenant, HTTP status code 400 is returned uniformly to avoid exposing whether the resource exists.
 * - The download URL is a signed temporary URL of Object Storage Service (OSS) that is valid for 2 hours (7,200 seconds). After the URL expires, call this operation again to obtain a new URL.
 * - If the attack hit data has not been generated (for existing tasks or when the agent execution mode does not produce hit data), the download URL in the response is an empty string. No error is returned.
 * - This operation is a read-only action (with the Get prefix). A RAM user with read-only permissions can call this operation. The behavior is consistent with the deprecated GenerateScannerTaskHitDataUrl operation.
 *
 * @param request GetScannerTaskHitDataUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScannerTaskHitDataUrlResponse
 */
GetScannerTaskHitDataUrlResponse Client::getScannerTaskHitDataUrlWithOptions(const GetScannerTaskHitDataUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasScannerTaskId()) {
    query["ScannerTaskId"] = request.getScannerTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScannerTaskHitDataUrl"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScannerTaskHitDataUrlResponse>();
}

/**
 * @summary Retrieves a temporary download URL for the attack hit data (hits.csv) of a specified scan task in AI Red Teaming. The URL is valid for 2 hours. An empty string is returned if the data has not been generated.
 *
 * @description Retrieves a temporary download URL for the attack hit data (hits.csv) of a specified scan task.
 * - ScannerTaskId is required in practice. An empty value returns HTTP status code 400.
 * - You can query only tasks that belong to the current tenant. If the task does not exist or belongs to another tenant, HTTP status code 400 is returned uniformly to avoid exposing whether the resource exists.
 * - The download URL is a signed temporary URL of Object Storage Service (OSS) that is valid for 2 hours (7,200 seconds). After the URL expires, call this operation again to obtain a new URL.
 * - If the attack hit data has not been generated (for existing tasks or when the agent execution mode does not produce hit data), the download URL in the response is an empty string. No error is returned.
 * - This operation is a read-only action (with the Get prefix). A RAM user with read-only permissions can call this operation. The behavior is consistent with the deprecated GenerateScannerTaskHitDataUrl operation.
 *
 * @param request GetScannerTaskHitDataUrlRequest
 * @return GetScannerTaskHitDataUrlResponse
 */
GetScannerTaskHitDataUrlResponse Client::getScannerTaskHitDataUrl(const GetScannerTaskHitDataUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getScannerTaskHitDataUrlWithOptions(request, runtime);
}

/**
 * @summary Retrieves a temporary download URL for the HTML result report of an AI Red Teaming scan task. The URL is valid for 2 hours. An empty string is returned if the report has not been generated.
 *
 * @description Retrieves a temporary download URL for the HTML result report of a specified scan task.
 * - You can only query tasks that belong to the current tenant. If the task does not exist or belongs to another tenant, a 400 error is returned to avoid exposing whether the resource exists.
 * - The download URL is a signed temporary URL from object storage, valid for 2 hours (7,200 seconds). After the URL expires, call this operation again to obtain a new URL.
 * - If the task result report has not been generated (the task is not complete or the report has not been produced), the download URL in the response is an empty string and no error is returned. Call this operation after the task status changes to completed.
 *
 * @param request GetScannerTaskResultHtmlUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScannerTaskResultHtmlUrlResponse
 */
GetScannerTaskResultHtmlUrlResponse Client::getScannerTaskResultHtmlUrlWithOptions(const GetScannerTaskResultHtmlUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasScannerTaskId()) {
    query["ScannerTaskId"] = request.getScannerTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScannerTaskResultHtmlUrl"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScannerTaskResultHtmlUrlResponse>();
}

/**
 * @summary Retrieves a temporary download URL for the HTML result report of an AI Red Teaming scan task. The URL is valid for 2 hours. An empty string is returned if the report has not been generated.
 *
 * @description Retrieves a temporary download URL for the HTML result report of a specified scan task.
 * - You can only query tasks that belong to the current tenant. If the task does not exist or belongs to another tenant, a 400 error is returned to avoid exposing whether the resource exists.
 * - The download URL is a signed temporary URL from object storage, valid for 2 hours (7,200 seconds). After the URL expires, call this operation again to obtain a new URL.
 * - If the task result report has not been generated (the task is not complete or the report has not been produced), the download URL in the response is an empty string and no error is returned. Call this operation after the task status changes to completed.
 *
 * @param request GetScannerTaskResultHtmlUrlRequest
 * @return GetScannerTaskResultHtmlUrlResponse
 */
GetScannerTaskResultHtmlUrlResponse Client::getScannerTaskResultHtmlUrl(const GetScannerTaskResultHtmlUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getScannerTaskResultHtmlUrlWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of agent risk events.
 *
 * @param request ListAIAgentEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAIAgentEventResponse
 */
ListAIAgentEventResponse Client::listAIAgentEventWithOptions(const ListAIAgentEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasAssetName()) {
    query["AssetName"] = request.getAssetName();
  }

  if (!!request.hasAssetType()) {
    query["AssetType"] = request.getAssetType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasInfraInstanceId()) {
    query["InfraInstanceId"] = request.getInfraInstanceId();
  }

  if (!!request.hasInfraName()) {
    query["InfraName"] = request.getInfraName();
  }

  if (!!request.hasInfraRegionId()) {
    query["InfraRegionId"] = request.getInfraRegionId();
  }

  if (!!request.hasLang()) {
    query["Lang"] = request.getLang();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceDirectoryAccountId()) {
    query["ResourceDirectoryAccountId"] = request.getResourceDirectoryAccountId();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasRiskName()) {
    query["RiskName"] = request.getRiskName();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasStatusList()) {
    query["StatusList"] = request.getStatusList();
  }

  if (!!request.hasVendor()) {
    query["Vendor"] = request.getVendor();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAIAgentEvent"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAIAgentEventResponse>();
}

/**
 * @summary Retrieves a list of agent risk events.
 *
 * @param request ListAIAgentEventRequest
 * @return ListAIAgentEventResponse
 */
ListAIAgentEventResponse Client::listAIAgentEvent(const ListAIAgentEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAIAgentEventWithOptions(request, runtime);
}

/**
 * @summary Queries the list of scan targets for AI Red Teaming. This operation supports multi-dimensional filtering and sorting.
 *
 * @param request ListAttackTargetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAttackTargetsResponse
 */
ListAttackTargetsResponse Client::listAttackTargetsWithOptions(const ListAttackTargetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirstScanTimeEnd()) {
    query["FirstScanTimeEnd"] = request.getFirstScanTimeEnd();
  }

  if (!!request.hasFirstScanTimeStart()) {
    query["FirstScanTimeStart"] = request.getFirstScanTimeStart();
  }

  if (!!request.hasLastScanStatus()) {
    query["LastScanStatus"] = request.getLastScanStatus();
  }

  if (!!request.hasLastScanTimeEnd()) {
    query["LastScanTimeEnd"] = request.getLastScanTimeEnd();
  }

  if (!!request.hasLastScanTimeStart()) {
    query["LastScanTimeStart"] = request.getLastScanTimeStart();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProvider()) {
    query["Provider"] = request.getProvider();
  }

  if (!!request.hasRiskLevel()) {
    query["RiskLevel"] = request.getRiskLevel();
  }

  if (!!request.hasSortField()) {
    query["SortField"] = request.getSortField();
  }

  if (!!request.hasSortOrder()) {
    query["SortOrder"] = request.getSortOrder();
  }

  if (!!request.hasTargetName()) {
    query["TargetName"] = request.getTargetName();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAttackTargets"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAttackTargetsResponse>();
}

/**
 * @summary Queries the list of scan targets for AI Red Teaming. This operation supports multi-dimensional filtering and sorting.
 *
 * @param request ListAttackTargetsRequest
 * @return ListAttackTargetsResponse
 */
ListAttackTargetsResponse Client::listAttackTargets(const ListAttackTargetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAttackTargetsWithOptions(request, runtime);
}

/**
 * @summary Performs a paged query of scan tasks under a specified scan target for AI Red Teaming. Supports filtering by detection intensity, task status, and scan mode.
 *
 * @description Performs a paged query of the scan task list under a specified scan target. Only tasks belonging to targets owned by the current tenant are returned.
 * Query scope and sorting:
 * - Only tasks created within the last 366 days are returned.
 * - Results are sorted by creation time in descending order.
 * - TaskStatus filters by task status. ScanType filters by scan mode. The scan mode is stored in the task execute parameters. Historical tasks without a recorded scan mode are treated as attack.
 * Paged query rules:
 * - PageNumber starts from 1. Values less than 1 are normalized to 1.
 * - PageSize defaults to 10, with a maximum of 100 per page. Values greater than 100 are clamped to 100. Values less than 1 return HTTP status code 400.
 * - The PageNumber and PageSize values in the response are the normalization values that actually take effect.
 *
 * @param request ListScanTasksByTargetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScanTasksByTargetResponse
 */
ListScanTasksByTargetResponse Client::listScanTasksByTargetWithOptions(const ListScanTasksByTargetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSampleLevel()) {
    query["SampleLevel"] = request.getSampleLevel();
  }

  if (!!request.hasScanType()) {
    query["ScanType"] = request.getScanType();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTaskStatus()) {
    query["TaskStatus"] = request.getTaskStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScanTasksByTarget"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScanTasksByTargetResponse>();
}

/**
 * @summary Performs a paged query of scan tasks under a specified scan target for AI Red Teaming. Supports filtering by detection intensity, task status, and scan mode.
 *
 * @description Performs a paged query of the scan task list under a specified scan target. Only tasks belonging to targets owned by the current tenant are returned.
 * Query scope and sorting:
 * - Only tasks created within the last 366 days are returned.
 * - Results are sorted by creation time in descending order.
 * - TaskStatus filters by task status. ScanType filters by scan mode. The scan mode is stored in the task execute parameters. Historical tasks without a recorded scan mode are treated as attack.
 * Paged query rules:
 * - PageNumber starts from 1. Values less than 1 are normalized to 1.
 * - PageSize defaults to 10, with a maximum of 100 per page. Values greater than 100 are clamped to 100. Values less than 1 return HTTP status code 400.
 * - The PageNumber and PageSize values in the response are the normalization values that actually take effect.
 *
 * @param request ListScanTasksByTargetRequest
 * @return ListScanTasksByTargetResponse
 */
ListScanTasksByTargetResponse Client::listScanTasksByTarget(const ListScanTasksByTargetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScanTasksByTargetWithOptions(request, runtime);
}

/**
 * @summary Get subtask information.
 *
 * @param request ListSubTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSubTasksResponse
 */
ListSubTasksResponse Client::listSubTasksWithOptions(const ListSubTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRootTaskId()) {
    query["RootTaskId"] = request.getRootTaskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSubTasks"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSubTasksResponse>();
}

/**
 * @summary Get subtask information.
 *
 * @param request ListSubTasksRequest
 * @return ListSubTasksResponse
 */
ListSubTasksResponse Client::listSubTasks(const ListSubTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSubTasksWithOptions(request, runtime);
}

/**
 * @summary Stops (cancels) an in-progress scan task for AI Red Teaming. Calling this operation on a task that is already in a desired state is idempotent and performs no action.
 *
 * @description Stops (cancels) the scan task specified by ScannerTaskId.
 * - You can only operate on tasks that belong to the current tenant. If the task does not exist or belongs to another tenant, a 400 error is returned without exposing whether the resource exists.
 * - Only tasks in an in-progress state (sample preparation, waiting, processing, or report generation) are actually canceled. The task status is set to canceled, the end time is recorded, and the underlying execution job is stopped asynchronously.
 * - Idempotent: If the task is already in a desired state (completed, failed, timed out, or canceled), the call returns success without modifying the task.
 * - The underlying execution job is stopped asynchronously. A failure to stop the job does not affect the cancellation result of the task itself.
 *
 * @param request StopScannerTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopScannerTaskResponse
 */
StopScannerTaskResponse Client::stopScannerTaskWithOptions(const StopScannerTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasScannerTaskId()) {
    query["ScannerTaskId"] = request.getScannerTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopScannerTask"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopScannerTaskResponse>();
}

/**
 * @summary Stops (cancels) an in-progress scan task for AI Red Teaming. Calling this operation on a task that is already in a desired state is idempotent and performs no action.
 *
 * @description Stops (cancels) the scan task specified by ScannerTaskId.
 * - You can only operate on tasks that belong to the current tenant. If the task does not exist or belongs to another tenant, a 400 error is returned without exposing whether the resource exists.
 * - Only tasks in an in-progress state (sample preparation, waiting, processing, or report generation) are actually canceled. The task status is set to canceled, the end time is recorded, and the underlying execution job is stopped asynchronously.
 * - Idempotent: If the task is already in a desired state (completed, failed, timed out, or canceled), the call returns success without modifying the task.
 * - The underlying execution job is stopped asynchronously. A failure to stop the job does not affect the cancellation result of the task itself.
 *
 * @param request StopScannerTaskRequest
 * @return StopScannerTaskResponse
 */
StopScannerTaskResponse Client::stopScannerTask(const StopScannerTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopScannerTaskWithOptions(request, runtime);
}

/**
 * @summary Tests the network connectivity and authentication validity of an AI Red Teaming target.
 *
 * @description Tests the network connectivity and authentication validity of a specified attack target.
 * This operation uses an asynchronous polling model:
 * - First call (without CheckId): Immediately returns a CheckId with VerifyStatus=checking. The actual test runs asynchronously in the background for up to 60 seconds.
 * - Subsequent calls (with the CheckId returned from the first call): Queries the latest status of the corresponding CheckId, which may be checking, verified, or failed.
 * - Poll at 2-second intervals for up to 60 seconds. After the CheckId expires, the operation returns failed with VerifyMessage set to "check expired, please retry".
 * Use one of the following two approaches for parameters:
 * - Approach A: Specify only TargetId. The system reads Endpoint, ApiKey, ModelName, ConnectionMethod, and ConnectionConfig from the saved target configuration and ignores any parameters with the same names in the request.
 * - Approach B: Do not specify TargetId. Instead, provide the five connection parameters directly in the request.
 *
 * @param request TestConnectivityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TestConnectivityResponse
 */
TestConnectivityResponse Client::testConnectivityWithOptions(const TestConnectivityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.getApiKey();
  }

  if (!!request.hasCheckId()) {
    query["CheckId"] = request.getCheckId();
  }

  if (!!request.hasConnectionConfig()) {
    query["ConnectionConfig"] = request.getConnectionConfig();
  }

  if (!!request.hasConnectionMethod()) {
    query["ConnectionMethod"] = request.getConnectionMethod();
  }

  if (!!request.hasEndpoint()) {
    query["Endpoint"] = request.getEndpoint();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.getModelName();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TestConnectivity"},
    {"version" , "2026-01-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TestConnectivityResponse>();
}

/**
 * @summary Tests the network connectivity and authentication validity of an AI Red Teaming target.
 *
 * @description Tests the network connectivity and authentication validity of a specified attack target.
 * This operation uses an asynchronous polling model:
 * - First call (without CheckId): Immediately returns a CheckId with VerifyStatus=checking. The actual test runs asynchronously in the background for up to 60 seconds.
 * - Subsequent calls (with the CheckId returned from the first call): Queries the latest status of the corresponding CheckId, which may be checking, verified, or failed.
 * - Poll at 2-second intervals for up to 60 seconds. After the CheckId expires, the operation returns failed with VerifyMessage set to "check expired, please retry".
 * Use one of the following two approaches for parameters:
 * - Approach A: Specify only TargetId. The system reads Endpoint, ApiKey, ModelName, ConnectionMethod, and ConnectionConfig from the saved target configuration and ignores any parameters with the same names in the request.
 * - Approach B: Do not specify TargetId. Instead, provide the five connection parameters directly in the request.
 *
 * @param request TestConnectivityRequest
 * @return TestConnectivityResponse
 */
TestConnectivityResponse Client::testConnectivity(const TestConnectivityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return testConnectivityWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AISC20260101