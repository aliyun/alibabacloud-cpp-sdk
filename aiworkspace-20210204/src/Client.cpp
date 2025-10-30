#include <darabonba/Core.hpp>
#include <alibabacloud/AIWorkSpace20210204.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AIWorkSpace20210204::Models;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{

AlibabaCloud::AIWorkSpace20210204::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-2-pop" , "aiworkspace.aliyuncs.com"},
    {"ap-southeast-2" , "aiworkspace.aliyuncs.com"},
    {"ap-southeast-5" , "aiworkspace-vpc.ap-southeast-5.aliyuncs.com"},
    {"cn-beijing-finance-1" , "aiworkspace.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "aiworkspace.aliyuncs.com"},
    {"cn-beijing-gov-1" , "aiworkspace.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "aiworkspace.aliyuncs.com"},
    {"cn-edge-1" , "aiworkspace.aliyuncs.com"},
    {"cn-fujian" , "aiworkspace.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "aiworkspace.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "aiworkspace.aliyuncs.com"},
    {"cn-hangzhou-finance" , "aiworkspace.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "aiworkspace.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "aiworkspace.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "aiworkspace.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "aiworkspace.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "aiworkspace.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "aiworkspace.aliyuncs.com"},
    {"cn-huhehaote" , "aiworkspace.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "aiworkspace.aliyuncs.com"},
    {"cn-qingdao" , "aiworkspace.aliyuncs.com"},
    {"cn-qingdao-nebula" , "aiworkspace.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "aiworkspace.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "aiworkspace.aliyuncs.com"},
    {"cn-shanghai-inner" , "aiworkspace.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "aiworkspace.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "aiworkspace.aliyuncs.com"},
    {"cn-shenzhen-inner" , "aiworkspace.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "aiworkspace.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "aiworkspace.aliyuncs.com"},
    {"cn-wuhan" , "aiworkspace.aliyuncs.com"},
    {"cn-yushanfang" , "aiworkspace.aliyuncs.com"},
    {"cn-zhangbei" , "aiworkspace.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "aiworkspace.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "aiworkspace.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "aiworkspace.aliyuncs.com"},
    {"eu-west-1" , "aiworkspace.aliyuncs.com"},
    {"eu-west-1-oxs" , "aiworkspace.aliyuncs.com"},
    {"me-east-1" , "aiworkspace.aliyuncs.com"},
    {"rus-west-1-pop" , "aiworkspace.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("aiworkspace", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Receives and processes system event messages sent by DataWorks.
 *
 * @description This operation can be called only by the internal system and cannot be called by external users.
 *
 * @param request AcceptDataworksEventRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AcceptDataworksEventResponse
 */
AcceptDataworksEventResponse Client::acceptDataworksEventWithOptions(const AcceptDataworksEventRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasData()) {
    body["Data"] = request.data();
  }

  if (!!request.hasMessageId()) {
    body["MessageId"] = request.messageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AcceptDataworksEvent"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/action/acceptdataworksevent")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AcceptDataworksEventResponse>();
}

/**
 * @summary Receives and processes system event messages sent by DataWorks.
 *
 * @description This operation can be called only by the internal system and cannot be called by external users.
 *
 * @param request AcceptDataworksEventRequest
 * @return AcceptDataworksEventResponse
 */
AcceptDataworksEventResponse Client::acceptDataworksEvent(const AcceptDataworksEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return acceptDataworksEventWithOptions(request, headers, runtime);
}

/**
 * @summary Adds a custom image to a workspace.
 *
 * @param request AddImageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddImageResponse
 */
AddImageResponse Client::addImageWithOptions(const AddImageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.accessibility();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.imageId();
  }

  if (!!request.hasImageUri()) {
    body["ImageUri"] = request.imageUri();
  }

  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.size();
  }

  if (!!request.hasSourceId()) {
    body["SourceId"] = request.sourceId();
  }

  if (!!request.hasSourceType()) {
    body["SourceType"] = request.sourceType();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddImage"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/images")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddImageResponse>();
}

/**
 * @summary Adds a custom image to a workspace.
 *
 * @param request AddImageRequest
 * @return AddImageResponse
 */
AddImageResponse Client::addImage(const AddImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addImageWithOptions(request, headers, runtime);
}

/**
 * @summary Adds tags to an image.
 *
 * @param request AddImageLabelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddImageLabelsResponse
 */
AddImageLabelsResponse Client::addImageLabelsWithOptions(const string &ImageId, const AddImageLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddImageLabels"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/images/" , Darabonba::Encode::Encoder::percentEncode(ImageId) , "/labels")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddImageLabelsResponse>();
}

/**
 * @summary Adds tags to an image.
 *
 * @param request AddImageLabelsRequest
 * @return AddImageLabelsResponse
 */
AddImageLabelsResponse Client::addImageLabels(const string &ImageId, const AddImageLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addImageLabelsWithOptions(ImageId, request, headers, runtime);
}

/**
 * @summary Adds a role to a member in a workspace. After you add a role to a member, the member is granted the permissions of the role.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMemberRoleResponse
 */
AddMemberRoleResponse Client::addMemberRoleWithOptions(const string &WorkspaceId, const string &MemberId, const string &RoleName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddMemberRole"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/members/" , Darabonba::Encode::Encoder::percentEncode(MemberId) , "/roles/" , Darabonba::Encode::Encoder::percentEncode(RoleName))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMemberRoleResponse>();
}

/**
 * @summary Adds a role to a member in a workspace. After you add a role to a member, the member is granted the permissions of the role.
 *
 * @return AddMemberRoleResponse
 */
AddMemberRoleResponse Client::addMemberRole(const string &WorkspaceId, const string &MemberId, const string &RoleName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addMemberRoleWithOptions(WorkspaceId, MemberId, RoleName, headers, runtime);
}

/**
 * @summary Changes the resource group to which a resource belongs based on the ID.
 *
 * @param request ChangeResourceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNewResourceGroupId()) {
    body["NewResourceGroupId"] = request.newResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    body["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/resourcegroups/action/changeresourcegroup")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Changes the resource group to which a resource belongs based on the ID.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return changeResourceGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a code build in Platform for AI (PAI). You can configure Git branches and commit IDs. After the code build is created, you can reference the code build in a Deep Learning Containers (DLC) job.
 *
 * @param request CreateCodeSourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCodeSourceResponse
 */
CreateCodeSourceResponse Client::createCodeSourceWithOptions(const CreateCodeSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.accessibility();
  }

  if (!!request.hasCodeBranch()) {
    body["CodeBranch"] = request.codeBranch();
  }

  if (!!request.hasCodeCommit()) {
    body["CodeCommit"] = request.codeCommit();
  }

  if (!!request.hasCodeRepo()) {
    body["CodeRepo"] = request.codeRepo();
  }

  if (!!request.hasCodeRepoAccessToken()) {
    body["CodeRepoAccessToken"] = request.codeRepoAccessToken();
  }

  if (!!request.hasCodeRepoUserName()) {
    body["CodeRepoUserName"] = request.codeRepoUserName();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.displayName();
  }

  if (!!request.hasMountPath()) {
    body["MountPath"] = request.mountPath();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCodeSource"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/codesources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCodeSourceResponse>();
}

/**
 * @summary Creates a code build in Platform for AI (PAI). You can configure Git branches and commit IDs. After the code build is created, you can reference the code build in a Deep Learning Containers (DLC) job.
 *
 * @param request CreateCodeSourceRequest
 * @return CreateCodeSourceResponse
 */
CreateCodeSourceResponse Client::createCodeSource(const CreateCodeSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCodeSourceWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a connection. This API is used to connect Platform for AI (PAI) to customer models and databases in LangStudio and multimodal dataset search scenarios.
 *
 * @param request CreateConnectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConnectionResponse
 */
CreateConnectionResponse Client::createConnectionWithOptions(const CreateConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.accessibility();
  }

  if (!!request.hasConfigs()) {
    body["Configs"] = request.configs();
  }

  if (!!request.hasConnectionName()) {
    body["ConnectionName"] = request.connectionName();
  }

  if (!!request.hasConnectionType()) {
    body["ConnectionType"] = request.connectionType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasModels()) {
    body["Models"] = request.models();
  }

  if (!!request.hasResourceMeta()) {
    body["ResourceMeta"] = request.resourceMeta();
  }

  if (!!request.hasSecrets()) {
    body["Secrets"] = request.secrets();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateConnection"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/connections")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConnectionResponse>();
}

/**
 * @summary Creates a connection. This API is used to connect Platform for AI (PAI) to customer models and databases in LangStudio and multimodal dataset search scenarios.
 *
 * @param request CreateConnectionRequest
 * @return CreateConnectionResponse
 */
CreateConnectionResponse Client::createConnection(const CreateConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createConnectionWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a dataset.
 *
 * @param request CreateDatasetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatasetResponse
 */
CreateDatasetResponse Client::createDatasetWithOptions(const CreateDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.accessibility();
  }

  if (!!request.hasDataCount()) {
    body["DataCount"] = request.dataCount();
  }

  if (!!request.hasDataSize()) {
    body["DataSize"] = request.dataSize();
  }

  if (!!request.hasDataSourceType()) {
    body["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasDataType()) {
    body["DataType"] = request.dataType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEdition()) {
    body["Edition"] = request.edition();
  }

  if (!!request.hasImportInfo()) {
    body["ImportInfo"] = request.importInfo();
  }

  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  if (!!request.hasMountAccessReadWriteRoleIdList()) {
    body["MountAccessReadWriteRoleIdList"] = request.mountAccessReadWriteRoleIdList();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasOptions()) {
    body["Options"] = request.options();
  }

  if (!!request.hasProperty()) {
    body["Property"] = request.property();
  }

  if (!!request.hasProvider()) {
    body["Provider"] = request.provider();
  }

  if (!!request.hasProviderType()) {
    body["ProviderType"] = request.providerType();
  }

  if (!!request.hasSourceDatasetId()) {
    body["SourceDatasetId"] = request.sourceDatasetId();
  }

  if (!!request.hasSourceDatasetVersion()) {
    body["SourceDatasetVersion"] = request.sourceDatasetVersion();
  }

  if (!!request.hasSourceId()) {
    body["SourceId"] = request.sourceId();
  }

  if (!!request.hasSourceType()) {
    body["SourceType"] = request.sourceType();
  }

  if (!!request.hasUri()) {
    body["Uri"] = request.uri();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.userId();
  }

  if (!!request.hasVersionDescription()) {
    body["VersionDescription"] = request.versionDescription();
  }

  if (!!request.hasVersionLabels()) {
    body["VersionLabels"] = request.versionLabels();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDataset"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatasetResponse>();
}

/**
 * @summary Creates a dataset.
 *
 * @param request CreateDatasetRequest
 * @return CreateDatasetResponse
 */
CreateDatasetResponse Client::createDataset(const CreateDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDatasetWithOptions(request, headers, runtime);
}

/**
 * @summary Creates the metadata records of multiple files in a dataset at a time.
 *
 * @param request CreateDatasetFileMetasRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatasetFileMetasResponse
 */
CreateDatasetFileMetasResponse Client::createDatasetFileMetasWithOptions(const string &DatasetId, const CreateDatasetFileMetasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDatasetFileMetas()) {
    body["DatasetFileMetas"] = request.datasetFileMetas();
  }

  if (!!request.hasDatasetVersion()) {
    body["DatasetVersion"] = request.datasetVersion();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDatasetFileMetas"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/datasetfilemetas")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatasetFileMetasResponse>();
}

/**
 * @summary Creates the metadata records of multiple files in a dataset at a time.
 *
 * @param request CreateDatasetFileMetasRequest
 * @return CreateDatasetFileMetasResponse
 */
CreateDatasetFileMetasResponse Client::createDatasetFileMetas(const string &DatasetId, const CreateDatasetFileMetasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDatasetFileMetasWithOptions(DatasetId, request, headers, runtime);
}

/**
 * @summary Creates a dataset job.
 *
 * @param request CreateDatasetJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatasetJobResponse
 */
CreateDatasetJobResponse Client::createDatasetJobWithOptions(const string &DatasetId, const CreateDatasetJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDatasetVersion()) {
    body["DatasetVersion"] = request.datasetVersion();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasJobAction()) {
    body["JobAction"] = request.jobAction();
  }

  if (!!request.hasJobMode()) {
    body["JobMode"] = request.jobMode();
  }

  if (!!request.hasJobSpec()) {
    body["JobSpec"] = request.jobSpec();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDatasetJob"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/datasetjobs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatasetJobResponse>();
}

/**
 * @summary Creates a dataset job.
 *
 * @param request CreateDatasetJobRequest
 * @return CreateDatasetJobResponse
 */
CreateDatasetJobResponse Client::createDatasetJob(const string &DatasetId, const CreateDatasetJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDatasetJobWithOptions(DatasetId, request, headers, runtime);
}

/**
 * @summary Creates a job configuration for a dataset.
 *
 * @param request CreateDatasetJobConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatasetJobConfigResponse
 */
CreateDatasetJobConfigResponse Client::createDatasetJobConfigWithOptions(const string &DatasetId, const CreateDatasetJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.config();
  }

  if (!!request.hasConfigType()) {
    body["ConfigType"] = request.configType();
  }

  if (!!request.hasDatasetVersion()) {
    body["DatasetVersion"] = request.datasetVersion();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDatasetJobConfig"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/datasetjobconfigs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatasetJobConfigResponse>();
}

/**
 * @summary Creates a job configuration for a dataset.
 *
 * @param request CreateDatasetJobConfigRequest
 * @return CreateDatasetJobConfigResponse
 */
CreateDatasetJobConfigResponse Client::createDatasetJobConfig(const string &DatasetId, const CreateDatasetJobConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDatasetJobConfigWithOptions(DatasetId, request, headers, runtime);
}

/**
 * @summary Creates tags for a dataset.
 *
 * @description Before you call this operation, take note of the following items:
 * *   The tag key and value are not empty strings and cannot exceed 128 characters in length.
 * *   The tag key cannot start with any of the following strings: "aliyun", "acs", "http://", and "https://".
 *
 * @param request CreateDatasetLabelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatasetLabelsResponse
 */
CreateDatasetLabelsResponse Client::createDatasetLabelsWithOptions(const string &DatasetId, const CreateDatasetLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDatasetLabels"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/labels")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatasetLabelsResponse>();
}

/**
 * @summary Creates tags for a dataset.
 *
 * @description Before you call this operation, take note of the following items:
 * *   The tag key and value are not empty strings and cannot exceed 128 characters in length.
 * *   The tag key cannot start with any of the following strings: "aliyun", "acs", "http://", and "https://".
 *
 * @param request CreateDatasetLabelsRequest
 * @return CreateDatasetLabelsResponse
 */
CreateDatasetLabelsResponse Client::createDatasetLabels(const string &DatasetId, const CreateDatasetLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDatasetLabelsWithOptions(DatasetId, request, headers, runtime);
}

/**
 * @summary Creates a dataset version.
 *
 * @param request CreateDatasetVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatasetVersionResponse
 */
CreateDatasetVersionResponse Client::createDatasetVersionWithOptions(const string &DatasetId, const CreateDatasetVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataCount()) {
    body["DataCount"] = request.dataCount();
  }

  if (!!request.hasDataSize()) {
    body["DataSize"] = request.dataSize();
  }

  if (!!request.hasDataSourceType()) {
    body["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasImportInfo()) {
    body["ImportInfo"] = request.importInfo();
  }

  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  if (!!request.hasOptions()) {
    body["Options"] = request.options();
  }

  if (!!request.hasProperty()) {
    body["Property"] = request.property();
  }

  if (!!request.hasSourceId()) {
    body["SourceId"] = request.sourceId();
  }

  if (!!request.hasSourceType()) {
    body["SourceType"] = request.sourceType();
  }

  if (!!request.hasUri()) {
    body["Uri"] = request.uri();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDatasetVersion"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/versions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatasetVersionResponse>();
}

/**
 * @summary Creates a dataset version.
 *
 * @param request CreateDatasetVersionRequest
 * @return CreateDatasetVersionResponse
 */
CreateDatasetVersionResponse Client::createDatasetVersion(const string &DatasetId, const CreateDatasetVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDatasetVersionWithOptions(DatasetId, request, headers, runtime);
}

/**
 * @summary Creates tags for a dataset version.
 *
 * @param request CreateDatasetVersionLabelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatasetVersionLabelsResponse
 */
CreateDatasetVersionLabelsResponse Client::createDatasetVersionLabelsWithOptions(const string &DatasetId, const string &VersionName, const CreateDatasetVersionLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDatasetVersionLabels"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(VersionName) , "/labels")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatasetVersionLabelsResponse>();
}

/**
 * @summary Creates tags for a dataset version.
 *
 * @param request CreateDatasetVersionLabelsRequest
 * @return CreateDatasetVersionLabelsResponse
 */
CreateDatasetVersionLabelsResponse Client::createDatasetVersionLabels(const string &DatasetId, const string &VersionName, const CreateDatasetVersionLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDatasetVersionLabelsWithOptions(DatasetId, VersionName, request, headers, runtime);
}

/**
 * @summary Creates an experiment.
 *
 * @param request CreateExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExperimentResponse
 */
CreateExperimentResponse Client::createExperimentWithOptions(const CreateExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.accessibility();
  }

  if (!!request.hasArtifactUri()) {
    body["ArtifactUri"] = request.artifactUri();
  }

  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateExperiment"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExperimentResponse>();
}

/**
 * @summary Creates an experiment.
 *
 * @param request CreateExperimentRequest
 * @return CreateExperimentResponse
 */
CreateExperimentResponse Client::createExperiment(const CreateExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createExperimentWithOptions(request, headers, runtime);
}

/**
 * @summary Adds a user to a workspace as a member. You can add multiple users as members.
 *
 * @param request CreateMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMemberResponse
 */
CreateMemberResponse Client::createMemberWithOptions(const string &WorkspaceId, const CreateMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMembers()) {
    body["Members"] = request.members();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateMember"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/members")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMemberResponse>();
}

/**
 * @summary Adds a user to a workspace as a member. You can add multiple users as members.
 *
 * @param request CreateMemberRequest
 * @return CreateMemberResponse
 */
CreateMemberResponse Client::createMember(const string &WorkspaceId, const CreateMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMemberWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary Creates a model. A model is a collection of model versions. When you create a model, you must specify the model name and description.
 *
 * @param request CreateModelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelResponse
 */
CreateModelResponse Client::createModelWithOptions(const CreateModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.accessibility();
  }

  if (!!request.hasDomain()) {
    body["Domain"] = request.domain();
  }

  if (!!request.hasExtraInfo()) {
    body["ExtraInfo"] = request.extraInfo();
  }

  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  if (!!request.hasModelDescription()) {
    body["ModelDescription"] = request.modelDescription();
  }

  if (!!request.hasModelDoc()) {
    body["ModelDoc"] = request.modelDoc();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.modelName();
  }

  if (!!request.hasModelType()) {
    body["ModelType"] = request.modelType();
  }

  if (!!request.hasOrderNumber()) {
    body["OrderNumber"] = request.orderNumber();
  }

  if (!!request.hasOrigin()) {
    body["Origin"] = request.origin();
  }

  if (!!request.hasParameterSize()) {
    body["ParameterSize"] = request.parameterSize();
  }

  if (!!request.hasTag()) {
    body["Tag"] = request.tag();
  }

  if (!!request.hasTask()) {
    body["Task"] = request.task();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateModel"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/models")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelResponse>();
}

/**
 * @summary Creates a model. A model is a collection of model versions. When you create a model, you must specify the model name and description.
 *
 * @param request CreateModelRequest
 * @return CreateModelResponse
 */
CreateModelResponse Client::createModel(const CreateModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createModelWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a tag for a model.
 *
 * @param request CreateModelLabelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelLabelsResponse
 */
CreateModelLabelsResponse Client::createModelLabelsWithOptions(const string &ModelId, const CreateModelLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateModelLabels"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/models/" , Darabonba::Encode::Encoder::percentEncode(ModelId) , "/labels")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelLabelsResponse>();
}

/**
 * @summary Creates a tag for a model.
 *
 * @param request CreateModelLabelsRequest
 * @return CreateModelLabelsResponse
 */
CreateModelLabelsResponse Client::createModelLabels(const string &ModelId, const CreateModelLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createModelLabelsWithOptions(ModelId, request, headers, runtime);
}

/**
 * @summary Creates a new version for the specified model.
 *
 * @param request CreateModelVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelVersionResponse
 */
CreateModelVersionResponse Client::createModelVersionWithOptions(const string &ModelId, const CreateModelVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApprovalStatus()) {
    body["ApprovalStatus"] = request.approvalStatus();
  }

  if (!!request.hasCompressionSpec()) {
    body["CompressionSpec"] = request.compressionSpec();
  }

  if (!!request.hasDistillationSpec()) {
    body["DistillationSpec"] = request.distillationSpec();
  }

  if (!!request.hasEvaluationSpec()) {
    body["EvaluationSpec"] = request.evaluationSpec();
  }

  if (!!request.hasExtraInfo()) {
    body["ExtraInfo"] = request.extraInfo();
  }

  if (!!request.hasFormatType()) {
    body["FormatType"] = request.formatType();
  }

  if (!!request.hasFrameworkType()) {
    body["FrameworkType"] = request.frameworkType();
  }

  if (!!request.hasInferenceSpec()) {
    body["InferenceSpec"] = request.inferenceSpec();
  }

  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  if (!!request.hasMetrics()) {
    body["Metrics"] = request.metrics();
  }

  if (!!request.hasOptions()) {
    body["Options"] = request.options();
  }

  if (!!request.hasSourceId()) {
    body["SourceId"] = request.sourceId();
  }

  if (!!request.hasSourceType()) {
    body["SourceType"] = request.sourceType();
  }

  if (!!request.hasTrainingSpec()) {
    body["TrainingSpec"] = request.trainingSpec();
  }

  if (!!request.hasUri()) {
    body["Uri"] = request.uri();
  }

  if (!!request.hasVersionDescription()) {
    body["VersionDescription"] = request.versionDescription();
  }

  if (!!request.hasVersionName()) {
    body["VersionName"] = request.versionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateModelVersion"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/models/" , Darabonba::Encode::Encoder::percentEncode(ModelId) , "/versions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelVersionResponse>();
}

/**
 * @summary Creates a new version for the specified model.
 *
 * @param request CreateModelVersionRequest
 * @return CreateModelVersionResponse
 */
CreateModelVersionResponse Client::createModelVersion(const string &ModelId, const CreateModelVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createModelVersionWithOptions(ModelId, request, headers, runtime);
}

/**
 * @summary Creates a tag for a model version.
 *
 * @param request CreateModelVersionLabelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateModelVersionLabelsResponse
 */
CreateModelVersionLabelsResponse Client::createModelVersionLabelsWithOptions(const string &ModelId, const string &VersionName, const CreateModelVersionLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateModelVersionLabels"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/models/" , Darabonba::Encode::Encoder::percentEncode(ModelId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(VersionName) , "/labels")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateModelVersionLabelsResponse>();
}

/**
 * @summary Creates a tag for a model version.
 *
 * @param request CreateModelVersionLabelsRequest
 * @return CreateModelVersionLabelsResponse
 */
CreateModelVersionLabelsResponse Client::createModelVersionLabels(const string &ModelId, const string &VersionName, const CreateModelVersionLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createModelVersionLabelsWithOptions(ModelId, VersionName, request, headers, runtime);
}

/**
 * @summary Creates a pay-as-you-go order for DataWorks, OSS, PAI, or MaxCompute.
 *
 * @param request CreateProductOrdersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProductOrdersResponse
 */
CreateProductOrdersResponse Client::createProductOrdersWithOptions(const CreateProductOrdersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAutoPay()) {
    body["AutoPay"] = request.autoPay();
  }

  if (!!request.hasProducts()) {
    body["Products"] = request.products();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateProductOrders"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/productorders")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProductOrdersResponse>();
}

/**
 * @summary Creates a pay-as-you-go order for DataWorks, OSS, PAI, or MaxCompute.
 *
 * @param request CreateProductOrdersRequest
 * @return CreateProductOrdersResponse
 */
CreateProductOrdersResponse Client::createProductOrders(const CreateProductOrdersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createProductOrdersWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a run. A run is an experiment that can be associated with a specific workload or simply a code execution.
 *
 * @param request CreateRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRunResponse
 */
CreateRunResponse Client::createRunWithOptions(const CreateRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExperimentId()) {
    body["ExperimentId"] = request.experimentId();
  }

  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasParams()) {
    body["Params"] = request.params();
  }

  if (!!request.hasSourceId()) {
    body["SourceId"] = request.sourceId();
  }

  if (!!request.hasSourceType()) {
    body["SourceType"] = request.sourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateRun"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/runs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRunResponse>();
}

/**
 * @summary Creates a run. A run is an experiment that can be associated with a specific workload or simply a code execution.
 *
 * @param request CreateRunRequest
 * @return CreateRunResponse
 */
CreateRunResponse Client::createRun(const CreateRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRunWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a workspace.
 *
 * @param request CreateWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkspaceResponse
 */
CreateWorkspaceResponse Client::createWorkspaceWithOptions(const CreateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.displayName();
  }

  if (!!request.hasEnvTypes()) {
    body["EnvTypes"] = request.envTypes();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasWorkspaceName()) {
    body["WorkspaceName"] = request.workspaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWorkspace"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkspaceResponse>();
}

/**
 * @summary Creates a workspace.
 *
 * @param request CreateWorkspaceRequest
 * @return CreateWorkspaceResponse
 */
CreateWorkspaceResponse Client::createWorkspace(const CreateWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createWorkspaceWithOptions(request, headers, runtime);
}

/**
 * @summary Associates resources with a workspace.
 *
 * @param request CreateWorkspaceResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkspaceResourceResponse
 */
CreateWorkspaceResourceResponse Client::createWorkspaceResourceWithOptions(const string &WorkspaceId, const CreateWorkspaceResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOption()) {
    body["Option"] = request.option();
  }

  if (!!request.hasResources()) {
    body["Resources"] = request.resources();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateWorkspaceResource"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/resources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkspaceResourceResponse>();
}

/**
 * @summary Associates resources with a workspace.
 *
 * @param request CreateWorkspaceResourceRequest
 * @return CreateWorkspaceResourceResponse
 */
CreateWorkspaceResourceResponse Client::createWorkspaceResource(const string &WorkspaceId, const CreateWorkspaceResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createWorkspaceResourceWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary Deletes a code source based on the provided ID.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCodeSourceResponse
 */
DeleteCodeSourceResponse Client::deleteCodeSourceWithOptions(const string &CodeSourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCodeSource"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/codesources/" , Darabonba::Encode::Encoder::percentEncode(CodeSourceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCodeSourceResponse>();
}

/**
 * @summary Deletes a code source based on the provided ID.
 *
 * @return DeleteCodeSourceResponse
 */
DeleteCodeSourceResponse Client::deleteCodeSource(const string &CodeSourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteCodeSourceWithOptions(CodeSourceId, headers, runtime);
}

/**
 * @summary Deletes workspace configurations.
 *
 * @param request DeleteConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConfigResponse
 */
DeleteConfigResponse Client::deleteConfigWithOptions(const string &WorkspaceId, const string &ConfigKey, const DeleteConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryName()) {
    query["CategoryName"] = request.categoryName();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.labels();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConfig"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/configs/" , Darabonba::Encode::Encoder::percentEncode(ConfigKey))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConfigResponse>();
}

/**
 * @summary Deletes workspace configurations.
 *
 * @param request DeleteConfigRequest
 * @return DeleteConfigResponse
 */
DeleteConfigResponse Client::deleteConfig(const string &WorkspaceId, const string &ConfigKey, const DeleteConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteConfigWithOptions(WorkspaceId, ConfigKey, request, headers, runtime);
}

/**
 * @summary Deletes a connection.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConnectionResponse
 */
DeleteConnectionResponse Client::deleteConnectionWithOptions(const string &ConnectionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConnection"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/connections/" , Darabonba::Encode::Encoder::percentEncode(ConnectionId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConnectionResponse>();
}

/**
 * @summary Deletes a connection.
 *
 * @return DeleteConnectionResponse
 */
DeleteConnectionResponse Client::deleteConnection(const string &ConnectionId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteConnectionWithOptions(ConnectionId, headers, runtime);
}

/**
 * @summary Deletes a dataset.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatasetResponse
 */
DeleteDatasetResponse Client::deleteDatasetWithOptions(const string &DatasetId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataset"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatasetResponse>();
}

/**
 * @summary Deletes a dataset.
 *
 * @return DeleteDatasetResponse
 */
DeleteDatasetResponse Client::deleteDataset(const string &DatasetId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDatasetWithOptions(DatasetId, headers, runtime);
}

/**
 * @summary Deletes the metadata records of multiple files in a dataset at a time.
 *
 * @param request DeleteDatasetFileMetasRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatasetFileMetasResponse
 */
DeleteDatasetFileMetasResponse Client::deleteDatasetFileMetasWithOptions(const string &DatasetId, const DeleteDatasetFileMetasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetFileMetaIds()) {
    query["DatasetFileMetaIds"] = request.datasetFileMetaIds();
  }

  if (!!request.hasDatasetVersion()) {
    query["DatasetVersion"] = request.datasetVersion();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDatasetFileMetas"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/datasetfilemetas")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatasetFileMetasResponse>();
}

/**
 * @summary Deletes the metadata records of multiple files in a dataset at a time.
 *
 * @param request DeleteDatasetFileMetasRequest
 * @return DeleteDatasetFileMetasResponse
 */
DeleteDatasetFileMetasResponse Client::deleteDatasetFileMetas(const string &DatasetId, const DeleteDatasetFileMetasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDatasetFileMetasWithOptions(DatasetId, request, headers, runtime);
}

/**
 * @summary Deletes a dataset job.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatasetJobResponse
 */
DeleteDatasetJobResponse Client::deleteDatasetJobWithOptions(const string &DatasetId, const string &DatasetJobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDatasetJob"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/datasetjobs/" , Darabonba::Encode::Encoder::percentEncode(DatasetJobId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatasetJobResponse>();
}

/**
 * @summary Deletes a dataset job.
 *
 * @return DeleteDatasetJobResponse
 */
DeleteDatasetJobResponse Client::deleteDatasetJob(const string &DatasetId, const string &DatasetJobId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDatasetJobWithOptions(DatasetId, DatasetJobId, headers, runtime);
}

/**
 * @summary Deletes a job configuration for a dataset.
 *
 * @param request DeleteDatasetJobConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatasetJobConfigResponse
 */
DeleteDatasetJobConfigResponse Client::deleteDatasetJobConfigWithOptions(const string &DatasetId, const string &DatasetJobConfigId, const DeleteDatasetJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDatasetJobConfig"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/datasetjobconfigs/" , Darabonba::Encode::Encoder::percentEncode(DatasetJobConfigId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatasetJobConfigResponse>();
}

/**
 * @summary Deletes a job configuration for a dataset.
 *
 * @param request DeleteDatasetJobConfigRequest
 * @return DeleteDatasetJobConfigResponse
 */
DeleteDatasetJobConfigResponse Client::deleteDatasetJobConfig(const string &DatasetId, const string &DatasetJobConfigId, const DeleteDatasetJobConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDatasetJobConfigWithOptions(DatasetId, DatasetJobConfigId, request, headers, runtime);
}

/**
 * @summary Deletes a dataset tag.
 *
 * @param request DeleteDatasetLabelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatasetLabelsResponse
 */
DeleteDatasetLabelsResponse Client::deleteDatasetLabelsWithOptions(const string &DatasetId, const DeleteDatasetLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLabelKeys()) {
    query["LabelKeys"] = request.labelKeys();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDatasetLabels"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/labels")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatasetLabelsResponse>();
}

/**
 * @summary Deletes a dataset tag.
 *
 * @param request DeleteDatasetLabelsRequest
 * @return DeleteDatasetLabelsResponse
 */
DeleteDatasetLabelsResponse Client::deleteDatasetLabels(const string &DatasetId, const DeleteDatasetLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDatasetLabelsWithOptions(DatasetId, request, headers, runtime);
}

/**
 * @summary Deletes the information about a specified version of a dataset. Version v1 cannot be deleted by using this operation. When you call the DeleteDataset operation to delete a dataset, it can be deleted at the same time.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatasetVersionResponse
 */
DeleteDatasetVersionResponse Client::deleteDatasetVersionWithOptions(const string &DatasetId, const string &VersionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDatasetVersion"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(VersionName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatasetVersionResponse>();
}

/**
 * @summary Deletes the information about a specified version of a dataset. Version v1 cannot be deleted by using this operation. When you call the DeleteDataset operation to delete a dataset, it can be deleted at the same time.
 *
 * @return DeleteDatasetVersionResponse
 */
DeleteDatasetVersionResponse Client::deleteDatasetVersion(const string &DatasetId, const string &VersionName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDatasetVersionWithOptions(DatasetId, VersionName, headers, runtime);
}

/**
 * @summary Deletes tags for a dataset version.
 *
 * @param request DeleteDatasetVersionLabelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatasetVersionLabelsResponse
 */
DeleteDatasetVersionLabelsResponse Client::deleteDatasetVersionLabelsWithOptions(const string &DatasetId, const string &VersionName, const DeleteDatasetVersionLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeys()) {
    query["Keys"] = request.keys();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDatasetVersionLabels"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(VersionName) , "/labels")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatasetVersionLabelsResponse>();
}

/**
 * @summary Deletes tags for a dataset version.
 *
 * @param request DeleteDatasetVersionLabelsRequest
 * @return DeleteDatasetVersionLabelsResponse
 */
DeleteDatasetVersionLabelsResponse Client::deleteDatasetVersionLabels(const string &DatasetId, const string &VersionName, const DeleteDatasetVersionLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDatasetVersionLabelsWithOptions(DatasetId, VersionName, request, headers, runtime);
}

/**
 * @summary Deletes an experiment.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExperimentResponse
 */
DeleteExperimentResponse Client::deleteExperimentWithOptions(const string &ExperimentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteExperiment"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExperimentResponse>();
}

/**
 * @summary Deletes an experiment.
 *
 * @return DeleteExperimentResponse
 */
DeleteExperimentResponse Client::deleteExperiment(const string &ExperimentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteExperimentWithOptions(ExperimentId, headers, runtime);
}

/**
 * @summary Deletes an experiment tag.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExperimentLabelResponse
 */
DeleteExperimentLabelResponse Client::deleteExperimentLabelWithOptions(const string &ExperimentId, const string &Key, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteExperimentLabel"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/labels/" , Darabonba::Encode::Encoder::percentEncode(Key))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExperimentLabelResponse>();
}

/**
 * @summary Deletes an experiment tag.
 *
 * @return DeleteExperimentLabelResponse
 */
DeleteExperimentLabelResponse Client::deleteExperimentLabel(const string &ExperimentId, const string &Key) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteExperimentLabelWithOptions(ExperimentId, Key, headers, runtime);
}

/**
 * @summary Deletes a member from a workspace.
 *
 * @param request DeleteMembersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMembersResponse
 */
DeleteMembersResponse Client::deleteMembersWithOptions(const string &WorkspaceId, const DeleteMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberIds()) {
    query["MemberIds"] = request.memberIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMembers"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/members")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMembersResponse>();
}

/**
 * @summary Deletes a member from a workspace.
 *
 * @param request DeleteMembersRequest
 * @return DeleteMembersResponse
 */
DeleteMembersResponse Client::deleteMembers(const string &WorkspaceId, const DeleteMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMembersWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary Deletes a model.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModelResponse
 */
DeleteModelResponse Client::deleteModelWithOptions(const string &ModelId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteModel"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/models/" , Darabonba::Encode::Encoder::percentEncode(ModelId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModelResponse>();
}

/**
 * @summary Deletes a model.
 *
 * @return DeleteModelResponse
 */
DeleteModelResponse Client::deleteModel(const string &ModelId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteModelWithOptions(ModelId, headers, runtime);
}

/**
 * @summary Deletes the labels of a model.
 *
 * @param request DeleteModelLabelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModelLabelsResponse
 */
DeleteModelLabelsResponse Client::deleteModelLabelsWithOptions(const string &ModelId, const DeleteModelLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLabelKeys()) {
    query["LabelKeys"] = request.labelKeys();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteModelLabels"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/models/" , Darabonba::Encode::Encoder::percentEncode(ModelId) , "/labels")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModelLabelsResponse>();
}

/**
 * @summary Deletes the labels of a model.
 *
 * @param request DeleteModelLabelsRequest
 * @return DeleteModelLabelsResponse
 */
DeleteModelLabelsResponse Client::deleteModelLabels(const string &ModelId, const DeleteModelLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteModelLabelsWithOptions(ModelId, request, headers, runtime);
}

/**
 * @summary Deletes a model version.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModelVersionResponse
 */
DeleteModelVersionResponse Client::deleteModelVersionWithOptions(const string &ModelId, const string &VersionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteModelVersion"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/models/" , Darabonba::Encode::Encoder::percentEncode(ModelId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(VersionName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModelVersionResponse>();
}

/**
 * @summary Deletes a model version.
 *
 * @return DeleteModelVersionResponse
 */
DeleteModelVersionResponse Client::deleteModelVersion(const string &ModelId, const string &VersionName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteModelVersionWithOptions(ModelId, VersionName, headers, runtime);
}

/**
 * @summary Delete a model version tag.
 *
 * @param request DeleteModelVersionLabelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteModelVersionLabelsResponse
 */
DeleteModelVersionLabelsResponse Client::deleteModelVersionLabelsWithOptions(const string &ModelId, const string &VersionName, const DeleteModelVersionLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLabelKeys()) {
    query["LabelKeys"] = request.labelKeys();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteModelVersionLabels"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/models/" , Darabonba::Encode::Encoder::percentEncode(ModelId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(VersionName) , "/labels")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteModelVersionLabelsResponse>();
}

/**
 * @summary Delete a model version tag.
 *
 * @param request DeleteModelVersionLabelsRequest
 * @return DeleteModelVersionLabelsResponse
 */
DeleteModelVersionLabelsResponse Client::deleteModelVersionLabels(const string &ModelId, const string &VersionName, const DeleteModelVersionLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteModelVersionLabelsWithOptions(ModelId, VersionName, request, headers, runtime);
}

/**
 * @summary Deletes a run.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRunResponse
 */
DeleteRunResponse Client::deleteRunWithOptions(const string &RunId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRun"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/runs/" , Darabonba::Encode::Encoder::percentEncode(RunId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRunResponse>();
}

/**
 * @summary Deletes a run.
 *
 * @return DeleteRunResponse
 */
DeleteRunResponse Client::deleteRun(const string &RunId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRunWithOptions(RunId, headers, runtime);
}

/**
 * @summary Deletes a tag that is added to a run.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRunLabelResponse
 */
DeleteRunLabelResponse Client::deleteRunLabelWithOptions(const string &RunId, const string &Key, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRunLabel"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/runs/" , Darabonba::Encode::Encoder::percentEncode(RunId) , "/labels/" , Darabonba::Encode::Encoder::percentEncode(Key))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRunLabelResponse>();
}

/**
 * @summary Deletes a tag that is added to a run.
 *
 * @return DeleteRunLabelResponse
 */
DeleteRunLabelResponse Client::deleteRunLabel(const string &RunId, const string &Key) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRunLabelWithOptions(RunId, Key, headers, runtime);
}

/**
 * @summary Deletes user configurations.
 *
 * @param request DeleteUserConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserConfigResponse
 */
DeleteUserConfigResponse Client::deleteUserConfigWithOptions(const string &CategoryName, const DeleteUserConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigKey()) {
    query["ConfigKey"] = request.configKey();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.scope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserConfig"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/userconfigs/" , Darabonba::Encode::Encoder::percentEncode(CategoryName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserConfigResponse>();
}

/**
 * @summary Deletes user configurations.
 *
 * @param request DeleteUserConfigRequest
 * @return DeleteUserConfigResponse
 */
DeleteUserConfigResponse Client::deleteUserConfig(const string &CategoryName, const DeleteUserConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteUserConfigWithOptions(CategoryName, request, headers, runtime);
}

/**
 * @summary Deletes a workspace. After you delete a workspace, the associated resources are not automatically released. You must manually release the resources.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkspaceResponse
 */
DeleteWorkspaceResponse Client::deleteWorkspaceWithOptions(const string &WorkspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWorkspace"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkspaceResponse>();
}

/**
 * @summary Deletes a workspace. After you delete a workspace, the associated resources are not automatically released. You must manually release the resources.
 *
 * @return DeleteWorkspaceResponse
 */
DeleteWorkspaceResponse Client::deleteWorkspace(const string &WorkspaceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteWorkspaceWithOptions(WorkspaceId, headers, runtime);
}

/**
 * @summary Deletes a resource from a workspace. The resource is not deleted at the underlying layer.
 *
 * @param request DeleteWorkspaceResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkspaceResourceResponse
 */
DeleteWorkspaceResourceResponse Client::deleteWorkspaceResourceWithOptions(const string &WorkspaceId, const DeleteWorkspaceResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.labels();
  }

  if (!!request.hasOption()) {
    query["Option"] = request.option();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.productType();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWorkspaceResource"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/resources")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkspaceResourceResponse>();
}

/**
 * @summary Deletes a resource from a workspace. The resource is not deleted at the underlying layer.
 *
 * @param request DeleteWorkspaceResourceRequest
 * @return DeleteWorkspaceResourceResponse
 */
DeleteWorkspaceResourceResponse Client::deleteWorkspaceResource(const string &WorkspaceId, const DeleteWorkspaceResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteWorkspaceResourceWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary Obtains the details of a code source.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCodeSourceResponse
 */
GetCodeSourceResponse Client::getCodeSourceWithOptions(const string &CodeSourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCodeSource"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/codesources/" , Darabonba::Encode::Encoder::percentEncode(CodeSourceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCodeSourceResponse>();
}

/**
 * @summary Obtains the details of a code source.
 *
 * @return GetCodeSourceResponse
 */
GetCodeSourceResponse Client::getCodeSource(const string &CodeSourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCodeSourceWithOptions(CodeSourceId, headers, runtime);
}

/**
 * @summary Obtains a workspace configuration item.
 *
 * @param request GetConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConfigResponse
 */
GetConfigResponse Client::getConfigWithOptions(const string &WorkspaceId, const GetConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryName()) {
    query["CategoryName"] = request.categoryName();
  }

  if (!!request.hasConfigKey()) {
    query["ConfigKey"] = request.configKey();
  }

  if (!!request.hasVerbose()) {
    query["Verbose"] = request.verbose();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConfig"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConfigResponse>();
}

/**
 * @summary Obtains a workspace configuration item.
 *
 * @param request GetConfigRequest
 * @return GetConfigResponse
 */
GetConfigResponse Client::getConfig(const string &WorkspaceId, const GetConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getConfigWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary Obtains the connection details.
 *
 * @param request GetConnectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConnectionResponse
 */
GetConnectionResponse Client::getConnectionWithOptions(const string &ConnectionId, const GetConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncryptOption()) {
    query["EncryptOption"] = request.encryptOption();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConnection"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/connections/" , Darabonba::Encode::Encoder::percentEncode(ConnectionId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConnectionResponse>();
}

/**
 * @summary Obtains the connection details.
 *
 * @param request GetConnectionRequest
 * @return GetConnectionResponse
 */
GetConnectionResponse Client::getConnection(const string &ConnectionId, const GetConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getConnectionWithOptions(ConnectionId, request, headers, runtime);
}

/**
 * @summary Obtains a dataset.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatasetResponse
 */
GetDatasetResponse Client::getDatasetWithOptions(const string &DatasetId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataset"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatasetResponse>();
}

/**
 * @summary Obtains a dataset.
 *
 * @return GetDatasetResponse
 */
GetDatasetResponse Client::getDataset(const string &DatasetId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDatasetWithOptions(DatasetId, headers, runtime);
}

/**
 * @summary Queries the metadata records of specific files in a dataset.
 *
 * @param request GetDatasetFileMetaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatasetFileMetaResponse
 */
GetDatasetFileMetaResponse Client::getDatasetFileMetaWithOptions(const string &DatasetId, const string &DatasetFileMetaId, const GetDatasetFileMetaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetVersion()) {
    query["DatasetVersion"] = request.datasetVersion();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatasetFileMeta"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/datasetfilemetas/" , Darabonba::Encode::Encoder::percentEncode(DatasetFileMetaId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatasetFileMetaResponse>();
}

/**
 * @summary Queries the metadata records of specific files in a dataset.
 *
 * @param request GetDatasetFileMetaRequest
 * @return GetDatasetFileMetaResponse
 */
GetDatasetFileMetaResponse Client::getDatasetFileMeta(const string &DatasetId, const string &DatasetFileMetaId, const GetDatasetFileMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDatasetFileMetaWithOptions(DatasetId, DatasetFileMetaId, request, headers, runtime);
}

/**
 * @summary Obtains metadata statistics of a dataset.
 *
 * @param request GetDatasetFileMetasStatisticsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatasetFileMetasStatisticsResponse
 */
GetDatasetFileMetasStatisticsResponse Client::getDatasetFileMetasStatisticsWithOptions(const string &DatasetId, const GetDatasetFileMetasStatisticsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAggregateBy()) {
    query["AggregateBy"] = request.aggregateBy();
  }

  if (!!request.hasDatasetVersion()) {
    query["DatasetVersion"] = request.datasetVersion();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatasetFileMetasStatistics"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/statistics/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/datasetfilemetas")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatasetFileMetasStatisticsResponse>();
}

/**
 * @summary Obtains metadata statistics of a dataset.
 *
 * @param request GetDatasetFileMetasStatisticsRequest
 * @return GetDatasetFileMetasStatisticsResponse
 */
GetDatasetFileMetasStatisticsResponse Client::getDatasetFileMetasStatistics(const string &DatasetId, const GetDatasetFileMetasStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDatasetFileMetasStatisticsWithOptions(DatasetId, request, headers, runtime);
}

/**
 * @summary Obtains a dataset job.
 *
 * @param request GetDatasetJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatasetJobResponse
 */
GetDatasetJobResponse Client::getDatasetJobWithOptions(const string &DatasetId, const string &DatasetJobId, const GetDatasetJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetVersion()) {
    query["DatasetVersion"] = request.datasetVersion();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatasetJob"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/datasetjobs/" , Darabonba::Encode::Encoder::percentEncode(DatasetJobId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatasetJobResponse>();
}

/**
 * @summary Obtains a dataset job.
 *
 * @param request GetDatasetJobRequest
 * @return GetDatasetJobResponse
 */
GetDatasetJobResponse Client::getDatasetJob(const string &DatasetId, const string &DatasetJobId, const GetDatasetJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDatasetJobWithOptions(DatasetId, DatasetJobId, request, headers, runtime);
}

/**
 * @summary Obtains a job configuration for a dataset.
 *
 * @param request GetDatasetJobConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatasetJobConfigResponse
 */
GetDatasetJobConfigResponse Client::getDatasetJobConfigWithOptions(const string &DatasetId, const string &DatasetJobConfigId, const GetDatasetJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatasetJobConfig"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/datasetjobconfigs/" , Darabonba::Encode::Encoder::percentEncode(DatasetJobConfigId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatasetJobConfigResponse>();
}

/**
 * @summary Obtains a job configuration for a dataset.
 *
 * @param request GetDatasetJobConfigRequest
 * @return GetDatasetJobConfigResponse
 */
GetDatasetJobConfigResponse Client::getDatasetJobConfig(const string &DatasetId, const string &DatasetJobConfigId, const GetDatasetJobConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDatasetJobConfigWithOptions(DatasetId, DatasetJobConfigId, request, headers, runtime);
}

/**
 * @summary Obtains the information about a specified version of a dataset.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatasetVersionResponse
 */
GetDatasetVersionResponse Client::getDatasetVersionWithOptions(const string &DatasetId, const string &VersionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatasetVersion"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(VersionName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatasetVersionResponse>();
}

/**
 * @summary Obtains the information about a specified version of a dataset.
 *
 * @return GetDatasetVersionResponse
 */
GetDatasetVersionResponse Client::getDatasetVersion(const string &DatasetId, const string &VersionName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDatasetVersionWithOptions(DatasetId, VersionName, headers, runtime);
}

/**
 * @summary Queries information about the default workspace.
 *
 * @param request GetDefaultWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDefaultWorkspaceResponse
 */
GetDefaultWorkspaceResponse Client::getDefaultWorkspaceWithOptions(const GetDefaultWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVerbose()) {
    query["Verbose"] = request.verbose();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDefaultWorkspace"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/defaultWorkspaces")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDefaultWorkspaceResponse>();
}

/**
 * @summary Queries information about the default workspace.
 *
 * @param request GetDefaultWorkspaceRequest
 * @return GetDefaultWorkspaceResponse
 */
GetDefaultWorkspaceResponse Client::getDefaultWorkspace(const GetDefaultWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDefaultWorkspaceWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains an experiment.
 *
 * @param request GetExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExperimentResponse
 */
GetExperimentResponse Client::getExperimentWithOptions(const string &ExperimentId, const GetExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVerbose()) {
    query["Verbose"] = request.verbose();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExperiment"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExperimentResponse>();
}

/**
 * @summary Obtains an experiment.
 *
 * @param request GetExperimentRequest
 * @return GetExperimentResponse
 */
GetExperimentResponse Client::getExperiment(const string &ExperimentId, const GetExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getExperimentWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary Obtains the information about an image.
 *
 * @param request GetImageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageResponse
 */
GetImageResponse Client::getImageWithOptions(const string &ImageId, const GetImageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVerbose()) {
    query["Verbose"] = request.verbose();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetImage"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/images/" , Darabonba::Encode::Encoder::percentEncode(ImageId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageResponse>();
}

/**
 * @summary Obtains the information about an image.
 *
 * @param request GetImageRequest
 * @return GetImageResponse
 */
GetImageResponse Client::getImage(const string &ImageId, const GetImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getImageWithOptions(ImageId, request, headers, runtime);
}

/**
 * @summary Obtains a member in a workspace.
 *
 * @param request GetMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMemberResponse
 */
GetMemberResponse Client::getMemberWithOptions(const string &WorkspaceId, const GetMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberId()) {
    query["MemberId"] = request.memberId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMember"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/member")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMemberResponse>();
}

/**
 * @summary Obtains a member in a workspace.
 *
 * @param request GetMemberRequest
 * @return GetMemberResponse
 */
GetMemberResponse Client::getMember(const string &WorkspaceId, const GetMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMemberWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary Obtains the details of a specified model.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModelResponse
 */
GetModelResponse Client::getModelWithOptions(const string &ModelId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetModel"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/models/" , Darabonba::Encode::Encoder::percentEncode(ModelId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetModelResponse>();
}

/**
 * @summary Obtains the details of a specified model.
 *
 * @return GetModelResponse
 */
GetModelResponse Client::getModel(const string &ModelId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getModelWithOptions(ModelId, headers, runtime);
}

/**
 * @summary Queries a model version.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModelVersionResponse
 */
GetModelVersionResponse Client::getModelVersionWithOptions(const string &ModelId, const string &VersionName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetModelVersion"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/models/" , Darabonba::Encode::Encoder::percentEncode(ModelId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(VersionName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetModelVersionResponse>();
}

/**
 * @summary Queries a model version.
 *
 * @return GetModelVersionResponse
 */
GetModelVersionResponse Client::getModelVersion(const string &ModelId, const string &VersionName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getModelVersionWithOptions(ModelId, VersionName, headers, runtime);
}

/**
 * @summary Obtains permissions on a workspace.
 *
 * @param tmpReq GetPermissionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPermissionResponse
 */
GetPermissionResponse Client::getPermissionWithOptions(const string &WorkspaceId, const string &PermissionCode, const GetPermissionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetPermissionShrinkRequest request = GetPermissionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLabels()) {
    request.setLabelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.labels(), "Labels", "json"));
  }

  json query = {};
  if (!!request.hasAccessibility()) {
    query["Accessibility"] = request.accessibility();
  }

  if (!!request.hasCreator()) {
    query["Creator"] = request.creator();
  }

  if (!!request.hasLabelsShrink()) {
    query["Labels"] = request.labelsShrink();
  }

  if (!!request.hasOption()) {
    query["Option"] = request.option();
  }

  if (!!request.hasResource()) {
    query["Resource"] = request.resource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPermission"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/permissions/" , Darabonba::Encode::Encoder::percentEncode(PermissionCode))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPermissionResponse>();
}

/**
 * @summary Obtains permissions on a workspace.
 *
 * @param request GetPermissionRequest
 * @return GetPermissionResponse
 */
GetPermissionResponse Client::getPermission(const string &WorkspaceId, const string &PermissionCode, const GetPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPermissionWithOptions(WorkspaceId, PermissionCode, request, headers, runtime);
}

/**
 * @summary Queries the run information.
 *
 * @param request GetRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRunResponse
 */
GetRunResponse Client::getRunWithOptions(const string &RunId, const GetRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVerbose()) {
    query["Verbose"] = request.verbose();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRun"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/runs/" , Darabonba::Encode::Encoder::percentEncode(RunId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRunResponse>();
}

/**
 * @summary Queries the run information.
 *
 * @param request GetRunRequest
 * @return GetRunResponse
 */
GetRunResponse Client::getRun(const string &RunId, const GetRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRunWithOptions(RunId, request, headers, runtime);
}

/**
 * @summary Queries the details about a workspace.
 *
 * @param request GetWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkspaceResponse
 */
GetWorkspaceResponse Client::getWorkspaceWithOptions(const string &WorkspaceId, const GetWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVerbose()) {
    query["Verbose"] = request.verbose();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkspace"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkspaceResponse>();
}

/**
 * @summary Queries the details about a workspace.
 *
 * @param request GetWorkspaceRequest
 * @return GetWorkspaceResponse
 */
GetWorkspaceResponse Client::getWorkspace(const string &WorkspaceId, const GetWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkspaceWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary Lists code sources. Pagination, sorting, and filtering by condition are supported.
 *
 * @param request ListCodeSourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCodeSourcesResponse
 */
ListCodeSourcesResponse Client::listCodeSourcesWithOptions(const ListCodeSourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.displayName();
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

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCodeSources"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/codesources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCodeSourcesResponse>();
}

/**
 * @summary Lists code sources. Pagination, sorting, and filtering by condition are supported.
 *
 * @param request ListCodeSourcesRequest
 * @return ListCodeSourcesResponse
 */
ListCodeSourcesResponse Client::listCodeSources(const ListCodeSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listCodeSourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains a list of workspace configurations.
 *
 * @param request ListConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConfigsResponse
 */
ListConfigsResponse Client::listConfigsWithOptions(const string &WorkspaceId, const ListConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryName()) {
    query["CategoryName"] = request.categoryName();
  }

  if (!!request.hasConfigKeys()) {
    query["ConfigKeys"] = request.configKeys();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.labels();
  }

  if (!!request.hasVerbose()) {
    query["Verbose"] = request.verbose();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConfigs"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/configs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConfigsResponse>();
}

/**
 * @summary Obtains a list of workspace configurations.
 *
 * @param request ListConfigsRequest
 * @return ListConfigsResponse
 */
ListConfigsResponse Client::listConfigs(const string &WorkspaceId, const ListConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listConfigsWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary Lists connections.
 *
 * @param tmpReq ListConnectionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConnectionsResponse
 */
ListConnectionsResponse Client::listConnectionsWithOptions(const ListConnectionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListConnectionsShrinkRequest request = ListConnectionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConnectionIds()) {
    request.setConnectionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.connectionIds(), "ConnectionIds", "simple"));
  }

  if (!!tmpReq.hasConnectionTypes()) {
    request.setConnectionTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.connectionTypes(), "ConnectionTypes", "simple"));
  }

  if (!!tmpReq.hasModelTypes()) {
    request.setModelTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.modelTypes(), "ModelTypes", "simple"));
  }

  json query = {};
  if (!!request.hasConnectionIdsShrink()) {
    query["ConnectionIds"] = request.connectionIdsShrink();
  }

  if (!!request.hasConnectionName()) {
    query["ConnectionName"] = request.connectionName();
  }

  if (!!request.hasConnectionTypesShrink()) {
    query["ConnectionTypes"] = request.connectionTypesShrink();
  }

  if (!!request.hasCreator()) {
    query["Creator"] = request.creator();
  }

  if (!!request.hasEncryptOption()) {
    query["EncryptOption"] = request.encryptOption();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.model();
  }

  if (!!request.hasModelTypesShrink()) {
    query["ModelTypes"] = request.modelTypesShrink();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasToolCall()) {
    query["ToolCall"] = request.toolCall();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConnections"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/connections")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConnectionsResponse>();
}

/**
 * @summary Lists connections.
 *
 * @param request ListConnectionsRequest
 * @return ListConnectionsResponse
 */
ListConnectionsResponse Client::listConnections(const ListConnectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listConnectionsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of dataset files.
 *
 * @param tmpReq ListDatasetFileMetasRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatasetFileMetasResponse
 */
ListDatasetFileMetasResponse Client::listDatasetFileMetasWithOptions(const string &DatasetId, const ListDatasetFileMetasRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDatasetFileMetasShrinkRequest request = ListDatasetFileMetasShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasQueryContentTypeIncludeAny()) {
    request.setQueryContentTypeIncludeAnyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.queryContentTypeIncludeAny(), "QueryContentTypeIncludeAny", "simple"));
  }

  if (!!tmpReq.hasQueryFileTypeIncludeAny()) {
    request.setQueryFileTypeIncludeAnyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.queryFileTypeIncludeAny(), "QueryFileTypeIncludeAny", "simple"));
  }

  if (!!tmpReq.hasQueryTagsExclude()) {
    request.setQueryTagsExcludeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.queryTagsExclude(), "QueryTagsExclude", "simple"));
  }

  if (!!tmpReq.hasQueryTagsIncludeAll()) {
    request.setQueryTagsIncludeAllShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.queryTagsIncludeAll(), "QueryTagsIncludeAll", "simple"));
  }

  if (!!tmpReq.hasQueryTagsIncludeAny()) {
    request.setQueryTagsIncludeAnyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.queryTagsIncludeAny(), "QueryTagsIncludeAny", "simple"));
  }

  json query = {};
  if (!!request.hasDatasetVersion()) {
    query["DatasetVersion"] = request.datasetVersion();
  }

  if (!!request.hasEndFileUpdateTime()) {
    query["EndFileUpdateTime"] = request.endFileUpdateTime();
  }

  if (!!request.hasEndTagUpdateTime()) {
    query["EndTagUpdateTime"] = request.endTagUpdateTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryContentTypeIncludeAnyShrink()) {
    query["QueryContentTypeIncludeAny"] = request.queryContentTypeIncludeAnyShrink();
  }

  if (!!request.hasQueryExpression()) {
    query["QueryExpression"] = request.queryExpression();
  }

  if (!!request.hasQueryFileDir()) {
    query["QueryFileDir"] = request.queryFileDir();
  }

  if (!!request.hasQueryFileName()) {
    query["QueryFileName"] = request.queryFileName();
  }

  if (!!request.hasQueryFileTypeIncludeAnyShrink()) {
    query["QueryFileTypeIncludeAny"] = request.queryFileTypeIncludeAnyShrink();
  }

  if (!!request.hasQueryImage()) {
    query["QueryImage"] = request.queryImage();
  }

  if (!!request.hasQueryTagsExcludeShrink()) {
    query["QueryTagsExclude"] = request.queryTagsExcludeShrink();
  }

  if (!!request.hasQueryTagsIncludeAllShrink()) {
    query["QueryTagsIncludeAll"] = request.queryTagsIncludeAllShrink();
  }

  if (!!request.hasQueryTagsIncludeAnyShrink()) {
    query["QueryTagsIncludeAny"] = request.queryTagsIncludeAnyShrink();
  }

  if (!!request.hasQueryText()) {
    query["QueryText"] = request.queryText();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
  }

  if (!!request.hasScoreThreshold()) {
    query["ScoreThreshold"] = request.scoreThreshold();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasStartFileUpdateTime()) {
    query["StartFileUpdateTime"] = request.startFileUpdateTime();
  }

  if (!!request.hasStartTagUpdateTime()) {
    query["StartTagUpdateTime"] = request.startTagUpdateTime();
  }

  if (!!request.hasThumbnailMode()) {
    query["ThumbnailMode"] = request.thumbnailMode();
  }

  if (!!request.hasTopK()) {
    query["TopK"] = request.topK();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatasetFileMetas"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/datasetfilemetas")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatasetFileMetasResponse>();
}

/**
 * @summary Queries a list of dataset files.
 *
 * @param request ListDatasetFileMetasRequest
 * @return ListDatasetFileMetasResponse
 */
ListDatasetFileMetasResponse Client::listDatasetFileMetas(const string &DatasetId, const ListDatasetFileMetasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDatasetFileMetasWithOptions(DatasetId, request, headers, runtime);
}

/**
 * @summary Queries the dataset job configurations at a time.
 *
 * @param request ListDatasetJobConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatasetJobConfigsResponse
 */
ListDatasetJobConfigsResponse Client::listDatasetJobConfigsWithOptions(const string &DatasetId, const ListDatasetJobConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigType()) {
    query["ConfigType"] = request.configType();
  }

  if (!!request.hasDatasetVersion()) {
    query["DatasetVersion"] = request.datasetVersion();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatasetJobConfigs"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/datasetjobconfigs/")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatasetJobConfigsResponse>();
}

/**
 * @summary Queries the dataset job configurations at a time.
 *
 * @param request ListDatasetJobConfigsRequest
 * @return ListDatasetJobConfigsResponse
 */
ListDatasetJobConfigsResponse Client::listDatasetJobConfigs(const string &DatasetId, const ListDatasetJobConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDatasetJobConfigsWithOptions(DatasetId, request, headers, runtime);
}

/**
 * @summary Lists jobs in a dataset.
 *
 * @param request ListDatasetJobsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatasetJobsResponse
 */
ListDatasetJobsResponse Client::listDatasetJobsWithOptions(const string &DatasetId, const ListDatasetJobsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetVersion()) {
    query["DatasetVersion"] = request.datasetVersion();
  }

  if (!!request.hasJobAction()) {
    query["JobAction"] = request.jobAction();
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

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatasetJobs"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/datasetjobs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatasetJobsResponse>();
}

/**
 * @summary Lists jobs in a dataset.
 *
 * @param request ListDatasetJobsRequest
 * @return ListDatasetJobsResponse
 */
ListDatasetJobsResponse Client::listDatasetJobs(const string &DatasetId, const ListDatasetJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDatasetJobsWithOptions(DatasetId, request, headers, runtime);
}

/**
 * @summary Lists dataset versions.
 *
 * @param request ListDatasetVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatasetVersionsResponse
 */
ListDatasetVersionsResponse Client::listDatasetVersionsWithOptions(const string &DatasetId, const ListDatasetVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLabelKeys()) {
    query["LabelKeys"] = request.labelKeys();
  }

  if (!!request.hasLabelValues()) {
    query["LabelValues"] = request.labelValues();
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

  if (!!request.hasProperties()) {
    query["Properties"] = request.properties();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.sourceId();
  }

  if (!!request.hasSourceTypes()) {
    query["SourceTypes"] = request.sourceTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatasetVersions"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/versions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatasetVersionsResponse>();
}

/**
 * @summary Lists dataset versions.
 *
 * @param request ListDatasetVersionsRequest
 * @return ListDatasetVersionsResponse
 */
ListDatasetVersionsResponse Client::listDatasetVersions(const string &DatasetId, const ListDatasetVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDatasetVersionsWithOptions(DatasetId, request, headers, runtime);
}

/**
 * @summary Lists the datasets in a workspace.
 *
 * @param request ListDatasetsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatasetsResponse
 */
ListDatasetsResponse Client::listDatasetsWithOptions(const ListDatasetsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessibility()) {
    query["Accessibility"] = request.accessibility();
  }

  if (!!request.hasDataSourceTypes()) {
    query["DataSourceTypes"] = request.dataSourceTypes();
  }

  if (!!request.hasDataTypes()) {
    query["DataTypes"] = request.dataTypes();
  }

  if (!!request.hasEdition()) {
    query["Edition"] = request.edition();
  }

  if (!!request.hasLabel()) {
    query["Label"] = request.label();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
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

  if (!!request.hasProperties()) {
    query["Properties"] = request.properties();
  }

  if (!!request.hasProvider()) {
    query["Provider"] = request.provider();
  }

  if (!!request.hasShareScope()) {
    query["ShareScope"] = request.shareScope();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSourceDatasetId()) {
    query["SourceDatasetId"] = request.sourceDatasetId();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.sourceId();
  }

  if (!!request.hasSourceTypes()) {
    query["SourceTypes"] = request.sourceTypes();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatasets"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatasetsResponse>();
}

/**
 * @summary Lists the datasets in a workspace.
 *
 * @param request ListDatasetsRequest
 * @return ListDatasetsResponse
 */
ListDatasetsResponse Client::listDatasets(const ListDatasetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDatasetsWithOptions(request, headers, runtime);
}

/**
 * @summary Lists experiments.
 *
 * @param tmpReq ListExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExperimentResponse
 */
ListExperimentResponse Client::listExperimentWithOptions(const ListExperimentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListExperimentShrinkRequest request = ListExperimentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOptions()) {
    request.setOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.options(), "Options", "json"));
  }

  json query = {};
  if (!!request.hasLabels()) {
    query["Labels"] = request.labels();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOptionsShrink()) {
    query["Options"] = request.optionsShrink();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
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

  if (!!request.hasPageToken()) {
    query["PageToken"] = request.pageToken();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasVerbose()) {
    query["Verbose"] = request.verbose();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListExperiment"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExperimentResponse>();
}

/**
 * @summary Lists experiments.
 *
 * @param request ListExperimentRequest
 * @return ListExperimentResponse
 */
ListExperimentResponse Client::listExperiment(const ListExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listExperimentWithOptions(request, headers, runtime);
}

/**
 * @summary 列举特性
 *
 * @param request ListFeaturesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFeaturesResponse
 */
ListFeaturesResponse Client::listFeaturesWithOptions(const ListFeaturesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNames()) {
    query["Names"] = request.names();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFeatures"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/features")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFeaturesResponse>();
}

/**
 * @summary 列举特性
 *
 * @param request ListFeaturesRequest
 * @return ListFeaturesResponse
 */
ListFeaturesResponse Client::listFeatures(const ListFeaturesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listFeaturesWithOptions(request, headers, runtime);
}

/**
 * @summary Lists all tags of an image.
 *
 * @param request ListImageLabelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImageLabelsResponse
 */
ListImageLabelsResponse Client::listImageLabelsWithOptions(const ListImageLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImageId()) {
    query["ImageId"] = request.imageId();
  }

  if (!!request.hasLabelFilter()) {
    query["LabelFilter"] = request.labelFilter();
  }

  if (!!request.hasLabelKeys()) {
    query["LabelKeys"] = request.labelKeys();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListImageLabels"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/image/labels")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImageLabelsResponse>();
}

/**
 * @summary Lists all tags of an image.
 *
 * @param request ListImageLabelsRequest
 * @return ListImageLabelsResponse
 */
ListImageLabelsResponse Client::listImageLabels(const ListImageLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listImageLabelsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries a list of images.
 *
 * @param request ListImagesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImagesResponse
 */
ListImagesResponse Client::listImagesWithOptions(const ListImagesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessibility()) {
    query["Accessibility"] = request.accessibility();
  }

  if (!!request.hasImageUri()) {
    query["ImageUri"] = request.imageUri();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.labels();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
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

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasVerbose()) {
    query["Verbose"] = request.verbose();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListImages"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/images")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImagesResponse>();
}

/**
 * @summary Queries a list of images.
 *
 * @param request ListImagesRequest
 * @return ListImagesResponse
 */
ListImagesResponse Client::listImages(const ListImagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listImagesWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains the members in a workspace.
 *
 * @param request ListMembersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMembersResponse
 */
ListMembersResponse Client::listMembersWithOptions(const string &WorkspaceId, const ListMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberName()) {
    query["MemberName"] = request.memberName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRoles()) {
    query["Roles"] = request.roles();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMembers"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/members")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMembersResponse>();
}

/**
 * @summary Obtains the members in a workspace.
 *
 * @param request ListMembersRequest
 * @return ListMembersResponse
 */
ListMembersResponse Client::listMembers(const string &WorkspaceId, const ListMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMembersWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary Queries a list of model versions.
 *
 * @param request ListModelVersionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelVersionsResponse
 */
ListModelVersionsResponse Client::listModelVersionsWithOptions(const string &ModelId, const ListModelVersionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApprovalStatus()) {
    query["ApprovalStatus"] = request.approvalStatus();
  }

  if (!!request.hasFormatType()) {
    query["FormatType"] = request.formatType();
  }

  if (!!request.hasFrameworkType()) {
    query["FrameworkType"] = request.frameworkType();
  }

  if (!!request.hasLabel()) {
    query["Label"] = request.label();
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

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.sourceId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasVersionName()) {
    query["VersionName"] = request.versionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModelVersions"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/models/" , Darabonba::Encode::Encoder::percentEncode(ModelId) , "/versions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelVersionsResponse>();
}

/**
 * @summary Queries a list of model versions.
 *
 * @param request ListModelVersionsRequest
 * @return ListModelVersionsResponse
 */
ListModelVersionsResponse Client::listModelVersions(const string &ModelId, const ListModelVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listModelVersionsWithOptions(ModelId, request, headers, runtime);
}

/**
 * @summary Queries a list of models.
 *
 * @param tmpReq ListModelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListModelsResponse
 */
ListModelsResponse Client::listModelsWithOptions(const ListModelsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListModelsShrinkRequest request = ListModelsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConditions()) {
    request.setConditionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.conditions(), "Conditions", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "Tag", "json"));
  }

  json query = {};
  if (!!request.hasCollections()) {
    query["Collections"] = request.collections();
  }

  if (!!request.hasConditionsShrink()) {
    query["Conditions"] = request.conditionsShrink();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasLabel()) {
    query["Label"] = request.label();
  }

  if (!!request.hasModelName()) {
    query["ModelName"] = request.modelName();
  }

  if (!!request.hasModelType()) {
    query["ModelType"] = request.modelType();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasOrigin()) {
    query["Origin"] = request.origin();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProvider()) {
    query["Provider"] = request.provider();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasTagShrink()) {
    query["Tag"] = request.tagShrink();
  }

  if (!!request.hasTask()) {
    query["Task"] = request.task();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListModels"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/models")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListModelsResponse>();
}

/**
 * @summary Queries a list of models.
 *
 * @param request ListModelsRequest
 * @return ListModelsResponse
 */
ListModelsResponse Client::listModels(const ListModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listModelsWithOptions(request, headers, runtime);
}

/**
 * @summary Lists the permissions that a user has in a workspace.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPermissionsResponse
 */
ListPermissionsResponse Client::listPermissionsWithOptions(const string &WorkspaceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPermissions"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/permissions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPermissionsResponse>();
}

/**
 * @summary Lists the permissions that a user has in a workspace.
 *
 * @return ListPermissionsResponse
 */
ListPermissionsResponse Client::listPermissions(const string &WorkspaceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPermissionsWithOptions(WorkspaceId, headers, runtime);
}

/**
 * @summary 列举产品
 *
 * @param request ListProductsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProductsWithOptions(const ListProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductCodes()) {
    query["ProductCodes"] = request.productCodes();
  }

  if (!!request.hasServiceCodes()) {
    query["ServiceCodes"] = request.serviceCodes();
  }

  if (!!request.hasVerbose()) {
    query["Verbose"] = request.verbose();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProducts"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/products")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProductsResponse>();
}

/**
 * @summary 列举产品
 *
 * @param request ListProductsRequest
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProducts(const ListProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProductsWithOptions(request, headers, runtime);
}

/**
 * @summary Obtains the list of quotas.
 *
 * @param request ListQuotasRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQuotasResponse
 */
ListQuotasResponse Client::listQuotasWithOptions(const ListQuotasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListQuotas"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/quotas")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQuotasResponse>();
}

/**
 * @summary Obtains the list of quotas.
 *
 * @param request ListQuotasRequest
 * @return ListQuotasResponse
 */
ListQuotasResponse Client::listQuotas(const ListQuotasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listQuotasWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the resources that are associated with a workspace.
 *
 * @param request ListResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourcesResponse
 */
ListResourcesResponse Client::listResourcesWithOptions(const ListResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.labels();
  }

  if (!!request.hasOption()) {
    query["Option"] = request.option();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProductTypes()) {
    query["ProductTypes"] = request.productTypes();
  }

  if (!!request.hasQuotaIds()) {
    query["QuotaIds"] = request.quotaIds();
  }

  if (!!request.hasResourceName()) {
    query["ResourceName"] = request.resourceName();
  }

  if (!!request.hasResourceTypes()) {
    query["ResourceTypes"] = request.resourceTypes();
  }

  if (!!request.hasVerbose()) {
    query["Verbose"] = request.verbose();
  }

  if (!!request.hasVerboseFields()) {
    query["VerboseFields"] = request.verboseFields();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResources"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/resources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourcesResponse>();
}

/**
 * @summary Queries the resources that are associated with a workspace.
 *
 * @param request ListResourcesRequest
 * @return ListResourcesResponse
 */
ListResourcesResponse Client::listResources(const ListResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Lists the metrics for a run.
 *
 * @param request ListRunMetricsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRunMetricsResponse
 */
ListRunMetricsResponse Client::listRunMetricsWithOptions(const string &RunId, const ListRunMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasPageToken()) {
    query["PageToken"] = request.pageToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRunMetrics"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/runs/" , Darabonba::Encode::Encoder::percentEncode(RunId) , "/metrics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRunMetricsResponse>();
}

/**
 * @summary Lists the metrics for a run.
 *
 * @param request ListRunMetricsRequest
 * @return ListRunMetricsResponse
 */
ListRunMetricsResponse Client::listRunMetrics(const string &RunId, const ListRunMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRunMetricsWithOptions(RunId, request, headers, runtime);
}

/**
 * @summary Queries a list of runs.
 *
 * @param request ListRunsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRunsResponse
 */
ListRunsResponse Client::listRunsWithOptions(const ListRunsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExperimentId()) {
    query["ExperimentId"] = request.experimentId();
  }

  if (!!request.hasGmtCreateTime()) {
    query["GmtCreateTime"] = request.gmtCreateTime();
  }

  if (!!request.hasLabels()) {
    query["Labels"] = request.labels();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
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

  if (!!request.hasPageToken()) {
    query["PageToken"] = request.pageToken();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.sourceId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasVerbose()) {
    query["Verbose"] = request.verbose();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRuns"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/runs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRunsResponse>();
}

/**
 * @summary Queries a list of runs.
 *
 * @param request ListRunsRequest
 * @return ListRunsResponse
 */
ListRunsResponse Client::listRuns(const ListRunsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRunsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries user information.
 *
 * @param request ListUserConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserConfigsResponse
 */
ListUserConfigsResponse Client::listUserConfigsWithOptions(const ListUserConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryNames()) {
    query["CategoryNames"] = request.categoryNames();
  }

  if (!!request.hasConfigKeys()) {
    query["ConfigKeys"] = request.configKeys();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserConfigs"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/userconfigs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserConfigsResponse>();
}

/**
 * @summary Queries user information.
 *
 * @param request ListUserConfigsRequest
 * @return ListUserConfigsResponse
 */
ListUserConfigsResponse Client::listUserConfigs(const ListUserConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUserConfigsWithOptions(request, headers, runtime);
}

/**
 * @summary Lists the users who do not belong to a workspace. These users can be added to the workspace as members.
 *
 * @param request ListWorkspaceUsersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkspaceUsersResponse
 */
ListWorkspaceUsersResponse Client::listWorkspaceUsersWithOptions(const string &WorkspaceId, const ListWorkspaceUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkspaceUsers"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/users")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkspaceUsersResponse>();
}

/**
 * @summary Lists the users who do not belong to a workspace. These users can be added to the workspace as members.
 *
 * @param request ListWorkspaceUsersRequest
 * @return ListWorkspaceUsersResponse
 */
ListWorkspaceUsersResponse Client::listWorkspaceUsers(const string &WorkspaceId, const ListWorkspaceUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkspaceUsersWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary Lists all workspaces in a region.
 *
 * @description You can use the option parameter to specify query options, so as to obtain different information about the workspaces.
 *
 * @param request ListWorkspacesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspacesWithOptions(const ListWorkspacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFields()) {
    query["Fields"] = request.fields();
  }

  if (!!request.hasModuleList()) {
    query["ModuleList"] = request.moduleList();
  }

  if (!!request.hasOption()) {
    query["Option"] = request.option();
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

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasVerbose()) {
    query["Verbose"] = request.verbose();
  }

  if (!!request.hasWorkspaceIds()) {
    query["WorkspaceIds"] = request.workspaceIds();
  }

  if (!!request.hasWorkspaceName()) {
    query["WorkspaceName"] = request.workspaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkspaces"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkspacesResponse>();
}

/**
 * @summary Lists all workspaces in a region.
 *
 * @description You can use the option parameter to specify query options, so as to obtain different information about the workspaces.
 *
 * @param request ListWorkspacesRequest
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspaces(const ListWorkspacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkspacesWithOptions(request, headers, runtime);
}

/**
 * @summary Logs multiple metrics for a run at a time.
 *
 * @param request LogRunMetricsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return LogRunMetricsResponse
 */
LogRunMetricsResponse Client::logRunMetricsWithOptions(const string &RunId, const LogRunMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMetrics()) {
    body["Metrics"] = request.metrics();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "LogRunMetrics"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/runs/" , Darabonba::Encode::Encoder::percentEncode(RunId) , "/metrics/action/log")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LogRunMetricsResponse>();
}

/**
 * @summary Logs multiple metrics for a run at a time.
 *
 * @param request LogRunMetricsRequest
 * @return LogRunMetricsResponse
 */
LogRunMetricsResponse Client::logRunMetrics(const string &RunId, const LogRunMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return logRunMetricsWithOptions(RunId, request, headers, runtime);
}

/**
 * @summary Publishes a private code source to a workspace to make the code source publicly accessible.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishCodeSourceResponse
 */
PublishCodeSourceResponse Client::publishCodeSourceWithOptions(const string &CodeSourceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishCodeSource"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/codesources/" , Darabonba::Encode::Encoder::percentEncode(CodeSourceId) , "/publish")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishCodeSourceResponse>();
}

/**
 * @summary Publishes a private code source to a workspace to make the code source publicly accessible.
 *
 * @return PublishCodeSourceResponse
 */
PublishCodeSourceResponse Client::publishCodeSource(const string &CodeSourceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return publishCodeSourceWithOptions(CodeSourceId, headers, runtime);
}

/**
 * @summary Publishes a private dataset in a workspace.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishDatasetResponse
 */
PublishDatasetResponse Client::publishDatasetWithOptions(const string &DatasetId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishDataset"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/publish")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishDatasetResponse>();
}

/**
 * @summary Publishes a private dataset in a workspace.
 *
 * @return PublishDatasetResponse
 */
PublishDatasetResponse Client::publishDataset(const string &DatasetId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return publishDatasetWithOptions(DatasetId, headers, runtime);
}

/**
 * @summary Publishes an image. After the image is published, the visibility of the image is changed from PRIVATE to PUBLIC.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishImageResponse
 */
PublishImageResponse Client::publishImageWithOptions(const string &ImageId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishImage"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/images/" , Darabonba::Encode::Encoder::percentEncode(ImageId) , "/publish")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishImageResponse>();
}

/**
 * @summary Publishes an image. After the image is published, the visibility of the image is changed from PRIVATE to PUBLIC.
 *
 * @return PublishImageResponse
 */
PublishImageResponse Client::publishImage(const string &ImageId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return publishImageWithOptions(ImageId, headers, runtime);
}

/**
 * @summary Removes an image.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveImageResponse
 */
RemoveImageResponse Client::removeImageWithOptions(const string &ImageId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveImage"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/images/" , Darabonba::Encode::Encoder::percentEncode(ImageId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveImageResponse>();
}

/**
 * @summary Removes an image.
 *
 * @return RemoveImageResponse
 */
RemoveImageResponse Client::removeImage(const string &ImageId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeImageWithOptions(ImageId, headers, runtime);
}

/**
 * @summary Removes an image tag.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveImageLabelsResponse
 */
RemoveImageLabelsResponse Client::removeImageLabelsWithOptions(const string &ImageId, const string &LabelKey, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveImageLabels"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/images/" , Darabonba::Encode::Encoder::percentEncode(ImageId) , "/labels/" , Darabonba::Encode::Encoder::percentEncode(LabelKey))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveImageLabelsResponse>();
}

/**
 * @summary Removes an image tag.
 *
 * @return RemoveImageLabelsResponse
 */
RemoveImageLabelsResponse Client::removeImageLabels(const string &ImageId, const string &LabelKey) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeImageLabelsWithOptions(ImageId, LabelKey, headers, runtime);
}

/**
 * @summary Removes a member role.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveMemberRoleResponse
 */
RemoveMemberRoleResponse Client::removeMemberRoleWithOptions(const string &WorkspaceId, const string &MemberId, const string &RoleName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveMemberRole"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/members/" , Darabonba::Encode::Encoder::percentEncode(MemberId) , "/roles/" , Darabonba::Encode::Encoder::percentEncode(RoleName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveMemberRoleResponse>();
}

/**
 * @summary Removes a member role.
 *
 * @return RemoveMemberRoleResponse
 */
RemoveMemberRoleResponse Client::removeMemberRole(const string &WorkspaceId, const string &MemberId, const string &RoleName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeMemberRoleWithOptions(WorkspaceId, MemberId, RoleName, headers, runtime);
}

/**
 * @summary Updates a experiment tag.
 *
 * @param request SetExperimentLabelsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetExperimentLabelsResponse
 */
SetExperimentLabelsResponse Client::setExperimentLabelsWithOptions(const string &ExperimentId, const SetExperimentLabelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetExperimentLabels"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId) , "/labels")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetExperimentLabelsResponse>();
}

/**
 * @summary Updates a experiment tag.
 *
 * @param request SetExperimentLabelsRequest
 * @return SetExperimentLabelsResponse
 */
SetExperimentLabelsResponse Client::setExperimentLabels(const string &ExperimentId, const SetExperimentLabelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return setExperimentLabelsWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary Updates the user configurations.
 *
 * @param request SetUserConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetUserConfigsResponse
 */
SetUserConfigsResponse Client::setUserConfigsWithOptions(const SetUserConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfigs()) {
    body["Configs"] = request.configs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetUserConfigs"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/userconfigs")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetUserConfigsResponse>();
}

/**
 * @summary Updates the user configurations.
 *
 * @param request SetUserConfigsRequest
 * @return SetUserConfigsResponse
 */
SetUserConfigsResponse Client::setUserConfigs(const SetUserConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return setUserConfigsWithOptions(request, headers, runtime);
}

/**
 * @summary Stops a dataset job.
 *
 * @param request StopDatasetJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDatasetJobResponse
 */
StopDatasetJobResponse Client::stopDatasetJobWithOptions(const string &DatasetId, const string &DatasetJobId, const StopDatasetJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDatasetVersion()) {
    body["DatasetVersion"] = request.datasetVersion();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StopDatasetJob"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/datasetjobs/" , Darabonba::Encode::Encoder::percentEncode(DatasetJobId) , "/action/stop")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDatasetJobResponse>();
}

/**
 * @summary Stops a dataset job.
 *
 * @param request StopDatasetJobRequest
 * @return StopDatasetJobResponse
 */
StopDatasetJobResponse Client::stopDatasetJob(const string &DatasetId, const string &DatasetJobId, const StopDatasetJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return stopDatasetJobWithOptions(DatasetId, DatasetJobId, request, headers, runtime);
}

/**
 * @summary Updates a code build.
 *
 * @param request UpdateCodeSourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCodeSourceResponse
 */
UpdateCodeSourceResponse Client::updateCodeSourceWithOptions(const string &CodeSourceId, const UpdateCodeSourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCodeBranch()) {
    body["CodeBranch"] = request.codeBranch();
  }

  if (!!request.hasCodeCommit()) {
    body["CodeCommit"] = request.codeCommit();
  }

  if (!!request.hasCodeRepo()) {
    body["CodeRepo"] = request.codeRepo();
  }

  if (!!request.hasCodeRepoAccessToken()) {
    body["CodeRepoAccessToken"] = request.codeRepoAccessToken();
  }

  if (!!request.hasCodeRepoUserName()) {
    body["CodeRepoUserName"] = request.codeRepoUserName();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.displayName();
  }

  if (!!request.hasMountPath()) {
    body["MountPath"] = request.mountPath();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateCodeSource"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/codesources/" , Darabonba::Encode::Encoder::percentEncode(CodeSourceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCodeSourceResponse>();
}

/**
 * @summary Updates a code build.
 *
 * @param request UpdateCodeSourceRequest
 * @return UpdateCodeSourceResponse
 */
UpdateCodeSourceResponse Client::updateCodeSource(const string &CodeSourceId, const UpdateCodeSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateCodeSourceWithOptions(CodeSourceId, request, headers, runtime);
}

/**
 * @summary Updates or adds a workspace configuration item.
 *
 * @param request UpdateConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConfigResponse
 */
UpdateConfigResponse Client::updateConfigWithOptions(const string &WorkspaceId, const UpdateConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCategoryName()) {
    body["CategoryName"] = request.categoryName();
  }

  if (!!request.hasConfigKey()) {
    body["ConfigKey"] = request.configKey();
  }

  if (!!request.hasConfigValue()) {
    body["ConfigValue"] = request.configValue();
  }

  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateConfig"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/config")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConfigResponse>();
}

/**
 * @summary Updates or adds a workspace configuration item.
 *
 * @param request UpdateConfigRequest
 * @return UpdateConfigResponse
 */
UpdateConfigResponse Client::updateConfig(const string &WorkspaceId, const UpdateConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateConfigWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary Updates or adds workspace configurations in batches.
 *
 * @param request UpdateConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConfigsResponse
 */
UpdateConfigsResponse Client::updateConfigsWithOptions(const string &WorkspaceId, const UpdateConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfigs()) {
    body["Configs"] = request.configs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateConfigs"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/configs")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConfigsResponse>();
}

/**
 * @summary Updates or adds workspace configurations in batches.
 *
 * @param request UpdateConfigsRequest
 * @return UpdateConfigsResponse
 */
UpdateConfigsResponse Client::updateConfigs(const string &WorkspaceId, const UpdateConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateConfigsWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary Updates a connection.
 *
 * @param request UpdateConnectionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConnectionResponse
 */
UpdateConnectionResponse Client::updateConnectionWithOptions(const string &ConnectionId, const UpdateConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfigs()) {
    body["Configs"] = request.configs();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasModels()) {
    body["Models"] = request.models();
  }

  if (!!request.hasSecrets()) {
    body["Secrets"] = request.secrets();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateConnection"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/connections/" , Darabonba::Encode::Encoder::percentEncode(ConnectionId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConnectionResponse>();
}

/**
 * @summary Updates a connection.
 *
 * @param request UpdateConnectionRequest
 * @return UpdateConnectionResponse
 */
UpdateConnectionResponse Client::updateConnection(const string &ConnectionId, const UpdateConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateConnectionWithOptions(ConnectionId, request, headers, runtime);
}

/**
 * @summary Updates the name, description, and other information about a dataset.
 *
 * @param request UpdateDatasetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDatasetResponse
 */
UpdateDatasetResponse Client::updateDatasetWithOptions(const string &DatasetId, const UpdateDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEdition()) {
    body["Edition"] = request.edition();
  }

  if (!!request.hasMountAccessReadWriteRoleIdList()) {
    body["MountAccessReadWriteRoleIdList"] = request.mountAccessReadWriteRoleIdList();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasOptions()) {
    body["Options"] = request.options();
  }

  if (!!request.hasSharingConfig()) {
    body["SharingConfig"] = request.sharingConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataset"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDatasetResponse>();
}

/**
 * @summary Updates the name, description, and other information about a dataset.
 *
 * @param request UpdateDatasetRequest
 * @return UpdateDatasetResponse
 */
UpdateDatasetResponse Client::updateDataset(const string &DatasetId, const UpdateDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDatasetWithOptions(DatasetId, request, headers, runtime);
}

/**
 * @summary Updates the metadata records of multiple files in a dataset at a time.
 *
 * @param request UpdateDatasetFileMetasRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDatasetFileMetasResponse
 */
UpdateDatasetFileMetasResponse Client::updateDatasetFileMetasWithOptions(const string &DatasetId, const UpdateDatasetFileMetasRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDatasetFileMetas()) {
    body["DatasetFileMetas"] = request.datasetFileMetas();
  }

  if (!!request.hasDatasetVersion()) {
    body["DatasetVersion"] = request.datasetVersion();
  }

  if (!!request.hasTagJobId()) {
    body["TagJobId"] = request.tagJobId();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDatasetFileMetas"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/datasetfilemetas")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDatasetFileMetasResponse>();
}

/**
 * @summary Updates the metadata records of multiple files in a dataset at a time.
 *
 * @param request UpdateDatasetFileMetasRequest
 * @return UpdateDatasetFileMetasResponse
 */
UpdateDatasetFileMetasResponse Client::updateDatasetFileMetas(const string &DatasetId, const UpdateDatasetFileMetasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDatasetFileMetasWithOptions(DatasetId, request, headers, runtime);
}

/**
 * @summary Updates a dataset job.
 *
 * @param request UpdateDatasetJobRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDatasetJobResponse
 */
UpdateDatasetJobResponse Client::updateDatasetJobWithOptions(const string &DatasetId, const string &DatasetJobId, const UpdateDatasetJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDatasetVersion()) {
    body["DatasetVersion"] = request.datasetVersion();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDatasetJob"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/datasetjobs/" , Darabonba::Encode::Encoder::percentEncode(DatasetJobId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDatasetJobResponse>();
}

/**
 * @summary Updates a dataset job.
 *
 * @param request UpdateDatasetJobRequest
 * @return UpdateDatasetJobResponse
 */
UpdateDatasetJobResponse Client::updateDatasetJob(const string &DatasetId, const string &DatasetJobId, const UpdateDatasetJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDatasetJobWithOptions(DatasetId, DatasetJobId, request, headers, runtime);
}

/**
 * @summary Updates a job configuration for a dataset.
 *
 * @param request UpdateDatasetJobConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDatasetJobConfigResponse
 */
UpdateDatasetJobConfigResponse Client::updateDatasetJobConfigWithOptions(const string &DatasetId, const string &DatasetJobConfigId, const UpdateDatasetJobConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.config();
  }

  if (!!request.hasConfigType()) {
    body["ConfigType"] = request.configType();
  }

  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDatasetJobConfig"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/datasetjobconfigs/" , Darabonba::Encode::Encoder::percentEncode(DatasetJobConfigId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDatasetJobConfigResponse>();
}

/**
 * @summary Updates a job configuration for a dataset.
 *
 * @param request UpdateDatasetJobConfigRequest
 * @return UpdateDatasetJobConfigResponse
 */
UpdateDatasetJobConfigResponse Client::updateDatasetJobConfig(const string &DatasetId, const string &DatasetJobConfigId, const UpdateDatasetJobConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDatasetJobConfigWithOptions(DatasetId, DatasetJobConfigId, request, headers, runtime);
}

/**
 * @summary Updates the information about a specified version of a dataset.
 *
 * @param request UpdateDatasetVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDatasetVersionResponse
 */
UpdateDatasetVersionResponse Client::updateDatasetVersionWithOptions(const string &DatasetId, const string &VersionName, const UpdateDatasetVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataCount()) {
    body["DataCount"] = request.dataCount();
  }

  if (!!request.hasDataSize()) {
    body["DataSize"] = request.dataSize();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasOptions()) {
    body["Options"] = request.options();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDatasetVersion"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/datasets/" , Darabonba::Encode::Encoder::percentEncode(DatasetId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(VersionName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDatasetVersionResponse>();
}

/**
 * @summary Updates the information about a specified version of a dataset.
 *
 * @param request UpdateDatasetVersionRequest
 * @return UpdateDatasetVersionResponse
 */
UpdateDatasetVersionResponse Client::updateDatasetVersion(const string &DatasetId, const string &VersionName, const UpdateDatasetVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDatasetVersionWithOptions(DatasetId, VersionName, request, headers, runtime);
}

/**
 * @summary Specifies a workspace as the default workspace.
 *
 * @param request UpdateDefaultWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDefaultWorkspaceResponse
 */
UpdateDefaultWorkspaceResponse Client::updateDefaultWorkspaceWithOptions(const UpdateDefaultWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasWorkspaceId()) {
    body["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDefaultWorkspace"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/defaultWorkspaces")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDefaultWorkspaceResponse>();
}

/**
 * @summary Specifies a workspace as the default workspace.
 *
 * @param request UpdateDefaultWorkspaceRequest
 * @return UpdateDefaultWorkspaceResponse
 */
UpdateDefaultWorkspaceResponse Client::updateDefaultWorkspace(const UpdateDefaultWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDefaultWorkspaceWithOptions(request, headers, runtime);
}

/**
 * @summary Updates an experiment.
 *
 * @param request UpdateExperimentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateExperimentResponse
 */
UpdateExperimentResponse Client::updateExperimentWithOptions(const string &ExperimentId, const UpdateExperimentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.accessibility();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateExperiment"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/experiments/" , Darabonba::Encode::Encoder::percentEncode(ExperimentId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateExperimentResponse>();
}

/**
 * @summary Updates an experiment.
 *
 * @param request UpdateExperimentRequest
 * @return UpdateExperimentResponse
 */
UpdateExperimentResponse Client::updateExperiment(const string &ExperimentId, const UpdateExperimentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateExperimentWithOptions(ExperimentId, request, headers, runtime);
}

/**
 * @summary Updates the basic configuration information about a model.
 *
 * @param request UpdateModelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateModelResponse
 */
UpdateModelResponse Client::updateModelWithOptions(const string &ModelId, const UpdateModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessibility()) {
    body["Accessibility"] = request.accessibility();
  }

  if (!!request.hasDomain()) {
    body["Domain"] = request.domain();
  }

  if (!!request.hasExtraInfo()) {
    body["ExtraInfo"] = request.extraInfo();
  }

  if (!!request.hasModelDescription()) {
    body["ModelDescription"] = request.modelDescription();
  }

  if (!!request.hasModelDoc()) {
    body["ModelDoc"] = request.modelDoc();
  }

  if (!!request.hasModelName()) {
    body["ModelName"] = request.modelName();
  }

  if (!!request.hasModelType()) {
    body["ModelType"] = request.modelType();
  }

  if (!!request.hasOrderNumber()) {
    body["OrderNumber"] = request.orderNumber();
  }

  if (!!request.hasOrigin()) {
    body["Origin"] = request.origin();
  }

  if (!!request.hasParameterSize()) {
    body["ParameterSize"] = request.parameterSize();
  }

  if (!!request.hasTask()) {
    body["Task"] = request.task();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateModel"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/models/" , Darabonba::Encode::Encoder::percentEncode(ModelId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateModelResponse>();
}

/**
 * @summary Updates the basic configuration information about a model.
 *
 * @param request UpdateModelRequest
 * @return UpdateModelResponse
 */
UpdateModelResponse Client::updateModel(const string &ModelId, const UpdateModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateModelWithOptions(ModelId, request, headers, runtime);
}

/**
 * @summary Updates a model version.
 *
 * @param request UpdateModelVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateModelVersionResponse
 */
UpdateModelVersionResponse Client::updateModelVersionWithOptions(const string &ModelId, const string &VersionName, const UpdateModelVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApprovalStatus()) {
    body["ApprovalStatus"] = request.approvalStatus();
  }

  if (!!request.hasCompressionSpec()) {
    body["CompressionSpec"] = request.compressionSpec();
  }

  if (!!request.hasDistillationSpec()) {
    body["DistillationSpec"] = request.distillationSpec();
  }

  if (!!request.hasEvaluationSpec()) {
    body["EvaluationSpec"] = request.evaluationSpec();
  }

  if (!!request.hasExtraInfo()) {
    body["ExtraInfo"] = request.extraInfo();
  }

  if (!!request.hasInferenceSpec()) {
    body["InferenceSpec"] = request.inferenceSpec();
  }

  if (!!request.hasMetrics()) {
    body["Metrics"] = request.metrics();
  }

  if (!!request.hasOptions()) {
    body["Options"] = request.options();
  }

  if (!!request.hasSourceId()) {
    body["SourceId"] = request.sourceId();
  }

  if (!!request.hasSourceType()) {
    body["SourceType"] = request.sourceType();
  }

  if (!!request.hasTrainingSpec()) {
    body["TrainingSpec"] = request.trainingSpec();
  }

  if (!!request.hasVersionDescription()) {
    body["VersionDescription"] = request.versionDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateModelVersion"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/models/" , Darabonba::Encode::Encoder::percentEncode(ModelId) , "/versions/" , Darabonba::Encode::Encoder::percentEncode(VersionName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateModelVersionResponse>();
}

/**
 * @summary Updates a model version.
 *
 * @param request UpdateModelVersionRequest
 * @return UpdateModelVersionResponse
 */
UpdateModelVersionResponse Client::updateModelVersion(const string &ModelId, const string &VersionName, const UpdateModelVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateModelVersionWithOptions(ModelId, VersionName, request, headers, runtime);
}

/**
 * @summary Updates the run information.
 *
 * @param request UpdateRunRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRunResponse
 */
UpdateRunResponse Client::updateRunWithOptions(const string &RunId, const UpdateRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasParams()) {
    body["Params"] = request.params();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRun"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/runs/" , Darabonba::Encode::Encoder::percentEncode(RunId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRunResponse>();
}

/**
 * @summary Updates the run information.
 *
 * @param request UpdateRunRequest
 * @return UpdateRunResponse
 */
UpdateRunResponse Client::updateRun(const string &RunId, const UpdateRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRunWithOptions(RunId, request, headers, runtime);
}

/**
 * @summary Updates the name and description of a workspace.
 *
 * @param request UpdateWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkspaceResponse
 */
UpdateWorkspaceResponse Client::updateWorkspaceWithOptions(const string &WorkspaceId, const UpdateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.displayName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWorkspace"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkspaceResponse>();
}

/**
 * @summary Updates the name and description of a workspace.
 *
 * @param request UpdateWorkspaceRequest
 * @return UpdateWorkspaceResponse
 */
UpdateWorkspaceResponse Client::updateWorkspace(const string &WorkspaceId, const UpdateWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateWorkspaceWithOptions(WorkspaceId, request, headers, runtime);
}

/**
 * @summary Updates the resources of a workspace.
 *
 * @param request UpdateWorkspaceResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkspaceResourceResponse
 */
UpdateWorkspaceResourceResponse Client::updateWorkspaceResourceWithOptions(const string &WorkspaceId, const UpdateWorkspaceResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGroupName()) {
    body["GroupName"] = request.groupName();
  }

  if (!!request.hasIsDefault()) {
    body["IsDefault"] = request.isDefault();
  }

  if (!!request.hasLabels()) {
    body["Labels"] = request.labels();
  }

  if (!!request.hasProductType()) {
    body["ProductType"] = request.productType();
  }

  if (!!request.hasResourceIds()) {
    body["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceType()) {
    body["ResourceType"] = request.resourceType();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.spec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateWorkspaceResource"},
    {"version" , "2021-02-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/workspaces/" , Darabonba::Encode::Encoder::percentEncode(WorkspaceId) , "/resources")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkspaceResourceResponse>();
}

/**
 * @summary Updates the resources of a workspace.
 *
 * @param request UpdateWorkspaceResourceRequest
 * @return UpdateWorkspaceResourceResponse
 */
UpdateWorkspaceResourceResponse Client::updateWorkspaceResource(const string &WorkspaceId, const UpdateWorkspaceResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateWorkspaceResourceWithOptions(WorkspaceId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204