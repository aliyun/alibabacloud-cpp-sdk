#include <darabonba/Core.hpp>
#include <alibabacloud/DataworksPublic20200518.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/http/Form.hpp>
#include <darabonba/Convert.hpp>
#include <darabonba/Stream.hpp>
#include <darabonba/XML.hpp>
#include <darabonba/Runtime.hpp>
#include <alibabacloud/credential/Credential.hpp>
#include <darabonba/http/FileField.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace Darabonba::Http;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Credential::Models;
using namespace AlibabaCloud::OpenApi::Exceptions;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::DataworksPublic20200518::Models;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{

AlibabaCloud::DataworksPublic20200518::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "dataworks.ap-northeast-1.aliyuncs.com"},
    {"ap-south-1" , "dataworks.ap-south-1.aliyuncs.com"},
    {"ap-southeast-1" , "dataworks.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-2" , "dataworks.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-3" , "dataworks.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-5" , "dataworks.ap-southeast-5.aliyuncs.com"},
    {"cn-beijing" , "dataworks.cn-beijing.aliyuncs.com"},
    {"cn-chengdu" , "dataworks.cn-chengdu.aliyuncs.com"},
    {"cn-hangzhou" , "dataworks.cn-hangzhou.aliyuncs.com"},
    {"cn-hongkong" , "dataworks.cn-hongkong.aliyuncs.com"},
    {"cn-huhehaote" , "dataworks.aliyuncs.com"},
    {"cn-qingdao" , "dataworks.aliyuncs.com"},
    {"cn-shanghai" , "dataworks.cn-shanghai.aliyuncs.com"},
    {"cn-shenzhen" , "dataworks.cn-shenzhen.aliyuncs.com"},
    {"cn-zhangjiakou" , "dataworks.aliyuncs.com"},
    {"eu-central-1" , "dataworks.eu-central-1.aliyuncs.com"},
    {"eu-west-1" , "dataworks.eu-west-1.aliyuncs.com"},
    {"me-east-1" , "dataworks.me-east-1.aliyuncs.com"},
    {"us-east-1" , "dataworks.us-east-1.aliyuncs.com"},
    {"us-west-1" , "dataworks.us-west-1.aliyuncs.com"},
    {"cn-hangzhou-finance" , "dataworks.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "dataworks.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "dataworks.aliyuncs.com"},
    {"cn-north-2-gov-1" , "dataworks.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("dataworks-public", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


Darabonba::Json Client::_postOSSObject(const string &bucketName, const Darabonba::Json &form) {
Darabonba::RuntimeOptions runtime_(json({}));

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
  request_.addHeader("content-type", DARA_STRING_TEMPLATE("multipart/form-data; boundary=" , boundary));
  request_.setBody(Darabonba::Http::Form::toFileForm(form, boundary));
  auto futureResp_ = Darabonba::Core::doAction(request_, runtime_);
  shared_ptr<Darabonba::Http::MCurlResponse> response_ = futureResp_.get();

  json respMap = nullptr;
  string bodyStr = Darabonba::Stream::readAsString(response_->body());
  if ((response_->statusCode() >= 400) && (response_->statusCode() < 600)) {
    respMap = Darabonba::XML::parseXml(bodyStr, nullptr);
    json err = json(respMap["Error"]);
    throw ClientException(json({
      {"code" , Darabonba::Convert::stringVal(err["Code"])},
      {"message" , Darabonba::Convert::stringVal(err["Message"])},
      {"data" , json({
        {"httpCode" , response_->statusCode()},
        {"requestId" , Darabonba::Convert::stringVal(err["RequestId"])},
        {"hostId" , Darabonba::Convert::stringVal(err["HostId"])}
      })}
    }));
  }

  respMap = Darabonba::XML::parseXml(bodyStr, nullptr);
  return Darabonba::Core::merge(respMap
  );
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
 * @summary Unpublishes a DataService Studio API.
 *
 * @param request AbolishDataServiceApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AbolishDataServiceApiResponse
 */
AbolishDataServiceApiResponse Client::abolishDataServiceApiWithOptions(const AbolishDataServiceApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiId()) {
    body["ApiId"] = request.apiId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AbolishDataServiceApi"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AbolishDataServiceApiResponse>();
}

/**
 * @summary Unpublishes a DataService Studio API.
 *
 * @param request AbolishDataServiceApiRequest
 * @return AbolishDataServiceApiResponse
 */
AbolishDataServiceApiResponse Client::abolishDataServiceApi(const AbolishDataServiceApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return abolishDataServiceApiWithOptions(request, runtime);
}

/**
 * @summary Adds an entity to a collection.
 *
 * @param request AddMetaCollectionEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMetaCollectionEntityResponse
 */
AddMetaCollectionEntityResponse Client::addMetaCollectionEntityWithOptions(const AddMetaCollectionEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollectionQualifiedName()) {
    query["CollectionQualifiedName"] = request.collectionQualifiedName();
  }

  if (!!request.hasEntityQualifiedName()) {
    query["EntityQualifiedName"] = request.entityQualifiedName();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddMetaCollectionEntity"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMetaCollectionEntityResponse>();
}

/**
 * @summary Adds an entity to a collection.
 *
 * @param request AddMetaCollectionEntityRequest
 * @return AddMetaCollectionEntityResponse
 */
AddMetaCollectionEntityResponse Client::addMetaCollectionEntity(const AddMetaCollectionEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addMetaCollectionEntityWithOptions(request, runtime);
}

/**
 * @summary Assigns a role to a member of a DataWorks workspace. Before you call this operation, you must add your account to a DataWorks workspace as a member.
 *
 * @description *   For information about how to add an account to a DataWorks workspace as a member, see [Add workspace members and assign roles to them](https://help.aliyun.com/document_detail/136941.html).
 * *   If you assign a built-in workspace-level role to a member of a DataWorks workspace, the member is automatically granted the permissions of the mapped role of the MaxCompute compute engine in the development environment. For more information, see [Appendix: Mappings between the built-in workspace-level roles of DataWorks and the roles of MaxCompute](https://help.aliyun.com/document_detail/449397.html).
 *
 * @param request AddProjectMemberToRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddProjectMemberToRoleResponse
 */
AddProjectMemberToRoleResponse Client::addProjectMemberToRoleWithOptions(const AddProjectMemberToRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasRoleCode()) {
    query["RoleCode"] = request.roleCode();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddProjectMemberToRole"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddProjectMemberToRoleResponse>();
}

/**
 * @summary Assigns a role to a member of a DataWorks workspace. Before you call this operation, you must add your account to a DataWorks workspace as a member.
 *
 * @description *   For information about how to add an account to a DataWorks workspace as a member, see [Add workspace members and assign roles to them](https://help.aliyun.com/document_detail/136941.html).
 * *   If you assign a built-in workspace-level role to a member of a DataWorks workspace, the member is automatically granted the permissions of the mapped role of the MaxCompute compute engine in the development environment. For more information, see [Appendix: Mappings between the built-in workspace-level roles of DataWorks and the roles of MaxCompute](https://help.aliyun.com/document_detail/449397.html).
 *
 * @param request AddProjectMemberToRoleRequest
 * @return AddProjectMemberToRoleResponse
 */
AddProjectMemberToRoleResponse Client::addProjectMemberToRole(const AddProjectMemberToRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addProjectMemberToRoleWithOptions(request, runtime);
}

/**
 * @summary Adds a sensitive field that is defined based on the category and sensitivity level of data in Data Security Guard.
 *
 * @param request AddRecognizeRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRecognizeRuleResponse
 */
AddRecognizeRuleResponse Client::addRecognizeRuleWithOptions(const AddRecognizeRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasColExclude()) {
    body["ColExclude"] = request.colExclude();
  }

  if (!!request.hasColScan()) {
    body["ColScan"] = request.colScan();
  }

  if (!!request.hasCommentScan()) {
    body["CommentScan"] = request.commentScan();
  }

  if (!!request.hasContentScan()) {
    body["ContentScan"] = request.contentScan();
  }

  if (!!request.hasHitThreshold()) {
    body["HitThreshold"] = request.hitThreshold();
  }

  if (!!request.hasLevel()) {
    body["Level"] = request.level();
  }

  if (!!request.hasLevelName()) {
    body["LevelName"] = request.levelName();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasNodeParent()) {
    body["NodeParent"] = request.nodeParent();
  }

  if (!!request.hasOperationType()) {
    body["OperationType"] = request.operationType();
  }

  if (!!request.hasRecognizeRules()) {
    body["RecognizeRules"] = request.recognizeRules();
  }

  if (!!request.hasRecognizeRulesType()) {
    body["RecognizeRulesType"] = request.recognizeRulesType();
  }

  if (!!request.hasSensitiveDescription()) {
    body["SensitiveDescription"] = request.sensitiveDescription();
  }

  if (!!request.hasSensitiveName()) {
    body["SensitiveName"] = request.sensitiveName();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddRecognizeRule"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddRecognizeRuleResponse>();
}

/**
 * @summary Adds a sensitive field that is defined based on the category and sensitivity level of data in Data Security Guard.
 *
 * @param request AddRecognizeRuleRequest
 * @return AddRecognizeRuleResponse
 */
AddRecognizeRuleResponse Client::addRecognizeRule(const AddRecognizeRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addRecognizeRuleWithOptions(request, runtime);
}

/**
 * @summary Adds a metatable to a specified category.
 *
 * @param request AddToMetaCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddToMetaCategoryResponse
 */
AddToMetaCategoryResponse Client::addToMetaCategoryWithOptions(const AddToMetaCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.categoryId();
  }

  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.tableGuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddToMetaCategory"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddToMetaCategoryResponse>();
}

/**
 * @summary Adds a metatable to a specified category.
 *
 * @param request AddToMetaCategoryRequest
 * @return AddToMetaCategoryResponse
 */
AddToMetaCategoryResponse Client::addToMetaCategory(const AddToMetaCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addToMetaCategoryWithOptions(request, runtime);
}

/**
 * @summary Processes a permission request order.
 *
 * @param request ApprovePermissionApplyOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApprovePermissionApplyOrderResponse
 */
ApprovePermissionApplyOrderResponse Client::approvePermissionApplyOrderWithOptions(const ApprovePermissionApplyOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApproveAction()) {
    query["ApproveAction"] = request.approveAction();
  }

  if (!!request.hasApproveComment()) {
    query["ApproveComment"] = request.approveComment();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.flowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ApprovePermissionApplyOrder"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApprovePermissionApplyOrderResponse>();
}

/**
 * @summary Processes a permission request order.
 *
 * @param request ApprovePermissionApplyOrderRequest
 * @return ApprovePermissionApplyOrderResponse
 */
ApprovePermissionApplyOrderResponse Client::approvePermissionApplyOrder(const ApprovePermissionApplyOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return approvePermissionApplyOrderWithOptions(request, runtime);
}

/**
 * @summary Sends the processing result of an extension point event by an extension to DataWorks.
 *
 * @param request CallbackExtensionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CallbackExtensionResponse
 */
CallbackExtensionResponse Client::callbackExtensionWithOptions(const CallbackExtensionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCheckMessage()) {
    body["CheckMessage"] = request.checkMessage();
  }

  if (!!request.hasCheckResult()) {
    body["CheckResult"] = request.checkResult();
  }

  if (!!request.hasExtensionCode()) {
    body["ExtensionCode"] = request.extensionCode();
  }

  if (!!request.hasMessageId()) {
    body["MessageId"] = request.messageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CallbackExtension"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CallbackExtensionResponse>();
}

/**
 * @summary Sends the processing result of an extension point event by an extension to DataWorks.
 *
 * @param request CallbackExtensionRequest
 * @return CallbackExtensionResponse
 */
CallbackExtensionResponse Client::callbackExtension(const CallbackExtensionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return callbackExtensionWithOptions(request, runtime);
}

/**
 * @summary Changes the resource group to which a resource belongs.
 *
 * @param request ChangeResourceManagerResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceManagerResourceGroupResponse
 */
ChangeResourceManagerResourceGroupResponse Client::changeResourceManagerResourceGroupWithOptions(const ChangeResourceManagerResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceManagerResourceGroup"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceManagerResourceGroupResponse>();
}

/**
 * @summary Changes the resource group to which a resource belongs.
 *
 * @param request ChangeResourceManagerResourceGroupRequest
 * @return ChangeResourceManagerResourceGroupResponse
 */
ChangeResourceManagerResourceGroupResponse Client::changeResourceManagerResourceGroup(const ChangeResourceManagerResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceManagerResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Returns the check events of a file. After you commit your file that is created on the DataStudio page, the system checks the file and returns check events before the system deploys the file. You must determine whether the check can be continued based on the events. You can call this operation to return the check events for the file that you want to deploy to DataWorks.
 *
 * @param request CheckFileDeploymentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckFileDeploymentResponse
 */
CheckFileDeploymentResponse Client::checkFileDeploymentWithOptions(const CheckFileDeploymentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCheckDetailUrl()) {
    body["CheckDetailUrl"] = request.checkDetailUrl();
  }

  if (!!request.hasCheckerInstanceId()) {
    body["CheckerInstanceId"] = request.checkerInstanceId();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CheckFileDeployment"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckFileDeploymentResponse>();
}

/**
 * @summary Returns the check events of a file. After you commit your file that is created on the DataStudio page, the system checks the file and returns check events before the system deploys the file. You must determine whether the check can be continued based on the events. You can call this operation to return the check events for the file that you want to deploy to DataWorks.
 *
 * @param request CheckFileDeploymentRequest
 * @return CheckFileDeploymentResponse
 */
CheckFileDeploymentResponse Client::checkFileDeployment(const CheckFileDeploymentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkFileDeploymentWithOptions(request, runtime);
}

/**
 * @summary Checks whether a partition in a MaxCompute metatable exists.
 *
 * @param request CheckMetaPartitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckMetaPartitionResponse
 */
CheckMetaPartitionResponse Client::checkMetaPartitionWithOptions(const CheckMetaPartitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDataSourceType()) {
    query["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasPartition()) {
    query["Partition"] = request.partition();
  }

  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.tableGuid();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckMetaPartition"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckMetaPartitionResponse>();
}

/**
 * @summary Checks whether a partition in a MaxCompute metatable exists.
 *
 * @param request CheckMetaPartitionRequest
 * @return CheckMetaPartitionResponse
 */
CheckMetaPartitionResponse Client::checkMetaPartition(const CheckMetaPartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkMetaPartitionWithOptions(request, runtime);
}

/**
 * @summary Checks whether a metatable exists.
 *
 * @param request CheckMetaTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckMetaTableResponse
 */
CheckMetaTableResponse Client::checkMetaTableWithOptions(const CheckMetaTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDataSourceType()) {
    query["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.tableGuid();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckMetaTable"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckMetaTableResponse>();
}

/**
 * @summary Checks whether a metatable exists.
 *
 * @param request CheckMetaTableRequest
 * @return CheckMetaTableResponse
 */
CheckMetaTableResponse Client::checkMetaTable(const CheckMetaTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkMetaTableWithOptions(request, runtime);
}

/**
 * @summary Creates a baseline.
 *
 * @param request CreateBaselineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBaselineResponse
 */
CreateBaselineResponse Client::createBaselineWithOptions(const CreateBaselineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertMarginThreshold()) {
    body["AlertMarginThreshold"] = request.alertMarginThreshold();
  }

  if (!!request.hasBaselineName()) {
    body["BaselineName"] = request.baselineName();
  }

  if (!!request.hasBaselineType()) {
    body["BaselineType"] = request.baselineType();
  }

  if (!!request.hasNodeIds()) {
    body["NodeIds"] = request.nodeIds();
  }

  if (!!request.hasOvertimeSettings()) {
    body["OvertimeSettings"] = request.overtimeSettings();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateBaseline"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBaselineResponse>();
}

/**
 * @summary Creates a baseline.
 *
 * @param request CreateBaselineRequest
 * @return CreateBaselineResponse
 */
CreateBaselineResponse Client::createBaseline(const CreateBaselineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createBaselineWithOptions(request, runtime);
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
    body["BusinessName"] = request.businessName();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  if (!!request.hasUseType()) {
    body["UseType"] = request.useType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateBusiness"},
    {"version" , "2020-05-18"},
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
 * @deprecated OpenAPI CreateConnection is deprecated, please use dataworks-public::2020-05-18::CreateDataSource instead.
 *
 * @summary Adds a data source.
 *
 * @param request CreateConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConnectionResponse
 */
CreateConnectionResponse Client::createConnectionWithOptions(const CreateConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionType()) {
    query["ConnectionType"] = request.connectionType();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.envType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasSubType()) {
    query["SubType"] = request.subType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateConnection"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateConnectionResponse>();
}

/**
 * @deprecated OpenAPI CreateConnection is deprecated, please use dataworks-public::2020-05-18::CreateDataSource instead.
 *
 * @summary Adds a data source.
 *
 * @param request CreateConnectionRequest
 * @return CreateConnectionResponse
 */
CreateConnectionResponse Client::createConnection(const CreateConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createConnectionWithOptions(request, runtime);
}

/**
 * @summary Creates an alert rule for a Data Integration task of a new version. Only the following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
 *
 * @description You can configure alert rules only for tasks that can be used for real-time data synchronization.
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
    request.setNotificationSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notificationSettings(), "NotificationSettings", "json"));
  }

  if (!!tmpReq.hasTriggerConditions()) {
    request.setTriggerConditionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.triggerConditions(), "TriggerConditions", "json"));
  }

  json body = {};
  if (!!request.hasDIJobId()) {
    body["DIJobId"] = request.DIJobId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEnabled()) {
    body["Enabled"] = request.enabled();
  }

  if (!!request.hasMetricType()) {
    body["MetricType"] = request.metricType();
  }

  if (!!request.hasNotificationSettingsShrink()) {
    body["NotificationSettings"] = request.notificationSettingsShrink();
  }

  if (!!request.hasTriggerConditionsShrink()) {
    body["TriggerConditions"] = request.triggerConditionsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDIAlarmRule"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDIAlarmRuleResponse>();
}

/**
 * @summary Creates an alert rule for a Data Integration task of a new version. Only the following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
 *
 * @description You can configure alert rules only for tasks that can be used for real-time data synchronization.
 *
 * @param request CreateDIAlarmRuleRequest
 * @return CreateDIAlarmRuleResponse
 */
CreateDIAlarmRuleResponse Client::createDIAlarmRule(const CreateDIAlarmRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDIAlarmRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a new-version synchronization task. The following types of synchronization tasks are supported: real-time synchronization of all data in a MySQL database to Hologres and batch synchronization of all data in a MySQL database to Hive.
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
    request.setDestinationDataSourceSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.destinationDataSourceSettings(), "DestinationDataSourceSettings", "json"));
  }

  if (!!tmpReq.hasJobSettings()) {
    request.setJobSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.jobSettings(), "JobSettings", "json"));
  }

  if (!!tmpReq.hasResourceSettings()) {
    request.setResourceSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceSettings(), "ResourceSettings", "json"));
  }

  if (!!tmpReq.hasSourceDataSourceSettings()) {
    request.setSourceDataSourceSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceDataSourceSettings(), "SourceDataSourceSettings", "json"));
  }

  if (!!tmpReq.hasTableMappings()) {
    request.setTableMappingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tableMappings(), "TableMappings", "json"));
  }

  if (!!tmpReq.hasTransformationRules()) {
    request.setTransformationRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.transformationRules(), "TransformationRules", "json"));
  }

  json query = {};
  if (!!request.hasSystemDebug()) {
    query["SystemDebug"] = request.systemDebug();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDestinationDataSourceSettingsShrink()) {
    body["DestinationDataSourceSettings"] = request.destinationDataSourceSettingsShrink();
  }

  if (!!request.hasDestinationDataSourceType()) {
    body["DestinationDataSourceType"] = request.destinationDataSourceType();
  }

  if (!!request.hasJobName()) {
    body["JobName"] = request.jobName();
  }

  if (!!request.hasJobSettingsShrink()) {
    body["JobSettings"] = request.jobSettingsShrink();
  }

  if (!!request.hasMigrationType()) {
    body["MigrationType"] = request.migrationType();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasResourceSettingsShrink()) {
    body["ResourceSettings"] = request.resourceSettingsShrink();
  }

  if (!!request.hasSourceDataSourceSettingsShrink()) {
    body["SourceDataSourceSettings"] = request.sourceDataSourceSettingsShrink();
  }

  if (!!request.hasSourceDataSourceType()) {
    body["SourceDataSourceType"] = request.sourceDataSourceType();
  }

  if (!!request.hasTableMappingsShrink()) {
    body["TableMappings"] = request.tableMappingsShrink();
  }

  if (!!request.hasTransformationRulesShrink()) {
    body["TransformationRules"] = request.transformationRulesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDIJob"},
    {"version" , "2020-05-18"},
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
 * @summary Creates a new-version synchronization task. The following types of synchronization tasks are supported: real-time synchronization of all data in a MySQL database to Hologres and batch synchronization of all data in a MySQL database to Hive.
 *
 * @param request CreateDIJobRequest
 * @return CreateDIJobResponse
 */
CreateDIJobResponse Client::createDIJob(const CreateDIJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDIJobWithOptions(request, runtime);
}

/**
 * @summary Creates a data synchronization task.
 *
 * @description You cannot configure scheduling properties for a task by calling this operation. If you want to configure scheduling properties for a task, you can call the UpdateFile operation.[](~~2780137~~)
 *
 * @param request CreateDISyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDISyncTaskResponse
 */
CreateDISyncTaskResponse Client::createDISyncTaskWithOptions(const CreateDISyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.taskName();
  }

  if (!!request.hasTaskParam()) {
    query["TaskParam"] = request.taskParam();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  json body = {};
  if (!!request.hasTaskContent()) {
    body["TaskContent"] = request.taskContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDISyncTask"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDISyncTaskResponse>();
}

/**
 * @summary Creates a data synchronization task.
 *
 * @description You cannot configure scheduling properties for a task by calling this operation. If you want to configure scheduling properties for a task, you can call the UpdateFile operation.[](~~2780137~~)
 *
 * @param request CreateDISyncTaskRequest
 * @return CreateDISyncTaskResponse
 */
CreateDISyncTaskResponse Client::createDISyncTask(const CreateDISyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDISyncTaskWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI CreateDagComplement is deprecated
 *
 * @param request CreateDagComplementRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDagComplementResponse
 */
CreateDagComplementResponse Client::createDagComplementWithOptions(const CreateDagComplementRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizBeginTime()) {
    body["BizBeginTime"] = request.bizBeginTime();
  }

  if (!!request.hasBizEndTime()) {
    body["BizEndTime"] = request.bizEndTime();
  }

  if (!!request.hasEndBizDate()) {
    body["EndBizDate"] = request.endBizDate();
  }

  if (!!request.hasExcludeNodeIds()) {
    body["ExcludeNodeIds"] = request.excludeNodeIds();
  }

  if (!!request.hasIncludeNodeIds()) {
    body["IncludeNodeIds"] = request.includeNodeIds();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNodeParams()) {
    body["NodeParams"] = request.nodeParams();
  }

  if (!!request.hasParallelism()) {
    body["Parallelism"] = request.parallelism();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  if (!!request.hasRootNodeId()) {
    body["RootNodeId"] = request.rootNodeId();
  }

  if (!!request.hasStartBizDate()) {
    body["StartBizDate"] = request.startBizDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDagComplement"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDagComplementResponse>();
}

/**
 * @deprecated OpenAPI CreateDagComplement is deprecated
 *
 * @param request CreateDagComplementRequest
 * @return CreateDagComplementResponse
 */
CreateDagComplementResponse Client::createDagComplement(const CreateDagComplementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDagComplementWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI CreateDagTest is deprecated
 *
 * @param request CreateDagTestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDagTestResponse
 */
CreateDagTestResponse Client::createDagTestWithOptions(const CreateDagTestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizdate()) {
    body["Bizdate"] = request.bizdate();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasNodeParams()) {
    body["NodeParams"] = request.nodeParams();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDagTest"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDagTestResponse>();
}

/**
 * @deprecated OpenAPI CreateDagTest is deprecated
 *
 * @param request CreateDagTestRequest
 * @return CreateDagTestResponse
 */
CreateDagTestResponse Client::createDagTest(const CreateDagTestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDagTestWithOptions(request, runtime);
}

/**
 * @summary Creates an API.
 *
 * @param request CreateDataServiceApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataServiceApiResponse
 */
CreateDataServiceApiResponse Client::createDataServiceApiWithOptions(const CreateDataServiceApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiDescription()) {
    body["ApiDescription"] = request.apiDescription();
  }

  if (!!request.hasApiMode()) {
    body["ApiMode"] = request.apiMode();
  }

  if (!!request.hasApiName()) {
    body["ApiName"] = request.apiName();
  }

  if (!!request.hasApiPath()) {
    body["ApiPath"] = request.apiPath();
  }

  if (!!request.hasFolderId()) {
    body["FolderId"] = request.folderId();
  }

  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProtocols()) {
    body["Protocols"] = request.protocols();
  }

  if (!!request.hasRegistrationDetails()) {
    body["RegistrationDetails"] = request.registrationDetails();
  }

  if (!!request.hasRequestContentType()) {
    body["RequestContentType"] = request.requestContentType();
  }

  if (!!request.hasRequestMethod()) {
    body["RequestMethod"] = request.requestMethod();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResponseContentType()) {
    body["ResponseContentType"] = request.responseContentType();
  }

  if (!!request.hasScriptDetails()) {
    body["ScriptDetails"] = request.scriptDetails();
  }

  if (!!request.hasSqlMode()) {
    body["SqlMode"] = request.sqlMode();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasTimeout()) {
    body["Timeout"] = request.timeout();
  }

  if (!!request.hasVisibleRange()) {
    body["VisibleRange"] = request.visibleRange();
  }

  if (!!request.hasWizardDetails()) {
    body["WizardDetails"] = request.wizardDetails();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDataServiceApi"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataServiceApiResponse>();
}

/**
 * @summary Creates an API.
 *
 * @param request CreateDataServiceApiRequest
 * @return CreateDataServiceApiResponse
 */
CreateDataServiceApiResponse Client::createDataServiceApi(const CreateDataServiceApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataServiceApiWithOptions(request, runtime);
}

/**
 * @summary Grants the access permissions on an API in DataService Studio.
 *
 * @param request CreateDataServiceApiAuthorityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataServiceApiAuthorityResponse
 */
CreateDataServiceApiAuthorityResponse Client::createDataServiceApiAuthorityWithOptions(const CreateDataServiceApiAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiId()) {
    body["ApiId"] = request.apiId();
  }

  if (!!request.hasAuthorizedProjectId()) {
    body["AuthorizedProjectId"] = request.authorizedProjectId();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDataServiceApiAuthority"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataServiceApiAuthorityResponse>();
}

/**
 * @summary Grants the access permissions on an API in DataService Studio.
 *
 * @param request CreateDataServiceApiAuthorityRequest
 * @return CreateDataServiceApiAuthorityResponse
 */
CreateDataServiceApiAuthorityResponse Client::createDataServiceApiAuthority(const CreateDataServiceApiAuthorityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataServiceApiAuthorityWithOptions(request, runtime);
}

/**
 * @summary Creates a folder in DataService Studio.
 *
 * @param request CreateDataServiceFolderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataServiceFolderResponse
 */
CreateDataServiceFolderResponse Client::createDataServiceFolderWithOptions(const CreateDataServiceFolderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFolderName()) {
    body["FolderName"] = request.folderName();
  }

  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  if (!!request.hasParentId()) {
    body["ParentId"] = request.parentId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDataServiceFolder"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataServiceFolderResponse>();
}

/**
 * @summary Creates a folder in DataService Studio.
 *
 * @param request CreateDataServiceFolderRequest
 * @return CreateDataServiceFolderResponse
 */
CreateDataServiceFolderResponse Client::createDataServiceFolder(const CreateDataServiceFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataServiceFolderWithOptions(request, runtime);
}

/**
 * @summary Creates a business process.
 *
 * @param request CreateDataServiceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataServiceGroupResponse
 */
CreateDataServiceGroupResponse Client::createDataServiceGroupWithOptions(const CreateDataServiceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiGatewayGroupId()) {
    body["ApiGatewayGroupId"] = request.apiGatewayGroupId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasGroupName()) {
    body["GroupName"] = request.groupName();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateDataServiceGroup"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDataServiceGroupResponse>();
}

/**
 * @summary Creates a business process.
 *
 * @param request CreateDataServiceGroupRequest
 * @return CreateDataServiceGroupResponse
 */
CreateDataServiceGroupResponse Client::createDataServiceGroup(const CreateDataServiceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataServiceGroupWithOptions(request, runtime);
}

/**
 * @summary Adds a data source to DataWorks.
 *
 * @param request CreateDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataSourceResponse
 */
CreateDataSourceResponse Client::createDataSourceWithOptions(const CreateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasDataSourceType()) {
    query["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.envType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasSubType()) {
    query["SubType"] = request.subType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDataSource"},
    {"version" , "2020-05-18"},
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
 * @summary Adds a data source to DataWorks.
 *
 * @param request CreateDataSourceRequest
 * @return CreateDataSourceResponse
 */
CreateDataSourceResponse Client::createDataSource(const CreateDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataSourceWithOptions(request, runtime);
}

/**
 * @summary Creates an export task. You can use this operation to create an export task but cannot use this operation to start the created export task.
 *
 * @param request CreateExportMigrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExportMigrationResponse
 */
CreateExportMigrationResponse Client::createExportMigrationWithOptions(const CreateExportMigrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasExportMode()) {
    body["ExportMode"] = request.exportMode();
  }

  if (!!request.hasExportObjectStatus()) {
    body["ExportObjectStatus"] = request.exportObjectStatus();
  }

  if (!!request.hasIncrementalSince()) {
    body["IncrementalSince"] = request.incrementalSince();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateExportMigration"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExportMigrationResponse>();
}

/**
 * @summary Creates an export task. You can use this operation to create an export task but cannot use this operation to start the created export task.
 *
 * @param request CreateExportMigrationRequest
 * @return CreateExportMigrationResponse
 */
CreateExportMigrationResponse Client::createExportMigration(const CreateExportMigrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createExportMigrationWithOptions(request, runtime);
}

/**
 * @summary Creates a file in DataStudio. You cannot call this operation to create files for Data Integration nodes.
 *
 * @param request CreateFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFileResponse
 */
CreateFileResponse Client::createFileWithOptions(const CreateFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAdvancedSettings()) {
    body["AdvancedSettings"] = request.advancedSettings();
  }

  if (!!request.hasApplyScheduleImmediately()) {
    body["ApplyScheduleImmediately"] = request.applyScheduleImmediately();
  }

  if (!!request.hasAutoParsing()) {
    body["AutoParsing"] = request.autoParsing();
  }

  if (!!request.hasAutoRerunIntervalMillis()) {
    body["AutoRerunIntervalMillis"] = request.autoRerunIntervalMillis();
  }

  if (!!request.hasAutoRerunTimes()) {
    body["AutoRerunTimes"] = request.autoRerunTimes();
  }

  if (!!request.hasConnectionName()) {
    body["ConnectionName"] = request.connectionName();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasCreateFolderIfNotExists()) {
    body["CreateFolderIfNotExists"] = request.createFolderIfNotExists();
  }

  if (!!request.hasCronExpress()) {
    body["CronExpress"] = request.cronExpress();
  }

  if (!!request.hasCycleType()) {
    body["CycleType"] = request.cycleType();
  }

  if (!!request.hasDependentNodeIdList()) {
    body["DependentNodeIdList"] = request.dependentNodeIdList();
  }

  if (!!request.hasDependentType()) {
    body["DependentType"] = request.dependentType();
  }

  if (!!request.hasEndEffectDate()) {
    body["EndEffectDate"] = request.endEffectDate();
  }

  if (!!request.hasFileDescription()) {
    body["FileDescription"] = request.fileDescription();
  }

  if (!!request.hasFileFolderPath()) {
    body["FileFolderPath"] = request.fileFolderPath();
  }

  if (!!request.hasFileName()) {
    body["FileName"] = request.fileName();
  }

  if (!!request.hasFileType()) {
    body["FileType"] = request.fileType();
  }

  if (!!request.hasIgnoreParentSkipRunningProperty()) {
    body["IgnoreParentSkipRunningProperty"] = request.ignoreParentSkipRunningProperty();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.imageId();
  }

  if (!!request.hasInputList()) {
    body["InputList"] = request.inputList();
  }

  if (!!request.hasInputParameters()) {
    body["InputParameters"] = request.inputParameters();
  }

  if (!!request.hasOutputParameters()) {
    body["OutputParameters"] = request.outputParameters();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasParaValue()) {
    body["ParaValue"] = request.paraValue();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  if (!!request.hasRerunMode()) {
    body["RerunMode"] = request.rerunMode();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceGroupIdentifier()) {
    body["ResourceGroupIdentifier"] = request.resourceGroupIdentifier();
  }

  if (!!request.hasSchedulerType()) {
    body["SchedulerType"] = request.schedulerType();
  }

  if (!!request.hasStartEffectDate()) {
    body["StartEffectDate"] = request.startEffectDate();
  }

  if (!!request.hasStartImmediately()) {
    body["StartImmediately"] = request.startImmediately();
  }

  if (!!request.hasStop()) {
    body["Stop"] = request.stop();
  }

  if (!!request.hasTimeout()) {
    body["Timeout"] = request.timeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateFile"},
    {"version" , "2020-05-18"},
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
 * @summary Creates a file in DataStudio. You cannot call this operation to create files for Data Integration nodes.
 *
 * @param request CreateFileRequest
 * @return CreateFileResponse
 */
CreateFileResponse Client::createFile(const CreateFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFileWithOptions(request, runtime);
}

/**
 * @summary The operation that you want to perform. Set the value to \\*\\*CreateFolder\\*\\*.
 *
 * @param request CreateFolderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFolderResponse
 */
CreateFolderResponse Client::createFolderWithOptions(const CreateFolderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFolderPath()) {
    body["FolderPath"] = request.folderPath();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateFolder"},
    {"version" , "2020-05-18"},
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
 * @summary The operation that you want to perform. Set the value to \\*\\*CreateFolder\\*\\*.
 *
 * @param request CreateFolderRequest
 * @return CreateFolderResponse
 */
CreateFolderResponse Client::createFolder(const CreateFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFolderWithOptions(request, runtime);
}

/**
 * @summary Creates an import task. The import task contains the import packages of data sources, nodes, and tables.
 *
 * @description The import package must be uploaded. Example of the upload method:
 *         Config config = new Config();
 *         config.setAccessKeyId(accessId);
 *         config.setAccessKeySecret(accessKey);
 *         config.setEndpoint(popEndpoint);
 *         config.setRegionId(regionId);
 *         
 *         Client client = new Client(config);
 *         CreateImportMigrationAdvanceRequest request = new CreateImportMigrationAdvanceRequest();
 *         request.setName("test_migration_api_" + System.currentTimeMillis());
 *         request.setProjectId(123456L); 
 *         request.setPackageType("DATAWORKS_MODEL");
 *         request.setPackageFileObject(new FileInputStream("/home/admin/Downloads/test.zip"));
 *         RuntimeOptions runtime = new RuntimeOptions();
 *         CreateImportMigrationResponse response = client.createImportMigrationAdvance(request, runtime);
 *         ...
 *
 * @param request CreateImportMigrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateImportMigrationResponse
 */
CreateImportMigrationResponse Client::createImportMigrationWithOptions(const CreateImportMigrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCalculateEngineMap()) {
    body["CalculateEngineMap"] = request.calculateEngineMap();
  }

  if (!!request.hasCommitRule()) {
    body["CommitRule"] = request.commitRule();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPackageFile()) {
    body["PackageFile"] = request.packageFile();
  }

  if (!!request.hasPackageType()) {
    body["PackageType"] = request.packageType();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasResourceGroupMap()) {
    body["ResourceGroupMap"] = request.resourceGroupMap();
  }

  if (!!request.hasWorkspaceMap()) {
    body["WorkspaceMap"] = request.workspaceMap();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateImportMigration"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateImportMigrationResponse>();
}

/**
 * @summary Creates an import task. The import task contains the import packages of data sources, nodes, and tables.
 *
 * @description The import package must be uploaded. Example of the upload method:
 *         Config config = new Config();
 *         config.setAccessKeyId(accessId);
 *         config.setAccessKeySecret(accessKey);
 *         config.setEndpoint(popEndpoint);
 *         config.setRegionId(regionId);
 *         
 *         Client client = new Client(config);
 *         CreateImportMigrationAdvanceRequest request = new CreateImportMigrationAdvanceRequest();
 *         request.setName("test_migration_api_" + System.currentTimeMillis());
 *         request.setProjectId(123456L); 
 *         request.setPackageType("DATAWORKS_MODEL");
 *         request.setPackageFileObject(new FileInputStream("/home/admin/Downloads/test.zip"));
 *         RuntimeOptions runtime = new RuntimeOptions();
 *         CreateImportMigrationResponse response = client.createImportMigrationAdvance(request, runtime);
 *         ...
 *
 * @param request CreateImportMigrationRequest
 * @return CreateImportMigrationResponse
 */
CreateImportMigrationResponse Client::createImportMigration(const CreateImportMigrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createImportMigrationWithOptions(request, runtime);
}

CreateImportMigrationResponse Client::createImportMigrationAdvance(const CreateImportMigrationAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  // Step 0: init client
  if (Darabonba::isNull(_credential)) {
    throw ClientException(json({
      {"code" , "InvalidCredentials"},
      {"message" , "Please set up the credentials correctly. If you are setting them through environment variables, please ensure that ALIBABA_CLOUD_ACCESS_KEY_ID and ALIBABA_CLOUD_ACCESS_KEY_SECRET are set correctly. See https://help.aliyun.com/zh/sdk/developer-reference/configure-the-alibaba-cloud-accesskey-environment-variable-on-linux-macos-and-windows-systems for more details."}
    }).get<map<string, string>>());
  }

  CredentialModel credentialModel = _credential->getCredential();
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
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
  CreateImportMigrationRequest createImportMigrationReq = CreateImportMigrationRequest();
  Utils::Utils::convert(request, createImportMigrationReq);
  if (!!request.hasPackageFileObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.packageFileObject()},
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
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader);
    createImportMigrationReq.setPackageFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  CreateImportMigrationResponse createImportMigrationResp = createImportMigrationWithOptions(createImportMigrationReq, runtime);
  return createImportMigrationResp;
}

/**
 * @deprecated OpenAPI CreateManualDag is deprecated
 *
 * @summary Triggers a manually triggered workflow to run. Before you call this operation, make sure that the manually triggered workflow is committed and deployed. You can find the manually triggered workflow on the Operation Center page only after the manually triggered workflow is committed and deployed.
 *
 * @param request CreateManualDagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateManualDagResponse
 */
CreateManualDagResponse Client::createManualDagWithOptions(const CreateManualDagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizDate()) {
    body["BizDate"] = request.bizDate();
  }

  if (!!request.hasDagParameters()) {
    body["DagParameters"] = request.dagParameters();
  }

  if (!!request.hasExcludeNodeIds()) {
    body["ExcludeNodeIds"] = request.excludeNodeIds();
  }

  if (!!request.hasFlowName()) {
    body["FlowName"] = request.flowName();
  }

  if (!!request.hasIncludeNodeIds()) {
    body["IncludeNodeIds"] = request.includeNodeIds();
  }

  if (!!request.hasNodeParameters()) {
    body["NodeParameters"] = request.nodeParameters();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateManualDag"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateManualDagResponse>();
}

/**
 * @deprecated OpenAPI CreateManualDag is deprecated
 *
 * @summary Triggers a manually triggered workflow to run. Before you call this operation, make sure that the manually triggered workflow is committed and deployed. You can find the manually triggered workflow on the Operation Center page only after the manually triggered workflow is committed and deployed.
 *
 * @param request CreateManualDagRequest
 * @return CreateManualDagResponse
 */
CreateManualDagResponse Client::createManualDag(const CreateManualDagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createManualDagWithOptions(request, runtime);
}

/**
 * @summary Creates a category.
 *
 * @param request CreateMetaCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMetaCategoryResponse
 */
CreateMetaCategoryResponse Client::createMetaCategoryWithOptions(const CreateMetaCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.comment();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasParentId()) {
    body["ParentId"] = request.parentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMetaCategory"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMetaCategoryResponse>();
}

/**
 * @summary Creates a category.
 *
 * @param request CreateMetaCategoryRequest
 * @return CreateMetaCategoryResponse
 */
CreateMetaCategoryResponse Client::createMetaCategory(const CreateMetaCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMetaCategoryWithOptions(request, runtime);
}

/**
 * @summary Creates a collection.
 *
 * @description Collections are classified into various types. The names of collections of the same type must be different.
 *
 * @param request CreateMetaCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMetaCollectionResponse
 */
CreateMetaCollectionResponse Client::createMetaCollectionWithOptions(const CreateMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollectionType()) {
    query["CollectionType"] = request.collectionType();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.comment();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasParentQualifiedName()) {
    query["ParentQualifiedName"] = request.parentQualifiedName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMetaCollection"},
    {"version" , "2020-05-18"},
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
 * @summary Creates a collection.
 *
 * @description Collections are classified into various types. The names of collections of the same type must be different.
 *
 * @param request CreateMetaCollectionRequest
 * @return CreateMetaCollectionResponse
 */
CreateMetaCollectionResponse Client::createMetaCollection(const CreateMetaCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMetaCollectionWithOptions(request, runtime);
}

/**
 * @summary Creates a permission request order.
 *
 * @param request CreatePermissionApplyOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePermissionApplyOrderResponse
 */
CreatePermissionApplyOrderResponse Client::createPermissionApplyOrderWithOptions(const CreatePermissionApplyOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplyObject()) {
    query["ApplyObject"] = request.applyObject();
  }

  if (!!request.hasApplyReason()) {
    query["ApplyReason"] = request.applyReason();
  }

  if (!!request.hasApplyType()) {
    query["ApplyType"] = request.applyType();
  }

  if (!!request.hasApplyUserIds()) {
    query["ApplyUserIds"] = request.applyUserIds();
  }

  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasDeadline()) {
    query["Deadline"] = request.deadline();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.engineType();
  }

  if (!!request.hasMaxComputeProjectName()) {
    query["MaxComputeProjectName"] = request.maxComputeProjectName();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePermissionApplyOrder"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePermissionApplyOrderResponse>();
}

/**
 * @summary Creates a permission request order.
 *
 * @param request CreatePermissionApplyOrderRequest
 * @return CreatePermissionApplyOrderResponse
 */
CreatePermissionApplyOrderResponse Client::createPermissionApplyOrder(const CreatePermissionApplyOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPermissionApplyOrderWithOptions(request, runtime);
}

/**
 * @summary Creates a DataWorks workspace.
 *
 * @param tmpReq CreateProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProjectWithOptions(const CreateProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateProjectShrinkRequest request = CreateProjectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDisableDevelopment()) {
    query["DisableDevelopment"] = request.disableDevelopment();
  }

  if (!!request.hasIsAllowDownload()) {
    query["IsAllowDownload"] = request.isAllowDownload();
  }

  if (!!request.hasProjectDescription()) {
    query["ProjectDescription"] = request.projectDescription();
  }

  if (!!request.hasProjectIdentifier()) {
    query["ProjectIdentifier"] = request.projectIdentifier();
  }

  if (!!request.hasProjectMode()) {
    query["ProjectMode"] = request.projectMode();
  }

  if (!!request.hasProjectName()) {
    query["ProjectName"] = request.projectName();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProject"},
    {"version" , "2020-05-18"},
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
 * @summary Creates a DataWorks workspace.
 *
 * @param request CreateProjectRequest
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProject(const CreateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProjectWithOptions(request, runtime);
}

/**
 * @summary Adds a user to a DataWorks workspace.
 *
 * @param request CreateProjectMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProjectMemberResponse
 */
CreateProjectMemberResponse Client::createProjectMemberWithOptions(const CreateProjectMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasRoleCode()) {
    query["RoleCode"] = request.roleCode();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProjectMember"},
    {"version" , "2020-05-18"},
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
 * @summary Adds a user to a DataWorks workspace.
 *
 * @param request CreateProjectMemberRequest
 * @return CreateProjectMemberResponse
 */
CreateProjectMemberResponse Client::createProjectMember(const CreateProjectMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProjectMemberWithOptions(request, runtime);
}

/**
 * @summary Creates a partition filter expression.
 *
 * @param request CreateQualityEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQualityEntityResponse
 */
CreateQualityEntityResponse Client::createQualityEntityWithOptions(const CreateQualityEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEntityLevel()) {
    body["EntityLevel"] = request.entityLevel();
  }

  if (!!request.hasEnvType()) {
    body["EnvType"] = request.envType();
  }

  if (!!request.hasMatchExpression()) {
    body["MatchExpression"] = request.matchExpression();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateQualityEntity"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQualityEntityResponse>();
}

/**
 * @summary Creates a partition filter expression.
 *
 * @param request CreateQualityEntityRequest
 * @return CreateQualityEntityResponse
 */
CreateQualityEntityResponse Client::createQualityEntity(const CreateQualityEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQualityEntityWithOptions(request, runtime);
}

/**
 * @summary Creates a subscriber for a partition filter expression.
 *
 * @param request CreateQualityFollowerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQualityFollowerResponse
 */
CreateQualityFollowerResponse Client::createQualityFollowerWithOptions(const CreateQualityFollowerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlarmMode()) {
    body["AlarmMode"] = request.alarmMode();
  }

  if (!!request.hasEntityId()) {
    body["EntityId"] = request.entityId();
  }

  if (!!request.hasFollower()) {
    body["Follower"] = request.follower();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateQualityFollower"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQualityFollowerResponse>();
}

/**
 * @summary Creates a subscriber for a partition filter expression.
 *
 * @param request CreateQualityFollowerRequest
 * @return CreateQualityFollowerResponse
 */
CreateQualityFollowerResponse Client::createQualityFollower(const CreateQualityFollowerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQualityFollowerWithOptions(request, runtime);
}

/**
 * @summary Associates a node with a partition filter expression.
 *
 * @param request CreateQualityRelativeNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQualityRelativeNodeResponse
 */
CreateQualityRelativeNodeResponse Client::createQualityRelativeNodeWithOptions(const CreateQualityRelativeNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnvType()) {
    body["EnvType"] = request.envType();
  }

  if (!!request.hasMatchExpression()) {
    body["MatchExpression"] = request.matchExpression();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  if (!!request.hasTargetNodeProjectId()) {
    body["TargetNodeProjectId"] = request.targetNodeProjectId();
  }

  if (!!request.hasTargetNodeProjectName()) {
    body["TargetNodeProjectName"] = request.targetNodeProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateQualityRelativeNode"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQualityRelativeNodeResponse>();
}

/**
 * @summary Associates a node with a partition filter expression.
 *
 * @param request CreateQualityRelativeNodeRequest
 * @return CreateQualityRelativeNodeResponse
 */
CreateQualityRelativeNodeResponse Client::createQualityRelativeNode(const CreateQualityRelativeNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQualityRelativeNodeWithOptions(request, runtime);
}

/**
 * @summary Creates a monitoring rule.
 *
 * @param request CreateQualityRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateQualityRuleResponse
 */
CreateQualityRuleResponse Client::createQualityRuleWithOptions(const CreateQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBlockType()) {
    body["BlockType"] = request.blockType();
  }

  if (!!request.hasChecker()) {
    body["Checker"] = request.checker();
  }

  if (!!request.hasComment()) {
    body["Comment"] = request.comment();
  }

  if (!!request.hasCriticalThreshold()) {
    body["CriticalThreshold"] = request.criticalThreshold();
  }

  if (!!request.hasEntityId()) {
    body["EntityId"] = request.entityId();
  }

  if (!!request.hasExpectValue()) {
    body["ExpectValue"] = request.expectValue();
  }

  if (!!request.hasMethodName()) {
    body["MethodName"] = request.methodName();
  }

  if (!!request.hasOperator()) {
    body["Operator"] = request._operator();
  }

  if (!!request.hasPredictType()) {
    body["PredictType"] = request.predictType();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  if (!!request.hasProperty()) {
    body["Property"] = request.property();
  }

  if (!!request.hasPropertyType()) {
    body["PropertyType"] = request.propertyType();
  }

  if (!!request.hasRuleName()) {
    body["RuleName"] = request.ruleName();
  }

  if (!!request.hasRuleType()) {
    body["RuleType"] = request.ruleType();
  }

  if (!!request.hasTaskSetting()) {
    body["TaskSetting"] = request.taskSetting();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasTrend()) {
    body["Trend"] = request.trend();
  }

  if (!!request.hasWarningThreshold()) {
    body["WarningThreshold"] = request.warningThreshold();
  }

  if (!!request.hasWhereCondition()) {
    body["WhereCondition"] = request.whereCondition();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateQualityRule"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateQualityRuleResponse>();
}

/**
 * @summary Creates a monitoring rule.
 *
 * @param request CreateQualityRuleRequest
 * @return CreateQualityRuleResponse
 */
CreateQualityRuleResponse Client::createQualityRule(const CreateQualityRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createQualityRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a custom alert rule.
 *
 * @param request CreateRemindRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRemindResponse
 */
CreateRemindResponse Client::createRemindWithOptions(const CreateRemindRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertInterval()) {
    body["AlertInterval"] = request.alertInterval();
  }

  if (!!request.hasAlertMethods()) {
    body["AlertMethods"] = request.alertMethods();
  }

  if (!!request.hasAlertTargets()) {
    body["AlertTargets"] = request.alertTargets();
  }

  if (!!request.hasAlertUnit()) {
    body["AlertUnit"] = request.alertUnit();
  }

  if (!!request.hasBaselineIds()) {
    body["BaselineIds"] = request.baselineIds();
  }

  if (!!request.hasBizProcessIds()) {
    body["BizProcessIds"] = request.bizProcessIds();
  }

  if (!!request.hasDetail()) {
    body["Detail"] = request.detail();
  }

  if (!!request.hasDndEnd()) {
    body["DndEnd"] = request.dndEnd();
  }

  if (!!request.hasMaxAlertTimes()) {
    body["MaxAlertTimes"] = request.maxAlertTimes();
  }

  if (!!request.hasNodeIds()) {
    body["NodeIds"] = request.nodeIds();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasRemindName()) {
    body["RemindName"] = request.remindName();
  }

  if (!!request.hasRemindType()) {
    body["RemindType"] = request.remindType();
  }

  if (!!request.hasRemindUnit()) {
    body["RemindUnit"] = request.remindUnit();
  }

  if (!!request.hasRobotUrls()) {
    body["RobotUrls"] = request.robotUrls();
  }

  if (!!request.hasWebhooks()) {
    body["Webhooks"] = request.webhooks();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateRemind"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRemindResponse>();
}

/**
 * @summary Creates a custom alert rule.
 *
 * @param request CreateRemindRequest
 * @return CreateRemindResponse
 */
CreateRemindResponse Client::createRemind(const CreateRemindRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRemindWithOptions(request, runtime);
}

/**
 * @summary Creates or uploads a resource file in DataStudio. The feature that is implemented by calling this operation is the same as the resource creation feature provided in the integrated development environment (IDE).
 *
 * @param request CreateResourceFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceFileResponse
 */
CreateResourceFileResponse Client::createResourceFileWithOptions(const CreateResourceFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasFileDescription()) {
    body["FileDescription"] = request.fileDescription();
  }

  if (!!request.hasFileFolderPath()) {
    body["FileFolderPath"] = request.fileFolderPath();
  }

  if (!!request.hasFileName()) {
    body["FileName"] = request.fileName();
  }

  if (!!request.hasFileType()) {
    body["FileType"] = request.fileType();
  }

  if (!!request.hasOriginResourceName()) {
    body["OriginResourceName"] = request.originResourceName();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasRegisterToCalcEngine()) {
    body["RegisterToCalcEngine"] = request.registerToCalcEngine();
  }

  if (!!request.hasResourceFile()) {
    body["ResourceFile"] = request.resourceFile();
  }

  if (!!request.hasStorageURL()) {
    body["StorageURL"] = request.storageURL();
  }

  if (!!request.hasUploadMode()) {
    body["UploadMode"] = request.uploadMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateResourceFile"},
    {"version" , "2020-05-18"},
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
 * @summary Creates or uploads a resource file in DataStudio. The feature that is implemented by calling this operation is the same as the resource creation feature provided in the integrated development environment (IDE).
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
  string accessKeyId = credentialModel.accessKeyId();
  string accessKeySecret = credentialModel.accessKeySecret();
  string securityToken = credentialModel.securityToken();
  string credentialType = credentialModel.type();
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
      {"content" , request.resourceFileObject()},
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
    _postOSSObject(authResponseBody.at("Bucket"), ossHeader);
    createResourceFileReq.setResourceFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  CreateResourceFileResponse createResourceFileResp = createResourceFileWithOptions(createResourceFileReq, runtime);
  return createResourceFileResp;
}

/**
 * @summary Creates a MaxCompute table or view.
 *
 * @param request CreateTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTableResponse
 */
CreateTableResponse Client::createTableWithOptions(const CreateTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppGuid()) {
    query["AppGuid"] = request.appGuid();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.categoryId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.comment();
  }

  if (!!request.hasExternalTableType()) {
    query["ExternalTableType"] = request.externalTableType();
  }

  if (!!request.hasHasPart()) {
    query["HasPart"] = request.hasPart();
  }

  if (!!request.hasIsView()) {
    query["IsView"] = request.isView();
  }

  if (!!request.hasLifeCycle()) {
    query["LifeCycle"] = request.lifeCycle();
  }

  if (!!request.hasLocation()) {
    query["Location"] = request.location();
  }

  if (!!request.hasLogicalLevelId()) {
    query["LogicalLevelId"] = request.logicalLevelId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhysicsLevelId()) {
    query["PhysicsLevelId"] = request.physicsLevelId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasSchema()) {
    query["Schema"] = request.schema();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasVisibility()) {
    query["Visibility"] = request.visibility();
  }

  json body = {};
  if (!!request.hasColumns()) {
    body["Columns"] = request.columns();
  }

  if (!!request.hasEndpoint()) {
    body["Endpoint"] = request.endpoint();
  }

  if (!!request.hasEnvType()) {
    body["EnvType"] = request.envType();
  }

  if (!!request.hasThemes()) {
    body["Themes"] = request.themes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateTable"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTableResponse>();
}

/**
 * @summary Creates a MaxCompute table or view.
 *
 * @param request CreateTableRequest
 * @return CreateTableResponse
 */
CreateTableResponse Client::createTable(const CreateTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTableWithOptions(request, runtime);
}

/**
 * @summary Creates a table level. This operation will be replaced soon. We recommend that you do not call this operation.
 *
 * @param request CreateTableLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTableLevelResponse
 */
CreateTableLevelResponse Client::createTableLevelWithOptions(const CreateTableLevelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasLevelType()) {
    query["LevelType"] = request.levelType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTableLevel"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTableLevelResponse>();
}

/**
 * @summary Creates a table level. This operation will be replaced soon. We recommend that you do not call this operation.
 *
 * @param request CreateTableLevelRequest
 * @return CreateTableLevelResponse
 */
CreateTableLevelResponse Client::createTableLevel(const CreateTableLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTableLevelWithOptions(request, runtime);
}

/**
 * @summary Creates a table theme. This operation will be replaced soon. We recommend that you do not call this operation.
 *
 * @param request CreateTableThemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTableThemeResponse
 */
CreateTableThemeResponse Client::createTableThemeWithOptions(const CreateTableThemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLevel()) {
    query["Level"] = request.level();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.parentId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTableTheme"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTableThemeResponse>();
}

/**
 * @summary Creates a table theme. This operation will be replaced soon. We recommend that you do not call this operation.
 *
 * @param request CreateTableThemeRequest
 * @return CreateTableThemeResponse
 */
CreateTableThemeResponse Client::createTableTheme(const CreateTableThemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createTableThemeWithOptions(request, runtime);
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
    body["ClassName"] = request.className();
  }

  if (!!request.hasCmdDescription()) {
    body["CmdDescription"] = request.cmdDescription();
  }

  if (!!request.hasCreateFolderIfNotExists()) {
    body["CreateFolderIfNotExists"] = request.createFolderIfNotExists();
  }

  if (!!request.hasExample()) {
    body["Example"] = request.example();
  }

  if (!!request.hasFileFolderPath()) {
    body["FileFolderPath"] = request.fileFolderPath();
  }

  if (!!request.hasFileName()) {
    body["FileName"] = request.fileName();
  }

  if (!!request.hasFunctionType()) {
    body["FunctionType"] = request.functionType();
  }

  if (!!request.hasParameterDescription()) {
    body["ParameterDescription"] = request.parameterDescription();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  if (!!request.hasResources()) {
    body["Resources"] = request.resources();
  }

  if (!!request.hasReturnValue()) {
    body["ReturnValue"] = request.returnValue();
  }

  if (!!request.hasUdfDescription()) {
    body["UdfDescription"] = request.udfDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateUdfFile"},
    {"version" , "2020-05-18"},
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
 * @summary Deletes a baseline based on its ID. You can delete a baseline only if the nodes in the baseline does not have ancestor nodes. You can call the UpdateBaseline operation to delete the relationships between the nodes and their ancestor nodes.
 *
 * @param request DeleteBaselineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBaselineResponse
 */
DeleteBaselineResponse Client::deleteBaselineWithOptions(const DeleteBaselineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaselineId()) {
    body["BaselineId"] = request.baselineId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteBaseline"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBaselineResponse>();
}

/**
 * @summary Deletes a baseline based on its ID. You can delete a baseline only if the nodes in the baseline does not have ancestor nodes. You can call the UpdateBaseline operation to delete the relationships between the nodes and their ancestor nodes.
 *
 * @param request DeleteBaselineRequest
 * @return DeleteBaselineResponse
 */
DeleteBaselineResponse Client::deleteBaseline(const DeleteBaselineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBaselineWithOptions(request, runtime);
}

/**
 * @param request DeleteBusinessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBusinessResponse
 */
DeleteBusinessResponse Client::deleteBusinessWithOptions(const DeleteBusinessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessId()) {
    body["BusinessId"] = request.businessId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteBusiness"},
    {"version" , "2020-05-18"},
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
 * @param request DeleteBusinessRequest
 * @return DeleteBusinessResponse
 */
DeleteBusinessResponse Client::deleteBusiness(const DeleteBusinessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteBusinessWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DeleteConnection is deprecated
 *
 * @summary Removes a data source.
 *
 * @param request DeleteConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConnectionResponse
 */
DeleteConnectionResponse Client::deleteConnectionWithOptions(const DeleteConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionId()) {
    query["ConnectionId"] = request.connectionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteConnection"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteConnectionResponse>();
}

/**
 * @deprecated OpenAPI DeleteConnection is deprecated
 *
 * @summary Removes a data source.
 *
 * @param request DeleteConnectionRequest
 * @return DeleteConnectionResponse
 */
DeleteConnectionResponse Client::deleteConnection(const DeleteConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteConnectionWithOptions(request, runtime);
}

/**
 * @summary Deletes an alert rule for a Data Integration task of a new version. Only the following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
 *
 * @description You can configure alert rules only for tasks whose MigrationType is set to RealtimeIncremental.
 *
 * @param request DeleteDIAlarmRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDIAlarmRuleResponse
 */
DeleteDIAlarmRuleResponse Client::deleteDIAlarmRuleWithOptions(const DeleteDIAlarmRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDIAlarmRuleId()) {
    body["DIAlarmRuleId"] = request.DIAlarmRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDIAlarmRule"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDIAlarmRuleResponse>();
}

/**
 * @summary Deletes an alert rule for a Data Integration task of a new version. Only the following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
 *
 * @description You can configure alert rules only for tasks whose MigrationType is set to RealtimeIncremental.
 *
 * @param request DeleteDIAlarmRuleRequest
 * @return DeleteDIAlarmRuleResponse
 */
DeleteDIAlarmRuleResponse Client::deleteDIAlarmRule(const DeleteDIAlarmRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDIAlarmRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a Data Integration task of a new version. Only the following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
 *
 * @param request DeleteDIJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDIJobResponse
 */
DeleteDIJobResponse Client::deleteDIJobWithOptions(const DeleteDIJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDIJobId()) {
    body["DIJobId"] = request.DIJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDIJob"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDIJobResponse>();
}

/**
 * @summary Deletes a Data Integration task of a new version. Only the following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
 *
 * @param request DeleteDIJobRequest
 * @return DeleteDIJobResponse
 */
DeleteDIJobResponse Client::deleteDIJob(const DeleteDIJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDIJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a synchronization task. You can call this operation to delete only a real-time synchronization task.
 *
 * @description If you want to delete a batch synchronization task, call the DeleteFile operation. For more information, see [Delete a synchronization task](https://help.aliyun.com/document_detail/321443.html).
 *
 * @param request DeleteDISyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDISyncTaskResponse
 */
DeleteDISyncTaskResponse Client::deleteDISyncTaskWithOptions(const DeleteDISyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.fileId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDISyncTask"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDISyncTaskResponse>();
}

/**
 * @summary Deletes a synchronization task. You can call this operation to delete only a real-time synchronization task.
 *
 * @description If you want to delete a batch synchronization task, call the DeleteFile operation. For more information, see [Delete a synchronization task](https://help.aliyun.com/document_detail/321443.html).
 *
 * @param request DeleteDISyncTaskRequest
 * @return DeleteDISyncTaskResponse
 */
DeleteDISyncTaskResponse Client::deleteDISyncTask(const DeleteDISyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDISyncTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes an API in DataService Studio.
 *
 * @param request DeleteDataServiceApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataServiceApiResponse
 */
DeleteDataServiceApiResponse Client::deleteDataServiceApiWithOptions(const DeleteDataServiceApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiId()) {
    body["ApiId"] = request.apiId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDataServiceApi"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataServiceApiResponse>();
}

/**
 * @summary Deletes an API in DataService Studio.
 *
 * @param request DeleteDataServiceApiRequest
 * @return DeleteDataServiceApiResponse
 */
DeleteDataServiceApiResponse Client::deleteDataServiceApi(const DeleteDataServiceApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataServiceApiWithOptions(request, runtime);
}

/**
 * @summary Revokes the access permissions on an API.
 *
 * @param request DeleteDataServiceApiAuthorityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataServiceApiAuthorityResponse
 */
DeleteDataServiceApiAuthorityResponse Client::deleteDataServiceApiAuthorityWithOptions(const DeleteDataServiceApiAuthorityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiId()) {
    body["ApiId"] = request.apiId();
  }

  if (!!request.hasAuthorizedProjectId()) {
    body["AuthorizedProjectId"] = request.authorizedProjectId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteDataServiceApiAuthority"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDataServiceApiAuthorityResponse>();
}

/**
 * @summary Revokes the access permissions on an API.
 *
 * @param request DeleteDataServiceApiAuthorityRequest
 * @return DeleteDataServiceApiAuthorityResponse
 */
DeleteDataServiceApiAuthorityResponse Client::deleteDataServiceApiAuthority(const DeleteDataServiceApiAuthorityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataServiceApiAuthorityWithOptions(request, runtime);
}

/**
 * @summary Removes a data source.
 *
 * @param request DeleteDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataSourceResponse
 */
DeleteDataSourceResponse Client::deleteDataSourceWithOptions(const DeleteDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataSource"},
    {"version" , "2020-05-18"},
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
 * @summary Removes a data source.
 *
 * @param request DeleteDataSourceRequest
 * @return DeleteDataSourceResponse
 */
DeleteDataSourceResponse Client::deleteDataSource(const DeleteDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataSourceWithOptions(request, runtime);
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
    body["FileId"] = request.fileId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteFile"},
    {"version" , "2020-05-18"},
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
 * @param request DeleteFolderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFolderResponse
 */
DeleteFolderResponse Client::deleteFolderWithOptions(const DeleteFolderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFolderId()) {
    body["FolderId"] = request.folderId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteFolder"},
    {"version" , "2020-05-18"},
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
 * @param request DeleteFolderRequest
 * @return DeleteFolderResponse
 */
DeleteFolderResponse Client::deleteFolder(const DeleteFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFolderWithOptions(request, runtime);
}

/**
 * @summary Removes a table from a specified category.
 *
 * @param request DeleteFromMetaCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFromMetaCategoryResponse
 */
DeleteFromMetaCategoryResponse Client::deleteFromMetaCategoryWithOptions(const DeleteFromMetaCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.categoryId();
  }

  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.tableGuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFromMetaCategory"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFromMetaCategoryResponse>();
}

/**
 * @summary Removes a table from a specified category.
 *
 * @param request DeleteFromMetaCategoryRequest
 * @return DeleteFromMetaCategoryResponse
 */
DeleteFromMetaCategoryResponse Client::deleteFromMetaCategory(const DeleteFromMetaCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFromMetaCategoryWithOptions(request, runtime);
}

/**
 * @summary Delete lineage, supports deleting user-defined lineage relationships
 *
 * @description This API is currently in the trial phase. Users who wish to experience it can apply, and after the administrator adds them to the trial list, they can call this API.
 *
 * @param request DeleteLineageRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLineageRelationResponse
 */
DeleteLineageRelationResponse Client::deleteLineageRelationWithOptions(const DeleteLineageRelationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestEntityQualifiedName()) {
    query["DestEntityQualifiedName"] = request.destEntityQualifiedName();
  }

  if (!!request.hasRelationshipGuid()) {
    query["RelationshipGuid"] = request.relationshipGuid();
  }

  if (!!request.hasRelationshipType()) {
    query["RelationshipType"] = request.relationshipType();
  }

  if (!!request.hasSrcEntityQualifiedName()) {
    query["SrcEntityQualifiedName"] = request.srcEntityQualifiedName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLineageRelation"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLineageRelationResponse>();
}

/**
 * @summary Delete lineage, supports deleting user-defined lineage relationships
 *
 * @description This API is currently in the trial phase. Users who wish to experience it can apply, and after the administrator adds them to the trial list, they can call this API.
 *
 * @param request DeleteLineageRelationRequest
 * @return DeleteLineageRelationResponse
 */
DeleteLineageRelationResponse Client::deleteLineageRelation(const DeleteLineageRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLineageRelationWithOptions(request, runtime);
}

/**
 * @summary Deletes a category.
 *
 * @param request DeleteMetaCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMetaCategoryResponse
 */
DeleteMetaCategoryResponse Client::deleteMetaCategoryWithOptions(const DeleteMetaCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMetaCategory"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMetaCategoryResponse>();
}

/**
 * @summary Deletes a category.
 *
 * @param request DeleteMetaCategoryRequest
 * @return DeleteMetaCategoryResponse
 */
DeleteMetaCategoryResponse Client::deleteMetaCategory(const DeleteMetaCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMetaCategoryWithOptions(request, runtime);
}

/**
 * @summary Deletes a collection.
 *
 * @param request DeleteMetaCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMetaCollectionResponse
 */
DeleteMetaCollectionResponse Client::deleteMetaCollectionWithOptions(const DeleteMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifiedName()) {
    query["QualifiedName"] = request.qualifiedName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMetaCollection"},
    {"version" , "2020-05-18"},
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
 * @summary Deletes a collection.
 *
 * @param request DeleteMetaCollectionRequest
 * @return DeleteMetaCollectionResponse
 */
DeleteMetaCollectionResponse Client::deleteMetaCollection(const DeleteMetaCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMetaCollectionWithOptions(request, runtime);
}

/**
 * @summary Deletes an entity from a collection.
 *
 * @param request DeleteMetaCollectionEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMetaCollectionEntityResponse
 */
DeleteMetaCollectionEntityResponse Client::deleteMetaCollectionEntityWithOptions(const DeleteMetaCollectionEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollectionQualifiedName()) {
    query["CollectionQualifiedName"] = request.collectionQualifiedName();
  }

  if (!!request.hasEntityQualifiedName()) {
    query["EntityQualifiedName"] = request.entityQualifiedName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMetaCollectionEntity"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMetaCollectionEntityResponse>();
}

/**
 * @summary Deletes an entity from a collection.
 *
 * @param request DeleteMetaCollectionEntityRequest
 * @return DeleteMetaCollectionEntityResponse
 */
DeleteMetaCollectionEntityResponse Client::deleteMetaCollectionEntity(const DeleteMetaCollectionEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMetaCollectionEntityWithOptions(request, runtime);
}

/**
 * @summary Removes a user from a DataWorks workspace.
 *
 * @param request DeleteProjectMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProjectMemberResponse
 */
DeleteProjectMemberResponse Client::deleteProjectMemberWithOptions(const DeleteProjectMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProjectMember"},
    {"version" , "2020-05-18"},
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
 * @summary Removes a user from a DataWorks workspace.
 *
 * @param request DeleteProjectMemberRequest
 * @return DeleteProjectMemberResponse
 */
DeleteProjectMemberResponse Client::deleteProjectMember(const DeleteProjectMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProjectMemberWithOptions(request, runtime);
}

/**
 * @summary Deletes a partition filter expression.
 *
 * @param request DeleteQualityEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQualityEntityResponse
 */
DeleteQualityEntityResponse Client::deleteQualityEntityWithOptions(const DeleteQualityEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEntityId()) {
    body["EntityId"] = request.entityId();
  }

  if (!!request.hasEnvType()) {
    body["EnvType"] = request.envType();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteQualityEntity"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQualityEntityResponse>();
}

/**
 * @summary Deletes a partition filter expression.
 *
 * @param request DeleteQualityEntityRequest
 * @return DeleteQualityEntityResponse
 */
DeleteQualityEntityResponse Client::deleteQualityEntity(const DeleteQualityEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQualityEntityWithOptions(request, runtime);
}

/**
 * @summary Deletes a subscriber of a partition filter expression.
 *
 * @description In Data Quality, you must configure monitoring rules based on a partition filter expression. Data Quality uses these rules to detect changes in source data and dirty data generated during the process of extract, transform, and load (ETL). This way, you can prevent tasks from producing unexpected dirty data that affects the smooth running of tasks and business decision-making. You can go to the Manage Subscriptions page to add subscribers for a partition filter expression. When the monitoring rule that is created based on the partition filter expression is triggered, the subscribers can receive notifications and troubleshoot errors at the earliest opportunity. For more information, see [Configure monitoring rules](https://help.aliyun.com/document_detail/73690.html).
 *
 * @param request DeleteQualityFollowerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQualityFollowerResponse
 */
DeleteQualityFollowerResponse Client::deleteQualityFollowerWithOptions(const DeleteQualityFollowerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFollowerId()) {
    body["FollowerId"] = request.followerId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteQualityFollower"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQualityFollowerResponse>();
}

/**
 * @summary Deletes a subscriber of a partition filter expression.
 *
 * @description In Data Quality, you must configure monitoring rules based on a partition filter expression. Data Quality uses these rules to detect changes in source data and dirty data generated during the process of extract, transform, and load (ETL). This way, you can prevent tasks from producing unexpected dirty data that affects the smooth running of tasks and business decision-making. You can go to the Manage Subscriptions page to add subscribers for a partition filter expression. When the monitoring rule that is created based on the partition filter expression is triggered, the subscribers can receive notifications and troubleshoot errors at the earliest opportunity. For more information, see [Configure monitoring rules](https://help.aliyun.com/document_detail/73690.html).
 *
 * @param request DeleteQualityFollowerRequest
 * @return DeleteQualityFollowerResponse
 */
DeleteQualityFollowerResponse Client::deleteQualityFollower(const DeleteQualityFollowerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQualityFollowerWithOptions(request, runtime);
}

/**
 * @param request DeleteQualityRelativeNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQualityRelativeNodeResponse
 */
DeleteQualityRelativeNodeResponse Client::deleteQualityRelativeNodeWithOptions(const DeleteQualityRelativeNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnvType()) {
    body["EnvType"] = request.envType();
  }

  if (!!request.hasMatchExpression()) {
    body["MatchExpression"] = request.matchExpression();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  if (!!request.hasTargetNodeProjectId()) {
    body["TargetNodeProjectId"] = request.targetNodeProjectId();
  }

  if (!!request.hasTargetNodeProjectName()) {
    body["TargetNodeProjectName"] = request.targetNodeProjectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteQualityRelativeNode"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQualityRelativeNodeResponse>();
}

/**
 * @param request DeleteQualityRelativeNodeRequest
 * @return DeleteQualityRelativeNodeResponse
 */
DeleteQualityRelativeNodeResponse Client::deleteQualityRelativeNode(const DeleteQualityRelativeNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQualityRelativeNodeWithOptions(request, runtime);
}

/**
 * @summary Deletes a monitoring rule.
 *
 * @param request DeleteQualityRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteQualityRuleResponse
 */
DeleteQualityRuleResponse Client::deleteQualityRuleWithOptions(const DeleteQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  if (!!request.hasRuleId()) {
    body["RuleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteQualityRule"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteQualityRuleResponse>();
}

/**
 * @summary Deletes a monitoring rule.
 *
 * @param request DeleteQualityRuleRequest
 * @return DeleteQualityRuleResponse
 */
DeleteQualityRuleResponse Client::deleteQualityRule(const DeleteQualityRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteQualityRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes sensitive field types.
 *
 * @param request DeleteRecognizeRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecognizeRuleResponse
 */
DeleteRecognizeRuleResponse Client::deleteRecognizeRuleWithOptions(const DeleteRecognizeRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSensitiveId()) {
    body["SensitiveId"] = request.sensitiveId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteRecognizeRule"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRecognizeRuleResponse>();
}

/**
 * @summary Deletes sensitive field types.
 *
 * @param request DeleteRecognizeRuleRequest
 * @return DeleteRecognizeRuleResponse
 */
DeleteRecognizeRuleResponse Client::deleteRecognizeRule(const DeleteRecognizeRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRecognizeRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom alert rule.
 *
 * @param request DeleteRemindRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRemindResponse
 */
DeleteRemindResponse Client::deleteRemindWithOptions(const DeleteRemindRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRemindId()) {
    body["RemindId"] = request.remindId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteRemind"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRemindResponse>();
}

/**
 * @summary Deletes a custom alert rule.
 *
 * @param request DeleteRemindRequest
 * @return DeleteRemindResponse
 */
DeleteRemindResponse Client::deleteRemind(const DeleteRemindRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRemindWithOptions(request, runtime);
}

/**
 * @param request DeleteTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTableResponse
 */
DeleteTableResponse Client::deleteTableWithOptions(const DeleteTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppGuid()) {
    query["AppGuid"] = request.appGuid();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.envType();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
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
    {"action" , "DeleteTable"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTableResponse>();
}

/**
 * @param request DeleteTableRequest
 * @return DeleteTableResponse
 */
DeleteTableResponse Client::deleteTable(const DeleteTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTableWithOptions(request, runtime);
}

/**
 * @summary Deletes a table level. This operation will be replaced soon. We recommend that you do not call this operation.
 *
 * @param request DeleteTableLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTableLevelResponse
 */
DeleteTableLevelResponse Client::deleteTableLevelWithOptions(const DeleteTableLevelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLevelId()) {
    query["LevelId"] = request.levelId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTableLevel"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTableLevelResponse>();
}

/**
 * @summary Deletes a table level. This operation will be replaced soon. We recommend that you do not call this operation.
 *
 * @param request DeleteTableLevelRequest
 * @return DeleteTableLevelResponse
 */
DeleteTableLevelResponse Client::deleteTableLevel(const DeleteTableLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTableLevelWithOptions(request, runtime);
}

/**
 * @summary Deletes a table theme. This operation will be replaced soon. We recommend that you do not call this operation.
 *
 * @param request DeleteTableThemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTableThemeResponse
 */
DeleteTableThemeResponse Client::deleteTableThemeWithOptions(const DeleteTableThemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasThemeId()) {
    query["ThemeId"] = request.themeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTableTheme"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTableThemeResponse>();
}

/**
 * @summary Deletes a table theme. This operation will be replaced soon. We recommend that you do not call this operation.
 *
 * @param request DeleteTableThemeRequest
 * @return DeleteTableThemeResponse
 */
DeleteTableThemeResponse Client::deleteTableTheme(const DeleteTableThemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTableThemeWithOptions(request, runtime);
}

/**
 * @summary Deploys a real-time synchronization task.
 *
 * @param request DeployDISyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployDISyncTaskResponse
 */
DeployDISyncTaskResponse Client::deployDISyncTaskWithOptions(const DeployDISyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.fileId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeployDISyncTask"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeployDISyncTaskResponse>();
}

/**
 * @summary Deploys a real-time synchronization task.
 *
 * @param request DeployDISyncTaskRequest
 * @return DeployDISyncTaskResponse
 */
DeployDISyncTaskResponse Client::deployDISyncTask(const DeployDISyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deployDISyncTaskWithOptions(request, runtime);
}

/**
 * @summary Deploys a file to the production environment.
 *
 * @param request DeployFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployFileResponse
 */
DeployFileResponse Client::deployFileWithOptions(const DeployFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.comment();
  }

  if (!!request.hasFileId()) {
    body["FileId"] = request.fileId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeployFile"},
    {"version" , "2020-05-18"},
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
 * @summary Deploys a file to the production environment.
 *
 * @param request DeployFileRequest
 * @return DeployFileResponse
 */
DeployFileResponse Client::deployFile(const DeployFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deployFileWithOptions(request, runtime);
}

/**
 * @summary Masks data.
 *
 * @param request DesensitizeDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DesensitizeDataResponse
 */
DesensitizeDataResponse Client::desensitizeDataWithOptions(const DesensitizeDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DesensitizeData"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DesensitizeDataResponse>();
}

/**
 * @summary Masks data.
 *
 * @param request DesensitizeDataRequest
 * @return DesensitizeDataResponse
 */
DesensitizeDataResponse Client::desensitizeData(const DesensitizeDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return desensitizeDataWithOptions(request, runtime);
}

/**
 * @summary Adds or modifies a data masking rule.
 *
 * @param tmpReq DsgDesensPlanAddOrUpdateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DsgDesensPlanAddOrUpdateResponse
 */
DsgDesensPlanAddOrUpdateResponse Client::dsgDesensPlanAddOrUpdateWithOptions(const DsgDesensPlanAddOrUpdateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DsgDesensPlanAddOrUpdateShrinkRequest request = DsgDesensPlanAddOrUpdateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDesensRules()) {
    request.setDesensRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.desensRules(), "DesensRules", "json"));
  }

  json query = {};
  if (!!request.hasDesensRulesShrink()) {
    query["DesensRules"] = request.desensRulesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DsgDesensPlanAddOrUpdate"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DsgDesensPlanAddOrUpdateResponse>();
}

/**
 * @summary Adds or modifies a data masking rule.
 *
 * @param request DsgDesensPlanAddOrUpdateRequest
 * @return DsgDesensPlanAddOrUpdateResponse
 */
DsgDesensPlanAddOrUpdateResponse Client::dsgDesensPlanAddOrUpdate(const DsgDesensPlanAddOrUpdateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dsgDesensPlanAddOrUpdateWithOptions(request, runtime);
}

/**
 * @summary Deletes a data masking rule created in Data Security Guard.
 *
 * @param tmpReq DsgDesensPlanDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DsgDesensPlanDeleteResponse
 */
DsgDesensPlanDeleteResponse Client::dsgDesensPlanDeleteWithOptions(const DsgDesensPlanDeleteRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DsgDesensPlanDeleteShrinkRequest request = DsgDesensPlanDeleteShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ids(), "Ids", "json"));
  }

  json query = {};
  if (!!request.hasIdsShrink()) {
    query["Ids"] = request.idsShrink();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.sceneCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DsgDesensPlanDelete"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DsgDesensPlanDeleteResponse>();
}

/**
 * @summary Deletes a data masking rule created in Data Security Guard.
 *
 * @param request DsgDesensPlanDeleteRequest
 * @return DsgDesensPlanDeleteResponse
 */
DsgDesensPlanDeleteResponse Client::dsgDesensPlanDelete(const DsgDesensPlanDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dsgDesensPlanDeleteWithOptions(request, runtime);
}

/**
 * @summary Queries a list of data masking rules.
 *
 * @param request DsgDesensPlanQueryListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DsgDesensPlanQueryListResponse
 */
DsgDesensPlanQueryListResponse Client::dsgDesensPlanQueryListWithOptions(const DsgDesensPlanQueryListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DsgDesensPlanQueryList"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DsgDesensPlanQueryListResponse>();
}

/**
 * @summary Queries a list of data masking rules.
 *
 * @param request DsgDesensPlanQueryListRequest
 * @return DsgDesensPlanQueryListResponse
 */
DsgDesensPlanQueryListResponse Client::dsgDesensPlanQueryList(const DsgDesensPlanQueryListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dsgDesensPlanQueryListWithOptions(request, runtime);
}

/**
 * @summary Modifies the status of a data masking rule.
 *
 * @param tmpReq DsgDesensPlanUpdateStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DsgDesensPlanUpdateStatusResponse
 */
DsgDesensPlanUpdateStatusResponse Client::dsgDesensPlanUpdateStatusWithOptions(const DsgDesensPlanUpdateStatusRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DsgDesensPlanUpdateStatusShrinkRequest request = DsgDesensPlanUpdateStatusShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ids(), "Ids", "json"));
  }

  json query = {};
  if (!!request.hasIdsShrink()) {
    query["Ids"] = request.idsShrink();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.sceneCode();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DsgDesensPlanUpdateStatus"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DsgDesensPlanUpdateStatusResponse>();
}

/**
 * @summary Modifies the status of a data masking rule.
 *
 * @param request DsgDesensPlanUpdateStatusRequest
 * @return DsgDesensPlanUpdateStatusResponse
 */
DsgDesensPlanUpdateStatusResponse Client::dsgDesensPlanUpdateStatus(const DsgDesensPlanUpdateStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dsgDesensPlanUpdateStatusWithOptions(request, runtime);
}

/**
 * @summary Queries a list of compute engines of different types in the current tenant.
 *
 * @param request DsgPlatformQueryProjectsAndSchemaFromMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DsgPlatformQueryProjectsAndSchemaFromMetaResponse
 */
DsgPlatformQueryProjectsAndSchemaFromMetaResponse Client::dsgPlatformQueryProjectsAndSchemaFromMetaWithOptions(const DsgPlatformQueryProjectsAndSchemaFromMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DsgPlatformQueryProjectsAndSchemaFromMeta"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DsgPlatformQueryProjectsAndSchemaFromMetaResponse>();
}

/**
 * @summary Queries a list of compute engines of different types in the current tenant.
 *
 * @param request DsgPlatformQueryProjectsAndSchemaFromMetaRequest
 * @return DsgPlatformQueryProjectsAndSchemaFromMetaResponse
 */
DsgPlatformQueryProjectsAndSchemaFromMetaResponse Client::dsgPlatformQueryProjectsAndSchemaFromMeta(const DsgPlatformQueryProjectsAndSchemaFromMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dsgPlatformQueryProjectsAndSchemaFromMetaWithOptions(request, runtime);
}

/**
 * @summary Queries a list of available sensitive field type templates and the data masking rules supported by the templates. You can refer to the response parameters of this operation to configure a data masking rule.
 *
 * @param request DsgQueryDefaultTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DsgQueryDefaultTemplatesResponse
 */
DsgQueryDefaultTemplatesResponse Client::dsgQueryDefaultTemplatesWithOptions(const DsgQueryDefaultTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DsgQueryDefaultTemplates"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DsgQueryDefaultTemplatesResponse>();
}

/**
 * @summary Queries a list of available sensitive field type templates and the data masking rules supported by the templates. You can refer to the response parameters of this operation to configure a data masking rule.
 *
 * @param request DsgQueryDefaultTemplatesRequest
 * @return DsgQueryDefaultTemplatesResponse
 */
DsgQueryDefaultTemplatesResponse Client::dsgQueryDefaultTemplates(const DsgQueryDefaultTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dsgQueryDefaultTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the identification results of sensitive data.
 *
 * @description The query capability of the API operation is similar to the query feature in Data Security Guard in the DataWorks console. The API operation can be used to query the identification results of sensitive data of a tenant based on the association with the tenant ID.
 * *   You can search for a specific identification result based on filter conditions such as data source type and workspace.
 * *   You can sort the identification results of sensitive data of a tenant based on the values of a field in ascending or descending order.
 * *   This operation supports paged query.
 *
 * @param request DsgQuerySensResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DsgQuerySensResultResponse
 */
DsgQuerySensResultResponse Client::dsgQuerySensResultWithOptions(const DsgQuerySensResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCol()) {
    body["Col"] = request.col();
  }

  if (!!request.hasDbType()) {
    body["DbType"] = request.dbType();
  }

  if (!!request.hasLevel()) {
    body["Level"] = request.level();
  }

  if (!!request.hasNodeName()) {
    body["NodeName"] = request.nodeName();
  }

  if (!!request.hasOrder()) {
    body["Order"] = request.order();
  }

  if (!!request.hasOrderField()) {
    body["OrderField"] = request.orderField();
  }

  if (!!request.hasPageNo()) {
    body["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  if (!!request.hasSchemaName()) {
    body["SchemaName"] = request.schemaName();
  }

  if (!!request.hasSensStatus()) {
    body["SensStatus"] = request.sensStatus();
  }

  if (!!request.hasSensitiveId()) {
    body["SensitiveId"] = request.sensitiveId();
  }

  if (!!request.hasSensitiveName()) {
    body["SensitiveName"] = request.sensitiveName();
  }

  if (!!request.hasTable()) {
    body["Table"] = request.table();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DsgQuerySensResult"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DsgQuerySensResultResponse>();
}

/**
 * @summary Queries the identification results of sensitive data.
 *
 * @description The query capability of the API operation is similar to the query feature in Data Security Guard in the DataWorks console. The API operation can be used to query the identification results of sensitive data of a tenant based on the association with the tenant ID.
 * *   You can search for a specific identification result based on filter conditions such as data source type and workspace.
 * *   You can sort the identification results of sensitive data of a tenant based on the values of a field in ascending or descending order.
 * *   This operation supports paged query.
 *
 * @param request DsgQuerySensResultRequest
 * @return DsgQuerySensResultResponse
 */
DsgQuerySensResultResponse Client::dsgQuerySensResult(const DsgQuerySensResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dsgQuerySensResultWithOptions(request, runtime);
}

/**
 * @summary Starts a sensitive data identification task in Data Security Guard.
 *
 * @param tmpReq DsgRunSensIdentifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DsgRunSensIdentifyResponse
 */
DsgRunSensIdentifyResponse Client::dsgRunSensIdentifyWithOptions(const DsgRunSensIdentifyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DsgRunSensIdentifyShrinkRequest request = DsgRunSensIdentifyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEsMetaParams()) {
    request.setEsMetaParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.esMetaParams(), "EsMetaParams", "json"));
  }

  json body = {};
  if (!!request.hasEsMetaParamsShrink()) {
    body["EsMetaParams"] = request.esMetaParamsShrink();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DsgRunSensIdentify"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DsgRunSensIdentifyResponse>();
}

/**
 * @summary Starts a sensitive data identification task in Data Security Guard.
 *
 * @param request DsgRunSensIdentifyRequest
 * @return DsgRunSensIdentifyResponse
 */
DsgRunSensIdentifyResponse Client::dsgRunSensIdentify(const DsgRunSensIdentifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dsgRunSensIdentifyWithOptions(request, runtime);
}

/**
 * @summary Adds or modifies a level-2 data masking scenario.
 *
 * @param tmpReq DsgSceneAddOrUpdateSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DsgSceneAddOrUpdateSceneResponse
 */
DsgSceneAddOrUpdateSceneResponse Client::dsgSceneAddOrUpdateSceneWithOptions(const DsgSceneAddOrUpdateSceneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DsgSceneAddOrUpdateSceneShrinkRequest request = DsgSceneAddOrUpdateSceneShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasScenes()) {
    request.setScenesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.scenes(), "scenes", "json"));
  }

  json query = {};
  if (!!request.hasScenesShrink()) {
    query["scenes"] = request.scenesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DsgSceneAddOrUpdateScene"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DsgSceneAddOrUpdateSceneResponse>();
}

/**
 * @summary Adds or modifies a level-2 data masking scenario.
 *
 * @param request DsgSceneAddOrUpdateSceneRequest
 * @return DsgSceneAddOrUpdateSceneResponse
 */
DsgSceneAddOrUpdateSceneResponse Client::dsgSceneAddOrUpdateScene(const DsgSceneAddOrUpdateSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dsgSceneAddOrUpdateSceneWithOptions(request, runtime);
}

/**
 * @summary Queries a list of data masking scenarios.
 *
 * @param request DsgSceneQuerySceneListByNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DsgSceneQuerySceneListByNameResponse
 */
DsgSceneQuerySceneListByNameResponse Client::dsgSceneQuerySceneListByNameWithOptions(const DsgSceneQuerySceneListByNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DsgSceneQuerySceneListByName"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DsgSceneQuerySceneListByNameResponse>();
}

/**
 * @summary Queries a list of data masking scenarios.
 *
 * @param request DsgSceneQuerySceneListByNameRequest
 * @return DsgSceneQuerySceneListByNameResponse
 */
DsgSceneQuerySceneListByNameResponse Client::dsgSceneQuerySceneListByName(const DsgSceneQuerySceneListByNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dsgSceneQuerySceneListByNameWithOptions(request, runtime);
}

/**
 * @summary Deletes a level-2 data masking scenario created in Data Security Guard.
 *
 * @param tmpReq DsgScenedDeleteSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DsgScenedDeleteSceneResponse
 */
DsgScenedDeleteSceneResponse Client::dsgScenedDeleteSceneWithOptions(const DsgScenedDeleteSceneRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DsgScenedDeleteSceneShrinkRequest request = DsgScenedDeleteSceneShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ids(), "Ids", "json"));
  }

  json query = {};
  if (!!request.hasIdsShrink()) {
    query["Ids"] = request.idsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DsgScenedDeleteScene"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DsgScenedDeleteSceneResponse>();
}

/**
 * @summary Deletes a level-2 data masking scenario created in Data Security Guard.
 *
 * @param request DsgScenedDeleteSceneRequest
 * @return DsgScenedDeleteSceneResponse
 */
DsgScenedDeleteSceneResponse Client::dsgScenedDeleteScene(const DsgScenedDeleteSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dsgScenedDeleteSceneWithOptions(request, runtime);
}

/**
 * @summary Stops a sensitive data identification task.
 *
 * @param request DsgStopSensIdentifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DsgStopSensIdentifyResponse
 */
DsgStopSensIdentifyResponse Client::dsgStopSensIdentifyWithOptions(const DsgStopSensIdentifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DsgStopSensIdentify"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DsgStopSensIdentifyResponse>();
}

/**
 * @summary Stops a sensitive data identification task.
 *
 * @param request DsgStopSensIdentifyRequest
 * @return DsgStopSensIdentifyResponse
 */
DsgStopSensIdentifyResponse Client::dsgStopSensIdentify(const DsgStopSensIdentifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dsgStopSensIdentifyWithOptions(request, runtime);
}

/**
 * @summary Adds or modifies a user group.
 *
 * @param tmpReq DsgUserGroupAddOrUpdateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DsgUserGroupAddOrUpdateResponse
 */
DsgUserGroupAddOrUpdateResponse Client::dsgUserGroupAddOrUpdateWithOptions(const DsgUserGroupAddOrUpdateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DsgUserGroupAddOrUpdateShrinkRequest request = DsgUserGroupAddOrUpdateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserGroups()) {
    request.setUserGroupsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userGroups(), "UserGroups", "json"));
  }

  json query = {};
  if (!!request.hasUserGroupsShrink()) {
    query["UserGroups"] = request.userGroupsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DsgUserGroupAddOrUpdate"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DsgUserGroupAddOrUpdateResponse>();
}

/**
 * @summary Adds or modifies a user group.
 *
 * @param request DsgUserGroupAddOrUpdateRequest
 * @return DsgUserGroupAddOrUpdateResponse
 */
DsgUserGroupAddOrUpdateResponse Client::dsgUserGroupAddOrUpdate(const DsgUserGroupAddOrUpdateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dsgUserGroupAddOrUpdateWithOptions(request, runtime);
}

/**
 * @summary Deletes a user group configured in Data Security Guard.
 *
 * @param tmpReq DsgUserGroupDeleteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DsgUserGroupDeleteResponse
 */
DsgUserGroupDeleteResponse Client::dsgUserGroupDeleteWithOptions(const DsgUserGroupDeleteRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DsgUserGroupDeleteShrinkRequest request = DsgUserGroupDeleteShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ids(), "Ids", "json"));
  }

  json query = {};
  if (!!request.hasIdsShrink()) {
    query["Ids"] = request.idsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DsgUserGroupDelete"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DsgUserGroupDeleteResponse>();
}

/**
 * @summary Deletes a user group configured in Data Security Guard.
 *
 * @param request DsgUserGroupDeleteRequest
 * @return DsgUserGroupDeleteResponse
 */
DsgUserGroupDeleteResponse Client::dsgUserGroupDelete(const DsgUserGroupDeleteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dsgUserGroupDeleteWithOptions(request, runtime);
}

/**
 * @summary Queries a list of MaxCompute roles that can be selected by the members of a user group when the user group is created or modified by the tenant in Data Security Guard.
 *
 * @param request DsgUserGroupGetOdpsRoleGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DsgUserGroupGetOdpsRoleGroupsResponse
 */
DsgUserGroupGetOdpsRoleGroupsResponse Client::dsgUserGroupGetOdpsRoleGroupsWithOptions(const DsgUserGroupGetOdpsRoleGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DsgUserGroupGetOdpsRoleGroups"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DsgUserGroupGetOdpsRoleGroupsResponse>();
}

/**
 * @summary Queries a list of MaxCompute roles that can be selected by the members of a user group when the user group is created or modified by the tenant in Data Security Guard.
 *
 * @param request DsgUserGroupGetOdpsRoleGroupsRequest
 * @return DsgUserGroupGetOdpsRoleGroupsResponse
 */
DsgUserGroupGetOdpsRoleGroupsResponse Client::dsgUserGroupGetOdpsRoleGroups(const DsgUserGroupGetOdpsRoleGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dsgUserGroupGetOdpsRoleGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of user groups in Data Security Guard.
 *
 * @param request DsgUserGroupQueryListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DsgUserGroupQueryListResponse
 */
DsgUserGroupQueryListResponse Client::dsgUserGroupQueryListWithOptions(const DsgUserGroupQueryListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DsgUserGroupQueryList"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DsgUserGroupQueryListResponse>();
}

/**
 * @summary Queries a list of user groups in Data Security Guard.
 *
 * @param request DsgUserGroupQueryListRequest
 * @return DsgUserGroupQueryListResponse
 */
DsgUserGroupQueryListResponse Client::dsgUserGroupQueryList(const DsgUserGroupQueryListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dsgUserGroupQueryListWithOptions(request, runtime);
}

/**
 * @summary Queries a list of users or roles of the current tenant.
 *
 * @param request DsgUserGroupQueryUserListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DsgUserGroupQueryUserListResponse
 */
DsgUserGroupQueryUserListResponse Client::dsgUserGroupQueryUserListWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DsgUserGroupQueryUserList"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DsgUserGroupQueryUserListResponse>();
}

/**
 * @summary Queries a list of users or roles of the current tenant.
 *
 * @return DsgUserGroupQueryUserListResponse
 */
DsgUserGroupQueryUserListResponse Client::dsgUserGroupQueryUserList() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dsgUserGroupQueryUserListWithOptions(runtime);
}

/**
 * @summary Adds or modifies a data masking whitelist.
 *
 * @param tmpReq DsgWhiteListAddOrUpdateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DsgWhiteListAddOrUpdateResponse
 */
DsgWhiteListAddOrUpdateResponse Client::dsgWhiteListAddOrUpdateWithOptions(const DsgWhiteListAddOrUpdateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DsgWhiteListAddOrUpdateShrinkRequest request = DsgWhiteListAddOrUpdateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWhiteLists()) {
    request.setWhiteListsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.whiteLists(), "WhiteLists", "json"));
  }

  json query = {};
  if (!!request.hasWhiteListsShrink()) {
    query["WhiteLists"] = request.whiteListsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DsgWhiteListAddOrUpdate"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DsgWhiteListAddOrUpdateResponse>();
}

/**
 * @summary Adds or modifies a data masking whitelist.
 *
 * @param request DsgWhiteListAddOrUpdateRequest
 * @return DsgWhiteListAddOrUpdateResponse
 */
DsgWhiteListAddOrUpdateResponse Client::dsgWhiteListAddOrUpdate(const DsgWhiteListAddOrUpdateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dsgWhiteListAddOrUpdateWithOptions(request, runtime);
}

/**
 * @summary Deletes a data masking whitelist configured in Data Security Guard.
 *
 * @param tmpReq DsgWhiteListDeleteListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DsgWhiteListDeleteListResponse
 */
DsgWhiteListDeleteListResponse Client::dsgWhiteListDeleteListWithOptions(const DsgWhiteListDeleteListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DsgWhiteListDeleteListShrinkRequest request = DsgWhiteListDeleteListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ids(), "Ids", "json"));
  }

  json query = {};
  if (!!request.hasIdsShrink()) {
    query["Ids"] = request.idsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DsgWhiteListDeleteList"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DsgWhiteListDeleteListResponse>();
}

/**
 * @summary Deletes a data masking whitelist configured in Data Security Guard.
 *
 * @param request DsgWhiteListDeleteListRequest
 * @return DsgWhiteListDeleteListResponse
 */
DsgWhiteListDeleteListResponse Client::dsgWhiteListDeleteList(const DsgWhiteListDeleteListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dsgWhiteListDeleteListWithOptions(request, runtime);
}

/**
 * @summary Queries a data masking whitelist.
 *
 * @param request DsgWhiteListQueryListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DsgWhiteListQueryListResponse
 */
DsgWhiteListQueryListResponse Client::dsgWhiteListQueryListWithOptions(const DsgWhiteListQueryListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DsgWhiteListQueryList"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DsgWhiteListQueryListResponse>();
}

/**
 * @summary Queries a data masking whitelist.
 *
 * @param request DsgWhiteListQueryListRequest
 * @return DsgWhiteListQueryListResponse
 */
DsgWhiteListQueryListResponse Client::dsgWhiteListQueryList(const DsgWhiteListQueryListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dsgWhiteListQueryListWithOptions(request, runtime);
}

/**
 * @summary Edits a sensitive field that is defined based on the category and sensitivity level of data in Data Security Guard.
 *
 * @param request EditRecognizeRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EditRecognizeRuleResponse
 */
EditRecognizeRuleResponse Client::editRecognizeRuleWithOptions(const EditRecognizeRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountName()) {
    body["AccountName"] = request.accountName();
  }

  if (!!request.hasColExclude()) {
    body["ColExclude"] = request.colExclude();
  }

  if (!!request.hasColScan()) {
    body["ColScan"] = request.colScan();
  }

  if (!!request.hasCommentScan()) {
    body["CommentScan"] = request.commentScan();
  }

  if (!!request.hasContentScan()) {
    body["ContentScan"] = request.contentScan();
  }

  if (!!request.hasHitThreshold()) {
    body["HitThreshold"] = request.hitThreshold();
  }

  if (!!request.hasLevelName()) {
    body["LevelName"] = request.levelName();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasNodeParent()) {
    body["NodeParent"] = request.nodeParent();
  }

  if (!!request.hasOperationType()) {
    body["OperationType"] = request.operationType();
  }

  if (!!request.hasRecognizeRules()) {
    body["RecognizeRules"] = request.recognizeRules();
  }

  if (!!request.hasRecognizeRulesType()) {
    body["RecognizeRulesType"] = request.recognizeRulesType();
  }

  if (!!request.hasSensitiveDescription()) {
    body["SensitiveDescription"] = request.sensitiveDescription();
  }

  if (!!request.hasSensitiveId()) {
    body["SensitiveId"] = request.sensitiveId();
  }

  if (!!request.hasSensitiveName()) {
    body["SensitiveName"] = request.sensitiveName();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasLevel()) {
    body["level"] = request.level();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EditRecognizeRule"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EditRecognizeRuleResponse>();
}

/**
 * @summary Edits a sensitive field that is defined based on the category and sensitivity level of data in Data Security Guard.
 *
 * @param request EditRecognizeRuleRequest
 * @return EditRecognizeRuleResponse
 */
EditRecognizeRuleResponse Client::editRecognizeRule(const EditRecognizeRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return editRecognizeRuleWithOptions(request, runtime);
}

/**
 * @param request EstablishRelationTableToBusinessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EstablishRelationTableToBusinessResponse
 */
EstablishRelationTableToBusinessResponse Client::establishRelationTableToBusinessWithOptions(const EstablishRelationTableToBusinessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessId()) {
    body["BusinessId"] = request.businessId();
  }

  if (!!request.hasFolderId()) {
    body["FolderId"] = request.folderId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  if (!!request.hasTableGuid()) {
    body["TableGuid"] = request.tableGuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "EstablishRelationTableToBusiness"},
    {"version" , "2020-05-18"},
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
 * @param request EstablishRelationTableToBusinessRequest
 * @return EstablishRelationTableToBusinessResponse
 */
EstablishRelationTableToBusinessResponse Client::establishRelationTableToBusiness(const EstablishRelationTableToBusinessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return establishRelationTableToBusinessWithOptions(request, runtime);
}

/**
 * @summary Exports a list of data sources.
 *
 * @param request ExportDataSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportDataSourcesResponse
 */
ExportDataSourcesResponse Client::exportDataSourcesWithOptions(const ExportDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportDataSources"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportDataSourcesResponse>();
}

/**
 * @summary Exports a list of data sources.
 *
 * @param request ExportDataSourcesRequest
 * @return ExportDataSourcesResponse
 */
ExportDataSourcesResponse Client::exportDataSources(const ExportDataSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportDataSourcesWithOptions(request, runtime);
}

/**
 * @summary Generates an ID for an asynchronous thread that is used to create a synchronization task in Data Integration.
 *
 * @description DataWorks allows you to use the [CreateDISyncTask](https://help.aliyun.com/document_detail/278725.html) operation to directly create a batch synchronization task in Data Integration. To create a real-time synchronization task or another type of synchronization task, you must first call the [GenerateDISyncTaskConfigForCreating](https://help.aliyun.com/document_detail/383463.html) operation to generate the ID of an asynchronous thread and call the [QueryDISyncTaskConfigProcessResult](https://help.aliyun.com/document_detail/383465.html) operation to obtain the asynchronously generated parameters based on the ID. Then, you can use the parameters as request parameters of [CreateDISyncTask](https://help.aliyun.com/document_detail/278725.html) and call the [CreateDISyncTask](https://help.aliyun.com/document_detail/278725.html) operation to create a real-time synchronization task or another type of synchronization task. DataWorks allows you to create real-time synchronization tasks and other types of synchronization tasks in Data Integration only in asynchronous mode.
 *
 * @param request GenerateDISyncTaskConfigForCreatingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateDISyncTaskConfigForCreatingResponse
 */
GenerateDISyncTaskConfigForCreatingResponse Client::generateDISyncTaskConfigForCreatingWithOptions(const GenerateDISyncTaskConfigForCreatingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasTaskParam()) {
    query["TaskParam"] = request.taskParam();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateDISyncTaskConfigForCreating"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateDISyncTaskConfigForCreatingResponse>();
}

/**
 * @summary Generates an ID for an asynchronous thread that is used to create a synchronization task in Data Integration.
 *
 * @description DataWorks allows you to use the [CreateDISyncTask](https://help.aliyun.com/document_detail/278725.html) operation to directly create a batch synchronization task in Data Integration. To create a real-time synchronization task or another type of synchronization task, you must first call the [GenerateDISyncTaskConfigForCreating](https://help.aliyun.com/document_detail/383463.html) operation to generate the ID of an asynchronous thread and call the [QueryDISyncTaskConfigProcessResult](https://help.aliyun.com/document_detail/383465.html) operation to obtain the asynchronously generated parameters based on the ID. Then, you can use the parameters as request parameters of [CreateDISyncTask](https://help.aliyun.com/document_detail/278725.html) and call the [CreateDISyncTask](https://help.aliyun.com/document_detail/278725.html) operation to create a real-time synchronization task or another type of synchronization task. DataWorks allows you to create real-time synchronization tasks and other types of synchronization tasks in Data Integration only in asynchronous mode.
 *
 * @param request GenerateDISyncTaskConfigForCreatingRequest
 * @return GenerateDISyncTaskConfigForCreatingResponse
 */
GenerateDISyncTaskConfigForCreatingResponse Client::generateDISyncTaskConfigForCreating(const GenerateDISyncTaskConfigForCreatingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateDISyncTaskConfigForCreatingWithOptions(request, runtime);
}

/**
 * @summary Generates the JSON for an asynchronous thread that is used to update a real-time synchronization task in Data Integration.
 *
 * @description DataWorks allows you to use only the [UpdateDISyncTask](https://help.aliyun.com/document_detail/289109.html) operation to update a batch synchronization task in Data Integration. To update a real-time synchronization task, you must first call the GenerateDISyncTaskConfigForUpdating operation to generate the ID of an asynchronous thread and call the [QueryDISyncTaskConfigProcessResult](https://help.aliyun.com/document_detail/383465.html) operation to obtain the asynchronously generated parameters based on the ID. Then, you can call the UpdateDISyncTask operation and use the parameters as request parameters to update a real-time synchronization task in Data Integration. DataWorks allows you to create or update real-time synchronization tasks in Data Integration only in asynchronous mode.
 *
 * @param request GenerateDISyncTaskConfigForUpdatingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateDISyncTaskConfigForUpdatingResponse
 */
GenerateDISyncTaskConfigForUpdatingResponse Client::generateDISyncTaskConfigForUpdatingWithOptions(const GenerateDISyncTaskConfigForUpdatingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskParam()) {
    query["TaskParam"] = request.taskParam();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateDISyncTaskConfigForUpdating"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateDISyncTaskConfigForUpdatingResponse>();
}

/**
 * @summary Generates the JSON for an asynchronous thread that is used to update a real-time synchronization task in Data Integration.
 *
 * @description DataWorks allows you to use only the [UpdateDISyncTask](https://help.aliyun.com/document_detail/289109.html) operation to update a batch synchronization task in Data Integration. To update a real-time synchronization task, you must first call the GenerateDISyncTaskConfigForUpdating operation to generate the ID of an asynchronous thread and call the [QueryDISyncTaskConfigProcessResult](https://help.aliyun.com/document_detail/383465.html) operation to obtain the asynchronously generated parameters based on the ID. Then, you can call the UpdateDISyncTask operation and use the parameters as request parameters to update a real-time synchronization task in Data Integration. DataWorks allows you to create or update real-time synchronization tasks in Data Integration only in asynchronous mode.
 *
 * @param request GenerateDISyncTaskConfigForUpdatingRequest
 * @return GenerateDISyncTaskConfigForUpdatingResponse
 */
GenerateDISyncTaskConfigForUpdatingResponse Client::generateDISyncTaskConfigForUpdating(const GenerateDISyncTaskConfigForUpdatingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateDISyncTaskConfigForUpdatingWithOptions(request, runtime);
}

/**
 * @summary Queries alert information based on the alert ID that is specified by the AlertId parameter.
 *
 * @param request GetAlertMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAlertMessageResponse
 */
GetAlertMessageResponse Client::getAlertMessageWithOptions(const GetAlertMessageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertId()) {
    body["AlertId"] = request.alertId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetAlertMessage"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAlertMessageResponse>();
}

/**
 * @summary Queries alert information based on the alert ID that is specified by the AlertId parameter.
 *
 * @param request GetAlertMessageRequest
 * @return GetAlertMessageResponse
 */
GetAlertMessageResponse Client::getAlertMessage(const GetAlertMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAlertMessageWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a baseline based on its ID.
 *
 * @param request GetBaselineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBaselineResponse
 */
GetBaselineResponse Client::getBaselineWithOptions(const GetBaselineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaselineId()) {
    body["BaselineId"] = request.baselineId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetBaseline"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBaselineResponse>();
}

/**
 * @summary Queries the information about a baseline based on its ID.
 *
 * @param request GetBaselineRequest
 * @return GetBaselineResponse
 */
GetBaselineResponse Client::getBaseline(const GetBaselineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBaselineWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of a baseline.
 *
 * @param request GetBaselineConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBaselineConfigResponse
 */
GetBaselineConfigResponse Client::getBaselineConfigWithOptions(const GetBaselineConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaselineId()) {
    body["BaselineId"] = request.baselineId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetBaselineConfig"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBaselineConfigResponse>();
}

/**
 * @summary Queries the configurations of a baseline.
 *
 * @param request GetBaselineConfigRequest
 * @return GetBaselineConfigResponse
 */
GetBaselineConfigResponse Client::getBaselineConfig(const GetBaselineConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBaselineConfigWithOptions(request, runtime);
}

/**
 * @summary The information about the events that are associated with the instance.
 *
 * @param request GetBaselineKeyPathRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBaselineKeyPathResponse
 */
GetBaselineKeyPathResponse Client::getBaselineKeyPathWithOptions(const GetBaselineKeyPathRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaselineId()) {
    body["BaselineId"] = request.baselineId();
  }

  if (!!request.hasBizdate()) {
    body["Bizdate"] = request.bizdate();
  }

  if (!!request.hasInGroupId()) {
    body["InGroupId"] = request.inGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetBaselineKeyPath"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBaselineKeyPathResponse>();
}

/**
 * @summary The information about the events that are associated with the instance.
 *
 * @param request GetBaselineKeyPathRequest
 * @return GetBaselineKeyPathResponse
 */
GetBaselineKeyPathResponse Client::getBaselineKeyPath(const GetBaselineKeyPathRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBaselineKeyPathWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a baseline instance.
 *
 * @param request GetBaselineStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBaselineStatusResponse
 */
GetBaselineStatusResponse Client::getBaselineStatusWithOptions(const GetBaselineStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaselineId()) {
    body["BaselineId"] = request.baselineId();
  }

  if (!!request.hasBizdate()) {
    body["Bizdate"] = request.bizdate();
  }

  if (!!request.hasInGroupId()) {
    body["InGroupId"] = request.inGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetBaselineStatus"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBaselineStatusResponse>();
}

/**
 * @summary Queries the details of a baseline instance.
 *
 * @param request GetBaselineStatusRequest
 * @return GetBaselineStatusResponse
 */
GetBaselineStatusResponse Client::getBaselineStatus(const GetBaselineStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBaselineStatusWithOptions(request, runtime);
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
    body["BusinessId"] = request.businessId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetBusiness"},
    {"version" , "2020-05-18"},
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
 * @summary Queries the status of a table creation, update, or deletion task.
 *
 * @param request GetDDLJobStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDDLJobStatusResponse
 */
GetDDLJobStatusResponse Client::getDDLJobStatusWithOptions(const GetDDLJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDDLJobStatus"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDDLJobStatusResponse>();
}

/**
 * @summary Queries the status of a table creation, update, or deletion task.
 *
 * @param request GetDDLJobStatusRequest
 * @return GetDDLJobStatusResponse
 */
GetDDLJobStatusResponse Client::getDDLJobStatus(const GetDDLJobStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDDLJobStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an alert rule configured for a new-version synchronization task. Only the following types of tasks are supported: real-time data synchronization from a MySQL database to Hologres.
 *
 * @description You can configure alert rules only for tasks that can be used for real-time data synchronization.
 *
 * @param request GetDIAlarmRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDIAlarmRuleResponse
 */
GetDIAlarmRuleResponse Client::getDIAlarmRuleWithOptions(const GetDIAlarmRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDIAlarmRuleId()) {
    body["DIAlarmRuleId"] = request.DIAlarmRuleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDIAlarmRule"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDIAlarmRuleResponse>();
}

/**
 * @summary Queries the details of an alert rule configured for a new-version synchronization task. Only the following types of tasks are supported: real-time data synchronization from a MySQL database to Hologres.
 *
 * @description You can configure alert rules only for tasks that can be used for real-time data synchronization.
 *
 * @param request GetDIAlarmRuleRequest
 * @return GetDIAlarmRuleResponse
 */
GetDIAlarmRuleResponse Client::getDIAlarmRule(const GetDIAlarmRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDIAlarmRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a new-version synchronization task created in Data Integration. The following types of synchronization tasks are supported: real-time synchronization of all data in a MySQL database to Hologres.
 *
 * @param request GetDIJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDIJobResponse
 */
GetDIJobResponse Client::getDIJobWithOptions(const GetDIJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDIJobId()) {
    body["DIJobId"] = request.DIJobId();
  }

  if (!!request.hasWithDetails()) {
    body["WithDetails"] = request.withDetails();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDIJob"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDIJobResponse>();
}

/**
 * @summary Queries the information about a new-version synchronization task created in Data Integration. The following types of synchronization tasks are supported: real-time synchronization of all data in a MySQL database to Hologres.
 *
 * @param request GetDIJobRequest
 * @return GetDIJobResponse
 */
GetDIJobResponse Client::getDIJob(const GetDIJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDIJobWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a real-time synchronization task or a data synchronization solution.
 *
 * @param request GetDISyncInstanceInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDISyncInstanceInfoResponse
 */
GetDISyncInstanceInfoResponse Client::getDISyncInstanceInfoWithOptions(const GetDISyncInstanceInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.fileId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDISyncInstanceInfo"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDISyncInstanceInfoResponse>();
}

/**
 * @summary Queries the status of a real-time synchronization task or a data synchronization solution.
 *
 * @param request GetDISyncInstanceInfoRequest
 * @return GetDISyncInstanceInfoResponse
 */
GetDISyncInstanceInfoResponse Client::getDISyncInstanceInfo(const GetDISyncInstanceInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDISyncInstanceInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a real-time synchronization task or a data synchronization solution.
 *
 * @param request GetDISyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDISyncTaskResponse
 */
GetDISyncTaskResponse Client::getDISyncTaskWithOptions(const GetDISyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.fileId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDISyncTask"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDISyncTaskResponse>();
}

/**
 * @summary Queries the details of a real-time synchronization task or a data synchronization solution.
 *
 * @param request GetDISyncTaskRequest
 * @return GetDISyncTaskResponse
 */
GetDISyncTaskResponse Client::getDISyncTask(const GetDISyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDISyncTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a directed acyclic graph (DAG). You can call the GetDag operation to query the information about the DAG for a manually triggered workflow, a manually triggered node, or a data backfill instance. However, you cannot query the information about the DAG for an auto triggered node or an auto triggered workflow.
 *
 * @description Supported DAG types:
 * *   MANUAL: DAG for a manually triggered workflow
 * *   SMOKE_TEST: DAG for a smoke testing workflow
 * *   SUPPLY_DATA: DAG for a data backfill instance
 * *   BUSINESS_PROCESS_DAG: DAG for a one-time workflow
 * Supported DAG states:
 * *   CREATED
 * *   RUNNING
 * *   FAILURE
 * *   SUCCESS
 *
 * @param request GetDagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDagResponse
 */
GetDagResponse Client::getDagWithOptions(const GetDagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDagId()) {
    body["DagId"] = request.dagId();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDag"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDagResponse>();
}

/**
 * @summary Queries the information about a directed acyclic graph (DAG). You can call the GetDag operation to query the information about the DAG for a manually triggered workflow, a manually triggered node, or a data backfill instance. However, you cannot query the information about the DAG for an auto triggered node or an auto triggered workflow.
 *
 * @description Supported DAG types:
 * *   MANUAL: DAG for a manually triggered workflow
 * *   SMOKE_TEST: DAG for a smoke testing workflow
 * *   SUPPLY_DATA: DAG for a data backfill instance
 * *   BUSINESS_PROCESS_DAG: DAG for a one-time workflow
 * Supported DAG states:
 * *   CREATED
 * *   RUNNING
 * *   FAILURE
 * *   SUCCESS
 *
 * @param request GetDagRequest
 * @return GetDagResponse
 */
GetDagResponse Client::getDag(const GetDagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDagWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a DataService Studio API in the development state.
 *
 * @param request GetDataServiceApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataServiceApiResponse
 */
GetDataServiceApiResponse Client::getDataServiceApiWithOptions(const GetDataServiceApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiId()) {
    body["ApiId"] = request.apiId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDataServiceApi"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataServiceApiResponse>();
}

/**
 * @summary Queries the details of a DataService Studio API in the development state.
 *
 * @param request GetDataServiceApiRequest
 * @return GetDataServiceApiResponse
 */
GetDataServiceApiResponse Client::getDataServiceApi(const GetDataServiceApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceApiWithOptions(request, runtime);
}

/**
 * @summary Queries the test results of an API in DataService Studio.
 *
 * @param request GetDataServiceApiTestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataServiceApiTestResponse
 */
GetDataServiceApiTestResponse Client::getDataServiceApiTestWithOptions(const GetDataServiceApiTestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataServiceApiTest"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataServiceApiTestResponse>();
}

/**
 * @summary Queries the test results of an API in DataService Studio.
 *
 * @param request GetDataServiceApiTestRequest
 * @return GetDataServiceApiTestResponse
 */
GetDataServiceApiTestResponse Client::getDataServiceApiTest(const GetDataServiceApiTestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceApiTestWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an application.
 *
 * @param request GetDataServiceApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataServiceApplicationResponse
 */
GetDataServiceApplicationResponse Client::getDataServiceApplicationWithOptions(const GetDataServiceApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApplicationId()) {
    body["ApplicationId"] = request.applicationId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDataServiceApplication"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataServiceApplicationResponse>();
}

/**
 * @summary Queries the details of an application.
 *
 * @param request GetDataServiceApplicationRequest
 * @return GetDataServiceApplicationResponse
 */
GetDataServiceApplicationResponse Client::getDataServiceApplication(const GetDataServiceApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceApplicationWithOptions(request, runtime);
}

/**
 * @summary Queries a folder.
 *
 * @param request GetDataServiceFolderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataServiceFolderResponse
 */
GetDataServiceFolderResponse Client::getDataServiceFolderWithOptions(const GetDataServiceFolderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFolderId()) {
    body["FolderId"] = request.folderId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDataServiceFolder"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataServiceFolderResponse>();
}

/**
 * @summary Queries a folder.
 *
 * @param request GetDataServiceFolderRequest
 * @return GetDataServiceFolderResponse
 */
GetDataServiceFolderResponse Client::getDataServiceFolder(const GetDataServiceFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceFolderWithOptions(request, runtime);
}

/**
 * @summary Queries a business process.
 *
 * @param request GetDataServiceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataServiceGroupResponse
 */
GetDataServiceGroupResponse Client::getDataServiceGroupWithOptions(const GetDataServiceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDataServiceGroup"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataServiceGroupResponse>();
}

/**
 * @summary Queries a business process.
 *
 * @param request GetDataServiceGroupRequest
 * @return GetDataServiceGroupResponse
 */
GetDataServiceGroupResponse Client::getDataServiceGroup(const GetDataServiceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServiceGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a DataService Studio API in the published state.
 *
 * @param request GetDataServicePublishedApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataServicePublishedApiResponse
 */
GetDataServicePublishedApiResponse Client::getDataServicePublishedApiWithOptions(const GetDataServicePublishedApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiId()) {
    body["ApiId"] = request.apiId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDataServicePublishedApi"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataServicePublishedApiResponse>();
}

/**
 * @summary Queries the information about a DataService Studio API in the published state.
 *
 * @param request GetDataServicePublishedApiRequest
 * @return GetDataServicePublishedApiResponse
 */
GetDataServicePublishedApiResponse Client::getDataServicePublishedApi(const GetDataServicePublishedApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataServicePublishedApiWithOptions(request, runtime);
}

/**
 * @summary Queries the metadata of a specified data source.
 *
 * @param request GetDataSourceMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataSourceMetaResponse
 */
GetDataSourceMetaResponse Client::getDataSourceMetaWithOptions(const GetDataSourceMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasourceName()) {
    query["DatasourceName"] = request.datasourceName();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.envType();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataSourceMeta"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataSourceMetaResponse>();
}

/**
 * @summary Queries the metadata of a specified data source.
 *
 * @param request GetDataSourceMetaRequest
 * @return GetDataSourceMetaResponse
 */
GetDataSourceMetaResponse Client::getDataSourceMeta(const GetDataSourceMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataSourceMetaWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a deployment package.
 *
 * @param request GetDeploymentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeploymentResponse
 */
GetDeploymentResponse Client::getDeploymentWithOptions(const GetDeploymentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDeploymentId()) {
    body["DeploymentId"] = request.deploymentId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetDeployment"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeploymentResponse>();
}

/**
 * @summary Queries the information about a deployment package.
 *
 * @param request GetDeploymentRequest
 * @return GetDeploymentResponse
 */
GetDeploymentResponse Client::getDeployment(const GetDeploymentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDeploymentWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an extension.
 *
 * @param request GetExtensionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetExtensionResponse
 */
GetExtensionResponse Client::getExtensionWithOptions(const GetExtensionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtensionCode()) {
    query["ExtensionCode"] = request.extensionCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetExtension"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetExtensionResponse>();
}

/**
 * @summary Queries the details of an extension.
 *
 * @param request GetExtensionRequest
 * @return GetExtensionResponse
 */
GetExtensionResponse Client::getExtension(const GetExtensionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getExtensionWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a file.
 *
 * @param request GetFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFileResponse
 */
GetFileResponse Client::getFileWithOptions(const GetFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileId()) {
    body["FileId"] = request.fileId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetFile"},
    {"version" , "2020-05-18"},
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
 * @summary Queries the information about a file.
 *
 * @param request GetFileRequest
 * @return GetFileResponse
 */
GetFileResponse Client::getFile(const GetFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFileWithOptions(request, runtime);
}

/**
 * @summary Queries the distribution of node types.
 *
 * @param request GetFileTypeStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFileTypeStatisticResponse
 */
GetFileTypeStatisticResponse Client::getFileTypeStatisticWithOptions(const GetFileTypeStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetFileTypeStatistic"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFileTypeStatisticResponse>();
}

/**
 * @summary Queries the distribution of node types.
 *
 * @param request GetFileTypeStatisticRequest
 * @return GetFileTypeStatisticResponse
 */
GetFileTypeStatisticResponse Client::getFileTypeStatistic(const GetFileTypeStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFileTypeStatisticWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a file version.
 *
 * @param request GetFileVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFileVersionResponse
 */
GetFileVersionResponse Client::getFileVersionWithOptions(const GetFileVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileId()) {
    body["FileId"] = request.fileId();
  }

  if (!!request.hasFileVersion()) {
    body["FileVersion"] = request.fileVersion();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetFileVersion"},
    {"version" , "2020-05-18"},
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
 * @summary Queries the information about a file version.
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
    body["FolderId"] = request.folderId();
  }

  if (!!request.hasFolderPath()) {
    body["FolderPath"] = request.folderPath();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetFolder"},
    {"version" , "2020-05-18"},
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
    body["MessageId"] = request.messageId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetIDEEventDetail"},
    {"version" , "2020-05-18"},
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
 * @summary Queries the information about an instance.
 *
 * @param request GetInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstanceWithOptions(const GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetInstance"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceResponse>();
}

/**
 * @summary Queries the information about an instance.
 *
 * @param request GetInstanceRequest
 * @return GetInstanceResponse
 */
GetInstanceResponse Client::getInstance(const GetInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetInstanceConsumeTimeRank is deprecated
 *
 * @summary Queries the ranking of the running durations of instances.
 *
 * @param request GetInstanceConsumeTimeRankRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceConsumeTimeRankResponse
 */
GetInstanceConsumeTimeRankResponse Client::getInstanceConsumeTimeRankWithOptions(const GetInstanceConsumeTimeRankRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizdate()) {
    body["Bizdate"] = request.bizdate();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetInstanceConsumeTimeRank"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceConsumeTimeRankResponse>();
}

/**
 * @deprecated OpenAPI GetInstanceConsumeTimeRank is deprecated
 *
 * @summary Queries the ranking of the running durations of instances.
 *
 * @param request GetInstanceConsumeTimeRankRequest
 * @return GetInstanceConsumeTimeRankResponse
 */
GetInstanceConsumeTimeRankResponse Client::getInstanceConsumeTimeRank(const GetInstanceConsumeTimeRankRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceConsumeTimeRankWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetInstanceCountTrend is deprecated
 *
 * @summary Queries the quantity trend of auto triggered instances.
 *
 * @param request GetInstanceCountTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceCountTrendResponse
 */
GetInstanceCountTrendResponse Client::getInstanceCountTrendWithOptions(const GetInstanceCountTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBeginDate()) {
    body["BeginDate"] = request.beginDate();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.endDate();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetInstanceCountTrend"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceCountTrendResponse>();
}

/**
 * @deprecated OpenAPI GetInstanceCountTrend is deprecated
 *
 * @summary Queries the quantity trend of auto triggered instances.
 *
 * @param request GetInstanceCountTrendRequest
 * @return GetInstanceCountTrendResponse
 */
GetInstanceCountTrendResponse Client::getInstanceCountTrend(const GetInstanceCountTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceCountTrendWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetInstanceErrorRank is deprecated
 *
 * @summary Queries the ranking of nodes on which errors occur within the last month.
 *
 * @param request GetInstanceErrorRankRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceErrorRankResponse
 */
GetInstanceErrorRankResponse Client::getInstanceErrorRankWithOptions(const GetInstanceErrorRankRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetInstanceErrorRank"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceErrorRankResponse>();
}

/**
 * @deprecated OpenAPI GetInstanceErrorRank is deprecated
 *
 * @summary Queries the ranking of nodes on which errors occur within the last month.
 *
 * @param request GetInstanceErrorRankRequest
 * @return GetInstanceErrorRankResponse
 */
GetInstanceErrorRankResponse Client::getInstanceErrorRank(const GetInstanceErrorRankRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceErrorRankWithOptions(request, runtime);
}

/**
 * @summary Queries the logs of an instance.
 *
 * @description You may not obtain the instance logs that were generated more than seven days ago.
 *
 * @param request GetInstanceLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceLogResponse
 */
GetInstanceLogResponse Client::getInstanceLogWithOptions(const GetInstanceLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceHistoryId()) {
    body["InstanceHistoryId"] = request.instanceHistoryId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetInstanceLog"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceLogResponse>();
}

/**
 * @summary Queries the logs of an instance.
 *
 * @description You may not obtain the instance logs that were generated more than seven days ago.
 *
 * @param request GetInstanceLogRequest
 * @return GetInstanceLogResponse
 */
GetInstanceLogResponse Client::getInstanceLog(const GetInstanceLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceLogWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetInstanceStatusCount is deprecated
 *
 * @summary Queries the statistics of instances in different states.
 *
 * @param request GetInstanceStatusCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceStatusCountResponse
 */
GetInstanceStatusCountResponse Client::getInstanceStatusCountWithOptions(const GetInstanceStatusCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizDate()) {
    body["BizDate"] = request.bizDate();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetInstanceStatusCount"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceStatusCountResponse>();
}

/**
 * @deprecated OpenAPI GetInstanceStatusCount is deprecated
 *
 * @summary Queries the statistics of instances in different states.
 *
 * @param request GetInstanceStatusCountRequest
 * @return GetInstanceStatusCountResponse
 */
GetInstanceStatusCountResponse Client::getInstanceStatusCount(const GetInstanceStatusCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceStatusCountWithOptions(request, runtime);
}

/**
 * @summary Queries the number of instances that are in each state.
 *
 * @param request GetInstanceStatusStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInstanceStatusStatisticResponse
 */
GetInstanceStatusStatisticResponse Client::getInstanceStatusStatisticWithOptions(const GetInstanceStatusStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizDate()) {
    body["BizDate"] = request.bizDate();
  }

  if (!!request.hasDagType()) {
    body["DagType"] = request.dagType();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasSchedulerPeriod()) {
    body["SchedulerPeriod"] = request.schedulerPeriod();
  }

  if (!!request.hasSchedulerType()) {
    body["SchedulerType"] = request.schedulerType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetInstanceStatusStatistic"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInstanceStatusStatisticResponse>();
}

/**
 * @summary Queries the number of instances that are in each state.
 *
 * @param request GetInstanceStatusStatisticRequest
 * @return GetInstanceStatusStatisticResponse
 */
GetInstanceStatusStatisticResponse Client::getInstanceStatusStatistic(const GetInstanceStatusStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInstanceStatusStatisticWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetManualDagInstances is deprecated
 *
 * @summary Queries the information about instances in a manually triggered workflow.
 *
 * @param request GetManualDagInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetManualDagInstancesResponse
 */
GetManualDagInstancesResponse Client::getManualDagInstancesWithOptions(const GetManualDagInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDagId()) {
    body["DagId"] = request.dagId();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetManualDagInstances"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetManualDagInstancesResponse>();
}

/**
 * @deprecated OpenAPI GetManualDagInstances is deprecated
 *
 * @summary Queries the information about instances in a manually triggered workflow.
 *
 * @param request GetManualDagInstancesRequest
 * @return GetManualDagInstancesResponse
 */
GetManualDagInstancesResponse Client::getManualDagInstances(const GetManualDagInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getManualDagInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a category tree.
 *
 * @param request GetMetaCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaCategoryResponse
 */
GetMetaCategoryResponse Client::getMetaCategoryWithOptions(const GetMetaCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParentCategoryId()) {
    query["ParentCategoryId"] = request.parentCategoryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetaCategory"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaCategoryResponse>();
}

/**
 * @summary Queries the information about a category tree.
 *
 * @param request GetMetaCategoryRequest
 * @return GetMetaCategoryResponse
 */
GetMetaCategoryResponse Client::getMetaCategory(const GetMetaCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaCategoryWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a collection.
 *
 * @param request GetMetaCollectionDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaCollectionDetailResponse
 */
GetMetaCollectionDetailResponse Client::getMetaCollectionDetailWithOptions(const GetMetaCollectionDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasQualifiedName()) {
    query["QualifiedName"] = request.qualifiedName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetaCollectionDetail"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaCollectionDetailResponse>();
}

/**
 * @summary Queries the information about a collection.
 *
 * @param request GetMetaCollectionDetailRequest
 * @return GetMetaCollectionDetailResponse
 */
GetMetaCollectionDetailResponse Client::getMetaCollectionDetail(const GetMetaCollectionDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaCollectionDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the lineage of a field in a metatable.
 *
 * @param request GetMetaColumnLineageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaColumnLineageResponse
 */
GetMetaColumnLineageResponse Client::getMetaColumnLineageWithOptions(const GetMetaColumnLineageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasColumnGuid()) {
    query["ColumnGuid"] = request.columnGuid();
  }

  if (!!request.hasColumnName()) {
    query["ColumnName"] = request.columnName();
  }

  if (!!request.hasDataSourceType()) {
    query["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetaColumnLineage"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaColumnLineageResponse>();
}

/**
 * @summary Queries the lineage of a field in a metatable.
 *
 * @param request GetMetaColumnLineageRequest
 * @return GetMetaColumnLineageResponse
 */
GetMetaColumnLineageResponse Client::getMetaColumnLineage(const GetMetaColumnLineageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaColumnLineageWithOptions(request, runtime);
}

/**
 * @summary Queries the basic metadata information about a compute engine instance.
 *
 * @description The ID of the EMR cluster. This parameter is required only if you set the DataSourceType parameter to emr.
 * You can log on to the [EMR console](https://emr.console.aliyun.com/?spm=a2c4g.11186623.0.0.965cc5c2GeiHet#/cn-hangzhou) to obtain the ID of the EMR cluster.
 *
 * @param request GetMetaDBInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaDBInfoResponse
 */
GetMetaDBInfoResponse Client::getMetaDBInfoWithOptions(const GetMetaDBInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetaDBInfo"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaDBInfoResponse>();
}

/**
 * @summary Queries the basic metadata information about a compute engine instance.
 *
 * @description The ID of the EMR cluster. This parameter is required only if you set the DataSourceType parameter to emr.
 * You can log on to the [EMR console](https://emr.console.aliyun.com/?spm=a2c4g.11186623.0.0.965cc5c2GeiHet#/cn-hangzhou) to obtain the ID of the EMR cluster.
 *
 * @param request GetMetaDBInfoRequest
 * @return GetMetaDBInfoResponse
 */
GetMetaDBInfoResponse Client::getMetaDBInfo(const GetMetaDBInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaDBInfoWithOptions(request, runtime);
}

/**
 * @summary Queries metatables in a compute engine instance.
 *
 * @param request GetMetaDBTableListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaDBTableListResponse
 */
GetMetaDBTableListResponse Client::getMetaDBTableListWithOptions(const GetMetaDBTableListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppGuid()) {
    query["AppGuid"] = request.appGuid();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDataSourceType()) {
    query["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
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
    {"action" , "GetMetaDBTableList"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaDBTableListResponse>();
}

/**
 * @summary Queries metatables in a compute engine instance.
 *
 * @param request GetMetaDBTableListRequest
 * @return GetMetaDBTableListResponse
 */
GetMetaDBTableListResponse Client::getMetaDBTableList(const GetMetaDBTableListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaDBTableListWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information about a metatable.
 *
 * @param request GetMetaTableBasicInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaTableBasicInfoResponse
 */
GetMetaTableBasicInfoResponse Client::getMetaTableBasicInfoWithOptions(const GetMetaTableBasicInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetaTableBasicInfo"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaTableBasicInfoResponse>();
}

/**
 * @summary Queries the basic information about a metatable.
 *
 * @param request GetMetaTableBasicInfoRequest
 * @return GetMetaTableBasicInfoResponse
 */
GetMetaTableBasicInfoResponse Client::getMetaTableBasicInfo(const GetMetaTableBasicInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaTableBasicInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the change logs of a metatable.
 *
 * @description > This operation will be replaced soon. We recommend that you do not call this operation.
 *
 * @param request GetMetaTableChangeLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaTableChangeLogResponse
 */
GetMetaTableChangeLogResponse Client::getMetaTableChangeLogWithOptions(const GetMetaTableChangeLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChangeType()) {
    body["ChangeType"] = request.changeType();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.endDate();
  }

  if (!!request.hasObjectType()) {
    body["ObjectType"] = request.objectType();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.startDate();
  }

  if (!!request.hasTableGuid()) {
    body["TableGuid"] = request.tableGuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetMetaTableChangeLog"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaTableChangeLogResponse>();
}

/**
 * @summary Queries the change logs of a metatable.
 *
 * @description > This operation will be replaced soon. We recommend that you do not call this operation.
 *
 * @param request GetMetaTableChangeLogRequest
 * @return GetMetaTableChangeLogResponse
 */
GetMetaTableChangeLogResponse Client::getMetaTableChangeLog(const GetMetaTableChangeLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaTableChangeLogWithOptions(request, runtime);
}

/**
 * @summary Queries the field information of a metatable.
 *
 * @param request GetMetaTableColumnRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaTableColumnResponse
 */
GetMetaTableColumnResponse Client::getMetaTableColumnWithOptions(const GetMetaTableColumnRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetaTableColumn"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaTableColumnResponse>();
}

/**
 * @summary Queries the field information of a metatable.
 *
 * @param request GetMetaTableColumnRequest
 * @return GetMetaTableColumnResponse
 */
GetMetaTableColumnResponse Client::getMetaTableColumn(const GetMetaTableColumnRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaTableColumnWithOptions(request, runtime);
}

/**
 * @summary Queries the complete information about a table, including information about fields in the table.
 *
 * @description You can call this operation to query only the information about a table of the E-MapReduce (EMR) compute engine type.
 *
 * @param request GetMetaTableFullInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaTableFullInfoResponse
 */
GetMetaTableFullInfoResponse Client::getMetaTableFullInfoWithOptions(const GetMetaTableFullInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetaTableFullInfo"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaTableFullInfoResponse>();
}

/**
 * @summary Queries the complete information about a table, including information about fields in the table.
 *
 * @description You can call this operation to query only the information about a table of the E-MapReduce (EMR) compute engine type.
 *
 * @param request GetMetaTableFullInfoRequest
 * @return GetMetaTableFullInfoResponse
 */
GetMetaTableFullInfoResponse Client::getMetaTableFullInfo(const GetMetaTableFullInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaTableFullInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the instructions on how to use a table.
 *
 * @param request GetMetaTableIntroWikiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaTableIntroWikiResponse
 */
GetMetaTableIntroWikiResponse Client::getMetaTableIntroWikiWithOptions(const GetMetaTableIntroWikiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.tableGuid();
  }

  if (!!request.hasWikiVersion()) {
    query["WikiVersion"] = request.wikiVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetaTableIntroWiki"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaTableIntroWikiResponse>();
}

/**
 * @summary Queries the instructions on how to use a table.
 *
 * @param request GetMetaTableIntroWikiRequest
 * @return GetMetaTableIntroWikiResponse
 */
GetMetaTableIntroWikiResponse Client::getMetaTableIntroWiki(const GetMetaTableIntroWikiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaTableIntroWikiWithOptions(request, runtime);
}

/**
 * @summary Queries the lineage of a metatable.
 *
 * @param request GetMetaTableLineageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaTableLineageResponse
 */
GetMetaTableLineageResponse Client::getMetaTableLineageWithOptions(const GetMetaTableLineageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDataSourceType()) {
    query["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasNextPrimaryKey()) {
    query["NextPrimaryKey"] = request.nextPrimaryKey();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.tableGuid();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetaTableLineage"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaTableLineageResponse>();
}

/**
 * @summary Queries the lineage of a metatable.
 *
 * @param request GetMetaTableLineageRequest
 * @return GetMetaTableLineageResponse
 */
GetMetaTableLineageResponse Client::getMetaTableLineage(const GetMetaTableLineageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaTableLineageWithOptions(request, runtime);
}

/**
 * @summary Queries metatables in a specified category.
 *
 * @param request GetMetaTableListByCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaTableListByCategoryResponse
 */
GetMetaTableListByCategoryResponse Client::getMetaTableListByCategoryWithOptions(const GetMetaTableListByCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetaTableListByCategory"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaTableListByCategoryResponse>();
}

/**
 * @summary Queries metatables in a specified category.
 *
 * @param request GetMetaTableListByCategoryRequest
 * @return GetMetaTableListByCategoryResponse
 */
GetMetaTableListByCategoryResponse Client::getMetaTableListByCategory(const GetMetaTableListByCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaTableListByCategoryWithOptions(request, runtime);
}

/**
 * @summary Queries the output information of a metatable.
 *
 * @param request GetMetaTableOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaTableOutputResponse
 */
GetMetaTableOutputResponse Client::getMetaTableOutputWithOptions(const GetMetaTableOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.tableGuid();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetaTableOutput"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaTableOutputResponse>();
}

/**
 * @summary Queries the output information of a metatable.
 *
 * @param request GetMetaTableOutputRequest
 * @return GetMetaTableOutputResponse
 */
GetMetaTableOutputResponse Client::getMetaTableOutput(const GetMetaTableOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaTableOutputWithOptions(request, runtime);
}

/**
 * @summary Obtains a list of partitions in a metatable.
 *
 * @description You can call this operation to query only the partitions of a metatable in a MaxCompute or E-MapReduce (EMR) compute engine. If you query partitions of a metatable in an EMR compute engine, only DataLake clusters that use Data Lake Formation (DLF) to manage metadata and Hadoop clusters whose cluster version is earlier than 3.41.0 or 5.7.0 are supported.
 *
 * @param tmpReq GetMetaTablePartitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaTablePartitionResponse
 */
GetMetaTablePartitionResponse Client::getMetaTablePartitionWithOptions(const GetMetaTablePartitionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetMetaTablePartitionShrinkRequest request = GetMetaTablePartitionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSortCriterion()) {
    request.setSortCriterionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sortCriterion(), "SortCriterion", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDataSourceType()) {
    query["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSortCriterionShrink()) {
    query["SortCriterion"] = request.sortCriterionShrink();
  }

  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.tableGuid();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetaTablePartition"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaTablePartitionResponse>();
}

/**
 * @summary Obtains a list of partitions in a metatable.
 *
 * @description You can call this operation to query only the partitions of a metatable in a MaxCompute or E-MapReduce (EMR) compute engine. If you query partitions of a metatable in an EMR compute engine, only DataLake clusters that use Data Lake Formation (DLF) to manage metadata and Hadoop clusters whose cluster version is earlier than 3.41.0 or 5.7.0 are supported.
 *
 * @param request GetMetaTablePartitionRequest
 * @return GetMetaTablePartitionResponse
 */
GetMetaTablePartitionResponse Client::getMetaTablePartition(const GetMetaTablePartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaTablePartitionWithOptions(request, runtime);
}

/**
 * @summary Queries the output tasks of a metatable.
 *
 * @param request GetMetaTableProducingTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaTableProducingTasksResponse
 */
GetMetaTableProducingTasksResponse Client::getMetaTableProducingTasksWithOptions(const GetMetaTableProducingTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDataSourceType()) {
    query["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasDbName()) {
    query["DbName"] = request.dbName();
  }

  if (!!request.hasSchemaName()) {
    query["SchemaName"] = request.schemaName();
  }

  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.tableGuid();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetaTableProducingTasks"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaTableProducingTasksResponse>();
}

/**
 * @summary Queries the output tasks of a metatable.
 *
 * @param request GetMetaTableProducingTasksRequest
 * @return GetMetaTableProducingTasksResponse
 */
GetMetaTableProducingTasksResponse Client::getMetaTableProducingTasks(const GetMetaTableProducingTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaTableProducingTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the themes and levels of a metatable.
 *
 * @param request GetMetaTableThemeLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMetaTableThemeLevelResponse
 */
GetMetaTableThemeLevelResponse Client::getMetaTableThemeLevelWithOptions(const GetMetaTableThemeLevelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMetaTableThemeLevel"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMetaTableThemeLevelResponse>();
}

/**
 * @summary Queries the information about the themes and levels of a metatable.
 *
 * @param request GetMetaTableThemeLevelRequest
 * @return GetMetaTableThemeLevelResponse
 */
GetMetaTableThemeLevelResponse Client::getMetaTableThemeLevel(const GetMetaTableThemeLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaTableThemeLevelWithOptions(request, runtime);
}

/**
 * @summary Queries the progress of a migration task.
 *
 * @param request GetMigrationProcessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMigrationProcessResponse
 */
GetMigrationProcessResponse Client::getMigrationProcessWithOptions(const GetMigrationProcessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMigrationId()) {
    body["MigrationId"] = request.migrationId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetMigrationProcess"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMigrationProcessResponse>();
}

/**
 * @summary Queries the progress of a migration task.
 *
 * @param request GetMigrationProcessRequest
 * @return GetMigrationProcessResponse
 */
GetMigrationProcessResponse Client::getMigrationProcess(const GetMigrationProcessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMigrationProcessWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a migration task.
 *
 * @param request GetMigrationSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMigrationSummaryResponse
 */
GetMigrationSummaryResponse Client::getMigrationSummaryWithOptions(const GetMigrationSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMigrationId()) {
    body["MigrationId"] = request.migrationId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetMigrationSummary"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMigrationSummaryResponse>();
}

/**
 * @summary Queries the information about a migration task.
 *
 * @param request GetMigrationSummaryRequest
 * @return GetMigrationSummaryResponse
 */
GetMigrationSummaryResponse Client::getMigrationSummary(const GetMigrationSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMigrationSummaryWithOptions(request, runtime);
}

/**
 * @summary Indicates whether the request is successful.
 *
 * @param request GetNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeResponse
 */
GetNodeResponse Client::getNodeWithOptions(const GetNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetNode"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodeResponse>();
}

/**
 * @summary Indicates whether the request is successful.
 *
 * @param request GetNodeRequest
 * @return GetNodeResponse
 */
GetNodeResponse Client::getNode(const GetNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNodeWithOptions(request, runtime);
}

/**
 * @summary Queries a list of instances.
 *
 * @param request GetNodeChildrenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeChildrenResponse
 */
GetNodeChildrenResponse Client::getNodeChildrenWithOptions(const GetNodeChildrenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetNodeChildren"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodeChildrenResponse>();
}

/**
 * @summary Queries a list of instances.
 *
 * @param request GetNodeChildrenRequest
 * @return GetNodeChildrenResponse
 */
GetNodeChildrenResponse Client::getNodeChildren(const GetNodeChildrenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNodeChildrenWithOptions(request, runtime);
}

/**
 * @summary Queries the code of a node.
 *
 * @param request GetNodeCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeCodeResponse
 */
GetNodeCodeResponse Client::getNodeCodeWithOptions(const GetNodeCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetNodeCode"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodeCodeResponse>();
}

/**
 * @summary Queries the code of a node.
 *
 * @param request GetNodeCodeRequest
 * @return GetNodeCodeResponse
 */
GetNodeCodeResponse Client::getNodeCode(const GetNodeCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNodeCodeWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetNodeOnBaseline is deprecated
 *
 * @summary Queries the nodes associated with a baseline.
 *
 * @param request GetNodeOnBaselineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeOnBaselineResponse
 */
GetNodeOnBaselineResponse Client::getNodeOnBaselineWithOptions(const GetNodeOnBaselineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaselineId()) {
    body["BaselineId"] = request.baselineId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetNodeOnBaseline"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodeOnBaselineResponse>();
}

/**
 * @deprecated OpenAPI GetNodeOnBaseline is deprecated
 *
 * @summary Queries the nodes associated with a baseline.
 *
 * @param request GetNodeOnBaselineRequest
 * @return GetNodeOnBaselineResponse
 */
GetNodeOnBaselineResponse Client::getNodeOnBaseline(const GetNodeOnBaselineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNodeOnBaselineWithOptions(request, runtime);
}

/**
 * @summary Queries a list of ancestor nodes of a node.
 *
 * @param request GetNodeParentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeParentsResponse
 */
GetNodeParentsResponse Client::getNodeParentsWithOptions(const GetNodeParentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetNodeParents"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodeParentsResponse>();
}

/**
 * @summary Queries a list of ancestor nodes of a node.
 *
 * @param request GetNodeParentsRequest
 * @return GetNodeParentsResponse
 */
GetNodeParentsResponse Client::getNodeParents(const GetNodeParentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNodeParentsWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetNodeTypeListInfo is deprecated
 *
 * @summary Queries the information about node types, including the code and name of a node type.
 *
 * @param request GetNodeTypeListInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeTypeListInfoResponse
 */
GetNodeTypeListInfoResponse Client::getNodeTypeListInfoWithOptions(const GetNodeTypeListInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasLocale()) {
    body["Locale"] = request.locale();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetNodeTypeListInfo"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodeTypeListInfoResponse>();
}

/**
 * @deprecated OpenAPI GetNodeTypeListInfo is deprecated
 *
 * @summary Queries the information about node types, including the code and name of a node type.
 *
 * @param request GetNodeTypeListInfoRequest
 * @return GetNodeTypeListInfoResponse
 */
GetNodeTypeListInfoResponse Client::getNodeTypeListInfo(const GetNodeTypeListInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNodeTypeListInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the records that are generated on a specified date for access to the high-risk sensitive data in all the DataWorks workspaces of a tenant.
 *
 * @param request GetOpRiskDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOpRiskDataResponse
 */
GetOpRiskDataResponse Client::getOpRiskDataWithOptions(const GetOpRiskDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOpRiskData"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOpRiskDataResponse>();
}

/**
 * @summary Queries the records that are generated on a specified date for access to the high-risk sensitive data in all the DataWorks workspaces of a tenant.
 *
 * @param request GetOpRiskDataRequest
 * @return GetOpRiskDataResponse
 */
GetOpRiskDataResponse Client::getOpRiskData(const GetOpRiskDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOpRiskDataWithOptions(request, runtime);
}

/**
 * @summary Queries the records that are generated on a specified date for access to sensitive data in all the DataWorks workspaces of a tenant.
 *
 * @param request GetOpSensitiveDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOpSensitiveDataResponse
 */
GetOpSensitiveDataResponse Client::getOpSensitiveDataWithOptions(const GetOpSensitiveDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOpSensitiveData"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOpSensitiveDataResponse>();
}

/**
 * @summary Queries the records that are generated on a specified date for access to sensitive data in all the DataWorks workspaces of a tenant.
 *
 * @param request GetOpSensitiveDataRequest
 * @return GetOpSensitiveDataResponse
 */
GetOpSensitiveDataResponse Client::getOpSensitiveData(const GetOpSensitiveDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOpSensitiveDataWithOptions(request, runtime);
}

/**
 * @summary Queries the option settings of an extension in a workspace.
 *
 * @param request GetOptionValueForProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOptionValueForProjectResponse
 */
GetOptionValueForProjectResponse Client::getOptionValueForProjectWithOptions(const GetOptionValueForProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExtensionCode()) {
    body["ExtensionCode"] = request.extensionCode();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetOptionValueForProject"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOptionValueForProjectResponse>();
}

/**
 * @summary Queries the option settings of an extension in a workspace.
 *
 * @param request GetOptionValueForProjectRequest
 * @return GetOptionValueForProjectResponse
 */
GetOptionValueForProjectResponse Client::getOptionValueForProject(const GetOptionValueForProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOptionValueForProjectWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a permission request order.
 *
 * @param request GetPermissionApplyOrderDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPermissionApplyOrderDetailResponse
 */
GetPermissionApplyOrderDetailResponse Client::getPermissionApplyOrderDetailWithOptions(const GetPermissionApplyOrderDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.flowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPermissionApplyOrderDetail"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPermissionApplyOrderDetailResponse>();
}

/**
 * @summary Queries the details of a permission request order.
 *
 * @param request GetPermissionApplyOrderDetailRequest
 * @return GetPermissionApplyOrderDetailResponse
 */
GetPermissionApplyOrderDetailResponse Client::getPermissionApplyOrderDetail(const GetPermissionApplyOrderDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPermissionApplyOrderDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a DataWorks workspace.
 *
 * @param request GetProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProjectWithOptions(const GetProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    query["ProjectIdentifier"] = request.projectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProject"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
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
 * @param request GetProjectRequest
 * @return GetProjectResponse
 */
GetProjectResponse Client::getProject(const GetProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetProjectDetail is deprecated
 *
 * @summary Queries the information about a DataWorks workspace.
 *
 * @param request GetProjectDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectDetailResponse
 */
GetProjectDetailResponse Client::getProjectDetailWithOptions(const GetProjectDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProjectDetail"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectDetailResponse>();
}

/**
 * @deprecated OpenAPI GetProjectDetail is deprecated
 *
 * @summary Queries the information about a DataWorks workspace.
 *
 * @param request GetProjectDetailRequest
 * @return GetProjectDetailResponse
 */
GetProjectDetailResponse Client::getProjectDetail(const GetProjectDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectDetailWithOptions(request, runtime);
}

/**
 * @param request GetQualityEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityEntityResponse
 */
GetQualityEntityResponse Client::getQualityEntityWithOptions(const GetQualityEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEnvType()) {
    body["EnvType"] = request.envType();
  }

  if (!!request.hasMatchExpression()) {
    body["MatchExpression"] = request.matchExpression();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  if (!!request.hasTableName()) {
    body["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetQualityEntity"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityEntityResponse>();
}

/**
 * @param request GetQualityEntityRequest
 * @return GetQualityEntityResponse
 */
GetQualityEntityResponse Client::getQualityEntity(const GetQualityEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityEntityWithOptions(request, runtime);
}

/**
 * @summary Queries the subscribers of a partition filter expression.
 *
 * @param request GetQualityFollowerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityFollowerResponse
 */
GetQualityFollowerResponse Client::getQualityFollowerWithOptions(const GetQualityFollowerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEntityId()) {
    body["EntityId"] = request.entityId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetQualityFollower"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityFollowerResponse>();
}

/**
 * @summary Queries the subscribers of a partition filter expression.
 *
 * @param request GetQualityFollowerRequest
 * @return GetQualityFollowerResponse
 */
GetQualityFollowerResponse Client::getQualityFollower(const GetQualityFollowerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityFollowerWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a monitoring rule.
 *
 * @param request GetQualityRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualityRuleResponse
 */
GetQualityRuleResponse Client::getQualityRuleWithOptions(const GetQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  if (!!request.hasRuleId()) {
    body["RuleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetQualityRule"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualityRuleResponse>();
}

/**
 * @summary Queries the information about a monitoring rule.
 *
 * @param request GetQualityRuleRequest
 * @return GetQualityRuleResponse
 */
GetQualityRuleResponse Client::getQualityRule(const GetQualityRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualityRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a custom alert rule.
 *
 * @description ## Debugging
 * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=dataworks-public\\&api=GetRemind\\&type=RPC\\&version=2020-05-18)
 *
 * @param request GetRemindRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRemindResponse
 */
GetRemindResponse Client::getRemindWithOptions(const GetRemindRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRemindId()) {
    body["RemindId"] = request.remindId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetRemind"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRemindResponse>();
}

/**
 * @summary Queries the information about a custom alert rule.
 *
 * @description ## Debugging
 * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=dataworks-public\\&api=GetRemind\\&type=RPC\\&version=2020-05-18)
 *
 * @param request GetRemindRequest
 * @return GetRemindResponse
 */
GetRemindResponse Client::getRemind(const GetRemindRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRemindWithOptions(request, runtime);
}

/**
 * @summary Queries the latest sensitive data in all the DataWorks workspaces of a tenant.
 *
 * @param request GetSensitiveDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSensitiveDataResponse
 */
GetSensitiveDataResponse Client::getSensitiveDataWithOptions(const GetSensitiveDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSensitiveData"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSensitiveDataResponse>();
}

/**
 * @summary Queries the latest sensitive data in all the DataWorks workspaces of a tenant.
 *
 * @param request GetSensitiveDataRequest
 * @return GetSensitiveDataResponse
 */
GetSensitiveDataResponse Client::getSensitiveData(const GetSensitiveDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSensitiveDataWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetSuccessInstanceTrend is deprecated
 *
 * @summary Queries the statistics of instances in different periods of a day.
 *
 * @param request GetSuccessInstanceTrendRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSuccessInstanceTrendResponse
 */
GetSuccessInstanceTrendResponse Client::getSuccessInstanceTrendWithOptions(const GetSuccessInstanceTrendRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSuccessInstanceTrend"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSuccessInstanceTrendResponse>();
}

/**
 * @deprecated OpenAPI GetSuccessInstanceTrend is deprecated
 *
 * @summary Queries the statistics of instances in different periods of a day.
 *
 * @param request GetSuccessInstanceTrendRequest
 * @return GetSuccessInstanceTrendResponse
 */
GetSuccessInstanceTrendResponse Client::getSuccessInstanceTrend(const GetSuccessInstanceTrendRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSuccessInstanceTrendWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an event.
 *
 * @description ****
 *
 * @param request GetTopicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTopicResponse
 */
GetTopicResponse Client::getTopicWithOptions(const GetTopicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTopicId()) {
    body["TopicId"] = request.topicId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetTopic"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTopicResponse>();
}

/**
 * @summary Queries the information about an event.
 *
 * @description ****
 *
 * @param request GetTopicRequest
 * @return GetTopicResponse
 */
GetTopicResponse Client::getTopic(const GetTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTopicWithOptions(request, runtime);
}

/**
 * @summary Queries baseline instances affected by an event.
 *
 * @description ## Debugging
 * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=dataworks-public\\&api=GetTopicInfluence\\&type=RPC\\&version=2020-05-18)
 *
 * @param request GetTopicInfluenceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTopicInfluenceResponse
 */
GetTopicInfluenceResponse Client::getTopicInfluenceWithOptions(const GetTopicInfluenceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTopicId()) {
    body["TopicId"] = request.topicId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetTopicInfluence"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTopicInfluenceResponse>();
}

/**
 * @summary Queries baseline instances affected by an event.
 *
 * @description ## Debugging
 * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=dataworks-public\\&api=GetTopicInfluence\\&type=RPC\\&version=2020-05-18)
 *
 * @param request GetTopicInfluenceRequest
 * @return GetTopicInfluenceResponse
 */
GetTopicInfluenceResponse Client::getTopicInfluence(const GetTopicInfluenceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTopicInfluenceWithOptions(request, runtime);
}

/**
 * @summary Imports data sources from your on-premises machine to a specific DataWorks workspace.
 *
 * @description You can import self-managed data sources or data sources that are exported from other DataWorks workspaces to a specific DataWorks workspace.
 * *   To import a self-managed data source to a DataWorks workspace, the data source type must be supported by DataWorks. For more information about the types of data sources supported by DataWorks, see [Supported data stores](https://help.aliyun.com/document_detail/181656.html).
 * *   For more information about how to export data sources from DataWorks workspaces to your on-premises machine, see [ExportDataSources](https://help.aliyun.com/document_detail/279570.html).
 *
 * @param request ImportDataSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportDataSourcesResponse
 */
ImportDataSourcesResponse Client::importDataSourcesWithOptions(const ImportDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataSources()) {
    query["DataSources"] = request.dataSources();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportDataSources"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportDataSourcesResponse>();
}

/**
 * @summary Imports data sources from your on-premises machine to a specific DataWorks workspace.
 *
 * @description You can import self-managed data sources or data sources that are exported from other DataWorks workspaces to a specific DataWorks workspace.
 * *   To import a self-managed data source to a DataWorks workspace, the data source type must be supported by DataWorks. For more information about the types of data sources supported by DataWorks, see [Supported data stores](https://help.aliyun.com/document_detail/181656.html).
 * *   For more information about how to export data sources from DataWorks workspaces to your on-premises machine, see [ExportDataSources](https://help.aliyun.com/document_detail/279570.html).
 *
 * @param request ImportDataSourcesRequest
 * @return ImportDataSourcesResponse
 */
ImportDataSourcesResponse Client::importDataSources(const ImportDataSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importDataSourcesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of alerts.
 *
 * @param request ListAlertMessagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlertMessagesResponse
 */
ListAlertMessagesResponse Client::listAlertMessagesWithOptions(const ListAlertMessagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertMethods()) {
    body["AlertMethods"] = request.alertMethods();
  }

  if (!!request.hasAlertRuleTypes()) {
    body["AlertRuleTypes"] = request.alertRuleTypes();
  }

  if (!!request.hasAlertUser()) {
    body["AlertUser"] = request.alertUser();
  }

  if (!!request.hasBaselineId()) {
    body["BaselineId"] = request.baselineId();
  }

  if (!!request.hasBeginTime()) {
    body["BeginTime"] = request.beginTime();
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

  if (!!request.hasRemindId()) {
    body["RemindId"] = request.remindId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAlertMessages"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlertMessagesResponse>();
}

/**
 * @summary Queries a list of alerts.
 *
 * @param request ListAlertMessagesRequest
 * @return ListAlertMessagesResponse
 */
ListAlertMessagesResponse Client::listAlertMessages(const ListAlertMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAlertMessagesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of baselines.
 *
 * @param request ListBaselineConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBaselineConfigsResponse
 */
ListBaselineConfigsResponse Client::listBaselineConfigsWithOptions(const ListBaselineConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaselineTypes()) {
    body["BaselineTypes"] = request.baselineTypes();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasSearchText()) {
    body["SearchText"] = request.searchText();
  }

  if (!!request.hasUseflag()) {
    body["Useflag"] = request.useflag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListBaselineConfigs"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBaselineConfigsResponse>();
}

/**
 * @summary Queries a list of baselines.
 *
 * @param request ListBaselineConfigsRequest
 * @return ListBaselineConfigsResponse
 */
ListBaselineConfigsResponse Client::listBaselineConfigs(const ListBaselineConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBaselineConfigsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of baseline instances.
 *
 * @param request ListBaselineStatusesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBaselineStatusesResponse
 */
ListBaselineStatusesResponse Client::listBaselineStatusesWithOptions(const ListBaselineStatusesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaselineTypes()) {
    body["BaselineTypes"] = request.baselineTypes();
  }

  if (!!request.hasBizdate()) {
    body["Bizdate"] = request.bizdate();
  }

  if (!!request.hasFinishStatus()) {
    body["FinishStatus"] = request.finishStatus();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  if (!!request.hasSearchText()) {
    body["SearchText"] = request.searchText();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasTopicId()) {
    body["TopicId"] = request.topicId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListBaselineStatuses"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBaselineStatusesResponse>();
}

/**
 * @summary Queries a list of baseline instances.
 *
 * @param request ListBaselineStatusesRequest
 * @return ListBaselineStatusesResponse
 */
ListBaselineStatusesResponse Client::listBaselineStatuses(const ListBaselineStatusesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBaselineStatusesWithOptions(request, runtime);
}

/**
 * @summary Obtains a list of baselines.
 *
 * @param request ListBaselinesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBaselinesResponse
 */
ListBaselinesResponse Client::listBaselinesWithOptions(const ListBaselinesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaselineTypes()) {
    body["BaselineTypes"] = request.baselineTypes();
  }

  if (!!request.hasEnable()) {
    body["Enable"] = request.enable();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasSearchText()) {
    body["SearchText"] = request.searchText();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListBaselines"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBaselinesResponse>();
}

/**
 * @summary Obtains a list of baselines.
 *
 * @param request ListBaselinesRequest
 * @return ListBaselinesResponse
 */
ListBaselinesResponse Client::listBaselines(const ListBaselinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBaselinesWithOptions(request, runtime);
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
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListBusiness"},
    {"version" , "2020-05-18"},
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
 * @summary Queries a list of compute engines that are associated with a DataWorks workspace.
 *
 * @param request ListCalcEnginesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCalcEnginesResponse
 */
ListCalcEnginesResponse Client::listCalcEnginesWithOptions(const ListCalcEnginesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalcEngineType()) {
    query["CalcEngineType"] = request.calcEngineType();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.envType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCalcEngines"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCalcEnginesResponse>();
}

/**
 * @summary Queries a list of compute engines that are associated with a DataWorks workspace.
 *
 * @param request ListCalcEnginesRequest
 * @return ListCalcEnginesResponse
 */
ListCalcEnginesResponse Client::listCalcEngines(const ListCalcEnginesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCalcEnginesWithOptions(request, runtime);
}

/**
 * @summary Queries the check results of extension point events.
 *
 * @param request ListCheckProcessesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCheckProcessesResponse
 */
ListCheckProcessesResponse Client::listCheckProcessesWithOptions(const ListCheckProcessesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEventCode()) {
    body["EventCode"] = request.eventCode();
  }

  if (!!request.hasMessageId()) {
    body["MessageId"] = request.messageId();
  }

  if (!!request.hasOperator()) {
    body["Operator"] = request._operator();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListCheckProcesses"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCheckProcessesResponse>();
}

/**
 * @summary Queries the check results of extension point events.
 *
 * @param request ListCheckProcessesRequest
 * @return ListCheckProcessesResponse
 */
ListCheckProcessesResponse Client::listCheckProcesses(const ListCheckProcessesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCheckProcessesWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of submodules in a workspace. You can query information about SPARK parameters.
 *
 * @param request ListClusterConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClusterConfigsResponse
 */
ListClusterConfigsResponse Client::listClusterConfigsWithOptions(const ListClusterConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusterConfigs"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClusterConfigsResponse>();
}

/**
 * @summary Queries the configurations of submodules in a workspace. You can query information about SPARK parameters.
 *
 * @param request ListClusterConfigsRequest
 * @return ListClusterConfigsResponse
 */
ListClusterConfigsResponse Client::listClusterConfigs(const ListClusterConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClusterConfigsWithOptions(request, runtime);
}

/**
 * @summary Queries clusters that are registered in DataWorks. E-MapReduce (EMR) clusters and Cloudera\\"s Distribution Including Apache Hadoop (CDH) clusters are supported.
 *
 * @param request ListClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClustersResponse
 */
ListClustersResponse Client::listClustersWithOptions(const ListClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusters"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClustersResponse>();
}

/**
 * @summary Queries clusters that are registered in DataWorks. E-MapReduce (EMR) clusters and Cloudera\\"s Distribution Including Apache Hadoop (CDH) clusters are supported.
 *
 * @param request ListClustersRequest
 * @return ListClustersResponse
 */
ListClustersResponse Client::listClusters(const ListClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClustersWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListConnections is deprecated
 *
 * @summary Queries a list of data sources.
 *
 * @param request ListConnectionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConnectionsResponse
 */
ListConnectionsResponse Client::listConnectionsWithOptions(const ListConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConnections"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConnectionsResponse>();
}

/**
 * @deprecated OpenAPI ListConnections is deprecated
 *
 * @summary Queries a list of data sources.
 *
 * @param request ListConnectionsRequest
 * @return ListConnectionsResponse
 */
ListConnectionsResponse Client::listConnections(const ListConnectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConnectionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of alert rules configured for a new-version synchronization task. The following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
 *
 * @description You can configure alert rules only for tasks that can be used for real-time data synchronization.
 *
 * @param request ListDIAlarmRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDIAlarmRulesResponse
 */
ListDIAlarmRulesResponse Client::listDIAlarmRulesWithOptions(const ListDIAlarmRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDIJobId()) {
    body["DIJobId"] = request.DIJobId();
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
    {"action" , "ListDIAlarmRules"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDIAlarmRulesResponse>();
}

/**
 * @summary Queries a list of alert rules configured for a new-version synchronization task. The following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
 *
 * @description You can configure alert rules only for tasks that can be used for real-time data synchronization.
 *
 * @param request ListDIAlarmRulesRequest
 * @return ListDIAlarmRulesResponse
 */
ListDIAlarmRulesResponse Client::listDIAlarmRules(const ListDIAlarmRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDIAlarmRulesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of new-version synchronization tasks. The following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
 *
 * @description You can call this operation to obtain only the basic information about the tasks. If you want to obtain the details of a task, call the GetDIJob operation.
 *
 * @param request ListDIJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDIJobsResponse
 */
ListDIJobsResponse Client::listDIJobsWithOptions(const ListDIJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDestinationDataSourceType()) {
    body["DestinationDataSourceType"] = request.destinationDataSourceType();
  }

  if (!!request.hasJobName()) {
    body["JobName"] = request.jobName();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasSourceDataSourceType()) {
    body["SourceDataSourceType"] = request.sourceDataSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDIJobs"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDIJobsResponse>();
}

/**
 * @summary Queries a list of new-version synchronization tasks. The following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
 *
 * @description You can call this operation to obtain only the basic information about the tasks. If you want to obtain the details of a task, call the GetDIJob operation.
 *
 * @param request ListDIJobsRequest
 * @return ListDIJobsResponse
 */
ListDIJobsResponse Client::listDIJobs(const ListDIJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDIJobsWithOptions(request, runtime);
}

/**
 * @summary Queries the default global configurations of synchronization solutions in a specified DataWorks workspace.
 *
 * @description DataWorks allows you to specify a default global configuration only for the processing rules of DDL messages in synchronization solutions. After you configure the **processing rules of DDL messages** in synchronization solutions, the configuration is used as the default global configuration and applies to all real-time synchronization tasks in the solutions. You can modify the **processing rules of DDL messages** based on your business requirements. For more information about how to configure a synchronization solution, see [Synchronization solutions](https://help.aliyun.com/document_detail/199008.html).
 *
 * @param request ListDIProjectConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDIProjectConfigResponse
 */
ListDIProjectConfigResponse Client::listDIProjectConfigWithOptions(const ListDIProjectConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.destinationType();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDIProjectConfig"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDIProjectConfigResponse>();
}

/**
 * @summary Queries the default global configurations of synchronization solutions in a specified DataWorks workspace.
 *
 * @description DataWorks allows you to specify a default global configuration only for the processing rules of DDL messages in synchronization solutions. After you configure the **processing rules of DDL messages** in synchronization solutions, the configuration is used as the default global configuration and applies to all real-time synchronization tasks in the solutions. You can modify the **processing rules of DDL messages** based on your business requirements. For more information about how to configure a synchronization solution, see [Synchronization solutions](https://help.aliyun.com/document_detail/199008.html).
 *
 * @param request ListDIProjectConfigRequest
 * @return ListDIProjectConfigResponse
 */
ListDIProjectConfigResponse Client::listDIProjectConfig(const ListDIProjectConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDIProjectConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the details of directed acyclic graphs (DAGs) for a single data backfill instance based on OpSeq.
 *
 * @description Supported DAG types:
 * *   MANUAL: DAG for a manually triggered workflow
 * *   SMOKE_TEST: DAG for a smoke testing workflow
 * *   SUPPLY_DATA: DAG for a data backfill instance
 * *   BUSINESS_PROCESS_DAG: DAG for a one-time workflow
 * Supported DAG states:
 * *   CREATED: The DAG is created.
 * *   RUNNING: The DAG is running.
 * *   FAILURE: The DAG fails to run.
 * *   SUCCESS: The DAG is successfully run.
 *
 * @param request ListDagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDagsResponse
 */
ListDagsResponse Client::listDagsWithOptions(const ListDagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOpSeq()) {
    body["OpSeq"] = request.opSeq();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDags"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDagsResponse>();
}

/**
 * @summary Queries the details of directed acyclic graphs (DAGs) for a single data backfill instance based on OpSeq.
 *
 * @description Supported DAG types:
 * *   MANUAL: DAG for a manually triggered workflow
 * *   SMOKE_TEST: DAG for a smoke testing workflow
 * *   SUPPLY_DATA: DAG for a data backfill instance
 * *   BUSINESS_PROCESS_DAG: DAG for a one-time workflow
 * Supported DAG states:
 * *   CREATED: The DAG is created.
 * *   RUNNING: The DAG is running.
 * *   FAILURE: The DAG fails to run.
 * *   SUCCESS: The DAG is successfully run.
 *
 * @param request ListDagsRequest
 * @return ListDagsResponse
 */
ListDagsResponse Client::listDags(const ListDagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDagsWithOptions(request, runtime);
}

/**
 * @summary Queries the APIs on which other users are granted the access permissions.
 *
 * @param request ListDataServiceApiAuthoritiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataServiceApiAuthoritiesResponse
 */
ListDataServiceApiAuthoritiesResponse Client::listDataServiceApiAuthoritiesWithOptions(const ListDataServiceApiAuthoritiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  json body = {};
  if (!!request.hasApiNameKeyword()) {
    body["ApiNameKeyword"] = request.apiNameKeyword();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDataServiceApiAuthorities"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataServiceApiAuthoritiesResponse>();
}

/**
 * @summary Queries the APIs on which other users are granted the access permissions.
 *
 * @param request ListDataServiceApiAuthoritiesRequest
 * @return ListDataServiceApiAuthoritiesResponse
 */
ListDataServiceApiAuthoritiesResponse Client::listDataServiceApiAuthorities(const ListDataServiceApiAuthoritiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServiceApiAuthoritiesWithOptions(request, runtime);
}

/**
 * @summary Queries the test records of a DataService Studio API. This API operation allows you to query only the test records that are generated within the previous month.
 *
 * @param request ListDataServiceApiTestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataServiceApiTestResponse
 */
ListDataServiceApiTestResponse Client::listDataServiceApiTestWithOptions(const ListDataServiceApiTestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataServiceApiTest"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataServiceApiTestResponse>();
}

/**
 * @summary Queries the test records of a DataService Studio API. This API operation allows you to query only the test records that are generated within the previous month.
 *
 * @param request ListDataServiceApiTestRequest
 * @return ListDataServiceApiTestResponse
 */
ListDataServiceApiTestResponse Client::listDataServiceApiTest(const ListDataServiceApiTestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServiceApiTestWithOptions(request, runtime);
}

/**
 * @summary Queries a list of APIs in the development state.
 *
 * @param request ListDataServiceApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataServiceApisResponse
 */
ListDataServiceApisResponse Client::listDataServiceApisWithOptions(const ListDataServiceApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiNameKeyword()) {
    body["ApiNameKeyword"] = request.apiNameKeyword();
  }

  if (!!request.hasApiPathKeyword()) {
    body["ApiPathKeyword"] = request.apiPathKeyword();
  }

  if (!!request.hasCreatorId()) {
    body["CreatorId"] = request.creatorId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDataServiceApis"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataServiceApisResponse>();
}

/**
 * @summary Queries a list of APIs in the development state.
 *
 * @param request ListDataServiceApisRequest
 * @return ListDataServiceApisResponse
 */
ListDataServiceApisResponse Client::listDataServiceApis(const ListDataServiceApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServiceApisWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information of applications.
 *
 * @param request ListDataServiceApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataServiceApplicationsResponse
 */
ListDataServiceApplicationsResponse Client::listDataServiceApplicationsWithOptions(const ListDataServiceApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectIdList()) {
    body["ProjectIdList"] = request.projectIdList();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDataServiceApplications"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataServiceApplicationsResponse>();
}

/**
 * @summary Queries the basic information of applications.
 *
 * @param request ListDataServiceApplicationsRequest
 * @return ListDataServiceApplicationsResponse
 */
ListDataServiceApplicationsResponse Client::listDataServiceApplications(const ListDataServiceApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServiceApplicationsWithOptions(request, runtime);
}

/**
 * @summary Queries the APIs that you are authorized to access.
 *
 * @param request ListDataServiceAuthorizedApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataServiceAuthorizedApisResponse
 */
ListDataServiceAuthorizedApisResponse Client::listDataServiceAuthorizedApisWithOptions(const ListDataServiceAuthorizedApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  json body = {};
  if (!!request.hasApiNameKeyword()) {
    body["ApiNameKeyword"] = request.apiNameKeyword();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListDataServiceAuthorizedApis"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataServiceAuthorizedApisResponse>();
}

/**
 * @summary Queries the APIs that you are authorized to access.
 *
 * @param request ListDataServiceAuthorizedApisRequest
 * @return ListDataServiceAuthorizedApisResponse
 */
ListDataServiceAuthorizedApisResponse Client::listDataServiceAuthorizedApis(const ListDataServiceAuthorizedApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServiceAuthorizedApisWithOptions(request, runtime);
}

/**
 * @summary Queries folders.
 *
 * @param request ListDataServiceFoldersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataServiceFoldersResponse
 */
ListDataServiceFoldersResponse Client::listDataServiceFoldersWithOptions(const ListDataServiceFoldersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFolderNameKeyword()) {
    body["FolderNameKeyword"] = request.folderNameKeyword();
  }

  if (!!request.hasGroupId()) {
    body["GroupId"] = request.groupId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDataServiceFolders"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataServiceFoldersResponse>();
}

/**
 * @summary Queries folders.
 *
 * @param request ListDataServiceFoldersRequest
 * @return ListDataServiceFoldersResponse
 */
ListDataServiceFoldersResponse Client::listDataServiceFolders(const ListDataServiceFoldersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServiceFoldersWithOptions(request, runtime);
}

/**
 * @summary Queries business processes.
 *
 * @param request ListDataServiceGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataServiceGroupsResponse
 */
ListDataServiceGroupsResponse Client::listDataServiceGroupsWithOptions(const ListDataServiceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasGroupNameKeyword()) {
    body["GroupNameKeyword"] = request.groupNameKeyword();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDataServiceGroups"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataServiceGroupsResponse>();
}

/**
 * @summary Queries business processes.
 *
 * @param request ListDataServiceGroupsRequest
 * @return ListDataServiceGroupsResponse
 */
ListDataServiceGroupsResponse Client::listDataServiceGroups(const ListDataServiceGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServiceGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of APIs in the published state.
 *
 * @param request ListDataServicePublishedApisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataServicePublishedApisResponse
 */
ListDataServicePublishedApisResponse Client::listDataServicePublishedApisWithOptions(const ListDataServicePublishedApisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiNameKeyword()) {
    body["ApiNameKeyword"] = request.apiNameKeyword();
  }

  if (!!request.hasApiPathKeyword()) {
    body["ApiPathKeyword"] = request.apiPathKeyword();
  }

  if (!!request.hasCreatorId()) {
    body["CreatorId"] = request.creatorId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDataServicePublishedApis"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDataServicePublishedApisResponse>();
}

/**
 * @summary Queries a list of APIs in the published state.
 *
 * @param request ListDataServicePublishedApisRequest
 * @return ListDataServicePublishedApisResponse
 */
ListDataServicePublishedApisResponse Client::listDataServicePublishedApis(const ListDataServicePublishedApisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataServicePublishedApisWithOptions(request, runtime);
}

/**
 * @summary Queries the data sources added to a DataWorks workspace.
 *
 * @param request ListDataSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataSourcesResponse
 */
ListDataSourcesResponse Client::listDataSourcesWithOptions(const ListDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDataSources"},
    {"version" , "2020-05-18"},
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
 * @summary Queries the data sources added to a DataWorks workspace.
 *
 * @param request ListDataSourcesRequest
 * @return ListDataSourcesResponse
 */
ListDataSourcesResponse Client::listDataSources(const ListDataSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSourcesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of deployment packages. This operation is equivalent to viewing a list of deployment packages on the Deployment Packages page of the DataWorks console.
 *
 * @param request ListDeploymentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeploymentsResponse
 */
ListDeploymentsResponse Client::listDeploymentsWithOptions(const ListDeploymentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCreator()) {
    body["Creator"] = request.creator();
  }

  if (!!request.hasEndCreateTime()) {
    body["EndCreateTime"] = request.endCreateTime();
  }

  if (!!request.hasEndExecuteTime()) {
    body["EndExecuteTime"] = request.endExecuteTime();
  }

  if (!!request.hasExecutor()) {
    body["Executor"] = request.executor();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListDeployments"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeploymentsResponse>();
}

/**
 * @summary Queries a list of deployment packages. This operation is equivalent to viewing a list of deployment packages on the Deployment Packages page of the DataWorks console.
 *
 * @param request ListDeploymentsRequest
 * @return ListDeploymentsResponse
 */
ListDeploymentsResponse Client::listDeployments(const ListDeploymentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDeploymentsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of built-in and custom extensions that are enabled in a workspace.
 *
 * @description For information about codes of extension point events, see [Development references: Extension point event codes](https://help.aliyun.com/document_detail/463357.html).
 *
 * @param request ListEnabledExtensionsForProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnabledExtensionsForProjectResponse
 */
ListEnabledExtensionsForProjectResponse Client::listEnabledExtensionsForProjectWithOptions(const ListEnabledExtensionsForProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEventCode()) {
    body["EventCode"] = request.eventCode();
  }

  if (!!request.hasFileType()) {
    body["FileType"] = request.fileType();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListEnabledExtensionsForProject"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnabledExtensionsForProjectResponse>();
}

/**
 * @summary Queries a list of built-in and custom extensions that are enabled in a workspace.
 *
 * @description For information about codes of extension point events, see [Development references: Extension point event codes](https://help.aliyun.com/document_detail/463357.html).
 *
 * @param request ListEnabledExtensionsForProjectRequest
 * @return ListEnabledExtensionsForProjectResponse
 */
ListEnabledExtensionsForProjectResponse Client::listEnabledExtensionsForProject(const ListEnabledExtensionsForProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnabledExtensionsForProjectWithOptions(request, runtime);
}

/**
 * @summary Queries a list of entities by tag. Only entities of the maxcompute-table type are supported.
 *
 * @param tmpReq ListEntitiesByTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEntitiesByTagsResponse
 */
ListEntitiesByTagsResponse Client::listEntitiesByTagsWithOptions(const ListEntitiesByTagsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListEntitiesByTagsShrinkRequest request = ListEntitiesByTagsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEntitiesByTags"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEntitiesByTagsResponse>();
}

/**
 * @summary Queries a list of entities by tag. Only entities of the maxcompute-table type are supported.
 *
 * @param request ListEntitiesByTagsRequest
 * @return ListEntitiesByTagsResponse
 */
ListEntitiesByTagsResponse Client::listEntitiesByTags(const ListEntitiesByTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEntitiesByTagsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tags of an entity. Only entities of the maxcompute-table type are supported.
 *
 * @param request ListEntityTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEntityTagsResponse
 */
ListEntityTagsResponse Client::listEntityTagsWithOptions(const ListEntityTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEntityTags"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEntityTagsResponse>();
}

/**
 * @summary Queries a list of tags of an entity. Only entities of the maxcompute-table type are supported.
 *
 * @param request ListEntityTagsRequest
 * @return ListEntityTagsResponse
 */
ListEntityTagsResponse Client::listEntityTags(const ListEntityTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEntityTagsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of extensions.
 *
 * @param request ListExtensionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListExtensionsResponse
 */
ListExtensionsResponse Client::listExtensionsWithOptions(const ListExtensionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "ListExtensions"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListExtensionsResponse>();
}

/**
 * @summary Queries a list of extensions.
 *
 * @param request ListExtensionsRequest
 * @return ListExtensionsResponse
 */
ListExtensionsResponse Client::listExtensions(const ListExtensionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listExtensionsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about node types, such as the code and name.
 *
 * @param request ListFileTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFileTypeResponse
 */
ListFileTypeResponse Client::listFileTypeWithOptions(const ListFileTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasLocale()) {
    body["Locale"] = request.locale();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListFileType"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFileTypeResponse>();
}

/**
 * @summary Queries the information about node types, such as the code and name.
 *
 * @param request ListFileTypeRequest
 * @return ListFileTypeResponse
 */
ListFileTypeResponse Client::listFileType(const ListFileTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFileTypeWithOptions(request, runtime);
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
    body["FileId"] = request.fileId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListFileVersions"},
    {"version" , "2020-05-18"},
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
  if (!!request.hasExactFileName()) {
    body["ExactFileName"] = request.exactFileName();
  }

  if (!!request.hasFileFolderPath()) {
    body["FileFolderPath"] = request.fileFolderPath();
  }

  if (!!request.hasFileIdIn()) {
    body["FileIdIn"] = request.fileIdIn();
  }

  if (!!request.hasFileTypes()) {
    body["FileTypes"] = request.fileTypes();
  }

  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasLastEditUser()) {
    body["LastEditUser"] = request.lastEditUser();
  }

  if (!!request.hasNeedAbsoluteFolderPath()) {
    body["NeedAbsoluteFolderPath"] = request.needAbsoluteFolderPath();
  }

  if (!!request.hasNeedContent()) {
    body["NeedContent"] = request.needContent();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  if (!!request.hasUseType()) {
    body["UseType"] = request.useType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListFiles"},
    {"version" , "2020-05-18"},
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
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasParentFolderPath()) {
    body["ParentFolderPath"] = request.parentFolderPath();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListFolders"},
    {"version" , "2020-05-18"},
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
 * @summary Queries information about inner nodes. For example, you can call this operation to query the inner nodes of a node group or a do-while node. You cannot call this operation to query the inner nodes of a PAI node.
 *
 * @param request ListInnerNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInnerNodesResponse
 */
ListInnerNodesResponse Client::listInnerNodesWithOptions(const ListInnerNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNodeName()) {
    body["NodeName"] = request.nodeName();
  }

  if (!!request.hasOuterNodeId()) {
    body["OuterNodeId"] = request.outerNodeId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProgramType()) {
    body["ProgramType"] = request.programType();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListInnerNodes"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInnerNodesResponse>();
}

/**
 * @summary Queries information about inner nodes. For example, you can call this operation to query the inner nodes of a node group or a do-while node. You cannot call this operation to query the inner nodes of a PAI node.
 *
 * @param request ListInnerNodesRequest
 * @return ListInnerNodesResponse
 */
ListInnerNodesResponse Client::listInnerNodes(const ListInnerNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInnerNodesWithOptions(request, runtime);
}

/**
 * @summary Queries the trend of the number of auto triggered node instances within a specified period of time.
 *
 * @param request ListInstanceAmountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceAmountResponse
 */
ListInstanceAmountResponse Client::listInstanceAmountWithOptions(const ListInstanceAmountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBeginDate()) {
    body["BeginDate"] = request.beginDate();
  }

  if (!!request.hasEndDate()) {
    body["EndDate"] = request.endDate();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListInstanceAmount"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceAmountResponse>();
}

/**
 * @summary Queries the trend of the number of auto triggered node instances within a specified period of time.
 *
 * @param request ListInstanceAmountRequest
 * @return ListInstanceAmountResponse
 */
ListInstanceAmountResponse Client::listInstanceAmount(const ListInstanceAmountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceAmountWithOptions(request, runtime);
}

/**
 * @summary Queries information about the historical records of all instances. One historical record is generated if an instance is rerun once.
 *
 * @param request ListInstanceHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceHistoryResponse
 */
ListInstanceHistoryResponse Client::listInstanceHistoryWithOptions(const ListInstanceHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListInstanceHistory"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceHistoryResponse>();
}

/**
 * @summary Queries information about the historical records of all instances. One historical record is generated if an instance is rerun once.
 *
 * @param request ListInstanceHistoryRequest
 * @return ListInstanceHistoryResponse
 */
ListInstanceHistoryResponse Client::listInstanceHistory(const ListInstanceHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries a list of instances.
 *
 * @param request ListInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBeginBizdate()) {
    body["BeginBizdate"] = request.beginBizdate();
  }

  if (!!request.hasBizName()) {
    body["BizName"] = request.bizName();
  }

  if (!!request.hasBizdate()) {
    body["Bizdate"] = request.bizdate();
  }

  if (!!request.hasDagId()) {
    body["DagId"] = request.dagId();
  }

  if (!!request.hasEndBizdate()) {
    body["EndBizdate"] = request.endBizdate();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasNodeName()) {
    body["NodeName"] = request.nodeName();
  }

  if (!!request.hasOrderBy()) {
    body["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProgramType()) {
    body["ProgramType"] = request.programType();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary Queries a list of instances.
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the ancestor or descendant lineage of an entity.
 *
 * @param request ListLineageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLineageResponse
 */
ListLineageResponse Client::listLineageWithOptions(const ListLineageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasEntityQualifiedName()) {
    query["EntityQualifiedName"] = request.entityQualifiedName();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLineage"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLineageResponse>();
}

/**
 * @summary Queries the ancestor or descendant lineage of an entity.
 *
 * @param request ListLineageRequest
 * @return ListLineageResponse
 */
ListLineageResponse Client::listLineage(const ListLineageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLineageWithOptions(request, runtime);
}

/**
 * @summary Queries the information about instances in a manually triggered workflow.
 *
 * @param request ListManualDagInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListManualDagInstancesResponse
 */
ListManualDagInstancesResponse Client::listManualDagInstancesWithOptions(const ListManualDagInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDagId()) {
    body["DagId"] = request.dagId();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListManualDagInstances"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListManualDagInstancesResponse>();
}

/**
 * @summary Queries the information about instances in a manually triggered workflow.
 *
 * @param request ListManualDagInstancesRequest
 * @return ListManualDagInstancesResponse
 */
ListManualDagInstancesResponse Client::listManualDagInstances(const ListManualDagInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listManualDagInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on the number of phone call-based alerts or text message-based alerts reported within the tenant to which your account belongs during the previous 30 days.
 *
 * @param request ListMeasureDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMeasureDataResponse
 */
ListMeasureDataResponse Client::listMeasureDataWithOptions(const ListMeasureDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComponentCode()) {
    query["ComponentCode"] = request.componentCode();
  }

  if (!!request.hasDomainCode()) {
    query["DomainCode"] = request.domainCode();
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
    {"action" , "ListMeasureData"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMeasureDataResponse>();
}

/**
 * @summary Queries the statistics on the number of phone call-based alerts or text message-based alerts reported within the tenant to which your account belongs during the previous 30 days.
 *
 * @param request ListMeasureDataRequest
 * @return ListMeasureDataResponse
 */
ListMeasureDataResponse Client::listMeasureData(const ListMeasureDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMeasureDataWithOptions(request, runtime);
}

/**
 * @summary Queries the entities in a collection.
 *
 * @param request ListMetaCollectionEntitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMetaCollectionEntitiesResponse
 */
ListMetaCollectionEntitiesResponse Client::listMetaCollectionEntitiesWithOptions(const ListMetaCollectionEntitiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCollectionQualifiedName()) {
    query["CollectionQualifiedName"] = request.collectionQualifiedName();
  }

  if (!!request.hasEntityType()) {
    query["EntityType"] = request.entityType();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMetaCollectionEntities"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMetaCollectionEntitiesResponse>();
}

/**
 * @summary Queries the entities in a collection.
 *
 * @param request ListMetaCollectionEntitiesRequest
 * @return ListMetaCollectionEntitiesResponse
 */
ListMetaCollectionEntitiesResponse Client::listMetaCollectionEntities(const ListMetaCollectionEntitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMetaCollectionEntitiesWithOptions(request, runtime);
}

/**
 * @summary Queries information about collections. Collections include data albums that are displayed on the Data Map page and categories that are created in the data albums. You can call this API operation to query collections by type.
 *
 * @description The type can be ALBUM or ALBUM_CATEGORY. ALBUM indicates data albums. ALBUM_CATEGORY indicates categories.
 *
 * @param request ListMetaCollectionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMetaCollectionsResponse
 */
ListMetaCollectionsResponse Client::listMetaCollectionsWithOptions(const ListMetaCollectionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdministrator()) {
    query["Administrator"] = request.administrator();
  }

  if (!!request.hasCollectionType()) {
    query["CollectionType"] = request.collectionType();
  }

  if (!!request.hasCreator()) {
    query["Creator"] = request.creator();
  }

  if (!!request.hasFollower()) {
    query["Follower"] = request.follower();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParentQualifiedName()) {
    query["ParentQualifiedName"] = request.parentQualifiedName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMetaCollections"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMetaCollectionsResponse>();
}

/**
 * @summary Queries information about collections. Collections include data albums that are displayed on the Data Map page and categories that are created in the data albums. You can call this API operation to query collections by type.
 *
 * @description The type can be ALBUM or ALBUM_CATEGORY. ALBUM indicates data albums. ALBUM_CATEGORY indicates categories.
 *
 * @param request ListMetaCollectionsRequest
 * @return ListMetaCollectionsResponse
 */
ListMetaCollectionsResponse Client::listMetaCollections(const ListMetaCollectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMetaCollectionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of metadatabases.
 *
 * @param request ListMetaDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMetaDBResponse
 */
ListMetaDBResponse Client::listMetaDBWithOptions(const ListMetaDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMetaDB"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMetaDBResponse>();
}

/**
 * @summary Queries a list of metadatabases.
 *
 * @param request ListMetaDBRequest
 * @return ListMetaDBResponse
 */
ListMetaDBResponse Client::listMetaDB(const ListMetaDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMetaDBWithOptions(request, runtime);
}

/**
 * @summary Queries a list of migration tasks.
 *
 * @param request ListMigrationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMigrationsResponse
 */
ListMigrationsResponse Client::listMigrationsWithOptions(const ListMigrationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMigrationType()) {
    body["MigrationType"] = request.migrationType();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMigrations"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMigrationsResponse>();
}

/**
 * @summary Queries a list of migration tasks.
 *
 * @param request ListMigrationsRequest
 * @return ListMigrationsResponse
 */
ListMigrationsResponse Client::listMigrations(const ListMigrationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMigrationsWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListNodeIO is deprecated
 *
 * @summary Queries the information about one level of ancestor or descendant nodes of a node.
 *
 * @param request ListNodeIORequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodeIOResponse
 */
ListNodeIOResponse Client::listNodeIOWithOptions(const ListNodeIORequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIoType()) {
    body["IoType"] = request.ioType();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNodeIO"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodeIOResponse>();
}

/**
 * @deprecated OpenAPI ListNodeIO is deprecated
 *
 * @summary Queries the information about one level of ancestor or descendant nodes of a node.
 *
 * @param request ListNodeIORequest
 * @return ListNodeIOResponse
 */
ListNodeIOResponse Client::listNodeIO(const ListNodeIORequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodeIOWithOptions(request, runtime);
}

/**
 * @summary Queries the input and output information about a node. Only the ancestor or descendant nodes at the nearest level can be queried each time.
 *
 * @param request ListNodeInputOrOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodeInputOrOutputResponse
 */
ListNodeInputOrOutputResponse Client::listNodeInputOrOutputWithOptions(const ListNodeInputOrOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasIoType()) {
    body["IoType"] = request.ioType();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNodeInputOrOutput"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodeInputOrOutputResponse>();
}

/**
 * @summary Queries the input and output information about a node. Only the ancestor or descendant nodes at the nearest level can be queried each time.
 *
 * @param request ListNodeInputOrOutputRequest
 * @return ListNodeInputOrOutputResponse
 */
ListNodeInputOrOutputResponse Client::listNodeInputOrOutput(const ListNodeInputOrOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodeInputOrOutputWithOptions(request, runtime);
}

/**
 * @summary The ID of the workspace.
 *
 * @param request ListNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodesWithOptions(const ListNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizName()) {
    body["BizName"] = request.bizName();
  }

  if (!!request.hasNodeName()) {
    body["NodeName"] = request.nodeName();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProgramType()) {
    body["ProgramType"] = request.programType();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasSchedulerType()) {
    body["SchedulerType"] = request.schedulerType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNodes"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodesResponse>();
}

/**
 * @summary The ID of the workspace.
 *
 * @param request ListNodesRequest
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodes(const ListNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodesWithOptions(request, runtime);
}

/**
 * @summary Queries nodes in a baseline.
 *
 * @param request ListNodesByBaselineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodesByBaselineResponse
 */
ListNodesByBaselineResponse Client::listNodesByBaselineWithOptions(const ListNodesByBaselineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBaselineId()) {
    body["BaselineId"] = request.baselineId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNodesByBaseline"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodesByBaselineResponse>();
}

/**
 * @summary Queries nodes in a baseline.
 *
 * @param request ListNodesByBaselineRequest
 * @return ListNodesByBaselineResponse
 */
ListNodesByBaselineResponse Client::listNodesByBaseline(const ListNodesByBaselineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodesByBaselineWithOptions(request, runtime);
}

/**
 * @summary Queries nodes based on the output of the nodes.
 *
 * @param request ListNodesByOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodesByOutputResponse
 */
ListNodesByOutputResponse Client::listNodesByOutputWithOptions(const ListNodesByOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOutputs()) {
    body["Outputs"] = request.outputs();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNodesByOutput"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodesByOutputResponse>();
}

/**
 * @summary Queries nodes based on the output of the nodes.
 *
 * @param request ListNodesByOutputRequest
 * @return ListNodesByOutputResponse
 */
ListNodesByOutputResponse Client::listNodesByOutput(const ListNodesByOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodesByOutputWithOptions(request, runtime);
}

/**
 * @summary Queries a list of permission request orders.
 *
 * @param request ListPermissionApplyOrdersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPermissionApplyOrdersResponse
 */
ListPermissionApplyOrdersResponse Client::listPermissionApplyOrdersWithOptions(const ListPermissionApplyOrdersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplyType()) {
    query["ApplyType"] = request.applyType();
  }

  if (!!request.hasCatalogName()) {
    query["CatalogName"] = request.catalogName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEngineType()) {
    query["EngineType"] = request.engineType();
  }

  if (!!request.hasFlowStatus()) {
    query["FlowStatus"] = request.flowStatus();
  }

  if (!!request.hasMaxComputeProjectName()) {
    query["MaxComputeProjectName"] = request.maxComputeProjectName();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryType()) {
    query["QueryType"] = request.queryType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPermissionApplyOrders"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPermissionApplyOrdersResponse>();
}

/**
 * @summary Queries a list of permission request orders.
 *
 * @param request ListPermissionApplyOrdersRequest
 * @return ListPermissionApplyOrdersResponse
 */
ListPermissionApplyOrdersResponse Client::listPermissionApplyOrders(const ListPermissionApplyOrdersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPermissionApplyOrdersWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI ListProgramTypeCount is deprecated
 *
 * @summary Queries the distribution of different types of nodes.
 *
 * @param request ListProgramTypeCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProgramTypeCountResponse
 */
ListProgramTypeCountResponse Client::listProgramTypeCountWithOptions(const ListProgramTypeCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListProgramTypeCount"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProgramTypeCountResponse>();
}

/**
 * @deprecated OpenAPI ListProgramTypeCount is deprecated
 *
 * @summary Queries the distribution of different types of nodes.
 *
 * @param request ListProgramTypeCountRequest
 * @return ListProgramTypeCountResponse
 */
ListProgramTypeCountResponse Client::listProgramTypeCount(const ListProgramTypeCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProgramTypeCountWithOptions(request, runtime);
}

/**
 * @summary Queries the IDs of the workspaces on which a specific Alibaba Cloud account or RAM user has permissions in a specific region.
 *
 * @description An Alibaba Cloud account can assume a role such as the developer, O\\&M engineer, or workspace administrator role in a workspace. For more information, see [Manage members and roles](https://help.aliyun.com/document_detail/136941.html).
 *
 * @param request ListProjectIdsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectIdsResponse
 */
ListProjectIdsResponse Client::listProjectIdsWithOptions(const ListProjectIdsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjectIds"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectIdsResponse>();
}

/**
 * @summary Queries the IDs of the workspaces on which a specific Alibaba Cloud account or RAM user has permissions in a specific region.
 *
 * @description An Alibaba Cloud account can assume a role such as the developer, O\\&M engineer, or workspace administrator role in a workspace. For more information, see [Manage members and roles](https://help.aliyun.com/document_detail/136941.html).
 *
 * @param request ListProjectIdsRequest
 * @return ListProjectIdsResponse
 */
ListProjectIdsResponse Client::listProjectIds(const ListProjectIdsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectIdsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of existing members in a DataWorks workspace.
 *
 * @param request ListProjectMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectMembersResponse
 */
ListProjectMembersResponse Client::listProjectMembersWithOptions(const ListProjectMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjectMembers"},
    {"version" , "2020-05-18"},
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
 * @summary Queries a list of existing members in a DataWorks workspace.
 *
 * @param request ListProjectMembersRequest
 * @return ListProjectMembersResponse
 */
ListProjectMembersResponse Client::listProjectMembers(const ListProjectMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectMembersWithOptions(request, runtime);
}

/**
 * @summary Queries a list of roles in a DataWorks workspace.
 *
 * @description ## Debugging
 * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=dataworks-public\\&api=ListProjectRoles\\&type=RPC\\&version=2020-05-18)
 *
 * @param request ListProjectRolesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectRolesResponse
 */
ListProjectRolesResponse Client::listProjectRolesWithOptions(const ListProjectRolesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjectRoles"},
    {"version" , "2020-05-18"},
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
 * @summary Queries a list of roles in a DataWorks workspace.
 *
 * @description ## Debugging
 * [OpenAPI Explorer automatically calculates the signature value. For your convenience, we recommend that you call this operation in OpenAPI Explorer. OpenAPI Explorer dynamically generates the sample code of the operation for different SDKs.](https://api.aliyun.com/#product=dataworks-public\\&api=ListProjectRoles\\&type=RPC\\&version=2020-05-18)
 *
 * @param request ListProjectRolesRequest
 * @return ListProjectRolesResponse
 */
ListProjectRolesResponse Client::listProjectRoles(const ListProjectRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectRolesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of DataWorks workspaces of the tenant to which a user belongs.
 *
 * @param tmpReq ListProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjectsWithOptions(const ListProjectsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListProjectsShrinkRequest request = ListProjectsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProjects"},
    {"version" , "2020-05-18"},
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
 * @summary Queries a list of DataWorks workspaces of the tenant to which a user belongs.
 *
 * @param request ListProjectsRequest
 * @return ListProjectsResponse
 */
ListProjectsResponse Client::listProjects(const ListProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of historical check results based on a partition filter expression.
 *
 * @description ****
 *
 * @param request ListQualityResultsByEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQualityResultsByEntityResponse
 */
ListQualityResultsByEntityResponse Client::listQualityResultsByEntityWithOptions(const ListQualityResultsByEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndDate()) {
    body["EndDate"] = request.endDate();
  }

  if (!!request.hasEntityId()) {
    body["EntityId"] = request.entityId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListQualityResultsByEntity"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQualityResultsByEntityResponse>();
}

/**
 * @summary Queries a list of historical check results based on a partition filter expression.
 *
 * @description ****
 *
 * @param request ListQualityResultsByEntityRequest
 * @return ListQualityResultsByEntityResponse
 */
ListQualityResultsByEntityResponse Client::listQualityResultsByEntity(const ListQualityResultsByEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQualityResultsByEntityWithOptions(request, runtime);
}

/**
 * @summary Queries monitoring results after the data quality of a data source or a compute engine is monitored based on monitoring rules.
 *
 * @param request ListQualityResultsByRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQualityResultsByRuleResponse
 */
ListQualityResultsByRuleResponse Client::listQualityResultsByRuleWithOptions(const ListQualityResultsByRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEndDate()) {
    body["EndDate"] = request.endDate();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  if (!!request.hasRuleId()) {
    body["RuleId"] = request.ruleId();
  }

  if (!!request.hasStartDate()) {
    body["StartDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListQualityResultsByRule"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQualityResultsByRuleResponse>();
}

/**
 * @summary Queries monitoring results after the data quality of a data source or a compute engine is monitored based on monitoring rules.
 *
 * @param request ListQualityResultsByRuleRequest
 * @return ListQualityResultsByRuleResponse
 */
ListQualityResultsByRuleResponse Client::listQualityResultsByRule(const ListQualityResultsByRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQualityResultsByRuleWithOptions(request, runtime);
}

/**
 * @summary Queries monitoring rules based on a partition filter expression.
 *
 * @param request ListQualityRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListQualityRulesResponse
 */
ListQualityRulesResponse Client::listQualityRulesWithOptions(const ListQualityRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEntityId()) {
    body["EntityId"] = request.entityId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListQualityRules"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListQualityRulesResponse>();
}

/**
 * @summary Queries monitoring rules based on a partition filter expression.
 *
 * @param request ListQualityRulesRequest
 * @return ListQualityRulesResponse
 */
ListQualityRulesResponse Client::listQualityRules(const ListQualityRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listQualityRulesWithOptions(request, runtime);
}

/**
 * @summary Queries synchronization tasks in Data Integration that use a specific data source.
 *
 * @param request ListRefDISyncTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRefDISyncTasksResponse
 */
ListRefDISyncTasksResponse Client::listRefDISyncTasksWithOptions(const ListRefDISyncTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasourceName()) {
    query["DatasourceName"] = request.datasourceName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasRefType()) {
    query["RefType"] = request.refType();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRefDISyncTasks"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRefDISyncTasksResponse>();
}

/**
 * @summary Queries synchronization tasks in Data Integration that use a specific data source.
 *
 * @param request ListRefDISyncTasksRequest
 * @return ListRefDISyncTasksResponse
 */
ListRefDISyncTasksResponse Client::listRefDISyncTasks(const ListRefDISyncTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRefDISyncTasksWithOptions(request, runtime);
}

/**
 * @summary Queries a list of custom alert rules.
 *
 * @param request ListRemindsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRemindsResponse
 */
ListRemindsResponse Client::listRemindsWithOptions(const ListRemindsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertTarget()) {
    body["AlertTarget"] = request.alertTarget();
  }

  if (!!request.hasFounder()) {
    body["Founder"] = request.founder();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasRemindTypes()) {
    body["RemindTypes"] = request.remindTypes();
  }

  if (!!request.hasSearchText()) {
    body["SearchText"] = request.searchText();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListReminds"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRemindsResponse>();
}

/**
 * @summary Queries a list of custom alert rules.
 *
 * @param request ListRemindsRequest
 * @return ListRemindsResponse
 */
ListRemindsResponse Client::listReminds(const ListRemindsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRemindsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of resource groups of a specific type.
 *
 * @param tmpReq ListResourceGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourceGroupsResponse
 */
ListResourceGroupsResponse Client::listResourceGroupsWithOptions(const ListResourceGroupsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListResourceGroupsShrinkRequest request = ListResourceGroupsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasBizExtKey()) {
    query["BizExtKey"] = request.bizExtKey();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasResourceGroupType()) {
    query["ResourceGroupType"] = request.resourceGroupType();
  }

  if (!!request.hasResourceManagerResourceGroupId()) {
    query["ResourceManagerResourceGroupId"] = request.resourceManagerResourceGroupId();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResourceGroups"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourceGroupsResponse>();
}

/**
 * @summary Queries a list of resource groups of a specific type.
 *
 * @param request ListResourceGroupsRequest
 * @return ListResourceGroupsResponse
 */
ListResourceGroupsResponse Client::listResourceGroups(const ListResourceGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listResourceGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of on-duty engineers in a shift schedule.
 *
 * @param request ListShiftPersonnelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListShiftPersonnelsResponse
 */
ListShiftPersonnelsResponse Client::listShiftPersonnelsWithOptions(const ListShiftPersonnelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBeginTime()) {
    body["BeginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasShiftPersonUID()) {
    body["ShiftPersonUID"] = request.shiftPersonUID();
  }

  if (!!request.hasShiftScheduleIdentifier()) {
    body["ShiftScheduleIdentifier"] = request.shiftScheduleIdentifier();
  }

  if (!!request.hasUserType()) {
    body["UserType"] = request.userType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListShiftPersonnels"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListShiftPersonnelsResponse>();
}

/**
 * @summary Queries a list of on-duty engineers in a shift schedule.
 *
 * @param request ListShiftPersonnelsRequest
 * @return ListShiftPersonnelsResponse
 */
ListShiftPersonnelsResponse Client::listShiftPersonnels(const ListShiftPersonnelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listShiftPersonnelsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of shift schedules in Operation Center.
 *
 * @param request ListShiftSchedulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListShiftSchedulesResponse
 */
ListShiftSchedulesResponse Client::listShiftSchedulesWithOptions(const ListShiftSchedulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasShiftScheduleName()) {
    body["ShiftScheduleName"] = request.shiftScheduleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListShiftSchedules"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListShiftSchedulesResponse>();
}

/**
 * @summary Queries a list of shift schedules in Operation Center.
 *
 * @param request ListShiftSchedulesRequest
 * @return ListShiftSchedulesResponse
 */
ListShiftSchedulesResponse Client::listShiftSchedules(const ListShiftSchedulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listShiftSchedulesWithOptions(request, runtime);
}

/**
 * @summary Queries the trend of the number of auto triggered node instances that are successfully run every hour on the hour of the current day.
 *
 * @param request ListSuccessInstanceAmountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSuccessInstanceAmountResponse
 */
ListSuccessInstanceAmountResponse Client::listSuccessInstanceAmountWithOptions(const ListSuccessInstanceAmountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListSuccessInstanceAmount"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSuccessInstanceAmountResponse>();
}

/**
 * @summary Queries the trend of the number of auto triggered node instances that are successfully run every hour on the hour of the current day.
 *
 * @param request ListSuccessInstanceAmountRequest
 * @return ListSuccessInstanceAmountResponse
 */
ListSuccessInstanceAmountResponse Client::listSuccessInstanceAmount(const ListSuccessInstanceAmountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSuccessInstanceAmountWithOptions(request, runtime);
}

/**
 * @summary Queries a list of table levels. This operation will be replaced soon. We recommend that you do not call this operation.
 *
 * @param request ListTableLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTableLevelResponse
 */
ListTableLevelResponse Client::listTableLevelWithOptions(const ListTableLevelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTableLevel"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTableLevelResponse>();
}

/**
 * @summary Queries a list of table levels. This operation will be replaced soon. We recommend that you do not call this operation.
 *
 * @param request ListTableLevelRequest
 * @return ListTableLevelResponse
 */
ListTableLevelResponse Client::listTableLevel(const ListTableLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTableLevelWithOptions(request, runtime);
}

/**
 * @summary Queries a list of table themes. This operation will be replaced soon. We recommend that you do not call this operation.
 *
 * @param request ListTableThemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTableThemeResponse
 */
ListTableThemeResponse Client::listTableThemeWithOptions(const ListTableThemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTableTheme"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTableThemeResponse>();
}

/**
 * @summary Queries a list of table themes. This operation will be replaced soon. We recommend that you do not call this operation.
 *
 * @param request ListTableThemeRequest
 * @return ListTableThemeResponse
 */
ListTableThemeResponse Client::listTableTheme(const ListTableThemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTableThemeWithOptions(request, runtime);
}

/**
 * @summary Obtains tables of different data source types within a tenant by page.
 *
 * @param request ListTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTablesWithOptions(const ListTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataSourceType()) {
    query["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTables"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTablesResponse>();
}

/**
 * @summary Obtains tables of different data source types within a tenant by page.
 *
 * @param request ListTablesRequest
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTables(const ListTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTablesWithOptions(request, runtime);
}

/**
 * @summary Queries events.
 *
 * @param request ListTopicsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTopicsResponse
 */
ListTopicsResponse Client::listTopicsWithOptions(const ListTopicsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBeginTime()) {
    body["BeginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasTopicStatuses()) {
    body["TopicStatuses"] = request.topicStatuses();
  }

  if (!!request.hasTopicTypes()) {
    body["TopicTypes"] = request.topicTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListTopics"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTopicsResponse>();
}

/**
 * @summary Queries events.
 *
 * @param request ListTopicsRequest
 * @return ListTopicsResponse
 */
ListTopicsResponse Client::listTopics(const ListTopicsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTopicsWithOptions(request, runtime);
}

/**
 * @summary Undeploys a node.
 *
 * @param request OfflineNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OfflineNodeResponse
 */
OfflineNodeResponse Client::offlineNodeWithOptions(const OfflineNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "OfflineNode"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OfflineNodeResponse>();
}

/**
 * @summary Undeploys a node.
 *
 * @param request OfflineNodeRequest
 * @return OfflineNodeResponse
 */
OfflineNodeResponse Client::offlineNode(const OfflineNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return offlineNodeWithOptions(request, runtime);
}

/**
 * @summary Publishes an API.
 *
 * @param request PublishDataServiceApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishDataServiceApiResponse
 */
PublishDataServiceApiResponse Client::publishDataServiceApiWithOptions(const PublishDataServiceApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiId()) {
    body["ApiId"] = request.apiId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PublishDataServiceApi"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishDataServiceApiResponse>();
}

/**
 * @summary Publishes an API.
 *
 * @param request PublishDataServiceApiRequest
 * @return PublishDataServiceApiResponse
 */
PublishDataServiceApiResponse Client::publishDataServiceApi(const PublishDataServiceApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishDataServiceApiWithOptions(request, runtime);
}

/**
 * @summary Queries the execution results of an asynchronous task.
 *
 * @description DataWorks allows you to call only the [CreateDISyncTask](https://help.aliyun.com/document_detail/278725.html) operation to create a batch synchronization task or the [UpdateDISyncTask](https://help.aliyun.com/document_detail/289109.html) operation to update a batch synchronization task in Data Integration. To create or update a real-time synchronization task, you must first call the [GenerateDISyncTaskConfigForCreating](https://help.aliyun.com/document_detail/383463.html) or [GenerateDISyncTaskConfigForUpdating](https://help.aliyun.com/document_detail/383464.html) operation to obtain the ID of an asynchronous thread and call the [QueryDISyncTaskConfigProcessResult](https://help.aliyun.com/document_detail/383465.html) operation to obtain the asynchronously generated parameters based on the ID. Then, you can call the CreateDISyncTask or UpdateDISyncTask operation and use the parameters as request parameters to create or update a real-time synchronization task. DataWorks allows you to create or update real-time synchronization tasks in Data Integration only in asynchronous mode.
 *
 * @param request QueryDISyncTaskConfigProcessResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDISyncTaskConfigProcessResultResponse
 */
QueryDISyncTaskConfigProcessResultResponse Client::queryDISyncTaskConfigProcessResultWithOptions(const QueryDISyncTaskConfigProcessResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsyncProcessId()) {
    query["AsyncProcessId"] = request.asyncProcessId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDISyncTaskConfigProcessResult"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDISyncTaskConfigProcessResultResponse>();
}

/**
 * @summary Queries the execution results of an asynchronous task.
 *
 * @description DataWorks allows you to call only the [CreateDISyncTask](https://help.aliyun.com/document_detail/278725.html) operation to create a batch synchronization task or the [UpdateDISyncTask](https://help.aliyun.com/document_detail/289109.html) operation to update a batch synchronization task in Data Integration. To create or update a real-time synchronization task, you must first call the [GenerateDISyncTaskConfigForCreating](https://help.aliyun.com/document_detail/383463.html) or [GenerateDISyncTaskConfigForUpdating](https://help.aliyun.com/document_detail/383464.html) operation to obtain the ID of an asynchronous thread and call the [QueryDISyncTaskConfigProcessResult](https://help.aliyun.com/document_detail/383465.html) operation to obtain the asynchronously generated parameters based on the ID. Then, you can call the CreateDISyncTask or UpdateDISyncTask operation and use the parameters as request parameters to create or update a real-time synchronization task. DataWorks allows you to create or update real-time synchronization tasks in Data Integration only in asynchronous mode.
 *
 * @param request QueryDISyncTaskConfigProcessResultRequest
 * @return QueryDISyncTaskConfigProcessResultResponse
 */
QueryDISyncTaskConfigProcessResultResponse Client::queryDISyncTaskConfigProcessResult(const QueryDISyncTaskConfigProcessResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDISyncTaskConfigProcessResultWithOptions(request, runtime);
}

/**
 * @summary Queries the default data category and data sensitivity level template defined by Data Security Guard.
 *
 * @param request QueryDefaultTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDefaultTemplateResponse
 */
QueryDefaultTemplateResponse Client::queryDefaultTemplateWithOptions(const QueryDefaultTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryDefaultTemplate"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDefaultTemplateResponse>();
}

/**
 * @summary Queries the default data category and data sensitivity level template defined by Data Security Guard.
 *
 * @param request QueryDefaultTemplateRequest
 * @return QueryDefaultTemplateResponse
 */
QueryDefaultTemplateResponse Client::queryDefaultTemplate(const QueryDefaultTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDefaultTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries information about objects that are created in Data Modeling by using fast modeling language (FML) statements.
 *
 * @description *   Each time you call this API operation, you must use FML statements to query information about objects that are created in Data Modeling.
 * *   The information about the objects can be queried by page, except for data layers, business processes, and data domains. You can add an offset to the end of an FML statement. The num LIMIT num statement specifies the offset when the information about the objects is queried, and the number of pages to return each time. The offset value must be a multiple of the number of pages.
 * *   A maximum of 1,000 entries can be returned each time you call this API operation.
 *
 * @param request QueryPublicModelEngineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPublicModelEngineResponse
 */
QueryPublicModelEngineResponse Client::queryPublicModelEngineWithOptions(const QueryPublicModelEngineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasText()) {
    body["Text"] = request.text();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryPublicModelEngine"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPublicModelEngineResponse>();
}

/**
 * @summary Queries information about objects that are created in Data Modeling by using fast modeling language (FML) statements.
 *
 * @description *   Each time you call this API operation, you must use FML statements to query information about objects that are created in Data Modeling.
 * *   The information about the objects can be queried by page, except for data layers, business processes, and data domains. You can add an offset to the end of an FML statement. The num LIMIT num statement specifies the offset when the information about the objects is queried, and the number of pages to return each time. The offset value must be a multiple of the number of pages.
 * *   A maximum of 1,000 entries can be returned each time you call this API operation.
 *
 * @param request QueryPublicModelEngineRequest
 * @return QueryPublicModelEngineResponse
 */
QueryPublicModelEngineResponse Client::queryPublicModelEngine(const QueryPublicModelEngineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPublicModelEngineWithOptions(request, runtime);
}

/**
 * @summary Queries the type of a sensitive data identification rule.
 *
 * @param request QueryRecognizeDataByRuleTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRecognizeDataByRuleTypeResponse
 */
QueryRecognizeDataByRuleTypeResponse Client::queryRecognizeDataByRuleTypeWithOptions(const QueryRecognizeDataByRuleTypeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRecognizeRulesType()) {
    body["RecognizeRulesType"] = request.recognizeRulesType();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryRecognizeDataByRuleType"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRecognizeDataByRuleTypeResponse>();
}

/**
 * @summary Queries the type of a sensitive data identification rule.
 *
 * @param request QueryRecognizeDataByRuleTypeRequest
 * @return QueryRecognizeDataByRuleTypeResponse
 */
QueryRecognizeDataByRuleTypeResponse Client::queryRecognizeDataByRuleType(const QueryRecognizeDataByRuleTypeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRecognizeDataByRuleTypeWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a specified sensitive field in Data Security Guard.
 *
 * @param request QueryRecognizeRuleDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRecognizeRuleDetailResponse
 */
QueryRecognizeRuleDetailResponse Client::queryRecognizeRuleDetailWithOptions(const QueryRecognizeRuleDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSensitiveName()) {
    body["SensitiveName"] = request.sensitiveName();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryRecognizeRuleDetail"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRecognizeRuleDetailResponse>();
}

/**
 * @summary Queries the details of a specified sensitive field in Data Security Guard.
 *
 * @param request QueryRecognizeRuleDetailRequest
 * @return QueryRecognizeRuleDetailResponse
 */
QueryRecognizeRuleDetailResponse Client::queryRecognizeRuleDetail(const QueryRecognizeRuleDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRecognizeRuleDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the built-in sensitive data identification rule that is used to configure a sensitive field.
 *
 * @param request QueryRecognizeRulesTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRecognizeRulesTypeResponse
 */
QueryRecognizeRulesTypeResponse Client::queryRecognizeRulesTypeWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "QueryRecognizeRulesType"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRecognizeRulesTypeResponse>();
}

/**
 * @summary Queries the built-in sensitive data identification rule that is used to configure a sensitive field.
 *
 * @return QueryRecognizeRulesTypeResponse
 */
QueryRecognizeRulesTypeResponse Client::queryRecognizeRulesType() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRecognizeRulesTypeWithOptions(runtime);
}

/**
 * @summary Queries data categories.
 *
 * @param request QuerySensClassificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySensClassificationResponse
 */
QuerySensClassificationResponse Client::querySensClassificationWithOptions(const QuerySensClassificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QuerySensClassification"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySensClassificationResponse>();
}

/**
 * @summary Queries data categories.
 *
 * @param request QuerySensClassificationRequest
 * @return QuerySensClassificationResponse
 */
QuerySensClassificationResponse Client::querySensClassification(const QuerySensClassificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySensClassificationWithOptions(request, runtime);
}

/**
 * @summary Queries data sensitivity levels in Data Security Guard.
 *
 * @param request QuerySensLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySensLevelResponse
 */
QuerySensLevelResponse Client::querySensLevelWithOptions(const QuerySensLevelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasTenantId()) {
    body["tenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QuerySensLevel"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySensLevelResponse>();
}

/**
 * @summary Queries data sensitivity levels in Data Security Guard.
 *
 * @param request QuerySensLevelRequest
 * @return QuerySensLevelResponse
 */
QuerySensLevelResponse Client::querySensLevel(const QuerySensLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySensLevelWithOptions(request, runtime);
}

/**
 * @summary Queries sensitive data identification rules.
 *
 * @param request QuerySensNodeInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySensNodeInfoResponse
 */
QuerySensNodeInfoResponse Client::querySensNodeInfoWithOptions(const QuerySensNodeInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasPageNo()) {
    body["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasSensitiveName()) {
    body["SensitiveName"] = request.sensitiveName();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QuerySensNodeInfo"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySensNodeInfoResponse>();
}

/**
 * @summary Queries sensitive data identification rules.
 *
 * @param request QuerySensNodeInfoRequest
 * @return QuerySensNodeInfoResponse
 */
QuerySensNodeInfoResponse Client::querySensNodeInfo(const QuerySensNodeInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySensNodeInfoWithOptions(request, runtime);
}

/**
 * @summary Registers the lineage between self-managed entities to DataWorks.
 *
 * @description This operation is in the trial phase. Users who need to call this operation can apply for it. The users can call this operation after the administrator adds the users to the trial list.
 *
 * @param tmpReq RegisterLineageRelationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterLineageRelationResponse
 */
RegisterLineageRelationResponse Client::registerLineageRelationWithOptions(const RegisterLineageRelationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RegisterLineageRelationShrinkRequest request = RegisterLineageRelationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLineageRelationRegisterVO()) {
    request.setLineageRelationRegisterVOShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.lineageRelationRegisterVO(), "LineageRelationRegisterVO", "json"));
  }

  json body = {};
  if (!!request.hasLineageRelationRegisterVOShrink()) {
    body["LineageRelationRegisterVO"] = request.lineageRelationRegisterVOShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RegisterLineageRelation"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterLineageRelationResponse>();
}

/**
 * @summary Registers the lineage between self-managed entities to DataWorks.
 *
 * @description This operation is in the trial phase. Users who need to call this operation can apply for it. The users can call this operation after the administrator adds the users to the trial list.
 *
 * @param request RegisterLineageRelationRequest
 * @return RegisterLineageRelationResponse
 */
RegisterLineageRelationResponse Client::registerLineageRelation(const RegisterLineageRelationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerLineageRelationWithOptions(request, runtime);
}

/**
 * @summary Removes tags from an entity. Only entities of the maxcompute-table type are supported.
 *
 * @param tmpReq RemoveEntityTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveEntityTagsResponse
 */
RemoveEntityTagsResponse Client::removeEntityTagsWithOptions(const RemoveEntityTagsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RemoveEntityTagsShrinkRequest request = RemoveEntityTagsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTagKeys()) {
    request.setTagKeysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tagKeys(), "TagKeys", "json"));
  }

  json query = {};
  if (!!request.hasQualifiedName()) {
    query["QualifiedName"] = request.qualifiedName();
  }

  json body = {};
  if (!!request.hasTagKeysShrink()) {
    body["TagKeys"] = request.tagKeysShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RemoveEntityTags"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveEntityTagsResponse>();
}

/**
 * @summary Removes tags from an entity. Only entities of the maxcompute-table type are supported.
 *
 * @param request RemoveEntityTagsRequest
 * @return RemoveEntityTagsResponse
 */
RemoveEntityTagsResponse Client::removeEntityTags(const RemoveEntityTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeEntityTagsWithOptions(request, runtime);
}

/**
 * @summary Removes a role from a user in a DataWorks workspace.
 *
 * @param request RemoveProjectMemberFromRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveProjectMemberFromRoleResponse
 */
RemoveProjectMemberFromRoleResponse Client::removeProjectMemberFromRoleWithOptions(const RemoveProjectMemberFromRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasRoleCode()) {
    query["RoleCode"] = request.roleCode();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveProjectMemberFromRole"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveProjectMemberFromRoleResponse>();
}

/**
 * @summary Removes a role from a user in a DataWorks workspace.
 *
 * @param request RemoveProjectMemberFromRoleRequest
 * @return RemoveProjectMemberFromRoleResponse
 */
RemoveProjectMemberFromRoleResponse Client::removeProjectMemberFromRole(const RemoveProjectMemberFromRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeProjectMemberFromRoleWithOptions(request, runtime);
}

/**
 * @summary Restarts an instance.
 *
 * @param request RestartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstanceWithOptions(const RestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RestartInstance"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartInstanceResponse>();
}

/**
 * @summary Restarts an instance.
 *
 * @param request RestartInstanceRequest
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstance(const RestartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartInstanceWithOptions(request, runtime);
}

/**
 * @summary Resumes a suspended instance.
 *
 * @param request ResumeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeInstanceResponse
 */
ResumeInstanceResponse Client::resumeInstanceWithOptions(const ResumeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ResumeInstance"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeInstanceResponse>();
}

/**
 * @summary Resumes a suspended instance.
 *
 * @param request ResumeInstanceRequest
 * @return ResumeInstanceResponse
 */
ResumeInstanceResponse Client::resumeInstance(const ResumeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeInstanceWithOptions(request, runtime);
}

/**
 * @summary Revokes permissions on a table from a user.
 *
 * @param request RevokeTablePermissionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeTablePermissionResponse
 */
RevokeTablePermissionResponse Client::revokeTablePermissionWithOptions(const RevokeTablePermissionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActions()) {
    query["Actions"] = request.actions();
  }

  if (!!request.hasMaxComputeProjectName()) {
    query["MaxComputeProjectName"] = request.maxComputeProjectName();
  }

  if (!!request.hasRevokeUserId()) {
    query["RevokeUserId"] = request.revokeUserId();
  }

  if (!!request.hasRevokeUserName()) {
    query["RevokeUserName"] = request.revokeUserName();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeTablePermission"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeTablePermissionResponse>();
}

/**
 * @summary Revokes permissions on a table from a user.
 *
 * @param request RevokeTablePermissionRequest
 * @return RevokeTablePermissionResponse
 */
RevokeTablePermissionResponse Client::revokeTablePermission(const RevokeTablePermissionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeTablePermissionWithOptions(request, runtime);
}

/**
 * @summary Creates a workflow to backfill data.
 *
 * @description For more information about data backfill, see [Backfill data](https://help.aliyun.com/document_detail/137937.html).
 *
 * @param request RunCycleDagNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunCycleDagNodesResponse
 */
RunCycleDagNodesResponse Client::runCycleDagNodesWithOptions(const RunCycleDagNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertNoticeType()) {
    body["AlertNoticeType"] = request.alertNoticeType();
  }

  if (!!request.hasAlertType()) {
    body["AlertType"] = request.alertType();
  }

  if (!!request.hasBizBeginTime()) {
    body["BizBeginTime"] = request.bizBeginTime();
  }

  if (!!request.hasBizEndTime()) {
    body["BizEndTime"] = request.bizEndTime();
  }

  if (!!request.hasConcurrentRuns()) {
    body["ConcurrentRuns"] = request.concurrentRuns();
  }

  if (!!request.hasEndBizDate()) {
    body["EndBizDate"] = request.endBizDate();
  }

  if (!!request.hasExcludeNodeIds()) {
    body["ExcludeNodeIds"] = request.excludeNodeIds();
  }

  if (!!request.hasIncludeNodeIds()) {
    body["IncludeNodeIds"] = request.includeNodeIds();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNodeParams()) {
    body["NodeParams"] = request.nodeParams();
  }

  if (!!request.hasParallelism()) {
    body["Parallelism"] = request.parallelism();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  if (!!request.hasRootNodeId()) {
    body["RootNodeId"] = request.rootNodeId();
  }

  if (!!request.hasStartBizDate()) {
    body["StartBizDate"] = request.startBizDate();
  }

  if (!!request.hasStartFutureInstanceImmediately()) {
    body["StartFutureInstanceImmediately"] = request.startFutureInstanceImmediately();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunCycleDagNodes"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunCycleDagNodesResponse>();
}

/**
 * @summary Creates a workflow to backfill data.
 *
 * @description For more information about data backfill, see [Backfill data](https://help.aliyun.com/document_detail/137937.html).
 *
 * @param request RunCycleDagNodesRequest
 * @return RunCycleDagNodesResponse
 */
RunCycleDagNodesResponse Client::runCycleDagNodes(const RunCycleDagNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runCycleDagNodesWithOptions(request, runtime);
}

/**
 * @summary Runs nodes in a manually triggered workflow. Before you call this operation, make sure that the manually triggered workflow is committed and deployed. You can find a manually triggered workflow in Operation Center only after the manually triggered workflow is committed and deployed.
 *
 * @param request RunManualDagNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunManualDagNodesResponse
 */
RunManualDagNodesResponse Client::runManualDagNodesWithOptions(const RunManualDagNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizDate()) {
    body["BizDate"] = request.bizDate();
  }

  if (!!request.hasDagParameters()) {
    body["DagParameters"] = request.dagParameters();
  }

  if (!!request.hasEndBizDate()) {
    body["EndBizDate"] = request.endBizDate();
  }

  if (!!request.hasExcludeNodeIds()) {
    body["ExcludeNodeIds"] = request.excludeNodeIds();
  }

  if (!!request.hasFlowName()) {
    body["FlowName"] = request.flowName();
  }

  if (!!request.hasIncludeNodeIds()) {
    body["IncludeNodeIds"] = request.includeNodeIds();
  }

  if (!!request.hasNodeParameters()) {
    body["NodeParameters"] = request.nodeParameters();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  if (!!request.hasStartBizDate()) {
    body["StartBizDate"] = request.startBizDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunManualDagNodes"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunManualDagNodesResponse>();
}

/**
 * @summary Runs nodes in a manually triggered workflow. Before you call this operation, make sure that the manually triggered workflow is committed and deployed. You can find a manually triggered workflow in Operation Center only after the manually triggered workflow is committed and deployed.
 *
 * @param request RunManualDagNodesRequest
 * @return RunManualDagNodesResponse
 */
RunManualDagNodesResponse Client::runManualDagNodes(const RunManualDagNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runManualDagNodesWithOptions(request, runtime);
}

/**
 * @summary Creates a workflow to perform smoke testing.
 *
 * @param request RunSmokeTestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunSmokeTestResponse
 */
RunSmokeTestResponse Client::runSmokeTestWithOptions(const RunSmokeTestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizdate()) {
    body["Bizdate"] = request.bizdate();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasNodeParams()) {
    body["NodeParams"] = request.nodeParams();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunSmokeTest"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunSmokeTestResponse>();
}

/**
 * @summary Creates a workflow to perform smoke testing.
 *
 * @param request RunSmokeTestRequest
 * @return RunSmokeTestResponse
 */
RunSmokeTestResponse Client::runSmokeTest(const RunSmokeTestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runSmokeTestWithOptions(request, runtime);
}

/**
 * @summary Runs a manually triggered node.
 *
 * @param request RunTriggerNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunTriggerNodeResponse
 */
RunTriggerNodeResponse Client::runTriggerNodeWithOptions(const RunTriggerNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.appId();
  }

  if (!!request.hasBizDate()) {
    body["BizDate"] = request.bizDate();
  }

  if (!!request.hasCycleTime()) {
    body["CycleTime"] = request.cycleTime();
  }

  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RunTriggerNode"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunTriggerNodeResponse>();
}

/**
 * @summary Runs a manually triggered node.
 *
 * @param request RunTriggerNodeRequest
 * @return RunTriggerNodeResponse
 */
RunTriggerNodeResponse Client::runTriggerNode(const RunTriggerNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runTriggerNodeWithOptions(request, runtime);
}

/**
 * @summary Saves the test results of an API.
 *
 * @param request SaveDataServiceApiTestResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveDataServiceApiTestResultResponse
 */
SaveDataServiceApiTestResultResponse Client::saveDataServiceApiTestResultWithOptions(const SaveDataServiceApiTestResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiId()) {
    body["ApiId"] = request.apiId();
  }

  if (!!request.hasAutoGenerate()) {
    body["AutoGenerate"] = request.autoGenerate();
  }

  if (!!request.hasFailResultSample()) {
    body["FailResultSample"] = request.failResultSample();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasResultSample()) {
    body["ResultSample"] = request.resultSample();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SaveDataServiceApiTestResult"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveDataServiceApiTestResultResponse>();
}

/**
 * @summary Saves the test results of an API.
 *
 * @param request SaveDataServiceApiTestResultRequest
 * @return SaveDataServiceApiTestResultResponse
 */
SaveDataServiceApiTestResultResponse Client::saveDataServiceApiTestResult(const SaveDataServiceApiTestResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveDataServiceApiTestResultWithOptions(request, runtime);
}

/**
 * @summary Checks whether input data contains sensitive data.
 *
 * @param request ScanSensitiveDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ScanSensitiveDataResponse
 */
ScanSensitiveDataResponse Client::scanSensitiveDataWithOptions(const ScanSensitiveDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ScanSensitiveData"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ScanSensitiveDataResponse>();
}

/**
 * @summary Checks whether input data contains sensitive data.
 *
 * @param request ScanSensitiveDataRequest
 * @return ScanSensitiveDataResponse
 */
ScanSensitiveDataResponse Client::scanSensitiveData(const ScanSensitiveDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return scanSensitiveDataWithOptions(request, runtime);
}

/**
 * @summary Queries metatables based on specific conditions.
 *
 * @description You can call this operation to query only metatables in a MaxCompute or E-MapReduce (EMR) compute engine.
 *
 * @param request SearchMetaTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMetaTablesResponse
 */
SearchMetaTablesResponse Client::searchMetaTablesWithOptions(const SearchMetaTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppGuid()) {
    query["AppGuid"] = request.appGuid();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDataSourceType()) {
    query["DataSourceType"] = request.dataSourceType();
  }

  if (!!request.hasEntityType()) {
    query["EntityType"] = request.entityType();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSchema()) {
    query["Schema"] = request.schema();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchMetaTables"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchMetaTablesResponse>();
}

/**
 * @summary Queries metatables based on specific conditions.
 *
 * @description You can call this operation to query only metatables in a MaxCompute or E-MapReduce (EMR) compute engine.
 *
 * @param request SearchMetaTablesRequest
 * @return SearchMetaTablesResponse
 */
SearchMetaTablesResponse Client::searchMetaTables(const SearchMetaTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMetaTablesWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI SearchNodesByOutput is deprecated
 *
 * @summary Queries a node based on the output.
 *
 * @param request SearchNodesByOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchNodesByOutputResponse
 */
SearchNodesByOutputResponse Client::searchNodesByOutputWithOptions(const SearchNodesByOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOutputs()) {
    body["Outputs"] = request.outputs();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SearchNodesByOutput"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchNodesByOutputResponse>();
}

/**
 * @deprecated OpenAPI SearchNodesByOutput is deprecated
 *
 * @summary Queries a node based on the output.
 *
 * @param request SearchNodesByOutputRequest
 * @return SearchNodesByOutputResponse
 */
SearchNodesByOutputResponse Client::searchNodesByOutput(const SearchNodesByOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchNodesByOutputWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI SetDataSourceShare is deprecated
 *
 * @summary Shares a data source to a specific DataWorks workspace or a specific user.
 *
 * @param request SetDataSourceShareRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDataSourceShareResponse
 */
SetDataSourceShareResponse Client::setDataSourceShareWithOptions(const SetDataSourceShareRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasourceName()) {
    query["DatasourceName"] = request.datasourceName();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.envType();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectPermissions()) {
    query["ProjectPermissions"] = request.projectPermissions();
  }

  if (!!request.hasUserPermissions()) {
    query["UserPermissions"] = request.userPermissions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDataSourceShare"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDataSourceShareResponse>();
}

/**
 * @deprecated OpenAPI SetDataSourceShare is deprecated
 *
 * @summary Shares a data source to a specific DataWorks workspace or a specific user.
 *
 * @param request SetDataSourceShareRequest
 * @return SetDataSourceShareResponse
 */
SetDataSourceShareResponse Client::setDataSourceShare(const SetDataSourceShareRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDataSourceShareWithOptions(request, runtime);
}

/**
 * @summary Configures tags for an entity. Only entities of the maxcompute-table type are supported.
 *
 * @param tmpReq SetEntityTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetEntityTagsResponse
 */
SetEntityTagsResponse Client::setEntityTagsWithOptions(const SetEntityTagsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetEntityTagsShrinkRequest request = SetEntityTagsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasQualifiedName()) {
    query["QualifiedName"] = request.qualifiedName();
  }

  json body = {};
  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.tagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SetEntityTags"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetEntityTagsResponse>();
}

/**
 * @summary Configures tags for an entity. Only entities of the maxcompute-table type are supported.
 *
 * @param request SetEntityTagsRequest
 * @return SetEntityTagsResponse
 */
SetEntityTagsResponse Client::setEntityTags(const SetEntityTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setEntityTagsWithOptions(request, runtime);
}

/**
 * @summary Sets the state of a failed instance to successful.
 *
 * @param request SetSuccessInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetSuccessInstanceResponse
 */
SetSuccessInstanceResponse Client::setSuccessInstanceWithOptions(const SetSuccessInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SetSuccessInstance"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetSuccessInstanceResponse>();
}

/**
 * @summary Sets the state of a failed instance to successful.
 *
 * @param request SetSuccessInstanceRequest
 * @return SetSuccessInstanceResponse
 */
SetSuccessInstanceResponse Client::setSuccessInstance(const SetSuccessInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setSuccessInstanceWithOptions(request, runtime);
}

/**
 * @summary Starts a synchronization task of a new version. Only the following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
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
    request.setRealtimeStartSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.realtimeStartSettings(), "RealtimeStartSettings", "json"));
  }

  json body = {};
  if (!!request.hasDIJobId()) {
    body["DIJobId"] = request.DIJobId();
  }

  if (!!request.hasForceToRerun()) {
    body["ForceToRerun"] = request.forceToRerun();
  }

  if (!!request.hasRealtimeStartSettingsShrink()) {
    body["RealtimeStartSettings"] = request.realtimeStartSettingsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartDIJob"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartDIJobResponse>();
}

/**
 * @summary Starts a synchronization task of a new version. Only the following type of task is supported: real-time data synchronization from a MySQL database to Hologres.
 *
 * @param request StartDIJobRequest
 * @return StartDIJobResponse
 */
StartDIJobResponse Client::startDIJob(const StartDIJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDIJobWithOptions(request, runtime);
}

/**
 * @summary Starts a real-time synchronization task or a synchronization solution.
 *
 * @param request StartDISyncInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartDISyncInstanceResponse
 */
StartDISyncInstanceResponse Client::startDISyncInstanceWithOptions(const StartDISyncInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.fileId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasStartParam()) {
    query["StartParam"] = request.startParam();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartDISyncInstance"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartDISyncInstanceResponse>();
}

/**
 * @summary Starts a real-time synchronization task or a synchronization solution.
 *
 * @param request StartDISyncInstanceRequest
 * @return StartDISyncInstanceResponse
 */
StartDISyncInstanceResponse Client::startDISyncInstance(const StartDISyncInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startDISyncInstanceWithOptions(request, runtime);
}

/**
 * @summary Starts a migration task.
 *
 * @param request StartMigrationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartMigrationResponse
 */
StartMigrationResponse Client::startMigrationWithOptions(const StartMigrationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMigrationId()) {
    body["MigrationId"] = request.migrationId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartMigration"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartMigrationResponse>();
}

/**
 * @summary Starts a migration task.
 *
 * @param request StartMigrationRequest
 * @return StartMigrationResponse
 */
StartMigrationResponse Client::startMigration(const StartMigrationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startMigrationWithOptions(request, runtime);
}

/**
 * @summary Stops a new-version synchronization task. The following type of synchronization task is supported: real-time synchronization of all data in a MySQL database to Hologres.
 *
 * @param request StopDIJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDIJobResponse
 */
StopDIJobResponse Client::stopDIJobWithOptions(const StopDIJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDIJobId()) {
    body["DIJobId"] = request.DIJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StopDIJob"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDIJobResponse>();
}

/**
 * @summary Stops a new-version synchronization task. The following type of synchronization task is supported: real-time synchronization of all data in a MySQL database to Hologres.
 *
 * @param request StopDIJobRequest
 * @return StopDIJobResponse
 */
StopDIJobResponse Client::stopDIJob(const StopDIJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDIJobWithOptions(request, runtime);
}

/**
 * @summary Stops a real-time synchronization task.
 *
 * @param request StopDISyncInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopDISyncInstanceResponse
 */
StopDISyncInstanceResponse Client::stopDISyncInstanceWithOptions(const StopDISyncInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.fileId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopDISyncInstance"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopDISyncInstanceResponse>();
}

/**
 * @summary Stops a real-time synchronization task.
 *
 * @param request StopDISyncInstanceRequest
 * @return StopDISyncInstanceResponse
 */
StopDISyncInstanceResponse Client::stopDISyncInstance(const StopDISyncInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopDISyncInstanceWithOptions(request, runtime);
}

/**
 * @summary Terminates an instance.
 *
 * @param request StopInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstanceWithOptions(const StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StopInstance"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopInstanceResponse>();
}

/**
 * @summary Terminates an instance.
 *
 * @param request StopInstanceRequest
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstance(const StopInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopInstanceWithOptions(request, runtime);
}

/**
 * @summary Submits an API in DataService Studio.
 *
 * @param request SubmitDataServiceApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDataServiceApiResponse
 */
SubmitDataServiceApiResponse Client::submitDataServiceApiWithOptions(const SubmitDataServiceApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiId()) {
    body["ApiId"] = request.apiId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitDataServiceApi"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitDataServiceApiResponse>();
}

/**
 * @summary Submits an API in DataService Studio.
 *
 * @param request SubmitDataServiceApiRequest
 * @return SubmitDataServiceApiResponse
 */
SubmitDataServiceApiResponse Client::submitDataServiceApi(const SubmitDataServiceApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDataServiceApiWithOptions(request, runtime);
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
    body["Comment"] = request.comment();
  }

  if (!!request.hasFileId()) {
    body["FileId"] = request.fileId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  if (!!request.hasSkipAllDeployFileExtensions()) {
    body["SkipAllDeployFileExtensions"] = request.skipAllDeployFileExtensions();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitFile"},
    {"version" , "2020-05-18"},
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
 * @summary Suspends an instance.
 *
 * @param request SuspendInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendInstanceResponse
 */
SuspendInstanceResponse Client::suspendInstanceWithOptions(const SuspendInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.instanceId();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SuspendInstance"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendInstanceResponse>();
}

/**
 * @summary Suspends an instance.
 *
 * @param request SuspendInstanceRequest
 * @return SuspendInstanceResponse
 */
SuspendInstanceResponse Client::suspendInstance(const SuspendInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendInstanceWithOptions(request, runtime);
}

/**
 * @summary Undeploys a real-time synchronization task.
 *
 * @param request TerminateDISyncInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TerminateDISyncInstanceResponse
 */
TerminateDISyncInstanceResponse Client::terminateDISyncInstanceWithOptions(const TerminateDISyncInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.fileId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TerminateDISyncInstance"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TerminateDISyncInstanceResponse>();
}

/**
 * @summary Undeploys a real-time synchronization task.
 *
 * @param request TerminateDISyncInstanceRequest
 * @return TerminateDISyncInstanceResponse
 */
TerminateDISyncInstanceResponse Client::terminateDISyncInstance(const TerminateDISyncInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return terminateDISyncInstanceWithOptions(request, runtime);
}

/**
 * @summary Tests a DataService Studio API in asynchronous mode. You can call the GetDataServiceApiTest operation to query the test result.
 *
 * @param request TestDataServiceApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TestDataServiceApiResponse
 */
TestDataServiceApiResponse Client::testDataServiceApiWithOptions(const TestDataServiceApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiId()) {
    query["ApiId"] = request.apiId();
  }

  json body = {};
  if (!!request.hasBodyContent()) {
    body["BodyContent"] = request.bodyContent();
  }

  if (!!request.hasBodyParams()) {
    body["BodyParams"] = request.bodyParams();
  }

  if (!!request.hasHeadParams()) {
    body["HeadParams"] = request.headParams();
  }

  if (!!request.hasPathParams()) {
    body["PathParams"] = request.pathParams();
  }

  if (!!request.hasQueryParam()) {
    body["QueryParam"] = request.queryParam();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TestDataServiceApi"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TestDataServiceApiResponse>();
}

/**
 * @summary Tests a DataService Studio API in asynchronous mode. You can call the GetDataServiceApiTest operation to query the test result.
 *
 * @param request TestDataServiceApiRequest
 * @return TestDataServiceApiResponse
 */
TestDataServiceApiResponse Client::testDataServiceApi(const TestDataServiceApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return testDataServiceApiWithOptions(request, runtime);
}

/**
 * @summary Tests the network connectivity between a data source and a resource group.
 *
 * @param request TestNetworkConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TestNetworkConnectionResponse
 */
TestNetworkConnectionResponse Client::testNetworkConnectionWithOptions(const TestNetworkConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasourceName()) {
    query["DatasourceName"] = request.datasourceName();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.envType();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasResourceGroup()) {
    query["ResourceGroup"] = request.resourceGroup();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TestNetworkConnection"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TestNetworkConnectionResponse>();
}

/**
 * @summary Tests the network connectivity between a data source and a resource group.
 *
 * @param request TestNetworkConnectionRequest
 * @return TestNetworkConnectionResponse
 */
TestNetworkConnectionResponse Client::testNetworkConnection(const TestNetworkConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return testNetworkConnectionWithOptions(request, runtime);
}

/**
 * @summary Queries the ranking of the running durations of instances.
 *
 * @param request TopTenElapsedTimeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TopTenElapsedTimeInstanceResponse
 */
TopTenElapsedTimeInstanceResponse Client::topTenElapsedTimeInstanceWithOptions(const TopTenElapsedTimeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TopTenElapsedTimeInstance"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TopTenElapsedTimeInstanceResponse>();
}

/**
 * @summary Queries the ranking of the running durations of instances.
 *
 * @param request TopTenElapsedTimeInstanceRequest
 * @return TopTenElapsedTimeInstanceResponse
 */
TopTenElapsedTimeInstanceResponse Client::topTenElapsedTimeInstance(const TopTenElapsedTimeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return topTenElapsedTimeInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the ranking of nodes on which errors occur within the previous month.
 *
 * @param request TopTenErrorTimesInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TopTenErrorTimesInstanceResponse
 */
TopTenErrorTimesInstanceResponse Client::topTenErrorTimesInstanceWithOptions(const TopTenErrorTimesInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "TopTenErrorTimesInstance"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TopTenErrorTimesInstanceResponse>();
}

/**
 * @summary Queries the ranking of nodes on which errors occur within the previous month.
 *
 * @param request TopTenErrorTimesInstanceRequest
 * @return TopTenErrorTimesInstanceResponse
 */
TopTenErrorTimesInstanceResponse Client::topTenErrorTimesInstance(const TopTenErrorTimesInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return topTenErrorTimesInstanceWithOptions(request, runtime);
}

/**
 * @summary Updates a baseline.
 *
 * @param tmpReq UpdateBaselineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBaselineResponse
 */
UpdateBaselineResponse Client::updateBaselineWithOptions(const UpdateBaselineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateBaselineShrinkRequest request = UpdateBaselineShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAlertSettings()) {
    request.setAlertSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.alertSettings(), "AlertSettings", "json"));
  }

  if (!!tmpReq.hasOvertimeSettings()) {
    request.setOvertimeSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.overtimeSettings(), "OvertimeSettings", "json"));
  }

  json body = {};
  if (!!request.hasAlertEnabled()) {
    body["AlertEnabled"] = request.alertEnabled();
  }

  if (!!request.hasAlertMarginThreshold()) {
    body["AlertMarginThreshold"] = request.alertMarginThreshold();
  }

  if (!!request.hasAlertSettingsShrink()) {
    body["AlertSettings"] = request.alertSettingsShrink();
  }

  if (!!request.hasBaselineId()) {
    body["BaselineId"] = request.baselineId();
  }

  if (!!request.hasBaselineName()) {
    body["BaselineName"] = request.baselineName();
  }

  if (!!request.hasBaselineType()) {
    body["BaselineType"] = request.baselineType();
  }

  if (!!request.hasEnabled()) {
    body["Enabled"] = request.enabled();
  }

  if (!!request.hasNodeIds()) {
    body["NodeIds"] = request.nodeIds();
  }

  if (!!request.hasOvertimeSettingsShrink()) {
    body["OvertimeSettings"] = request.overtimeSettingsShrink();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasPriority()) {
    body["Priority"] = request.priority();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasRemoveNodeIds()) {
    body["RemoveNodeIds"] = request.removeNodeIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateBaseline"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBaselineResponse>();
}

/**
 * @summary Updates a baseline.
 *
 * @param request UpdateBaselineRequest
 * @return UpdateBaselineResponse
 */
UpdateBaselineResponse Client::updateBaseline(const UpdateBaselineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateBaselineWithOptions(request, runtime);
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
    body["BusinessId"] = request.businessId();
  }

  if (!!request.hasBusinessName()) {
    body["BusinessName"] = request.businessName();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateBusiness"},
    {"version" , "2020-05-18"},
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
 * @summary Updates the configurations of submodules in a workspace. You can configure SPARK parameters.
 *
 * @param tmpReq UpdateClusterConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateClusterConfigsResponse
 */
UpdateClusterConfigsResponse Client::updateClusterConfigsWithOptions(const UpdateClusterConfigsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateClusterConfigsShrinkRequest request = UpdateClusterConfigsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfigValues()) {
    request.setConfigValuesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.configValues(), "ConfigValues", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasConfigType()) {
    query["ConfigType"] = request.configType();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  json body = {};
  if (!!request.hasConfigValuesShrink()) {
    body["ConfigValues"] = request.configValuesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateClusterConfigs"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateClusterConfigsResponse>();
}

/**
 * @summary Updates the configurations of submodules in a workspace. You can configure SPARK parameters.
 *
 * @param request UpdateClusterConfigsRequest
 * @return UpdateClusterConfigsResponse
 */
UpdateClusterConfigsResponse Client::updateClusterConfigs(const UpdateClusterConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateClusterConfigsWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI UpdateConnection is deprecated, please use dataworks-public::2020-05-18::UpdateDataSource instead.
 *
 * @summary Updates a data source.
 *
 * @param request UpdateConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConnectionResponse
 */
UpdateConnectionResponse Client::updateConnectionWithOptions(const UpdateConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionId()) {
    query["ConnectionId"] = request.connectionId();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.envType();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateConnection"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateConnectionResponse>();
}

/**
 * @deprecated OpenAPI UpdateConnection is deprecated, please use dataworks-public::2020-05-18::UpdateDataSource instead.
 *
 * @summary Updates a data source.
 *
 * @param request UpdateConnectionRequest
 * @return UpdateConnectionResponse
 */
UpdateConnectionResponse Client::updateConnection(const UpdateConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateConnectionWithOptions(request, runtime);
}

/**
 * @summary Updates an alert rule for a new-version synchronization task. The following type of task is supported: real-time synchronization of all data in a MySQL database to Hologres.
 *
 * @description You can configure alert rules only for tasks that can be used for real-time data synchronization. You must update all fields in the alert rule.
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
    request.setNotificationSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notificationSettings(), "NotificationSettings", "json"));
  }

  if (!!tmpReq.hasTriggerConditions()) {
    request.setTriggerConditionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.triggerConditions(), "TriggerConditions", "json"));
  }

  json body = {};
  if (!!request.hasDIAlarmRuleId()) {
    body["DIAlarmRuleId"] = request.DIAlarmRuleId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEnabled()) {
    body["Enabled"] = request.enabled();
  }

  if (!!request.hasMetricType()) {
    body["MetricType"] = request.metricType();
  }

  if (!!request.hasNotificationSettingsShrink()) {
    body["NotificationSettings"] = request.notificationSettingsShrink();
  }

  if (!!request.hasTriggerConditionsShrink()) {
    body["TriggerConditions"] = request.triggerConditionsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDIAlarmRule"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDIAlarmRuleResponse>();
}

/**
 * @summary Updates an alert rule for a new-version synchronization task. The following type of task is supported: real-time synchronization of all data in a MySQL database to Hologres.
 *
 * @description You can configure alert rules only for tasks that can be used for real-time data synchronization. You must update all fields in the alert rule.
 *
 * @param request UpdateDIAlarmRuleRequest
 * @return UpdateDIAlarmRuleResponse
 */
UpdateDIAlarmRuleResponse Client::updateDIAlarmRule(const UpdateDIAlarmRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDIAlarmRuleWithOptions(request, runtime);
}

/**
 * @summary Updates a new-version synchronization task. The following type of task is supported: real-time synchronization of all data in a MySQL database to Hologres.
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
    request.setJobSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.jobSettings(), "JobSettings", "json"));
  }

  if (!!tmpReq.hasResourceSettings()) {
    request.setResourceSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceSettings(), "ResourceSettings", "json"));
  }

  if (!!tmpReq.hasTableMappings()) {
    request.setTableMappingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tableMappings(), "TableMappings", "json"));
  }

  if (!!tmpReq.hasTransformationRules()) {
    request.setTransformationRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.transformationRules(), "TransformationRules", "json"));
  }

  json body = {};
  if (!!request.hasDIJobId()) {
    body["DIJobId"] = request.DIJobId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasJobSettingsShrink()) {
    body["JobSettings"] = request.jobSettingsShrink();
  }

  if (!!request.hasResourceSettingsShrink()) {
    body["ResourceSettings"] = request.resourceSettingsShrink();
  }

  if (!!request.hasTableMappingsShrink()) {
    body["TableMappings"] = request.tableMappingsShrink();
  }

  if (!!request.hasTransformationRulesShrink()) {
    body["TransformationRules"] = request.transformationRulesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDIJob"},
    {"version" , "2020-05-18"},
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
 * @summary Updates a new-version synchronization task. The following type of task is supported: real-time synchronization of all data in a MySQL database to Hologres.
 *
 * @param request UpdateDIJobRequest
 * @return UpdateDIJobResponse
 */
UpdateDIJobResponse Client::updateDIJob(const UpdateDIJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDIJobWithOptions(request, runtime);
}

/**
 * @summary Modifies the default global configuration of synchronization solutions in a DataWorks workspace.
 *
 * @description DataWorks allows you to specify a default global configuration only for the processing rules of DDL messages in synchronization solutions. After you configure the **processing rules of DDL messages** in synchronization solutions, the configuration is used as the default global configuration and applies to all real-time synchronization tasks in the solutions. You can modify the **processing rules of DDL messages** based on your business requirements. For more information about how to configure a synchronization solution, see [Synchronization solutions](https://help.aliyun.com/document_detail/199008.html).
 *
 * @param request UpdateDIProjectConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDIProjectConfigResponse
 */
UpdateDIProjectConfigResponse Client::updateDIProjectConfigWithOptions(const UpdateDIProjectConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDestinationType()) {
    query["DestinationType"] = request.destinationType();
  }

  if (!!request.hasProjectConfig()) {
    query["ProjectConfig"] = request.projectConfig();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDIProjectConfig"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDIProjectConfigResponse>();
}

/**
 * @summary Modifies the default global configuration of synchronization solutions in a DataWorks workspace.
 *
 * @description DataWorks allows you to specify a default global configuration only for the processing rules of DDL messages in synchronization solutions. After you configure the **processing rules of DDL messages** in synchronization solutions, the configuration is used as the default global configuration and applies to all real-time synchronization tasks in the solutions. You can modify the **processing rules of DDL messages** based on your business requirements. For more information about how to configure a synchronization solution, see [Synchronization solutions](https://help.aliyun.com/document_detail/199008.html).
 *
 * @param request UpdateDIProjectConfigRequest
 * @return UpdateDIProjectConfigResponse
 */
UpdateDIProjectConfigResponse Client::updateDIProjectConfig(const UpdateDIProjectConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDIProjectConfigWithOptions(request, runtime);
}

/**
 * @summary Updates a data synchronization task.
 *
 * @param request UpdateDISyncTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDISyncTaskResponse
 */
UpdateDISyncTaskResponse Client::updateDISyncTaskWithOptions(const UpdateDISyncTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.fileId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasTaskContent()) {
    query["TaskContent"] = request.taskContent();
  }

  if (!!request.hasTaskParam()) {
    query["TaskParam"] = request.taskParam();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDISyncTask"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDISyncTaskResponse>();
}

/**
 * @summary Updates a data synchronization task.
 *
 * @param request UpdateDISyncTaskRequest
 * @return UpdateDISyncTaskResponse
 */
UpdateDISyncTaskResponse Client::updateDISyncTask(const UpdateDISyncTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDISyncTaskWithOptions(request, runtime);
}

/**
 * @summary Updates the information about an API in the development state in DataService Studio.
 *
 * @param request UpdateDataServiceApiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataServiceApiResponse
 */
UpdateDataServiceApiResponse Client::updateDataServiceApiWithOptions(const UpdateDataServiceApiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApiDescription()) {
    body["ApiDescription"] = request.apiDescription();
  }

  if (!!request.hasApiId()) {
    body["ApiId"] = request.apiId();
  }

  if (!!request.hasApiPath()) {
    body["ApiPath"] = request.apiPath();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProtocols()) {
    body["Protocols"] = request.protocols();
  }

  if (!!request.hasRegistrationDetails()) {
    body["RegistrationDetails"] = request.registrationDetails();
  }

  if (!!request.hasRequestMethod()) {
    body["RequestMethod"] = request.requestMethod();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResponseContentType()) {
    body["ResponseContentType"] = request.responseContentType();
  }

  if (!!request.hasScriptDetails()) {
    body["ScriptDetails"] = request.scriptDetails();
  }

  if (!!request.hasTenantId()) {
    body["TenantId"] = request.tenantId();
  }

  if (!!request.hasTimeout()) {
    body["Timeout"] = request.timeout();
  }

  if (!!request.hasVisibleRange()) {
    body["VisibleRange"] = request.visibleRange();
  }

  if (!!request.hasWizardDetails()) {
    body["WizardDetails"] = request.wizardDetails();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateDataServiceApi"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataServiceApiResponse>();
}

/**
 * @summary Updates the information about an API in the development state in DataService Studio.
 *
 * @param request UpdateDataServiceApiRequest
 * @return UpdateDataServiceApiResponse
 */
UpdateDataServiceApiResponse Client::updateDataServiceApi(const UpdateDataServiceApiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataServiceApiWithOptions(request, runtime);
}

/**
 * @summary Updates a data source.
 *
 * @param request UpdateDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataSourceResponse
 */
UpdateDataSourceResponse Client::updateDataSourceWithOptions(const UpdateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.envType();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDataSource"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDataSourceResponse>();
}

/**
 * @summary Updates a data source.
 *
 * @param request UpdateDataSourceRequest
 * @return UpdateDataSourceResponse
 */
UpdateDataSourceResponse Client::updateDataSource(const UpdateDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataSourceWithOptions(request, runtime);
}

/**
 * @summary Updates a file.
 *
 * @description When you debug or call this operation, you must specify new values for the specified parameters to ensure that the values are different from the original configurations of the file. For example, if the original value of a parameter is A, you must change the value of this parameter to B before you commit the node. If you set the parameter to A, an exception that indicates invalid data occurs.
 *
 * @param request UpdateFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFileResponse
 */
UpdateFileResponse Client::updateFileWithOptions(const UpdateFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAdvancedSettings()) {
    body["AdvancedSettings"] = request.advancedSettings();
  }

  if (!!request.hasApplyScheduleImmediately()) {
    body["ApplyScheduleImmediately"] = request.applyScheduleImmediately();
  }

  if (!!request.hasAutoParsing()) {
    body["AutoParsing"] = request.autoParsing();
  }

  if (!!request.hasAutoRerunIntervalMillis()) {
    body["AutoRerunIntervalMillis"] = request.autoRerunIntervalMillis();
  }

  if (!!request.hasAutoRerunTimes()) {
    body["AutoRerunTimes"] = request.autoRerunTimes();
  }

  if (!!request.hasConnectionName()) {
    body["ConnectionName"] = request.connectionName();
  }

  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  if (!!request.hasCronExpress()) {
    body["CronExpress"] = request.cronExpress();
  }

  if (!!request.hasCycleType()) {
    body["CycleType"] = request.cycleType();
  }

  if (!!request.hasDependentNodeIdList()) {
    body["DependentNodeIdList"] = request.dependentNodeIdList();
  }

  if (!!request.hasDependentType()) {
    body["DependentType"] = request.dependentType();
  }

  if (!!request.hasEndEffectDate()) {
    body["EndEffectDate"] = request.endEffectDate();
  }

  if (!!request.hasFileDescription()) {
    body["FileDescription"] = request.fileDescription();
  }

  if (!!request.hasFileFolderPath()) {
    body["FileFolderPath"] = request.fileFolderPath();
  }

  if (!!request.hasFileId()) {
    body["FileId"] = request.fileId();
  }

  if (!!request.hasFileName()) {
    body["FileName"] = request.fileName();
  }

  if (!!request.hasIgnoreParentSkipRunningProperty()) {
    body["IgnoreParentSkipRunningProperty"] = request.ignoreParentSkipRunningProperty();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.imageId();
  }

  if (!!request.hasInputList()) {
    body["InputList"] = request.inputList();
  }

  if (!!request.hasInputParameters()) {
    body["InputParameters"] = request.inputParameters();
  }

  if (!!request.hasOutputList()) {
    body["OutputList"] = request.outputList();
  }

  if (!!request.hasOutputParameters()) {
    body["OutputParameters"] = request.outputParameters();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasParaValue()) {
    body["ParaValue"] = request.paraValue();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  if (!!request.hasRerunMode()) {
    body["RerunMode"] = request.rerunMode();
  }

  if (!!request.hasResourceGroupIdentifier()) {
    body["ResourceGroupIdentifier"] = request.resourceGroupIdentifier();
  }

  if (!!request.hasSchedulerType()) {
    body["SchedulerType"] = request.schedulerType();
  }

  if (!!request.hasStartEffectDate()) {
    body["StartEffectDate"] = request.startEffectDate();
  }

  if (!!request.hasStartImmediately()) {
    body["StartImmediately"] = request.startImmediately();
  }

  if (!!request.hasStop()) {
    body["Stop"] = request.stop();
  }

  if (!!request.hasTimeout()) {
    body["Timeout"] = request.timeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateFile"},
    {"version" , "2020-05-18"},
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
 * @description When you debug or call this operation, you must specify new values for the specified parameters to ensure that the values are different from the original configurations of the file. For example, if the original value of a parameter is A, you must change the value of this parameter to B before you commit the node. If you set the parameter to A, an exception that indicates invalid data occurs.
 *
 * @param request UpdateFileRequest
 * @return UpdateFileResponse
 */
UpdateFileResponse Client::updateFile(const UpdateFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFileWithOptions(request, runtime);
}

/**
 * @summary Updates a folder.
 *
 * @param request UpdateFolderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFolderResponse
 */
UpdateFolderResponse Client::updateFolderWithOptions(const UpdateFolderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFolderId()) {
    body["FolderId"] = request.folderId();
  }

  if (!!request.hasFolderName()) {
    body["FolderName"] = request.folderName();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateFolder"},
    {"version" , "2020-05-18"},
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
 * @summary Updates a folder.
 *
 * @param request UpdateFolderRequest
 * @return UpdateFolderResponse
 */
UpdateFolderResponse Client::updateFolder(const UpdateFolderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFolderWithOptions(request, runtime);
}

/**
 * @summary Returns the check result of an extension point event to DataStudio after the extension point event is triggered during data development and checked by an extension.
 *
 * @param request UpdateIDEEventResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIDEEventResultResponse
 */
UpdateIDEEventResultResponse Client::updateIDEEventResultWithOptions(const UpdateIDEEventResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCheckResult()) {
    body["CheckResult"] = request.checkResult();
  }

  if (!!request.hasCheckResultTip()) {
    body["CheckResultTip"] = request.checkResultTip();
  }

  if (!!request.hasExtensionCode()) {
    body["ExtensionCode"] = request.extensionCode();
  }

  if (!!request.hasMessageId()) {
    body["MessageId"] = request.messageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateIDEEventResult"},
    {"version" , "2020-05-18"},
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
 * @summary Returns the check result of an extension point event to DataStudio after the extension point event is triggered during data development and checked by an extension.
 *
 * @param request UpdateIDEEventResultRequest
 * @return UpdateIDEEventResultResponse
 */
UpdateIDEEventResultResponse Client::updateIDEEventResult(const UpdateIDEEventResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIDEEventResultWithOptions(request, runtime);
}

/**
 * @summary Updates a category.
 *
 * @param request UpdateMetaCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMetaCategoryResponse
 */
UpdateMetaCategoryResponse Client::updateMetaCategoryWithOptions(const UpdateMetaCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCategoryId()) {
    body["CategoryId"] = request.categoryId();
  }

  if (!!request.hasComment()) {
    body["Comment"] = request.comment();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateMetaCategory"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMetaCategoryResponse>();
}

/**
 * @summary Updates a category.
 *
 * @param request UpdateMetaCategoryRequest
 * @return UpdateMetaCategoryResponse
 */
UpdateMetaCategoryResponse Client::updateMetaCategory(const UpdateMetaCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMetaCategoryWithOptions(request, runtime);
}

/**
 * @summary Updates the name and comment of a collection.
 *
 * @description Only the name and comment of a collection can be updated.
 *
 * @param request UpdateMetaCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMetaCollectionResponse
 */
UpdateMetaCollectionResponse Client::updateMetaCollectionWithOptions(const UpdateMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.comment();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasQualifiedName()) {
    query["QualifiedName"] = request.qualifiedName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMetaCollection"},
    {"version" , "2020-05-18"},
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
 * @summary Updates the name and comment of a collection.
 *
 * @description Only the name and comment of a collection can be updated.
 *
 * @param request UpdateMetaCollectionRequest
 * @return UpdateMetaCollectionResponse
 */
UpdateMetaCollectionResponse Client::updateMetaCollection(const UpdateMetaCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMetaCollectionWithOptions(request, runtime);
}

/**
 * @summary Updates the metadata information about a table. Only MaxCompute tables are supported.
 *
 * @param request UpdateMetaTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMetaTableResponse
 */
UpdateMetaTableResponse Client::updateMetaTableWithOptions(const UpdateMetaTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaption()) {
    query["Caption"] = request.caption();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.categoryId();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.envType();
  }

  if (!!request.hasNewOwnerId()) {
    query["NewOwnerId"] = request.newOwnerId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasSchema()) {
    query["Schema"] = request.schema();
  }

  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.tableGuid();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasVisibility()) {
    query["Visibility"] = request.visibility();
  }

  json body = {};
  if (!!request.hasAddedLabels()) {
    body["AddedLabels"] = request.addedLabels();
  }

  if (!!request.hasRemovedLabels()) {
    body["RemovedLabels"] = request.removedLabels();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMetaTable"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMetaTableResponse>();
}

/**
 * @summary Updates the metadata information about a table. Only MaxCompute tables are supported.
 *
 * @param request UpdateMetaTableRequest
 * @return UpdateMetaTableResponse
 */
UpdateMetaTableResponse Client::updateMetaTable(const UpdateMetaTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMetaTableWithOptions(request, runtime);
}

/**
 * @summary Updates the instructions on how to use a table. If no instruction on how to use the table is available, the instructions that are configured by calling this operation are added.
 *
 * @param request UpdateMetaTableIntroWikiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMetaTableIntroWikiResponse
 */
UpdateMetaTableIntroWikiResponse Client::updateMetaTableIntroWikiWithOptions(const UpdateMetaTableIntroWikiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.tableGuid();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.content();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMetaTableIntroWiki"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMetaTableIntroWikiResponse>();
}

/**
 * @summary Updates the instructions on how to use a table. If no instruction on how to use the table is available, the instructions that are configured by calling this operation are added.
 *
 * @param request UpdateMetaTableIntroWikiRequest
 * @return UpdateMetaTableIntroWikiResponse
 */
UpdateMetaTableIntroWikiResponse Client::updateMetaTableIntroWiki(const UpdateMetaTableIntroWikiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMetaTableIntroWikiWithOptions(request, runtime);
}

/**
 * @summary Changes the owner of a node.
 *
 * @param request UpdateNodeOwnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNodeOwnerResponse
 */
UpdateNodeOwnerResponse Client::updateNodeOwnerWithOptions(const UpdateNodeOwnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateNodeOwner"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNodeOwnerResponse>();
}

/**
 * @summary Changes the owner of a node.
 *
 * @param request UpdateNodeOwnerRequest
 * @return UpdateNodeOwnerResponse
 */
UpdateNodeOwnerResponse Client::updateNodeOwner(const UpdateNodeOwnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNodeOwnerWithOptions(request, runtime);
}

/**
 * @summary Freezes or unfreezes a node.
 *
 * @param request UpdateNodeRunModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNodeRunModeResponse
 */
UpdateNodeRunModeResponse Client::updateNodeRunModeWithOptions(const UpdateNodeRunModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNodeId()) {
    body["NodeId"] = request.nodeId();
  }

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  if (!!request.hasSchedulerType()) {
    body["SchedulerType"] = request.schedulerType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateNodeRunMode"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNodeRunModeResponse>();
}

/**
 * @summary Freezes or unfreezes a node.
 *
 * @param request UpdateNodeRunModeRequest
 * @return UpdateNodeRunModeResponse
 */
UpdateNodeRunModeResponse Client::updateNodeRunMode(const UpdateNodeRunModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNodeRunModeWithOptions(request, runtime);
}

/**
 * @summary Updates a subscription relationship.
 *
 * @param request UpdateQualityFollowerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateQualityFollowerResponse
 */
UpdateQualityFollowerResponse Client::updateQualityFollowerWithOptions(const UpdateQualityFollowerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlarmMode()) {
    body["AlarmMode"] = request.alarmMode();
  }

  if (!!request.hasFollower()) {
    body["Follower"] = request.follower();
  }

  if (!!request.hasFollowerId()) {
    body["FollowerId"] = request.followerId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateQualityFollower"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateQualityFollowerResponse>();
}

/**
 * @summary Updates a subscription relationship.
 *
 * @param request UpdateQualityFollowerRequest
 * @return UpdateQualityFollowerResponse
 */
UpdateQualityFollowerResponse Client::updateQualityFollower(const UpdateQualityFollowerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateQualityFollowerWithOptions(request, runtime);
}

/**
 * @summary Updates a monitoring rule.
 *
 * @param request UpdateQualityRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateQualityRuleResponse
 */
UpdateQualityRuleResponse Client::updateQualityRuleWithOptions(const UpdateQualityRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBlockType()) {
    body["BlockType"] = request.blockType();
  }

  if (!!request.hasChecker()) {
    body["Checker"] = request.checker();
  }

  if (!!request.hasComment()) {
    body["Comment"] = request.comment();
  }

  if (!!request.hasCriticalThreshold()) {
    body["CriticalThreshold"] = request.criticalThreshold();
  }

  if (!!request.hasEntityId()) {
    body["EntityId"] = request.entityId();
  }

  if (!!request.hasExpectValue()) {
    body["ExpectValue"] = request.expectValue();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasMethodName()) {
    body["MethodName"] = request.methodName();
  }

  if (!!request.hasOpenSwitch()) {
    body["OpenSwitch"] = request.openSwitch();
  }

  if (!!request.hasOperator()) {
    body["Operator"] = request._operator();
  }

  if (!!request.hasPredictType()) {
    body["PredictType"] = request.predictType();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectName()) {
    body["ProjectName"] = request.projectName();
  }

  if (!!request.hasProperty()) {
    body["Property"] = request.property();
  }

  if (!!request.hasPropertyType()) {
    body["PropertyType"] = request.propertyType();
  }

  if (!!request.hasRuleName()) {
    body["RuleName"] = request.ruleName();
  }

  if (!!request.hasRuleType()) {
    body["RuleType"] = request.ruleType();
  }

  if (!!request.hasTaskSetting()) {
    body["TaskSetting"] = request.taskSetting();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasTrend()) {
    body["Trend"] = request.trend();
  }

  if (!!request.hasWarningThreshold()) {
    body["WarningThreshold"] = request.warningThreshold();
  }

  if (!!request.hasWhereCondition()) {
    body["WhereCondition"] = request.whereCondition();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateQualityRule"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateQualityRuleResponse>();
}

/**
 * @summary Updates a monitoring rule.
 *
 * @param request UpdateQualityRuleRequest
 * @return UpdateQualityRuleResponse
 */
UpdateQualityRuleResponse Client::updateQualityRule(const UpdateQualityRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateQualityRuleWithOptions(request, runtime);
}

/**
 * @summary Modifies a custom alert rule.
 *
 * @param request UpdateRemindRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRemindResponse
 */
UpdateRemindResponse Client::updateRemindWithOptions(const UpdateRemindRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAlertInterval()) {
    body["AlertInterval"] = request.alertInterval();
  }

  if (!!request.hasAlertMethods()) {
    body["AlertMethods"] = request.alertMethods();
  }

  if (!!request.hasAlertTargets()) {
    body["AlertTargets"] = request.alertTargets();
  }

  if (!!request.hasAlertUnit()) {
    body["AlertUnit"] = request.alertUnit();
  }

  if (!!request.hasBaselineIds()) {
    body["BaselineIds"] = request.baselineIds();
  }

  if (!!request.hasBizProcessIds()) {
    body["BizProcessIds"] = request.bizProcessIds();
  }

  if (!!request.hasDetail()) {
    body["Detail"] = request.detail();
  }

  if (!!request.hasDndEnd()) {
    body["DndEnd"] = request.dndEnd();
  }

  if (!!request.hasMaxAlertTimes()) {
    body["MaxAlertTimes"] = request.maxAlertTimes();
  }

  if (!!request.hasNodeIds()) {
    body["NodeIds"] = request.nodeIds();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasRemindId()) {
    body["RemindId"] = request.remindId();
  }

  if (!!request.hasRemindName()) {
    body["RemindName"] = request.remindName();
  }

  if (!!request.hasRemindType()) {
    body["RemindType"] = request.remindType();
  }

  if (!!request.hasRemindUnit()) {
    body["RemindUnit"] = request.remindUnit();
  }

  if (!!request.hasRobotUrls()) {
    body["RobotUrls"] = request.robotUrls();
  }

  if (!!request.hasUseFlag()) {
    body["UseFlag"] = request.useFlag();
  }

  if (!!request.hasWebhooks()) {
    body["Webhooks"] = request.webhooks();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateRemind"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRemindResponse>();
}

/**
 * @summary Modifies a custom alert rule.
 *
 * @param request UpdateRemindRequest
 * @return UpdateRemindResponse
 */
UpdateRemindResponse Client::updateRemind(const UpdateRemindRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRemindWithOptions(request, runtime);
}

/**
 * @summary Updates a MaxCompute table.
 *
 * @param request UpdateTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTableResponse
 */
UpdateTableResponse Client::updateTableWithOptions(const UpdateTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppGuid()) {
    query["AppGuid"] = request.appGuid();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.categoryId();
  }

  if (!!request.hasComment()) {
    query["Comment"] = request.comment();
  }

  if (!!request.hasCreateIfNotExists()) {
    query["CreateIfNotExists"] = request.createIfNotExists();
  }

  if (!!request.hasExternalTableType()) {
    query["ExternalTableType"] = request.externalTableType();
  }

  if (!!request.hasHasPart()) {
    query["HasPart"] = request.hasPart();
  }

  if (!!request.hasIsView()) {
    query["IsView"] = request.isView();
  }

  if (!!request.hasLifeCycle()) {
    query["LifeCycle"] = request.lifeCycle();
  }

  if (!!request.hasLocation()) {
    query["Location"] = request.location();
  }

  if (!!request.hasLogicalLevelId()) {
    query["LogicalLevelId"] = request.logicalLevelId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhysicsLevelId()) {
    query["PhysicsLevelId"] = request.physicsLevelId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasSchema()) {
    query["Schema"] = request.schema();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  if (!!request.hasVisibility()) {
    query["Visibility"] = request.visibility();
  }

  json body = {};
  if (!!request.hasColumns()) {
    body["Columns"] = request.columns();
  }

  if (!!request.hasEndpoint()) {
    body["Endpoint"] = request.endpoint();
  }

  if (!!request.hasEnvType()) {
    body["EnvType"] = request.envType();
  }

  if (!!request.hasThemes()) {
    body["Themes"] = request.themes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTable"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTableResponse>();
}

/**
 * @summary Updates a MaxCompute table.
 *
 * @param request UpdateTableRequest
 * @return UpdateTableResponse
 */
UpdateTableResponse Client::updateTable(const UpdateTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTableWithOptions(request, runtime);
}

/**
 * @summary Updates the fields in a MaxCompute table.
 *
 * @param request UpdateTableAddColumnRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTableAddColumnResponse
 */
UpdateTableAddColumnResponse Client::updateTableAddColumnWithOptions(const UpdateTableAddColumnRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.tableGuid();
  }

  json body = {};
  if (!!request.hasColumn()) {
    body["Column"] = request.column();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTableAddColumn"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTableAddColumnResponse>();
}

/**
 * @summary Updates the fields in a MaxCompute table.
 *
 * @param request UpdateTableAddColumnRequest
 * @return UpdateTableAddColumnResponse
 */
UpdateTableAddColumnResponse Client::updateTableAddColumn(const UpdateTableAddColumnRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTableAddColumnWithOptions(request, runtime);
}

/**
 * @summary Updates a table level. This operation will be replaced soon. We recommend that you do not call this operation.
 *
 * @param request UpdateTableLevelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTableLevelResponse
 */
UpdateTableLevelResponse Client::updateTableLevelWithOptions(const UpdateTableLevelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasLevelId()) {
    query["LevelId"] = request.levelId();
  }

  if (!!request.hasLevelType()) {
    query["LevelType"] = request.levelType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTableLevel"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTableLevelResponse>();
}

/**
 * @summary Updates a table level. This operation will be replaced soon. We recommend that you do not call this operation.
 *
 * @param request UpdateTableLevelRequest
 * @return UpdateTableLevelResponse
 */
UpdateTableLevelResponse Client::updateTableLevel(const UpdateTableLevelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTableLevelWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about a table, such as the table folder, level, and category.
 *
 * @param request UpdateTableModelInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTableModelInfoResponse
 */
UpdateTableModelInfoResponse Client::updateTableModelInfoWithOptions(const UpdateTableModelInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFirstLevelThemeId()) {
    query["FirstLevelThemeId"] = request.firstLevelThemeId();
  }

  if (!!request.hasLevelId()) {
    query["LevelId"] = request.levelId();
  }

  if (!!request.hasLevelType()) {
    query["LevelType"] = request.levelType();
  }

  if (!!request.hasSecondLevelThemeId()) {
    query["SecondLevelThemeId"] = request.secondLevelThemeId();
  }

  if (!!request.hasTableGuid()) {
    query["TableGuid"] = request.tableGuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTableModelInfo"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTableModelInfoResponse>();
}

/**
 * @summary Modifies the information about a table, such as the table folder, level, and category.
 *
 * @param request UpdateTableModelInfoRequest
 * @return UpdateTableModelInfoResponse
 */
UpdateTableModelInfoResponse Client::updateTableModelInfo(const UpdateTableModelInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTableModelInfoWithOptions(request, runtime);
}

/**
 * @summary Updates a table theme. This operation will be replaced soon. We recommend that you do not call this operation.
 *
 * @param request UpdateTableThemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTableThemeResponse
 */
UpdateTableThemeResponse Client::updateTableThemeWithOptions(const UpdateTableThemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasThemeId()) {
    query["ThemeId"] = request.themeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTableTheme"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTableThemeResponse>();
}

/**
 * @summary Updates a table theme. This operation will be replaced soon. We recommend that you do not call this operation.
 *
 * @param request UpdateTableThemeRequest
 * @return UpdateTableThemeResponse
 */
UpdateTableThemeResponse Client::updateTableTheme(const UpdateTableThemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTableThemeWithOptions(request, runtime);
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
    body["ClassName"] = request.className();
  }

  if (!!request.hasCmdDescription()) {
    body["CmdDescription"] = request.cmdDescription();
  }

  if (!!request.hasExample()) {
    body["Example"] = request.example();
  }

  if (!!request.hasFileFolderPath()) {
    body["FileFolderPath"] = request.fileFolderPath();
  }

  if (!!request.hasFileId()) {
    body["FileId"] = request.fileId();
  }

  if (!!request.hasFunctionType()) {
    body["FunctionType"] = request.functionType();
  }

  if (!!request.hasParameterDescription()) {
    body["ParameterDescription"] = request.parameterDescription();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectIdentifier()) {
    body["ProjectIdentifier"] = request.projectIdentifier();
  }

  if (!!request.hasResources()) {
    body["Resources"] = request.resources();
  }

  if (!!request.hasReturnValue()) {
    body["ReturnValue"] = request.returnValue();
  }

  if (!!request.hasUdfDescription()) {
    body["UdfDescription"] = request.udfDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateUdfFile"},
    {"version" , "2020-05-18"},
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
 * @summary Returns the processing result sent by an extension after a process in Operation Center is blocked by the extension.
 *
 * @param request UpdateWorkbenchEventResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkbenchEventResultResponse
 */
UpdateWorkbenchEventResultResponse Client::updateWorkbenchEventResultWithOptions(const UpdateWorkbenchEventResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckResult()) {
    query["CheckResult"] = request.checkResult();
  }

  if (!!request.hasCheckResultTip()) {
    query["CheckResultTip"] = request.checkResultTip();
  }

  if (!!request.hasExtensionCode()) {
    query["ExtensionCode"] = request.extensionCode();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.messageId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateWorkbenchEventResult"},
    {"version" , "2020-05-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkbenchEventResultResponse>();
}

/**
 * @summary Returns the processing result sent by an extension after a process in Operation Center is blocked by the extension.
 *
 * @param request UpdateWorkbenchEventResultRequest
 * @return UpdateWorkbenchEventResultResponse
 */
UpdateWorkbenchEventResultResponse Client::updateWorkbenchEventResult(const UpdateWorkbenchEventResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWorkbenchEventResultWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518