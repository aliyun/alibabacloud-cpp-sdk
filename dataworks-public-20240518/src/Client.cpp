#include <darabonba/Core.hpp>
#include <alibabacloud/DataworksPublic20240518.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <alibabacloud/credentials/Client.hpp>
#include <darabonba/http/FileField.hpp>
#include <darabonba/Convert.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace Darabonba::Http;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using namespace AlibabaCloud::OpenApi::Exceptions;
using namespace AlibabaCloud::Credentials::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::DataworksPublic20240518::Models;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{

AlibabaCloud::DataworksPublic20240518::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "dataworks.ap-northeast-1.aliyuncs.com"},
    {"ap-northeast-2-pop" , "dataworks.aliyuncs.com"},
    {"ap-south-1" , "dataworks.aliyuncs.com"},
    {"ap-southeast-1" , "dataworks.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2" , "dataworks.aliyuncs.com"},
    {"ap-southeast-3" , "dataworks.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5" , "dataworks.ap-southeast-5.aliyuncs.com"},
    {"cn-beijing" , "dataworks.cn-beijing.aliyuncs.com"},
    {"cn-beijing-finance-1" , "dataworks.cn-beijing-finance-1.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "dataworks.aliyuncs.com"},
    {"cn-beijing-gov-1" , "dataworks.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "dataworks.aliyuncs.com"},
    {"cn-chengdu" , "dataworks.cn-chengdu.aliyuncs.com"},
    {"cn-edge-1" , "dataworks.aliyuncs.com"},
    {"cn-fujian" , "dataworks.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "dataworks.aliyuncs.com"},
    {"cn-hangzhou" , "dataworks.cn-hangzhou.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "dataworks.aliyuncs.com"},
    {"cn-hangzhou-finance" , "dataworks.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "dataworks.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "dataworks.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "dataworks.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "dataworks.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "dataworks.aliyuncs.com"},
    {"cn-hongkong" , "dataworks.cn-hongkong.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "dataworks.aliyuncs.com"},
    {"cn-huhehaote" , "dataworks.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "dataworks.aliyuncs.com"},
    {"cn-north-2-gov-1" , "dataworks.cn-north-2-gov-1.aliyuncs.com"},
    {"cn-qingdao" , "dataworks.aliyuncs.com"},
    {"cn-qingdao-nebula" , "dataworks.aliyuncs.com"},
    {"cn-shanghai" , "dataworks.cn-shanghai.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "dataworks.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "dataworks.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "dataworks.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-shanghai-inner" , "dataworks.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "dataworks.aliyuncs.com"},
    {"cn-shenzhen" , "dataworks.cn-shenzhen.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "dataworks.cn-shenzhen-finance-1.aliyuncs.com"},
    {"cn-shenzhen-inner" , "dataworks.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "dataworks.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "dataworks.aliyuncs.com"},
    {"cn-wuhan" , "dataworks.aliyuncs.com"},
    {"cn-wulanchabu" , "dataworks.cn-wulanchabu.aliyuncs.com"},
    {"cn-yushanfang" , "dataworks.aliyuncs.com"},
    {"cn-zhangbei" , "dataworks.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "dataworks.aliyuncs.com"},
    {"cn-zhangjiakou" , "dataworks.cn-zhangjiakou.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "dataworks.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "dataworks.aliyuncs.com"},
    {"eu-central-1" , "dataworks.eu-central-1.aliyuncs.com"},
    {"eu-west-1" , "dataworks.eu-west-1.aliyuncs.com"},
    {"eu-west-1-oxs" , "dataworks.aliyuncs.com"},
    {"me-east-1" , "dataworks.me-east-1.aliyuncs.com"},
    {"rus-west-1-pop" , "dataworks.aliyuncs.com"},
    {"us-east-1" , "dataworks.us-east-1.aliyuncs.com"},
    {"us-west-1" , "dataworks.us-west-1.aliyuncs.com"},
    {"me-central-1" , "dataworks.me-central-1.aliyuncs.com"},
    {"ap-northeast-2" , "dataworks.ap-northeast-2.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("dataworks-public", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Terminates the specified deployment process. This operation changes the status of the process to Terminated but does not delete the process. You can still query the process.
 *
 * @description >Notice: 
 * This API may not be available in earlier versions of the SDK. In that case, use the AbolishDeployment API, which accepts the same parameters.
 *
 * @param request AbolishPipelineRunRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AbolishPipelineRunResponse
 */
AbolishPipelineRunResponse Client::abolishPipelineRunWithOptions(const AbolishPipelineRunRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AbolishPipelineRun"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AbolishPipelineRunResponse>();
}

/**
 * @summary Terminates the specified deployment process. This operation changes the status of the process to Terminated but does not delete the process. You can still query the process.
 *
 * @description >Notice: 
 * This API may not be available in earlier versions of the SDK. In that case, use the AbolishDeployment API, which accepts the same parameters.
 *
 * @param request AbolishPipelineRunRequest
 * @return AbolishPipelineRunResponse
 */
AbolishPipelineRunResponse Client::abolishPipelineRun(const AbolishPipelineRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return abolishPipelineRunWithOptions(request, runtime);
}

/**
 * @summary Adds an entity to a collection in Data Map. Collections include categories and data albums. Entities can be only tables. If you want to add an entity to a data album, the account that you use must be attached the AliyunDataWorksFullAccess policy, or you are the data album creator or administrator.
 *
 * @description 1. DataWorks Professional Edition or a higher edition is required.
 *
 * @param request AddEntityIntoMetaCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddEntityIntoMetaCollectionResponse
 */
AddEntityIntoMetaCollectionResponse Client::addEntityIntoMetaCollectionWithOptions(const AddEntityIntoMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasMetaCollectionId()) {
    query["MetaCollectionId"] = request.getMetaCollectionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddEntityIntoMetaCollection"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddEntityIntoMetaCollectionResponse>();
}

/**
 * @summary Adds an entity to a collection in Data Map. Collections include categories and data albums. Entities can be only tables. If you want to add an entity to a data album, the account that you use must be attached the AliyunDataWorksFullAccess policy, or you are the data album creator or administrator.
 *
 * @description 1. DataWorks Professional Edition or a higher edition is required.
 *
 * @param request AddEntityIntoMetaCollectionRequest
 * @return AddEntityIntoMetaCollectionResponse
 */
AddEntityIntoMetaCollectionResponse Client::addEntityIntoMetaCollection(const AddEntityIntoMetaCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addEntityIntoMetaCollectionWithOptions(request, runtime);
}

/**
 * @summary Submits an application for access permissions on a specific resource.
 *
 * @description ## Request Description
 * - **Reason**: The reason for the application. This parameter is required.
 * - **ApplyContents**: Contains multiple resource permission application contents, each including the resource description (Resource), grantee description (Grantee), permission types (AccessTypes), and permission expiration time (ExpirationTime). The maximum limit per request is 400 entries.
 * - **Resource**: The resource description. You need to specify the ResourceSchema.name and version that the resource parsing depends on, as well as the resource metadata MetaData.
 * - **Grantee**: The grantee description. You need to specify the grantee type (PrincipalType) and the principal ID (PrincipalId).
 * - **AccessTypes**: The list of permission types. Multiple permission combinations are supported.
 * - **ExpirationTime**: The permission expiration time, provided as a milliseconds timestamp.
 * - **AuthMethod**: An optional parameter that specifies the authorization method. The system uses the built-in default authorization method if not specified.
 * - **ClientToken**: The client token used to prevent duplicate requests. This parameter is optional.
 * Ensure all required fields are filled in correctly and comply with the corresponding constraints. For example, `DefVersion` and `MetaData` in `Resource` should match the selected `DefSchema`.
 *
 * @param tmpReq ApplyResourceAccessPermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyResourceAccessPermissionResponse
 */
ApplyResourceAccessPermissionResponse Client::applyResourceAccessPermissionWithOptions(const ApplyResourceAccessPermissionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ApplyResourceAccessPermissionShrinkRequest request = ApplyResourceAccessPermissionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApplyContents()) {
    request.setApplyContentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApplyContents(), "ApplyContents", "json"));
  }

  json body = {};
  if (!!request.hasApplyContentsShrink()) {
    body["ApplyContents"] = request.getApplyContentsShrink();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasReason()) {
    body["Reason"] = request.getReason();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ApplyResourceAccessPermission"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyResourceAccessPermissionResponse>();
}

/**
 * @summary Submits an application for access permissions on a specific resource.
 *
 * @description ## Request Description
 * - **Reason**: The reason for the application. This parameter is required.
 * - **ApplyContents**: Contains multiple resource permission application contents, each including the resource description (Resource), grantee description (Grantee), permission types (AccessTypes), and permission expiration time (ExpirationTime). The maximum limit per request is 400 entries.
 * - **Resource**: The resource description. You need to specify the ResourceSchema.name and version that the resource parsing depends on, as well as the resource metadata MetaData.
 * - **Grantee**: The grantee description. You need to specify the grantee type (PrincipalType) and the principal ID (PrincipalId).
 * - **AccessTypes**: The list of permission types. Multiple permission combinations are supported.
 * - **ExpirationTime**: The permission expiration time, provided as a milliseconds timestamp.
 * - **AuthMethod**: An optional parameter that specifies the authorization method. The system uses the built-in default authorization method if not specified.
 * - **ClientToken**: The client token used to prevent duplicate requests. This parameter is optional.
 * Ensure all required fields are filled in correctly and comply with the corresponding constraints. For example, `DefVersion` and `MetaData` in `Resource` should match the selected `DefSchema`.
 *
 * @param request ApplyResourceAccessPermissionRequest
 * @return ApplyResourceAccessPermissionResponse
 */
ApplyResourceAccessPermissionResponse Client::applyResourceAccessPermission(const ApplyResourceAccessPermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyResourceAccessPermissionWithOptions(request, runtime);
}

/**
 * @summary Approves or rejects a specified approval process instance.
 *
 * @description ## Request description
 * - This operation allows you to approve or reject a specified approval process instance by passing in the ProcessInstanceId and approval information (including ApprovalComment and ApprovalAction).
 * - ApprovalAction can be Agree or Deny, indicating approval or rejection respectively.
 * - ApprovalComment is required and records the specific approval opinion.
 *
 * @param request ApproveProcessInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApproveProcessInstanceResponse
 */
ApproveProcessInstanceResponse Client::approveProcessInstanceWithOptions(const ApproveProcessInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApprovalAction()) {
    body["ApprovalAction"] = request.getApprovalAction();
  }

  if (!!request.hasApprovalComment()) {
    body["ApprovalComment"] = request.getApprovalComment();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasNewExpiration()) {
    body["NewExpiration"] = request.getNewExpiration();
  }

  if (!!request.hasProcessInstanceId()) {
    body["ProcessInstanceId"] = request.getProcessInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ApproveProcessInstance"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApproveProcessInstanceResponse>();
}

/**
 * @summary Approves or rejects a specified approval process instance.
 *
 * @description ## Request description
 * - This operation allows you to approve or reject a specified approval process instance by passing in the ProcessInstanceId and approval information (including ApprovalComment and ApprovalAction).
 * - ApprovalAction can be Agree or Deny, indicating approval or rejection respectively.
 * - ApprovalComment is required and records the specific approval opinion.
 *
 * @param request ApproveProcessInstanceRequest
 * @return ApproveProcessInstanceResponse
 */
ApproveProcessInstanceResponse Client::approveProcessInstance(const ApproveProcessInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return approveProcessInstanceWithOptions(request, runtime);
}

/**
 * @summary Associates an image with a workspace.
 *
 * @description 1. You must purchase DataWorks Basic Edition or later to use this operation.
 * 2. **Ensure the AliyunServiceRoleForDataWorks service-linked role is created before you call this operation.**
 *
 * @param request AssociateProjectToImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateProjectToImageResponse
 */
AssociateProjectToImageResponse Client::associateProjectToImageWithOptions(const AssociateProjectToImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AssociateProjectToImage"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateProjectToImageResponse>();
}

/**
 * @summary Associates an image with a workspace.
 *
 * @description 1. You must purchase DataWorks Basic Edition or later to use this operation.
 * 2. **Ensure the AliyunServiceRoleForDataWorks service-linked role is created before you call this operation.**
 *
 * @param request AssociateProjectToImageRequest
 * @return AssociateProjectToImageResponse
 */
AssociateProjectToImageResponse Client::associateProjectToImage(const AssociateProjectToImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateProjectToImageWithOptions(request, runtime);
}

/**
 * @summary Associates a resource group with a workspace.
 *
 * @description 1. This operation requires DataWorks Basic Edition or a more advanced edition.
 * 2. You must have one of the following roles in the DataWorks workspace:
 * - tenant owner, workspace administrator, project owner, or operator
 *
 * @param request AssociateProjectToResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateProjectToResourceGroupResponse
 */
AssociateProjectToResourceGroupResponse Client::associateProjectToResourceGroupWithOptions(const AssociateProjectToResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AssociateProjectToResourceGroup"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateProjectToResourceGroupResponse>();
}

/**
 * @summary Associates a resource group with a workspace.
 *
 * @description 1. This operation requires DataWorks Basic Edition or a more advanced edition.
 * 2. You must have one of the following roles in the DataWorks workspace:
 * - tenant owner, workspace administrator, project owner, or operator
 *
 * @param request AssociateProjectToResourceGroupRequest
 * @return AssociateProjectToResourceGroupResponse
 */
AssociateProjectToResourceGroupResponse Client::associateProjectToResourceGroup(const AssociateProjectToResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateProjectToResourceGroupWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI AttachDataQualityRulesToEvaluationTask is deprecated, please use dataworks-public::2024-05-18::UpdateDataQualityScan instead.
 *
 * @summary Associates data quality rules with a data quality monitoring task.
 *
 * @description You must purchase DataWorks Basic Edition or higher to use this feature.
 *
 * @param tmpReq AttachDataQualityRulesToEvaluationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachDataQualityRulesToEvaluationTaskResponse
 */
AttachDataQualityRulesToEvaluationTaskResponse Client::attachDataQualityRulesToEvaluationTaskWithOptions(const AttachDataQualityRulesToEvaluationTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  AttachDataQualityRulesToEvaluationTaskShrinkRequest request = AttachDataQualityRulesToEvaluationTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataQualityRuleIds()) {
    request.setDataQualityRuleIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataQualityRuleIds(), "DataQualityRuleIds", "json"));
  }

  json body = {};
  if (!!request.hasDataQualityEvaluationTaskId()) {
    body["DataQualityEvaluationTaskId"] = request.getDataQualityEvaluationTaskId();
  }

  if (!!request.hasDataQualityRuleIdsShrink()) {
    body["DataQualityRuleIds"] = request.getDataQualityRuleIdsShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AttachDataQualityRulesToEvaluationTask"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachDataQualityRulesToEvaluationTaskResponse>();
}

/**
 * @deprecated OpenAPI AttachDataQualityRulesToEvaluationTask is deprecated, please use dataworks-public::2024-05-18::UpdateDataQualityScan instead.
 *
 * @summary Associates data quality rules with a data quality monitoring task.
 *
 * @description You must purchase DataWorks Basic Edition or higher to use this feature.
 *
 * @param request AttachDataQualityRulesToEvaluationTaskRequest
 * @return AttachDataQualityRulesToEvaluationTaskResponse
 */
AttachDataQualityRulesToEvaluationTaskResponse Client::attachDataQualityRulesToEvaluationTask(const AttachDataQualityRulesToEvaluationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachDataQualityRulesToEvaluationTaskWithOptions(request, runtime);
}

/**
 * @summary Creates metadata entities in a batch. All entities within a batch must have the same entity type. This operation currently supports only custom types and extended table types, which represent databases and tables.
 *
 * @description You must purchase DataWorks Professional Edition or a higher edition to use this operation.
 *
 * @param tmpReq BatchCreateMetaEntitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCreateMetaEntitiesResponse
 */
BatchCreateMetaEntitiesResponse Client::batchCreateMetaEntitiesWithOptions(const BatchCreateMetaEntitiesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchCreateMetaEntitiesShrinkRequest request = BatchCreateMetaEntitiesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEntities()) {
    request.setEntitiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEntities(), "Entities", "json"));
  }

  json body = {};
  if (!!request.hasEntitiesShrink()) {
    body["Entities"] = request.getEntitiesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BatchCreateMetaEntities"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCreateMetaEntitiesResponse>();
}

/**
 * @summary Creates metadata entities in a batch. All entities within a batch must have the same entity type. This operation currently supports only custom types and extended table types, which represent databases and tables.
 *
 * @description You must purchase DataWorks Professional Edition or a higher edition to use this operation.
 *
 * @param request BatchCreateMetaEntitiesRequest
 * @return BatchCreateMetaEntitiesResponse
 */
BatchCreateMetaEntitiesResponse Client::batchCreateMetaEntities(const BatchCreateMetaEntitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCreateMetaEntitiesWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple meta entities in a batch. This operation deletes custom meta entities and extended table-based objects, such as databases and tables. You cannot delete a column individually. Instead, you must delete the entire table to remove its associated columns.
 *
 * @description This operation requires DataWorks Professional Edition or higher.
 *
 * @param tmpReq BatchDeleteMetaEntitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteMetaEntitiesResponse
 */
BatchDeleteMetaEntitiesResponse Client::batchDeleteMetaEntitiesWithOptions(const BatchDeleteMetaEntitiesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchDeleteMetaEntitiesShrinkRequest request = BatchDeleteMetaEntitiesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "simple"));
  }

  json body = {};
  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.getIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BatchDeleteMetaEntities"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteMetaEntitiesResponse>();
}

/**
 * @summary Deletes multiple meta entities in a batch. This operation deletes custom meta entities and extended table-based objects, such as databases and tables. You cannot delete a column individually. Instead, you must delete the entire table to remove its associated columns.
 *
 * @description This operation requires DataWorks Professional Edition or higher.
 *
 * @param request BatchDeleteMetaEntitiesRequest
 * @return BatchDeleteMetaEntitiesResponse
 */
BatchDeleteMetaEntitiesResponse Client::batchDeleteMetaEntities(const BatchDeleteMetaEntitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteMetaEntitiesWithOptions(request, runtime);
}

/**
 * @summary Performs incremental updates on multiple tasks at a time.
 *
 * @description DataWorks Basic Edition or higher is required.
 *
 * @param tmpReq BatchUpdateTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchUpdateTasksResponse
 */
BatchUpdateTasksResponse Client::batchUpdateTasksWithOptions(const BatchUpdateTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchUpdateTasksShrinkRequest request = BatchUpdateTasksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTasks()) {
    request.setTasksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTasks(), "Tasks", "json"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasTasksShrink()) {
    body["Tasks"] = request.getTasksShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BatchUpdateTasks"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchUpdateTasksResponse>();
}

/**
 * @summary Performs incremental updates on multiple tasks at a time.
 *
 * @description DataWorks Basic Edition or higher is required.
 *
 * @param request BatchUpdateTasksRequest
 * @return BatchUpdateTasksResponse
 */
BatchUpdateTasksResponse Client::batchUpdateTasks(const BatchUpdateTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchUpdateTasksWithOptions(request, runtime);
}

/**
 * @summary Cancels an agent call in a specified session. This operation also supports interrupting an ongoing streaming response.
 *
 * @description ## Description
 * - This operation is used to actively interrupt an ongoing session, especially when the session is generating a streaming response.
 * - `sessionId` is a required parameter that identifies the specific session to cancel.
 *
 * @param tmpReq CancelAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelAgentSessionResponse
 */
CancelAgentSessionResponse Client::cancelAgentSessionWithOptions(const CancelAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CancelAgentSessionShrinkRequest request = CancelAgentSessionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CancelAgentSession"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelAgentSessionResponse>();
}

/**
 * @summary Cancels an agent call in a specified session. This operation also supports interrupting an ongoing streaming response.
 *
 * @description ## Description
 * - This operation is used to actively interrupt an ongoing session, especially when the session is generating a streaming response.
 * - `sessionId` is a required parameter that identifies the specific session to cancel.
 *
 * @param request CancelAgentSessionRequest
 * @return CancelAgentSessionResponse
 */
CancelAgentSessionResponse Client::cancelAgentSession(const CancelAgentSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelAgentSessionWithOptions(request, runtime);
}

/**
 * @summary Clones a data source to create a new data source with the same configurations.
 *
 * @description 1. This operation is available for all DataWorks editions.
 * 2. To call this operation, you must have one of the following roles in DataWorks:
 * - Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
 *
 * @param request CloneDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneDataSourceResponse
 */
CloneDataSourceResponse Client::cloneDataSourceWithOptions(const CloneDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloneDataSourceName()) {
    query["CloneDataSourceName"] = request.getCloneDataSourceName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloneDataSource"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloneDataSourceResponse>();
}

/**
 * @summary Clones a data source to create a new data source with the same configurations.
 *
 * @description 1. This operation is available for all DataWorks editions.
 * 2. To call this operation, you must have one of the following roles in DataWorks:
 * - Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
 *
 * @param request CloneDataSourceRequest
 * @return CloneDataSourceResponse
 */
CloneDataSourceResponse Client::cloneDataSource(const CloneDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloneDataSourceWithOptions(request, runtime);
}

/**
 * @summary Create Agent
 *
 * @description ## Request Description
 * - **Agent Name**: Must be unique under the current account.
 * - **Model Configuration**: An optional parameter used to specify the model used by the Agent and its related settings.
 * - **Visibility Level**: Defines who can access the Agent. Supports visibility within the account, to specified projects, or to specific users.
 * - **Visibility Scope**: When `PROJECT` or `USER` is selected as the visibility level, the specific project ID or user ID list must be further specified.
 * - **Other Parameters**: Items such as display name and description are optional and can be filled in based on actual needs.
 *
 * @param tmpReq CreateAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentResponse
 */
CreateAgentResponse Client::createAgentWithOptions(const CreateAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAgentShrinkRequest request = CreateAgentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCallableAgents()) {
    request.setCallableAgentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCallableAgents(), "CallableAgents", "json"));
  }

  if (!!tmpReq.hasMetadata()) {
    request.setMetadataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMetadata(), "Metadata", "json"));
  }

  if (!!tmpReq.hasModel()) {
    request.setModelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getModel(), "Model", "json"));
  }

  if (!!tmpReq.hasSkills()) {
    request.setSkillsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSkills(), "Skills", "json"));
  }

  if (!!tmpReq.hasTools()) {
    request.setToolsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTools(), "Tools", "json"));
  }

  if (!!tmpReq.hasVisibilityScope()) {
    request.setVisibilityScopeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVisibilityScope(), "VisibilityScope", "json"));
  }

  json body = {};
  if (!!request.hasCallableAgentsShrink()) {
    body["CallableAgents"] = request.getCallableAgentsShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasMetadataShrink()) {
    body["Metadata"] = request.getMetadataShrink();
  }

  if (!!request.hasModelShrink()) {
    body["Model"] = request.getModelShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSkillsShrink()) {
    body["Skills"] = request.getSkillsShrink();
  }

  if (!!request.hasSystemPrompt()) {
    body["SystemPrompt"] = request.getSystemPrompt();
  }

  if (!!request.hasToolsShrink()) {
    body["Tools"] = request.getToolsShrink();
  }

  if (!!request.hasVisibility()) {
    body["Visibility"] = request.getVisibility();
  }

  if (!!request.hasVisibilityScopeShrink()) {
    body["VisibilityScope"] = request.getVisibilityScopeShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateAgent"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgentResponse>();
}

/**
 * @summary Create Agent
 *
 * @description ## Request Description
 * - **Agent Name**: Must be unique under the current account.
 * - **Model Configuration**: An optional parameter used to specify the model used by the Agent and its related settings.
 * - **Visibility Level**: Defines who can access the Agent. Supports visibility within the account, to specified projects, or to specific users.
 * - **Visibility Scope**: When `PROJECT` or `USER` is selected as the visibility level, the specific project ID or user ID list must be further specified.
 * - **Other Parameters**: Items such as display name and description are optional and can be filled in based on actual needs.
 *
 * @param request CreateAgentRequest
 * @return CreateAgentResponse
 */
CreateAgentResponse Client::createAgent(const CreateAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAgentWithOptions(request, runtime);
}

/**
 * @summary Creates a new agent session and returns a session ID.
 *
 * @description ## Description
 * - This API creates a new agent session.
 * - You must specify the agent name to bind to the session using the `_meta.agent.agentName` parameter.
 * - You can specify a session source identifier in the `_meta.config.sessionSource` parameter. This allows you to search for sessions by source later.
 * - You can add session tags using the `_meta.config.sessionTags[].sessionTagCode` parameter.
 *
 * @param tmpReq CreateAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentSessionResponse
 */
CreateAgentSessionResponse Client::createAgentSessionWithOptions(const CreateAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAgentSessionShrinkRequest request = CreateAgentSessionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateAgentSession"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgentSessionResponse>();
}

/**
 * @summary Creates a new agent session and returns a session ID.
 *
 * @description ## Description
 * - This API creates a new agent session.
 * - You must specify the agent name to bind to the session using the `_meta.agent.agentName` parameter.
 * - You can specify a session source identifier in the `_meta.config.sessionSource` parameter. This allows you to search for sessions by source later.
 * - You can add session tags using the `_meta.config.sessionTags[].sessionTagCode` parameter.
 *
 * @param request CreateAgentSessionRequest
 * @return CreateAgentSessionResponse
 */
CreateAgentSessionResponse Client::createAgentSession(const CreateAgentSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAgentSessionWithOptions(request, runtime);
}

/**
 * @summary Creates a custom monitoring alert rule.
 *
 * @param tmpReq CreateAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAlertRuleResponse
 */
CreateAlertRuleResponse Client::createAlertRuleWithOptions(const CreateAlertRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAlertRuleShrinkRequest request = CreateAlertRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTriggerCondition()) {
    request.setTriggerConditionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTriggerCondition(), "TriggerCondition", "json"));
  }

  json query = {};
  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.getOwner();
  }

  if (!!request.hasTriggerConditionShrink()) {
    query["TriggerCondition"] = request.getTriggerConditionShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAlertRule"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAlertRuleResponse>();
}

/**
 * @summary Creates a custom monitoring alert rule.
 *
 * @param request CreateAlertRuleRequest
 * @return CreateAlertRuleResponse
 */
CreateAlertRuleResponse Client::createAlertRule(const CreateAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAlertRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a workflow in DataStudio.
 *
 * @param request CreateBusinessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBusinessResponse
 */
CreateBusinessResponse Client::createBusinessWithOptions(const CreateBusinessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessName()) {
    body["BusinessName"] = request.getBusinessName();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.getOwner();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  if (!!request.hasUseType()) {
    body["UseType"] = request.getUseType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateBusiness"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBusinessResponse>();
}

/**
 * @summary Creates a workflow in DataStudio.
 *
 * @param request CreateBusinessRequest
 * @return CreateBusinessResponse
 */
CreateBusinessResponse Client::createBusiness(const CreateBusinessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBusinessWithOptions(request, runtime);
}

/**
 * @summary Creates components.
 *
 * @description >Notice: 
 * This API does not support batch operations. If you specify multiple entities to be published, all entities except the first one are ignored.
 *
 * @param request CreateComponentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateComponentResponse
 */
CreateComponentResponse Client::createComponentWithOptions(const CreateComponentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.getSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateComponent"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateComponentResponse>();
}

/**
 * @summary Creates components.
 *
 * @description >Notice: 
 * This API does not support batch operations. If you specify multiple entities to be published, all entities except the first one are ignored.
 *
 * @param request CreateComponentRequest
 * @return CreateComponentResponse
 */
CreateComponentResponse Client::createComponent(const CreateComponentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createComponentWithOptions(request, runtime);
}

/**
 * @summary Creates a computing resource in the specified workspace. The resource can be for a development environment or a production environment.
 *
 * @description DataWorks Basic Edition or a more advanced edition is required.
 * You must have at least one of the following roles in the DataWorks workspace:
 * Tenant Owner, Workspace Administrator, Project Owner, O\\&M
 *
 * @param request CreateComputeResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateComputeResourceResponse
 */
CreateComputeResourceResponse Client::createComputeResourceWithOptions(const CreateComputeResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionProperties()) {
    query["ConnectionProperties"] = request.getConnectionProperties();
  }

  if (!!request.hasConnectionPropertiesMode()) {
    query["ConnectionPropertiesMode"] = request.getConnectionPropertiesMode();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateComputeResource"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateComputeResourceResponse>();
}

/**
 * @summary Creates a computing resource in the specified workspace. The resource can be for a development environment or a production environment.
 *
 * @description DataWorks Basic Edition or a more advanced edition is required.
 * You must have at least one of the following roles in the DataWorks workspace:
 * Tenant Owner, Workspace Administrator, Project Owner, O\\&M
 *
 * @param request CreateComputeResourceRequest
 * @return CreateComputeResourceResponse
 */
CreateComputeResourceResponse Client::createComputeResource(const CreateComputeResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createComputeResourceWithOptions(request, runtime);
}

/**
 * @summary Creates a custom attribute definition.
 *
 * @param tmpReq CreateCustomAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomAttributeResponse
 */
CreateCustomAttributeResponse Client::createCustomAttributeWithOptions(const CreateCustomAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCustomAttributeShrinkRequest request = CreateCustomAttributeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEntityTypes()) {
    request.setEntityTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEntityTypes(), "EntityTypes", "simple"));
  }

  if (!!tmpReq.hasValueEnums()) {
    request.setValueEnumsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getValueEnums(), "ValueEnums", "simple"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasDisplayEnabled()) {
    body["DisplayEnabled"] = request.getDisplayEnabled();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEntityTypesShrink()) {
    body["EntityTypes"] = request.getEntityTypesShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasSearchFilterEnabled()) {
    body["SearchFilterEnabled"] = request.getSearchFilterEnabled();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasValueEnumsShrink()) {
    body["ValueEnums"] = request.getValueEnumsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateCustomAttribute"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomAttributeResponse>();
}

/**
 * @summary Creates a custom attribute definition.
 *
 * @param request CreateCustomAttributeRequest
 * @return CreateCustomAttributeResponse
 */
CreateCustomAttributeResponse Client::createCustomAttribute(const CreateCustomAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomAttributeWithOptions(request, runtime);
}

/**
 * @summary Creates an alert rule for a synchronization task.
 *
 * @param tmpReq CreateDIAlarmRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDIAlarmRuleResponse
 */
CreateDIAlarmRuleResponse Client::createDIAlarmRuleWithOptions(const CreateDIAlarmRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDIAlarmRuleShrinkRequest request = CreateDIAlarmRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNotificationSettings()) {
    request.setNotificationSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotificationSettings(), "NotificationSettings", "json"));
  }

  if (!!tmpReq.hasTriggerConditions()) {
    request.setTriggerConditionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTriggerConditions(), "TriggerConditions", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDIAlarmRule"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDIAlarmRuleResponse>();
}

/**
 * @summary Creates an alert rule for a synchronization task.
 *
 * @param request CreateDIAlarmRuleRequest
 * @return CreateDIAlarmRuleResponse
 */
CreateDIAlarmRuleResponse Client::createDIAlarmRule(const CreateDIAlarmRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDIAlarmRuleWithOptions(request, runtime);
}

/**
 * @summary Create a new version of a data integration task.
 *
 * @description - This API requires DataWorks Basic Edition or a higher edition.
 * - This API creates a data integration synchronization task. Key parameters include `SourceDataSourceSettings`, `DestinationDataSourceSettings`, and `MigrationType`. The `TransformationRules` parameter defines transformation rules for synchronized tables, such as adding columns or replacing table names. The `TableMappings` parameter specifies which tables to synchronize and their mapping rules. The `JobSettings` parameter configures task settings, including column mapping and scheduling.
 *
 * @param tmpReq CreateDIJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDIJobResponse
 */
CreateDIJobResponse Client::createDIJobWithOptions(const CreateDIJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDIJobShrinkRequest request = CreateDIJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDestinationDataSourceSettings()) {
    request.setDestinationDataSourceSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDestinationDataSourceSettings(), "DestinationDataSourceSettings", "json"));
  }

  if (!!tmpReq.hasJobSettings()) {
    request.setJobSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getJobSettings(), "JobSettings", "json"));
  }

  if (!!tmpReq.hasResourceSettings()) {
    request.setResourceSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceSettings(), "ResourceSettings", "json"));
  }

  if (!!tmpReq.hasSourceDataSourceSettings()) {
    request.setSourceDataSourceSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSourceDataSourceSettings(), "SourceDataSourceSettings", "json"));
  }

  if (!!tmpReq.hasTableMappings()) {
    request.setTableMappingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTableMappings(), "TableMappings", "json"));
  }

  if (!!tmpReq.hasTransformationRules()) {
    request.setTransformationRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTransformationRules(), "TransformationRules", "json"));
  }

  json query = {};
  if (!!request.hasDestinationDataSourceType()) {
    query["DestinationDataSourceType"] = request.getDestinationDataSourceType();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.getJobName();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.getJobType();
  }

  if (!!request.hasMigrationType()) {
    query["MigrationType"] = request.getMigrationType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.getOwner();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSourceDataSourceType()) {
    query["SourceDataSourceType"] = request.getSourceDataSourceType();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDestinationDataSourceSettingsShrink()) {
    body["DestinationDataSourceSettings"] = request.getDestinationDataSourceSettingsShrink();
  }

  if (!!request.hasFileSpec()) {
    body["FileSpec"] = request.getFileSpec();
  }

  if (!!request.hasJobSettingsShrink()) {
    body["JobSettings"] = request.getJobSettingsShrink();
  }

  if (!!request.hasResourceSettingsShrink()) {
    body["ResourceSettings"] = request.getResourceSettingsShrink();
  }

  if (!!request.hasSourceDataSourceSettingsShrink()) {
    body["SourceDataSourceSettings"] = request.getSourceDataSourceSettingsShrink();
  }

  if (!!request.hasTableMappingsShrink()) {
    body["TableMappings"] = request.getTableMappingsShrink();
  }

  if (!!request.hasTransformationRulesShrink()) {
    body["TransformationRules"] = request.getTransformationRulesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDIJob"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDIJobResponse>();
}

/**
 * @summary Create a new version of a data integration task.
 *
 * @description - This API requires DataWorks Basic Edition or a higher edition.
 * - This API creates a data integration synchronization task. Key parameters include `SourceDataSourceSettings`, `DestinationDataSourceSettings`, and `MigrationType`. The `TransformationRules` parameter defines transformation rules for synchronized tables, such as adding columns or replacing table names. The `TableMappings` parameter specifies which tables to synchronize and their mapping rules. The `JobSettings` parameter configures task settings, including column mapping and scheduling.
 *
 * @param request CreateDIJobRequest
 * @return CreateDIJobResponse
 */
CreateDIJobResponse Client::createDIJob(const CreateDIJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDIJobWithOptions(request, runtime);
}

/**
 * @summary Creates a tag.
 *
 * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
 *
 * @param tmpReq CreateDataAssetTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataAssetTagResponse
 */
CreateDataAssetTagResponse Client::createDataAssetTagWithOptions(const CreateDataAssetTagRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataAssetTagShrinkRequest request = CreateDataAssetTagShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasManagers()) {
    request.setManagersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getManagers(), "Managers", "json"));
  }

  if (!!tmpReq.hasValues()) {
    request.setValuesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getValues(), "Values", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasManagersShrink()) {
    query["Managers"] = request.getManagersShrink();
  }

  if (!!request.hasValueType()) {
    query["ValueType"] = request.getValueType();
  }

  if (!!request.hasValuesShrink()) {
    query["Values"] = request.getValuesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataAssetTag"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataAssetTagResponse>();
}

/**
 * @summary Creates a tag.
 *
 * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
 *
 * @param request CreateDataAssetTagRequest
 * @return CreateDataAssetTagResponse
 */
CreateDataAssetTagResponse Client::createDataAssetTag(const CreateDataAssetTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataAssetTagWithOptions(request, runtime);
}

/**
 * @summary Creates a data quality monitoring alert rule in a project.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param tmpReq CreateDataQualityAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataQualityAlertRuleResponse
 */
CreateDataQualityAlertRuleResponse Client::createDataQualityAlertRuleWithOptions(const CreateDataQualityAlertRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataQualityAlertRuleShrinkRequest request = CreateDataQualityAlertRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTarget()) {
    request.setTargetShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTarget(), "Target", "json"));
  }

  json body = {};
  if (!!request.hasCondition()) {
    body["Condition"] = request.getCondition();
  }

  if (!!request.hasNotificationShrink()) {
    body["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasTargetShrink()) {
    body["Target"] = request.getTargetShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDataQualityAlertRule"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataQualityAlertRuleResponse>();
}

/**
 * @summary Creates a data quality monitoring alert rule in a project.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request CreateDataQualityAlertRuleRequest
 * @return CreateDataQualityAlertRuleResponse
 */
CreateDataQualityAlertRuleResponse Client::createDataQualityAlertRule(const CreateDataQualityAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataQualityAlertRuleWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI CreateDataQualityEvaluationTask is deprecated, please use dataworks-public::2024-05-18::CreateDataQualityScan instead.
 *
 * @summary Creates a DataWorks data quality monitor.
 *
 * @description DataWorks Basic Edition or higher is required.
 *
 * @param tmpReq CreateDataQualityEvaluationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataQualityEvaluationTaskResponse
 */
CreateDataQualityEvaluationTaskResponse Client::createDataQualityEvaluationTaskWithOptions(const CreateDataQualityEvaluationTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataQualityEvaluationTaskShrinkRequest request = CreateDataQualityEvaluationTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataQualityRules()) {
    request.setDataQualityRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataQualityRules(), "DataQualityRules", "json"));
  }

  if (!!tmpReq.hasHooks()) {
    request.setHooksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHooks(), "Hooks", "json"));
  }

  if (!!tmpReq.hasNotifications()) {
    request.setNotificationsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotifications(), "Notifications", "json"));
  }

  if (!!tmpReq.hasTarget()) {
    request.setTargetShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTarget(), "Target", "json"));
  }

  if (!!tmpReq.hasTrigger()) {
    request.setTriggerShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTrigger(), "Trigger", "json"));
  }

  json body = {};
  if (!!request.hasDataQualityRulesShrink()) {
    body["DataQualityRules"] = request.getDataQualityRulesShrink();
  }

  if (!!request.hasDataSourceId()) {
    body["DataSourceId"] = request.getDataSourceId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasHooksShrink()) {
    body["Hooks"] = request.getHooksShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNotificationsShrink()) {
    body["Notifications"] = request.getNotificationsShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRuntimeConf()) {
    body["RuntimeConf"] = request.getRuntimeConf();
  }

  if (!!request.hasTargetShrink()) {
    body["Target"] = request.getTargetShrink();
  }

  if (!!request.hasTriggerShrink()) {
    body["Trigger"] = request.getTriggerShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDataQualityEvaluationTask"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataQualityEvaluationTaskResponse>();
}

/**
 * @deprecated OpenAPI CreateDataQualityEvaluationTask is deprecated, please use dataworks-public::2024-05-18::CreateDataQualityScan instead.
 *
 * @summary Creates a DataWorks data quality monitor.
 *
 * @description DataWorks Basic Edition or higher is required.
 *
 * @param request CreateDataQualityEvaluationTaskRequest
 * @return CreateDataQualityEvaluationTaskResponse
 */
CreateDataQualityEvaluationTaskResponse Client::createDataQualityEvaluationTask(const CreateDataQualityEvaluationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataQualityEvaluationTaskWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI CreateDataQualityEvaluationTaskInstance is deprecated, please use dataworks-public::2024-05-18::CreateDataQualityScanRun instead.
 *
 * @summary Creates a data quality evaluation task instance.
 *
 * @description You must purchase DataWorks Basic Edition or higher to use this operation.
 *
 * @param tmpReq CreateDataQualityEvaluationTaskInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataQualityEvaluationTaskInstanceResponse
 */
CreateDataQualityEvaluationTaskInstanceResponse Client::createDataQualityEvaluationTaskInstanceWithOptions(const CreateDataQualityEvaluationTaskInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataQualityEvaluationTaskInstanceShrinkRequest request = CreateDataQualityEvaluationTaskInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRuntimeResource()) {
    request.setRuntimeResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRuntimeResource(), "RuntimeResource", "json"));
  }

  json body = {};
  if (!!request.hasDataQualityEvaluationTaskId()) {
    body["DataQualityEvaluationTaskId"] = request.getDataQualityEvaluationTaskId();
  }

  if (!!request.hasParameters()) {
    body["Parameters"] = request.getParameters();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRuntimeResourceShrink()) {
    body["RuntimeResource"] = request.getRuntimeResourceShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDataQualityEvaluationTaskInstance"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataQualityEvaluationTaskInstanceResponse>();
}

/**
 * @deprecated OpenAPI CreateDataQualityEvaluationTaskInstance is deprecated, please use dataworks-public::2024-05-18::CreateDataQualityScanRun instead.
 *
 * @summary Creates a data quality evaluation task instance.
 *
 * @description You must purchase DataWorks Basic Edition or higher to use this operation.
 *
 * @param request CreateDataQualityEvaluationTaskInstanceRequest
 * @return CreateDataQualityEvaluationTaskInstanceResponse
 */
CreateDataQualityEvaluationTaskInstanceResponse Client::createDataQualityEvaluationTaskInstance(const CreateDataQualityEvaluationTaskInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataQualityEvaluationTaskInstanceWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI CreateDataQualityRule is deprecated, please use dataworks-public::2024-05-18::CreateDataQualityScan instead.
 *
 * @summary Creates a data quality rule.
 *
 * @description You must purchase DataWorks Basic Edition or higher to use this feature.
 *
 * @param tmpReq CreateDataQualityRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataQualityRuleResponse
 */
CreateDataQualityRuleResponse Client::createDataQualityRuleWithOptions(const CreateDataQualityRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataQualityRuleShrinkRequest request = CreateDataQualityRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCheckingConfig()) {
    request.setCheckingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCheckingConfig(), "CheckingConfig", "json"));
  }

  if (!!tmpReq.hasErrorHandlers()) {
    request.setErrorHandlersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getErrorHandlers(), "ErrorHandlers", "json"));
  }

  if (!!tmpReq.hasSamplingConfig()) {
    request.setSamplingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSamplingConfig(), "SamplingConfig", "json"));
  }

  if (!!tmpReq.hasTarget()) {
    request.setTargetShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTarget(), "Target", "json"));
  }

  json body = {};
  if (!!request.hasCheckingConfigShrink()) {
    body["CheckingConfig"] = request.getCheckingConfigShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnabled()) {
    body["Enabled"] = request.getEnabled();
  }

  if (!!request.hasErrorHandlersShrink()) {
    body["ErrorHandlers"] = request.getErrorHandlersShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSamplingConfigShrink()) {
    body["SamplingConfig"] = request.getSamplingConfigShrink();
  }

  if (!!request.hasSeverity()) {
    body["Severity"] = request.getSeverity();
  }

  if (!!request.hasTargetShrink()) {
    body["Target"] = request.getTargetShrink();
  }

  if (!!request.hasTemplateCode()) {
    body["TemplateCode"] = request.getTemplateCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDataQualityRule"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataQualityRuleResponse>();
}

/**
 * @deprecated OpenAPI CreateDataQualityRule is deprecated, please use dataworks-public::2024-05-18::CreateDataQualityScan instead.
 *
 * @summary Creates a data quality rule.
 *
 * @description You must purchase DataWorks Basic Edition or higher to use this feature.
 *
 * @param request CreateDataQualityRuleRequest
 * @return CreateDataQualityRuleResponse
 */
CreateDataQualityRuleResponse Client::createDataQualityRule(const CreateDataQualityRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataQualityRuleWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI CreateDataQualityRuleTemplate is deprecated, please use dataworks-public::2024-05-18::CreateDataQualityTemplate instead.
 *
 * @summary Creates a rule template.
 *
 * @description You must purchase DataWorks Basic Edition or above to use this feature.
 *
 * @param tmpReq CreateDataQualityRuleTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataQualityRuleTemplateResponse
 */
CreateDataQualityRuleTemplateResponse Client::createDataQualityRuleTemplateWithOptions(const CreateDataQualityRuleTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataQualityRuleTemplateShrinkRequest request = CreateDataQualityRuleTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCheckingConfig()) {
    request.setCheckingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCheckingConfig(), "CheckingConfig", "json"));
  }

  if (!!tmpReq.hasSamplingConfig()) {
    request.setSamplingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSamplingConfig(), "SamplingConfig", "json"));
  }

  json body = {};
  if (!!request.hasCheckingConfigShrink()) {
    body["CheckingConfig"] = request.getCheckingConfigShrink();
  }

  if (!!request.hasDirectoryPath()) {
    body["DirectoryPath"] = request.getDirectoryPath();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSamplingConfigShrink()) {
    body["SamplingConfig"] = request.getSamplingConfigShrink();
  }

  if (!!request.hasVisibleScope()) {
    body["VisibleScope"] = request.getVisibleScope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDataQualityRuleTemplate"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataQualityRuleTemplateResponse>();
}

/**
 * @deprecated OpenAPI CreateDataQualityRuleTemplate is deprecated, please use dataworks-public::2024-05-18::CreateDataQualityTemplate instead.
 *
 * @summary Creates a rule template.
 *
 * @description You must purchase DataWorks Basic Edition or above to use this feature.
 *
 * @param request CreateDataQualityRuleTemplateRequest
 * @return CreateDataQualityRuleTemplateResponse
 */
CreateDataQualityRuleTemplateResponse Client::createDataQualityRuleTemplate(const CreateDataQualityRuleTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataQualityRuleTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a data quality monitor.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param tmpReq CreateDataQualityScanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataQualityScanResponse
 */
CreateDataQualityScanResponse Client::createDataQualityScanWithOptions(const CreateDataQualityScanRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataQualityScanShrinkRequest request = CreateDataQualityScanShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasComputeResource()) {
    request.setComputeResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getComputeResource(), "ComputeResource", "json"));
  }

  if (!!tmpReq.hasHooks()) {
    request.setHooksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHooks(), "Hooks", "json"));
  }

  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  if (!!tmpReq.hasRuntimeResource()) {
    request.setRuntimeResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRuntimeResource(), "RuntimeResource", "json"));
  }

  if (!!tmpReq.hasTrigger()) {
    request.setTriggerShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTrigger(), "Trigger", "json"));
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasComputeResourceShrink()) {
    body["ComputeResource"] = request.getComputeResourceShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasHooksShrink()) {
    body["Hooks"] = request.getHooksShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.getOwner();
  }

  if (!!request.hasParametersShrink()) {
    body["Parameters"] = request.getParametersShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRuntimeResourceShrink()) {
    body["RuntimeResource"] = request.getRuntimeResourceShrink();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.getSpec();
  }

  if (!!request.hasTriggerShrink()) {
    body["Trigger"] = request.getTriggerShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDataQualityScan"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataQualityScanResponse>();
}

/**
 * @summary Creates a data quality monitor.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request CreateDataQualityScanRequest
 * @return CreateDataQualityScanResponse
 */
CreateDataQualityScanResponse Client::createDataQualityScan(const CreateDataQualityScanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataQualityScanWithOptions(request, runtime);
}

/**
 * @summary Triggers the specified data quality scan and returns the run ID.
 *
 * @description This operation is available only in DataWorks Basic Edition and later versions.
 *
 * @param tmpReq CreateDataQualityScanRunRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataQualityScanRunResponse
 */
CreateDataQualityScanRunResponse Client::createDataQualityScanRunWithOptions(const CreateDataQualityScanRunRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDataQualityScanRunShrinkRequest request = CreateDataQualityScanRunShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  if (!!tmpReq.hasRuntimeResource()) {
    request.setRuntimeResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRuntimeResource(), "RuntimeResource", "json"));
  }

  json body = {};
  if (!!request.hasDataQualityScanId()) {
    body["DataQualityScanId"] = request.getDataQualityScanId();
  }

  if (!!request.hasParametersShrink()) {
    body["Parameters"] = request.getParametersShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRuntimeResourceShrink()) {
    body["RuntimeResource"] = request.getRuntimeResourceShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDataQualityScanRun"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataQualityScanRunResponse>();
}

/**
 * @summary Triggers the specified data quality scan and returns the run ID.
 *
 * @description This operation is available only in DataWorks Basic Edition and later versions.
 *
 * @param request CreateDataQualityScanRunRequest
 * @return CreateDataQualityScanRunResponse
 */
CreateDataQualityScanRunResponse Client::createDataQualityScanRun(const CreateDataQualityScanRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataQualityScanRunWithOptions(request, runtime);
}

/**
 * @summary Creates a data quality template.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request CreateDataQualityTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataQualityTemplateResponse
 */
CreateDataQualityTemplateResponse Client::createDataQualityTemplateWithOptions(const CreateDataQualityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOwner()) {
    body["Owner"] = request.getOwner();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.getSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDataQualityTemplate"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataQualityTemplateResponse>();
}

/**
 * @summary Creates a data quality template.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request CreateDataQualityTemplateRequest
 * @return CreateDataQualityTemplateResponse
 */
CreateDataQualityTemplateResponse Client::createDataQualityTemplate(const CreateDataQualityTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataQualityTemplateWithOptions(request, runtime);
}

/**
 * @summary Adds a data source to the development environment or production environment of a workspace.
 *
 * @param request CreateDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataSourceResponse
 */
CreateDataSourceResponse Client::createDataSourceWithOptions(const CreateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionProperties()) {
    query["ConnectionProperties"] = request.getConnectionProperties();
  }

  if (!!request.hasConnectionPropertiesMode()) {
    query["ConnectionPropertiesMode"] = request.getConnectionPropertiesMode();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataSource"},
    {"version" , "2024-05-18"},
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
 * @summary Adds a data source to the development environment or production environment of a workspace.
 *
 * @param request CreateDataSourceRequest
 * @return CreateDataSourceResponse
 */
CreateDataSourceResponse Client::createDataSource(const CreateDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataSourceWithOptions(request, runtime);
}

/**
 * @summary Creates a sharing rule for a data source to share it with other workspaces or RAM users.
 *
 * @description 1. This operation is available for all DataWorks editions.
 * 2. To share a data source from Workspace A to Workspace B, you must have the data source sharing permissions in both workspaces. You must have one of the following roles in DataWorks:
 * - Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
 *
 * @param request CreateDataSourceSharedRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataSourceSharedRuleResponse
 */
CreateDataSourceSharedRuleResponse Client::createDataSourceSharedRuleWithOptions(const CreateDataSourceSharedRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.getDataSourceId();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.getEnvType();
  }

  if (!!request.hasSharedUser()) {
    query["SharedUser"] = request.getSharedUser();
  }

  if (!!request.hasTargetProjectId()) {
    query["TargetProjectId"] = request.getTargetProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataSourceSharedRule"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataSourceSharedRuleResponse>();
}

/**
 * @summary Creates a sharing rule for a data source to share it with other workspaces or RAM users.
 *
 * @description 1. This operation is available for all DataWorks editions.
 * 2. To share a data source from Workspace A to Workspace B, you must have the data source sharing permissions in both workspaces. You must have one of the following roles in DataWorks:
 * - Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
 *
 * @param request CreateDataSourceSharedRuleRequest
 * @return CreateDataSourceSharedRuleResponse
 */
CreateDataSourceSharedRuleResponse Client::createDataSourceSharedRule(const CreateDataSourceSharedRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataSourceSharedRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a dataset. This operation is supported only in workspaces that the user has joined. Currently, only DataWorks datasets are supported. The maximum number of datasets allowed per tenant is 2,000.
 *
 * @param tmpReq CreateDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatasetResponse
 */
CreateDatasetResponse Client::createDatasetWithOptions(const CreateDatasetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDatasetShrinkRequest request = CreateDatasetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInitVersion()) {
    request.setInitVersionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInitVersion(), "InitVersion", "json"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasDataType()) {
    body["DataType"] = request.getDataType();
  }

  if (!!request.hasInitVersionShrink()) {
    body["InitVersion"] = request.getInitVersionShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOrigin()) {
    body["Origin"] = request.getOrigin();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasStorageType()) {
    body["StorageType"] = request.getStorageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDataset"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatasetResponse>();
}

/**
 * @summary Creates a dataset. This operation is supported only in workspaces that the user has joined. Currently, only DataWorks datasets are supported. The maximum number of datasets allowed per tenant is 2,000.
 *
 * @param request CreateDatasetRequest
 * @return CreateDatasetResponse
 */
CreateDatasetResponse Client::createDataset(const CreateDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatasetWithOptions(request, runtime);
}

/**
 * @summary Creates a dataset version. Currently supports DataWorks datasets only, with a maximum of 20 versions.
 *
 * @param tmpReq CreateDatasetVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatasetVersionResponse
 */
CreateDatasetVersionResponse Client::createDatasetVersionWithOptions(const CreateDatasetVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDatasetVersionShrinkRequest request = CreateDatasetVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasImportInfo()) {
    request.setImportInfoShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getImportInfo(), "ImportInfo", "json"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasDatasetId()) {
    body["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasImportInfoShrink()) {
    body["ImportInfo"] = request.getImportInfoShrink();
  }

  if (!!request.hasMountPath()) {
    body["MountPath"] = request.getMountPath();
  }

  if (!!request.hasUrl()) {
    body["Url"] = request.getUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDatasetVersion"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatasetVersionResponse>();
}

/**
 * @summary Creates a dataset version. Currently supports DataWorks datasets only, with a maximum of 20 versions.
 *
 * @param request CreateDatasetVersionRequest
 * @return CreateDatasetVersionResponse
 */
CreateDatasetVersionResponse Client::createDatasetVersion(const CreateDatasetVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDatasetVersionWithOptions(request, runtime);
}

/**
 * @summary Creates a file in DataStudio. You cannot call this operation to create Data Integration nodes.
 *
 * @param request CreateFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFileResponse
 */
CreateFileResponse Client::createFileWithOptions(const CreateFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAdvancedSettings()) {
    body["AdvancedSettings"] = request.getAdvancedSettings();
  }

  if (!!request.hasApplyScheduleImmediately()) {
    body["ApplyScheduleImmediately"] = request.getApplyScheduleImmediately();
  }

  if (!!request.hasAutoParsing()) {
    body["AutoParsing"] = request.getAutoParsing();
  }

  if (!!request.hasAutoRerunIntervalMillis()) {
    body["AutoRerunIntervalMillis"] = request.getAutoRerunIntervalMillis();
  }

  if (!!request.hasAutoRerunTimes()) {
    body["AutoRerunTimes"] = request.getAutoRerunTimes();
  }

  if (!!request.hasConnectionName()) {
    body["ConnectionName"] = request.getConnectionName();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasCreateFolderIfNotExists()) {
    body["CreateFolderIfNotExists"] = request.getCreateFolderIfNotExists();
  }

  if (!!request.hasCronExpress()) {
    body["CronExpress"] = request.getCronExpress();
  }

  if (!!request.hasCycleType()) {
    body["CycleType"] = request.getCycleType();
  }

  if (!!request.hasDependentNodeIdList()) {
    body["DependentNodeIdList"] = request.getDependentNodeIdList();
  }

  if (!!request.hasDependentType()) {
    body["DependentType"] = request.getDependentType();
  }

  if (!!request.hasEndEffectDate()) {
    body["EndEffectDate"] = request.getEndEffectDate();
  }

  if (!!request.hasFileDescription()) {
    body["FileDescription"] = request.getFileDescription();
  }

  if (!!request.hasFileFolderPath()) {
    body["FileFolderPath"] = request.getFileFolderPath();
  }

  if (!!request.hasFileName()) {
    body["FileName"] = request.getFileName();
  }

  if (!!request.hasFileType()) {
    body["FileType"] = request.getFileType();
  }

  if (!!request.hasIgnoreParentSkipRunningProperty()) {
    body["IgnoreParentSkipRunningProperty"] = request.getIgnoreParentSkipRunningProperty();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.getImageId();
  }

  if (!!request.hasInputList()) {
    body["InputList"] = request.getInputList();
  }

  if (!!request.hasInputParameters()) {
    body["InputParameters"] = request.getInputParameters();
  }

  if (!!request.hasOutputParameters()) {
    body["OutputParameters"] = request.getOutputParameters();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.getOwner();
  }

  if (!!request.hasParaValue()) {
    body["ParaValue"] = request.getParaValue();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  if (!!request.hasRerunMode()) {
    body["RerunMode"] = request.getRerunMode();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceGroupIdentifier()) {
    body["ResourceGroupIdentifier"] = request.getResourceGroupIdentifier();
  }

  if (!!request.hasSchedulerType()) {
    body["SchedulerType"] = request.getSchedulerType();
  }

  if (!!request.hasStartEffectDate()) {
    body["StartEffectDate"] = request.getStartEffectDate();
  }

  if (!!request.hasStartImmediately()) {
    body["StartImmediately"] = request.getStartImmediately();
  }

  if (!!request.hasStop()) {
    body["Stop"] = request.getStop();
  }

  if (!!request.hasTimeout()) {
    body["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateFile"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFileResponse>();
}

/**
 * @summary Creates a file in DataStudio. You cannot call this operation to create Data Integration nodes.
 *
 * @param request CreateFileRequest
 * @return CreateFileResponse
 */
CreateFileResponse Client::createFile(const CreateFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFileWithOptions(request, runtime);
}

/**
 * @summary Creates a folder.
 *
 * @param request CreateFolderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFolderResponse
 */
CreateFolderResponse Client::createFolderWithOptions(const CreateFolderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFolderPath()) {
    body["FolderPath"] = request.getFolderPath();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateFolder"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFolderResponse>();
}

/**
 * @summary Creates a folder.
 *
 * @param request CreateFolderRequest
 * @return CreateFolderResponse
 */
CreateFolderResponse Client::createFolder(const CreateFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFolderWithOptions(request, runtime);
}

/**
 * @summary Creates a user-defined function (UDF) in DataStudio. The information about the UDF is described by using FlowSpec.
 *
 * @description >Notice: 
 * This API does not support batch operations. If you define more than one UDF in the FlowSpec, all UDFs except the first one are ignored.
 *
 * @param request CreateFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFunctionResponse
 */
CreateFunctionResponse Client::createFunctionWithOptions(const CreateFunctionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.getSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateFunction"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFunctionResponse>();
}

/**
 * @summary Creates a user-defined function (UDF) in DataStudio. The information about the UDF is described by using FlowSpec.
 *
 * @description >Notice: 
 * This API does not support batch operations. If you define more than one UDF in the FlowSpec, all UDFs except the first one are ignored.
 *
 * @param request CreateFunctionRequest
 * @return CreateFunctionResponse
 */
CreateFunctionResponse Client::createFunction(const CreateFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFunctionWithOptions(request, runtime);
}

/**
 * @summary Creates an identity credential.
 *
 * @description >Notice: 
 * This operation does not support batch processing. If you specify multiple entities in the request parameters, only the first entity is processed and the rest are ignored.
 *
 * @param tmpReq CreateIdentifyCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIdentifyCredentialResponse
 */
CreateIdentifyCredentialResponse Client::createIdentifyCredentialWithOptions(const CreateIdentifyCredentialRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateIdentifyCredentialShrinkRequest request = CreateIdentifyCredentialShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIdentifyCredential()) {
    request.setIdentifyCredentialShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIdentifyCredential(), "IdentifyCredential", "json"));
  }

  json body = {};
  if (!!request.hasIdentifyCredentialShrink()) {
    body["IdentifyCredential"] = request.getIdentifyCredentialShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateIdentifyCredential"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIdentifyCredentialResponse>();
}

/**
 * @summary Creates an identity credential.
 *
 * @description >Notice: 
 * This operation does not support batch processing. If you specify multiple entities in the request parameters, only the first entity is processed and the rest are ignored.
 *
 * @param request CreateIdentifyCredentialRequest
 * @return CreateIdentifyCredentialResponse
 */
CreateIdentifyCredentialResponse Client::createIdentifyCredential(const CreateIdentifyCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createIdentifyCredentialWithOptions(request, runtime);
}

/**
 * @summary Registers a data lineage relationship in DataWorks Data Map. You can use this operation to establish lineage relationships between metadata entities managed by DataWorks, including table-to-table, column-to-column, table-to-column, and dataset-to-table scenarios. You can also establish lineage relationships between managed entities and custom entity objects registered by users. This operation is compatible with non-managed custom objects, but this approach is no longer recommended. Before calling this operation, make sure that the managed entities involved in the lineage registration already exist on the DataWorks platform.
 *
 * @description 1. DataWorks Professional Edition or a higher edition is required.
 *
 * @param tmpReq CreateLineageRelationshipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLineageRelationshipResponse
 */
CreateLineageRelationshipResponse Client::createLineageRelationshipWithOptions(const CreateLineageRelationshipRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateLineageRelationshipShrinkRequest request = CreateLineageRelationshipShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDstEntity()) {
    request.setDstEntityShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDstEntity(), "DstEntity", "json"));
  }

  if (!!tmpReq.hasSrcEntity()) {
    request.setSrcEntityShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSrcEntity(), "SrcEntity", "json"));
  }

  if (!!tmpReq.hasTask()) {
    request.setTaskShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTask(), "Task", "json"));
  }

  json query = {};
  if (!!request.hasDstEntityShrink()) {
    query["DstEntity"] = request.getDstEntityShrink();
  }

  if (!!request.hasSrcEntityShrink()) {
    query["SrcEntity"] = request.getSrcEntityShrink();
  }

  if (!!request.hasTaskShrink()) {
    query["Task"] = request.getTaskShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLineageRelationship"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLineageRelationshipResponse>();
}

/**
 * @summary Registers a data lineage relationship in DataWorks Data Map. You can use this operation to establish lineage relationships between metadata entities managed by DataWorks, including table-to-table, column-to-column, table-to-column, and dataset-to-table scenarios. You can also establish lineage relationships between managed entities and custom entity objects registered by users. This operation is compatible with non-managed custom objects, but this approach is no longer recommended. Before calling this operation, make sure that the managed entities involved in the lineage registration already exist on the DataWorks platform.
 *
 * @description 1. DataWorks Professional Edition or a higher edition is required.
 *
 * @param request CreateLineageRelationshipRequest
 * @return CreateLineageRelationshipResponse
 */
CreateLineageRelationshipResponse Client::createLineageRelationship(const CreateLineageRelationshipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLineageRelationshipWithOptions(request, runtime);
}

/**
 * @summary Creates an MCP Server.
 *
 * @description ## Usage notes
 * - When you submit a request, the system verifies the availability of the MCP Server based on the connection configuration.
 * - If the MCP Server connection is unavailable, the API returns an error message.
 * - The `Name` must be unique at the tenant level, start with a lowercase letter, and contain only lowercase letters, digits, underscores (_), and hyphens (-).
 * - The `Visibility` parameter specifies the visibility level of the MCP Server. Valid values are `TENANT` (visible within the tenant), `PROJECT` (visible to specified projects), and `USER` (visible to specified users). You must also provide the `VisibilityScope` parameter to define the scope based on the selected visibility level.
 *
 * @param tmpReq CreateMcpServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMcpServerResponse
 */
CreateMcpServerResponse Client::createMcpServerWithOptions(const CreateMcpServerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateMcpServerShrinkRequest request = CreateMcpServerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfig()) {
    request.setConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfig(), "Config", "json"));
  }

  if (!!tmpReq.hasVisibilityScope()) {
    request.setVisibilityScopeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVisibilityScope(), "VisibilityScope", "json"));
  }

  json body = {};
  if (!!request.hasConfigShrink()) {
    body["Config"] = request.getConfigShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasVisibility()) {
    body["Visibility"] = request.getVisibility();
  }

  if (!!request.hasVisibilityScopeShrink()) {
    body["VisibilityScope"] = request.getVisibilityScopeShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMcpServer"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMcpServerResponse>();
}

/**
 * @summary Creates an MCP Server.
 *
 * @description ## Usage notes
 * - When you submit a request, the system verifies the availability of the MCP Server based on the connection configuration.
 * - If the MCP Server connection is unavailable, the API returns an error message.
 * - The `Name` must be unique at the tenant level, start with a lowercase letter, and contain only lowercase letters, digits, underscores (_), and hyphens (-).
 * - The `Visibility` parameter specifies the visibility level of the MCP Server. Valid values are `TENANT` (visible within the tenant), `PROJECT` (visible to specified projects), and `USER` (visible to specified users). You must also provide the `VisibilityScope` parameter to define the scope based on the selected visibility level.
 *
 * @param request CreateMcpServerRequest
 * @return CreateMcpServerResponse
 */
CreateMcpServerResponse Client::createMcpServer(const CreateMcpServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMcpServerWithOptions(request, runtime);
}

/**
 * @summary Creates a collection in Data Map. Collections include categories, subcategories, data albums, and categories that are created in the data albums.
 *
 * @description 1. DataWorks Professional Edition or a higher edition is required.
 *
 * @param request CreateMetaCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMetaCollectionResponse
 */
CreateMetaCollectionResponse Client::createMetaCollectionWithOptions(const CreateMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.getParentId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMetaCollection"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMetaCollectionResponse>();
}

/**
 * @summary Creates a collection in Data Map. Collections include categories, subcategories, data albums, and categories that are created in the data albums.
 *
 * @description 1. DataWorks Professional Edition or a higher edition is required.
 *
 * @param request CreateMetaCollectionRequest
 * @return CreateMetaCollectionResponse
 */
CreateMetaCollectionResponse Client::createMetaCollection(const CreateMetaCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMetaCollectionWithOptions(request, runtime);
}

/**
 * @summary Creates a metadata entity definition. The definition can be for a pure custom type or an extended table type.
 *
 * @description This operation requires DataWorks Professional Edition or a higher edition.
 *
 * @param tmpReq CreateMetaEntityDefRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMetaEntityDefResponse
 */
CreateMetaEntityDefResponse Client::createMetaEntityDefWithOptions(const CreateMetaEntityDefRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateMetaEntityDefShrinkRequest request = CreateMetaEntityDefShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAttributeDefs()) {
    request.setAttributeDefsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAttributeDefs(), "AttributeDefs", "json"));
  }

  json body = {};
  if (!!request.hasAttributeDefsShrink()) {
    body["AttributeDefs"] = request.getAttributeDefsShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasExtend()) {
    body["Extend"] = request.getExtend();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMetaEntityDef"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMetaEntityDefResponse>();
}

/**
 * @summary Creates a metadata entity definition. The definition can be for a pure custom type or an extended table type.
 *
 * @description This operation requires DataWorks Professional Edition or a higher edition.
 *
 * @param request CreateMetaEntityDefRequest
 * @return CreateMetaEntityDefResponse
 */
CreateMetaEntityDefResponse Client::createMetaEntityDef(const CreateMetaEntityDefRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMetaEntityDefWithOptions(request, runtime);
}

/**
 * @summary Creates a network and associates the network with a general resource group.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request CreateNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNetworkResponse
 */
CreateNetworkResponse Client::createNetworkWithOptions(const CreateNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  if (!!request.hasVswitchId()) {
    body["VswitchId"] = request.getVswitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateNetwork"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNetworkResponse>();
}

/**
 * @summary Creates a network and associates the network with a general resource group.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request CreateNetworkRequest
 * @return CreateNetworkResponse
 */
CreateNetworkResponse Client::createNetwork(const CreateNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNetworkWithOptions(request, runtime);
}

/**
 * @summary Creates a node in DataStudio. The information about the node is described by using FlowSpec.
 *
 * @description >Notice: 
 * This API does not support batch operations. If you define more than one node in the FlowSpec, all nodes except the first one are ignored.
 *
 * @param request CreateNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNodeResponse
 */
CreateNodeResponse Client::createNodeWithOptions(const CreateNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContainerId()) {
    body["ContainerId"] = request.getContainerId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasScene()) {
    body["Scene"] = request.getScene();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.getSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateNode"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNodeResponse>();
}

/**
 * @summary Creates a node in DataStudio. The information about the node is described by using FlowSpec.
 *
 * @description >Notice: 
 * This API does not support batch operations. If you define more than one node in the FlowSpec, all nodes except the first one are ignored.
 *
 * @param request CreateNodeRequest
 * @return CreateNodeResponse
 */
CreateNodeResponse Client::createNode(const CreateNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNodeWithOptions(request, runtime);
}

/**
 * @summary Creates a parameter.
 *
 * @description This operation requires DataWorks Professional Edition or a later edition.
 *
 * @param tmpReq CreateParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateParameterResponse
 */
CreateParameterResponse Client::createParameterWithOptions(const CreateParameterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateParameterShrinkRequest request = CreateParameterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProperties()) {
    request.setPropertiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProperties(), "Properties", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.getOwner();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasPropertiesShrink()) {
    body["Properties"] = request.getPropertiesShrink();
  }

  if (!!request.hasScope()) {
    body["Scope"] = request.getScope();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateParameter"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateParameterResponse>();
}

/**
 * @summary Creates a parameter.
 *
 * @description This operation requires DataWorks Professional Edition or a later edition.
 *
 * @param request CreateParameterRequest
 * @return CreateParameterResponse
 */
CreateParameterResponse Client::createParameter(const CreateParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createParameterWithOptions(request, runtime);
}

/**
 * @summary Creates a publish process for an entity in the new-version DataStudio.
 *
 * @description >Notice: This operation does not support batch operations. If you specify multiple publish entities in the parameters, all entities except the first one are ignored.
 * >Notice: This operation may not be available in earlier versions of the SDK. In this case, use the CreateDeployment operation. The parameters are the same as those described in this topic.
 *
 * @param tmpReq CreatePipelineRunRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePipelineRunResponse
 */
CreatePipelineRunResponse Client::createPipelineRunWithOptions(const CreatePipelineRunRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreatePipelineRunShrinkRequest request = CreatePipelineRunShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasObjectIds()) {
    request.setObjectIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getObjectIds(), "ObjectIds", "json"));
  }

  json body = {};
  if (!!request.hasAutoRunUntilStage()) {
    body["AutoRunUntilStage"] = request.getAutoRunUntilStage();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasObjectIdsShrink()) {
    body["ObjectIds"] = request.getObjectIdsShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRunMode()) {
    body["RunMode"] = request.getRunMode();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreatePipelineRun"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePipelineRunResponse>();
}

/**
 * @summary Creates a publish process for an entity in the new-version DataStudio.
 *
 * @description >Notice: This operation does not support batch operations. If you specify multiple publish entities in the parameters, all entities except the first one are ignored.
 * >Notice: This operation may not be available in earlier versions of the SDK. In this case, use the CreateDeployment operation. The parameters are the same as those described in this topic.
 *
 * @param request CreatePipelineRunRequest
 * @return CreatePipelineRunResponse
 */
CreatePipelineRunResponse Client::createPipelineRun(const CreatePipelineRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPipelineRunWithOptions(request, runtime);
}

/**
 * @summary Creates a new approval process definition, supporting custom configuration of approval rules and notification services.
 *
 * @description ## Usage notes
 * - This API operation allows you to create a new approval process definition, including setting basic information such as the approval policy name, description, type, and subtype.
 * - You can define a list of condition rules (RuleConditions) to specify the conditions under which the approval process is triggered.
 * - Multiple notification services (NotificationServices) can be configured to send notifications to relevant personnel at different stages of the approval process.
 * - The approval node list (ApprovalNodes) defines the nodes that must be traversed during the approval process and the approver information for each node.
 * - You can choose whether to immediately enable the newly created approval process definition.
 * - Note: Certain fields such as Type have specific value constraints. Refer to the constraint descriptions in the documentation.
 *
 * @param tmpReq CreateProcessDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProcessDefinitionResponse
 */
CreateProcessDefinitionResponse Client::createProcessDefinitionWithOptions(const CreateProcessDefinitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateProcessDefinitionShrinkRequest request = CreateProcessDefinitionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApprovalNodes()) {
    request.setApprovalNodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApprovalNodes(), "ApprovalNodes", "json"));
  }

  if (!!tmpReq.hasNotificationServices()) {
    request.setNotificationServicesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotificationServices(), "NotificationServices", "json"));
  }

  if (!!tmpReq.hasRuleConditions()) {
    request.setRuleConditionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRuleConditions(), "RuleConditions", "json"));
  }

  json body = {};
  if (!!request.hasApprovalNodesShrink()) {
    body["ApprovalNodes"] = request.getApprovalNodesShrink();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnabled()) {
    body["Enabled"] = request.getEnabled();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNotificationServicesShrink()) {
    body["NotificationServices"] = request.getNotificationServicesShrink();
  }

  if (!!request.hasRuleConditionsShrink()) {
    body["RuleConditions"] = request.getRuleConditionsShrink();
  }

  if (!!request.hasSubType()) {
    body["SubType"] = request.getSubType();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateProcessDefinition"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProcessDefinitionResponse>();
}

/**
 * @summary Creates a new approval process definition, supporting custom configuration of approval rules and notification services.
 *
 * @description ## Usage notes
 * - This API operation allows you to create a new approval process definition, including setting basic information such as the approval policy name, description, type, and subtype.
 * - You can define a list of condition rules (RuleConditions) to specify the conditions under which the approval process is triggered.
 * - Multiple notification services (NotificationServices) can be configured to send notifications to relevant personnel at different stages of the approval process.
 * - The approval node list (ApprovalNodes) defines the nodes that must be traversed during the approval process and the approver information for each node.
 * - You can choose whether to immediately enable the newly created approval process definition.
 * - Note: Certain fields such as Type have specific value constraints. Refer to the constraint descriptions in the documentation.
 *
 * @param request CreateProcessDefinitionRequest
 * @return CreateProcessDefinitionResponse
 */
CreateProcessDefinitionResponse Client::createProcessDefinition(const CreateProcessDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProcessDefinitionWithOptions(request, runtime);
}

/**
 * @summary Creates a workspace.
 *
 * @param tmpReq CreateProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProjectWithOptions(const CreateProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateProjectShrinkRequest request = CreateProjectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAliyunResourceTags()) {
    request.setAliyunResourceTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAliyunResourceTags(), "AliyunResourceTags", "json"));
  }

  json body = {};
  if (!!request.hasAliyunResourceGroupId()) {
    body["AliyunResourceGroupId"] = request.getAliyunResourceGroupId();
  }

  if (!!request.hasAliyunResourceTagsShrink()) {
    body["AliyunResourceTags"] = request.getAliyunResourceTagsShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDevEnvironmentEnabled()) {
    body["DevEnvironmentEnabled"] = request.getDevEnvironmentEnabled();
  }

  if (!!request.hasDevRoleDisabled()) {
    body["DevRoleDisabled"] = request.getDevRoleDisabled();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPaiTaskEnabled()) {
    body["PaiTaskEnabled"] = request.getPaiTaskEnabled();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateProject"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProjectResponse>();
}

/**
 * @summary Creates a workspace.
 *
 * @param request CreateProjectRequest
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProject(const CreateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProjectWithOptions(request, runtime);
}

/**
 * @summary Adds a workspace member and assigns a workspace-level role to the member.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param tmpReq CreateProjectMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProjectMemberResponse
 */
CreateProjectMemberResponse Client::createProjectMemberWithOptions(const CreateProjectMemberRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateProjectMemberShrinkRequest request = CreateProjectMemberShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRoleCodes()) {
    request.setRoleCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRoleCodes(), "RoleCodes", "json"));
  }

  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRoleCodesShrink()) {
    body["RoleCodes"] = request.getRoleCodesShrink();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateProjectMember"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProjectMemberResponse>();
}

/**
 * @summary Adds a workspace member and assigns a workspace-level role to the member.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request CreateProjectMemberRequest
 * @return CreateProjectMemberResponse
 */
CreateProjectMemberResponse Client::createProjectMember(const CreateProjectMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProjectMemberWithOptions(request, runtime);
}

/**
 * @summary Creates a custom role for a workspace.
 *
 * @param tmpReq CreateProjectRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProjectRoleResponse
 */
CreateProjectRoleResponse Client::createProjectRoleWithOptions(const CreateProjectRoleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateProjectRoleShrinkRequest request = CreateProjectRoleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasModulePermissions()) {
    request.setModulePermissionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getModulePermissions(), "ModulePermissions", "json"));
  }

  json query = {};
  if (!!request.hasModulePermissionsShrink()) {
    query["ModulePermissions"] = request.getModulePermissionsShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateProjectRole"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProjectRoleResponse>();
}

/**
 * @summary Creates a custom role for a workspace.
 *
 * @param request CreateProjectRoleRequest
 * @return CreateProjectRoleResponse
 */
CreateProjectRoleResponse Client::createProjectRole(const CreateProjectRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProjectRoleWithOptions(request, runtime);
}

/**
 * @summary \\\\> You cannot use this API operation to create multiple file resources at a time. If you specify multiple file resources by using FlowSpec, the system creates only the first specified resource.
 *
 * @description >Notice: 
 * This API does not support batch operations. If you define more than one resource file in the FlowSpec, all resource files except the first one are ignored.
 *
 * @param request CreateResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceResponse
 */
CreateResourceResponse Client::createResourceWithOptions(const CreateResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasResourceFile()) {
    body["ResourceFile"] = request.getResourceFile();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.getSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateResource"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceResponse>();
}

/**
 * @summary \\\\> You cannot use this API operation to create multiple file resources at a time. If you specify multiple file resources by using FlowSpec, the system creates only the first specified resource.
 *
 * @description >Notice: 
 * This API does not support batch operations. If you define more than one resource file in the FlowSpec, all resource files except the first one are ignored.
 *
 * @param request CreateResourceRequest
 * @return CreateResourceResponse
 */
CreateResourceResponse Client::createResource(const CreateResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createResourceWithOptions(request, runtime);
}

CreateResourceResponse Client::createResourceAdvance(const CreateResourceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "dataworks-public"},
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
  CreateResourceRequest createResourceReq = CreateResourceRequest();
  Utils::Utils::convert(request, createResourceReq);
  if (!!request.hasResourceFileObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getResourceFileObject()},
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
    createResourceReq.setResourceFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  CreateResourceResponse createResourceResp = createResourceWithOptions(createResourceReq, runtime);
  return createResourceResp;
}

/**
 * @summary Supports users in specifying their own files (such as JAR, PY, archive, or file) to create Data Development resource files.
 *
 * @param request CreateResourceFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceFileResponse
 */
CreateResourceFileResponse Client::createResourceFileWithOptions(const CreateResourceFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasFileDescription()) {
    body["FileDescription"] = request.getFileDescription();
  }

  if (!!request.hasFileFolderPath()) {
    body["FileFolderPath"] = request.getFileFolderPath();
  }

  if (!!request.hasFileName()) {
    body["FileName"] = request.getFileName();
  }

  if (!!request.hasFileType()) {
    body["FileType"] = request.getFileType();
  }

  if (!!request.hasOriginResourceName()) {
    body["OriginResourceName"] = request.getOriginResourceName();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.getOwner();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRegisterToCalcEngine()) {
    body["RegisterToCalcEngine"] = request.getRegisterToCalcEngine();
  }

  if (!!request.hasResourceFile()) {
    body["ResourceFile"] = request.getResourceFile();
  }

  if (!!request.hasStorageURL()) {
    body["StorageURL"] = request.getStorageURL();
  }

  if (!!request.hasUploadMode()) {
    body["UploadMode"] = request.getUploadMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateResourceFile"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceFileResponse>();
}

/**
 * @summary Supports users in specifying their own files (such as JAR, PY, archive, or file) to create Data Development resource files.
 *
 * @param request CreateResourceFileRequest
 * @return CreateResourceFileResponse
 */
CreateResourceFileResponse Client::createResourceFile(const CreateResourceFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createResourceFileWithOptions(request, runtime);
}

CreateResourceFileResponse Client::createResourceFileAdvance(const CreateResourceFileAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "dataworks-public"},
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
  CreateResourceFileRequest createResourceFileReq = CreateResourceFileRequest();
  Utils::Utils::convert(request, createResourceFileReq);
  if (!!request.hasResourceFileObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getResourceFileObject()},
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
    createResourceFileReq.setResourceFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  CreateResourceFileResponse createResourceFileResp = createResourceFileWithOptions(createResourceFileReq, runtime);
  return createResourceFileResp;
}

/**
 * @summary Creates a resource group.
 *
 * @description 1. You must purchase DataWorks Basic Edition or higher to use this operation.
 * 2. **Before you call this operation, make sure that you understand how general-purpose resource groups in DataWorks are billed and review the [pricing](https://help.aliyun.com/document_detail/2680173.html).**
 * 3. **Before you call this operation, make sure that you have created the AliyunServiceRoleForDataWorks service-linked role.**
 *
 * @param tmpReq CreateResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceGroupResponse
 */
CreateResourceGroupResponse Client::createResourceGroupWithOptions(const CreateResourceGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateResourceGroupShrinkRequest request = CreateResourceGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAliyunResourceTags()) {
    request.setAliyunResourceTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAliyunResourceTags(), "AliyunResourceTags", "json"));
  }

  json body = {};
  if (!!request.hasAliyunResourceGroupId()) {
    body["AliyunResourceGroupId"] = request.getAliyunResourceGroupId();
  }

  if (!!request.hasAliyunResourceTagsShrink()) {
    body["AliyunResourceTags"] = request.getAliyunResourceTagsShrink();
  }

  if (!!request.hasAutoRenewEnabled()) {
    body["AutoRenewEnabled"] = request.getAutoRenewEnabled();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPaymentDuration()) {
    body["PaymentDuration"] = request.getPaymentDuration();
  }

  if (!!request.hasPaymentDurationUnit()) {
    body["PaymentDurationUnit"] = request.getPaymentDurationUnit();
  }

  if (!!request.hasPaymentType()) {
    body["PaymentType"] = request.getPaymentType();
  }

  if (!!request.hasRemark()) {
    body["Remark"] = request.getRemark();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.getSpec();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.getVpcId();
  }

  if (!!request.hasVswitchId()) {
    body["VswitchId"] = request.getVswitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateResourceGroup"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceGroupResponse>();
}

/**
 * @summary Creates a resource group.
 *
 * @description 1. You must purchase DataWorks Basic Edition or higher to use this operation.
 * 2. **Before you call this operation, make sure that you understand how general-purpose resource groups in DataWorks are billed and review the [pricing](https://help.aliyun.com/document_detail/2680173.html).**
 * 3. **Before you call this operation, make sure that you have created the AliyunServiceRoleForDataWorks service-linked role.**
 *
 * @param request CreateResourceGroupRequest
 * @return CreateResourceGroupResponse
 */
CreateResourceGroupResponse Client::createResourceGroup(const CreateResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Creates a route for a network.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request CreateRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRouteResponse
 */
CreateRouteResponse Client::createRouteWithOptions(const CreateRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDestinationCidr()) {
    body["DestinationCidr"] = request.getDestinationCidr();
  }

  if (!!request.hasNetworkId()) {
    body["NetworkId"] = request.getNetworkId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateRoute"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRouteResponse>();
}

/**
 * @summary Creates a route for a network.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request CreateRouteRequest
 * @return CreateRouteResponse
 */
CreateRouteResponse Client::createRoute(const CreateRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRouteWithOptions(request, runtime);
}

/**
 * @summary Creates a new security control policy to configure various modules and submodules. Requires both DataWorks tenant administrator and security administrator permissions.
 *
 * @description ## Request
 * - **SchemaName**: Select a schema that fits your business needs.
 * - **ControlModule** and **ControlSubModule**: Specify the module and submodule for the policy, ensuring they match the selected schema.
 * - **ControlDwScope**: Set the policy scope to either the tenant or workspace level.
 * - **Workspaces**: If `ControlDwScope` is set to `Workspace`, provide the corresponding workspace IDs.
 * - **Content.Controllers**: The controllers must match the definitions in the selected schema.
 * - This operation cannot create system default policies.
 *
 * @param tmpReq CreateSecurityStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSecurityStrategyResponse
 */
CreateSecurityStrategyResponse Client::createSecurityStrategyWithOptions(const CreateSecurityStrategyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSecurityStrategyShrinkRequest request = CreateSecurityStrategyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContent()) {
    request.setContentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContent(), "Content", "json"));
  }

  if (!!tmpReq.hasWorkspaces()) {
    request.setWorkspacesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWorkspaces(), "Workspaces", "json"));
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasContentShrink()) {
    body["Content"] = request.getContentShrink();
  }

  if (!!request.hasControlDwScope()) {
    body["ControlDwScope"] = request.getControlDwScope();
  }

  if (!!request.hasControlModule()) {
    body["ControlModule"] = request.getControlModule();
  }

  if (!!request.hasControlSubModule()) {
    body["ControlSubModule"] = request.getControlSubModule();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSchemaName()) {
    body["SchemaName"] = request.getSchemaName();
  }

  if (!!request.hasWorkspacesShrink()) {
    body["Workspaces"] = request.getWorkspacesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateSecurityStrategy"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSecurityStrategyResponse>();
}

/**
 * @summary Creates a new security control policy to configure various modules and submodules. Requires both DataWorks tenant administrator and security administrator permissions.
 *
 * @description ## Request
 * - **SchemaName**: Select a schema that fits your business needs.
 * - **ControlModule** and **ControlSubModule**: Specify the module and submodule for the policy, ensuring they match the selected schema.
 * - **ControlDwScope**: Set the policy scope to either the tenant or workspace level.
 * - **Workspaces**: If `ControlDwScope` is set to `Workspace`, provide the corresponding workspace IDs.
 * - **Content.Controllers**: The controllers must match the definitions in the selected schema.
 * - This operation cannot create system default policies.
 *
 * @param request CreateSecurityStrategyRequest
 * @return CreateSecurityStrategyResponse
 */
CreateSecurityStrategyResponse Client::createSecurityStrategy(const CreateSecurityStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSecurityStrategyWithOptions(request, runtime);
}

/**
 * @summary 创建 Skill
 *
 * @description ## 请求说明
 * - `SkillMdOverride` 与 `BundleUrl` 参数二选一，必须提供其中之一。
 * - `Visibility` 可设置为 `TENANT`、`PROJECT` 或 `USER`，分别表示账号内可见、指定项目可见或指定用户可见。
 * - 当 `Visibility` 设置为 `PROJECT` 时，需要通过 `VisibilityScope.ProjectIds` 指定可见的项目 ID 列表；当设置为 `USER` 时，则需通过 `VisibilityScope.UserIds` 指定可见的用户 ID 列表。
 *
 * @param tmpReq CreateSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSkillResponse
 */
CreateSkillResponse Client::createSkillWithOptions(const CreateSkillRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSkillShrinkRequest request = CreateSkillShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExtra()) {
    request.setExtraShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExtra(), "Extra", "json"));
  }

  if (!!tmpReq.hasVisibilityScope()) {
    request.setVisibilityScopeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVisibilityScope(), "VisibilityScope", "json"));
  }

  json body = {};
  if (!!request.hasBundleUrl()) {
    body["BundleUrl"] = request.getBundleUrl();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasExtraShrink()) {
    body["Extra"] = request.getExtraShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSkillMdOverride()) {
    body["SkillMdOverride"] = request.getSkillMdOverride();
  }

  if (!!request.hasVersionNote()) {
    body["VersionNote"] = request.getVersionNote();
  }

  if (!!request.hasVisibility()) {
    body["Visibility"] = request.getVisibility();
  }

  if (!!request.hasVisibilityScopeShrink()) {
    body["VisibilityScope"] = request.getVisibilityScopeShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateSkill"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSkillResponse>();
}

/**
 * @summary 创建 Skill
 *
 * @description ## 请求说明
 * - `SkillMdOverride` 与 `BundleUrl` 参数二选一，必须提供其中之一。
 * - `Visibility` 可设置为 `TENANT`、`PROJECT` 或 `USER`，分别表示账号内可见、指定项目可见或指定用户可见。
 * - 当 `Visibility` 设置为 `PROJECT` 时，需要通过 `VisibilityScope.ProjectIds` 指定可见的项目 ID 列表；当设置为 `USER` 时，则需通过 `VisibilityScope.UserIds` 指定可见的用户 ID 列表。
 *
 * @param request CreateSkillRequest
 * @return CreateSkillResponse
 */
CreateSkillResponse Client::createSkill(const CreateSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSkillWithOptions(request, runtime);
}

/**
 * @summary Creates a file for a function in DataStudio.
 *
 * @param request CreateUdfFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUdfFileResponse
 */
CreateUdfFileResponse Client::createUdfFileWithOptions(const CreateUdfFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClassName()) {
    body["ClassName"] = request.getClassName();
  }

  if (!!request.hasCmdDescription()) {
    body["CmdDescription"] = request.getCmdDescription();
  }

  if (!!request.hasCreateFolderIfNotExists()) {
    body["CreateFolderIfNotExists"] = request.getCreateFolderIfNotExists();
  }

  if (!!request.hasExample()) {
    body["Example"] = request.getExample();
  }

  if (!!request.hasFileFolderPath()) {
    body["FileFolderPath"] = request.getFileFolderPath();
  }

  if (!!request.hasFileName()) {
    body["FileName"] = request.getFileName();
  }

  if (!!request.hasFunctionType()) {
    body["FunctionType"] = request.getFunctionType();
  }

  if (!!request.hasParameterDescription()) {
    body["ParameterDescription"] = request.getParameterDescription();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  if (!!request.hasResources()) {
    body["Resources"] = request.getResources();
  }

  if (!!request.hasReturnValue()) {
    body["ReturnValue"] = request.getReturnValue();
  }

  if (!!request.hasUdfDescription()) {
    body["UdfDescription"] = request.getUdfDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateUdfFile"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUdfFileResponse>();
}

/**
 * @summary Creates a file for a function in DataStudio.
 *
 * @param request CreateUdfFileRequest
 * @return CreateUdfFileResponse
 */
CreateUdfFileResponse Client::createUdfFile(const CreateUdfFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUdfFileWithOptions(request, runtime);
}

/**
 * @summary Creates a workflow in a directory of DataStudio.
 *
 * @description >Notice: 
 * This API does not support batch operations. If you define more than one workflow definition in the FlowSpec, all workflow definitions except the first one are ignored. In addition, nodes defined within the workflow definition are also ignored. Call the CreateNode API to create internal nodes one by one.
 *
 * @param request CreateWorkflowDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkflowDefinitionResponse
 */
CreateWorkflowDefinitionResponse Client::createWorkflowDefinitionWithOptions(const CreateWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.getSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateWorkflowDefinition"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkflowDefinitionResponse>();
}

/**
 * @summary Creates a workflow in a directory of DataStudio.
 *
 * @description >Notice: 
 * This API does not support batch operations. If you define more than one workflow definition in the FlowSpec, all workflow definitions except the first one are ignored. In addition, nodes defined within the workflow definition are also ignored. Call the CreateNode API to create internal nodes one by one.
 *
 * @param request CreateWorkflowDefinitionRequest
 * @return CreateWorkflowDefinitionResponse
 */
CreateWorkflowDefinitionResponse Client::createWorkflowDefinition(const CreateWorkflowDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWorkflowDefinitionWithOptions(request, runtime);
}

/**
 * @summary Creates a workflow instance, such as a data backfill workflow instance, based on configurations.
 *
 * @description DataWorks Basic Edition or higher is required.
 *
 * @param tmpReq CreateWorkflowInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkflowInstancesResponse
 */
CreateWorkflowInstancesResponse Client::createWorkflowInstancesWithOptions(const CreateWorkflowInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWorkflowInstancesShrinkRequest request = CreateWorkflowInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDefaultRunProperties()) {
    request.setDefaultRunPropertiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDefaultRunProperties(), "DefaultRunProperties", "json"));
  }

  if (!!tmpReq.hasPeriods()) {
    request.setPeriodsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPeriods(), "Periods", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json body = {};
  if (!!request.hasAutoStartEnabled()) {
    body["AutoStartEnabled"] = request.getAutoStartEnabled();
  }

  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasDefaultRunPropertiesShrink()) {
    body["DefaultRunProperties"] = request.getDefaultRunPropertiesShrink();
  }

  if (!!request.hasEnvType()) {
    body["EnvType"] = request.getEnvType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPeriodsShrink()) {
    body["Periods"] = request.getPeriodsShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasTagCreationPolicy()) {
    body["TagCreationPolicy"] = request.getTagCreationPolicy();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasTaskParameters()) {
    body["TaskParameters"] = request.getTaskParameters();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasWorkflowId()) {
    body["WorkflowId"] = request.getWorkflowId();
  }

  if (!!request.hasWorkflowParameters()) {
    body["WorkflowParameters"] = request.getWorkflowParameters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateWorkflowInstances"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateWorkflowInstancesResponse>();
}

/**
 * @summary Creates a workflow instance, such as a data backfill workflow instance, based on configurations.
 *
 * @description DataWorks Basic Edition or higher is required.
 *
 * @param request CreateWorkflowInstancesRequest
 * @return CreateWorkflowInstancesResponse
 */
CreateWorkflowInstancesResponse Client::createWorkflowInstances(const CreateWorkflowInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWorkflowInstancesWithOptions(request, runtime);
}

/**
 * @summary 删除 Agent
 *
 * @description ## 请求说明
 * 该 API 用于从 DataWorks 中删除指定名称的 Agent。调用此接口时，必须提供要删除的 Agent 的名称。
 *
 * @param request DeleteAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAgentResponse
 */
DeleteAgentResponse Client::deleteAgentWithOptions(const DeleteAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteAgent"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAgentResponse>();
}

/**
 * @summary 删除 Agent
 *
 * @description ## 请求说明
 * 该 API 用于从 DataWorks 中删除指定名称的 Agent。调用此接口时，必须提供要删除的 Agent 的名称。
 *
 * @param request DeleteAgentRequest
 * @return DeleteAgentResponse
 */
DeleteAgentResponse Client::deleteAgent(const DeleteAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAgentWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom monitoring alert rule.
 *
 * @param request DeleteAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAlertRuleResponse
 */
DeleteAlertRuleResponse Client::deleteAlertRuleWithOptions(const DeleteAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteAlertRule"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAlertRuleResponse>();
}

/**
 * @summary Deletes a custom monitoring alert rule.
 *
 * @param request DeleteAlertRuleRequest
 * @return DeleteAlertRuleResponse
 */
DeleteAlertRuleResponse Client::deleteAlertRule(const DeleteAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAlertRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a workflow.
 *
 * @param request DeleteBusinessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBusinessResponse
 */
DeleteBusinessResponse Client::deleteBusinessWithOptions(const DeleteBusinessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessId()) {
    body["BusinessId"] = request.getBusinessId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteBusiness"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBusinessResponse>();
}

/**
 * @summary Deletes a workflow.
 *
 * @param request DeleteBusinessRequest
 * @return DeleteBusinessResponse
 */
DeleteBusinessResponse Client::deleteBusiness(const DeleteBusinessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBusinessWithOptions(request, runtime);
}

/**
 * @summary Deletes a certificate file.
 *
 * @description 1. This operation requires DataWorks Basic Edition or a later version.
 * 2. This operation requires one of the following roles in the DataWorks workspace: Tenant Owner, Workspace Administrator, Project Owner, or O\\&M.
 *
 * @param request DeleteCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCertificateResponse
 */
DeleteCertificateResponse Client::deleteCertificateWithOptions(const DeleteCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCertificate"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCertificateResponse>();
}

/**
 * @summary Deletes a certificate file.
 *
 * @description 1. This operation requires DataWorks Basic Edition or a later version.
 * 2. This operation requires one of the following roles in the DataWorks workspace: Tenant Owner, Workspace Administrator, Project Owner, or O\\&M.
 *
 * @param request DeleteCertificateRequest
 * @return DeleteCertificateResponse
 */
DeleteCertificateResponse Client::deleteCertificate(const DeleteCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCertificateWithOptions(request, runtime);
}

/**
 * @summary Deletes a component.
 *
 * @description >Notice: 
 * After a UDF is published, it cannot be deleted. You must unpublish the UDF before you can delete it.
 *
 * @param request DeleteComponentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteComponentResponse
 */
DeleteComponentResponse Client::deleteComponentWithOptions(const DeleteComponentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComponentId()) {
    body["ComponentId"] = request.getComponentId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteComponent"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteComponentResponse>();
}

/**
 * @summary Deletes a component.
 *
 * @description >Notice: 
 * After a UDF is published, it cannot be deleted. You must unpublish the UDF before you can delete it.
 *
 * @param request DeleteComponentRequest
 * @return DeleteComponentResponse
 */
DeleteComponentResponse Client::deleteComponent(const DeleteComponentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteComponentWithOptions(request, runtime);
}

/**
 * @summary Deletes the specified computing resource based on the computing resource ID.
 *
 * @description 1. DataWorks Basic Edition or a more advanced edition is required.
 * 2. You must have at least one of the following roles in the DataWorks workspace:
 * 3. Tenant Owner, Workspace Administrator, Project Owner, O\\&M
 *
 * @param request DeleteComputeResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteComputeResourceResponse
 */
DeleteComputeResourceResponse Client::deleteComputeResourceWithOptions(const DeleteComputeResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteComputeResource"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteComputeResourceResponse>();
}

/**
 * @summary Deletes the specified computing resource based on the computing resource ID.
 *
 * @description 1. DataWorks Basic Edition or a more advanced edition is required.
 * 2. You must have at least one of the following roles in the DataWorks workspace:
 * 3. Tenant Owner, Workspace Administrator, Project Owner, O\\&M
 *
 * @param request DeleteComputeResourceRequest
 * @return DeleteComputeResourceResponse
 */
DeleteComputeResourceResponse Client::deleteComputeResource(const DeleteComputeResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteComputeResourceWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom attribute definition.
 *
 * @param request DeleteCustomAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomAttributeResponse
 */
DeleteCustomAttributeResponse Client::deleteCustomAttributeWithOptions(const DeleteCustomAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomAttribute"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomAttributeResponse>();
}

/**
 * @summary Deletes a custom attribute definition.
 *
 * @param request DeleteCustomAttributeRequest
 * @return DeleteCustomAttributeResponse
 */
DeleteCustomAttributeResponse Client::deleteCustomAttribute(const DeleteCustomAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomAttributeWithOptions(request, runtime);
}

/**
 * @summary Deletes an alert rule configured for a synchronization task.
 *
 * @param request DeleteDIAlarmRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDIAlarmRuleResponse
 */
DeleteDIAlarmRuleResponse Client::deleteDIAlarmRuleWithOptions(const DeleteDIAlarmRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDIAlarmRule"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDIAlarmRuleResponse>();
}

/**
 * @summary Deletes an alert rule configured for a synchronization task.
 *
 * @param request DeleteDIAlarmRuleRequest
 * @return DeleteDIAlarmRuleResponse
 */
DeleteDIAlarmRuleResponse Client::deleteDIAlarmRule(const DeleteDIAlarmRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDIAlarmRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a new-version synchronization task.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request DeleteDIJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDIJobResponse
 */
DeleteDIJobResponse Client::deleteDIJobWithOptions(const DeleteDIJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDIJob"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDIJobResponse>();
}

/**
 * @summary Deletes a new-version synchronization task.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request DeleteDIJobRequest
 * @return DeleteDIJobResponse
 */
DeleteDIJobResponse Client::deleteDIJob(const DeleteDIJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDIJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a tag.
 *
 * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
 *
 * @param tmpReq DeleteDataAssetTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataAssetTagResponse
 */
DeleteDataAssetTagResponse Client::deleteDataAssetTagWithOptions(const DeleteDataAssetTagRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteDataAssetTagShrinkRequest request = DeleteDataAssetTagShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasValues()) {
    request.setValuesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getValues(), "Values", "json"));
  }

  json query = {};
  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasValuesShrink()) {
    query["Values"] = request.getValuesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataAssetTag"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataAssetTagResponse>();
}

/**
 * @summary Deletes a tag.
 *
 * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
 *
 * @param request DeleteDataAssetTagRequest
 * @return DeleteDataAssetTagResponse
 */
DeleteDataAssetTagResponse Client::deleteDataAssetTag(const DeleteDataAssetTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataAssetTagWithOptions(request, runtime);
}

/**
 * @summary Deletes a data quality alert rule by ID.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request DeleteDataQualityAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataQualityAlertRuleResponse
 */
DeleteDataQualityAlertRuleResponse Client::deleteDataQualityAlertRuleWithOptions(const DeleteDataQualityAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDataQualityAlertRule"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataQualityAlertRuleResponse>();
}

/**
 * @summary Deletes a data quality alert rule by ID.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request DeleteDataQualityAlertRuleRequest
 * @return DeleteDataQualityAlertRuleResponse
 */
DeleteDataQualityAlertRuleResponse Client::deleteDataQualityAlertRule(const DeleteDataQualityAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataQualityAlertRuleWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DeleteDataQualityEvaluationTask is deprecated, please use dataworks-public::2024-05-18::DeleteDataQualityScan instead.
 *
 * @summary Deletes a data quality monitoring task.
 *
 * @description You must purchase DataWorks Basic Edition or higher to use this feature.
 *
 * @param request DeleteDataQualityEvaluationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataQualityEvaluationTaskResponse
 */
DeleteDataQualityEvaluationTaskResponse Client::deleteDataQualityEvaluationTaskWithOptions(const DeleteDataQualityEvaluationTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataQualityEvaluationTask"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataQualityEvaluationTaskResponse>();
}

/**
 * @deprecated OpenAPI DeleteDataQualityEvaluationTask is deprecated, please use dataworks-public::2024-05-18::DeleteDataQualityScan instead.
 *
 * @summary Deletes a data quality monitoring task.
 *
 * @description You must purchase DataWorks Basic Edition or higher to use this feature.
 *
 * @param request DeleteDataQualityEvaluationTaskRequest
 * @return DeleteDataQualityEvaluationTaskResponse
 */
DeleteDataQualityEvaluationTaskResponse Client::deleteDataQualityEvaluationTask(const DeleteDataQualityEvaluationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataQualityEvaluationTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes a data quality monitoring rule.
 *
 * @param request DeleteDataQualityRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataQualityRuleResponse
 */
DeleteDataQualityRuleResponse Client::deleteDataQualityRuleWithOptions(const DeleteDataQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataQualityRule"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataQualityRuleResponse>();
}

/**
 * @summary Deletes a data quality monitoring rule.
 *
 * @param request DeleteDataQualityRuleRequest
 * @return DeleteDataQualityRuleResponse
 */
DeleteDataQualityRuleResponse Client::deleteDataQualityRule(const DeleteDataQualityRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataQualityRuleWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DeleteDataQualityRuleTemplate is deprecated, please use dataworks-public::2024-05-18::DeleteDataQualityTemplate instead.
 *
 * @summary Deletes a custom data quality rule template.
 *
 * @description You must purchase DataWorks Basic Edition or a higher edition to use this operation.
 *
 * @param request DeleteDataQualityRuleTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataQualityRuleTemplateResponse
 */
DeleteDataQualityRuleTemplateResponse Client::deleteDataQualityRuleTemplateWithOptions(const DeleteDataQualityRuleTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.getCode();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataQualityRuleTemplate"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataQualityRuleTemplateResponse>();
}

/**
 * @deprecated OpenAPI DeleteDataQualityRuleTemplate is deprecated, please use dataworks-public::2024-05-18::DeleteDataQualityTemplate instead.
 *
 * @summary Deletes a custom data quality rule template.
 *
 * @description You must purchase DataWorks Basic Edition or a higher edition to use this operation.
 *
 * @param request DeleteDataQualityRuleTemplateRequest
 * @return DeleteDataQualityRuleTemplateResponse
 */
DeleteDataQualityRuleTemplateResponse Client::deleteDataQualityRuleTemplate(const DeleteDataQualityRuleTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataQualityRuleTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a data quality monitor.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request DeleteDataQualityScanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataQualityScanResponse
 */
DeleteDataQualityScanResponse Client::deleteDataQualityScanWithOptions(const DeleteDataQualityScanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDataQualityScan"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataQualityScanResponse>();
}

/**
 * @summary Deletes a data quality monitor.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request DeleteDataQualityScanRequest
 * @return DeleteDataQualityScanResponse
 */
DeleteDataQualityScanResponse Client::deleteDataQualityScan(const DeleteDataQualityScanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataQualityScanWithOptions(request, runtime);
}

/**
 * @summary Deletes a data quality rule template by ID.
 *
 * @description ## Request description
 * - **Id**: The unique identifier of a custom rule template, in the format of `USER_DEFINED:<template_id>`.
 * - **ProjectId**: The ID of the DataWorks workspace to which the rule template belongs.
 * This operation removes a data quality rule template that is no longer needed. Make sure that the `Id` and `ProjectId` values are correct. Otherwise, the deletion may fail or cause unexpected data loss. Exercise caution when performing this operation and verify the template information before proceeding.
 *
 * @param request DeleteDataQualityTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataQualityTemplateResponse
 */
DeleteDataQualityTemplateResponse Client::deleteDataQualityTemplateWithOptions(const DeleteDataQualityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDataQualityTemplate"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataQualityTemplateResponse>();
}

/**
 * @summary Deletes a data quality rule template by ID.
 *
 * @description ## Request description
 * - **Id**: The unique identifier of a custom rule template, in the format of `USER_DEFINED:<template_id>`.
 * - **ProjectId**: The ID of the DataWorks workspace to which the rule template belongs.
 * This operation removes a data quality rule template that is no longer needed. Make sure that the `Id` and `ProjectId` values are correct. Otherwise, the deletion may fail or cause unexpected data loss. Exercise caution when performing this operation and verify the template information before proceeding.
 *
 * @param request DeleteDataQualityTemplateRequest
 * @return DeleteDataQualityTemplateResponse
 */
DeleteDataQualityTemplateResponse Client::deleteDataQualityTemplate(const DeleteDataQualityTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataQualityTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a data source by data source ID.
 *
 * @description 1. This operation is available for all DataWorks editions.
 * 2. To call this operation, you must have one of the following roles in DataWorks:
 * - Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
 *
 * @param request DeleteDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataSourceResponse
 */
DeleteDataSourceResponse Client::deleteDataSourceWithOptions(const DeleteDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataSource"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataSourceResponse>();
}

/**
 * @summary Deletes a data source by data source ID.
 *
 * @description 1. This operation is available for all DataWorks editions.
 * 2. To call this operation, you must have one of the following roles in DataWorks:
 * - Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
 *
 * @param request DeleteDataSourceRequest
 * @return DeleteDataSourceResponse
 */
DeleteDataSourceResponse Client::deleteDataSource(const DeleteDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataSourceWithOptions(request, runtime);
}

/**
 * @summary Deletes a data source sharing rule by rule ID.
 *
 * @description 1. This operation is available for all DataWorks editions.
 * 2. To delete a sharing rule of a data source from Workspace A to Workspace B, you must have the data source sharing permissions in Workspace A or Workspace B. You must have one of the following roles in DataWorks:
 * - Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
 *
 * @param request DeleteDataSourceSharedRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataSourceSharedRuleResponse
 */
DeleteDataSourceSharedRuleResponse Client::deleteDataSourceSharedRuleWithOptions(const DeleteDataSourceSharedRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataSourceSharedRule"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataSourceSharedRuleResponse>();
}

/**
 * @summary Deletes a data source sharing rule by rule ID.
 *
 * @description 1. This operation is available for all DataWorks editions.
 * 2. To delete a sharing rule of a data source from Workspace A to Workspace B, you must have the data source sharing permissions in Workspace A or Workspace B. You must have one of the following roles in DataWorks:
 * - Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
 *
 * @param request DeleteDataSourceSharedRuleRequest
 * @return DeleteDataSourceSharedRuleResponse
 */
DeleteDataSourceSharedRuleResponse Client::deleteDataSourceSharedRule(const DeleteDataSourceSharedRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataSourceSharedRuleWithOptions(request, runtime);
}

/**
 * @summary Delete a dataset. Only DataWorks datasets are supported. This operation cascades to delete all associated dataset versions. Requires dataset creator or workspace administrator permissions.
 *
 * @param request DeleteDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatasetResponse
 */
DeleteDatasetResponse Client::deleteDatasetWithOptions(const DeleteDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataset"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatasetResponse>();
}

/**
 * @summary Delete a dataset. Only DataWorks datasets are supported. This operation cascades to delete all associated dataset versions. Requires dataset creator or workspace administrator permissions.
 *
 * @param request DeleteDatasetRequest
 * @return DeleteDatasetResponse
 */
DeleteDatasetResponse Client::deleteDataset(const DeleteDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDatasetWithOptions(request, runtime);
}

/**
 * @summary Deletes a dataset version. Only non-v1 DataWorks datasets are supported. To delete v1 datasets, use the DeleteDataset operation. Requires dataset creator or workspace administrator permissions.
 *
 * @param request DeleteDatasetVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatasetVersionResponse
 */
DeleteDatasetVersionResponse Client::deleteDatasetVersionWithOptions(const DeleteDatasetVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDatasetVersion"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatasetVersionResponse>();
}

/**
 * @summary Deletes a dataset version. Only non-v1 DataWorks datasets are supported. To delete v1 datasets, use the DeleteDataset operation. Requires dataset creator or workspace administrator permissions.
 *
 * @param request DeleteDatasetVersionRequest
 * @return DeleteDatasetVersionResponse
 */
DeleteDatasetVersionResponse Client::deleteDatasetVersion(const DeleteDatasetVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDatasetVersionWithOptions(request, runtime);
}

/**
 * @summary Deletes a file from DataStudio. If the file has been committed, an asynchronous process is triggered to delete the file in the scheduling system. The value of the DeploymentId parameter returned is used to call the GetDeployment operation to poll the status of the asynchronous process.
 *
 * @param request DeleteFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFileResponse
 */
DeleteFileResponse Client::deleteFileWithOptions(const DeleteFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileId()) {
    body["FileId"] = request.getFileId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteFile"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFileResponse>();
}

/**
 * @summary Deletes a file from DataStudio. If the file has been committed, an asynchronous process is triggered to delete the file in the scheduling system. The value of the DeploymentId parameter returned is used to call the GetDeployment operation to poll the status of the asynchronous process.
 *
 * @param request DeleteFileRequest
 * @return DeleteFileResponse
 */
DeleteFileResponse Client::deleteFile(const DeleteFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFileWithOptions(request, runtime);
}

/**
 * @summary Invoke DeleteFolder to delete a folder on the Data Development page.
 *
 * @param request DeleteFolderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFolderResponse
 */
DeleteFolderResponse Client::deleteFolderWithOptions(const DeleteFolderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFolderId()) {
    body["FolderId"] = request.getFolderId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteFolder"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFolderResponse>();
}

/**
 * @summary Invoke DeleteFolder to delete a folder on the Data Development page.
 *
 * @param request DeleteFolderRequest
 * @return DeleteFolderResponse
 */
DeleteFolderResponse Client::deleteFolder(const DeleteFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFolderWithOptions(request, runtime);
}

/**
 * @summary Deletes a user-defined function (UDF) in DataStudio.
 *
 * @description >Notice: 
 * After a UDF is published, it cannot be deleted. You must unpublish the UDF before you can delete it.
 *
 * @param request DeleteFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFunctionResponse
 */
DeleteFunctionResponse Client::deleteFunctionWithOptions(const DeleteFunctionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteFunction"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFunctionResponse>();
}

/**
 * @summary Deletes a user-defined function (UDF) in DataStudio.
 *
 * @description >Notice: 
 * After a UDF is published, it cannot be deleted. You must unpublish the UDF before you can delete it.
 *
 * @param request DeleteFunctionRequest
 * @return DeleteFunctionResponse
 */
DeleteFunctionResponse Client::deleteFunction(const DeleteFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFunctionWithOptions(request, runtime);
}

/**
 * @summary Deletes a lineage in Data Map.
 *
 * @description 1. DataWorks Professional Edition or a higher edition is required.
 *
 * @param request DeleteLineageRelationshipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLineageRelationshipResponse
 */
DeleteLineageRelationshipResponse Client::deleteLineageRelationshipWithOptions(const DeleteLineageRelationshipRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteLineageRelationship"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLineageRelationshipResponse>();
}

/**
 * @summary Deletes a lineage in Data Map.
 *
 * @description 1. DataWorks Professional Edition or a higher edition is required.
 *
 * @param request DeleteLineageRelationshipRequest
 * @return DeleteLineageRelationshipResponse
 */
DeleteLineageRelationshipResponse Client::deleteLineageRelationship(const DeleteLineageRelationshipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLineageRelationshipWithOptions(request, runtime);
}

/**
 * @summary Delete MCP Server
 *
 * @description ## Request Description
 * This API allows you to delete the corresponding MCP Server instance based on the provided MCP Server name. Make sure you have the appropriate permissions and verify that the MCP Server name to be deleted is correct before calling.
 * ### Notes
 * - The deletion operation is irreversible. Proceed with caution.
 * - Ensure that you have sufficient permissions (`dataworks:DeleteMcpServer`) to perform this operation.
 *
 * @param request DeleteMcpServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMcpServerResponse
 */
DeleteMcpServerResponse Client::deleteMcpServerWithOptions(const DeleteMcpServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteMcpServer"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMcpServerResponse>();
}

/**
 * @summary Delete MCP Server
 *
 * @description ## Request Description
 * This API allows you to delete the corresponding MCP Server instance based on the provided MCP Server name. Make sure you have the appropriate permissions and verify that the MCP Server name to be deleted is correct before calling.
 * ### Notes
 * - The deletion operation is irreversible. Proceed with caution.
 * - Ensure that you have sufficient permissions (`dataworks:DeleteMcpServer`) to perform this operation.
 *
 * @param request DeleteMcpServerRequest
 * @return DeleteMcpServerResponse
 */
DeleteMcpServerResponse Client::deleteMcpServer(const DeleteMcpServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMcpServerWithOptions(request, runtime);
}

/**
 * @summary Delete a collection object in the specified Data Map, including Data Map categories and data albums.
 * When deleting a data album, the caller must have the AliyunDataWorksFullAccess permission or be the creator or administrator of the album.
 *
 * @description 1. You must purchase DataWorks Professional Edition or a higher edition to use this feature.
 *
 * @param request DeleteMetaCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMetaCollectionResponse
 */
DeleteMetaCollectionResponse Client::deleteMetaCollectionWithOptions(const DeleteMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMetaCollection"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMetaCollectionResponse>();
}

/**
 * @summary Delete a collection object in the specified Data Map, including Data Map categories and data albums.
 * When deleting a data album, the caller must have the AliyunDataWorksFullAccess permission or be the creator or administrator of the album.
 *
 * @description 1. You must purchase DataWorks Professional Edition or a higher edition to use this feature.
 *
 * @param request DeleteMetaCollectionRequest
 * @return DeleteMetaCollectionResponse
 */
DeleteMetaCollectionResponse Client::deleteMetaCollection(const DeleteMetaCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMetaCollectionWithOptions(request, runtime);
}

/**
 * @summary 删除自定义实体定义
 *
 * @description 需要购买 DataWorks 专业版及以上版本才能使用。
 *
 * @param request DeleteMetaEntityDefRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMetaEntityDefResponse
 */
DeleteMetaEntityDefResponse Client::deleteMetaEntityDefWithOptions(const DeleteMetaEntityDefRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEntityType()) {
    body["EntityType"] = request.getEntityType();
  }

  if (!!request.hasForce()) {
    body["Force"] = request.getForce();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteMetaEntityDef"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMetaEntityDefResponse>();
}

/**
 * @summary 删除自定义实体定义
 *
 * @description 需要购买 DataWorks 专业版及以上版本才能使用。
 *
 * @param request DeleteMetaEntityDefRequest
 * @return DeleteMetaEntityDefResponse
 */
DeleteMetaEntityDefResponse Client::deleteMetaEntityDef(const DeleteMetaEntityDefRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMetaEntityDefWithOptions(request, runtime);
}

/**
 * @summary Disassociates and deletes a network from a general resource group.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request DeleteNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNetworkResponse
 */
DeleteNetworkResponse Client::deleteNetworkWithOptions(const DeleteNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteNetwork"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNetworkResponse>();
}

/**
 * @summary Disassociates and deletes a network from a general resource group.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request DeleteNetworkRequest
 * @return DeleteNetworkResponse
 */
DeleteNetworkResponse Client::deleteNetwork(const DeleteNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNetworkWithOptions(request, runtime);
}

/**
 * @summary Deletes a node from DataStudio.
 *
 * @description >Notice: 
 * After a node is published, it cannot be deleted. You must unpublish the node before you can delete it.
 *
 * @param request DeleteNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNodeResponse
 */
DeleteNodeResponse Client::deleteNodeWithOptions(const DeleteNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteNode"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNodeResponse>();
}

/**
 * @summary Deletes a node from DataStudio.
 *
 * @description >Notice: 
 * After a node is published, it cannot be deleted. You must unpublish the node before you can delete it.
 *
 * @param request DeleteNodeRequest
 * @return DeleteNodeResponse
 */
DeleteNodeResponse Client::deleteNode(const DeleteNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNodeWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified parameter.
 *
 * @description This operation is available only in DataWorks professional edition and later versions.
 *
 * @param request DeleteParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteParameterResponse
 */
DeleteParameterResponse Client::deleteParameterWithOptions(const DeleteParameterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteParameter"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteParameterResponse>();
}

/**
 * @summary Deletes a specified parameter.
 *
 * @description This operation is available only in DataWorks professional edition and later versions.
 *
 * @param request DeleteParameterRequest
 * @return DeleteParameterResponse
 */
DeleteParameterResponse Client::deleteParameter(const DeleteParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteParameterWithOptions(request, runtime);
}

/**
 * @summary Deletes a process definition by the specified ID.
 *
 * @description ## Description
 * - This API deletes a process definition by its ID.
 * - This operation is irreversible. Proceed with caution.
 * - Before calling this API, back up relevant data or confirm that the process definition is no longer required.
 *
 * @param request DeleteProcessDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProcessDefinitionResponse
 */
DeleteProcessDefinitionResponse Client::deleteProcessDefinitionWithOptions(const DeleteProcessDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteProcessDefinition"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProcessDefinitionResponse>();
}

/**
 * @summary Deletes a process definition by the specified ID.
 *
 * @description ## Description
 * - This API deletes a process definition by its ID.
 * - This operation is irreversible. Proceed with caution.
 * - Before calling this API, back up relevant data or confirm that the process definition is no longer required.
 *
 * @param request DeleteProcessDefinitionRequest
 * @return DeleteProcessDefinitionResponse
 */
DeleteProcessDefinitionResponse Client::deleteProcessDefinition(const DeleteProcessDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProcessDefinitionWithOptions(request, runtime);
}

/**
 * @summary Deletes a DataWorks workspace.
 *
 * @description To call this API, you must purchase DataWorks Basic Edition or a higher edition.
 * Note: When you delete a workspace, the system moves it to the Recycle Bin. After a 14-day retention period, the system permanently purges the workspace. During this time, you cannot create a new workspace with the same name. You can find the deleted workspace in the Recycle Bin on the Workspace page in the console.
 *
 * @param request DeleteProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProjectWithOptions(const DeleteProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteProject"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProjectResponse>();
}

/**
 * @summary Deletes a DataWorks workspace.
 *
 * @description To call this API, you must purchase DataWorks Basic Edition or a higher edition.
 * Note: When you delete a workspace, the system moves it to the Recycle Bin. After a 14-day retention period, the system permanently purges the workspace. During this time, you cannot create a new workspace with the same name. You can find the deleted workspace in the Recycle Bin on the Workspace page in the console.
 *
 * @param request DeleteProjectRequest
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProject(const DeleteProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProjectWithOptions(request, runtime);
}

/**
 * @summary Removes a workspace member and the workspace-level roles that are assigned to the member.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request DeleteProjectMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProjectMemberResponse
 */
DeleteProjectMemberResponse Client::deleteProjectMemberWithOptions(const DeleteProjectMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteProjectMember"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProjectMemberResponse>();
}

/**
 * @summary Removes a workspace member and the workspace-level roles that are assigned to the member.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request DeleteProjectMemberRequest
 * @return DeleteProjectMemberResponse
 */
DeleteProjectMemberResponse Client::deleteProjectMember(const DeleteProjectMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProjectMemberWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom role from a workspace.
 *
 * @param request DeleteProjectRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProjectRoleResponse
 */
DeleteProjectRoleResponse Client::deleteProjectRoleWithOptions(const DeleteProjectRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.getCode();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProjectRole"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProjectRoleResponse>();
}

/**
 * @summary Deletes a custom role from a workspace.
 *
 * @param request DeleteProjectRoleRequest
 * @return DeleteProjectRoleResponse
 */
DeleteProjectRoleResponse Client::deleteProjectRole(const DeleteProjectRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProjectRoleWithOptions(request, runtime);
}

/**
 * @summary Deletes a file resource from DataStudio.
 *
 * @description >Notice: 
 * After a file resource is published, it cannot be deleted. You must unpublish the file resource before you can delete it.
 *
 * @param request DeleteResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceResponse
 */
DeleteResourceResponse Client::deleteResourceWithOptions(const DeleteResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteResource"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceResponse>();
}

/**
 * @summary Deletes a file resource from DataStudio.
 *
 * @description >Notice: 
 * After a file resource is published, it cannot be deleted. You must unpublish the file resource before you can delete it.
 *
 * @param request DeleteResourceRequest
 * @return DeleteResourceResponse
 */
DeleteResourceResponse Client::deleteResource(const DeleteResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteResourceWithOptions(request, runtime);
}

/**
 * @summary Deletes a resource group.
 *
 * @description 1. This operation requires DataWorks Basic Edition or a later version.
 * 2. **Before you use this operation, ensure you understand the billing method and [pricing](https://help.aliyun.com/document_detail/2680173.html) for DataWorks resource groups.**
 * 3. **Before you use this operation, ensure you have created the Service-Linked Role AliyunServiceRoleForDataWorks.**
 *
 * @param request DeleteResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceGroupResponse
 */
DeleteResourceGroupResponse Client::deleteResourceGroupWithOptions(const DeleteResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteResourceGroup"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceGroupResponse>();
}

/**
 * @summary Deletes a resource group.
 *
 * @description 1. This operation requires DataWorks Basic Edition or a later version.
 * 2. **Before you use this operation, ensure you understand the billing method and [pricing](https://help.aliyun.com/document_detail/2680173.html) for DataWorks resource groups.**
 * 3. **Before you use this operation, ensure you have created the Service-Linked Role AliyunServiceRoleForDataWorks.**
 *
 * @param request DeleteResourceGroupRequest
 * @return DeleteResourceGroupResponse
 */
DeleteResourceGroupResponse Client::deleteResourceGroup(const DeleteResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes a route from a network resource.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request DeleteRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRouteResponse
 */
DeleteRouteResponse Client::deleteRouteWithOptions(const DeleteRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteRoute"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRouteResponse>();
}

/**
 * @summary Deletes a route from a network resource.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request DeleteRouteRequest
 * @return DeleteRouteResponse
 */
DeleteRouteResponse Client::deleteRoute(const DeleteRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRouteWithOptions(request, runtime);
}

/**
 * @summary Deletes a security strategy by its ID. To call this operation, you must have DataWorks tenant administrator and security administrator permissions.
 *
 * @description ## Usage notes
 * - You can delete a security strategy by providing its ID.
 * - You cannot delete a system strategy.
 *
 * @param request DeleteSecurityStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSecurityStrategyResponse
 */
DeleteSecurityStrategyResponse Client::deleteSecurityStrategyWithOptions(const DeleteSecurityStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteSecurityStrategy"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSecurityStrategyResponse>();
}

/**
 * @summary Deletes a security strategy by its ID. To call this operation, you must have DataWorks tenant administrator and security administrator permissions.
 *
 * @description ## Usage notes
 * - You can delete a security strategy by providing its ID.
 * - You cannot delete a system strategy.
 *
 * @param request DeleteSecurityStrategyRequest
 * @return DeleteSecurityStrategyResponse
 */
DeleteSecurityStrategyResponse Client::deleteSecurityStrategy(const DeleteSecurityStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSecurityStrategyWithOptions(request, runtime);
}

/**
 * @summary Delete Skill
 *
 * @description ## Request Description
 * This API is used to delete a Skill with the specified name from DataWorks. The exact name of the Skill to delete must be provided when invoking this API.
 * ### Notes
 * - Ensure that you have sufficient permissions to perform the delete operation.
 * - The delete operation is irreversible. Use it with caution.
 *
 * @param request DeleteSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSkillResponse
 */
DeleteSkillResponse Client::deleteSkillWithOptions(const DeleteSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteSkill"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSkillResponse>();
}

/**
 * @summary Delete Skill
 *
 * @description ## Request Description
 * This API is used to delete a Skill with the specified name from DataWorks. The exact name of the Skill to delete must be provided when invoking this API.
 * ### Notes
 * - Ensure that you have sufficient permissions to perform the delete operation.
 * - The delete operation is irreversible. Use it with caution.
 *
 * @param request DeleteSkillRequest
 * @return DeleteSkillResponse
 */
DeleteSkillResponse Client::deleteSkill(const DeleteSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSkillWithOptions(request, runtime);
}

/**
 * @summary Deletes a task.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request DeleteTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTaskResponse
 */
DeleteTaskResponse Client::deleteTaskWithOptions(const DeleteTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasProjectEnv()) {
    query["ProjectEnv"] = request.getProjectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTask"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTaskResponse>();
}

/**
 * @summary Deletes a task.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request DeleteTaskRequest
 * @return DeleteTaskResponse
 */
DeleteTaskResponse Client::deleteTask(const DeleteTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes a workflow.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request DeleteWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkflowResponse
 */
DeleteWorkflowResponse Client::deleteWorkflowWithOptions(const DeleteWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  json body = {};
  if (!!request.hasClientUniqueCode()) {
    body["ClientUniqueCode"] = request.getClientUniqueCode();
  }

  if (!!request.hasEnvType()) {
    body["EnvType"] = request.getEnvType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteWorkflow"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkflowResponse>();
}

/**
 * @summary Deletes a workflow.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request DeleteWorkflowRequest
 * @return DeleteWorkflowResponse
 */
DeleteWorkflowResponse Client::deleteWorkflow(const DeleteWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWorkflowWithOptions(request, runtime);
}

/**
 * @summary Deletes a workflow from DataStudio.
 *
 * @description >Notice: 
 * After a workflow definition is published, it cannot be deleted. You must unpublish the workflow definition before you can delete it.
 *
 * @param request DeleteWorkflowDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkflowDefinitionResponse
 */
DeleteWorkflowDefinitionResponse Client::deleteWorkflowDefinitionWithOptions(const DeleteWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteWorkflowDefinition"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkflowDefinitionResponse>();
}

/**
 * @summary Deletes a workflow from DataStudio.
 *
 * @description >Notice: 
 * After a workflow definition is published, it cannot be deleted. You must unpublish the workflow definition before you can delete it.
 *
 * @param request DeleteWorkflowDefinitionRequest
 * @return DeleteWorkflowDefinitionResponse
 */
DeleteWorkflowDefinitionResponse Client::deleteWorkflowDefinition(const DeleteWorkflowDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWorkflowDefinitionWithOptions(request, runtime);
}

/**
 * @summary Publish a file to the production environment.
 *
 * @param request DeployFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployFileResponse
 */
DeployFileResponse Client::deployFileWithOptions(const DeployFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasFileId()) {
    body["FileId"] = request.getFileId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeployFile"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeployFileResponse>();
}

/**
 * @summary Publish a file to the production environment.
 *
 * @param request DeployFileRequest
 * @return DeployFileResponse
 */
DeployFileResponse Client::deployFile(const DeployFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deployFileWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DetachDataQualityRulesFromEvaluationTask is deprecated, please use dataworks-public::2024-05-18::UpdateDataQualityScan instead.
 *
 * @summary Removes the association between a data quality rule and a data quality monitoring task.
 *
 * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param tmpReq DetachDataQualityRulesFromEvaluationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachDataQualityRulesFromEvaluationTaskResponse
 */
DetachDataQualityRulesFromEvaluationTaskResponse Client::detachDataQualityRulesFromEvaluationTaskWithOptions(const DetachDataQualityRulesFromEvaluationTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DetachDataQualityRulesFromEvaluationTaskShrinkRequest request = DetachDataQualityRulesFromEvaluationTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataQualityRuleIds()) {
    request.setDataQualityRuleIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataQualityRuleIds(), "DataQualityRuleIds", "json"));
  }

  json body = {};
  if (!!request.hasDataQualityEvaluationTaskId()) {
    body["DataQualityEvaluationTaskId"] = request.getDataQualityEvaluationTaskId();
  }

  if (!!request.hasDataQualityRuleIdsShrink()) {
    body["DataQualityRuleIds"] = request.getDataQualityRuleIdsShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DetachDataQualityRulesFromEvaluationTask"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachDataQualityRulesFromEvaluationTaskResponse>();
}

/**
 * @deprecated OpenAPI DetachDataQualityRulesFromEvaluationTask is deprecated, please use dataworks-public::2024-05-18::UpdateDataQualityScan instead.
 *
 * @summary Removes the association between a data quality rule and a data quality monitoring task.
 *
 * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request DetachDataQualityRulesFromEvaluationTaskRequest
 * @return DetachDataQualityRulesFromEvaluationTaskResponse
 */
DetachDataQualityRulesFromEvaluationTaskResponse Client::detachDataQualityRulesFromEvaluationTask(const DetachDataQualityRulesFromEvaluationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachDataQualityRulesFromEvaluationTaskWithOptions(request, runtime);
}

/**
 * @summary Disables the specified approval process definition.
 *
 * @description ## Request
 * - This API disables the specified approval process definition.
 * - A disabled approval process definition remains inactive until it is re-enabled.
 * - You must provide a valid process definition ID as a path parameter.
 *
 * @param request DisableProcessDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableProcessDefinitionResponse
 */
DisableProcessDefinitionResponse Client::disableProcessDefinitionWithOptions(const DisableProcessDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DisableProcessDefinition"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableProcessDefinitionResponse>();
}

/**
 * @summary Disables the specified approval process definition.
 *
 * @description ## Request
 * - This API disables the specified approval process definition.
 * - A disabled approval process definition remains inactive until it is re-enabled.
 * - You must provide a valid process definition ID as a path parameter.
 *
 * @param request DisableProcessDefinitionRequest
 * @return DisableProcessDefinitionResponse
 */
DisableProcessDefinitionResponse Client::disableProcessDefinition(const DisableProcessDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableProcessDefinitionWithOptions(request, runtime);
}

/**
 * @summary Disassociates an image from a workspace.
 *
 * @description 1. This operation requires DataWorks Basic Edition or a later version.
 * 2. **Before calling this operation, ensure you have created the AliyunServiceRoleForDataWorks service-linked role.**
 *
 * @param request DissociateProjectFromImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DissociateProjectFromImageResponse
 */
DissociateProjectFromImageResponse Client::dissociateProjectFromImageWithOptions(const DissociateProjectFromImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DissociateProjectFromImage"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DissociateProjectFromImageResponse>();
}

/**
 * @summary Disassociates an image from a workspace.
 *
 * @description 1. This operation requires DataWorks Basic Edition or a later version.
 * 2. **Before calling this operation, ensure you have created the AliyunServiceRoleForDataWorks service-linked role.**
 *
 * @param request DissociateProjectFromImageRequest
 * @return DissociateProjectFromImageResponse
 */
DissociateProjectFromImageResponse Client::dissociateProjectFromImage(const DissociateProjectFromImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dissociateProjectFromImageWithOptions(request, runtime);
}

/**
 * @summary Disassociates a resource group from a workspace.
 *
 * @description 1. This operation requires a subscription to DataWorks Basic Edition or a higher edition.
 * 2. You must have one of the following roles in the DataWorks workspace:
 * - tenant owner, workspace administrator, project owner, or operator
 *
 * @param request DissociateProjectFromResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DissociateProjectFromResourceGroupResponse
 */
DissociateProjectFromResourceGroupResponse Client::dissociateProjectFromResourceGroupWithOptions(const DissociateProjectFromResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DissociateProjectFromResourceGroup"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DissociateProjectFromResourceGroupResponse>();
}

/**
 * @summary Disassociates a resource group from a workspace.
 *
 * @description 1. This operation requires a subscription to DataWorks Basic Edition or a higher edition.
 * 2. You must have one of the following roles in the DataWorks workspace:
 * - tenant owner, workspace administrator, project owner, or operator
 *
 * @param request DissociateProjectFromResourceGroupRequest
 * @return DissociateProjectFromResourceGroupResponse
 */
DissociateProjectFromResourceGroupResponse Client::dissociateProjectFromResourceGroup(const DissociateProjectFromResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dissociateProjectFromResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Enables a process definition with the specified ID.
 *
 * @description ## Request
 * This API enables an existing process definition. You must provide the process definition ID as a path parameter.
 *
 * @param request EnableProcessDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableProcessDefinitionResponse
 */
EnableProcessDefinitionResponse Client::enableProcessDefinitionWithOptions(const EnableProcessDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EnableProcessDefinition"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableProcessDefinitionResponse>();
}

/**
 * @summary Enables a process definition with the specified ID.
 *
 * @description ## Request
 * This API enables an existing process definition. You must provide the process definition ID as a path parameter.
 *
 * @param request EnableProcessDefinitionRequest
 * @return EnableProcessDefinitionResponse
 */
EnableProcessDefinitionResponse Client::enableProcessDefinition(const EnableProcessDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableProcessDefinitionWithOptions(request, runtime);
}

/**
 * @summary Imports a table to a workflow. The call to this API operation is equivalent to performing the following operations: Go to the DataStudio page, find the desired workflow, and then click the workflow name. Right-click Table under the desired folder and select Import Table.
 *
 * @param request EstablishRelationTableToBusinessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EstablishRelationTableToBusinessResponse
 */
EstablishRelationTableToBusinessResponse Client::establishRelationTableToBusinessWithOptions(const EstablishRelationTableToBusinessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessId()) {
    body["BusinessId"] = request.getBusinessId();
  }

  if (!!request.hasFolderId()) {
    body["FolderId"] = request.getFolderId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  if (!!request.hasTableGuid()) {
    body["TableGuid"] = request.getTableGuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EstablishRelationTableToBusiness"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EstablishRelationTableToBusinessResponse>();
}

/**
 * @summary Imports a table to a workflow. The call to this API operation is equivalent to performing the following operations: Go to the DataStudio page, find the desired workflow, and then click the workflow name. Right-click Table under the desired folder and select Import Table.
 *
 * @param request EstablishRelationTableToBusinessRequest
 * @return EstablishRelationTableToBusinessResponse
 */
EstablishRelationTableToBusinessResponse Client::establishRelationTableToBusiness(const EstablishRelationTableToBusinessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return establishRelationTableToBusinessWithOptions(request, runtime);
}

/**
 * @summary Executes a stage in a process.
 *
 * @description > The stages in a process are sequential. For more information, see the GetDeployment operation. Skipping or repeating a stage is not allowed.
 * > The execution of a stage is asynchronous. The response of this operation indicates only whether a stage is triggered but does not indicate whether the execution of the stage is successful. You can call the GetDeployment operation to check whether the execution is successful.
 *
 * @param request ExecPipelineRunStageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecPipelineRunStageResponse
 */
ExecPipelineRunStageResponse Client::execPipelineRunStageWithOptions(const ExecPipelineRunStageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasCode()) {
    body["Code"] = request.getCode();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecPipelineRunStage"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecPipelineRunStageResponse>();
}

/**
 * @summary Executes a stage in a process.
 *
 * @description > The stages in a process are sequential. For more information, see the GetDeployment operation. Skipping or repeating a stage is not allowed.
 * > The execution of a stage is asynchronous. The response of this operation indicates only whether a stage is triggered but does not indicate whether the execution of the stage is successful. You can call the GetDeployment operation to check whether the execution is successful.
 *
 * @param request ExecPipelineRunStageRequest
 * @return ExecPipelineRunStageResponse
 */
ExecPipelineRunStageResponse Client::execPipelineRunStage(const ExecPipelineRunStageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return execPipelineRunStageWithOptions(request, runtime);
}

/**
 * @summary Create a temporary workflow instance based on configurations.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param tmpReq ExecuteAdhocWorkflowInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteAdhocWorkflowInstanceResponse
 */
ExecuteAdhocWorkflowInstanceResponse Client::executeAdhocWorkflowInstanceWithOptions(const ExecuteAdhocWorkflowInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExecuteAdhocWorkflowInstanceShrinkRequest request = ExecuteAdhocWorkflowInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTasks()) {
    request.setTasksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTasks(), "Tasks", "json"));
  }

  json body = {};
  if (!!request.hasBizDate()) {
    body["BizDate"] = request.getBizDate();
  }

  if (!!request.hasEnvType()) {
    body["EnvType"] = request.getEnvType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.getOwner();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasTasksShrink()) {
    body["Tasks"] = request.getTasksShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExecuteAdhocWorkflowInstance"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteAdhocWorkflowInstanceResponse>();
}

/**
 * @summary Create a temporary workflow instance based on configurations.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ExecuteAdhocWorkflowInstanceRequest
 * @return ExecuteAdhocWorkflowInstanceResponse
 */
ExecuteAdhocWorkflowInstanceResponse Client::executeAdhocWorkflowInstance(const ExecuteAdhocWorkflowInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return executeAdhocWorkflowInstanceWithOptions(request, runtime);
}

/**
 * @summary Find the security policy that best matches the given conditions.
 *
 * @description ## Request Description
 * This API is used to find the most suitable security policy based on the provided control module, sub-module, and workspace ID. If a workspace ID is provided, the policy at the specified workspace level is matched first; otherwise, the tenant-level policy is returned. Note that system policies cannot be deleted or modified.
 *
 * @param request FindBestMatchSecurityStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FindBestMatchSecurityStrategyResponse
 */
FindBestMatchSecurityStrategyResponse Client::findBestMatchSecurityStrategyWithOptions(const FindBestMatchSecurityStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasControlModule()) {
    query["ControlModule"] = request.getControlModule();
  }

  if (!!request.hasControlSubModule()) {
    query["ControlSubModule"] = request.getControlSubModule();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "FindBestMatchSecurityStrategy"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FindBestMatchSecurityStrategyResponse>();
}

/**
 * @summary Find the security policy that best matches the given conditions.
 *
 * @description ## Request Description
 * This API is used to find the most suitable security policy based on the provided control module, sub-module, and workspace ID. If a workspace ID is provided, the policy at the specified workspace level is matched first; otherwise, the tenant-level policy is returned. Note that system policies cannot be deleted or modified.
 *
 * @param request FindBestMatchSecurityStrategyRequest
 * @return FindBestMatchSecurityStrategyResponse
 */
FindBestMatchSecurityStrategyResponse Client::findBestMatchSecurityStrategy(const FindBestMatchSecurityStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return findBestMatchSecurityStrategyWithOptions(request, runtime);
}

/**
 * @summary Retrieves agent details by name.
 *
 * @description ## Request
 * This API uses an agent\\"s name, provided as a parameter, to retrieve its detailed configuration, including the model configuration, system prompt, and tool list.
 *
 * @param request GetAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentResponse
 */
GetAgentResponse Client::getAgentWithOptions(const GetAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAgent"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentResponse>();
}

/**
 * @summary Retrieves agent details by name.
 *
 * @description ## Request
 * This API uses an agent\\"s name, provided as a parameter, to retrieve its detailed configuration, including the model configuration, system prompt, and tool list.
 *
 * @param request GetAgentRequest
 * @return GetAgentResponse
 */
GetAgentResponse Client::getAgent(const GetAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentWithOptions(request, runtime);
}

/**
 * @summary Retrieves the metadata and content of an artifact based on a session ID and artifact path.
 *
 * @description ## Description
 * - This operation retrieves the metadata and content of a single artifact based on `SessionId` and `ArtifactPath`.
 * - `SessionId` and `ArtifactPath` are required.
 *
 * @param tmpReq GetAgentSessionArtifactMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentSessionArtifactMetaResponse
 */
GetAgentSessionArtifactMetaResponse Client::getAgentSessionArtifactMetaWithOptions(const GetAgentSessionArtifactMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAgentSessionArtifactMetaShrinkRequest request = GetAgentSessionArtifactMetaShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAgentSessionArtifactMeta"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentSessionArtifactMetaResponse>();
}

/**
 * @summary Retrieves the metadata and content of an artifact based on a session ID and artifact path.
 *
 * @description ## Description
 * - This operation retrieves the metadata and content of a single artifact based on `SessionId` and `ArtifactPath`.
 * - `SessionId` and `ArtifactPath` are required.
 *
 * @param request GetAgentSessionArtifactMetaRequest
 * @return GetAgentSessionArtifactMetaResponse
 */
GetAgentSessionArtifactMetaResponse Client::getAgentSessionArtifactMeta(const GetAgentSessionArtifactMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentSessionArtifactMetaWithOptions(request, runtime);
}

/**
 * @summary Retrieves the cumulative AI token usage for a specified session.
 *
 * @description ## Description
 * - This operation retrieves usage statistics for AI tokens in a specified session. It provides a breakdown of tokens for prompts, completions, and thoughts, as well as the total token count and the number of cache-hit tokens.
 *
 * @param tmpReq GetAgentSessionTokenUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentSessionTokenUsageResponse
 */
GetAgentSessionTokenUsageResponse Client::getAgentSessionTokenUsageWithOptions(const GetAgentSessionTokenUsageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetAgentSessionTokenUsageShrinkRequest request = GetAgentSessionTokenUsageShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAgentSessionTokenUsage"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentSessionTokenUsageResponse>();
}

/**
 * @summary Retrieves the cumulative AI token usage for a specified session.
 *
 * @description ## Description
 * - This operation retrieves usage statistics for AI tokens in a specified session. It provides a breakdown of tokens for prompts, completions, and thoughts, as well as the total token count and the number of cache-hit tokens.
 *
 * @param request GetAgentSessionTokenUsageRequest
 * @return GetAgentSessionTokenUsageResponse
 */
GetAgentSessionTokenUsageResponse Client::getAgentSessionTokenUsage(const GetAgentSessionTokenUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentSessionTokenUsageWithOptions(request, runtime);
}

/**
 * @summary Queries a custom alert monitoring rule.
 *
 * @param request GetAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlertRuleResponse
 */
GetAlertRuleResponse Client::getAlertRuleWithOptions(const GetAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAlertRule"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlertRuleResponse>();
}

/**
 * @summary Queries a custom alert monitoring rule.
 *
 * @param request GetAlertRuleRequest
 * @return GetAlertRuleResponse
 */
GetAlertRuleResponse Client::getAlertRule(const GetAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAlertRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the content of resource permission applications under the specified process instance ID.
 *
 * @description ## Request Description
 * - This API is used to query the details of resource permission applications based on the provided `ProcessInstanceId`.
 * - A valid `ProcessInstanceId` parameter must be provided in the request.
 * - The response includes the basic information, status, and the list of specific application contents.
 * - Each application content includes detailed resource information, the grantee, the requested operation permissions, and more.
 *
 * @param request GetApplicationContentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationContentsResponse
 */
GetApplicationContentsResponse Client::getApplicationContentsWithOptions(const GetApplicationContentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProcessInstanceId()) {
    query["ProcessInstanceId"] = request.getProcessInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplicationContents"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationContentsResponse>();
}

/**
 * @summary Queries the content of resource permission applications under the specified process instance ID.
 *
 * @description ## Request Description
 * - This API is used to query the details of resource permission applications based on the provided `ProcessInstanceId`.
 * - A valid `ProcessInstanceId` parameter must be provided in the request.
 * - The response includes the basic information, status, and the list of specific application contents.
 * - Each application content includes detailed resource information, the grantee, the requested operation permissions, and more.
 *
 * @param request GetApplicationContentsRequest
 * @return GetApplicationContentsResponse
 */
GetApplicationContentsResponse Client::getApplicationContents(const GetApplicationContentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationContentsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a workflow.
 *
 * @param request GetBusinessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBusinessResponse
 */
GetBusinessResponse Client::getBusinessWithOptions(const GetBusinessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessId()) {
    body["BusinessId"] = request.getBusinessId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetBusiness"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBusinessResponse>();
}

/**
 * @summary Queries the information about a workflow.
 *
 * @param request GetBusinessRequest
 * @return GetBusinessResponse
 */
GetBusinessResponse Client::getBusiness(const GetBusinessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBusinessWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a catalog in Data Map. Only catalogs of the Data Lake Formation (DLF) and StarRocks metadata crawlers are supported.
 *
 * @description 1. DataWorks Basic Edition or a higher edition is required.
 *
 * @param request GetCatalogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCatalogResponse
 */
GetCatalogResponse Client::getCatalogWithOptions(const GetCatalogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCatalog"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCatalogResponse>();
}

/**
 * @summary Queries the information about a catalog in Data Map. Only catalogs of the Data Lake Formation (DLF) and StarRocks metadata crawlers are supported.
 *
 * @description 1. DataWorks Basic Edition or a higher edition is required.
 *
 * @param request GetCatalogRequest
 * @return GetCatalogResponse
 */
GetCatalogResponse Client::getCatalog(const GetCatalogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCatalogWithOptions(request, runtime);
}

/**
 * @summary You can view authentication files.
 *
 * @description 1. This feature is available only in DataWorks Basic Edition and later versions.
 * 2. You must have at least one of the following roles in the DataWorks project: Tenant Owner, Space Administrator, Deployment, Developer, Project Owner, or O\\&M.
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
    {"version" , "2024-05-18"},
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
 * @summary You can view authentication files.
 *
 * @description 1. This feature is available only in DataWorks Basic Edition and later versions.
 * 2. You must have at least one of the following roles in the DataWorks project: Tenant Owner, Space Administrator, Deployment, Developer, Project Owner, or O\\&M.
 *
 * @param request GetCertificateRequest
 * @return GetCertificateResponse
 */
GetCertificateResponse Client::getCertificate(const GetCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCertificateWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified column in a Data Map table.
 *
 * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request GetColumnRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetColumnResponse
 */
GetColumnResponse Client::getColumnWithOptions(const GetColumnRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetColumn"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetColumnResponse>();
}

/**
 * @summary Retrieves the details of a specified column in a Data Map table.
 *
 * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request GetColumnRequest
 * @return GetColumnResponse
 */
GetColumnResponse Client::getColumn(const GetColumnRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getColumnWithOptions(request, runtime);
}

/**
 * @summary Gets component information.
 *
 * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request GetComponentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetComponentResponse
 */
GetComponentResponse Client::getComponentWithOptions(const GetComponentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComponentId()) {
    query["ComponentId"] = request.getComponentId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetComponent"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetComponentResponse>();
}

/**
 * @summary Gets component information.
 *
 * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request GetComponentRequest
 * @return GetComponentResponse
 */
GetComponentResponse Client::getComponent(const GetComponentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getComponentWithOptions(request, runtime);
}

/**
 * @summary Queries the specified computing resource based on the computing resource ID.
 *
 * @description 1. DataWorks Basic Edition or a more advanced edition is required.
 * 2. You must have at least one of the following roles in the DataWorks workspace:
 * - Tenant Owner, Workspace Administrator, Deploy, Developer, Project Owner, O\\&M
 *
 * @param request GetComputeResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetComputeResourceResponse
 */
GetComputeResourceResponse Client::getComputeResourceWithOptions(const GetComputeResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetComputeResource"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetComputeResourceResponse>();
}

/**
 * @summary Queries the specified computing resource based on the computing resource ID.
 *
 * @description 1. DataWorks Basic Edition or a more advanced edition is required.
 * 2. You must have at least one of the following roles in the DataWorks workspace:
 * - Tenant Owner, Workspace Administrator, Deploy, Developer, Project Owner, O\\&M
 *
 * @param request GetComputeResourceRequest
 * @return GetComputeResourceResponse
 */
GetComputeResourceResponse Client::getComputeResource(const GetComputeResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getComputeResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the result of asynchronously creating a workflow instance.
 *
 * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request GetCreateWorkflowInstancesResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCreateWorkflowInstancesResultResponse
 */
GetCreateWorkflowInstancesResultResponse Client::getCreateWorkflowInstancesResultWithOptions(const GetCreateWorkflowInstancesResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCreateWorkflowInstancesResult"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCreateWorkflowInstancesResultResponse>();
}

/**
 * @summary Queries the result of asynchronously creating a workflow instance.
 *
 * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request GetCreateWorkflowInstancesResultRequest
 * @return GetCreateWorkflowInstancesResultResponse
 */
GetCreateWorkflowInstancesResultResponse Client::getCreateWorkflowInstancesResult(const GetCreateWorkflowInstancesResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCreateWorkflowInstancesResultWithOptions(request, runtime);
}

/**
 * @summary Retrieves a custom attribute definition.
 *
 * @param request GetCustomAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomAttributeResponse
 */
GetCustomAttributeResponse Client::getCustomAttributeWithOptions(const GetCustomAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomAttribute"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomAttributeResponse>();
}

/**
 * @summary Retrieves a custom attribute definition.
 *
 * @param request GetCustomAttributeRequest
 * @return GetCustomAttributeResponse
 */
GetCustomAttributeResponse Client::getCustomAttribute(const GetCustomAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomAttributeWithOptions(request, runtime);
}

/**
 * @summary View data integration tasks.
 *
 * @description This operation requires DataWorks Basic Edition or later.
 *
 * @param request GetDIJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDIJobResponse
 */
GetDIJobResponse Client::getDIJobWithOptions(const GetDIJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDIJob"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDIJobResponse>();
}

/**
 * @summary View data integration tasks.
 *
 * @description This operation requires DataWorks Basic Edition or later.
 *
 * @param request GetDIJobRequest
 * @return GetDIJobResponse
 */
GetDIJobResponse Client::getDIJob(const GetDIJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDIJobWithOptions(request, runtime);
}

/**
 * @summary Obtains logs generated for a synchronization task.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetDIJobLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDIJobLogResponse
 */
GetDIJobLogResponse Client::getDIJobLogWithOptions(const GetDIJobLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDIJobLog"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDIJobLogResponse>();
}

/**
 * @summary Obtains logs generated for a synchronization task.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetDIJobLogRequest
 * @return GetDIJobLogResponse
 */
GetDIJobLogResponse Client::getDIJobLog(const GetDIJobLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDIJobLogWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a data quality alert rule by rule ID.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request GetDataQualityAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataQualityAlertRuleResponse
 */
GetDataQualityAlertRuleResponse Client::getDataQualityAlertRuleWithOptions(const GetDataQualityAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataQualityAlertRule"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataQualityAlertRuleResponse>();
}

/**
 * @summary Retrieves the details of a data quality alert rule by rule ID.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request GetDataQualityAlertRuleRequest
 * @return GetDataQualityAlertRuleResponse
 */
GetDataQualityAlertRuleResponse Client::getDataQualityAlertRule(const GetDataQualityAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataQualityAlertRuleWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetDataQualityEvaluationTask is deprecated, please use dataworks-public::2024-05-18::CreateDataQualityScan instead.
 *
 * @summary Query the details of a data quality validation task.
 *
 * @description Available only with DataWorks Basic Edition or higher.
 *
 * @param request GetDataQualityEvaluationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataQualityEvaluationTaskResponse
 */
GetDataQualityEvaluationTaskResponse Client::getDataQualityEvaluationTaskWithOptions(const GetDataQualityEvaluationTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataQualityEvaluationTask"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataQualityEvaluationTaskResponse>();
}

/**
 * @deprecated OpenAPI GetDataQualityEvaluationTask is deprecated, please use dataworks-public::2024-05-18::CreateDataQualityScan instead.
 *
 * @summary Query the details of a data quality validation task.
 *
 * @description Available only with DataWorks Basic Edition or higher.
 *
 * @param request GetDataQualityEvaluationTaskRequest
 * @return GetDataQualityEvaluationTaskResponse
 */
GetDataQualityEvaluationTaskResponse Client::getDataQualityEvaluationTask(const GetDataQualityEvaluationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataQualityEvaluationTaskWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetDataQualityEvaluationTaskInstance is deprecated, please use dataworks-public::2024-05-18::GetDataQualityScanRun instead.
 *
 * @summary Retrieves the details of a data quality check task instance.
 *
 * @description DataWorks Basic Edition or a higher edition is required to use this operation.
 *
 * @param request GetDataQualityEvaluationTaskInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataQualityEvaluationTaskInstanceResponse
 */
GetDataQualityEvaluationTaskInstanceResponse Client::getDataQualityEvaluationTaskInstanceWithOptions(const GetDataQualityEvaluationTaskInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataQualityEvaluationTaskInstance"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataQualityEvaluationTaskInstanceResponse>();
}

/**
 * @deprecated OpenAPI GetDataQualityEvaluationTaskInstance is deprecated, please use dataworks-public::2024-05-18::GetDataQualityScanRun instead.
 *
 * @summary Retrieves the details of a data quality check task instance.
 *
 * @description DataWorks Basic Edition or a higher edition is required to use this operation.
 *
 * @param request GetDataQualityEvaluationTaskInstanceRequest
 * @return GetDataQualityEvaluationTaskInstanceResponse
 */
GetDataQualityEvaluationTaskInstanceResponse Client::getDataQualityEvaluationTaskInstance(const GetDataQualityEvaluationTaskInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataQualityEvaluationTaskInstanceWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetDataQualityRule is deprecated, please use dataworks-public::2024-05-18::GetDataQualityScan instead.
 *
 * @summary Queries the details of a data quality rule.
 *
 * @description You must purchase DataWorks Basic Edition or above to use this feature.
 *
 * @param request GetDataQualityRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataQualityRuleResponse
 */
GetDataQualityRuleResponse Client::getDataQualityRuleWithOptions(const GetDataQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataQualityRule"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataQualityRuleResponse>();
}

/**
 * @deprecated OpenAPI GetDataQualityRule is deprecated, please use dataworks-public::2024-05-18::GetDataQualityScan instead.
 *
 * @summary Queries the details of a data quality rule.
 *
 * @description You must purchase DataWorks Basic Edition or above to use this feature.
 *
 * @param request GetDataQualityRuleRequest
 * @return GetDataQualityRuleResponse
 */
GetDataQualityRuleResponse Client::getDataQualityRule(const GetDataQualityRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataQualityRuleWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetDataQualityRuleTemplate is deprecated, please use dataworks-public::2024-05-18::GetDataQualityTemplate instead.
 *
 * @summary Queries the details of a data quality rule template.
 *
 * @description You can call this operation only if you have purchased DataWorks Basic Edition or a more advanced edition.
 *
 * @param request GetDataQualityRuleTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataQualityRuleTemplateResponse
 */
GetDataQualityRuleTemplateResponse Client::getDataQualityRuleTemplateWithOptions(const GetDataQualityRuleTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataQualityRuleTemplate"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataQualityRuleTemplateResponse>();
}

/**
 * @deprecated OpenAPI GetDataQualityRuleTemplate is deprecated, please use dataworks-public::2024-05-18::GetDataQualityTemplate instead.
 *
 * @summary Queries the details of a data quality rule template.
 *
 * @description You can call this operation only if you have purchased DataWorks Basic Edition or a more advanced edition.
 *
 * @param request GetDataQualityRuleTemplateRequest
 * @return GetDataQualityRuleTemplateResponse
 */
GetDataQualityRuleTemplateResponse Client::getDataQualityRuleTemplate(const GetDataQualityRuleTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataQualityRuleTemplateWithOptions(request, runtime);
}

/**
 * @summary Gets data quality monitoring details.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request GetDataQualityScanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataQualityScanResponse
 */
GetDataQualityScanResponse Client::getDataQualityScanWithOptions(const GetDataQualityScanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataQualityScan"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataQualityScanResponse>();
}

/**
 * @summary Gets data quality monitoring details.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request GetDataQualityScanRequest
 * @return GetDataQualityScanResponse
 */
GetDataQualityScanResponse Client::getDataQualityScan(const GetDataQualityScanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataQualityScanWithOptions(request, runtime);
}

/**
 * @summary Creates a data quality monitoring run instance.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request GetDataQualityScanRunRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataQualityScanRunResponse
 */
GetDataQualityScanRunResponse Client::getDataQualityScanRunWithOptions(const GetDataQualityScanRunRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataQualityScanRun"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataQualityScanRunResponse>();
}

/**
 * @summary Creates a data quality monitoring run instance.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request GetDataQualityScanRunRequest
 * @return GetDataQualityScanRunResponse
 */
GetDataQualityScanRunResponse Client::getDataQualityScanRun(const GetDataQualityScanRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataQualityScanRunWithOptions(request, runtime);
}

/**
 * @summary Queries the log of a specific task instance that monitors data quality.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request GetDataQualityScanRunLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataQualityScanRunLogResponse
 */
GetDataQualityScanRunLogResponse Client::getDataQualityScanRunLogWithOptions(const GetDataQualityScanRunLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.getOffset();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataQualityScanRunLog"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataQualityScanRunLogResponse>();
}

/**
 * @summary Queries the log of a specific task instance that monitors data quality.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request GetDataQualityScanRunLogRequest
 * @return GetDataQualityScanRunLogResponse
 */
GetDataQualityScanRunLogResponse Client::getDataQualityScanRunLog(const GetDataQualityScanRunLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataQualityScanRunLogWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a data quality rule template by template ID.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request GetDataQualityTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataQualityTemplateResponse
 */
GetDataQualityTemplateResponse Client::getDataQualityTemplateWithOptions(const GetDataQualityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataQualityTemplate"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataQualityTemplateResponse>();
}

/**
 * @summary Retrieves the details of a data quality rule template by template ID.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request GetDataQualityTemplateRequest
 * @return GetDataQualityTemplateResponse
 */
GetDataQualityTemplateResponse Client::getDataQualityTemplate(const GetDataQualityTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataQualityTemplateWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a data source by data source ID.
 *
 * @description 1. This operation is available for all DataWorks editions.
 * 2. To call this operation, you must have one of the following roles in DataWorks:
 * - Tenant Owner, Workspace Administrator, Deployment, Development, Project Owner, and O\\&M
 *
 * @param request GetDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataSourceResponse
 */
GetDataSourceResponse Client::getDataSourceWithOptions(const GetDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataSource"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataSourceResponse>();
}

/**
 * @summary Retrieves the details of a data source by data source ID.
 *
 * @description 1. This operation is available for all DataWorks editions.
 * 2. To call this operation, you must have one of the following roles in DataWorks:
 * - Tenant Owner, Workspace Administrator, Deployment, Development, Project Owner, and O\\&M
 *
 * @param request GetDataSourceRequest
 * @return GetDataSourceResponse
 */
GetDataSourceResponse Client::getDataSource(const GetDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataSourceWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a specific database in Data Map.
 *
 * @description 1. DataWorks Basic Edition or a higher edition is required.
 *
 * @param request GetDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatabaseResponse
 */
GetDatabaseResponse Client::getDatabaseWithOptions(const GetDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatabase"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatabaseResponse>();
}

/**
 * @summary Queries the information about a specific database in Data Map.
 *
 * @description 1. DataWorks Basic Edition or a higher edition is required.
 *
 * @param request GetDatabaseRequest
 * @return GetDatabaseResponse
 */
GetDatabaseResponse Client::getDatabase(const GetDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDatabaseWithOptions(request, runtime);
}

/**
 * @summary Gets the details of a dataset.
 *
 * @param request GetDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatasetResponse
 */
GetDatasetResponse Client::getDatasetWithOptions(const GetDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataset"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatasetResponse>();
}

/**
 * @summary Gets the details of a dataset.
 *
 * @param request GetDatasetRequest
 * @return GetDatasetResponse
 */
GetDatasetResponse Client::getDataset(const GetDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDatasetWithOptions(request, runtime);
}

/**
 * @summary Gets information for a given dataset version.
 *
 * @param request GetDatasetVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatasetVersionResponse
 */
GetDatasetVersionResponse Client::getDatasetVersionWithOptions(const GetDatasetVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDatasetVersion"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatasetVersionResponse>();
}

/**
 * @summary Gets information for a given dataset version.
 *
 * @param request GetDatasetVersionRequest
 * @return GetDatasetVersionResponse
 */
GetDatasetVersionResponse Client::getDatasetVersion(const GetDatasetVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDatasetVersionWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a deployment package.
 *
 * @param request GetDeploymentPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeploymentPackageResponse
 */
GetDeploymentPackageResponse Client::getDeploymentPackageWithOptions(const GetDeploymentPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDeploymentId()) {
    body["DeploymentId"] = request.getDeploymentId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDeploymentPackage"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeploymentPackageResponse>();
}

/**
 * @summary Queries the information about a deployment package.
 *
 * @param request GetDeploymentPackageRequest
 * @return GetDeploymentPackageResponse
 */
GetDeploymentPackageResponse Client::getDeploymentPackage(const GetDeploymentPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDeploymentPackageWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a file.
 *
 * @param request GetFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFileResponse
 */
GetFileResponse Client::getFileWithOptions(const GetFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileId()) {
    body["FileId"] = request.getFileId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetFile"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFileResponse>();
}

/**
 * @summary Retrieves the details of a file.
 *
 * @param request GetFileRequest
 * @return GetFileResponse
 */
GetFileResponse Client::getFile(const GetFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFileWithOptions(request, runtime);
}

/**
 * @summary Invoke GetFileVersion to obtain the version details of a file.
 *
 * @param request GetFileVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFileVersionResponse
 */
GetFileVersionResponse Client::getFileVersionWithOptions(const GetFileVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileId()) {
    body["FileId"] = request.getFileId();
  }

  if (!!request.hasFileVersion()) {
    body["FileVersion"] = request.getFileVersion();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetFileVersion"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFileVersionResponse>();
}

/**
 * @summary Invoke GetFileVersion to obtain the version details of a file.
 *
 * @param request GetFileVersionRequest
 * @return GetFileVersionResponse
 */
GetFileVersionResponse Client::getFileVersion(const GetFileVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFileVersionWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a folder.
 *
 * @param request GetFolderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFolderResponse
 */
GetFolderResponse Client::getFolderWithOptions(const GetFolderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFolderId()) {
    body["FolderId"] = request.getFolderId();
  }

  if (!!request.hasFolderPath()) {
    body["FolderPath"] = request.getFolderPath();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetFolder"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFolderResponse>();
}

/**
 * @summary Queries the information about a folder.
 *
 * @param request GetFolderRequest
 * @return GetFolderResponse
 */
GetFolderResponse Client::getFolder(const GetFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFolderWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a user-defined function (UDF) in DataStudio.
 *
 * @param request GetFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFunctionResponse
 */
GetFunctionResponse Client::getFunctionWithOptions(const GetFunctionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFunction"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFunctionResponse>();
}

/**
 * @summary Queries the information about a user-defined function (UDF) in DataStudio.
 *
 * @param request GetFunctionRequest
 * @return GetFunctionResponse
 */
GetFunctionResponse Client::getFunction(const GetFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFunctionWithOptions(request, runtime);
}

/**
 * @summary Queries the data snapshot of an extension point based on the ID of a message in DataWorks OpenEvent when the related extension point event is triggered.
 *
 * @param request GetIDEEventDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIDEEventDetailResponse
 */
GetIDEEventDetailResponse Client::getIDEEventDetailWithOptions(const GetIDEEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMessageId()) {
    body["MessageId"] = request.getMessageId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetIDEEventDetail"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIDEEventDetailResponse>();
}

/**
 * @summary Queries the data snapshot of an extension point based on the ID of a message in DataWorks OpenEvent when the related extension point event is triggered.
 *
 * @param request GetIDEEventDetailRequest
 * @return GetIDEEventDetailResponse
 */
GetIDEEventDetailResponse Client::getIDEEventDetail(const GetIDEEventDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getIDEEventDetailWithOptions(request, runtime);
}

/**
 * @summary Gets the details of an image by its ID.
 *
 * @description 1. A subscription to DataWorks Basic Edition or a higher edition is required.
 * 2. **Make sure that you have created the service-linked role AliyunServiceRoleForDataWorks before you call this operation.**
 *
 * @param request GetImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageResponse
 */
GetImageResponse Client::getImageWithOptions(const GetImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasImageVersion()) {
    query["ImageVersion"] = request.getImageVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetImage"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageResponse>();
}

/**
 * @summary Gets the details of an image by its ID.
 *
 * @description 1. A subscription to DataWorks Basic Edition or a higher edition is required.
 * 2. **Make sure that you have created the service-linked role AliyunServiceRoleForDataWorks before you call this operation.**
 *
 * @param request GetImageRequest
 * @return GetImageResponse
 */
GetImageResponse Client::getImage(const GetImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageWithOptions(request, runtime);
}

/**
 * @summary Queries the status information of an asynchronous task. After you call an asynchronous operation, an asynchronous task is generated. You can call the GetJobStatus operation to query the status of the asynchronous task.
 *
 * @param request GetJobStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobStatusResponse
 */
GetJobStatusResponse Client::getJobStatusWithOptions(const GetJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJobStatus"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobStatusResponse>();
}

/**
 * @summary Queries the status information of an asynchronous task. After you call an asynchronous operation, an asynchronous task is generated. You can call the GetJobStatus operation to query the status of the asynchronous task.
 *
 * @param request GetJobStatusRequest
 * @return GetJobStatusResponse
 */
GetJobStatusResponse Client::getJobStatus(const GetJobStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJobStatusWithOptions(request, runtime);
}

/**
 * @summary Retrieves details for a specific lineage relationship in the data map.
 *
 * @description 1. This operation is available only for DataWorks Standard Edition or later.
 *
 * @param request GetLineageRelationshipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLineageRelationshipResponse
 */
GetLineageRelationshipResponse Client::getLineageRelationshipWithOptions(const GetLineageRelationshipRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLineageRelationship"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLineageRelationshipResponse>();
}

/**
 * @summary Retrieves details for a specific lineage relationship in the data map.
 *
 * @description 1. This operation is available only for DataWorks Standard Edition or later.
 *
 * @param request GetLineageRelationshipRequest
 * @return GetLineageRelationshipResponse
 */
GetLineageRelationshipResponse Client::getLineageRelationship(const GetLineageRelationshipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLineageRelationshipWithOptions(request, runtime);
}

/**
 * @summary Returns the details of an MCP Server.
 *
 * @description ## Description
 * This API returns the detailed configuration of a specific MCP Server by name. The response includes the creator ID, modifier ID, service address, and transport protocol. You must provide the exact name of the MCP Server in the request.
 * ### Notes
 * - Ensure you have the required permissions to call this API.
 * - The MCP Server name is case-sensitive.
 *
 * @param request GetMcpServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMcpServerResponse
 */
GetMcpServerResponse Client::getMcpServerWithOptions(const GetMcpServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetMcpServer"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMcpServerResponse>();
}

/**
 * @summary Returns the details of an MCP Server.
 *
 * @description ## Description
 * This API returns the detailed configuration of a specific MCP Server by name. The response includes the creator ID, modifier ID, service address, and transport protocol. You must provide the exact name of the MCP Server in the request.
 * ### Notes
 * - Ensure you have the required permissions to call this API.
 * - The MCP Server name is case-sensitive.
 *
 * @param request GetMcpServerRequest
 * @return GetMcpServerResponse
 */
GetMcpServerResponse Client::getMcpServer(const GetMcpServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMcpServerWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a collection in Data Map. Collections include categories and data albums.
 *
 * @description 1. DataWorks Professional Edition or a higher edition is required.
 *
 * @param request GetMetaCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaCollectionResponse
 */
GetMetaCollectionResponse Client::getMetaCollectionWithOptions(const GetMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetaCollection"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaCollectionResponse>();
}

/**
 * @summary Queries the information about a collection in Data Map. Collections include categories and data albums.
 *
 * @description 1. DataWorks Professional Edition or a higher edition is required.
 *
 * @param request GetMetaCollectionRequest
 * @return GetMetaCollectionResponse
 */
GetMetaCollectionResponse Client::getMetaCollection(const GetMetaCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaCollectionWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a custom entity.
 *
 * @param request GetMetaEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaEntityResponse
 */
GetMetaEntityResponse Client::getMetaEntityWithOptions(const GetMetaEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetMetaEntity"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaEntityResponse>();
}

/**
 * @summary Retrieves the details of a custom entity.
 *
 * @param request GetMetaEntityRequest
 * @return GetMetaEntityResponse
 */
GetMetaEntityResponse Client::getMetaEntity(const GetMetaEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaEntityWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a custom entity definition.
 *
 * @param request GetMetaEntityDefRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaEntityDefResponse
 */
GetMetaEntityDefResponse Client::getMetaEntityDefWithOptions(const GetMetaEntityDefRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEntityType()) {
    body["EntityType"] = request.getEntityType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetMetaEntityDef"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaEntityDefResponse>();
}

/**
 * @summary Retrieves the details of a custom entity definition.
 *
 * @param request GetMetaEntityDefRequest
 * @return GetMetaEntityDefResponse
 */
GetMetaEntityDefResponse Client::getMetaEntityDef(const GetMetaEntityDefRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaEntityDefWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a network resource.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetNetworkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNetworkResponse
 */
GetNetworkResponse Client::getNetworkWithOptions(const GetNetworkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNetwork"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNetworkResponse>();
}

/**
 * @summary Queries the information about a network resource.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetNetworkRequest
 * @return GetNetworkResponse
 */
GetNetworkResponse Client::getNetwork(const GetNetworkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNetworkWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a node in DataStudio.
 *
 * @param request GetNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeResponse
 */
GetNodeResponse Client::getNodeWithOptions(const GetNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNode"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodeResponse>();
}

/**
 * @summary Queries the information about a node in DataStudio.
 *
 * @param request GetNodeRequest
 * @return GetNodeResponse
 */
GetNodeResponse Client::getNode(const GetNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNodeWithOptions(request, runtime);
}

/**
 * @summary Gets the details of a parameter by its ID.
 *
 * @description This operation is available only in DataWorks Professional Edition or later.
 *
 * @param request GetParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetParameterResponse
 */
GetParameterResponse Client::getParameterWithOptions(const GetParameterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetParameter"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetParameterResponse>();
}

/**
 * @summary Gets the details of a parameter by its ID.
 *
 * @description This operation is available only in DataWorks Professional Edition or later.
 *
 * @param request GetParameterRequest
 * @return GetParameterResponse
 */
GetParameterResponse Client::getParameter(const GetParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getParameterWithOptions(request, runtime);
}

/**
 * @summary Retrieves partition details for a data map table. Currently supports MaxCompute and HMS (EMR cluster) types only.
 *
 * @description 1. DataWorks Basic Edition or a higher edition is required.
 * 2. Only MaxCompute and HMS (EMR cluster) table types are supported.
 *
 * @param request GetPartitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPartitionResponse
 */
GetPartitionResponse Client::getPartitionWithOptions(const GetPartitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPartition"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPartitionResponse>();
}

/**
 * @summary Retrieves partition details for a data map table. Currently supports MaxCompute and HMS (EMR cluster) types only.
 *
 * @description 1. DataWorks Basic Edition or a higher edition is required.
 * 2. Only MaxCompute and HMS (EMR cluster) table types are supported.
 *
 * @param request GetPartitionRequest
 * @return GetPartitionResponse
 */
GetPartitionResponse Client::getPartition(const GetPartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPartitionWithOptions(request, runtime);
}

/**
 * @summary Gets the details of a Deployment Process.
 *
 * @description >Notice: 
 * For earlier SDK versions that do not include this API, use the GetDeployment API with the same parameters described in this document.
 *
 * @param request GetPipelineRunRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPipelineRunResponse
 */
GetPipelineRunResponse Client::getPipelineRunWithOptions(const GetPipelineRunRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPipelineRun"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPipelineRunResponse>();
}

/**
 * @summary Gets the details of a Deployment Process.
 *
 * @description >Notice: 
 * For earlier SDK versions that do not include this API, use the GetDeployment API with the same parameters described in this document.
 *
 * @param request GetPipelineRunRequest
 * @return GetPipelineRunResponse
 */
GetPipelineRunResponse Client::getPipelineRun(const GetPipelineRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPipelineRunWithOptions(request, runtime);
}

/**
 * @summary Retrieves the approval policy for a given process definition ID.
 *
 * @description ## Request
 * - This API retrieves the details of a specific approval process definition using the `ID` parameter.
 * - The `ID` parameter is required and must be a valid process definition ID.
 * - The response includes the basic properties of the approval process definition, rule conditions, notification service configurations, and approval nodes.
 * - A successful request returns the complete process definition object. A failed request returns an error code and message for troubleshooting.
 *
 * @param request GetProcessDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProcessDefinitionResponse
 */
GetProcessDefinitionResponse Client::getProcessDefinitionWithOptions(const GetProcessDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProcessDefinition"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProcessDefinitionResponse>();
}

/**
 * @summary Retrieves the approval policy for a given process definition ID.
 *
 * @description ## Request
 * - This API retrieves the details of a specific approval process definition using the `ID` parameter.
 * - The `ID` parameter is required and must be a valid process definition ID.
 * - The response includes the basic properties of the approval process definition, rule conditions, notification service configurations, and approval nodes.
 * - A successful request returns the complete process definition object. A failed request returns an error code and message for troubleshooting.
 *
 * @param request GetProcessDefinitionRequest
 * @return GetProcessDefinitionResponse
 */
GetProcessDefinitionResponse Client::getProcessDefinition(const GetProcessDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProcessDefinitionWithOptions(request, runtime);
}

/**
 * @summary Retrieves details for a specified approval process instance, including its approval nodes and task list.
 *
 * @description ## Request
 * This API is used to monitor and manage the status of an approval process. By providing the approval process instance ID, you can query for related information, such as the approval process definition, current approval nodes, and the tasks on each node.
 *
 * @param request GetProcessInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProcessInstanceResponse
 */
GetProcessInstanceResponse Client::getProcessInstanceWithOptions(const GetProcessInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProcessInstanceId()) {
    query["ProcessInstanceId"] = request.getProcessInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProcessInstance"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProcessInstanceResponse>();
}

/**
 * @summary Retrieves details for a specified approval process instance, including its approval nodes and task list.
 *
 * @description ## Request
 * This API is used to monitor and manage the status of an approval process. By providing the approval process instance ID, you can query for related information, such as the approval process definition, current approval nodes, and the tasks on each node.
 *
 * @param request GetProcessInstanceRequest
 * @return GetProcessInstanceResponse
 */
GetProcessInstanceResponse Client::getProcessInstance(const GetProcessInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProcessInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a DataWorks workspace.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProjectWithOptions(const GetProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProject"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectResponse>();
}

/**
 * @summary Queries the information about a DataWorks workspace.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetProjectRequest
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProject(const GetProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specific member in a Workspace.
 *
 * @description This operation is available only in DataWorks Basic Edition and later.
 *
 * @param request GetProjectMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectMemberResponse
 */
GetProjectMemberResponse Client::getProjectMemberWithOptions(const GetProjectMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetProjectMember"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectMemberResponse>();
}

/**
 * @summary Retrieves the details of a specific member in a Workspace.
 *
 * @description This operation is available only in DataWorks Basic Edition and later.
 *
 * @param request GetProjectMemberRequest
 * @return GetProjectMemberResponse
 */
GetProjectMemberResponse Client::getProjectMember(const GetProjectMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectMemberWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a workspace role.
 *
 * @description You can call this operation only if you have purchased DataWorks Basic Edition or a later edition.
 *
 * @param request GetProjectRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectRoleResponse
 */
GetProjectRoleResponse Client::getProjectRoleWithOptions(const GetProjectRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.getCode();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProjectRole"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectRoleResponse>();
}

/**
 * @summary Queries the details of a workspace role.
 *
 * @description You can call this operation only if you have purchased DataWorks Basic Edition or a later edition.
 *
 * @param request GetProjectRoleRequest
 * @return GetProjectRoleResponse
 */
GetProjectRoleResponse Client::getProjectRole(const GetProjectRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectRoleWithOptions(request, runtime);
}

/**
 * @summary Query the result of an asynchronous rerun workflow instance
 *
 * @param request GetRerunWorkflowInstancesResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRerunWorkflowInstancesResultResponse
 */
GetRerunWorkflowInstancesResultResponse Client::getRerunWorkflowInstancesResultWithOptions(const GetRerunWorkflowInstancesResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOperationId()) {
    query["OperationId"] = request.getOperationId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRerunWorkflowInstancesResult"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRerunWorkflowInstancesResultResponse>();
}

/**
 * @summary Query the result of an asynchronous rerun workflow instance
 *
 * @param request GetRerunWorkflowInstancesResultRequest
 * @return GetRerunWorkflowInstancesResultResponse
 */
GetRerunWorkflowInstancesResultResponse Client::getRerunWorkflowInstancesResult(const GetRerunWorkflowInstancesResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRerunWorkflowInstancesResultWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a file resource.
 *
 * @param request GetResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceResponse
 */
GetResourceResponse Client::getResourceWithOptions(const GetResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResource"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceResponse>();
}

/**
 * @summary Queries the information about a file resource.
 *
 * @param request GetResourceRequest
 * @return GetResourceResponse
 */
GetResourceResponse Client::getResource(const GetResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a resource group based on its ID.
 *
 * @description DataWorks Basic Edition or a more advanced edition is required to use this feature.
 *
 * @param request GetResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceGroupResponse
 */
GetResourceGroupResponse Client::getResourceGroupWithOptions(const GetResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResourceGroup"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceGroupResponse>();
}

/**
 * @summary Queries the information about a resource group based on its ID.
 *
 * @description DataWorks Basic Edition or a more advanced edition is required to use this feature.
 *
 * @param request GetResourceGroupRequest
 * @return GetResourceGroupResponse
 */
GetResourceGroupResponse Client::getResourceGroup(const GetResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a route based on its ID.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRouteResponse
 */
GetRouteResponse Client::getRouteWithOptions(const GetRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRoute"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRouteResponse>();
}

/**
 * @summary Queries the information about a route based on its ID.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetRouteRequest
 * @return GetRouteResponse
 */
GetRouteResponse Client::getRoute(const GetRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRouteWithOptions(request, runtime);
}

/**
 * @summary Retrieves the schema details of a specified table in Data Map. Only MaxCompute and Hologres schemas are supported.
 *
 * @description 1. DataWorks Basic Edition or a higher edition is required.
 * 2. Only MaxCompute and Hologres types are supported.
 *
 * @param request GetSchemaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSchemaResponse
 */
GetSchemaResponse Client::getSchemaWithOptions(const GetSchemaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSchema"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSchemaResponse>();
}

/**
 * @summary Retrieves the schema details of a specified table in Data Map. Only MaxCompute and Hologres schemas are supported.
 *
 * @description 1. DataWorks Basic Edition or a higher edition is required.
 * 2. Only MaxCompute and Hologres types are supported.
 *
 * @param request GetSchemaRequest
 * @return GetSchemaResponse
 */
GetSchemaResponse Client::getSchema(const GetSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSchemaWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a security policy by its ID. This operation requires both DataWorks tenant administrator and security administrator permissions.
 *
 * @description ## Request
 * - This API retrieves the complete configuration information for a security policy by its ID.
 * - The API returns an error message if the provided `Id` is invalid or does not exist.
 * - The response includes basic policy information, such as its name and description, and policy details, such as control items and their settings.
 * - Note: Some fields in a system default policy cannot be modified or deleted.
 *
 * @param request GetSecurityStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSecurityStrategyResponse
 */
GetSecurityStrategyResponse Client::getSecurityStrategyWithOptions(const GetSecurityStrategyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSecurityStrategy"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSecurityStrategyResponse>();
}

/**
 * @summary Retrieves the details of a security policy by its ID. This operation requires both DataWorks tenant administrator and security administrator permissions.
 *
 * @description ## Request
 * - This API retrieves the complete configuration information for a security policy by its ID.
 * - The API returns an error message if the provided `Id` is invalid or does not exist.
 * - The response includes basic policy information, such as its name and description, and policy details, such as control items and their settings.
 * - Note: Some fields in a system default policy cannot be modified or deleted.
 *
 * @param request GetSecurityStrategyRequest
 * @return GetSecurityStrategyResponse
 */
GetSecurityStrategyResponse Client::getSecurityStrategy(const GetSecurityStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSecurityStrategyWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified Skill by name, including the body of the SKILL.md file and the bundle\\"s download link.
 *
 * @description ## Overview
 * - **request parameters**: The name of the target Skill.
 * - **response parameters**: The details of the Skill, including its name, description, creator ID, modifier ID, visibility level, visibility scope, the body of the SKILL.md file, a temporary download link for bundle.zip (which requires no authentication and will expire), the creation time, and the last modified time.
 * - **Note**: The `BundleUrl` is a temporary download link. Once the link expires, you must call this operation again to get a new one.
 *
 * @param request GetSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillResponse
 */
GetSkillResponse Client::getSkillWithOptions(const GetSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSkill"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillResponse>();
}

/**
 * @summary Retrieves the details of a specified Skill by name, including the body of the SKILL.md file and the bundle\\"s download link.
 *
 * @description ## Overview
 * - **request parameters**: The name of the target Skill.
 * - **response parameters**: The details of the Skill, including its name, description, creator ID, modifier ID, visibility level, visibility scope, the body of the SKILL.md file, a temporary download link for bundle.zip (which requires no authentication and will expire), the creation time, and the last modified time.
 * - **Note**: The `BundleUrl` is a temporary download link. Once the link expires, you must call this operation again to get a new one.
 *
 * @param request GetSkillRequest
 * @return GetSkillResponse
 */
GetSkillResponse Client::getSkill(const GetSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified data table in DataWorks Data Map. You can specify whether to return business metadata.
 *
 * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request GetTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTableResponse
 */
GetTableResponse Client::getTableWithOptions(const GetTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTable"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTableResponse>();
}

/**
 * @summary Retrieves the details of a specified data table in DataWorks Data Map. You can specify whether to return business metadata.
 *
 * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request GetTableRequest
 * @return GetTableResponse
 */
GetTableResponse Client::getTable(const GetTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTableWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a task.
 *
 * @param request GetTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTaskWithOptions(const GetTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTask"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskResponse>();
}

/**
 * @summary Queries the information about a task.
 *
 * @param request GetTaskRequest
 * @return GetTaskResponse
 */
GetTaskResponse Client::getTask(const GetTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an instance.
 *
 * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request GetTaskInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskInstanceResponse
 */
GetTaskInstanceResponse Client::getTaskInstanceWithOptions(const GetTaskInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskInstance"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskInstanceResponse>();
}

/**
 * @summary Queries the information about an instance.
 *
 * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request GetTaskInstanceRequest
 * @return GetTaskInstanceResponse
 */
GetTaskInstanceResponse Client::getTaskInstance(const GetTaskInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTaskInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the run log generated during a specific run of an instance.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetTaskInstanceLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTaskInstanceLogResponse
 */
GetTaskInstanceLogResponse Client::getTaskInstanceLogWithOptions(const GetTaskInstanceLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTaskInstanceLog"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTaskInstanceLogResponse>();
}

/**
 * @summary Queries the run log generated during a specific run of an instance.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetTaskInstanceLogRequest
 * @return GetTaskInstanceLogResponse
 */
GetTaskInstanceLogResponse Client::getTaskInstanceLog(const GetTaskInstanceLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTaskInstanceLogWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a workflow.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkflowResponse
 */
GetWorkflowResponse Client::getWorkflowWithOptions(const GetWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkflow"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkflowResponse>();
}

/**
 * @summary Queries the information about a workflow.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetWorkflowRequest
 * @return GetWorkflowResponse
 */
GetWorkflowResponse Client::getWorkflow(const GetWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkflowWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a workflow.
 *
 * @param request GetWorkflowDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkflowDefinitionResponse
 */
GetWorkflowDefinitionResponse Client::getWorkflowDefinitionWithOptions(const GetWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkflowDefinition"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkflowDefinitionResponse>();
}

/**
 * @summary Queries the information about a workflow.
 *
 * @param request GetWorkflowDefinitionRequest
 * @return GetWorkflowDefinitionResponse
 */
GetWorkflowDefinitionResponse Client::getWorkflowDefinition(const GetWorkflowDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkflowDefinitionWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a workflow instance.
 *
 * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request GetWorkflowInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkflowInstanceResponse
 */
GetWorkflowInstanceResponse Client::getWorkflowInstanceWithOptions(const GetWorkflowInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkflowInstance"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkflowInstanceResponse>();
}

/**
 * @summary Queries the information about a workflow instance.
 *
 * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request GetWorkflowInstanceRequest
 * @return GetWorkflowInstanceResponse
 */
GetWorkflowInstanceResponse Client::getWorkflowInstance(const GetWorkflowInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkflowInstanceWithOptions(request, runtime);
}

/**
 * @summary Assigns roles to members in a workspace.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param tmpReq GrantMemberProjectRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantMemberProjectRolesResponse
 */
GrantMemberProjectRolesResponse Client::grantMemberProjectRolesWithOptions(const GrantMemberProjectRolesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GrantMemberProjectRolesShrinkRequest request = GrantMemberProjectRolesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRoleCodes()) {
    request.setRoleCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRoleCodes(), "RoleCodes", "json"));
  }

  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRoleCodesShrink()) {
    body["RoleCodes"] = request.getRoleCodesShrink();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GrantMemberProjectRoles"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantMemberProjectRolesResponse>();
}

/**
 * @summary Assigns roles to members in a workspace.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GrantMemberProjectRolesRequest
 * @return GrantMemberProjectRolesResponse
 */
GrantMemberProjectRolesResponse Client::grantMemberProjectRoles(const GrantMemberProjectRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return grantMemberProjectRolesWithOptions(request, runtime);
}

/**
 * @summary Imports a certificate file.
 *
 * @description 1. This feature requires DataWorks Basic Edition or a later version.
 * 2. You must be assigned one of the following roles in the DataWorks project: Tenant Owner, Space Administrator, Project Owner, or O\\&M.
 *
 * @param request ImportCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportCertificateResponse
 */
ImportCertificateResponse Client::importCertificateWithOptions(const ImportCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertificateFile()) {
    query["CertificateFile"] = request.getCertificateFile();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportCertificate"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportCertificateResponse>();
}

/**
 * @summary Imports a certificate file.
 *
 * @description 1. This feature requires DataWorks Basic Edition or a later version.
 * 2. You must be assigned one of the following roles in the DataWorks project: Tenant Owner, Space Administrator, Project Owner, or O\\&M.
 *
 * @param request ImportCertificateRequest
 * @return ImportCertificateResponse
 */
ImportCertificateResponse Client::importCertificate(const ImportCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importCertificateWithOptions(request, runtime);
}

ImportCertificateResponse Client::importCertificateAdvance(const ImportCertificateAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "dataworks-public"},
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
  ImportCertificateRequest importCertificateReq = ImportCertificateRequest();
  Utils::Utils::convert(request, importCertificateReq);
  if (!!request.hasCertificateFileObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getCertificateFileObject()},
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
    importCertificateReq.setCertificateFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  ImportCertificateResponse importCertificateResp = importCertificateWithOptions(importCertificateReq, runtime);
  return importCertificateResp;
}

/**
 * @summary Imports a workflow node defined by FlowSpec and its child nodes into DataStudio.
 *
 * @description >Notice: 
 * - This operation does not support importing multiple workflows. If more than one workflow is defined in the FlowSpec, all workflows except the first one are ignored.
 * - This is an asynchronous operation. The response returns an asynchronous task object. Call GetJobStatus to query the execution status of the task.
 *
 * @param request ImportWorkflowDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportWorkflowDefinitionResponse
 */
ImportWorkflowDefinitionResponse Client::importWorkflowDefinitionWithOptions(const ImportWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDryRun()) {
    body["DryRun"] = request.getDryRun();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.getSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ImportWorkflowDefinition"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportWorkflowDefinitionResponse>();
}

/**
 * @summary Imports a workflow node defined by FlowSpec and its child nodes into DataStudio.
 *
 * @description >Notice: 
 * - This operation does not support importing multiple workflows. If more than one workflow is defined in the FlowSpec, all workflows except the first one are ignored.
 * - This is an asynchronous operation. The response returns an asynchronous task object. Call GetJobStatus to query the execution status of the task.
 *
 * @param request ImportWorkflowDefinitionRequest
 * @return ImportWorkflowDefinitionResponse
 */
ImportWorkflowDefinitionResponse Client::importWorkflowDefinition(const ImportWorkflowDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importWorkflowDefinitionWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of artifacts from a specified session.
 *
 * @description ## Request
 * - This operation retrieves all artifacts from a specific session. You can use the `Params.RequestId` parameter to filter for artifacts from a specific request.
 * - The `NextToken` parameter is a continuation token used to retrieve the next page of results. Do not specify this parameter for the first request.
 * - By default, this operation returns up to 50 artifacts per page. You can use the `MaxResults` parameter to specify a different limit.
 *
 * @param tmpReq ListAgentSessionArtifactsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentSessionArtifactsResponse
 */
ListAgentSessionArtifactsResponse Client::listAgentSessionArtifactsWithOptions(const ListAgentSessionArtifactsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAgentSessionArtifactsShrinkRequest request = ListAgentSessionArtifactsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAgentSessionArtifacts"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentSessionArtifactsResponse>();
}

/**
 * @summary Retrieves a list of artifacts from a specified session.
 *
 * @description ## Request
 * - This operation retrieves all artifacts from a specific session. You can use the `Params.RequestId` parameter to filter for artifacts from a specific request.
 * - The `NextToken` parameter is a continuation token used to retrieve the next page of results. Do not specify this parameter for the first request.
 * - By default, this operation returns up to 50 artifacts per page. You can use the `MaxResults` parameter to specify a different limit.
 *
 * @param request ListAgentSessionArtifactsRequest
 * @return ListAgentSessionArtifactsResponse
 */
ListAgentSessionArtifactsResponse Client::listAgentSessionArtifacts(const ListAgentSessionArtifactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAgentSessionArtifactsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the conversation history for the agent session.
 *
 * @description ## Request
 * - Specify at least one of `agentName` or `sessionSourceList`.
 * - You can use the `tagList`, `sessionId`, and `sessionTitle` parameters for combined filtering.
 * - The response follows the Alibaba Cloud OpenAPI pagination specification and includes the `totalCount`, `maxResults`, `nextToken`, and `sessionList` fields.
 * - If you provide an invalid string for `nextToken`, its value defaults to `1`.
 * - By default, this operation returns 50 records per page. You can use the `maxResults` parameter to adjust this number.
 *
 * @param tmpReq ListAgentSessionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentSessionsResponse
 */
ListAgentSessionsResponse Client::listAgentSessionsWithOptions(const ListAgentSessionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAgentSessionsShrinkRequest request = ListAgentSessionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAgentSessions"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentSessionsResponse>();
}

/**
 * @summary Retrieves the conversation history for the agent session.
 *
 * @description ## Request
 * - Specify at least one of `agentName` or `sessionSourceList`.
 * - You can use the `tagList`, `sessionId`, and `sessionTitle` parameters for combined filtering.
 * - The response follows the Alibaba Cloud OpenAPI pagination specification and includes the `totalCount`, `maxResults`, `nextToken`, and `sessionList` fields.
 * - If you provide an invalid string for `nextToken`, its value defaults to `1`.
 * - By default, this operation returns 50 records per page. You can use the `maxResults` parameter to adjust this number.
 *
 * @param request ListAgentSessionsRequest
 * @return ListAgentSessionsResponse
 */
ListAgentSessionsResponse Client::listAgentSessions(const ListAgentSessionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAgentSessionsWithOptions(request, runtime);
}

/**
 * @summary Lists agents for the current tenant and supports filtering by name and pagination.
 *
 * @description ## Request description
 * - This operation lists all available agents for the current tenant.
 * - You can filter the results by specifying an exact match for the `agentName` parameter.
 *
 * @param tmpReq ListAgentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAgentsResponse
 */
ListAgentsResponse Client::listAgentsWithOptions(const ListAgentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAgentsShrinkRequest request = ListAgentsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAgents"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAgentsResponse>();
}

/**
 * @summary Lists agents for the current tenant and supports filtering by name and pagination.
 *
 * @description ## Request description
 * - This operation lists all available agents for the current tenant.
 * - You can filter the results by specifying an exact match for the `agentName` parameter.
 *
 * @param request ListAgentsRequest
 * @return ListAgentsResponse
 */
ListAgentsResponse Client::listAgents(const ListAgentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAgentsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of custom monitoring alert rules.
 *
 * @param tmpReq ListAlertRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlertRulesResponse
 */
ListAlertRulesResponse Client::listAlertRulesWithOptions(const ListAlertRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAlertRulesShrinkRequest request = ListAlertRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTaskIds()) {
    request.setTaskIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskIds(), "TaskIds", "json"));
  }

  if (!!tmpReq.hasTypes()) {
    request.setTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTypes(), "Types", "json"));
  }

  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.getOwner();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasReceiver()) {
    query["Receiver"] = request.getReceiver();
  }

  if (!!request.hasTaskIdsShrink()) {
    query["TaskIds"] = request.getTaskIdsShrink();
  }

  if (!!request.hasTypesShrink()) {
    query["Types"] = request.getTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAlertRules"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlertRulesResponse>();
}

/**
 * @summary Queries a list of custom monitoring alert rules.
 *
 * @param request ListAlertRulesRequest
 * @return ListAlertRulesResponse
 */
ListAlertRulesResponse Client::listAlertRules(const ListAlertRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAlertRulesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of workflows.
 *
 * @param request ListBusinessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBusinessResponse
 */
ListBusinessResponse Client::listBusinessWithOptions(const ListBusinessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasKeyword()) {
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListBusiness"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBusinessResponse>();
}

/**
 * @summary Queries a list of workflows.
 *
 * @param request ListBusinessRequest
 * @return ListBusinessResponse
 */
ListBusinessResponse Client::listBusiness(const ListBusinessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBusinessWithOptions(request, runtime);
}

/**
 * @summary Queries a list of catalogs in Data Map. Only catalogs of the Data Lake Formation (DLF) and StarRocks metadata crawler types are supported. For the DLF metadata crawler type, all supported data catalogs are returned. For the StarRocks metadata crawler type, data catalogs in a specific instance are returned.
 *
 * @description 1. DataWorks Basic Edition or a higher edition is required.
 *
 * @param tmpReq ListCatalogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCatalogsResponse
 */
ListCatalogsResponse Client::listCatalogsWithOptions(const ListCatalogsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListCatalogsShrinkRequest request = ListCatalogsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTypes()) {
    request.setTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTypes(), "Types", "simple"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCatalogs"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCatalogsResponse>();
}

/**
 * @summary Queries a list of catalogs in Data Map. Only catalogs of the Data Lake Formation (DLF) and StarRocks metadata crawler types are supported. For the DLF metadata crawler type, all supported data catalogs are returned. For the StarRocks metadata crawler type, data catalogs in a specific instance are returned.
 *
 * @description 1. DataWorks Basic Edition or a higher edition is required.
 *
 * @param request ListCatalogsRequest
 * @return ListCatalogsResponse
 */
ListCatalogsResponse Client::listCatalogs(const ListCatalogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCatalogsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of certificate files.
 *
 * @description 1. This API operation is available for all DataWorks editions.
 * 2. You can call this operation only if you are assigned one of the following roles in DataWorks: Tenant Owner, Workspace Administrator, Deploy, Develop, Visitor, Workspace Owner, O\\&M, Model Designer, Security Administrator, Data Analyst, OpenPlatform Administrator, and Data Governance Administrator.
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
    {"version" , "2024-05-18"},
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
 * @summary Retrieves a list of certificate files.
 *
 * @description 1. This API operation is available for all DataWorks editions.
 * 2. You can call this operation only if you are assigned one of the following roles in DataWorks: Tenant Owner, Workspace Administrator, Deploy, Develop, Visitor, Workspace Owner, O\\&M, Model Designer, Security Administrator, Data Analyst, OpenPlatform Administrator, and Data Governance Administrator.
 *
 * @param request ListCertificatesRequest
 * @return ListCertificatesResponse
 */
ListCertificatesResponse Client::listCertificates(const ListCertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCertificatesWithOptions(request, runtime);
}

/**
 * @summary Queries the column list of a specified data table in DataWorks Data Map.
 *
 * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request ListColumnsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListColumnsResponse
 */
ListColumnsResponse Client::listColumnsWithOptions(const ListColumnsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListColumns"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListColumnsResponse>();
}

/**
 * @summary Queries the column list of a specified data table in DataWorks Data Map.
 *
 * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request ListColumnsRequest
 * @return ListColumnsResponse
 */
ListColumnsResponse Client::listColumns(const ListColumnsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listColumnsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of components.
 *
 * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request ListComponentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComponentsResponse
 */
ListComponentsResponse Client::listComponentsWithOptions(const ListComponentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListComponents"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComponentsResponse>();
}

/**
 * @summary Retrieves a list of components.
 *
 * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request ListComponentsRequest
 * @return ListComponentsResponse
 */
ListComponentsResponse Client::listComponents(const ListComponentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listComponentsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of computing resources that meet the specified business information.
 *
 * @description 1. DataWorks Basic Edition or a more advanced edition is required.
 * 2. You must have at least one of the following roles in the DataWorks workspace:
 * 3. Tenant Owner, Workspace Administrator, Deploy, Developer, Visitor, Project Owner, O\\&M, Model Designer, Security Administrator, Data Analyst, Development Platform Administrator, Data Governance Administrator
 *
 * @param tmpReq ListComputeResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComputeResourcesResponse
 */
ListComputeResourcesResponse Client::listComputeResourcesWithOptions(const ListComputeResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListComputeResourcesShrinkRequest request = ListComputeResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTypes()) {
    request.setTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTypes(), "Types", "simple"));
  }

  json query = {};
  if (!!request.hasEnvType()) {
    query["EnvType"] = request.getEnvType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
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

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasTypesShrink()) {
    query["Types"] = request.getTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListComputeResources"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComputeResourcesResponse>();
}

/**
 * @summary Queries the list of computing resources that meet the specified business information.
 *
 * @description 1. DataWorks Basic Edition or a more advanced edition is required.
 * 2. You must have at least one of the following roles in the DataWorks workspace:
 * 3. Tenant Owner, Workspace Administrator, Deploy, Developer, Visitor, Project Owner, O\\&M, Model Designer, Security Administrator, Data Analyst, Development Platform Administrator, Data Governance Administrator
 *
 * @param request ListComputeResourcesRequest
 * @return ListComputeResourcesResponse
 */
ListComputeResourcesResponse Client::listComputeResources(const ListComputeResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listComputeResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of metadata crawler types supported in Data Map. The subtypes of the types and the hierarchical relationship between the subtypes are also returned.
 *
 * @description 1. DataWorks Basic Edition or a higher edition is required.
 *
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCrawlerTypesResponse
 */
ListCrawlerTypesResponse Client::listCrawlerTypesWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListCrawlerTypes"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCrawlerTypesResponse>();
}

/**
 * @summary Queries a list of metadata crawler types supported in Data Map. The subtypes of the types and the hierarchical relationship between the subtypes are also returned.
 *
 * @description 1. DataWorks Basic Edition or a higher edition is required.
 *
 * @return ListCrawlerTypesResponse
 */
ListCrawlerTypesResponse Client::listCrawlerTypes() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCrawlerTypesWithOptions(runtime);
}

/**
 * @summary Retrieves a paginated list of custom agents.
 *
 * @description ## Request
 * - **Search keyword**: Use the `Q` parameter to perform a fuzzy search by agent name.
 * - **Visibility level filtering**: Use the `Visibility` parameter to filter results by visibility level, such as `TENANT`, `PROJECT`, or `USER`.
 * - **Paging information**: Use the `MaxResults` and `NextToken` parameters to implement paginated queries. `NextToken` retrieves the next page of results.
 *
 * @param tmpReq ListCustomAgentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomAgentsResponse
 */
ListCustomAgentsResponse Client::listCustomAgentsWithOptions(const ListCustomAgentsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListCustomAgentsShrinkRequest request = ListCustomAgentsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVisibility()) {
    request.setVisibilityShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVisibility(), "Visibility", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  json body = {};
  if (!!request.hasQ()) {
    body["Q"] = request.getQ();
  }

  if (!!request.hasVisibilityShrink()) {
    body["Visibility"] = request.getVisibilityShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListCustomAgents"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomAgentsResponse>();
}

/**
 * @summary Retrieves a paginated list of custom agents.
 *
 * @description ## Request
 * - **Search keyword**: Use the `Q` parameter to perform a fuzzy search by agent name.
 * - **Visibility level filtering**: Use the `Visibility` parameter to filter results by visibility level, such as `TENANT`, `PROJECT`, or `USER`.
 * - **Paging information**: Use the `MaxResults` and `NextToken` parameters to implement paginated queries. `NextToken` retrieves the next page of results.
 *
 * @param request ListCustomAgentsRequest
 * @return ListCustomAgentsResponse
 */
ListCustomAgentsResponse Client::listCustomAgents(const ListCustomAgentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomAgentsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of custom attribute definitions.
 *
 * @param request ListCustomAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomAttributesResponse
 */
ListCustomAttributesResponse Client::listCustomAttributesWithOptions(const ListCustomAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEntityTypes()) {
    query["EntityTypes"] = request.getEntityTypes();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomAttributes"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomAttributesResponse>();
}

/**
 * @summary Retrieves a list of custom attribute definitions.
 *
 * @param request ListCustomAttributesRequest
 * @return ListCustomAttributesResponse
 */
ListCustomAttributesResponse Client::listCustomAttributes(const ListCustomAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomAttributesWithOptions(request, runtime);
}

/**
 * @summary Views alert rules configured for a synchronization task.
 *
 * @param request ListDIAlarmRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDIAlarmRulesResponse
 */
ListDIAlarmRulesResponse Client::listDIAlarmRulesWithOptions(const ListDIAlarmRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDIAlarmRules"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDIAlarmRulesResponse>();
}

/**
 * @summary Views alert rules configured for a synchronization task.
 *
 * @param request ListDIAlarmRulesRequest
 * @return ListDIAlarmRulesResponse
 */
ListDIAlarmRulesResponse Client::listDIAlarmRules(const ListDIAlarmRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDIAlarmRulesWithOptions(request, runtime);
}

/**
 * @summary Queries events for a synchronization task.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListDIJobEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDIJobEventsResponse
 */
ListDIJobEventsResponse Client::listDIJobEventsWithOptions(const ListDIJobEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDIJobEvents"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDIJobEventsResponse>();
}

/**
 * @summary Queries events for a synchronization task.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListDIJobEventsRequest
 * @return ListDIJobEventsResponse
 */
ListDIJobEventsResponse Client::listDIJobEvents(const ListDIJobEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDIJobEventsWithOptions(request, runtime);
}

/**
 * @summary Queries metrics for a synchronization task.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param tmpReq ListDIJobMetricsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDIJobMetricsResponse
 */
ListDIJobMetricsResponse Client::listDIJobMetricsWithOptions(const ListDIJobMetricsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDIJobMetricsShrinkRequest request = ListDIJobMetricsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMetricName()) {
    request.setMetricNameShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMetricName(), "MetricName", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDIJobMetrics"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDIJobMetricsResponse>();
}

/**
 * @summary Queries metrics for a synchronization task.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListDIJobMetricsRequest
 * @return ListDIJobMetricsResponse
 */
ListDIJobMetricsResponse Client::listDIJobMetrics(const ListDIJobMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDIJobMetricsWithOptions(request, runtime);
}

/**
 * @summary Queries the running information about a synchronization task.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListDIJobRunDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDIJobRunDetailsResponse
 */
ListDIJobRunDetailsResponse Client::listDIJobRunDetailsWithOptions(const ListDIJobRunDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDIJobRunDetails"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDIJobRunDetailsResponse>();
}

/**
 * @summary Queries the running information about a synchronization task.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListDIJobRunDetailsRequest
 * @return ListDIJobRunDetailsResponse
 */
ListDIJobRunDetailsResponse Client::listDIJobRunDetails(const ListDIJobRunDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDIJobRunDetailsWithOptions(request, runtime);
}

/**
 * @summary Lists Data Integration jobs.
 *
 * @description This operation requires DataWorks Basic Edition or a later edition.
 *
 * @param request ListDIJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDIJobsResponse
 */
ListDIJobsResponse Client::listDIJobsWithOptions(const ListDIJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDIJobs"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDIJobsResponse>();
}

/**
 * @summary Lists Data Integration jobs.
 *
 * @description This operation requires DataWorks Basic Edition or a later edition.
 *
 * @param request ListDIJobsRequest
 * @return ListDIJobsResponse
 */
ListDIJobsResponse Client::listDIJobs(const ListDIJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDIJobsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tags.
 *
 * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
 *
 * @param request ListDataAssetTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataAssetTagsResponse
 */
ListDataAssetTagsResponse Client::listDataAssetTagsWithOptions(const ListDataAssetTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataAssetTags"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataAssetTagsResponse>();
}

/**
 * @summary Queries a list of tags.
 *
 * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
 *
 * @param request ListDataAssetTagsRequest
 * @return ListDataAssetTagsResponse
 */
ListDataAssetTagsResponse Client::listDataAssetTags(const ListDataAssetTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataAssetTagsWithOptions(request, runtime);
}

/**
 * @summary Queries DataWorks data assets that are associated with tags by paging.
 *
 * @description You must purchase DataWorks Enterprise Edition or a higher edition to use this feature.
 *
 * @param tmpReq ListDataAssetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataAssetsResponse
 */
ListDataAssetsResponse Client::listDataAssetsWithOptions(const ListDataAssetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataAssetsShrinkRequest request = ListDataAssetsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataAssetIds()) {
    request.setDataAssetIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataAssetIds(), "DataAssetIds", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataAssets"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataAssetsResponse>();
}

/**
 * @summary Queries DataWorks data assets that are associated with tags by paging.
 *
 * @description You must purchase DataWorks Enterprise Edition or a higher edition to use this feature.
 *
 * @param request ListDataAssetsRequest
 * @return ListDataAssetsResponse
 */
ListDataAssetsResponse Client::listDataAssets(const ListDataAssetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataAssetsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of data quality alert rules in a project.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request ListDataQualityAlertRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataQualityAlertRulesResponse
 */
ListDataQualityAlertRulesResponse Client::listDataQualityAlertRulesWithOptions(const ListDataQualityAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataQualityScanId()) {
    query["DataQualityScanId"] = request.getDataQualityScanId();
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

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataQualityAlertRules"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataQualityAlertRulesResponse>();
}

/**
 * @summary Queries the list of data quality alert rules in a project.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request ListDataQualityAlertRulesRequest
 * @return ListDataQualityAlertRulesResponse
 */
ListDataQualityAlertRulesResponse Client::listDataQualityAlertRules(const ListDataQualityAlertRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataQualityAlertRulesWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListDataQualityEvaluationTaskInstances is deprecated, please use dataworks-public::2024-05-18::ListDataQualityScanRuns instead.
 *
 * @summary Performs a paginated query of the quality monitoring task instance list.
 *
 * @description You must purchase DataWorks Basic Edition or above to use this feature.
 *
 * @param request ListDataQualityEvaluationTaskInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataQualityEvaluationTaskInstancesResponse
 */
ListDataQualityEvaluationTaskInstancesResponse Client::listDataQualityEvaluationTaskInstancesWithOptions(const ListDataQualityEvaluationTaskInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataQualityEvaluationTaskInstances"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataQualityEvaluationTaskInstancesResponse>();
}

/**
 * @deprecated OpenAPI ListDataQualityEvaluationTaskInstances is deprecated, please use dataworks-public::2024-05-18::ListDataQualityScanRuns instead.
 *
 * @summary Performs a paginated query of the quality monitoring task instance list.
 *
 * @description You must purchase DataWorks Basic Edition or above to use this feature.
 *
 * @param request ListDataQualityEvaluationTaskInstancesRequest
 * @return ListDataQualityEvaluationTaskInstancesResponse
 */
ListDataQualityEvaluationTaskInstancesResponse Client::listDataQualityEvaluationTaskInstances(const ListDataQualityEvaluationTaskInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataQualityEvaluationTaskInstancesWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListDataQualityEvaluationTasks is deprecated, please use dataworks-public::2024-05-18::ListDataQualityScans instead.
 *
 * @summary Lists quality monitoring nodes by paging query.
 *
 * @description 需要购买DataWorks基础版及以上版本才能使用
 *
 * @param request ListDataQualityEvaluationTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataQualityEvaluationTasksResponse
 */
ListDataQualityEvaluationTasksResponse Client::listDataQualityEvaluationTasksWithOptions(const ListDataQualityEvaluationTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataQualityEvaluationTasks"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataQualityEvaluationTasksResponse>();
}

/**
 * @deprecated OpenAPI ListDataQualityEvaluationTasks is deprecated, please use dataworks-public::2024-05-18::ListDataQualityScans instead.
 *
 * @summary Lists quality monitoring nodes by paging query.
 *
 * @description 需要购买DataWorks基础版及以上版本才能使用
 *
 * @param request ListDataQualityEvaluationTasksRequest
 * @return ListDataQualityEvaluationTasksResponse
 */
ListDataQualityEvaluationTasksResponse Client::listDataQualityEvaluationTasks(const ListDataQualityEvaluationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataQualityEvaluationTasksWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListDataQualityResults is deprecated, please use dataworks-public::2024-05-18::ListDataQualityScanRuns instead.
 *
 * @summary Queries a list of data quality results by using paging.
 *
 * @description 需要购买DataWorks基础版及以上版本才能使用
 *
 * @param request ListDataQualityResultsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataQualityResultsResponse
 */
ListDataQualityResultsResponse Client::listDataQualityResultsWithOptions(const ListDataQualityResultsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataQualityResults"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataQualityResultsResponse>();
}

/**
 * @deprecated OpenAPI ListDataQualityResults is deprecated, please use dataworks-public::2024-05-18::ListDataQualityScanRuns instead.
 *
 * @summary Queries a list of data quality results by using paging.
 *
 * @description 需要购买DataWorks基础版及以上版本才能使用
 *
 * @param request ListDataQualityResultsRequest
 * @return ListDataQualityResultsResponse
 */
ListDataQualityResultsResponse Client::listDataQualityResults(const ListDataQualityResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataQualityResultsWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListDataQualityRuleTemplates is deprecated, please use dataworks-public::2024-05-18::ListDataQualityTemplates instead.
 *
 * @summary Queries a list of data quality rule templates.
 *
 * @description You must purchase DataWorks Basic Edition or higher to use this feature.
 *
 * @param request ListDataQualityRuleTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataQualityRuleTemplatesResponse
 */
ListDataQualityRuleTemplatesResponse Client::listDataQualityRuleTemplatesWithOptions(const ListDataQualityRuleTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataQualityRuleTemplates"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataQualityRuleTemplatesResponse>();
}

/**
 * @deprecated OpenAPI ListDataQualityRuleTemplates is deprecated, please use dataworks-public::2024-05-18::ListDataQualityTemplates instead.
 *
 * @summary Queries a list of data quality rule templates.
 *
 * @description You must purchase DataWorks Basic Edition or higher to use this feature.
 *
 * @param request ListDataQualityRuleTemplatesRequest
 * @return ListDataQualityRuleTemplatesResponse
 */
ListDataQualityRuleTemplatesResponse Client::listDataQualityRuleTemplates(const ListDataQualityRuleTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataQualityRuleTemplatesWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListDataQualityRules is deprecated, please use dataworks-public::2024-05-18::ListDataQualityScans instead.
 *
 * @summary Paginated query of data quality monitoring rules.
 *
 * @description Requires DataWorks Basic Edition or above.
 *
 * @param request ListDataQualityRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataQualityRulesResponse
 */
ListDataQualityRulesResponse Client::listDataQualityRulesWithOptions(const ListDataQualityRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataQualityRules"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataQualityRulesResponse>();
}

/**
 * @deprecated OpenAPI ListDataQualityRules is deprecated, please use dataworks-public::2024-05-18::ListDataQualityScans instead.
 *
 * @summary Paginated query of data quality monitoring rules.
 *
 * @description Requires DataWorks Basic Edition or above.
 *
 * @param request ListDataQualityRulesRequest
 * @return ListDataQualityRulesResponse
 */
ListDataQualityRulesResponse Client::listDataQualityRules(const ListDataQualityRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataQualityRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the run history of data quality scans in a specified project.
 *
 * @description This feature requires DataWorks basic edition or higher.
 *
 * @param tmpReq ListDataQualityScanRunsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataQualityScanRunsResponse
 */
ListDataQualityScanRunsResponse Client::listDataQualityScanRunsWithOptions(const ListDataQualityScanRunsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataQualityScanRunsShrinkRequest request = ListDataQualityScanRunsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilter(), "Filter", "json"));
  }

  json query = {};
  if (!!request.hasCreateTimeFrom()) {
    query["CreateTimeFrom"] = request.getCreateTimeFrom();
  }

  if (!!request.hasCreateTimeTo()) {
    query["CreateTimeTo"] = request.getCreateTimeTo();
  }

  if (!!request.hasDataQualityScanId()) {
    query["DataQualityScanId"] = request.getDataQualityScanId();
  }

  if (!!request.hasFilterShrink()) {
    query["Filter"] = request.getFilterShrink();
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

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataQualityScanRuns"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataQualityScanRunsResponse>();
}

/**
 * @summary Queries the run history of data quality scans in a specified project.
 *
 * @description This feature requires DataWorks basic edition or higher.
 *
 * @param request ListDataQualityScanRunsRequest
 * @return ListDataQualityScanRunsResponse
 */
ListDataQualityScanRunsResponse Client::listDataQualityScanRuns(const ListDataQualityScanRunsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataQualityScanRunsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of data quality scan tasks in a project.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request ListDataQualityScansRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataQualityScansResponse
 */
ListDataQualityScansResponse Client::listDataQualityScansWithOptions(const ListDataQualityScansRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
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

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasTable()) {
    query["Table"] = request.getTable();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataQualityScans"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataQualityScansResponse>();
}

/**
 * @summary Queries the list of data quality scan tasks in a project.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request ListDataQualityScansRequest
 * @return ListDataQualityScansResponse
 */
ListDataQualityScansResponse Client::listDataQualityScans(const ListDataQualityScansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataQualityScansWithOptions(request, runtime);
}

/**
 * @summary Queries the list of data quality rule templates in a project.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request ListDataQualityTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataQualityTemplatesResponse
 */
ListDataQualityTemplatesResponse Client::listDataQualityTemplatesWithOptions(const ListDataQualityTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalog()) {
    query["Catalog"] = request.getCatalog();
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

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataQualityTemplates"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataQualityTemplatesResponse>();
}

/**
 * @summary Queries the list of data quality rule templates in a project.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request ListDataQualityTemplatesRequest
 * @return ListDataQualityTemplatesResponse
 */
ListDataQualityTemplatesResponse Client::listDataQualityTemplates(const ListDataQualityTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataQualityTemplatesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of sharing rules for a data source.
 *
 * @description 1. This operation is available for all DataWorks editions.
 * 2. To query the sharing rules of a data source associated with a workspace, you must have the data source sharing permissions in that workspace. You must have one of the following roles in DataWorks:
 * - Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
 *
 * @param request ListDataSourceSharedRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSourceSharedRulesResponse
 */
ListDataSourceSharedRulesResponse Client::listDataSourceSharedRulesWithOptions(const ListDataSourceSharedRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataSourceSharedRules"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSourceSharedRulesResponse>();
}

/**
 * @summary Retrieves a list of sharing rules for a data source.
 *
 * @description 1. This operation is available for all DataWorks editions.
 * 2. To query the sharing rules of a data source associated with a workspace, you must have the data source sharing permissions in that workspace. You must have one of the following roles in DataWorks:
 * - Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
 *
 * @param request ListDataSourceSharedRulesRequest
 * @return ListDataSourceSharedRulesResponse
 */
ListDataSourceSharedRulesResponse Client::listDataSourceSharedRules(const ListDataSourceSharedRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSourceSharedRulesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of data sources that match the specified filter conditions.
 *
 * @description 1. This operation is available for all DataWorks editions.
 * 2. To call this operation, you must have one of the following roles in DataWorks:
 * - Tenant Owner, Workspace Administrator, Deploy, Develop, Visitor, Workspace Owner, O\\&M, Model Designer, Security Administrator, Data Analyst, OpenPlatform Administrator, and Data Governance Administrator
 *
 * @param tmpReq ListDataSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSourcesResponse
 */
ListDataSourcesResponse Client::listDataSourcesWithOptions(const ListDataSourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDataSourcesShrinkRequest request = ListDataSourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTypes()) {
    request.setTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTypes(), "Types", "simple"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataSources"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataSourcesResponse>();
}

/**
 * @summary Retrieves a list of data sources that match the specified filter conditions.
 *
 * @description 1. This operation is available for all DataWorks editions.
 * 2. To call this operation, you must have one of the following roles in DataWorks:
 * - Tenant Owner, Workspace Administrator, Deploy, Develop, Visitor, Workspace Owner, O\\&M, Model Designer, Security Administrator, Data Analyst, OpenPlatform Administrator, and Data Governance Administrator
 *
 * @param request ListDataSourcesRequest
 * @return ListDataSourcesResponse
 */
ListDataSourcesResponse Client::listDataSources(const ListDataSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSourcesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of databases in an instance, cluster, or data catalog in Data Map. For DLF or StarRocks data sources, you can call this API operation to query databases in a data catalog. For StarRocks data sources, you can call this API operation to query databases in internal catalogs. For other types of data sources, you can call this API operation to query databases in an instance or cluster.
 *
 * @description 1. DataWorks Basic Edition or a higher edition is required.
 * 2. For the StarRocks type, only the Internal catalog is supported.
 *
 * @param request ListDatabasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatabasesResponse
 */
ListDatabasesResponse Client::listDatabasesWithOptions(const ListDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatabases"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatabasesResponse>();
}

/**
 * @summary Queries a list of databases in an instance, cluster, or data catalog in Data Map. For DLF or StarRocks data sources, you can call this API operation to query databases in a data catalog. For StarRocks data sources, you can call this API operation to query databases in internal catalogs. For other types of data sources, you can call this API operation to query databases in an instance or cluster.
 *
 * @description 1. DataWorks Basic Edition or a higher edition is required.
 * 2. For the StarRocks type, only the Internal catalog is supported.
 *
 * @param request ListDatabasesRequest
 * @return ListDatabasesResponse
 */
ListDatabasesResponse Client::listDatabases(const ListDatabasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatabasesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the version list for a given dataset.
 *
 * @param request ListDatasetVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatasetVersionsResponse
 */
ListDatasetVersionsResponse Client::listDatasetVersionsWithOptions(const ListDatasetVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCreatorId()) {
    body["CreatorId"] = request.getCreatorId();
  }

  if (!!request.hasDatasetId()) {
    body["DatasetId"] = request.getDatasetId();
  }

  if (!!request.hasOrder()) {
    body["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    body["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDatasetVersions"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatasetVersionsResponse>();
}

/**
 * @summary Retrieves the version list for a given dataset.
 *
 * @param request ListDatasetVersionsRequest
 * @return ListDatasetVersionsResponse
 */
ListDatasetVersionsResponse Client::listDatasetVersions(const ListDatasetVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatasetVersionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of datasets. Currently, DataWorks datasets and PAI datasets are supported.
 *
 * @param tmpReq ListDatasetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatasetsResponse
 */
ListDatasetsResponse Client::listDatasetsWithOptions(const ListDatasetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDatasetsShrinkRequest request = ListDatasetsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataTypeList()) {
    request.setDataTypeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataTypeList(), "DataTypeList", "simple"));
  }

  if (!!tmpReq.hasStorageTypeList()) {
    request.setStorageTypeListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStorageTypeList(), "StorageTypeList", "simple"));
  }

  json body = {};
  if (!!request.hasCreatorId()) {
    body["CreatorId"] = request.getCreatorId();
  }

  if (!!request.hasDataTypeListShrink()) {
    body["DataTypeList"] = request.getDataTypeListShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOrder()) {
    body["Order"] = request.getOrder();
  }

  if (!!request.hasOrigin()) {
    body["Origin"] = request.getOrigin();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSortBy()) {
    body["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStorageTypeListShrink()) {
    body["StorageTypeList"] = request.getStorageTypeListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDatasets"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatasetsResponse>();
}

/**
 * @summary Queries a list of datasets. Currently, DataWorks datasets and PAI datasets are supported.
 *
 * @param request ListDatasetsRequest
 * @return ListDatasetsResponse
 */
ListDatasetsResponse Client::listDatasets(const ListDatasetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatasetsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of versions of files to be deployed.
 *
 * @param tmpReq ListDeploymentPackageFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeploymentPackageFilesResponse
 */
ListDeploymentPackageFilesResponse Client::listDeploymentPackageFilesWithOptions(const ListDeploymentPackageFilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDeploymentPackageFilesShrinkRequest request = ListDeploymentPackageFilesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFileIds()) {
    request.setFileIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFileIds(), "FileIds", "json"));
  }

  json query = {};
  if (!!request.hasBusinessId()) {
    query["BusinessId"] = request.getBusinessId();
  }

  if (!!request.hasChangeType()) {
    query["ChangeType"] = request.getChangeType();
  }

  if (!!request.hasCommitFrom()) {
    query["CommitFrom"] = request.getCommitFrom();
  }

  if (!!request.hasCommitTo()) {
    query["CommitTo"] = request.getCommitTo();
  }

  if (!!request.hasCommitUserId()) {
    query["CommitUserId"] = request.getCommitUserId();
  }

  if (!!request.hasFileIdsShrink()) {
    query["FileIds"] = request.getFileIdsShrink();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasFileType()) {
    query["FileType"] = request.getFileType();
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

  if (!!request.hasSolutionId()) {
    query["SolutionId"] = request.getSolutionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeploymentPackageFiles"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeploymentPackageFilesResponse>();
}

/**
 * @summary Queries a list of versions of files to be deployed.
 *
 * @param request ListDeploymentPackageFilesRequest
 * @return ListDeploymentPackageFilesResponse
 */
ListDeploymentPackageFilesResponse Client::listDeploymentPackageFiles(const ListDeploymentPackageFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDeploymentPackageFilesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of deployment packages.
 *
 * @param request ListDeploymentPackagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeploymentPackagesResponse
 */
ListDeploymentPackagesResponse Client::listDeploymentPackagesWithOptions(const ListDeploymentPackagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCreator()) {
    body["Creator"] = request.getCreator();
  }

  if (!!request.hasEndCreateTime()) {
    body["EndCreateTime"] = request.getEndCreateTime();
  }

  if (!!request.hasEndExecuteTime()) {
    body["EndExecuteTime"] = request.getEndExecuteTime();
  }

  if (!!request.hasExecutor()) {
    body["Executor"] = request.getExecutor();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDeploymentPackages"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeploymentPackagesResponse>();
}

/**
 * @summary Queries a list of deployment packages.
 *
 * @param request ListDeploymentPackagesRequest
 * @return ListDeploymentPackagesResponse
 */
ListDeploymentPackagesResponse Client::listDeploymentPackages(const ListDeploymentPackagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDeploymentPackagesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of descendant instances of an instance by page.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListDownstreamTaskInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDownstreamTaskInstancesResponse
 */
ListDownstreamTaskInstancesResponse Client::listDownstreamTaskInstancesWithOptions(const ListDownstreamTaskInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDownstreamTaskInstances"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDownstreamTaskInstancesResponse>();
}

/**
 * @summary Queries a list of descendant instances of an instance by page.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListDownstreamTaskInstancesRequest
 * @return ListDownstreamTaskInstancesResponse
 */
ListDownstreamTaskInstancesResponse Client::listDownstreamTaskInstances(const ListDownstreamTaskInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDownstreamTaskInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of descendant tasks of a task by page.
 *
 * @param request ListDownstreamTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDownstreamTasksResponse
 */
ListDownstreamTasksResponse Client::listDownstreamTasksWithOptions(const ListDownstreamTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDownstreamTasks"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDownstreamTasksResponse>();
}

/**
 * @summary Queries a list of descendant tasks of a task by page.
 *
 * @param request ListDownstreamTasksRequest
 * @return ListDownstreamTasksResponse
 */
ListDownstreamTasksResponse Client::listDownstreamTasks(const ListDownstreamTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDownstreamTasksWithOptions(request, runtime);
}

/**
 * @summary Queries a list of entities in a collection in Data Map. Collections include categories and data albums. Entities can only be tables.
 *
 * @description 1. DataWorks Professional Edition or a higher edition is required.
 *
 * @param request ListEntitiesInMetaCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEntitiesInMetaCollectionResponse
 */
ListEntitiesInMetaCollectionResponse Client::listEntitiesInMetaCollectionWithOptions(const ListEntitiesInMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEntitiesInMetaCollection"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEntitiesInMetaCollectionResponse>();
}

/**
 * @summary Queries a list of entities in a collection in Data Map. Collections include categories and data albums. Entities can only be tables.
 *
 * @description 1. DataWorks Professional Edition or a higher edition is required.
 *
 * @param request ListEntitiesInMetaCollectionRequest
 * @return ListEntitiesInMetaCollectionResponse
 */
ListEntitiesInMetaCollectionResponse Client::listEntitiesInMetaCollection(const ListEntitiesInMetaCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEntitiesInMetaCollectionWithOptions(request, runtime);
}

/**
 * @summary Queries a list of file versions.
 *
 * @param request ListFileVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFileVersionsResponse
 */
ListFileVersionsResponse Client::listFileVersionsWithOptions(const ListFileVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileId()) {
    body["FileId"] = request.getFileId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListFileVersions"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFileVersionsResponse>();
}

/**
 * @summary Queries a list of file versions.
 *
 * @param request ListFileVersionsRequest
 * @return ListFileVersionsResponse
 */
ListFileVersionsResponse Client::listFileVersions(const ListFileVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFileVersionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of files.
 *
 * @param request ListFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFilesResponse
 */
ListFilesResponse Client::listFilesWithOptions(const ListFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCommitStatus()) {
    body["CommitStatus"] = request.getCommitStatus();
  }

  if (!!request.hasExactFileName()) {
    body["ExactFileName"] = request.getExactFileName();
  }

  if (!!request.hasFileFolderPath()) {
    body["FileFolderPath"] = request.getFileFolderPath();
  }

  if (!!request.hasFileIdIn()) {
    body["FileIdIn"] = request.getFileIdIn();
  }

  if (!!request.hasFileTypes()) {
    body["FileTypes"] = request.getFileTypes();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.getKeyword();
  }

  if (!!request.hasLastEditUser()) {
    body["LastEditUser"] = request.getLastEditUser();
  }

  if (!!request.hasNeedAbsoluteFolderPath()) {
    body["NeedAbsoluteFolderPath"] = request.getNeedAbsoluteFolderPath();
  }

  if (!!request.hasNeedContent()) {
    body["NeedContent"] = request.getNeedContent();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.getNodeId();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.getOwner();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  if (!!request.hasUseType()) {
    body["UseType"] = request.getUseType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListFiles"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFilesResponse>();
}

/**
 * @summary Queries a list of files.
 *
 * @param request ListFilesRequest
 * @return ListFilesResponse
 */
ListFilesResponse Client::listFiles(const ListFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFilesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of folders.
 *
 * @param request ListFoldersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFoldersResponse
 */
ListFoldersResponse Client::listFoldersWithOptions(const ListFoldersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasParentFolderPath()) {
    body["ParentFolderPath"] = request.getParentFolderPath();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListFolders"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFoldersResponse>();
}

/**
 * @summary Queries a list of folders.
 *
 * @param request ListFoldersRequest
 * @return ListFoldersResponse
 */
ListFoldersResponse Client::listFolders(const ListFoldersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFoldersWithOptions(request, runtime);
}

/**
 * @summary Queries a list of user-defined functions (UDFs) in DataStudio. You can also specify filter conditions to query specific UDFs.
 *
 * @param request ListFunctionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFunctionsResponse
 */
ListFunctionsResponse Client::listFunctionsWithOptions(const ListFunctionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListFunctions"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFunctionsResponse>();
}

/**
 * @summary Queries a list of user-defined functions (UDFs) in DataStudio. You can also specify filter conditions to query specific UDFs.
 *
 * @param request ListFunctionsRequest
 * @return ListFunctionsResponse
 */
ListFunctionsResponse Client::listFunctions(const ListFunctionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFunctionsWithOptions(request, runtime);
}

/**
 * @summary Lists the workspaces associated with an image.
 *
 * @description 1. You must purchase DataWorks Basic Edition or higher to call this operation.
 * 2. **Before you call this operation, ensure that the AliyunServiceRoleForDataWorks service-linked role is created.**
 *
 * @param request ListImageAssociatedProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImageAssociatedProjectsResponse
 */
ListImageAssociatedProjectsResponse Client::listImageAssociatedProjectsWithOptions(const ListImageAssociatedProjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListImageAssociatedProjects"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImageAssociatedProjectsResponse>();
}

/**
 * @summary Lists the workspaces associated with an image.
 *
 * @description 1. You must purchase DataWorks Basic Edition or higher to call this operation.
 * 2. **Before you call this operation, ensure that the AliyunServiceRoleForDataWorks service-linked role is created.**
 *
 * @param request ListImageAssociatedProjectsRequest
 * @return ListImageAssociatedProjectsResponse
 */
ListImageAssociatedProjectsResponse Client::listImageAssociatedProjects(const ListImageAssociatedProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listImageAssociatedProjectsWithOptions(request, runtime);
}

/**
 * @summary Gets the details of a specified image version.
 *
 * @description 1. To use this API, you must purchase DataWorks Basic Edition or a later edition.
 * 2. **Ensure you create the service-linked role AliyunServiceRoleForDataWorks before you call this API.**
 *
 * @param request ListImageVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImageVersionsResponse
 */
ListImageVersionsResponse Client::listImageVersionsWithOptions(const ListImageVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
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
    {"action" , "ListImageVersions"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImageVersionsResponse>();
}

/**
 * @summary Gets the details of a specified image version.
 *
 * @description 1. To use this API, you must purchase DataWorks Basic Edition or a later edition.
 * 2. **Ensure you create the service-linked role AliyunServiceRoleForDataWorks before you call this API.**
 *
 * @param request ListImageVersionsRequest
 * @return ListImageVersionsResponse
 */
ListImageVersionsResponse Client::listImageVersions(const ListImageVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listImageVersionsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of images.
 *
 * @description 1. You must have DataWorks Basic Edition or a later version to use this API.
 * 2. **Before you use this API, make sure that the service-linked role AliyunServiceRoleForDataWorks is created.**
 *
 * @param tmpReq ListImagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListImagesResponse
 */
ListImagesResponse Client::listImagesWithOptions(const ListImagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListImagesShrinkRequest request = ListImagesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProjectIds()) {
    request.setProjectIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProjectIds(), "ProjectIds", "json"));
  }

  if (!!tmpReq.hasProviderTypes()) {
    request.setProviderTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProviderTypes(), "ProviderTypes", "json"));
  }

  if (!!tmpReq.hasStages()) {
    request.setStagesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStages(), "Stages", "json"));
  }

  if (!!tmpReq.hasStatuses()) {
    request.setStatusesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatuses(), "Statuses", "json"));
  }

  if (!!tmpReq.hasSupportedModules()) {
    request.setSupportedModulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSupportedModules(), "SupportedModules", "json"));
  }

  if (!!tmpReq.hasSupportedTaskTypes()) {
    request.setSupportedTaskTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSupportedTaskTypes(), "SupportedTaskTypes", "json"));
  }

  json query = {};
  if (!!request.hasAccessibility()) {
    query["Accessibility"] = request.getAccessibility();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOfficial()) {
    query["Official"] = request.getOfficial();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectIdsShrink()) {
    query["ProjectIds"] = request.getProjectIdsShrink();
  }

  if (!!request.hasProviderTypesShrink()) {
    query["ProviderTypes"] = request.getProviderTypesShrink();
  }

  if (!!request.hasSearchAll()) {
    query["SearchAll"] = request.getSearchAll();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStagesShrink()) {
    query["Stages"] = request.getStagesShrink();
  }

  if (!!request.hasStatusesShrink()) {
    query["Statuses"] = request.getStatusesShrink();
  }

  if (!!request.hasSupportedModulesShrink()) {
    query["SupportedModules"] = request.getSupportedModulesShrink();
  }

  if (!!request.hasSupportedTaskTypesShrink()) {
    query["SupportedTaskTypes"] = request.getSupportedTaskTypesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListImages"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListImagesResponse>();
}

/**
 * @summary Retrieves a list of images.
 *
 * @description 1. You must have DataWorks Basic Edition or a later version to use this API.
 * 2. **Before you use this API, make sure that the service-linked role AliyunServiceRoleForDataWorks is created.**
 *
 * @param request ListImagesRequest
 * @return ListImagesResponse
 */
ListImagesResponse Client::listImages(const ListImagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listImagesWithOptions(request, runtime);
}

/**
 * @summary Queries the data map for data lineage relationships between specified entities, such as tables, columns, and OSS objects.
 *
 * @description 1. This operation is available in DataWorks Standard Edition and later versions.
 *
 * @param request ListLineageRelationshipsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLineageRelationshipsResponse
 */
ListLineageRelationshipsResponse Client::listLineageRelationshipsWithOptions(const ListLineageRelationshipsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLineageRelationships"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLineageRelationshipsResponse>();
}

/**
 * @summary Queries the data map for data lineage relationships between specified entities, such as tables, columns, and OSS objects.
 *
 * @description 1. This operation is available in DataWorks Standard Edition and later versions.
 *
 * @param request ListLineageRelationshipsRequest
 * @return ListLineageRelationshipsResponse
 */
ListLineageRelationshipsResponse Client::listLineageRelationships(const ListLineageRelationshipsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLineageRelationshipsWithOptions(request, runtime);
}

/**
 * @summary Queries the upstream and downstream entities for a specified entity in Data Map. You can optionally include detailed lineage relationship information.
 *
 * @description 1. To use this API, you must purchase DataWorks Standard Edition or a later edition.
 * 2. Use this API to query the upstream and downstream entities of a specific entity and their lineage relationships.
 *
 * @param request ListLineagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLineagesResponse
 */
ListLineagesResponse Client::listLineagesWithOptions(const ListLineagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLineages"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLineagesResponse>();
}

/**
 * @summary Queries the upstream and downstream entities for a specified entity in Data Map. You can optionally include detailed lineage relationship information.
 *
 * @description 1. To use this API, you must purchase DataWorks Standard Edition or a later edition.
 * 2. Use this API to query the upstream and downstream entities of a specific entity and their lineage relationships.
 *
 * @param request ListLineagesRequest
 * @return ListLineagesResponse
 */
ListLineagesResponse Client::listLineages(const ListLineagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLineagesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a paginated list of MCP servers.
 *
 * @description ## Request
 * This operation retrieves a paginated list of all MCP Servers within your account. You can filter the list by search keyword and visibility level, and control pagination by specifying the maximum number of results and a next page token.
 * - **Q**: Optional. The search keyword for a fuzzy search on MCP Server names.
 * - **Visibility**: Optional. The visibility level for filtering the results.
 * - **MaxResults**: Optional. The maximum number of results to return per page. By default, no limit is applied.
 * - **NextToken**: Optional. The next page token from a previous response. Use this parameter to retrieve the next page of results.
 *
 * @param tmpReq ListMcpServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMcpServersResponse
 */
ListMcpServersResponse Client::listMcpServersWithOptions(const ListMcpServersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListMcpServersShrinkRequest request = ListMcpServersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVisibility()) {
    request.setVisibilityShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVisibility(), "Visibility", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  json body = {};
  if (!!request.hasQ()) {
    body["Q"] = request.getQ();
  }

  if (!!request.hasVisibilityShrink()) {
    body["Visibility"] = request.getVisibilityShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListMcpServers"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMcpServersResponse>();
}

/**
 * @summary Retrieves a paginated list of MCP servers.
 *
 * @description ## Request
 * This operation retrieves a paginated list of all MCP Servers within your account. You can filter the list by search keyword and visibility level, and control pagination by specifying the maximum number of results and a next page token.
 * - **Q**: Optional. The search keyword for a fuzzy search on MCP Server names.
 * - **Visibility**: Optional. The visibility level for filtering the results.
 * - **MaxResults**: Optional. The maximum number of results to return per page. By default, no limit is applied.
 * - **NextToken**: Optional. The next page token from a previous response. Use this parameter to retrieve the next page of results.
 *
 * @param request ListMcpServersRequest
 * @return ListMcpServersResponse
 */
ListMcpServersResponse Client::listMcpServers(const ListMcpServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMcpServersWithOptions(request, runtime);
}

/**
 * @summary Queries a list of collections in Data Map. Collections include categories and data albums.
 *
 * @description 1. DataWorks Professional Edition or a higher edition is required.
 *
 * @param request ListMetaCollectionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMetaCollectionsResponse
 */
ListMetaCollectionsResponse Client::listMetaCollectionsWithOptions(const ListMetaCollectionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMetaCollections"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMetaCollectionsResponse>();
}

/**
 * @summary Queries a list of collections in Data Map. Collections include categories and data albums.
 *
 * @description 1. DataWorks Professional Edition or a higher edition is required.
 *
 * @param request ListMetaCollectionsRequest
 * @return ListMetaCollectionsResponse
 */
ListMetaCollectionsResponse Client::listMetaCollections(const ListMetaCollectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMetaCollectionsWithOptions(request, runtime);
}

/**
 * @summary Lists metadata entities. Support is currently limited to custom types.
 *
 * @param tmpReq ListMetaEntitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMetaEntitiesResponse
 */
ListMetaEntitiesResponse Client::listMetaEntitiesWithOptions(const ListMetaEntitiesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListMetaEntitiesShrinkRequest request = ListMetaEntitiesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAttributeFilters()) {
    request.setAttributeFiltersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAttributeFilters(), "AttributeFilters", "json"));
  }

  if (!!tmpReq.hasCustomAttributeFilters()) {
    request.setCustomAttributeFiltersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomAttributeFilters(), "CustomAttributeFilters", "json"));
  }

  json body = {};
  if (!!request.hasAttributeFiltersShrink()) {
    body["AttributeFilters"] = request.getAttributeFiltersShrink();
  }

  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasCustomAttributeFiltersShrink()) {
    body["CustomAttributeFilters"] = request.getCustomAttributeFiltersShrink();
  }

  if (!!request.hasEntityType()) {
    body["EntityType"] = request.getEntityType();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrder()) {
    body["Order"] = request.getOrder();
  }

  if (!!request.hasSortBy()) {
    body["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMetaEntities"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMetaEntitiesResponse>();
}

/**
 * @summary Lists metadata entities. Support is currently limited to custom types.
 *
 * @param request ListMetaEntitiesRequest
 * @return ListMetaEntitiesResponse
 */
ListMetaEntitiesResponse Client::listMetaEntities(const ListMetaEntitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMetaEntitiesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of custom entity definitions, including custom entity types and extended table types.
 *
 * @param request ListMetaEntityDefsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMetaEntityDefsResponse
 */
ListMetaEntityDefsResponse Client::listMetaEntityDefsWithOptions(const ListMetaEntityDefsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasExtend()) {
    body["Extend"] = request.getExtend();
  }

  if (!!request.hasOrder()) {
    body["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    body["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMetaEntityDefs"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMetaEntityDefsResponse>();
}

/**
 * @summary Retrieves a list of custom entity definitions, including custom entity types and extended table types.
 *
 * @param request ListMetaEntityDefsRequest
 * @return ListMetaEntityDefsResponse
 */
ListMetaEntityDefsResponse Client::listMetaEntityDefs(const ListMetaEntityDefsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMetaEntityDefsWithOptions(request, runtime);
}

/**
 * @summary Queries all resource access permission application orders initiated by the current user.
 *
 * @description ## Request description
 * - This API supports paginated queries, controlled by the `NextToken` and `PageSize` parameters.
 * - `DefSchema` is a required parameter that specifies the resource type.
 * - The `ResourceType` list can contain multiple resource types for more precise filtering of application orders.
 * - You can set `StartTime` and `EndTime` to limit the time range of the query.
 * - `Statuses` allows you to filter application orders by specific statuses, such as pending approval and authorized.
 * - If you need to filter by specific resources or authorization targets, you can provide detailed information through the `Resource` and `Grantee` fields.
 *
 * @param tmpReq ListMyApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMyApplicationsResponse
 */
ListMyApplicationsResponse Client::listMyApplicationsWithOptions(const ListMyApplicationsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListMyApplicationsShrinkRequest request = ListMyApplicationsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResource()) {
    request.setResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResource(), "Resource", "json"));
  }

  if (!!tmpReq.hasResourceType()) {
    request.setResourceTypeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceType(), "ResourceType", "json"));
  }

  if (!!tmpReq.hasStatuses()) {
    request.setStatusesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatuses(), "Statuses", "json"));
  }

  json body = {};
  if (!!request.hasDefSchema()) {
    body["DefSchema"] = request.getDefSchema();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceShrink()) {
    body["Resource"] = request.getResourceShrink();
  }

  if (!!request.hasResourceTypeShrink()) {
    body["ResourceType"] = request.getResourceTypeShrink();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatusesShrink()) {
    body["Statuses"] = request.getStatusesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMyApplications"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMyApplicationsResponse>();
}

/**
 * @summary Queries all resource access permission application orders initiated by the current user.
 *
 * @description ## Request description
 * - This API supports paginated queries, controlled by the `NextToken` and `PageSize` parameters.
 * - `DefSchema` is a required parameter that specifies the resource type.
 * - The `ResourceType` list can contain multiple resource types for more precise filtering of application orders.
 * - You can set `StartTime` and `EndTime` to limit the time range of the query.
 * - `Statuses` allows you to filter application orders by specific statuses, such as pending approval and authorized.
 * - If you need to filter by specific resources or authorization targets, you can provide detailed information through the `Resource` and `Grantee` fields.
 *
 * @param request ListMyApplicationsRequest
 * @return ListMyApplicationsResponse
 */
ListMyApplicationsResponse Client::listMyApplications(const ListMyApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMyApplicationsWithOptions(request, runtime);
}

/**
 * @summary Query all permission application orders where the current user is an approver or stakeholder.
 *
 * @description ## Request Description
 * - This API is used to retrieve all permission application orders where the current user is an approver, including pending and processed application orders.
 * - You can use the `Statuses` parameter to filter application orders by specific status.
 * - `NextToken` is used for paginated requests. It can be omitted or set to `null` for the first request. For subsequent requests, pass the `NextToken` value from the previous response.
 * - `PageSize` defaults to 10, with a maximum of 200.
 * - `DefSchema` and `ResourceType` are required fields. Other parameters can be filled in as needed.
 *
 * @param tmpReq ListMyRelatedApprovalsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMyRelatedApprovalsResponse
 */
ListMyRelatedApprovalsResponse Client::listMyRelatedApprovalsWithOptions(const ListMyRelatedApprovalsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListMyRelatedApprovalsShrinkRequest request = ListMyRelatedApprovalsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAccessTypes()) {
    request.setAccessTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAccessTypes(), "AccessTypes", "json"));
  }

  if (!!tmpReq.hasGrantee()) {
    request.setGranteeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGrantee(), "Grantee", "json"));
  }

  if (!!tmpReq.hasResource()) {
    request.setResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResource(), "Resource", "json"));
  }

  if (!!tmpReq.hasResourceType()) {
    request.setResourceTypeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceType(), "ResourceType", "json"));
  }

  if (!!tmpReq.hasStatuses()) {
    request.setStatusesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatuses(), "Statuses", "json"));
  }

  json body = {};
  if (!!request.hasAccessTypesShrink()) {
    body["AccessTypes"] = request.getAccessTypesShrink();
  }

  if (!!request.hasDefSchema()) {
    body["DefSchema"] = request.getDefSchema();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGranteeShrink()) {
    body["Grantee"] = request.getGranteeShrink();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceShrink()) {
    body["Resource"] = request.getResourceShrink();
  }

  if (!!request.hasResourceTypeShrink()) {
    body["ResourceType"] = request.getResourceTypeShrink();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatusesShrink()) {
    body["Statuses"] = request.getStatusesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMyRelatedApprovals"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMyRelatedApprovalsResponse>();
}

/**
 * @summary Query all permission application orders where the current user is an approver or stakeholder.
 *
 * @description ## Request Description
 * - This API is used to retrieve all permission application orders where the current user is an approver, including pending and processed application orders.
 * - You can use the `Statuses` parameter to filter application orders by specific status.
 * - `NextToken` is used for paginated requests. It can be omitted or set to `null` for the first request. For subsequent requests, pass the `NextToken` value from the previous response.
 * - `PageSize` defaults to 10, with a maximum of 200.
 * - `DefSchema` and `ResourceType` are required fields. Other parameters can be filled in as needed.
 *
 * @param request ListMyRelatedApprovalsRequest
 * @return ListMyRelatedApprovalsResponse
 */
ListMyRelatedApprovalsResponse Client::listMyRelatedApprovals(const ListMyRelatedApprovalsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMyRelatedApprovalsWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of network resources for a serverless resource group.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListNetworksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNetworksResponse
 */
ListNetworksResponse Client::listNetworksWithOptions(const ListNetworksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNetworks"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNetworksResponse>();
}

/**
 * @summary Retrieves a list of network resources for a serverless resource group.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListNetworksRequest
 * @return ListNetworksResponse
 */
ListNetworksResponse Client::listNetworks(const ListNetworksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNetworksWithOptions(request, runtime);
}

/**
 * @summary Gets a paginated list of dependent nodes for a specified data development node.
 *
 * @param request ListNodeDependenciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodeDependenciesResponse
 */
ListNodeDependenciesResponse Client::listNodeDependenciesWithOptions(const ListNodeDependenciesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNodeDependencies"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodeDependenciesResponse>();
}

/**
 * @summary Gets a paginated list of dependent nodes for a specified data development node.
 *
 * @param request ListNodeDependenciesRequest
 * @return ListNodeDependenciesResponse
 */
ListNodeDependenciesResponse Client::listNodeDependencies(const ListNodeDependenciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodeDependenciesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a paginated list of data development nodes that can be filtered by specified criteria.
 *
 * @param request ListNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodesWithOptions(const ListNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNodes"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodesResponse>();
}

/**
 * @summary Retrieves a paginated list of data development nodes that can be filtered by specified criteria.
 *
 * @param request ListNodesRequest
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodes(const ListNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodesWithOptions(request, runtime);
}

/**
 * @summary Lists parameter versions.
 *
 * @description This feature is available in DataWorks Professional Edition and higher editions.
 *
 * @param request ListParameterVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListParameterVersionsResponse
 */
ListParameterVersionsResponse Client::listParameterVersionsWithOptions(const ListParameterVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    body["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListParameterVersions"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListParameterVersionsResponse>();
}

/**
 * @summary Lists parameter versions.
 *
 * @description This feature is available in DataWorks Professional Edition and higher editions.
 *
 * @param request ListParameterVersionsRequest
 * @return ListParameterVersionsResponse
 */
ListParameterVersionsResponse Client::listParameterVersions(const ListParameterVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listParameterVersionsWithOptions(request, runtime);
}

/**
 * @summary Query parameters.
 *
 * @description This feature is available in DataWorks Professional Edition or higher.
 *
 * @param tmpReq ListParametersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListParametersResponse
 */
ListParametersResponse Client::listParametersWithOptions(const ListParametersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListParametersShrinkRequest request = ListParametersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "json"));
  }

  if (!!tmpReq.hasNames()) {
    request.setNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNames(), "Names", "json"));
  }

  json body = {};
  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.getIdsShrink();
  }

  if (!!request.hasNamesShrink()) {
    body["Names"] = request.getNamesShrink();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.getOwner();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasScope()) {
    body["Scope"] = request.getScope();
  }

  if (!!request.hasSortBy()) {
    body["SortBy"] = request.getSortBy();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListParameters"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListParametersResponse>();
}

/**
 * @summary Query parameters.
 *
 * @description This feature is available in DataWorks Professional Edition or higher.
 *
 * @param request ListParametersRequest
 * @return ListParametersResponse
 */
ListParametersResponse Client::listParameters(const ListParametersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listParametersWithOptions(request, runtime);
}

/**
 * @summary Queries a list of partitions in a table in Data Map. Only tables of the MaxCompute and E-MapReduce (EMR)-type Hive Metastore Service (HMS) metadata crawlers are supported.
 *
 * @description 1. DataWorks Basic Edition or a higher edition is required.
 * 2. Only maxcompute and hms (EMR cluster) table types are supported.
 *
 * @param request ListPartitionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPartitionsResponse
 */
ListPartitionsResponse Client::listPartitionsWithOptions(const ListPartitionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPartitions"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPartitionsResponse>();
}

/**
 * @summary Queries a list of partitions in a table in Data Map. Only tables of the MaxCompute and E-MapReduce (EMR)-type Hive Metastore Service (HMS) metadata crawlers are supported.
 *
 * @description 1. DataWorks Basic Edition or a higher edition is required.
 * 2. Only maxcompute and hms (EMR cluster) table types are supported.
 *
 * @param request ListPartitionsRequest
 * @return ListPartitionsResponse
 */
ListPartitionsResponse Client::listPartitions(const ListPartitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPartitionsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of pending permission request orders for which the current user is the approver.
 *
 * @description ## Request Description
 * This API is used to query all pending permission request orders for which the current logged-in user is the approver. It supports filtering by multiple conditions, including resource type, time range, and approval status, to more precisely locate specific request orders.
 * - **ResourceType**: Specifies the resource type (such as table), which can have multiple values.
 * - **Resource**: Provides specific resource search conditions, such as the project, database, or table name.
 * - **StartTime and EndTime**: Define the time range during which the request was submitted.
 * - **Statuses**: Allows filtering results by approval status, for example, to view only pending approval requests.
 * - **Grantee**: Filters request orders based on the authorization principal information.
 * - **AccessTypes**: Filters based on the specific permission types requested (such as read or update).
 * - **PageSize and NextToken**: Used for pagination control, specifying the amount of data returned per request and the cursor needed to retrieve the next page of data.
 * Notes:
 * - If no filtering conditions are provided, all matching records are returned by default.
 * - The `NextToken` parameter can be empty or omitted for the first call. Subsequent page requests must use the `NextToken` value provided in the previous response.
 * - The default value of `PageSize` is 10, and the maximum value is 200. If the specified value exceeds the maximum limit, the maximum value is used.
 * - When there is no more data to return, the `HasMore` field is set to `false`, and `NextToken` will be empty or absent.
 * ## Response Description
 * After a successful call to this API, the response body contains paginated results and detailed information for each request order, such as the application time, resource description, authorization principal, requested permissions, and more. Additionally, the approval process status and other related metadata are provided.
 * - **Data**: The paginated result set, including page size (`PageSize`), cursor (`NextToken`), and whether more data is available (`HasMore`).
 * - **ApplicationQueryResponse**: The specific content of each request order, including the reason for the request, submission time, status, and a detailed list of request content.
 *
 * @param tmpReq ListPendingApprovalsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPendingApprovalsResponse
 */
ListPendingApprovalsResponse Client::listPendingApprovalsWithOptions(const ListPendingApprovalsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPendingApprovalsShrinkRequest request = ListPendingApprovalsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAccessTypes()) {
    request.setAccessTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAccessTypes(), "AccessTypes", "json"));
  }

  if (!!tmpReq.hasGrantee()) {
    request.setGranteeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGrantee(), "Grantee", "json"));
  }

  if (!!tmpReq.hasResource()) {
    request.setResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResource(), "Resource", "json"));
  }

  if (!!tmpReq.hasResourceType()) {
    request.setResourceTypeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceType(), "ResourceType", "json"));
  }

  json body = {};
  if (!!request.hasAccessTypesShrink()) {
    body["AccessTypes"] = request.getAccessTypesShrink();
  }

  if (!!request.hasDefSchema()) {
    body["DefSchema"] = request.getDefSchema();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGranteeShrink()) {
    body["Grantee"] = request.getGranteeShrink();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceShrink()) {
    body["Resource"] = request.getResourceShrink();
  }

  if (!!request.hasResourceTypeShrink()) {
    body["ResourceType"] = request.getResourceTypeShrink();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListPendingApprovals"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPendingApprovalsResponse>();
}

/**
 * @summary Retrieves the list of pending permission request orders for which the current user is the approver.
 *
 * @description ## Request Description
 * This API is used to query all pending permission request orders for which the current logged-in user is the approver. It supports filtering by multiple conditions, including resource type, time range, and approval status, to more precisely locate specific request orders.
 * - **ResourceType**: Specifies the resource type (such as table), which can have multiple values.
 * - **Resource**: Provides specific resource search conditions, such as the project, database, or table name.
 * - **StartTime and EndTime**: Define the time range during which the request was submitted.
 * - **Statuses**: Allows filtering results by approval status, for example, to view only pending approval requests.
 * - **Grantee**: Filters request orders based on the authorization principal information.
 * - **AccessTypes**: Filters based on the specific permission types requested (such as read or update).
 * - **PageSize and NextToken**: Used for pagination control, specifying the amount of data returned per request and the cursor needed to retrieve the next page of data.
 * Notes:
 * - If no filtering conditions are provided, all matching records are returned by default.
 * - The `NextToken` parameter can be empty or omitted for the first call. Subsequent page requests must use the `NextToken` value provided in the previous response.
 * - The default value of `PageSize` is 10, and the maximum value is 200. If the specified value exceeds the maximum limit, the maximum value is used.
 * - When there is no more data to return, the `HasMore` field is set to `false`, and `NextToken` will be empty or absent.
 * ## Response Description
 * After a successful call to this API, the response body contains paginated results and detailed information for each request order, such as the application time, resource description, authorization principal, requested permissions, and more. Additionally, the approval process status and other related metadata are provided.
 * - **Data**: The paginated result set, including page size (`PageSize`), cursor (`NextToken`), and whether more data is available (`HasMore`).
 * - **ApplicationQueryResponse**: The specific content of each request order, including the reason for the request, submission time, status, and a detailed list of request content.
 *
 * @param request ListPendingApprovalsRequest
 * @return ListPendingApprovalsResponse
 */
ListPendingApprovalsResponse Client::listPendingApprovals(const ListPendingApprovalsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPendingApprovalsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about deployment objects by deployment process ID.
 *
 * @param request ListPipelineRunItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPipelineRunItemsResponse
 */
ListPipelineRunItemsResponse Client::listPipelineRunItemsWithOptions(const ListPipelineRunItemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPipelineRunItems"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPipelineRunItemsResponse>();
}

/**
 * @summary Queries the information about deployment objects by deployment process ID.
 *
 * @param request ListPipelineRunItemsRequest
 * @return ListPipelineRunItemsResponse
 */
ListPipelineRunItemsResponse Client::listPipelineRunItems(const ListPipelineRunItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPipelineRunItemsWithOptions(request, runtime);
}

/**
 * @summary Retrieve a paginated list of deployment processes. You can also filter this list based on specific criteria.
 *
 * @description >Notice: 
 * Earlier SDK versions may not include this interface. If so, use the ListDeployments interface. It accepts the same parameters.
 *
 * @param request ListPipelineRunsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPipelineRunsResponse
 */
ListPipelineRunsResponse Client::listPipelineRunsWithOptions(const ListPipelineRunsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPipelineRuns"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPipelineRunsResponse>();
}

/**
 * @summary Retrieve a paginated list of deployment processes. You can also filter this list based on specific criteria.
 *
 * @description >Notice: 
 * Earlier SDK versions may not include this interface. If so, use the ListDeployments interface. It accepts the same parameters.
 *
 * @param request ListPipelineRunsRequest
 * @return ListPipelineRunsResponse
 */
ListPipelineRunsResponse Client::listPipelineRuns(const ListPipelineRunsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPipelineRunsWithOptions(request, runtime);
}

/**
 * @summary Queries process definitions of a specified type.
 *
 * @description ## Description
 * - Queries process definitions of a specified policy type.
 * - This operation supports paginated queries. You can use the`PageSize` and`PageNumber` parameters to control the page size and page number.
 * - You can also use the`NextToken` and`MaxResults` parameters to page through large result sets.
 * - The response includes the total count, page size, current page number, and a list of process definitions.
 * - Each process definition includes key attributes, such as its ID, enabled status, and priority.
 *
 * @param request ListProcessDefinitionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProcessDefinitionsResponse
 */
ListProcessDefinitionsResponse Client::listProcessDefinitionsWithOptions(const ListProcessDefinitionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListProcessDefinitions"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProcessDefinitionsResponse>();
}

/**
 * @summary Queries process definitions of a specified type.
 *
 * @description ## Description
 * - Queries process definitions of a specified policy type.
 * - This operation supports paginated queries. You can use the`PageSize` and`PageNumber` parameters to control the page size and page number.
 * - You can also use the`NextToken` and`MaxResults` parameters to page through large result sets.
 * - The response includes the total count, page size, current page number, and a list of process definitions.
 * - Each process definition includes key attributes, such as its ID, enabled status, and priority.
 *
 * @param request ListProcessDefinitionsRequest
 * @return ListProcessDefinitionsResponse
 */
ListProcessDefinitionsResponse Client::listProcessDefinitions(const ListProcessDefinitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProcessDefinitionsWithOptions(request, runtime);
}

/**
 * @summary Gets a paginated list of workspace member details.
 *
 * @description This feature is available in DataWorks Basic Edition and higher.
 *
 * @param tmpReq ListProjectMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectMembersResponse
 */
ListProjectMembersResponse Client::listProjectMembersWithOptions(const ListProjectMembersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListProjectMembersShrinkRequest request = ListProjectMembersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRoleCodes()) {
    request.setRoleCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRoleCodes(), "RoleCodes", "json"));
  }

  if (!!tmpReq.hasUserIds()) {
    request.setUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserIds(), "UserIds", "json"));
  }

  json body = {};
  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRoleCodesShrink()) {
    body["RoleCodes"] = request.getRoleCodesShrink();
  }

  if (!!request.hasUserIdsShrink()) {
    body["UserIds"] = request.getUserIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListProjectMembers"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectMembersResponse>();
}

/**
 * @summary Gets a paginated list of workspace member details.
 *
 * @description This feature is available in DataWorks Basic Edition and higher.
 *
 * @param request ListProjectMembersRequest
 * @return ListProjectMembersResponse
 */
ListProjectMembersResponse Client::listProjectMembers(const ListProjectMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectMembersWithOptions(request, runtime);
}

/**
 * @summary Returns a paginated list of roles in a workspace.
 *
 * @description This feature is available in DataWorks Basic Edition and higher.
 *
 * @param tmpReq ListProjectRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectRolesResponse
 */
ListProjectRolesResponse Client::listProjectRolesWithOptions(const ListProjectRolesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListProjectRolesShrinkRequest request = ListProjectRolesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCodes()) {
    request.setCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCodes(), "Codes", "json"));
  }

  if (!!tmpReq.hasNames()) {
    request.setNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNames(), "Names", "json"));
  }

  json body = {};
  if (!!request.hasCodesShrink()) {
    body["Codes"] = request.getCodesShrink();
  }

  if (!!request.hasNamesShrink()) {
    body["Names"] = request.getNamesShrink();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListProjectRoles"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectRolesResponse>();
}

/**
 * @summary Returns a paginated list of roles in a workspace.
 *
 * @description This feature is available in DataWorks Basic Edition and higher.
 *
 * @param request ListProjectRolesRequest
 * @return ListProjectRolesResponse
 */
ListProjectRolesResponse Client::listProjectRoles(const ListProjectRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectRolesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of DataWorks workspaces of the tenant to which your account belongs.
 *
 * @param tmpReq ListProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjectsWithOptions(const ListProjectsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListProjectsShrinkRequest request = ListProjectsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAliyunResourceTags()) {
    request.setAliyunResourceTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAliyunResourceTags(), "AliyunResourceTags", "json"));
  }

  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "json"));
  }

  if (!!tmpReq.hasNames()) {
    request.setNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNames(), "Names", "json"));
  }

  json body = {};
  if (!!request.hasAliyunResourceGroupId()) {
    body["AliyunResourceGroupId"] = request.getAliyunResourceGroupId();
  }

  if (!!request.hasAliyunResourceTagsShrink()) {
    body["AliyunResourceTags"] = request.getAliyunResourceTagsShrink();
  }

  if (!!request.hasDevEnvironmentEnabled()) {
    body["DevEnvironmentEnabled"] = request.getDevEnvironmentEnabled();
  }

  if (!!request.hasDevRoleDisabled()) {
    body["DevRoleDisabled"] = request.getDevRoleDisabled();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.getIdsShrink();
  }

  if (!!request.hasNamesShrink()) {
    body["Names"] = request.getNamesShrink();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPaiTaskEnabled()) {
    body["PaiTaskEnabled"] = request.getPaiTaskEnabled();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListProjects"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectsResponse>();
}

/**
 * @summary Queries a list of DataWorks workspaces of the tenant to which your account belongs.
 *
 * @param request ListProjectsRequest
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjects(const ListProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectsWithOptions(request, runtime);
}

/**
 * @summary Query the list of workspaces with which a resource group is associated
 *
 * @description 1. DataWorks Basic Edition or a more advanced edition is required to use this feature.
 * 2. **Make sure that the service-linked role AliyunServiceRoleForDataWorks has been created before you call this operation.**
 * 3. This operation returns only the workspaces that the current caller has access to. Unauthorized workspaces are not included in the response.
 *
 * @param request ListResourceGroupAssociateProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceGroupAssociateProjectsResponse
 */
ListResourceGroupAssociateProjectsResponse Client::listResourceGroupAssociateProjectsWithOptions(const ListResourceGroupAssociateProjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceGroupAssociateProjects"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceGroupAssociateProjectsResponse>();
}

/**
 * @summary Query the list of workspaces with which a resource group is associated
 *
 * @description 1. DataWorks Basic Edition or a more advanced edition is required to use this feature.
 * 2. **Make sure that the service-linked role AliyunServiceRoleForDataWorks has been created before you call this operation.**
 * 3. This operation returns only the workspaces that the current caller has access to. Unauthorized workspaces are not included in the response.
 *
 * @param request ListResourceGroupAssociateProjectsRequest
 * @return ListResourceGroupAssociateProjectsResponse
 */
ListResourceGroupAssociateProjectsResponse Client::listResourceGroupAssociateProjects(const ListResourceGroupAssociateProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceGroupAssociateProjectsWithOptions(request, runtime);
}

/**
 * @summary Queries the metric data of a resource group.
 *
 * @description 1. DataWorks Basic Edition or a more advanced edition is required to use this feature.
 * 2. **Make sure that the service-linked role AliyunServiceRoleForDataWorks has been created before you call this operation.**
 * 3. This operation applies only to serverless resource groups.
 *
 * @param request ListResourceGroupMetricDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceGroupMetricDataResponse
 */
ListResourceGroupMetricDataResponse Client::listResourceGroupMetricDataWithOptions(const ListResourceGroupMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBeginTime()) {
    body["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasLength()) {
    body["Length"] = request.getLength();
  }

  if (!!request.hasMetricName()) {
    body["MetricName"] = request.getMetricName();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPeriod()) {
    body["Period"] = request.getPeriod();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListResourceGroupMetricData"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceGroupMetricDataResponse>();
}

/**
 * @summary Queries the metric data of a resource group.
 *
 * @description 1. DataWorks Basic Edition or a more advanced edition is required to use this feature.
 * 2. **Make sure that the service-linked role AliyunServiceRoleForDataWorks has been created before you call this operation.**
 * 3. This operation applies only to serverless resource groups.
 *
 * @param request ListResourceGroupMetricDataRequest
 * @return ListResourceGroupMetricDataResponse
 */
ListResourceGroupMetricDataResponse Client::listResourceGroupMetricData(const ListResourceGroupMetricDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceGroupMetricDataWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of resource groups.
 *
 * @description 1. This operation requires DataWorks Basic Edition or higher.
 * 2. **Before you call this operation, make sure that you have created the service-linked role AliyunServiceRoleForDataWorks.**
 *
 * @param tmpReq ListResourceGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceGroupsResponse
 */
ListResourceGroupsResponse Client::listResourceGroupsWithOptions(const ListResourceGroupsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListResourceGroupsShrinkRequest request = ListResourceGroupsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAliyunResourceTags()) {
    request.setAliyunResourceTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAliyunResourceTags(), "AliyunResourceTags", "json"));
  }

  if (!!tmpReq.hasResourceGroupTypes()) {
    request.setResourceGroupTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceGroupTypes(), "ResourceGroupTypes", "json"));
  }

  if (!!tmpReq.hasStatuses()) {
    request.setStatusesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatuses(), "Statuses", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceGroups"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceGroupsResponse>();
}

/**
 * @summary Retrieves a list of resource groups.
 *
 * @description 1. This operation requires DataWorks Basic Edition or higher.
 * 2. **Before you call this operation, make sure that you have created the service-linked role AliyunServiceRoleForDataWorks.**
 *
 * @param request ListResourceGroupsRequest
 * @return ListResourceGroupsResponse
 */
ListResourceGroupsResponse Client::listResourceGroups(const ListResourceGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of file resources in DataStudio. You can also specify filter conditions to query specific file resources.
 *
 * @param request ListResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourcesResponse
 */
ListResourcesResponse Client::listResourcesWithOptions(const ListResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResources"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourcesResponse>();
}

/**
 * @summary Queries a list of file resources in DataStudio. You can also specify filter conditions to query specific file resources.
 *
 * @param request ListResourcesRequest
 * @return ListResourcesResponse
 */
ListResourcesResponse Client::listResources(const ListResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourcesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of routes for a network resource.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListRoutesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRoutesResponse
 */
ListRoutesResponse Client::listRoutesWithOptions(const ListRoutesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRoutes"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRoutesResponse>();
}

/**
 * @summary Retrieves a list of routes for a network resource.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListRoutesRequest
 * @return ListRoutesResponse
 */
ListRoutesResponse Client::listRoutes(const ListRoutesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRoutesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of schemas under a specified database or MaxCompute project in Data Map. Currently supports MaxCompute and Holo types.
 *
 * @description 1. You must purchase DataWorks Basic Edition or higher to use this feature.
 *
 * @param tmpReq ListSchemasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSchemasResponse
 */
ListSchemasResponse Client::listSchemasWithOptions(const ListSchemasRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListSchemasShrinkRequest request = ListSchemasShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTypes()) {
    request.setTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTypes(), "Types", "simple"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSchemas"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSchemasResponse>();
}

/**
 * @summary Queries the list of schemas under a specified database or MaxCompute project in Data Map. Currently supports MaxCompute and Holo types.
 *
 * @description 1. You must purchase DataWorks Basic Edition or higher to use this feature.
 *
 * @param request ListSchemasRequest
 * @return ListSchemasResponse
 */
ListSchemasResponse Client::listSchemas(const ListSchemasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSchemasWithOptions(request, runtime);
}

/**
 * @summary Retrieves a paginated list of security policies based on specified conditions. This operation requires DataWorks tenant administrator or security administrator permissions.
 *
 * @description ## Request
 * - This API retrieves a paginated list of configured security policies.
 * - The `ControlModule` and `ControlSubModule` parameters filter policies by a specific module or submodule.
 * - The `PageNum` and `PageSize` parameters control pagination. `PageNum` specifies the page number to retrieve (default: 1), and `PageSize` specifies the number of policies to return per page (default: 20).
 * - Use the `MaxResults` and `NextToken` private parameters for advanced pagination.
 *
 * @param request ListSecurityStrategiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSecurityStrategiesResponse
 */
ListSecurityStrategiesResponse Client::listSecurityStrategiesWithOptions(const ListSecurityStrategiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasControlModule()) {
    body["ControlModule"] = request.getControlModule();
  }

  if (!!request.hasControlSubModule()) {
    body["ControlSubModule"] = request.getControlSubModule();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListSecurityStrategies"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSecurityStrategiesResponse>();
}

/**
 * @summary Retrieves a paginated list of security policies based on specified conditions. This operation requires DataWorks tenant administrator or security administrator permissions.
 *
 * @description ## Request
 * - This API retrieves a paginated list of configured security policies.
 * - The `ControlModule` and `ControlSubModule` parameters filter policies by a specific module or submodule.
 * - The `PageNum` and `PageSize` parameters control pagination. `PageNum` specifies the page number to retrieve (default: 1), and `PageSize` specifies the number of policies to return per page (default: 20).
 * - Use the `MaxResults` and `NextToken` private parameters for advanced pagination.
 *
 * @param request ListSecurityStrategiesRequest
 * @return ListSecurityStrategiesResponse
 */
ListSecurityStrategiesResponse Client::listSecurityStrategies(const ListSecurityStrategiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSecurityStrategiesWithOptions(request, runtime);
}

/**
 * @summary Lists the Skills in your account.
 *
 * @description ## Request
 * This operation lists the Skills in your account. You can filter the results by criteria such as a search keyword and visibility level.
 * - **Q**: An optional search keyword for a fuzzy match on Skill names.
 * - **Visibility**: An optional parameter to filter Skills by their visibility level. You can specify multiple values.
 * - **MaxResults**: An optional parameter that specifies the maximum number of results to return per page.
 * - **NextToken**: An optional pagination token for retrieving the next page of results. Omit this parameter for the first request. For subsequent requests, pass the `NextToken` value from the previous response to fetch the next page.
 *
 * @param tmpReq ListSkillsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillsResponse
 */
ListSkillsResponse Client::listSkillsWithOptions(const ListSkillsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListSkillsShrinkRequest request = ListSkillsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVisibility()) {
    request.setVisibilityShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVisibility(), "Visibility", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  json body = {};
  if (!!request.hasQ()) {
    body["Q"] = request.getQ();
  }

  if (!!request.hasVisibilityShrink()) {
    body["Visibility"] = request.getVisibilityShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListSkills"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSkillsResponse>();
}

/**
 * @summary Lists the Skills in your account.
 *
 * @description ## Request
 * This operation lists the Skills in your account. You can filter the results by criteria such as a search keyword and visibility level.
 * - **Q**: An optional search keyword for a fuzzy match on Skill names.
 * - **Visibility**: An optional parameter to filter Skills by their visibility level. You can specify multiple values.
 * - **MaxResults**: An optional parameter that specifies the maximum number of results to return per page.
 * - **NextToken**: An optional pagination token for retrieving the next page of results. Omit this parameter for the first request. For subsequent requests, pass the `NextToken` value from the previous response to fetch the next page.
 *
 * @param request ListSkillsRequest
 * @return ListSkillsResponse
 */
ListSkillsResponse Client::listSkills(const ListSkillsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSkillsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of data tables in DataWorks Data Map. For types that do not support the schema level, you can query data tables under a specified database. For types that support the schema level, you can query data tables under a specified database, MaxCompute project, or schema. The response contains only basic table information and does not include technical metadata or business metadata.
 *
 * @description 1. DataWorks Basic Edition or a higher edition is required.
 *
 * @param tmpReq ListTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTablesWithOptions(const ListTablesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTablesShrinkRequest request = ListTablesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTableTypes()) {
    request.setTableTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTableTypes(), "TableTypes", "simple"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTables"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTablesResponse>();
}

/**
 * @summary Queries the list of data tables in DataWorks Data Map. For types that do not support the schema level, you can query data tables under a specified database. For types that support the schema level, you can query data tables under a specified database, MaxCompute project, or schema. The response contains only basic table information and does not include technical metadata or business metadata.
 *
 * @description 1. DataWorks Basic Edition or a higher edition is required.
 *
 * @param request ListTablesRequest
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTables(const ListTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTablesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a paginated list of operation logs for a task instance.
 *
 * @description This API operation is available for all DataWorks editions.
 * Only operation logs generated within the previous 31 days can be queried.
 *
 * @param request ListTaskInstanceOperationLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTaskInstanceOperationLogsResponse
 */
ListTaskInstanceOperationLogsResponse Client::listTaskInstanceOperationLogsWithOptions(const ListTaskInstanceOperationLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTaskInstanceOperationLogs"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTaskInstanceOperationLogsResponse>();
}

/**
 * @summary Retrieves a paginated list of operation logs for a task instance.
 *
 * @description This API operation is available for all DataWorks editions.
 * Only operation logs generated within the previous 31 days can be queried.
 *
 * @param request ListTaskInstanceOperationLogsRequest
 * @return ListTaskInstanceOperationLogsResponse
 */
ListTaskInstanceOperationLogsResponse Client::listTaskInstanceOperationLogs(const ListTaskInstanceOperationLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTaskInstanceOperationLogsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of instances. You can also specify filter conditions to query specific instances.
 *
 * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param tmpReq ListTaskInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTaskInstancesResponse
 */
ListTaskInstancesResponse Client::listTaskInstancesWithOptions(const ListTaskInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTaskInstancesShrinkRequest request = ListTaskInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "json"));
  }

  if (!!tmpReq.hasTaskIds()) {
    request.setTaskIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskIds(), "TaskIds", "json"));
  }

  json body = {};
  if (!!request.hasBizdate()) {
    body["Bizdate"] = request.getBizdate();
  }

  if (!!request.hasFilter()) {
    body["Filter"] = request.getFilter();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.getIdsShrink();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.getOwner();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.getProjectEnv();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRuntimeResource()) {
    body["RuntimeResource"] = request.getRuntimeResource();
  }

  if (!!request.hasSortBy()) {
    body["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskIdsShrink()) {
    body["TaskIds"] = request.getTaskIdsShrink();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskType()) {
    body["TaskType"] = request.getTaskType();
  }

  if (!!request.hasTriggerRecurrence()) {
    body["TriggerRecurrence"] = request.getTriggerRecurrence();
  }

  if (!!request.hasTriggerType()) {
    body["TriggerType"] = request.getTriggerType();
  }

  if (!!request.hasUnifiedWorkflowInstanceId()) {
    body["UnifiedWorkflowInstanceId"] = request.getUnifiedWorkflowInstanceId();
  }

  if (!!request.hasWorkflowId()) {
    body["WorkflowId"] = request.getWorkflowId();
  }

  if (!!request.hasWorkflowInstanceId()) {
    body["WorkflowInstanceId"] = request.getWorkflowInstanceId();
  }

  if (!!request.hasWorkflowInstanceType()) {
    body["WorkflowInstanceType"] = request.getWorkflowInstanceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListTaskInstances"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTaskInstancesResponse>();
}

/**
 * @summary Queries a list of instances. You can also specify filter conditions to query specific instances.
 *
 * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request ListTaskInstancesRequest
 * @return ListTaskInstancesResponse
 */
ListTaskInstancesResponse Client::listTaskInstances(const ListTaskInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTaskInstancesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a paginated list of operation logs for a task.
 *
 * @description This API operation is available for all DataWorks editions.
 * Only operation logs generated within the previous 31 days can be queried.
 *
 * @param request ListTaskOperationLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTaskOperationLogsResponse
 */
ListTaskOperationLogsResponse Client::listTaskOperationLogsWithOptions(const ListTaskOperationLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTaskOperationLogs"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTaskOperationLogsResponse>();
}

/**
 * @summary Retrieves a paginated list of operation logs for a task.
 *
 * @description This API operation is available for all DataWorks editions.
 * Only operation logs generated within the previous 31 days can be queried.
 *
 * @param request ListTaskOperationLogsRequest
 * @return ListTaskOperationLogsResponse
 */
ListTaskOperationLogsResponse Client::listTaskOperationLogs(const ListTaskOperationLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTaskOperationLogsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tasks by page. You can also specify filter conditions to query tasks.
 *
 * @description DataWorks Basic Edition or higher is required.
 *
 * @param tmpReq ListTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasksWithOptions(const ListTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTasksShrinkRequest request = ListTasksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.getIdsShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.getOwner();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.getProjectEnv();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRuntimeResource()) {
    body["RuntimeResource"] = request.getRuntimeResource();
  }

  if (!!request.hasSortBy()) {
    body["SortBy"] = request.getSortBy();
  }

  if (!!request.hasTaskType()) {
    body["TaskType"] = request.getTaskType();
  }

  if (!!request.hasTriggerRecurrence()) {
    body["TriggerRecurrence"] = request.getTriggerRecurrence();
  }

  if (!!request.hasTriggerType()) {
    body["TriggerType"] = request.getTriggerType();
  }

  if (!!request.hasWorkflowId()) {
    body["WorkflowId"] = request.getWorkflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListTasks"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTasksResponse>();
}

/**
 * @summary Queries a list of tasks by page. You can also specify filter conditions to query tasks.
 *
 * @description DataWorks Basic Edition or higher is required.
 *
 * @param request ListTasksRequest
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasks(const ListTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTasksWithOptions(request, runtime);
}

/**
 * @summary Queries a list of ancestor instances of an instance by page.
 *
 * @param request ListUpstreamTaskInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUpstreamTaskInstancesResponse
 */
ListUpstreamTaskInstancesResponse Client::listUpstreamTaskInstancesWithOptions(const ListUpstreamTaskInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUpstreamTaskInstances"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUpstreamTaskInstancesResponse>();
}

/**
 * @summary Queries a list of ancestor instances of an instance by page.
 *
 * @param request ListUpstreamTaskInstancesRequest
 * @return ListUpstreamTaskInstancesResponse
 */
ListUpstreamTaskInstancesResponse Client::listUpstreamTaskInstances(const ListUpstreamTaskInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUpstreamTaskInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of ancestor tasks of a task by page.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListUpstreamTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUpstreamTasksResponse
 */
ListUpstreamTasksResponse Client::listUpstreamTasksWithOptions(const ListUpstreamTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUpstreamTasks"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUpstreamTasksResponse>();
}

/**
 * @summary Queries a list of ancestor tasks of a task by page.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListUpstreamTasksRequest
 * @return ListUpstreamTasksResponse
 */
ListUpstreamTasksResponse Client::listUpstreamTasks(const ListUpstreamTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUpstreamTasksWithOptions(request, runtime);
}

/**
 * @summary Queries a list of workflows in DataStudio. You can also specify filter conditions to query specific workflows.
 *
 * @param request ListWorkflowDefinitionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkflowDefinitionsResponse
 */
ListWorkflowDefinitionsResponse Client::listWorkflowDefinitionsWithOptions(const ListWorkflowDefinitionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkflowDefinitions"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkflowDefinitionsResponse>();
}

/**
 * @summary Queries a list of workflows in DataStudio. You can also specify filter conditions to query specific workflows.
 *
 * @param request ListWorkflowDefinitionsRequest
 * @return ListWorkflowDefinitionsResponse
 */
ListWorkflowDefinitionsResponse Client::listWorkflowDefinitions(const ListWorkflowDefinitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkflowDefinitionsWithOptions(request, runtime);
}

/**
 * @summary Returns a paginated list of workflow instances that can be filtered by specific criteria.
 *
 * @description Available with DataWorks Basic Edition or higher.
 *
 * @param tmpReq ListWorkflowInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkflowInstancesResponse
 */
ListWorkflowInstancesResponse Client::listWorkflowInstancesWithOptions(const ListWorkflowInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListWorkflowInstancesShrinkRequest request = ListWorkflowInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json body = {};
  if (!!request.hasBizDate()) {
    body["BizDate"] = request.getBizDate();
  }

  if (!!request.hasEnvType()) {
    body["EnvType"] = request.getEnvType();
  }

  if (!!request.hasFilter()) {
    body["Filter"] = request.getFilter();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.getIdsShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.getOwner();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSortBy()) {
    body["SortBy"] = request.getSortBy();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasUnifiedWorkflowInstanceId()) {
    body["UnifiedWorkflowInstanceId"] = request.getUnifiedWorkflowInstanceId();
  }

  if (!!request.hasWorkflowId()) {
    body["WorkflowId"] = request.getWorkflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListWorkflowInstances"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkflowInstancesResponse>();
}

/**
 * @summary Returns a paginated list of workflow instances that can be filtered by specific criteria.
 *
 * @description Available with DataWorks Basic Edition or higher.
 *
 * @param request ListWorkflowInstancesRequest
 * @return ListWorkflowInstancesResponse
 */
ListWorkflowInstancesResponse Client::listWorkflowInstances(const ListWorkflowInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkflowInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of workflows by page. You can also specify filter conditions to query workflows.
 *
 * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param tmpReq ListWorkflowsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkflowsResponse
 */
ListWorkflowsResponse Client::listWorkflowsWithOptions(const ListWorkflowsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListWorkflowsShrinkRequest request = ListWorkflowsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json body = {};
  if (!!request.hasEnvType()) {
    body["EnvType"] = request.getEnvType();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.getIdsShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.getOwner();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSortBy()) {
    body["SortBy"] = request.getSortBy();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasTriggerType()) {
    body["TriggerType"] = request.getTriggerType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListWorkflows"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkflowsResponse>();
}

/**
 * @summary Queries a list of workflows by page. You can also specify filter conditions to query workflows.
 *
 * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request ListWorkflowsRequest
 * @return ListWorkflowsResponse
 */
ListWorkflowsResponse Client::listWorkflows(const ListWorkflowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkflowsWithOptions(request, runtime);
}

/**
 * @summary Loads the message history of an existing session and returns it as an SSE stream. If the session does not exist, the server sends a JSONRPCResponse.error with a code of 400 through the SSE stream. The Content-Type is text/event-stream. Use this operation to restore session context.
 *
 * @description ## Request
 * - This operation retrieves session details and streams the Agent response using Server-Sent Events (SSE).
 * - If the target session does not exist, the operation returns an error frame with an error code of 400.
 * - The response includes information about the Agent\\"s request processing, such as message chunks, thought processes, and tool call status updates.
 * - The `stopReason` field indicates why the Agent stops the current turn. Possible values include reaching the maximum turn limit or being canceled.
 * - The returned content conforms to the Agent Client Protocol (ACP). For more information, see https\\://agentclientprotocol.com.
 *
 * @param tmpReq LoadAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LoadAgentSessionResponse
 */
FutureGenerator<LoadAgentSessionResponse> Client::loadAgentSessionWithSSE(const LoadAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  LoadAgentSessionShrinkRequest request = LoadAgentSessionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "LoadAgentSession"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<LoadAgentSessionResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Loads the message history of an existing session and returns it as an SSE stream. If the session does not exist, the server sends a JSONRPCResponse.error with a code of 400 through the SSE stream. The Content-Type is text/event-stream. Use this operation to restore session context.
 *
 * @description ## Request
 * - This operation retrieves session details and streams the Agent response using Server-Sent Events (SSE).
 * - If the target session does not exist, the operation returns an error frame with an error code of 400.
 * - The response includes information about the Agent\\"s request processing, such as message chunks, thought processes, and tool call status updates.
 * - The `stopReason` field indicates why the Agent stops the current turn. Possible values include reaching the maximum turn limit or being canceled.
 * - The returned content conforms to the Agent Client Protocol (ACP). For more information, see https\\://agentclientprotocol.com.
 *
 * @param tmpReq LoadAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LoadAgentSessionResponse
 */
LoadAgentSessionResponse Client::loadAgentSessionWithOptions(const LoadAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  LoadAgentSessionShrinkRequest request = LoadAgentSessionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "LoadAgentSession"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LoadAgentSessionResponse>();
}

/**
 * @summary Loads the message history of an existing session and returns it as an SSE stream. If the session does not exist, the server sends a JSONRPCResponse.error with a code of 400 through the SSE stream. The Content-Type is text/event-stream. Use this operation to restore session context.
 *
 * @description ## Request
 * - This operation retrieves session details and streams the Agent response using Server-Sent Events (SSE).
 * - If the target session does not exist, the operation returns an error frame with an error code of 400.
 * - The response includes information about the Agent\\"s request processing, such as message chunks, thought processes, and tool call status updates.
 * - The `stopReason` field indicates why the Agent stops the current turn. Possible values include reaching the maximum turn limit or being canceled.
 * - The returned content conforms to the Agent Client Protocol (ACP). For more information, see https\\://agentclientprotocol.com.
 *
 * @param request LoadAgentSessionRequest
 * @return LoadAgentSessionResponse
 */
LoadAgentSessionResponse Client::loadAgentSession(const LoadAgentSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return loadAgentSessionWithOptions(request, runtime);
}

/**
 * @summary Moves a user-defined function (UDF) to a path in DataStudio.
 *
 * @param request MoveFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveFunctionResponse
 */
MoveFunctionResponse Client::moveFunctionWithOptions(const MoveFunctionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasPath()) {
    body["Path"] = request.getPath();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "MoveFunction"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveFunctionResponse>();
}

/**
 * @summary Moves a user-defined function (UDF) to a path in DataStudio.
 *
 * @param request MoveFunctionRequest
 * @return MoveFunctionResponse
 */
MoveFunctionResponse Client::moveFunction(const MoveFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveFunctionWithOptions(request, runtime);
}

/**
 * @summary Moves a node to a path in DataStudio.
 *
 * @param request MoveNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveNodeResponse
 */
MoveNodeResponse Client::moveNodeWithOptions(const MoveNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasPath()) {
    body["Path"] = request.getPath();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "MoveNode"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveNodeResponse>();
}

/**
 * @summary Moves a node to a path in DataStudio.
 *
 * @param request MoveNodeRequest
 * @return MoveNodeResponse
 */
MoveNodeResponse Client::moveNode(const MoveNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveNodeWithOptions(request, runtime);
}

/**
 * @summary Moves a file resource to a path in DataStudio.
 *
 * @param request MoveResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceResponse
 */
MoveResourceResponse Client::moveResourceWithOptions(const MoveResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasPath()) {
    body["Path"] = request.getPath();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "MoveResource"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveResourceResponse>();
}

/**
 * @summary Moves a file resource to a path in DataStudio.
 *
 * @param request MoveResourceRequest
 * @return MoveResourceResponse
 */
MoveResourceResponse Client::moveResource(const MoveResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceWithOptions(request, runtime);
}

/**
 * @summary Moves a workflow to a path in DataStudio.
 *
 * @param request MoveWorkflowDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveWorkflowDefinitionResponse
 */
MoveWorkflowDefinitionResponse Client::moveWorkflowDefinitionWithOptions(const MoveWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasPath()) {
    body["Path"] = request.getPath();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "MoveWorkflowDefinition"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveWorkflowDefinitionResponse>();
}

/**
 * @summary Moves a workflow to a path in DataStudio.
 *
 * @param request MoveWorkflowDefinitionRequest
 * @return MoveWorkflowDefinitionResponse
 */
MoveWorkflowDefinitionResponse Client::moveWorkflowDefinition(const MoveWorkflowDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveWorkflowDefinitionWithOptions(request, runtime);
}

/**
 * @summary Previews the content of a specified dataset version. Currently only text file preview is supported for OSS-type datasets. Supported MIME types 1. application/json 2. application/xml 3. text/html 4. text/plain 5. application/octet-stream
 *
 * @param request PreviewDatasetVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreviewDatasetVersionResponse
 */
PreviewDatasetVersionResponse Client::previewDatasetVersionWithOptions(const PreviewDatasetVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PreviewDatasetVersion"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreviewDatasetVersionResponse>();
}

/**
 * @summary Previews the content of a specified dataset version. Currently only text file preview is supported for OSS-type datasets. Supported MIME types 1. application/json 2. application/xml 3. text/html 4. text/plain 5. application/octet-stream
 *
 * @param request PreviewDatasetVersionRequest
 * @return PreviewDatasetVersionResponse
 */
PreviewDatasetVersionResponse Client::previewDatasetVersion(const PreviewDatasetVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return previewDatasetVersionWithOptions(request, runtime);
}

/**
 * @summary Sends a prompt to an existing session and streams the agent response.
 *
 * @description ## Request
 * - This API sends a user prompt to a specified session ID and streams the agent\\"s response over SSE (Server-Sent Events).
 * - The response may include message chunks, thought process, and tool calling status updates.
 * - If the specified session does not exist, the API returns a 400 error in an SSE error frame.
 * - The `stopReason` field indicates why the agent ended the turn.
 * - You can use multiple types of content blocks in the prompt, such as text and OSS file download links.
 * - You can provide additional metadata in the `Meta` parameter to pass more context to the server.
 * - The response content conforms to the open-source Agent Client Protocol (ACP) specification. For more information, see https\\://agentclientprotocol.com
 * - \\*\\*Review the billing methods and pricing for Data Agent before you use this API\\*\\*: https\\://help.aliyun.com/zh/dataworks/dataworks-data-agent-agent-billing
 *
 * @param tmpReq PromptAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PromptAgentSessionResponse
 */
FutureGenerator<PromptAgentSessionResponse> Client::promptAgentSessionWithSSE(const PromptAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PromptAgentSessionShrinkRequest request = PromptAgentSessionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PromptAgentSession"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<PromptAgentSessionResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Sends a prompt to an existing session and streams the agent response.
 *
 * @description ## Request
 * - This API sends a user prompt to a specified session ID and streams the agent\\"s response over SSE (Server-Sent Events).
 * - The response may include message chunks, thought process, and tool calling status updates.
 * - If the specified session does not exist, the API returns a 400 error in an SSE error frame.
 * - The `stopReason` field indicates why the agent ended the turn.
 * - You can use multiple types of content blocks in the prompt, such as text and OSS file download links.
 * - You can provide additional metadata in the `Meta` parameter to pass more context to the server.
 * - The response content conforms to the open-source Agent Client Protocol (ACP) specification. For more information, see https\\://agentclientprotocol.com
 * - \\*\\*Review the billing methods and pricing for Data Agent before you use this API\\*\\*: https\\://help.aliyun.com/zh/dataworks/dataworks-data-agent-agent-billing
 *
 * @param tmpReq PromptAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PromptAgentSessionResponse
 */
PromptAgentSessionResponse Client::promptAgentSessionWithOptions(const PromptAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PromptAgentSessionShrinkRequest request = PromptAgentSessionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PromptAgentSession"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PromptAgentSessionResponse>();
}

/**
 * @summary Sends a prompt to an existing session and streams the agent response.
 *
 * @description ## Request
 * - This API sends a user prompt to a specified session ID and streams the agent\\"s response over SSE (Server-Sent Events).
 * - The response may include message chunks, thought process, and tool calling status updates.
 * - If the specified session does not exist, the API returns a 400 error in an SSE error frame.
 * - The `stopReason` field indicates why the agent ended the turn.
 * - You can use multiple types of content blocks in the prompt, such as text and OSS file download links.
 * - You can provide additional metadata in the `Meta` parameter to pass more context to the server.
 * - The response content conforms to the open-source Agent Client Protocol (ACP) specification. For more information, see https\\://agentclientprotocol.com
 * - \\*\\*Review the billing methods and pricing for Data Agent before you use this API\\*\\*: https\\://help.aliyun.com/zh/dataworks/dataworks-data-agent-agent-billing
 *
 * @param request PromptAgentSessionRequest
 * @return PromptAgentSessionResponse
 */
PromptAgentSessionResponse Client::promptAgentSession(const PromptAgentSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return promptAgentSessionWithOptions(request, runtime);
}

/**
 * @summary Remove an entity object from a Data Map collection. The collection supports Data Map categories and data albums, and the entity currently supports only the Data Table type.
 * When removing an entity from a data album, the caller must have the AliyunDataWorksFullAccess permission or be the creator or administrator of the album.
 *
 * @description 1. You must purchase DataWorks Professional Edition or a higher version to use this feature.
 *
 * @param request RemoveEntityFromMetaCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveEntityFromMetaCollectionResponse
 */
RemoveEntityFromMetaCollectionResponse Client::removeEntityFromMetaCollectionWithOptions(const RemoveEntityFromMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasMetaCollectionId()) {
    query["MetaCollectionId"] = request.getMetaCollectionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveEntityFromMetaCollection"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveEntityFromMetaCollectionResponse>();
}

/**
 * @summary Remove an entity object from a Data Map collection. The collection supports Data Map categories and data albums, and the entity currently supports only the Data Table type.
 * When removing an entity from a data album, the caller must have the AliyunDataWorksFullAccess permission or be the creator or administrator of the album.
 *
 * @description 1. You must purchase DataWorks Professional Edition or a higher version to use this feature.
 *
 * @param request RemoveEntityFromMetaCollectionRequest
 * @return RemoveEntityFromMetaCollectionResponse
 */
RemoveEntityFromMetaCollectionResponse Client::removeEntityFromMetaCollection(const RemoveEntityFromMetaCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeEntityFromMetaCollectionWithOptions(request, runtime);
}

/**
 * @summary Removes multiple upstream dependencies of an instance at a time.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param tmpReq RemoveTaskInstanceDependenciesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveTaskInstanceDependenciesResponse
 */
RemoveTaskInstanceDependenciesResponse Client::removeTaskInstanceDependenciesWithOptions(const RemoveTaskInstanceDependenciesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveTaskInstanceDependenciesShrinkRequest request = RemoveTaskInstanceDependenciesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUpstreamTaskInstanceIds()) {
    request.setUpstreamTaskInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpstreamTaskInstanceIds(), "UpstreamTaskInstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasUpstreamTaskInstanceIdsShrink()) {
    body["UpstreamTaskInstanceIds"] = request.getUpstreamTaskInstanceIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RemoveTaskInstanceDependencies"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveTaskInstanceDependenciesResponse>();
}

/**
 * @summary Removes multiple upstream dependencies of an instance at a time.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request RemoveTaskInstanceDependenciesRequest
 * @return RemoveTaskInstanceDependenciesResponse
 */
RemoveTaskInstanceDependenciesResponse Client::removeTaskInstanceDependencies(const RemoveTaskInstanceDependenciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeTaskInstanceDependenciesWithOptions(request, runtime);
}

/**
 * @summary Renames a user-defined function (UDF) in DataStudio.
 *
 * @param request RenameFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenameFunctionResponse
 */
RenameFunctionResponse Client::renameFunctionWithOptions(const RenameFunctionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RenameFunction"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenameFunctionResponse>();
}

/**
 * @summary Renames a user-defined function (UDF) in DataStudio.
 *
 * @param request RenameFunctionRequest
 * @return RenameFunctionResponse
 */
RenameFunctionResponse Client::renameFunction(const RenameFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renameFunctionWithOptions(request, runtime);
}

/**
 * @summary Renames a node in DataStudio.
 *
 * @param request RenameNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenameNodeResponse
 */
RenameNodeResponse Client::renameNodeWithOptions(const RenameNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RenameNode"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenameNodeResponse>();
}

/**
 * @summary Renames a node in DataStudio.
 *
 * @param request RenameNodeRequest
 * @return RenameNodeResponse
 */
RenameNodeResponse Client::renameNode(const RenameNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renameNodeWithOptions(request, runtime);
}

/**
 * @summary Renames a file resource in DataStudio.
 *
 * @param request RenameResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenameResourceResponse
 */
RenameResourceResponse Client::renameResourceWithOptions(const RenameResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RenameResource"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenameResourceResponse>();
}

/**
 * @summary Renames a file resource in DataStudio.
 *
 * @param request RenameResourceRequest
 * @return RenameResourceResponse
 */
RenameResourceResponse Client::renameResource(const RenameResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renameResourceWithOptions(request, runtime);
}

/**
 * @summary Renames a workflow in DataStudio.
 *
 * @param request RenameWorkflowDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenameWorkflowDefinitionResponse
 */
RenameWorkflowDefinitionResponse Client::renameWorkflowDefinitionWithOptions(const RenameWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenameWorkflowDefinition"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenameWorkflowDefinitionResponse>();
}

/**
 * @summary Renames a workflow in DataStudio.
 *
 * @param request RenameWorkflowDefinitionRequest
 * @return RenameWorkflowDefinitionResponse
 */
RenameWorkflowDefinitionResponse Client::renameWorkflowDefinition(const RenameWorkflowDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renameWorkflowDefinitionWithOptions(request, runtime);
}

/**
 * @summary Reruns multiple node instances in a batch.
 *
 * @description You must purchase DataWorks Basic Edition or a more advanced edition to use this operation.
 *
 * @param tmpReq RerunTaskInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RerunTaskInstancesResponse
 */
RerunTaskInstancesResponse Client::rerunTaskInstancesWithOptions(const RerunTaskInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RerunTaskInstancesShrinkRequest request = RerunTaskInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.getIdsShrink();
  }

  if (!!request.hasUseLatestConfig()) {
    body["UseLatestConfig"] = request.getUseLatestConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RerunTaskInstances"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RerunTaskInstancesResponse>();
}

/**
 * @summary Reruns multiple node instances in a batch.
 *
 * @description You must purchase DataWorks Basic Edition or a more advanced edition to use this operation.
 *
 * @param request RerunTaskInstancesRequest
 * @return RerunTaskInstancesResponse
 */
RerunTaskInstancesResponse Client::rerunTaskInstances(const RerunTaskInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rerunTaskInstancesWithOptions(request, runtime);
}

/**
 * @summary Rerun a workflow instance
 *
 * @param tmpReq RerunWorkflowInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RerunWorkflowInstancesResponse
 */
RerunWorkflowInstancesResponse Client::rerunWorkflowInstancesWithOptions(const RerunWorkflowInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RerunWorkflowInstancesShrinkRequest request = RerunWorkflowInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilter(), "Filter", "json"));
  }

  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasBizdate()) {
    body["Bizdate"] = request.getBizdate();
  }

  if (!!request.hasEndTriggerTime()) {
    body["EndTriggerTime"] = request.getEndTriggerTime();
  }

  if (!!request.hasEnvType()) {
    body["EnvType"] = request.getEnvType();
  }

  if (!!request.hasFilterShrink()) {
    body["Filter"] = request.getFilterShrink();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.getIdsShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasStartTriggerTime()) {
    body["StartTriggerTime"] = request.getStartTriggerTime();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasWorkflowId()) {
    body["WorkflowId"] = request.getWorkflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RerunWorkflowInstances"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RerunWorkflowInstancesResponse>();
}

/**
 * @summary Rerun a workflow instance
 *
 * @param request RerunWorkflowInstancesRequest
 * @return RerunWorkflowInstancesResponse
 */
RerunWorkflowInstancesResponse Client::rerunWorkflowInstances(const RerunWorkflowInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rerunWorkflowInstancesWithOptions(request, runtime);
}

/**
 * @summary Resumes multiple suspended instances at a time.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param tmpReq ResumeTaskInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeTaskInstancesResponse
 */
ResumeTaskInstancesResponse Client::resumeTaskInstancesWithOptions(const ResumeTaskInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ResumeTaskInstancesShrinkRequest request = ResumeTaskInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.getIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ResumeTaskInstances"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeTaskInstancesResponse>();
}

/**
 * @summary Resumes multiple suspended instances at a time.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ResumeTaskInstancesRequest
 * @return ResumeTaskInstancesResponse
 */
ResumeTaskInstancesResponse Client::resumeTaskInstances(const ResumeTaskInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeTaskInstancesWithOptions(request, runtime);
}

/**
 * @summary Revokes roles that are assigned to a member in a workspace.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param tmpReq RevokeMemberProjectRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeMemberProjectRolesResponse
 */
RevokeMemberProjectRolesResponse Client::revokeMemberProjectRolesWithOptions(const RevokeMemberProjectRolesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RevokeMemberProjectRolesShrinkRequest request = RevokeMemberProjectRolesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRoleCodes()) {
    request.setRoleCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRoleCodes(), "RoleCodes", "json"));
  }

  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRoleCodesShrink()) {
    body["RoleCodes"] = request.getRoleCodesShrink();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RevokeMemberProjectRoles"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeMemberProjectRolesResponse>();
}

/**
 * @summary Revokes roles that are assigned to a member in a workspace.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request RevokeMemberProjectRolesRequest
 * @return RevokeMemberProjectRolesResponse
 */
RevokeMemberProjectRolesResponse Client::revokeMemberProjectRoles(const RevokeMemberProjectRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeMemberProjectRolesWithOptions(request, runtime);
}

/**
 * @summary Rolls back a specified parameter.
 *
 * @description This operation is available only in DataWorks Professional Edition or a later version.
 *
 * @param request RollbackParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackParameterResponse
 */
RollbackParameterResponse Client::rollbackParameterWithOptions(const RollbackParameterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasRollbackVersion()) {
    body["RollbackVersion"] = request.getRollbackVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RollbackParameter"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackParameterResponse>();
}

/**
 * @summary Rolls back a specified parameter.
 *
 * @description This operation is available only in DataWorks Professional Edition or a later version.
 *
 * @param request RollbackParameterRequest
 * @return RollbackParameterResponse
 */
RollbackParameterResponse Client::rollbackParameter(const RollbackParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rollbackParameterWithOptions(request, runtime);
}

/**
 * @summary Sets the statuses of multiple instances to successful at a time.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param tmpReq SetSuccessTaskInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetSuccessTaskInstancesResponse
 */
SetSuccessTaskInstancesResponse Client::setSuccessTaskInstancesWithOptions(const SetSuccessTaskInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetSuccessTaskInstancesShrinkRequest request = SetSuccessTaskInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.getIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SetSuccessTaskInstances"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetSuccessTaskInstancesResponse>();
}

/**
 * @summary Sets the statuses of multiple instances to successful at a time.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request SetSuccessTaskInstancesRequest
 * @return SetSuccessTaskInstancesResponse
 */
SetSuccessTaskInstancesResponse Client::setSuccessTaskInstances(const SetSuccessTaskInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setSuccessTaskInstancesWithOptions(request, runtime);
}

/**
 * @summary Starts a new-version synchronization task.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param tmpReq StartDIJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDIJobResponse
 */
StartDIJobResponse Client::startDIJobWithOptions(const StartDIJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartDIJobShrinkRequest request = StartDIJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRealtimeStartSettings()) {
    request.setRealtimeStartSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRealtimeStartSettings(), "RealtimeStartSettings", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartDIJob"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartDIJobResponse>();
}

/**
 * @summary Starts a new-version synchronization task.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request StartDIJobRequest
 * @return StartDIJobResponse
 */
StartDIJobResponse Client::startDIJob(const StartDIJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDIJobWithOptions(request, runtime);
}

/**
 * @summary Start multiple workflow instances in batch.
 *
 * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param tmpReq StartWorkflowInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartWorkflowInstancesResponse
 */
StartWorkflowInstancesResponse Client::startWorkflowInstancesWithOptions(const StartWorkflowInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartWorkflowInstancesShrinkRequest request = StartWorkflowInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.getIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartWorkflowInstances"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartWorkflowInstancesResponse>();
}

/**
 * @summary Start multiple workflow instances in batch.
 *
 * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request StartWorkflowInstancesRequest
 * @return StartWorkflowInstancesResponse
 */
StartWorkflowInstancesResponse Client::startWorkflowInstances(const StartWorkflowInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startWorkflowInstancesWithOptions(request, runtime);
}

/**
 * @summary Stops a synchronization task.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request StopDIJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDIJobResponse
 */
StopDIJobResponse Client::stopDIJobWithOptions(const StopDIJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDIJob"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDIJobResponse>();
}

/**
 * @summary Stops a synchronization task.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request StopDIJobRequest
 * @return StopDIJobResponse
 */
StopDIJobResponse Client::stopDIJob(const StopDIJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDIJobWithOptions(request, runtime);
}

/**
 * @summary Withdraws or terminates a specified process instance.
 *
 * @description ## Description
 * - Requesters can use this operation to withdraw an approval process they initiated.
 * - Only the initiator of the approval process can call this operation.
 * - After a successful call, the operation terminates the approval process and updates its status to withdrawn.
 *
 * @param request StopProcessInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopProcessInstanceResponse
 */
StopProcessInstanceResponse Client::stopProcessInstanceWithOptions(const StopProcessInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasProcessInstanceId()) {
    body["ProcessInstanceId"] = request.getProcessInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StopProcessInstance"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopProcessInstanceResponse>();
}

/**
 * @summary Withdraws or terminates a specified process instance.
 *
 * @description ## Description
 * - Requesters can use this operation to withdraw an approval process they initiated.
 * - Only the initiator of the approval process can call this operation.
 * - After a successful call, the operation terminates the approval process and updates its status to withdrawn.
 *
 * @param request StopProcessInstanceRequest
 * @return StopProcessInstanceResponse
 */
StopProcessInstanceResponse Client::stopProcessInstance(const StopProcessInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopProcessInstanceWithOptions(request, runtime);
}

/**
 * @summary Stops multiple instances at a time.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param tmpReq StopTaskInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopTaskInstancesResponse
 */
StopTaskInstancesResponse Client::stopTaskInstancesWithOptions(const StopTaskInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StopTaskInstancesShrinkRequest request = StopTaskInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.getIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StopTaskInstances"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopTaskInstancesResponse>();
}

/**
 * @summary Stops multiple instances at a time.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request StopTaskInstancesRequest
 * @return StopTaskInstancesResponse
 */
StopTaskInstancesResponse Client::stopTaskInstances(const StopTaskInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopTaskInstancesWithOptions(request, runtime);
}

/**
 * @summary Stops multiple workflow instances at a time.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param tmpReq StopWorkflowInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopWorkflowInstancesResponse
 */
StopWorkflowInstancesResponse Client::stopWorkflowInstancesWithOptions(const StopWorkflowInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StopWorkflowInstancesShrinkRequest request = StopWorkflowInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.getIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StopWorkflowInstances"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopWorkflowInstancesResponse>();
}

/**
 * @summary Stops multiple workflow instances at a time.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request StopWorkflowInstancesRequest
 * @return StopWorkflowInstancesResponse
 */
StopWorkflowInstancesResponse Client::stopWorkflowInstances(const StopWorkflowInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopWorkflowInstancesWithOptions(request, runtime);
}

/**
 * @summary Commits a file to the development environment of the scheduling system to generate a task.
 *
 * @param request SubmitFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitFileResponse
 */
SubmitFileResponse Client::submitFileWithOptions(const SubmitFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasFileId()) {
    body["FileId"] = request.getFileId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  if (!!request.hasSkipAllDeployFileExtensions()) {
    body["SkipAllDeployFileExtensions"] = request.getSkipAllDeployFileExtensions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitFile"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitFileResponse>();
}

/**
 * @summary Commits a file to the development environment of the scheduling system to generate a task.
 *
 * @param request SubmitFileRequest
 * @return SubmitFileResponse
 */
SubmitFileResponse Client::submitFile(const SubmitFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitFileWithOptions(request, runtime);
}

/**
 * @summary Suspends multiple instances at a time.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param tmpReq SuspendTaskInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendTaskInstancesResponse
 */
SuspendTaskInstancesResponse Client::suspendTaskInstancesWithOptions(const SuspendTaskInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SuspendTaskInstancesShrinkRequest request = SuspendTaskInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.getIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SuspendTaskInstances"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendTaskInstancesResponse>();
}

/**
 * @summary Suspends multiple instances at a time.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request SuspendTaskInstancesRequest
 * @return SuspendTaskInstancesResponse
 */
SuspendTaskInstancesResponse Client::suspendTaskInstances(const SuspendTaskInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendTaskInstancesWithOptions(request, runtime);
}

/**
 * @summary Adds tags to data assets.
 *
 * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
 *
 * @param tmpReq TagDataAssetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagDataAssetsResponse
 */
TagDataAssetsResponse Client::tagDataAssetsWithOptions(const TagDataAssetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TagDataAssetsShrinkRequest request = TagDataAssetsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataAssetIds()) {
    request.setDataAssetIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataAssetIds(), "DataAssetIds", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAutoTraceEnabled()) {
    query["AutoTraceEnabled"] = request.getAutoTraceEnabled();
  }

  if (!!request.hasDataAssetIdsShrink()) {
    query["DataAssetIds"] = request.getDataAssetIdsShrink();
  }

  if (!!request.hasDataAssetType()) {
    query["DataAssetType"] = request.getDataAssetType();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.getEnvType();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagDataAssets"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagDataAssetsResponse>();
}

/**
 * @summary Adds tags to data assets.
 *
 * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
 *
 * @param request TagDataAssetsRequest
 * @return TagDataAssetsResponse
 */
TagDataAssetsResponse Client::tagDataAssets(const TagDataAssetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagDataAssetsWithOptions(request, runtime);
}

/**
 * @summary Test the connectivity of a data source on a resource group.
 *
 * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 * 2. You must have at least one of the following roles in the DataWorks project space:
 *    Tenant Owner, Space Administrator, Deployment, Developer, Project Owner, or O\\&M.
 *
 * @param request TestDataSourceConnectivityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TestDataSourceConnectivityResponse
 */
TestDataSourceConnectivityResponse Client::testDataSourceConnectivityWithOptions(const TestDataSourceConnectivityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.getDataSourceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TestDataSourceConnectivity"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TestDataSourceConnectivityResponse>();
}

/**
 * @summary Test the connectivity of a data source on a resource group.
 *
 * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 * 2. You must have at least one of the following roles in the DataWorks project space:
 *    Tenant Owner, Space Administrator, Deployment, Developer, Project Owner, or O\\&M.
 *
 * @param request TestDataSourceConnectivityRequest
 * @return TestDataSourceConnectivityResponse
 */
TestDataSourceConnectivityResponse Client::testDataSourceConnectivity(const TestDataSourceConnectivityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return testDataSourceConnectivityWithOptions(request, runtime);
}

/**
 * @summary Triggers a task to run by using an HTTP Trigger node at a specified time.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request TriggerSchedulerTaskInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TriggerSchedulerTaskInstanceResponse
 */
TriggerSchedulerTaskInstanceResponse Client::triggerSchedulerTaskInstanceWithOptions(const TriggerSchedulerTaskInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnvType()) {
    query["EnvType"] = request.getEnvType();
  }

  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTriggerTime()) {
    body["TriggerTime"] = request.getTriggerTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TriggerSchedulerTaskInstance"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TriggerSchedulerTaskInstanceResponse>();
}

/**
 * @summary Triggers a task to run by using an HTTP Trigger node at a specified time.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request TriggerSchedulerTaskInstanceRequest
 * @return TriggerSchedulerTaskInstanceResponse
 */
TriggerSchedulerTaskInstanceResponse Client::triggerSchedulerTaskInstance(const TriggerSchedulerTaskInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return triggerSchedulerTaskInstanceWithOptions(request, runtime);
}

/**
 * @summary Removes tags from data assets.
 *
 * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
 *
 * @param tmpReq UnTagDataAssetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnTagDataAssetsResponse
 */
UnTagDataAssetsResponse Client::unTagDataAssetsWithOptions(const UnTagDataAssetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UnTagDataAssetsShrinkRequest request = UnTagDataAssetsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataAssetIds()) {
    request.setDataAssetIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataAssetIds(), "DataAssetIds", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasDataAssetIdsShrink()) {
    query["DataAssetIds"] = request.getDataAssetIdsShrink();
  }

  if (!!request.hasDataAssetType()) {
    query["DataAssetType"] = request.getDataAssetType();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.getEnvType();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnTagDataAssets"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnTagDataAssetsResponse>();
}

/**
 * @summary Removes tags from data assets.
 *
 * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
 *
 * @param request UnTagDataAssetsRequest
 * @return UnTagDataAssetsResponse
 */
UnTagDataAssetsResponse Client::unTagDataAssets(const UnTagDataAssetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unTagDataAssetsWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a custom alert monitoring rule.
 *
 * @param tmpReq UpdateAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAlertRuleResponse
 */
UpdateAlertRuleResponse Client::updateAlertRuleWithOptions(const UpdateAlertRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAlertRuleShrinkRequest request = UpdateAlertRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTriggerCondition()) {
    request.setTriggerConditionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTriggerCondition(), "TriggerCondition", "json"));
  }

  json query = {};
  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.getOwner();
  }

  if (!!request.hasTriggerConditionShrink()) {
    query["TriggerCondition"] = request.getTriggerConditionShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAlertRule"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAlertRuleResponse>();
}

/**
 * @summary Updates the information about a custom alert monitoring rule.
 *
 * @param request UpdateAlertRuleRequest
 * @return UpdateAlertRuleResponse
 */
UpdateAlertRuleResponse Client::updateAlertRule(const UpdateAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAlertRuleWithOptions(request, runtime);
}

/**
 * @summary Updates a workflow.
 *
 * @param request UpdateBusinessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBusinessResponse
 */
UpdateBusinessResponse Client::updateBusinessWithOptions(const UpdateBusinessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessId()) {
    body["BusinessId"] = request.getBusinessId();
  }

  if (!!request.hasBusinessName()) {
    body["BusinessName"] = request.getBusinessName();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.getOwner();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateBusiness"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBusinessResponse>();
}

/**
 * @summary Updates a workflow.
 *
 * @param request UpdateBusinessRequest
 * @return UpdateBusinessResponse
 */
UpdateBusinessResponse Client::updateBusiness(const UpdateBusinessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBusinessWithOptions(request, runtime);
}

/**
 * @summary Updates the business metadata for a column in a data map. This operation can only update the business description and custom attributes.
 *
 * @description 1. This operation requires DataWorks Basic Edition or a later version.
 * 2. This operation supports only MaxCompute, hms, and dlf tables.
 *
 * @param tmpReq UpdateColumnBusinessMetadataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateColumnBusinessMetadataResponse
 */
UpdateColumnBusinessMetadataResponse Client::updateColumnBusinessMetadataWithOptions(const UpdateColumnBusinessMetadataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateColumnBusinessMetadataShrinkRequest request = UpdateColumnBusinessMetadataShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomAttributes()) {
    request.setCustomAttributesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomAttributes(), "CustomAttributes", "json"));
  }

  json body = {};
  if (!!request.hasCustomAttributesShrink()) {
    body["CustomAttributes"] = request.getCustomAttributesShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateColumnBusinessMetadata"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateColumnBusinessMetadataResponse>();
}

/**
 * @summary Updates the business metadata for a column in a data map. This operation can only update the business description and custom attributes.
 *
 * @description 1. This operation requires DataWorks Basic Edition or a later version.
 * 2. This operation supports only MaxCompute, hms, and dlf tables.
 *
 * @param request UpdateColumnBusinessMetadataRequest
 * @return UpdateColumnBusinessMetadataResponse
 */
UpdateColumnBusinessMetadataResponse Client::updateColumnBusinessMetadata(const UpdateColumnBusinessMetadataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateColumnBusinessMetadataWithOptions(request, runtime);
}

/**
 * @summary Updates components.
 *
 * @description This API is currently in trial. To use this API, submit an application. After the administrator adds you to the trial list, you can call this API.
 *
 * @param request UpdateComponentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateComponentResponse
 */
UpdateComponentResponse Client::updateComponentWithOptions(const UpdateComponentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasComponentId()) {
    body["ComponentId"] = request.getComponentId();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.getSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateComponent"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateComponentResponse>();
}

/**
 * @summary Updates components.
 *
 * @description This API is currently in trial. To use this API, submit an application. After the administrator adds you to the trial list, you can call this API.
 *
 * @param request UpdateComponentRequest
 * @return UpdateComponentResponse
 */
UpdateComponentResponse Client::updateComponent(const UpdateComponentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateComponentWithOptions(request, runtime);
}

/**
 * @summary Modifies the specified computing resource based on the computing resource ID.
 *
 * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 * 2. You must have at least one of the following roles in the DataWorks project space:
 * 3. Tenant Owner, tenant administrator, Space Administrator, Project Owner, or O\\&M
 *
 * @param request UpdateComputeResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateComputeResourceResponse
 */
UpdateComputeResourceResponse Client::updateComputeResourceWithOptions(const UpdateComputeResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionProperties()) {
    query["ConnectionProperties"] = request.getConnectionProperties();
  }

  if (!!request.hasConnectionPropertiesMode()) {
    query["ConnectionPropertiesMode"] = request.getConnectionPropertiesMode();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateComputeResource"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateComputeResourceResponse>();
}

/**
 * @summary Modifies the specified computing resource based on the computing resource ID.
 *
 * @description 1. You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 * 2. You must have at least one of the following roles in the DataWorks project space:
 * 3. Tenant Owner, tenant administrator, Space Administrator, Project Owner, or O\\&M
 *
 * @param request UpdateComputeResourceRequest
 * @return UpdateComputeResourceResponse
 */
UpdateComputeResourceResponse Client::updateComputeResource(const UpdateComputeResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateComputeResourceWithOptions(request, runtime);
}

/**
 * @summary Updates a custom attribute.
 *
 * @param tmpReq UpdateCustomAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomAttributeResponse
 */
UpdateCustomAttributeResponse Client::updateCustomAttributeWithOptions(const UpdateCustomAttributeRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateCustomAttributeShrinkRequest request = UpdateCustomAttributeShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEntityTypes()) {
    request.setEntityTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEntityTypes(), "EntityTypes", "simple"));
  }

  if (!!tmpReq.hasValueEnums()) {
    request.setValueEnumsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getValueEnums(), "ValueEnums", "simple"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasDisplayEnabled()) {
    body["DisplayEnabled"] = request.getDisplayEnabled();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEntityTypesShrink()) {
    body["EntityTypes"] = request.getEntityTypesShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasSearchFilterEnabled()) {
    body["SearchFilterEnabled"] = request.getSearchFilterEnabled();
  }

  if (!!request.hasValueEnumsShrink()) {
    body["ValueEnums"] = request.getValueEnumsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateCustomAttribute"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomAttributeResponse>();
}

/**
 * @summary Updates a custom attribute.
 *
 * @param request UpdateCustomAttributeRequest
 * @return UpdateCustomAttributeResponse
 */
UpdateCustomAttributeResponse Client::updateCustomAttribute(const UpdateCustomAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomAttributeWithOptions(request, runtime);
}

/**
 * @summary Updates an alert rule configured for a synchronization task.
 *
 * @param tmpReq UpdateDIAlarmRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDIAlarmRuleResponse
 */
UpdateDIAlarmRuleResponse Client::updateDIAlarmRuleWithOptions(const UpdateDIAlarmRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDIAlarmRuleShrinkRequest request = UpdateDIAlarmRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNotificationSettings()) {
    request.setNotificationSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotificationSettings(), "NotificationSettings", "json"));
  }

  if (!!tmpReq.hasTriggerConditions()) {
    request.setTriggerConditionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTriggerConditions(), "TriggerConditions", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDIAlarmRule"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDIAlarmRuleResponse>();
}

/**
 * @summary Updates an alert rule configured for a synchronization task.
 *
 * @param request UpdateDIAlarmRuleRequest
 * @return UpdateDIAlarmRuleResponse
 */
UpdateDIAlarmRuleResponse Client::updateDIAlarmRule(const UpdateDIAlarmRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDIAlarmRuleWithOptions(request, runtime);
}

/**
 * @summary Update a Data Integration task.
 *
 * @description This feature requires DataWorks Basic Edition or higher.
 *
 * @param tmpReq UpdateDIJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDIJobResponse
 */
UpdateDIJobResponse Client::updateDIJobWithOptions(const UpdateDIJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDIJobShrinkRequest request = UpdateDIJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasJobSettings()) {
    request.setJobSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getJobSettings(), "JobSettings", "json"));
  }

  if (!!tmpReq.hasResourceSettings()) {
    request.setResourceSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceSettings(), "ResourceSettings", "json"));
  }

  if (!!tmpReq.hasTableMappings()) {
    request.setTableMappingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTableMappings(), "TableMappings", "json"));
  }

  if (!!tmpReq.hasTransformationRules()) {
    request.setTransformationRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTransformationRules(), "TransformationRules", "json"));
  }

  json query = {};
  if (!!request.hasDIJobId()) {
    query["DIJobId"] = request.getDIJobId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.getOwner();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasFileSpec()) {
    body["FileSpec"] = request.getFileSpec();
  }

  if (!!request.hasJobSettingsShrink()) {
    body["JobSettings"] = request.getJobSettingsShrink();
  }

  if (!!request.hasResourceSettingsShrink()) {
    body["ResourceSettings"] = request.getResourceSettingsShrink();
  }

  if (!!request.hasTableMappingsShrink()) {
    body["TableMappings"] = request.getTableMappingsShrink();
  }

  if (!!request.hasTransformationRulesShrink()) {
    body["TransformationRules"] = request.getTransformationRulesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDIJob"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDIJobResponse>();
}

/**
 * @summary Update a Data Integration task.
 *
 * @description This feature requires DataWorks Basic Edition or higher.
 *
 * @param request UpdateDIJobRequest
 * @return UpdateDIJobResponse
 */
UpdateDIJobResponse Client::updateDIJob(const UpdateDIJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDIJobWithOptions(request, runtime);
}

/**
 * @summary Updates a tag.
 *
 * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
 *
 * @param tmpReq UpdateDataAssetTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataAssetTagResponse
 */
UpdateDataAssetTagResponse Client::updateDataAssetTagWithOptions(const UpdateDataAssetTagRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataAssetTagShrinkRequest request = UpdateDataAssetTagShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasManagers()) {
    request.setManagersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getManagers(), "Managers", "json"));
  }

  if (!!tmpReq.hasValues()) {
    request.setValuesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getValues(), "Values", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.getKey();
  }

  if (!!request.hasManagersShrink()) {
    query["Managers"] = request.getManagersShrink();
  }

  if (!!request.hasValuesShrink()) {
    query["Values"] = request.getValuesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDataAssetTag"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataAssetTagResponse>();
}

/**
 * @summary Updates a tag.
 *
 * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
 *
 * @param request UpdateDataAssetTagRequest
 * @return UpdateDataAssetTagResponse
 */
UpdateDataAssetTagResponse Client::updateDataAssetTag(const UpdateDataAssetTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataAssetTagWithOptions(request, runtime);
}

/**
 * @summary Updates a specified data quality monitoring alert rule.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param tmpReq UpdateDataQualityAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataQualityAlertRuleResponse
 */
UpdateDataQualityAlertRuleResponse Client::updateDataQualityAlertRuleWithOptions(const UpdateDataQualityAlertRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataQualityAlertRuleShrinkRequest request = UpdateDataQualityAlertRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNotification()) {
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTarget()) {
    request.setTargetShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTarget(), "Target", "json"));
  }

  json body = {};
  if (!!request.hasCondition()) {
    body["Condition"] = request.getCondition();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasNotificationShrink()) {
    body["Notification"] = request.getNotificationShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasTargetShrink()) {
    body["Target"] = request.getTargetShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDataQualityAlertRule"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataQualityAlertRuleResponse>();
}

/**
 * @summary Updates a specified data quality monitoring alert rule.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request UpdateDataQualityAlertRuleRequest
 * @return UpdateDataQualityAlertRuleResponse
 */
UpdateDataQualityAlertRuleResponse Client::updateDataQualityAlertRule(const UpdateDataQualityAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataQualityAlertRuleWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI UpdateDataQualityEvaluationTask is deprecated, please use dataworks-public::2024-05-18::UpdateDataQualityScan instead.
 *
 * @summary Updates a data quality validation task.
 *
 * @description DataWorks Basic Edition or above must be purchased to use this operation.
 *
 * @param tmpReq UpdateDataQualityEvaluationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataQualityEvaluationTaskResponse
 */
UpdateDataQualityEvaluationTaskResponse Client::updateDataQualityEvaluationTaskWithOptions(const UpdateDataQualityEvaluationTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataQualityEvaluationTaskShrinkRequest request = UpdateDataQualityEvaluationTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataQualityRules()) {
    request.setDataQualityRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataQualityRules(), "DataQualityRules", "json"));
  }

  if (!!tmpReq.hasHooks()) {
    request.setHooksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHooks(), "Hooks", "json"));
  }

  if (!!tmpReq.hasNotifications()) {
    request.setNotificationsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotifications(), "Notifications", "json"));
  }

  if (!!tmpReq.hasTarget()) {
    request.setTargetShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTarget(), "Target", "json"));
  }

  if (!!tmpReq.hasTrigger()) {
    request.setTriggerShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTrigger(), "Trigger", "json"));
  }

  json body = {};
  if (!!request.hasDataQualityRulesShrink()) {
    body["DataQualityRules"] = request.getDataQualityRulesShrink();
  }

  if (!!request.hasDataSourceId()) {
    body["DataSourceId"] = request.getDataSourceId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasHooksShrink()) {
    body["Hooks"] = request.getHooksShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNotificationsShrink()) {
    body["Notifications"] = request.getNotificationsShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRuntimeConf()) {
    body["RuntimeConf"] = request.getRuntimeConf();
  }

  if (!!request.hasTargetShrink()) {
    body["Target"] = request.getTargetShrink();
  }

  if (!!request.hasTriggerShrink()) {
    body["Trigger"] = request.getTriggerShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDataQualityEvaluationTask"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataQualityEvaluationTaskResponse>();
}

/**
 * @deprecated OpenAPI UpdateDataQualityEvaluationTask is deprecated, please use dataworks-public::2024-05-18::UpdateDataQualityScan instead.
 *
 * @summary Updates a data quality validation task.
 *
 * @description DataWorks Basic Edition or above must be purchased to use this operation.
 *
 * @param request UpdateDataQualityEvaluationTaskRequest
 * @return UpdateDataQualityEvaluationTaskResponse
 */
UpdateDataQualityEvaluationTaskResponse Client::updateDataQualityEvaluationTask(const UpdateDataQualityEvaluationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataQualityEvaluationTaskWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI UpdateDataQualityRule is deprecated, please use dataworks-public::2024-05-18::UpdateDataQualityScan instead.
 *
 * @summary Updates a data quality rule.
 *
 * @description You must purchase DataWorks Basic Edition or above to use this feature.
 *
 * @param tmpReq UpdateDataQualityRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataQualityRuleResponse
 */
UpdateDataQualityRuleResponse Client::updateDataQualityRuleWithOptions(const UpdateDataQualityRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataQualityRuleShrinkRequest request = UpdateDataQualityRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCheckingConfig()) {
    request.setCheckingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCheckingConfig(), "CheckingConfig", "json"));
  }

  if (!!tmpReq.hasErrorHandlers()) {
    request.setErrorHandlersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getErrorHandlers(), "ErrorHandlers", "json"));
  }

  if (!!tmpReq.hasSamplingConfig()) {
    request.setSamplingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSamplingConfig(), "SamplingConfig", "json"));
  }

  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasCheckingConfigShrink()) {
    body["CheckingConfig"] = request.getCheckingConfigShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnabled()) {
    body["Enabled"] = request.getEnabled();
  }

  if (!!request.hasErrorHandlersShrink()) {
    body["ErrorHandlers"] = request.getErrorHandlersShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSamplingConfigShrink()) {
    body["SamplingConfig"] = request.getSamplingConfigShrink();
  }

  if (!!request.hasSeverity()) {
    body["Severity"] = request.getSeverity();
  }

  if (!!request.hasTemplateCode()) {
    body["TemplateCode"] = request.getTemplateCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataQualityRule"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataQualityRuleResponse>();
}

/**
 * @deprecated OpenAPI UpdateDataQualityRule is deprecated, please use dataworks-public::2024-05-18::UpdateDataQualityScan instead.
 *
 * @summary Updates a data quality rule.
 *
 * @description You must purchase DataWorks Basic Edition or above to use this feature.
 *
 * @param request UpdateDataQualityRuleRequest
 * @return UpdateDataQualityRuleResponse
 */
UpdateDataQualityRuleResponse Client::updateDataQualityRule(const UpdateDataQualityRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataQualityRuleWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI UpdateDataQualityRuleTemplate is deprecated, please use dataworks-public::2024-05-18::UpdateDataQualityTemplate instead.
 *
 * @summary Updates a data quality rule template.
 *
 * @description You can call this operation only after you purchase DataWorks Basic Edition or a higher edition.
 *
 * @param tmpReq UpdateDataQualityRuleTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataQualityRuleTemplateResponse
 */
UpdateDataQualityRuleTemplateResponse Client::updateDataQualityRuleTemplateWithOptions(const UpdateDataQualityRuleTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataQualityRuleTemplateShrinkRequest request = UpdateDataQualityRuleTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCheckingConfig()) {
    request.setCheckingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCheckingConfig(), "CheckingConfig", "json"));
  }

  if (!!tmpReq.hasSamplingConfig()) {
    request.setSamplingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSamplingConfig(), "SamplingConfig", "json"));
  }

  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasCheckingConfigShrink()) {
    body["CheckingConfig"] = request.getCheckingConfigShrink();
  }

  if (!!request.hasCode()) {
    body["Code"] = request.getCode();
  }

  if (!!request.hasDirectoryPath()) {
    body["DirectoryPath"] = request.getDirectoryPath();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasSamplingConfigShrink()) {
    body["SamplingConfig"] = request.getSamplingConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataQualityRuleTemplate"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataQualityRuleTemplateResponse>();
}

/**
 * @deprecated OpenAPI UpdateDataQualityRuleTemplate is deprecated, please use dataworks-public::2024-05-18::UpdateDataQualityTemplate instead.
 *
 * @summary Updates a data quality rule template.
 *
 * @description You can call this operation only after you purchase DataWorks Basic Edition or a higher edition.
 *
 * @param request UpdateDataQualityRuleTemplateRequest
 * @return UpdateDataQualityRuleTemplateResponse
 */
UpdateDataQualityRuleTemplateResponse Client::updateDataQualityRuleTemplate(const UpdateDataQualityRuleTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataQualityRuleTemplateWithOptions(request, runtime);
}

/**
 * @summary Updates a data quality monitor.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param tmpReq UpdateDataQualityScanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataQualityScanResponse
 */
UpdateDataQualityScanResponse Client::updateDataQualityScanWithOptions(const UpdateDataQualityScanRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateDataQualityScanShrinkRequest request = UpdateDataQualityScanShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasComputeResource()) {
    request.setComputeResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getComputeResource(), "ComputeResource", "json"));
  }

  if (!!tmpReq.hasHooks()) {
    request.setHooksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHooks(), "Hooks", "json"));
  }

  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParameters(), "Parameters", "json"));
  }

  if (!!tmpReq.hasRuntimeResource()) {
    request.setRuntimeResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRuntimeResource(), "RuntimeResource", "json"));
  }

  if (!!tmpReq.hasTrigger()) {
    request.setTriggerShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTrigger(), "Trigger", "json"));
  }

  json body = {};
  if (!!request.hasComputeResourceShrink()) {
    body["ComputeResource"] = request.getComputeResourceShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasHooksShrink()) {
    body["Hooks"] = request.getHooksShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.getOwner();
  }

  if (!!request.hasParametersShrink()) {
    body["Parameters"] = request.getParametersShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasRuntimeResourceShrink()) {
    body["RuntimeResource"] = request.getRuntimeResourceShrink();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.getSpec();
  }

  if (!!request.hasTriggerShrink()) {
    body["Trigger"] = request.getTriggerShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDataQualityScan"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataQualityScanResponse>();
}

/**
 * @summary Updates a data quality monitor.
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request UpdateDataQualityScanRequest
 * @return UpdateDataQualityScanResponse
 */
UpdateDataQualityScanResponse Client::updateDataQualityScan(const UpdateDataQualityScanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataQualityScanWithOptions(request, runtime);
}

/**
 * @summary Updates a data quality rule template in a project
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request UpdateDataQualityTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataQualityTemplateResponse
 */
UpdateDataQualityTemplateResponse Client::updateDataQualityTemplateWithOptions(const UpdateDataQualityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwner()) {
    query["Owner"] = request.getOwner();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.getSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataQualityTemplate"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataQualityTemplateResponse>();
}

/**
 * @summary Updates a data quality rule template in a project
 *
 * @description DataWorks Basic Edition or a higher edition is required.
 *
 * @param request UpdateDataQualityTemplateRequest
 * @return UpdateDataQualityTemplateResponse
 */
UpdateDataQualityTemplateResponse Client::updateDataQualityTemplate(const UpdateDataQualityTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataQualityTemplateWithOptions(request, runtime);
}

/**
 * @summary Modifies a data source by ID.
 *
 * @param request UpdateDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataSourceResponse
 */
UpdateDataSourceResponse Client::updateDataSourceWithOptions(const UpdateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionProperties()) {
    query["ConnectionProperties"] = request.getConnectionProperties();
  }

  if (!!request.hasConnectionPropertiesMode()) {
    query["ConnectionPropertiesMode"] = request.getConnectionPropertiesMode();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDataSource"},
    {"version" , "2024-05-18"},
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
 * @summary Modifies a data source by ID.
 *
 * @param request UpdateDataSourceRequest
 * @return UpdateDataSourceResponse
 */
UpdateDataSourceResponse Client::updateDataSource(const UpdateDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataSourceWithOptions(request, runtime);
}

/**
 * @summary Updates dataset information. Only DataWorks datasets are supported. The operator must be the creator of the dataset or the administrator of the workspace where the dataset is located.
 *
 * @param request UpdateDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDatasetResponse
 */
UpdateDatasetResponse Client::updateDatasetWithOptions(const UpdateDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasReadme()) {
    body["Readme"] = request.getReadme();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDataset"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDatasetResponse>();
}

/**
 * @summary Updates dataset information. Only DataWorks datasets are supported. The operator must be the creator of the dataset or the administrator of the workspace where the dataset is located.
 *
 * @param request UpdateDatasetRequest
 * @return UpdateDatasetResponse
 */
UpdateDatasetResponse Client::updateDataset(const UpdateDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDatasetWithOptions(request, runtime);
}

/**
 * @summary Updates dataset version information. Only DataWorks datasets are supported. Requires dataset creator or workspace administrator permissions.
 *
 * @param request UpdateDatasetVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDatasetVersionResponse
 */
UpdateDatasetVersionResponse Client::updateDatasetVersionWithOptions(const UpdateDatasetVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDatasetVersion"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDatasetVersionResponse>();
}

/**
 * @summary Updates dataset version information. Only DataWorks datasets are supported. Requires dataset creator or workspace administrator permissions.
 *
 * @param request UpdateDatasetVersionRequest
 * @return UpdateDatasetVersionResponse
 */
UpdateDatasetVersionResponse Client::updateDatasetVersion(const UpdateDatasetVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDatasetVersionWithOptions(request, runtime);
}

/**
 * @summary Updates a file.
 *
 * @param request UpdateFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFileResponse
 */
UpdateFileResponse Client::updateFileWithOptions(const UpdateFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAdvancedSettings()) {
    body["AdvancedSettings"] = request.getAdvancedSettings();
  }

  if (!!request.hasApplyScheduleImmediately()) {
    body["ApplyScheduleImmediately"] = request.getApplyScheduleImmediately();
  }

  if (!!request.hasAutoParsing()) {
    body["AutoParsing"] = request.getAutoParsing();
  }

  if (!!request.hasAutoRerunIntervalMillis()) {
    body["AutoRerunIntervalMillis"] = request.getAutoRerunIntervalMillis();
  }

  if (!!request.hasAutoRerunTimes()) {
    body["AutoRerunTimes"] = request.getAutoRerunTimes();
  }

  if (!!request.hasConnectionName()) {
    body["ConnectionName"] = request.getConnectionName();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  if (!!request.hasCronExpress()) {
    body["CronExpress"] = request.getCronExpress();
  }

  if (!!request.hasCycleType()) {
    body["CycleType"] = request.getCycleType();
  }

  if (!!request.hasDependentNodeIdList()) {
    body["DependentNodeIdList"] = request.getDependentNodeIdList();
  }

  if (!!request.hasDependentType()) {
    body["DependentType"] = request.getDependentType();
  }

  if (!!request.hasEndEffectDate()) {
    body["EndEffectDate"] = request.getEndEffectDate();
  }

  if (!!request.hasFileDescription()) {
    body["FileDescription"] = request.getFileDescription();
  }

  if (!!request.hasFileFolderPath()) {
    body["FileFolderPath"] = request.getFileFolderPath();
  }

  if (!!request.hasFileId()) {
    body["FileId"] = request.getFileId();
  }

  if (!!request.hasFileName()) {
    body["FileName"] = request.getFileName();
  }

  if (!!request.hasIgnoreParentSkipRunningProperty()) {
    body["IgnoreParentSkipRunningProperty"] = request.getIgnoreParentSkipRunningProperty();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.getImageId();
  }

  if (!!request.hasInputList()) {
    body["InputList"] = request.getInputList();
  }

  if (!!request.hasInputParameters()) {
    body["InputParameters"] = request.getInputParameters();
  }

  if (!!request.hasOutputList()) {
    body["OutputList"] = request.getOutputList();
  }

  if (!!request.hasOutputParameters()) {
    body["OutputParameters"] = request.getOutputParameters();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.getOwner();
  }

  if (!!request.hasParaValue()) {
    body["ParaValue"] = request.getParaValue();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  if (!!request.hasRerunMode()) {
    body["RerunMode"] = request.getRerunMode();
  }

  if (!!request.hasResourceGroupIdentifier()) {
    body["ResourceGroupIdentifier"] = request.getResourceGroupIdentifier();
  }

  if (!!request.hasSchedulerType()) {
    body["SchedulerType"] = request.getSchedulerType();
  }

  if (!!request.hasStartEffectDate()) {
    body["StartEffectDate"] = request.getStartEffectDate();
  }

  if (!!request.hasStartImmediately()) {
    body["StartImmediately"] = request.getStartImmediately();
  }

  if (!!request.hasStop()) {
    body["Stop"] = request.getStop();
  }

  if (!!request.hasTimeout()) {
    body["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateFile"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFileResponse>();
}

/**
 * @summary Updates a file.
 *
 * @param request UpdateFileRequest
 * @return UpdateFileResponse
 */
UpdateFileResponse Client::updateFile(const UpdateFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFileWithOptions(request, runtime);
}

/**
 * @summary Invoke UpdateFolder to update the folder information.
 *
 * @param request UpdateFolderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFolderResponse
 */
UpdateFolderResponse Client::updateFolderWithOptions(const UpdateFolderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFolderId()) {
    body["FolderId"] = request.getFolderId();
  }

  if (!!request.hasFolderName()) {
    body["FolderName"] = request.getFolderName();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateFolder"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFolderResponse>();
}

/**
 * @summary Invoke UpdateFolder to update the folder information.
 *
 * @param request UpdateFolderRequest
 * @return UpdateFolderResponse
 */
UpdateFolderResponse Client::updateFolder(const UpdateFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFolderWithOptions(request, runtime);
}

/**
 * @summary Updates the basic information about a user-defined function (UDF) in DataStudio. This API operation performs an incremental update. The update information is described by using FlowSpec.
 *
 * @param request UpdateFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFunctionResponse
 */
UpdateFunctionResponse Client::updateFunctionWithOptions(const UpdateFunctionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.getSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateFunction"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFunctionResponse>();
}

/**
 * @summary Updates the basic information about a user-defined function (UDF) in DataStudio. This API operation performs an incremental update. The update information is described by using FlowSpec.
 *
 * @param request UpdateFunctionRequest
 * @return UpdateFunctionResponse
 */
UpdateFunctionResponse Client::updateFunction(const UpdateFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFunctionWithOptions(request, runtime);
}

/**
 * @summary Recalls the check result of the message of an extension point event.
 *
 * @param request UpdateIDEEventResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIDEEventResultResponse
 */
UpdateIDEEventResultResponse Client::updateIDEEventResultWithOptions(const UpdateIDEEventResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCheckResult()) {
    body["CheckResult"] = request.getCheckResult();
  }

  if (!!request.hasCheckResultTip()) {
    body["CheckResultTip"] = request.getCheckResultTip();
  }

  if (!!request.hasExtensionCode()) {
    body["ExtensionCode"] = request.getExtensionCode();
  }

  if (!!request.hasMessageId()) {
    body["MessageId"] = request.getMessageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateIDEEventResult"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIDEEventResultResponse>();
}

/**
 * @summary Recalls the check result of the message of an extension point event.
 *
 * @param request UpdateIDEEventResultRequest
 * @return UpdateIDEEventResultResponse
 */
UpdateIDEEventResultResponse Client::updateIDEEventResult(const UpdateIDEEventResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIDEEventResultWithOptions(request, runtime);
}

/**
 * @summary Updates an MCP Server.
 *
 * @description ## Description
 * This API updates the configuration of a specified MCP Server. Omitted fields retain their original values.
 * **Note**: When you modify the`Visibility` parameter, you must provide either`ProjectIds` or`UserIds` in`VisibilityScope` to apply the correct access control scope.
 *
 * @param tmpReq UpdateMcpServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMcpServerResponse
 */
UpdateMcpServerResponse Client::updateMcpServerWithOptions(const UpdateMcpServerRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMcpServerShrinkRequest request = UpdateMcpServerShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomHeaders()) {
    request.setCustomHeadersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomHeaders(), "CustomHeaders", "json"));
  }

  if (!!tmpReq.hasVisibilityScope()) {
    request.setVisibilityScopeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVisibilityScope(), "VisibilityScope", "json"));
  }

  json body = {};
  if (!!request.hasCustomHeadersShrink()) {
    body["CustomHeaders"] = request.getCustomHeadersShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasTransport()) {
    body["Transport"] = request.getTransport();
  }

  if (!!request.hasUrl()) {
    body["Url"] = request.getUrl();
  }

  if (!!request.hasVisibility()) {
    body["Visibility"] = request.getVisibility();
  }

  if (!!request.hasVisibilityScopeShrink()) {
    body["VisibilityScope"] = request.getVisibilityScopeShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateMcpServer"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMcpServerResponse>();
}

/**
 * @summary Updates an MCP Server.
 *
 * @description ## Description
 * This API updates the configuration of a specified MCP Server. Omitted fields retain their original values.
 * **Note**: When you modify the`Visibility` parameter, you must provide either`ProjectIds` or`UserIds` in`VisibilityScope` to apply the correct access control scope.
 *
 * @param request UpdateMcpServerRequest
 * @return UpdateMcpServerResponse
 */
UpdateMcpServerResponse Client::updateMcpServer(const UpdateMcpServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMcpServerWithOptions(request, runtime);
}

/**
 * @summary Update Data Map collection objects, including Data Map categories and data albums. You can update the collection name, description, and administrator information.
 * When updating a data album, the caller must have the AliyunDataWorksFullAccess permission or be the creator or an administrator of the album.
 *
 * @description 1. You must purchase DataWorks Professional Edition or a higher edition to use this feature.
 *
 * @param tmpReq UpdateMetaCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMetaCollectionResponse
 */
UpdateMetaCollectionResponse Client::updateMetaCollectionWithOptions(const UpdateMetaCollectionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMetaCollectionShrinkRequest request = UpdateMetaCollectionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAdministrators()) {
    request.setAdministratorsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAdministrators(), "Administrators", "simple"));
  }

  json query = {};
  if (!!request.hasAdministratorsShrink()) {
    query["Administrators"] = request.getAdministratorsShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMetaCollection"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMetaCollectionResponse>();
}

/**
 * @summary Update Data Map collection objects, including Data Map categories and data albums. You can update the collection name, description, and administrator information.
 * When updating a data album, the caller must have the AliyunDataWorksFullAccess permission or be the creator or an administrator of the album.
 *
 * @description 1. You must purchase DataWorks Professional Edition or a higher edition to use this feature.
 *
 * @param request UpdateMetaCollectionRequest
 * @return UpdateMetaCollectionResponse
 */
UpdateMetaCollectionResponse Client::updateMetaCollection(const UpdateMetaCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMetaCollectionWithOptions(request, runtime);
}

/**
 * @summary Updates a metadata entity. You can update custom entities or objects of the extended table type, such as databases, tables, and columns.
 *
 * @description You must purchase DataWorks Professional Edition or a higher edition to use this operation.
 *
 * @param tmpReq UpdateMetaEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMetaEntityResponse
 */
UpdateMetaEntityResponse Client::updateMetaEntityWithOptions(const UpdateMetaEntityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMetaEntityShrinkRequest request = UpdateMetaEntityShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAttributes()) {
    request.setAttributesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAttributes(), "Attributes", "json"));
  }

  if (!!tmpReq.hasCustomAttributes()) {
    request.setCustomAttributesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomAttributes(), "CustomAttributes", "json"));
  }

  json body = {};
  if (!!request.hasAttributesShrink()) {
    body["Attributes"] = request.getAttributesShrink();
  }

  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasCustomAttributesShrink()) {
    body["CustomAttributes"] = request.getCustomAttributesShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateMetaEntity"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMetaEntityResponse>();
}

/**
 * @summary Updates a metadata entity. You can update custom entities or objects of the extended table type, such as databases, tables, and columns.
 *
 * @description You must purchase DataWorks Professional Edition or a higher edition to use this operation.
 *
 * @param request UpdateMetaEntityRequest
 * @return UpdateMetaEntityResponse
 */
UpdateMetaEntityResponse Client::updateMetaEntity(const UpdateMetaEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMetaEntityWithOptions(request, runtime);
}

/**
 * @summary Updates a meta entity definition. This operation supports both custom and extended table entity types.
 *
 * @description This operation requires DataWorks Professional Edition or a later version.
 *
 * @param tmpReq UpdateMetaEntityDefRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMetaEntityDefResponse
 */
UpdateMetaEntityDefResponse Client::updateMetaEntityDefWithOptions(const UpdateMetaEntityDefRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMetaEntityDefShrinkRequest request = UpdateMetaEntityDefShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNewAttributeDefs()) {
    request.setNewAttributeDefsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNewAttributeDefs(), "NewAttributeDefs", "json"));
  }

  if (!!tmpReq.hasUpdateAttributeDefs()) {
    request.setUpdateAttributeDefsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUpdateAttributeDefs(), "UpdateAttributeDefs", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasEntityType()) {
    body["EntityType"] = request.getEntityType();
  }

  if (!!request.hasNewAttributeDefsShrink()) {
    body["NewAttributeDefs"] = request.getNewAttributeDefsShrink();
  }

  if (!!request.hasUpdateAttributeDefsShrink()) {
    body["UpdateAttributeDefs"] = request.getUpdateAttributeDefsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateMetaEntityDef"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMetaEntityDefResponse>();
}

/**
 * @summary Updates a meta entity definition. This operation supports both custom and extended table entity types.
 *
 * @description This operation requires DataWorks Professional Edition or a later version.
 *
 * @param request UpdateMetaEntityDefRequest
 * @return UpdateMetaEntityDefResponse
 */
UpdateMetaEntityDefResponse Client::updateMetaEntityDef(const UpdateMetaEntityDefRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMetaEntityDefWithOptions(request, runtime);
}

/**
 * @summary Updates the basic information about a node in DataStudio. This API operation performs an incremental update. The update information is described by using FlowSpec.
 *
 * @param request UpdateNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNodeResponse
 */
UpdateNodeResponse Client::updateNodeWithOptions(const UpdateNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.getSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateNode"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNodeResponse>();
}

/**
 * @summary Updates the basic information about a node in DataStudio. This API operation performs an incremental update. The update information is described by using FlowSpec.
 *
 * @param request UpdateNodeRequest
 * @return UpdateNodeResponse
 */
UpdateNodeResponse Client::updateNode(const UpdateNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNodeWithOptions(request, runtime);
}

/**
 * @summary Updates a parameter. This operation performs an incremental update and modifies only the specified fields.
 *
 * @description This operation is available only in DataWorks Professional Edition and later.
 *
 * @param tmpReq UpdateParameterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateParameterResponse
 */
UpdateParameterResponse Client::updateParameterWithOptions(const UpdateParameterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateParameterShrinkRequest request = UpdateParameterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProperties()) {
    request.setPropertiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProperties(), "Properties", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.getOwner();
  }

  if (!!request.hasPropertiesShrink()) {
    body["Properties"] = request.getPropertiesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateParameter"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateParameterResponse>();
}

/**
 * @summary Updates a parameter. This operation performs an incremental update and modifies only the specified fields.
 *
 * @description This operation is available only in DataWorks Professional Edition and later.
 *
 * @param request UpdateParameterRequest
 * @return UpdateParameterResponse
 */
UpdateParameterResponse Client::updateParameter(const UpdateParameterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateParameterWithOptions(request, runtime);
}

/**
 * @summary Updates an existing approval process definition.
 *
 * @description ## Request
 * - Use this API to modify an existing approval process definition, including its name, description, rule conditions, notification service, and approval nodes.
 * - The required `Id` parameter identifies the approval process definition to update.
 * - To overwrite the existing configuration, set the `Overwrite` parameter to `true`.
 * - The optional `ClientToken` parameter ensures request idempotency.
 *
 * @param tmpReq UpdateProcessDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProcessDefinitionResponse
 */
UpdateProcessDefinitionResponse Client::updateProcessDefinitionWithOptions(const UpdateProcessDefinitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateProcessDefinitionShrinkRequest request = UpdateProcessDefinitionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApprovalNodes()) {
    request.setApprovalNodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApprovalNodes(), "ApprovalNodes", "json"));
  }

  if (!!tmpReq.hasNotificationServices()) {
    request.setNotificationServicesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNotificationServices(), "NotificationServices", "json"));
  }

  if (!!tmpReq.hasRuleConditions()) {
    request.setRuleConditionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRuleConditions(), "RuleConditions", "json"));
  }

  json body = {};
  if (!!request.hasApprovalNodesShrink()) {
    body["ApprovalNodes"] = request.getApprovalNodesShrink();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
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

  if (!!request.hasNotificationServicesShrink()) {
    body["NotificationServices"] = request.getNotificationServicesShrink();
  }

  if (!!request.hasRuleConditionsShrink()) {
    body["RuleConditions"] = request.getRuleConditionsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateProcessDefinition"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProcessDefinitionResponse>();
}

/**
 * @summary Updates an existing approval process definition.
 *
 * @description ## Request
 * - Use this API to modify an existing approval process definition, including its name, description, rule conditions, notification service, and approval nodes.
 * - The required `Id` parameter identifies the approval process definition to update.
 * - To overwrite the existing configuration, set the `Overwrite` parameter to `true`.
 * - The optional `ClientToken` parameter ensures request idempotency.
 *
 * @param request UpdateProcessDefinitionRequest
 * @return UpdateProcessDefinitionResponse
 */
UpdateProcessDefinitionResponse Client::updateProcessDefinition(const UpdateProcessDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProcessDefinitionWithOptions(request, runtime);
}

/**
 * @summary This operation updates a DataWorks workspace.
 *
 * @description This feature requires DataWorks Basic Edition or a later version.
 *
 * @param request UpdateProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProjectWithOptions(const UpdateProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDevEnvironmentEnabled()) {
    body["DevEnvironmentEnabled"] = request.getDevEnvironmentEnabled();
  }

  if (!!request.hasDevRoleDisabled()) {
    body["DevRoleDisabled"] = request.getDevRoleDisabled();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasPaiTaskEnabled()) {
    body["PaiTaskEnabled"] = request.getPaiTaskEnabled();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateProject"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProjectResponse>();
}

/**
 * @summary This operation updates a DataWorks workspace.
 *
 * @description This feature requires DataWorks Basic Edition or a later version.
 *
 * @param request UpdateProjectRequest
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProject(const UpdateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProjectWithOptions(request, runtime);
}

/**
 * @summary Updates the permissions of a custom role in a workspace.
 *
 * @param tmpReq UpdateProjectRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProjectRoleResponse
 */
UpdateProjectRoleResponse Client::updateProjectRoleWithOptions(const UpdateProjectRoleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateProjectRoleShrinkRequest request = UpdateProjectRoleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasModulePermissions()) {
    request.setModulePermissionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getModulePermissions(), "ModulePermissions", "json"));
  }

  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.getCode();
  }

  if (!!request.hasModulePermissionsShrink()) {
    query["ModulePermissions"] = request.getModulePermissionsShrink();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateProjectRole"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProjectRoleResponse>();
}

/**
 * @summary Updates the permissions of a custom role in a workspace.
 *
 * @param request UpdateProjectRoleRequest
 * @return UpdateProjectRoleResponse
 */
UpdateProjectRoleResponse Client::updateProjectRole(const UpdateProjectRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProjectRoleWithOptions(request, runtime);
}

/**
 * @summary Updates the basic information about a file resource in DataStudio. This API operation performs an incremental update. The update information is described by using FlowSpec.
 *
 * @param request UpdateResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceResponse
 */
UpdateResourceResponse Client::updateResourceWithOptions(const UpdateResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasResourceFile()) {
    body["ResourceFile"] = request.getResourceFile();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.getSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateResource"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceResponse>();
}

/**
 * @summary Updates the basic information about a file resource in DataStudio. This API operation performs an incremental update. The update information is described by using FlowSpec.
 *
 * @param request UpdateResourceRequest
 * @return UpdateResourceResponse
 */
UpdateResourceResponse Client::updateResource(const UpdateResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateResourceWithOptions(request, runtime);
}

UpdateResourceResponse Client::updateResourceAdvance(const UpdateResourceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"Product" , "dataworks-public"},
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
  UpdateResourceRequest updateResourceReq = UpdateResourceRequest();
  Utils::Utils::convert(request, updateResourceReq);
  if (!!request.hasResourceFileObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.getResourceFileObject()},
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
    updateResourceReq.setResourceFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  UpdateResourceResponse updateResourceResp = updateResourceWithOptions(updateResourceReq, runtime);
  return updateResourceResp;
}

/**
 * @summary Updates basic information about a resource group.
 *
 * @description You can use this API operation only in DataWorks Basic Edition or an advanced edition.
 *
 * @param request UpdateResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceGroupResponse
 */
UpdateResourceGroupResponse Client::updateResourceGroupWithOptions(const UpdateResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAliyunResourceGroupId()) {
    body["AliyunResourceGroupId"] = request.getAliyunResourceGroupId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasRemark()) {
    body["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateResourceGroup"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceGroupResponse>();
}

/**
 * @summary Updates basic information about a resource group.
 *
 * @description You can use this API operation only in DataWorks Basic Edition or an advanced edition.
 *
 * @param request UpdateResourceGroupRequest
 * @return UpdateResourceGroupResponse
 */
UpdateResourceGroupResponse Client::updateResourceGroup(const UpdateResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a route.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request UpdateRouteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRouteResponse
 */
UpdateRouteResponse Client::updateRouteWithOptions(const UpdateRouteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDestinationCidr()) {
    body["DestinationCidr"] = request.getDestinationCidr();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateRoute"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRouteResponse>();
}

/**
 * @summary Updates the information about a route.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request UpdateRouteRequest
 * @return UpdateRouteResponse
 */
UpdateRouteResponse Client::updateRoute(const UpdateRouteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRouteWithOptions(request, runtime);
}

/**
 * @summary To modify the configuration of an existing security policy, you must be both a DataWorks tenant administrator and a security administrator.
 *
 * @description ## Usage
 * - Use this API to update a specified security policy, including its name, description, associated workspace IDs, and policy content.
 * - You cannot modify some properties of default system policies, such as the schema name and control module.
 * - When `ControlDwScope` is set to `Workspace`, use the `Workspaces` parameter to associate the policy with specific workspaces.
 * - When updating the policy content (`Content`), ensure that the provided controllers (`Controllers`) conform to the requirements of the selected schema.
 * - The optional `ClientToken` parameter ensures request idempotence.
 *
 * @param tmpReq UpdateSecurityStrategyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSecurityStrategyResponse
 */
UpdateSecurityStrategyResponse Client::updateSecurityStrategyWithOptions(const UpdateSecurityStrategyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSecurityStrategyShrinkRequest request = UpdateSecurityStrategyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContent()) {
    request.setContentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContent(), "Content", "json"));
  }

  if (!!tmpReq.hasWorkspaces()) {
    request.setWorkspacesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWorkspaces(), "Workspaces", "json"));
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasContentShrink()) {
    body["Content"] = request.getContentShrink();
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

  if (!!request.hasWorkspacesShrink()) {
    body["Workspaces"] = request.getWorkspacesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateSecurityStrategy"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSecurityStrategyResponse>();
}

/**
 * @summary To modify the configuration of an existing security policy, you must be both a DataWorks tenant administrator and a security administrator.
 *
 * @description ## Usage
 * - Use this API to update a specified security policy, including its name, description, associated workspace IDs, and policy content.
 * - You cannot modify some properties of default system policies, such as the schema name and control module.
 * - When `ControlDwScope` is set to `Workspace`, use the `Workspaces` parameter to associate the policy with specific workspaces.
 * - When updating the policy content (`Content`), ensure that the provided controllers (`Controllers`) conform to the requirements of the selected schema.
 * - The optional `ClientToken` parameter ensures request idempotence.
 *
 * @param request UpdateSecurityStrategyRequest
 * @return UpdateSecurityStrategyResponse
 */
UpdateSecurityStrategyResponse Client::updateSecurityStrategy(const UpdateSecurityStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSecurityStrategyWithOptions(request, runtime);
}

/**
 * @summary Updates the business metadata for a data table in the data map. You can update only the table\\"s Readme and custom attributes.
 *
 * @description 1. You must purchase DataWorks Basic Edition or a later version to use this operation.
 *
 * @param tmpReq UpdateTableBusinessMetadataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTableBusinessMetadataResponse
 */
UpdateTableBusinessMetadataResponse Client::updateTableBusinessMetadataWithOptions(const UpdateTableBusinessMetadataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTableBusinessMetadataShrinkRequest request = UpdateTableBusinessMetadataShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCustomAttributes()) {
    request.setCustomAttributesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomAttributes(), "CustomAttributes", "json"));
  }

  json body = {};
  if (!!request.hasCustomAttributesShrink()) {
    body["CustomAttributes"] = request.getCustomAttributesShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasReadme()) {
    body["Readme"] = request.getReadme();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateTableBusinessMetadata"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTableBusinessMetadataResponse>();
}

/**
 * @summary Updates the business metadata for a data table in the data map. You can update only the table\\"s Readme and custom attributes.
 *
 * @description 1. You must purchase DataWorks Basic Edition or a later version to use this operation.
 *
 * @param request UpdateTableBusinessMetadataRequest
 * @return UpdateTableBusinessMetadataResponse
 */
UpdateTableBusinessMetadataResponse Client::updateTableBusinessMetadata(const UpdateTableBusinessMetadataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTableBusinessMetadataWithOptions(request, runtime);
}

/**
 * @summary Updates a specified node. The modifications are synchronized to DataStudio, where a new saved version is created.
 *
 * @param tmpReq UpdateTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskResponse
 */
UpdateTaskResponse Client::updateTaskWithOptions(const UpdateTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTaskShrinkRequest request = UpdateTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDataSource()) {
    request.setDataSourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDataSource(), "DataSource", "json"));
  }

  if (!!tmpReq.hasDependencies()) {
    request.setDependenciesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDependencies(), "Dependencies", "json"));
  }

  if (!!tmpReq.hasInputs()) {
    request.setInputsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInputs(), "Inputs", "json"));
  }

  if (!!tmpReq.hasOutputs()) {
    request.setOutputsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutputs(), "Outputs", "json"));
  }

  if (!!tmpReq.hasRuntimeResource()) {
    request.setRuntimeResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRuntimeResource(), "RuntimeResource", "json"));
  }

  if (!!tmpReq.hasScript()) {
    request.setScriptShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScript(), "Script", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  if (!!tmpReq.hasTrigger()) {
    request.setTriggerShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTrigger(), "Trigger", "json"));
  }

  json body = {};
  if (!!request.hasClientUniqueCode()) {
    body["ClientUniqueCode"] = request.getClientUniqueCode();
  }

  if (!!request.hasDataSourceShrink()) {
    body["DataSource"] = request.getDataSourceShrink();
  }

  if (!!request.hasDependenciesShrink()) {
    body["Dependencies"] = request.getDependenciesShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnvType()) {
    body["EnvType"] = request.getEnvType();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasInputsShrink()) {
    body["Inputs"] = request.getInputsShrink();
  }

  if (!!request.hasInstanceMode()) {
    body["InstanceMode"] = request.getInstanceMode();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOutputsShrink()) {
    body["Outputs"] = request.getOutputsShrink();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.getOwner();
  }

  if (!!request.hasRerunInterval()) {
    body["RerunInterval"] = request.getRerunInterval();
  }

  if (!!request.hasRerunMode()) {
    body["RerunMode"] = request.getRerunMode();
  }

  if (!!request.hasRerunTimes()) {
    body["RerunTimes"] = request.getRerunTimes();
  }

  if (!!request.hasRuntimeResourceShrink()) {
    body["RuntimeResource"] = request.getRuntimeResourceShrink();
  }

  if (!!request.hasScriptShrink()) {
    body["Script"] = request.getScriptShrink();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasTimeout()) {
    body["Timeout"] = request.getTimeout();
  }

  if (!!request.hasTriggerShrink()) {
    body["Trigger"] = request.getTriggerShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateTask"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskResponse>();
}

/**
 * @summary Updates a specified node. The modifications are synchronized to DataStudio, where a new saved version is created.
 *
 * @param request UpdateTaskRequest
 * @return UpdateTaskResponse
 */
UpdateTaskResponse Client::updateTask(const UpdateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskWithOptions(request, runtime);
}

/**
 * @summary Modify the properties of multiple task instances in batch, including priority, resource group, data source, and more.
 *
 * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param tmpReq UpdateTaskInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTaskInstancesResponse
 */
UpdateTaskInstancesResponse Client::updateTaskInstancesWithOptions(const UpdateTaskInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateTaskInstancesShrinkRequest request = UpdateTaskInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTaskInstances()) {
    request.setTaskInstancesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskInstances(), "TaskInstances", "json"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.getComment();
  }

  if (!!request.hasTaskInstancesShrink()) {
    body["TaskInstances"] = request.getTaskInstancesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateTaskInstances"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTaskInstancesResponse>();
}

/**
 * @summary Modify the properties of multiple task instances in batch, including priority, resource group, data source, and more.
 *
 * @description You must purchase DataWorks Basic Edition or a higher edition to use this feature.
 *
 * @param request UpdateTaskInstancesRequest
 * @return UpdateTaskInstancesResponse
 */
UpdateTaskInstancesResponse Client::updateTaskInstances(const UpdateTaskInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskInstancesWithOptions(request, runtime);
}

/**
 * @summary Updates the file information about a function.
 *
 * @param request UpdateUdfFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUdfFileResponse
 */
UpdateUdfFileResponse Client::updateUdfFileWithOptions(const UpdateUdfFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClassName()) {
    body["ClassName"] = request.getClassName();
  }

  if (!!request.hasCmdDescription()) {
    body["CmdDescription"] = request.getCmdDescription();
  }

  if (!!request.hasExample()) {
    body["Example"] = request.getExample();
  }

  if (!!request.hasFileFolderPath()) {
    body["FileFolderPath"] = request.getFileFolderPath();
  }

  if (!!request.hasFileId()) {
    body["FileId"] = request.getFileId();
  }

  if (!!request.hasFunctionType()) {
    body["FunctionType"] = request.getFunctionType();
  }

  if (!!request.hasParameterDescription()) {
    body["ParameterDescription"] = request.getParameterDescription();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.getProjectIdentifier();
  }

  if (!!request.hasResources()) {
    body["Resources"] = request.getResources();
  }

  if (!!request.hasReturnValue()) {
    body["ReturnValue"] = request.getReturnValue();
  }

  if (!!request.hasUdfDescription()) {
    body["UdfDescription"] = request.getUdfDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateUdfFile"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUdfFileResponse>();
}

/**
 * @summary Updates the file information about a function.
 *
 * @param request UpdateUdfFileRequest
 * @return UpdateUdfFileResponse
 */
UpdateUdfFileResponse Client::updateUdfFile(const UpdateUdfFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUdfFileWithOptions(request, runtime);
}

/**
 * @summary Updates a specified workflow by using the full update method. Fields that can be synchronously updated to DataStudio include: owner, data source, schedule resource group, description, and trigger run mode (Normal, Skip, or Pause).
 *
 * @description DataWorks Basic Edition or a more advanced edition is required.
 *
 * @param tmpReq UpdateWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkflowResponse
 */
UpdateWorkflowResponse Client::updateWorkflowWithOptions(const UpdateWorkflowRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateWorkflowShrinkRequest request = UpdateWorkflowShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDependencies()) {
    request.setDependenciesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDependencies(), "Dependencies", "json"));
  }

  if (!!tmpReq.hasOutputs()) {
    request.setOutputsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOutputs(), "Outputs", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  if (!!tmpReq.hasTasks()) {
    request.setTasksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTasks(), "Tasks", "json"));
  }

  if (!!tmpReq.hasTrigger()) {
    request.setTriggerShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTrigger(), "Trigger", "json"));
  }

  json body = {};
  if (!!request.hasClientUniqueCode()) {
    body["ClientUniqueCode"] = request.getClientUniqueCode();
  }

  if (!!request.hasDependenciesShrink()) {
    body["Dependencies"] = request.getDependenciesShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasEnvType()) {
    body["EnvType"] = request.getEnvType();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasInstanceMode()) {
    body["InstanceMode"] = request.getInstanceMode();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOutputsShrink()) {
    body["Outputs"] = request.getOutputsShrink();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.getOwner();
  }

  if (!!request.hasParameters()) {
    body["Parameters"] = request.getParameters();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasTasksShrink()) {
    body["Tasks"] = request.getTasksShrink();
  }

  if (!!request.hasTriggerShrink()) {
    body["Trigger"] = request.getTriggerShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateWorkflow"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkflowResponse>();
}

/**
 * @summary Updates a specified workflow by using the full update method. Fields that can be synchronously updated to DataStudio include: owner, data source, schedule resource group, description, and trigger run mode (Normal, Skip, or Pause).
 *
 * @description DataWorks Basic Edition or a more advanced edition is required.
 *
 * @param request UpdateWorkflowRequest
 * @return UpdateWorkflowResponse
 */
UpdateWorkflowResponse Client::updateWorkflow(const UpdateWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWorkflowWithOptions(request, runtime);
}

/**
 * @summary Updates the basic information about a workflow in DataStudio. This API operation performs an incremental update. The update information is described by using FlowSpec.
 *
 * @description >Notice: 
 * This API does not support batch operations. If you define more than one workflow definition in the FlowSpec, all workflow definitions except the first one are ignored. In addition, nodes defined within the workflow definition are also ignored. Call the UpdateNode API to update internal nodes one by one.
 *
 * @param request UpdateWorkflowDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkflowDefinitionResponse
 */
UpdateWorkflowDefinitionResponse Client::updateWorkflowDefinitionWithOptions(const UpdateWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.getSpec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateWorkflowDefinition"},
    {"version" , "2024-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkflowDefinitionResponse>();
}

/**
 * @summary Updates the basic information about a workflow in DataStudio. This API operation performs an incremental update. The update information is described by using FlowSpec.
 *
 * @description >Notice: 
 * This API does not support batch operations. If you define more than one workflow definition in the FlowSpec, all workflow definitions except the first one are ignored. In addition, nodes defined within the workflow definition are also ignored. Call the UpdateNode API to update internal nodes one by one.
 *
 * @param request UpdateWorkflowDefinitionRequest
 * @return UpdateWorkflowDefinitionResponse
 */
UpdateWorkflowDefinitionResponse Client::updateWorkflowDefinition(const UpdateWorkflowDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWorkflowDefinitionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518