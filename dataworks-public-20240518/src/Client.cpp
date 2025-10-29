#include <darabonba/Core.hpp>
#include <alibabacloud/DataworksPublic20240518.hpp>
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
using namespace AlibabaCloud::DataworksPublic20240518::Models;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{

AlibabaCloud::DataworksPublic20240518::Client::Client(AlibabaCloud::OpenApi::Utils::Models::Config &config): OpenApiClient(config){
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
 * @summary Terminates the process for deploying or undeploying an entity. The process is not deleted and can still be queried by calling query operations.
 *
 * @param request AbolishPipelineRunRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AbolishPipelineRunResponse
 */
AbolishPipelineRunResponse Client::abolishPipelineRunWithOptions(const AbolishPipelineRunRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
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
 * @summary Terminates the process for deploying or undeploying an entity. The process is not deleted and can still be queried by calling query operations.
 *
 * @param request AbolishPipelineRunRequest
 * @return AbolishPipelineRunResponse
 */
AbolishPipelineRunResponse Client::abolishPipelineRun(const AbolishPipelineRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return abolishPipelineRunWithOptions(request, runtime);
}

/**
 * @summary 从集合中移除实体对象
 *
 * @param request AddEntityIntoMetaCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddEntityIntoMetaCollectionResponse
 */
AddEntityIntoMetaCollectionResponse Client::addEntityIntoMetaCollectionWithOptions(const AddEntityIntoMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasMetaCollectionId()) {
    query["MetaCollectionId"] = request.metaCollectionId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
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
 * @summary 从集合中移除实体对象
 *
 * @param request AddEntityIntoMetaCollectionRequest
 * @return AddEntityIntoMetaCollectionResponse
 */
AddEntityIntoMetaCollectionResponse Client::addEntityIntoMetaCollection(const AddEntityIntoMetaCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addEntityIntoMetaCollectionWithOptions(request, runtime);
}

/**
 * @summary Associates a resource group with a workspace.
 *
 * @description 1.  You can use this API operation only in DataWorks Basic Edition or an advanced edition.
 * 2.  Your account must be assigned one of the following roles of the desired workspace:
 * *   Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
 *
 * @param request AssociateProjectToResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateProjectToResourceGroupResponse
 */
AssociateProjectToResourceGroupResponse Client::associateProjectToResourceGroupWithOptions(const AssociateProjectToResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
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
 * @description 1.  You can use this API operation only in DataWorks Basic Edition or an advanced edition.
 * 2.  Your account must be assigned one of the following roles of the desired workspace:
 * *   Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
 *
 * @param request AssociateProjectToResourceGroupRequest
 * @return AssociateProjectToResourceGroupResponse
 */
AssociateProjectToResourceGroupResponse Client::associateProjectToResourceGroup(const AssociateProjectToResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateProjectToResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Associates monitoring rules with a data quality monitoring task.
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
    request.setDataQualityRuleIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dataQualityRuleIds(), "DataQualityRuleIds", "json"));
  }

  json body = {};
  if (!!request.hasDataQualityEvaluationTaskId()) {
    body["DataQualityEvaluationTaskId"] = request.dataQualityEvaluationTaskId();
  }

  if (!!request.hasDataQualityRuleIdsShrink()) {
    body["DataQualityRuleIds"] = request.dataQualityRuleIdsShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
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
 * @summary Associates monitoring rules with a data quality monitoring task.
 *
 * @param request AttachDataQualityRulesToEvaluationTaskRequest
 * @return AttachDataQualityRulesToEvaluationTaskResponse
 */
AttachDataQualityRulesToEvaluationTaskResponse Client::attachDataQualityRulesToEvaluationTask(const AttachDataQualityRulesToEvaluationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachDataQualityRulesToEvaluationTaskWithOptions(request, runtime);
}

/**
 * @summary Performs incremental updates on multiple tasks at a time.
 *
 * @description This API operation is available for all DataWorks editions.
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
    request.setTasksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tasks(), "Tasks", "json"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.comment();
  }

  if (!!request.hasTasksShrink()) {
    body["Tasks"] = request.tasksShrink();
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request BatchUpdateTasksRequest
 * @return BatchUpdateTasksResponse
 */
BatchUpdateTasksResponse Client::batchUpdateTasks(const BatchUpdateTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchUpdateTasksWithOptions(request, runtime);
}

/**
 * @summary Clones an existing data source.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
 * *   Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
 *
 * @param request CloneDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloneDataSourceResponse
 */
CloneDataSourceResponse Client::cloneDataSourceWithOptions(const CloneDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloneDataSourceName()) {
    query["CloneDataSourceName"] = request.cloneDataSourceName();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
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
 * @summary Clones an existing data source.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
 * *   Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
 *
 * @param request CloneDataSourceRequest
 * @return CloneDataSourceResponse
 */
CloneDataSourceResponse Client::cloneDataSource(const CloneDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cloneDataSourceWithOptions(request, runtime);
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
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTriggerCondition()) {
    request.setTriggerConditionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.triggerCondition(), "TriggerCondition", "json"));
  }

  json query = {};
  if (!!request.hasEnabled()) {
    query["Enabled"] = request.enabled();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.owner();
  }

  if (!!request.hasTriggerConditionShrink()) {
    query["TriggerCondition"] = request.triggerConditionShrink();
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
 * @param request CreateComponentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateComponentResponse
 */
CreateComponentResponse Client::createComponentWithOptions(const CreateComponentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.spec();
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
 * @param request CreateComponentRequest
 * @return CreateComponentResponse
 */
CreateComponentResponse Client::createComponent(const CreateComponentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createComponentWithOptions(request, runtime);
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
    request.setNotificationSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notificationSettings(), "NotificationSettings", "json"));
  }

  if (!!tmpReq.hasTriggerConditions()) {
    request.setTriggerConditionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.triggerConditions(), "TriggerConditions", "json"));
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
 * @summary Creates a new-version synchronization task.
 *
 * @description *   This API operation is available for all DataWorks editions.
 * *   You can call this API operation to create a synchronization task. When you call this API operation, you must configure parameters such as SourceDataSourceSettings, DestinationDataSourceSettings, MigrationType, TransformationRules, TableMappings, and JobSettings. The SourceDataSourceSettings parameter defines the settings related to the source. The DestinationDataSourceSettings parameter defines the settings related to the destination. The MigrationType parameter defines the synchronization task type. The TransformationRules parameter defines the transformation rules for objects involved in the synchronization task. The TableMappings parameter defines the mappings between rules used to select synchronization objects in the source and transformation rules applied to the selected synchronization objects. The JobSettings parameter defines the settings for the dimension of the synchronization task, including policies for data type mappings between source fields and destination fields and settings for periodic scheduling.
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
  if (!!request.hasDestinationDataSourceType()) {
    query["DestinationDataSourceType"] = request.destinationDataSourceType();
  }

  if (!!request.hasJobName()) {
    query["JobName"] = request.jobName();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.jobType();
  }

  if (!!request.hasMigrationType()) {
    query["MigrationType"] = request.migrationType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasSourceDataSourceType()) {
    query["SourceDataSourceType"] = request.sourceDataSourceType();
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDestinationDataSourceSettingsShrink()) {
    body["DestinationDataSourceSettings"] = request.destinationDataSourceSettingsShrink();
  }

  if (!!request.hasJobSettingsShrink()) {
    body["JobSettings"] = request.jobSettingsShrink();
  }

  if (!!request.hasResourceSettingsShrink()) {
    body["ResourceSettings"] = request.resourceSettingsShrink();
  }

  if (!!request.hasSourceDataSourceSettingsShrink()) {
    body["SourceDataSourceSettings"] = request.sourceDataSourceSettingsShrink();
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
 * @summary Creates a new-version synchronization task.
 *
 * @description *   This API operation is available for all DataWorks editions.
 * *   You can call this API operation to create a synchronization task. When you call this API operation, you must configure parameters such as SourceDataSourceSettings, DestinationDataSourceSettings, MigrationType, TransformationRules, TableMappings, and JobSettings. The SourceDataSourceSettings parameter defines the settings related to the source. The DestinationDataSourceSettings parameter defines the settings related to the destination. The MigrationType parameter defines the synchronization task type. The TransformationRules parameter defines the transformation rules for objects involved in the synchronization task. The TableMappings parameter defines the mappings between rules used to select synchronization objects in the source and transformation rules applied to the selected synchronization objects. The JobSettings parameter defines the settings for the dimension of the synchronization task, including policies for data type mappings between source fields and destination fields and settings for periodic scheduling.
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
    request.setManagersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.managers(), "Managers", "json"));
  }

  if (!!tmpReq.hasValues()) {
    request.setValuesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.values(), "Values", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasManagersShrink()) {
    query["Managers"] = request.managersShrink();
  }

  if (!!request.hasValueType()) {
    query["ValueType"] = request.valueType();
  }

  if (!!request.hasValuesShrink()) {
    query["Values"] = request.valuesShrink();
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
 * @description This API operation is available for all DataWorks editions.
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
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTarget()) {
    request.setTargetShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.target(), "Target", "json"));
  }

  json body = {};
  if (!!request.hasCondition()) {
    body["Condition"] = request.condition();
  }

  if (!!request.hasNotificationShrink()) {
    body["Notification"] = request.notificationShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTargetShrink()) {
    body["Target"] = request.targetShrink();
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request CreateDataQualityAlertRuleRequest
 * @return CreateDataQualityAlertRuleResponse
 */
CreateDataQualityAlertRuleResponse Client::createDataQualityAlertRule(const CreateDataQualityAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataQualityAlertRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a monitor in DataWorks Data Quality.
 *
 * @description This API operation is supported in all DataWorks editions.
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
    request.setDataQualityRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dataQualityRules(), "DataQualityRules", "json"));
  }

  if (!!tmpReq.hasHooks()) {
    request.setHooksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.hooks(), "Hooks", "json"));
  }

  if (!!tmpReq.hasNotifications()) {
    request.setNotificationsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notifications(), "Notifications", "json"));
  }

  if (!!tmpReq.hasTarget()) {
    request.setTargetShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.target(), "Target", "json"));
  }

  if (!!tmpReq.hasTrigger()) {
    request.setTriggerShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.trigger(), "Trigger", "json"));
  }

  json body = {};
  if (!!request.hasDataQualityRulesShrink()) {
    body["DataQualityRules"] = request.dataQualityRulesShrink();
  }

  if (!!request.hasDataSourceId()) {
    body["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasHooksShrink()) {
    body["Hooks"] = request.hooksShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNotificationsShrink()) {
    body["Notifications"] = request.notificationsShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasRuntimeConf()) {
    body["RuntimeConf"] = request.runtimeConf();
  }

  if (!!request.hasTargetShrink()) {
    body["Target"] = request.targetShrink();
  }

  if (!!request.hasTriggerShrink()) {
    body["Trigger"] = request.triggerShrink();
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
 * @summary Creates a monitor in DataWorks Data Quality.
 *
 * @description This API operation is supported in all DataWorks editions.
 *
 * @param request CreateDataQualityEvaluationTaskRequest
 * @return CreateDataQualityEvaluationTaskResponse
 */
CreateDataQualityEvaluationTaskResponse Client::createDataQualityEvaluationTask(const CreateDataQualityEvaluationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataQualityEvaluationTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a monitor instance.
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
    request.setRuntimeResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.runtimeResource(), "RuntimeResource", "json"));
  }

  json body = {};
  if (!!request.hasDataQualityEvaluationTaskId()) {
    body["DataQualityEvaluationTaskId"] = request.dataQualityEvaluationTaskId();
  }

  if (!!request.hasParameters()) {
    body["Parameters"] = request.parameters();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasRuntimeResourceShrink()) {
    body["RuntimeResource"] = request.runtimeResourceShrink();
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
 * @summary Creates a monitor instance.
 *
 * @param request CreateDataQualityEvaluationTaskInstanceRequest
 * @return CreateDataQualityEvaluationTaskInstanceResponse
 */
CreateDataQualityEvaluationTaskInstanceResponse Client::createDataQualityEvaluationTaskInstance(const CreateDataQualityEvaluationTaskInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataQualityEvaluationTaskInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a data quality monitoring rule.
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
    request.setCheckingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.checkingConfig(), "CheckingConfig", "json"));
  }

  if (!!tmpReq.hasErrorHandlers()) {
    request.setErrorHandlersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.errorHandlers(), "ErrorHandlers", "json"));
  }

  if (!!tmpReq.hasSamplingConfig()) {
    request.setSamplingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.samplingConfig(), "SamplingConfig", "json"));
  }

  if (!!tmpReq.hasTarget()) {
    request.setTargetShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.target(), "Target", "json"));
  }

  json body = {};
  if (!!request.hasCheckingConfigShrink()) {
    body["CheckingConfig"] = request.checkingConfigShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEnabled()) {
    body["Enabled"] = request.enabled();
  }

  if (!!request.hasErrorHandlersShrink()) {
    body["ErrorHandlers"] = request.errorHandlersShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasSamplingConfigShrink()) {
    body["SamplingConfig"] = request.samplingConfigShrink();
  }

  if (!!request.hasSeverity()) {
    body["Severity"] = request.severity();
  }

  if (!!request.hasTargetShrink()) {
    body["Target"] = request.targetShrink();
  }

  if (!!request.hasTemplateCode()) {
    body["TemplateCode"] = request.templateCode();
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
 * @summary Creates a data quality monitoring rule.
 *
 * @param request CreateDataQualityRuleRequest
 * @return CreateDataQualityRuleResponse
 */
CreateDataQualityRuleResponse Client::createDataQualityRule(const CreateDataQualityRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataQualityRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a data quality monitoring rule template.
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
    request.setCheckingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.checkingConfig(), "CheckingConfig", "json"));
  }

  if (!!tmpReq.hasSamplingConfig()) {
    request.setSamplingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.samplingConfig(), "SamplingConfig", "json"));
  }

  json body = {};
  if (!!request.hasCheckingConfigShrink()) {
    body["CheckingConfig"] = request.checkingConfigShrink();
  }

  if (!!request.hasDirectoryPath()) {
    body["DirectoryPath"] = request.directoryPath();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasSamplingConfigShrink()) {
    body["SamplingConfig"] = request.samplingConfigShrink();
  }

  if (!!request.hasVisibleScope()) {
    body["VisibleScope"] = request.visibleScope();
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
 * @summary Creates a data quality monitoring rule template.
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
 * @description This API operation is available for all DataWorks editions.
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
    request.setComputeResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.computeResource(), "ComputeResource", "json"));
  }

  if (!!tmpReq.hasHooks()) {
    request.setHooksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.hooks(), "Hooks", "json"));
  }

  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.parameters(), "Parameters", "json"));
  }

  if (!!tmpReq.hasRuntimeResource()) {
    request.setRuntimeResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.runtimeResource(), "RuntimeResource", "json"));
  }

  if (!!tmpReq.hasTrigger()) {
    request.setTriggerShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.trigger(), "Trigger", "json"));
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasComputeResourceShrink()) {
    body["ComputeResource"] = request.computeResourceShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasHooksShrink()) {
    body["Hooks"] = request.hooksShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasParametersShrink()) {
    body["Parameters"] = request.parametersShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasRuntimeResourceShrink()) {
    body["RuntimeResource"] = request.runtimeResourceShrink();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.spec();
  }

  if (!!request.hasTriggerShrink()) {
    body["Trigger"] = request.triggerShrink();
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request CreateDataQualityScanRequest
 * @return CreateDataQualityScanResponse
 */
CreateDataQualityScanResponse Client::createDataQualityScan(const CreateDataQualityScanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataQualityScanWithOptions(request, runtime);
}

/**
 * @summary Triggers a data quality monitoring task and returns the run instance ID.
 *
 * @description This API operation is available for all DataWorks editions.
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
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.parameters(), "Parameters", "json"));
  }

  if (!!tmpReq.hasRuntimeResource()) {
    request.setRuntimeResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.runtimeResource(), "RuntimeResource", "json"));
  }

  json body = {};
  if (!!request.hasDataQualityScanId()) {
    body["DataQualityScanId"] = request.dataQualityScanId();
  }

  if (!!request.hasParametersShrink()) {
    body["Parameters"] = request.parametersShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasRuntimeResourceShrink()) {
    body["RuntimeResource"] = request.runtimeResourceShrink();
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
 * @summary Triggers a data quality monitoring task and returns the run instance ID.
 *
 * @description This API operation is available for all DataWorks editions.
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request CreateDataQualityTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataQualityTemplateResponse
 */
CreateDataQualityTemplateResponse Client::createDataQualityTemplateWithOptions(const CreateDataQualityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.spec();
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
 * @description This API operation is available for all DataWorks editions.
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
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
 * *   Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
 *
 * @param request CreateDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataSourceResponse
 */
CreateDataSourceResponse Client::createDataSourceWithOptions(const CreateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionProperties()) {
    query["ConnectionProperties"] = request.connectionProperties();
  }

  if (!!request.hasConnectionPropertiesMode()) {
    query["ConnectionPropertiesMode"] = request.connectionPropertiesMode();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
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
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
 * *   Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
 *
 * @param request CreateDataSourceRequest
 * @return CreateDataSourceResponse
 */
CreateDataSourceResponse Client::createDataSource(const CreateDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataSourceWithOptions(request, runtime);
}

/**
 * @summary Creates a rule for sharing a data source to other workspaces or RAM users.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  If you want to share a data source from Workspace A to Workspace B, you must have the permissions to share the data source in both workspaces. You can call this operation only if you are assigned one of the following roles in DataWorks:
 * *   Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
 *
 * @param request CreateDataSourceSharedRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDataSourceSharedRuleResponse
 */
CreateDataSourceSharedRuleResponse Client::createDataSourceSharedRuleWithOptions(const CreateDataSourceSharedRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.envType();
  }

  if (!!request.hasSharedUser()) {
    query["SharedUser"] = request.sharedUser();
  }

  if (!!request.hasTargetProjectId()) {
    query["TargetProjectId"] = request.targetProjectId();
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
 * @summary Creates a rule for sharing a data source to other workspaces or RAM users.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  If you want to share a data source from Workspace A to Workspace B, you must have the permissions to share the data source in both workspaces. You can call this operation only if you are assigned one of the following roles in DataWorks:
 * *   Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
 *
 * @param request CreateDataSourceSharedRuleRequest
 * @return CreateDataSourceSharedRuleResponse
 */
CreateDataSourceSharedRuleResponse Client::createDataSourceSharedRule(const CreateDataSourceSharedRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDataSourceSharedRuleWithOptions(request, runtime);
}

/**
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
 * @param request CreateFileRequest
 * @return CreateFileResponse
 */
CreateFileResponse Client::createFile(const CreateFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFileWithOptions(request, runtime);
}

/**
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
 * @description >  You cannot use this API operation to create multiple UDFs at a time. If you specify multiple UDFs by using FlowSpec, the system creates only the first specified UDF.
 *
 * @param request CreateFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFunctionResponse
 */
CreateFunctionResponse Client::createFunctionWithOptions(const CreateFunctionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.spec();
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
 * @description >  You cannot use this API operation to create multiple UDFs at a time. If you specify multiple UDFs by using FlowSpec, the system creates only the first specified UDF.
 *
 * @param request CreateFunctionRequest
 * @return CreateFunctionResponse
 */
CreateFunctionResponse Client::createFunction(const CreateFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFunctionWithOptions(request, runtime);
}

/**
 * @summary Creates a lineage between a source entity and a destination entity. Either the source or destination entity must be a custom entity.
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
    request.setDstEntityShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dstEntity(), "DstEntity", "json"));
  }

  if (!!tmpReq.hasSrcEntity()) {
    request.setSrcEntityShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.srcEntity(), "SrcEntity", "json"));
  }

  if (!!tmpReq.hasTask()) {
    request.setTaskShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.task(), "Task", "json"));
  }

  json query = {};
  if (!!request.hasDstEntityShrink()) {
    query["DstEntity"] = request.dstEntityShrink();
  }

  if (!!request.hasSrcEntityShrink()) {
    query["SrcEntity"] = request.srcEntityShrink();
  }

  if (!!request.hasTaskShrink()) {
    query["Task"] = request.taskShrink();
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
 * @summary Creates a lineage between a source entity and a destination entity. Either the source or destination entity must be a custom entity.
 *
 * @param request CreateLineageRelationshipRequest
 * @return CreateLineageRelationshipResponse
 */
CreateLineageRelationshipResponse Client::createLineageRelationship(const CreateLineageRelationshipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLineageRelationshipWithOptions(request, runtime);
}

/**
 * @summary Creates a collection in Data Map. Collections include categories, subcategories, data albums, and categories that are created in the data albums.
 *
 * @param request CreateMetaCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMetaCollectionResponse
 */
CreateMetaCollectionResponse Client::createMetaCollectionWithOptions(const CreateMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.parentId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
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
 * @param request CreateMetaCollectionRequest
 * @return CreateMetaCollectionResponse
 */
CreateMetaCollectionResponse Client::createMetaCollection(const CreateMetaCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMetaCollectionWithOptions(request, runtime);
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
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
  }

  if (!!request.hasVswitchId()) {
    body["VswitchId"] = request.vswitchId();
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
 * @description >  You cannot use this API operation to create multiple nodes at a time. If you specify multiple nodes by using FlowSpec, the system creates only the first specified node.
 *
 * @param request CreateNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNodeResponse
 */
CreateNodeResponse Client::createNodeWithOptions(const CreateNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContainerId()) {
    body["ContainerId"] = request.containerId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasScene()) {
    body["Scene"] = request.scene();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.spec();
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
 * @description >  You cannot use this API operation to create multiple nodes at a time. If you specify multiple nodes by using FlowSpec, the system creates only the first specified node.
 *
 * @param request CreateNodeRequest
 * @return CreateNodeResponse
 */
CreateNodeResponse Client::createNode(const CreateNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNodeWithOptions(request, runtime);
}

/**
 * @summary Creates a process for deploying or undeploying an entity in Data Studio.
 *
 * @description >  You cannot use this API operation to create a process for multiple entities at a time. If you specify multiple entities in a request, the system creates a process only for the first entity.
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
    request.setObjectIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.objectIds(), "ObjectIds", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasObjectIdsShrink()) {
    body["ObjectIds"] = request.objectIdsShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
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
 * @summary Creates a process for deploying or undeploying an entity in Data Studio.
 *
 * @description >  You cannot use this API operation to create a process for multiple entities at a time. If you specify multiple entities in a request, the system creates a process only for the first entity.
 *
 * @param request CreatePipelineRunRequest
 * @return CreatePipelineRunResponse
 */
CreatePipelineRunResponse Client::createPipelineRun(const CreatePipelineRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPipelineRunWithOptions(request, runtime);
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
    request.setAliyunResourceTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.aliyunResourceTags(), "AliyunResourceTags", "json"));
  }

  json body = {};
  if (!!request.hasAliyunResourceGroupId()) {
    body["AliyunResourceGroupId"] = request.aliyunResourceGroupId();
  }

  if (!!request.hasAliyunResourceTagsShrink()) {
    body["AliyunResourceTags"] = request.aliyunResourceTagsShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDevEnvironmentEnabled()) {
    body["DevEnvironmentEnabled"] = request.devEnvironmentEnabled();
  }

  if (!!request.hasDevRoleDisabled()) {
    body["DevRoleDisabled"] = request.devRoleDisabled();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.displayName();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPaiTaskEnabled()) {
    body["PaiTaskEnabled"] = request.paiTaskEnabled();
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
    request.setRoleCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.roleCodes(), "RoleCodes", "json"));
  }

  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasRoleCodesShrink()) {
    body["RoleCodes"] = request.roleCodesShrink();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.userId();
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
 * @summary >  You cannot use this API operation to create multiple file resources at a time. If you specify multiple file resources by using FlowSpec, the system creates only the first specified resource.
 *
 * @description Private
 *
 * @param request CreateResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceResponse
 */
CreateResourceResponse Client::createResourceWithOptions(const CreateResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasResourceFile()) {
    body["ResourceFile"] = request.resourceFile();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.spec();
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
 * @summary >  You cannot use this API operation to create multiple file resources at a time. If you specify multiple file resources by using FlowSpec, the system creates only the first specified resource.
 *
 * @description Private
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
  CreateResourceRequest createResourceReq = CreateResourceRequest();
  Utils::Utils::convert(request, createResourceReq);
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
    createResourceReq.setResourceFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  CreateResourceResponse createResourceResp = createResourceWithOptions(createResourceReq, runtime);
  return createResourceResp;
}

/**
 * @summary Creates a resource file in DataStudio. The following types are supported: JAR, Archive, File, and Python.
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
 * @summary Creates a resource file in DataStudio. The following types are supported: JAR, Archive, File, and Python.
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
 * @summary Creates a serverless resource group.
 *
 * @description 1.  You can use this API operation only in DataWorks Basic Edition or an advanced edition.
 * 2.  **Before you call this API operation, you must make sure that you have a good command of the billing details and [pricing](https://help.aliyun.com/document_detail/2680173.html) of serverless resource groups.
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
    request.setAliyunResourceTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.aliyunResourceTags(), "AliyunResourceTags", "json"));
  }

  json body = {};
  if (!!request.hasAliyunResourceGroupId()) {
    body["AliyunResourceGroupId"] = request.aliyunResourceGroupId();
  }

  if (!!request.hasAliyunResourceTagsShrink()) {
    body["AliyunResourceTags"] = request.aliyunResourceTagsShrink();
  }

  if (!!request.hasAutoRenewEnabled()) {
    body["AutoRenewEnabled"] = request.autoRenewEnabled();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPaymentDuration()) {
    body["PaymentDuration"] = request.paymentDuration();
  }

  if (!!request.hasPaymentDurationUnit()) {
    body["PaymentDurationUnit"] = request.paymentDurationUnit();
  }

  if (!!request.hasPaymentType()) {
    body["PaymentType"] = request.paymentType();
  }

  if (!!request.hasRemark()) {
    body["Remark"] = request.remark();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.spec();
  }

  if (!!request.hasVpcId()) {
    body["VpcId"] = request.vpcId();
  }

  if (!!request.hasVswitchId()) {
    body["VswitchId"] = request.vswitchId();
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
 * @summary Creates a serverless resource group.
 *
 * @description 1.  You can use this API operation only in DataWorks Basic Edition or an advanced edition.
 * 2.  **Before you call this API operation, you must make sure that you have a good command of the billing details and [pricing](https://help.aliyun.com/document_detail/2680173.html) of serverless resource groups.
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
    body["DestinationCidr"] = request.destinationCidr();
  }

  if (!!request.hasNetworkId()) {
    body["NetworkId"] = request.networkId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
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
 * @description > You cannot use this API operation to create multiple workflows at a time. If you specify multiple workflows by using FlowSpec, the system creates only the first specified workflow. Other specified workflows and the nodes in the workflows are ignored. You can call the CreateNode operation to create a node.
 *
 * @param request CreateWorkflowDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkflowDefinitionResponse
 */
CreateWorkflowDefinitionResponse Client::createWorkflowDefinitionWithOptions(const CreateWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.spec();
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
 * @description > You cannot use this API operation to create multiple workflows at a time. If you specify multiple workflows by using FlowSpec, the system creates only the first specified workflow. Other specified workflows and the nodes in the workflows are ignored. You can call the CreateNode operation to create a node.
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
 * @param tmpReq CreateWorkflowInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateWorkflowInstancesResponse
 */
CreateWorkflowInstancesResponse Client::createWorkflowInstancesWithOptions(const CreateWorkflowInstancesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateWorkflowInstancesShrinkRequest request = CreateWorkflowInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDefaultRunProperties()) {
    request.setDefaultRunPropertiesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.defaultRunProperties(), "DefaultRunProperties", "json"));
  }

  if (!!tmpReq.hasPeriods()) {
    request.setPeriodsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.periods(), "Periods", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json body = {};
  if (!!request.hasAutoStartEnabled()) {
    body["AutoStartEnabled"] = request.autoStartEnabled();
  }

  if (!!request.hasComment()) {
    body["Comment"] = request.comment();
  }

  if (!!request.hasDefaultRunPropertiesShrink()) {
    body["DefaultRunProperties"] = request.defaultRunPropertiesShrink();
  }

  if (!!request.hasEnvType()) {
    body["EnvType"] = request.envType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPeriodsShrink()) {
    body["Periods"] = request.periodsShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTagCreationPolicy()) {
    body["TagCreationPolicy"] = request.tagCreationPolicy();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTaskParameters()) {
    body["TaskParameters"] = request.taskParameters();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  if (!!request.hasWorkflowId()) {
    body["WorkflowId"] = request.workflowId();
  }

  if (!!request.hasWorkflowParameters()) {
    body["WorkflowParameters"] = request.workflowParameters();
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
 * @param request CreateWorkflowInstancesRequest
 * @return CreateWorkflowInstancesResponse
 */
CreateWorkflowInstancesResponse Client::createWorkflowInstances(const CreateWorkflowInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createWorkflowInstancesWithOptions(request, runtime);
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
    body["Id"] = request.id();
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
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks: Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M.
 *
 * @param request DeleteCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCertificateResponse
 */
DeleteCertificateResponse Client::deleteCertificateWithOptions(const DeleteCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
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
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks: Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M.
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
 * @description >  A UDF that is deployed cannot be deleted. If you want to delete such a UDF, you must first undeploy the UDF.
 *
 * @param request DeleteComponentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteComponentResponse
 */
DeleteComponentResponse Client::deleteComponentWithOptions(const DeleteComponentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasComponentId()) {
    body["ComponentId"] = request.componentId();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
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
 * @description >  A UDF that is deployed cannot be deleted. If you want to delete such a UDF, you must first undeploy the UDF.
 *
 * @param request DeleteComponentRequest
 * @return DeleteComponentResponse
 */
DeleteComponentResponse Client::deleteComponent(const DeleteComponentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteComponentWithOptions(request, runtime);
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
    request.setValuesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.values(), "Values", "json"));
  }

  json query = {};
  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasValuesShrink()) {
    query["Values"] = request.valuesShrink();
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
 * @description Subscribe to DataWorks Basic Edition or a higher version to use this API.
 *
 * @param request DeleteDataQualityAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataQualityAlertRuleResponse
 */
DeleteDataQualityAlertRuleResponse Client::deleteDataQualityAlertRuleWithOptions(const DeleteDataQualityAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
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
 * @description Subscribe to DataWorks Basic Edition or a higher version to use this API.
 *
 * @param request DeleteDataQualityAlertRuleRequest
 * @return DeleteDataQualityAlertRuleResponse
 */
DeleteDataQualityAlertRuleResponse Client::deleteDataQualityAlertRule(const DeleteDataQualityAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataQualityAlertRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a data quality monitoring task.
 *
 * @param request DeleteDataQualityEvaluationTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataQualityEvaluationTaskResponse
 */
DeleteDataQualityEvaluationTaskResponse Client::deleteDataQualityEvaluationTaskWithOptions(const DeleteDataQualityEvaluationTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
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
 * @summary Deletes a data quality monitoring task.
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
    query["Id"] = request.id();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
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
 * @summary Deletes a data quality monitoring rule template.
 *
 * @param request DeleteDataQualityRuleTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataQualityRuleTemplateResponse
 */
DeleteDataQualityRuleTemplateResponse Client::deleteDataQualityRuleTemplateWithOptions(const DeleteDataQualityRuleTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.code();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
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
 * @summary Deletes a data quality monitoring rule template.
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request DeleteDataQualityScanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataQualityScanResponse
 */
DeleteDataQualityScanResponse Client::deleteDataQualityScanWithOptions(const DeleteDataQualityScanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
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
 * @description This API operation is available for all DataWorks editions.
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
 * @description ## [](#)Request description
 * *   **Id**: the unique identifier of the user-defined rule template, in the format `USER_DEFINED:<template_id>`.
 * *   **ProjectId**: The ID of the DataWorks project to which the rule template belongs.
 * This API is used to remove data quality rule templates that are no longer needed from the system. Make sure the provided `Id` and `ProjectId` are correct when calling this API operation; otherwise, the deletion may fail or lead to unexpected data loss. Use this function with caution and verify the exact information of the template before performing the operation.
 *
 * @param request DeleteDataQualityTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataQualityTemplateResponse
 */
DeleteDataQualityTemplateResponse Client::deleteDataQualityTemplateWithOptions(const DeleteDataQualityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
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
 * @description ## [](#)Request description
 * *   **Id**: the unique identifier of the user-defined rule template, in the format `USER_DEFINED:<template_id>`.
 * *   **ProjectId**: The ID of the DataWorks project to which the rule template belongs.
 * This API is used to remove data quality rule templates that are no longer needed from the system. Make sure the provided `Id` and `ProjectId` are correct when calling this API operation; otherwise, the deletion may fail or lead to unexpected data loss. Use this function with caution and verify the exact information of the template before performing the operation.
 *
 * @param request DeleteDataQualityTemplateRequest
 * @return DeleteDataQualityTemplateResponse
 */
DeleteDataQualityTemplateResponse Client::deleteDataQualityTemplate(const DeleteDataQualityTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataQualityTemplateWithOptions(request, runtime);
}

/**
 * @summary Removes a data source by ID.
 *
 * @description 1.  This API operation is available for all Dataworks editions.
 * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
 * *   Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
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
 * @summary Removes a data source by ID.
 *
 * @description 1.  This API operation is available for all Dataworks editions.
 * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
 * *   Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
 *
 * @param request DeleteDataSourceRequest
 * @return DeleteDataSourceResponse
 */
DeleteDataSourceResponse Client::deleteDataSource(const DeleteDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataSourceWithOptions(request, runtime);
}

/**
 * @summary Deletes a sharing rule of a data source by ID.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  If you want to delete a sharing rule of a data source from Workspace A to Workspace B, you must have the permissions to share the data source in Workspace A or Workspace B. You can call this operation only if you are assigned one of the following roles in DataWorks:
 * *   Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
 *
 * @param request DeleteDataSourceSharedRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDataSourceSharedRuleResponse
 */
DeleteDataSourceSharedRuleResponse Client::deleteDataSourceSharedRuleWithOptions(const DeleteDataSourceSharedRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
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
 * @summary Deletes a sharing rule of a data source by ID.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  If you want to delete a sharing rule of a data source from Workspace A to Workspace B, you must have the permissions to share the data source in Workspace A or Workspace B. You can call this operation only if you are assigned one of the following roles in DataWorks:
 * *   Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
 *
 * @param request DeleteDataSourceSharedRuleRequest
 * @return DeleteDataSourceSharedRuleResponse
 */
DeleteDataSourceSharedRuleResponse Client::deleteDataSourceSharedRule(const DeleteDataSourceSharedRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDataSourceSharedRuleWithOptions(request, runtime);
}

/**
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
 * @description >  A UDF that is deployed cannot be deleted. If you want to delete such a UDF, you must first undeploy the UDF.
 *
 * @param request DeleteFunctionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFunctionResponse
 */
DeleteFunctionResponse Client::deleteFunctionWithOptions(const DeleteFunctionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
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
 * @description >  A UDF that is deployed cannot be deleted. If you want to delete such a UDF, you must first undeploy the UDF.
 *
 * @param request DeleteFunctionRequest
 * @return DeleteFunctionResponse
 */
DeleteFunctionResponse Client::deleteFunction(const DeleteFunctionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFunctionWithOptions(request, runtime);
}

/**
 * @summary 删除血缘关系
 *
 * @param request DeleteLineageRelationshipRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLineageRelationshipResponse
 */
DeleteLineageRelationshipResponse Client::deleteLineageRelationshipWithOptions(const DeleteLineageRelationshipRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
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
 * @summary 删除血缘关系
 *
 * @param request DeleteLineageRelationshipRequest
 * @return DeleteLineageRelationshipResponse
 */
DeleteLineageRelationshipResponse Client::deleteLineageRelationship(const DeleteLineageRelationshipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLineageRelationshipWithOptions(request, runtime);
}

/**
 * @summary 删除集合
 *
 * @param request DeleteMetaCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMetaCollectionResponse
 */
DeleteMetaCollectionResponse Client::deleteMetaCollectionWithOptions(const DeleteMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
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
 * @summary 删除集合
 *
 * @param request DeleteMetaCollectionRequest
 * @return DeleteMetaCollectionResponse
 */
DeleteMetaCollectionResponse Client::deleteMetaCollection(const DeleteMetaCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMetaCollectionWithOptions(request, runtime);
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
    body["Id"] = request.id();
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
 * @description >  A node that is deployed cannot be deleted. If you want to delete such a node, you must first undeploy the node.
 *
 * @param request DeleteNodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNodeResponse
 */
DeleteNodeResponse Client::deleteNodeWithOptions(const DeleteNodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
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
 * @description >  A node that is deployed cannot be deleted. If you want to delete such a node, you must first undeploy the node.
 *
 * @param request DeleteNodeRequest
 * @return DeleteNodeResponse
 */
DeleteNodeResponse Client::deleteNode(const DeleteNodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNodeWithOptions(request, runtime);
}

/**
 * @summary Deletes a DataWorks workspace.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request DeleteProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProjectWithOptions(const DeleteProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
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
 * @description This API operation is available for all DataWorks editions.
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
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.userId();
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
 * @summary Deletes a file resource from DataStudio.
 *
 * @description >  A file resource that is deployed cannot be deleted. If you want to delete such a file resource, you must first undeploy the file resource.
 *
 * @param request DeleteResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceResponse
 */
DeleteResourceResponse Client::deleteResourceWithOptions(const DeleteResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
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
 * @description >  A file resource that is deployed cannot be deleted. If you want to delete such a file resource, you must first undeploy the file resource.
 *
 * @param request DeleteResourceRequest
 * @return DeleteResourceResponse
 */
DeleteResourceResponse Client::deleteResource(const DeleteResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteResourceWithOptions(request, runtime);
}

/**
 * @summary Deletes a serverless resource group.
 *
 * @description 1.  You can use this API operation only in DataWorks Basic Edition or an advanced edition.
 * 2.  **Before you call this API operation, you must make sure that you have a good command of the billing details and [pricing](https://help.aliyun.com/document_detail/2680173.html) of serverless resource groups.
 *
 * @param request DeleteResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceGroupResponse
 */
DeleteResourceGroupResponse Client::deleteResourceGroupWithOptions(const DeleteResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
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
 * @summary Deletes a serverless resource group.
 *
 * @description 1.  You can use this API operation only in DataWorks Basic Edition or an advanced edition.
 * 2.  **Before you call this API operation, you must make sure that you have a good command of the billing details and [pricing](https://help.aliyun.com/document_detail/2680173.html) of serverless resource groups.
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
    body["Id"] = request.id();
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
    query["Id"] = request.id();
  }

  if (!!request.hasProjectEnv()) {
    query["ProjectEnv"] = request.projectEnv();
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
    query["Id"] = request.id();
  }

  json body = {};
  if (!!request.hasClientUniqueCode()) {
    body["ClientUniqueCode"] = request.clientUniqueCode();
  }

  if (!!request.hasEnvType()) {
    body["EnvType"] = request.envType();
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
 * @description >  A workflow that is deployed cannot be deleted. If you want to delete such a workflow, you must first undeploy the workflow.
 *
 * @param request DeleteWorkflowDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkflowDefinitionResponse
 */
DeleteWorkflowDefinitionResponse Client::deleteWorkflowDefinitionWithOptions(const DeleteWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
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
 * @description >  A workflow that is deployed cannot be deleted. If you want to delete such a workflow, you must first undeploy the workflow.
 *
 * @param request DeleteWorkflowDefinitionRequest
 * @return DeleteWorkflowDefinitionResponse
 */
DeleteWorkflowDefinitionResponse Client::deleteWorkflowDefinition(const DeleteWorkflowDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWorkflowDefinitionWithOptions(request, runtime);
}

/**
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
 * @param request DeployFileRequest
 * @return DeployFileResponse
 */
DeployFileResponse Client::deployFile(const DeployFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deployFileWithOptions(request, runtime);
}

/**
 * @summary Disassociates monitoring rules from a data quality monitoring task.
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
    request.setDataQualityRuleIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dataQualityRuleIds(), "DataQualityRuleIds", "json"));
  }

  json body = {};
  if (!!request.hasDataQualityEvaluationTaskId()) {
    body["DataQualityEvaluationTaskId"] = request.dataQualityEvaluationTaskId();
  }

  if (!!request.hasDataQualityRuleIdsShrink()) {
    body["DataQualityRuleIds"] = request.dataQualityRuleIdsShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
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
 * @summary Disassociates monitoring rules from a data quality monitoring task.
 *
 * @param request DetachDataQualityRulesFromEvaluationTaskRequest
 * @return DetachDataQualityRulesFromEvaluationTaskResponse
 */
DetachDataQualityRulesFromEvaluationTaskResponse Client::detachDataQualityRulesFromEvaluationTask(const DetachDataQualityRulesFromEvaluationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachDataQualityRulesFromEvaluationTaskWithOptions(request, runtime);
}

/**
 * @summary Disassociates a resource group from a workspace.
 *
 * @description 1.  You can use this API operation only in DataWorks Basic Edition or an advanced edition.
 * 2.  Your account must be assigned one of the following roles of the desired workspace:
 * *   Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
 *
 * @param request DissociateProjectFromResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DissociateProjectFromResourceGroupResponse
 */
DissociateProjectFromResourceGroupResponse Client::dissociateProjectFromResourceGroupWithOptions(const DissociateProjectFromResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
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
 * @description 1.  You can use this API operation only in DataWorks Basic Edition or an advanced edition.
 * 2.  Your account must be assigned one of the following roles of the desired workspace:
 * *   Tenant Owner, Workspace Administrator, Workspace Owner, and O\\&M
 *
 * @param request DissociateProjectFromResourceGroupRequest
 * @return DissociateProjectFromResourceGroupResponse
 */
DissociateProjectFromResourceGroupResponse Client::dissociateProjectFromResourceGroup(const DissociateProjectFromResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dissociateProjectFromResourceGroupWithOptions(request, runtime);
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
 * @description >  The stages in a process are sequential. For more information, see the GetDeployment operation. Skipping or repeating a stage is not allowed.
 * >  The execution of a stage is asynchronous. The response of this operation indicates only whether a stage is triggered but does not indicate whether the execution of the stage is successful. You can call the GetDeployment operation to check whether the execution is successful.
 *
 * @param request ExecPipelineRunStageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecPipelineRunStageResponse
 */
ExecPipelineRunStageResponse Client::execPipelineRunStageWithOptions(const ExecPipelineRunStageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  json body = {};
  if (!!request.hasCode()) {
    body["Code"] = request.code();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
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
 * @description >  The stages in a process are sequential. For more information, see the GetDeployment operation. Skipping or repeating a stage is not allowed.
 * >  The execution of a stage is asynchronous. The response of this operation indicates only whether a stage is triggered but does not indicate whether the execution of the stage is successful. You can call the GetDeployment operation to check whether the execution is successful.
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
    request.setTasksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tasks(), "Tasks", "json"));
  }

  json body = {};
  if (!!request.hasBizDate()) {
    body["BizDate"] = request.bizDate();
  }

  if (!!request.hasEnvType()) {
    body["EnvType"] = request.envType();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTasksShrink()) {
    body["Tasks"] = request.tasksShrink();
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
 * @param request GetBusinessRequest
 * @return GetBusinessResponse
 */
GetBusinessResponse Client::getBusiness(const GetBusinessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBusinessWithOptions(request, runtime);
}

/**
 * @summary 获取数据目录详情
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
 * @summary 获取数据目录详情
 *
 * @param request GetCatalogRequest
 * @return GetCatalogResponse
 */
GetCatalogResponse Client::getCatalog(const GetCatalogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCatalogWithOptions(request, runtime);
}

/**
 * @summary Queries a certificate file.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks: Tenant Owner, Workspace Administrator, Deploy, Develop, Workspace Owner, and O\\&M.
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
 * @summary Queries a certificate file.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks: Tenant Owner, Workspace Administrator, Deploy, Develop, Workspace Owner, and O\\&M.
 *
 * @param request GetCertificateRequest
 * @return GetCertificateResponse
 */
GetCertificateResponse Client::getCertificate(const GetCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCertificateWithOptions(request, runtime);
}

/**
 * @summary 获取字段详情
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
 * @summary 获取字段详情
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
 * @description 1.  This API operation is available for all DataWorks editions.
 *
 * @param request GetComponentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetComponentResponse
 */
GetComponentResponse Client::getComponentWithOptions(const GetComponentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComponentId()) {
    query["ComponentId"] = request.componentId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
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
 * @description 1.  This API operation is available for all DataWorks editions.
 *
 * @param request GetComponentRequest
 * @return GetComponentResponse
 */
GetComponentResponse Client::getComponent(const GetComponentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getComponentWithOptions(request, runtime);
}

/**
 * @summary Queries the result of asynchronously creating a workflow instance.
 *
 * @description This API operation is available for all DataWorks editions.
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetCreateWorkflowInstancesResultRequest
 * @return GetCreateWorkflowInstancesResultResponse
 */
GetCreateWorkflowInstancesResultResponse Client::getCreateWorkflowInstancesResult(const GetCreateWorkflowInstancesResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCreateWorkflowInstancesResultWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a synchronization task.
 *
 * @description This API operation is available for all DataWorks editions.
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
 * @summary Queries the information about a synchronization task.
 *
 * @description This API operation is available for all DataWorks editions.
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
 * @summary Queries the details of a data quality monitoring and alerting rule by alert rule ID.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetDataQualityAlertRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataQualityAlertRuleResponse
 */
GetDataQualityAlertRuleResponse Client::getDataQualityAlertRuleWithOptions(const GetDataQualityAlertRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
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
 * @summary Queries the details of a data quality monitoring and alerting rule by alert rule ID.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetDataQualityAlertRuleRequest
 * @return GetDataQualityAlertRuleResponse
 */
GetDataQualityAlertRuleResponse Client::getDataQualityAlertRule(const GetDataQualityAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataQualityAlertRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a monitor.
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
 * @summary Queries the details of a monitor.
 *
 * @param request GetDataQualityEvaluationTaskRequest
 * @return GetDataQualityEvaluationTaskResponse
 */
GetDataQualityEvaluationTaskResponse Client::getDataQualityEvaluationTask(const GetDataQualityEvaluationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataQualityEvaluationTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a monitor instance.
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
 * @summary Queries the details of a monitor instance.
 *
 * @param request GetDataQualityEvaluationTaskInstanceRequest
 * @return GetDataQualityEvaluationTaskInstanceResponse
 */
GetDataQualityEvaluationTaskInstanceResponse Client::getDataQualityEvaluationTaskInstance(const GetDataQualityEvaluationTaskInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataQualityEvaluationTaskInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a data quality monitoring rule.
 *
 * @description This API operation is available for all DataWorks editions.
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
 * @summary Queries the information about a data quality monitoring rule.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetDataQualityRuleRequest
 * @return GetDataQualityRuleResponse
 */
GetDataQualityRuleResponse Client::getDataQualityRule(const GetDataQualityRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataQualityRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a data quality monitoring rule template.
 *
 * @description This API operation is available for all DataWorks editions.
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
 * @summary Queries the information about a data quality monitoring rule template.
 *
 * @description This API operation is available for all DataWorks editions.
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetDataQualityScanRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataQualityScanResponse
 */
GetDataQualityScanResponse Client::getDataQualityScanWithOptions(const GetDataQualityScanRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
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
 * @description This API operation is available for all DataWorks editions.
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetDataQualityScanRunRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataQualityScanRunResponse
 */
GetDataQualityScanRunResponse Client::getDataQualityScanRunWithOptions(const GetDataQualityScanRunRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
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
 * @description This API operation is available for all DataWorks editions.
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetDataQualityScanRunLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataQualityScanRunLogResponse
 */
GetDataQualityScanRunLogResponse Client::getDataQualityScanRunLogWithOptions(const GetDataQualityScanRunLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasOffset()) {
    query["Offset"] = request.offset();
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetDataQualityScanRunLogRequest
 * @return GetDataQualityScanRunLogResponse
 */
GetDataQualityScanRunLogResponse Client::getDataQualityScanRunLog(const GetDataQualityScanRunLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataQualityScanRunLogWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a data quality rule template by ID.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetDataQualityTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataQualityTemplateResponse
 */
GetDataQualityTemplateResponse Client::getDataQualityTemplateWithOptions(const GetDataQualityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
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
 * @summary Queries the details of a data quality rule template by ID.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetDataQualityTemplateRequest
 * @return GetDataQualityTemplateResponse
 */
GetDataQualityTemplateResponse Client::getDataQualityTemplate(const GetDataQualityTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataQualityTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries a data source by ID.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
 * *   Tenant Owner, Workspace Administrator, Deployment, Development, Project Owner, and O\\&M
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
 * @summary Queries a data source by ID.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
 * *   Tenant Owner, Workspace Administrator, Deployment, Development, Project Owner, and O\\&M
 *
 * @param request GetDataSourceRequest
 * @return GetDataSourceResponse
 */
GetDataSourceResponse Client::getDataSource(const GetDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataSourceWithOptions(request, runtime);
}

/**
 * @summary 获取数据库详情
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
 * @summary 获取数据库详情
 *
 * @param request GetDatabaseRequest
 * @return GetDatabaseResponse
 */
GetDatabaseResponse Client::getDatabase(const GetDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDatabaseWithOptions(request, runtime);
}

/**
 * @param request GetDeploymentPackageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeploymentPackageResponse
 */
GetDeploymentPackageResponse Client::getDeploymentPackageWithOptions(const GetDeploymentPackageRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
 * @param request GetDeploymentPackageRequest
 * @return GetDeploymentPackageResponse
 */
GetDeploymentPackageResponse Client::getDeploymentPackage(const GetDeploymentPackageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDeploymentPackageWithOptions(request, runtime);
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
 * @summary 获取血缘关系详情
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
 * @summary 获取血缘关系详情
 *
 * @param request GetLineageRelationshipRequest
 * @return GetLineageRelationshipResponse
 */
GetLineageRelationshipResponse Client::getLineageRelationship(const GetLineageRelationshipRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLineageRelationshipWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a collection in Data Map. Collections include categories and data albums.
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
 * @param request GetMetaCollectionRequest
 * @return GetMetaCollectionResponse
 */
GetMetaCollectionResponse Client::getMetaCollection(const GetMetaCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMetaCollectionWithOptions(request, runtime);
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
 * @summary Retrieves partition details for a data map table. Currently supports MaxCompute and HMS (EMR cluster) types only.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  This operation supports MaxCompute and HMS (EMR cluster) tables only.
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
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  This operation supports MaxCompute and HMS (EMR cluster) tables only.
 *
 * @param request GetPartitionRequest
 * @return GetPartitionResponse
 */
GetPartitionResponse Client::getPartition(const GetPartitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPartitionWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a process for deploying or undeploying an entity.
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
 * @summary Queries the information about a process for deploying or undeploying an entity.
 *
 * @param request GetPipelineRunRequest
 * @return GetPipelineRunResponse
 */
GetPipelineRunResponse Client::getPipelineRun(const GetPipelineRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPipelineRunWithOptions(request, runtime);
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
 * @summary Queries the details about a member in a workspace.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetProjectMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectMemberResponse
 */
GetProjectMemberResponse Client::getProjectMemberWithOptions(const GetProjectMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.userId();
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
 * @summary Queries the details about a member in a workspace.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetProjectMemberRequest
 * @return GetProjectMemberResponse
 */
GetProjectMemberResponse Client::getProjectMember(const GetProjectMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectMemberWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a role in a DataWorks workspace.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetProjectRoleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectRoleResponse
 */
GetProjectRoleResponse Client::getProjectRoleWithOptions(const GetProjectRoleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCode()) {
    query["Code"] = request.code();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
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
 * @summary Queries the information about a role in a DataWorks workspace.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request GetProjectRoleRequest
 * @return GetProjectRoleResponse
 */
GetProjectRoleResponse Client::getProjectRole(const GetProjectRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectRoleWithOptions(request, runtime);
}

/**
 * @summary Query the result of asynchronous workflow instance reruns.
 *
 * @param request GetRerunWorkflowInstancesResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRerunWorkflowInstancesResultResponse
 */
GetRerunWorkflowInstancesResultResponse Client::getRerunWorkflowInstancesResultWithOptions(const GetRerunWorkflowInstancesResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOperationId()) {
    query["OperationId"] = request.operationId();
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
 * @summary Query the result of asynchronous workflow instance reruns.
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
 * @description You can use this API operation only in DataWorks Basic Edition or an advanced edition.
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
 * @description You can use this API operation only in DataWorks Basic Edition or an advanced edition.
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
 * @summary Queries the information about a schema in Data Map. You can call this API operation to query the information only about MaxCompute and Hologres schemas.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  You can call this API operation to query the information only about MaxCompute and Hologres schemas.
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
 * @summary Queries the information about a schema in Data Map. You can call this API operation to query the information only about MaxCompute and Hologres schemas.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  You can call this API operation to query the information only about MaxCompute and Hologres schemas.
 *
 * @param request GetSchemaRequest
 * @return GetSchemaResponse
 */
GetSchemaResponse Client::getSchema(const GetSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSchemaWithOptions(request, runtime);
}

/**
 * @summary 获取表详情
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
 * @summary 获取表详情
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
 * @description This API operation is available for all DataWorks editions.
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
 * @description This API operation is available for all DataWorks editions.
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
 * @description This API operation is available for all DataWorks editions.
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
 * @description This API operation is available for all DataWorks editions.
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
    request.setRoleCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.roleCodes(), "RoleCodes", "json"));
  }

  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasRoleCodesShrink()) {
    body["RoleCodes"] = request.roleCodesShrink();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.userId();
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
 * @param request ImportCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportCertificateResponse
 */
ImportCertificateResponse Client::importCertificateWithOptions(const ImportCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertificateFile()) {
    query["CertificateFile"] = request.certificateFile();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
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
  ImportCertificateRequest importCertificateReq = ImportCertificateRequest();
  Utils::Utils::convert(request, importCertificateReq);
  if (!!request.hasCertificateFileObject()) {
    authResponse = authClient->callApi(authParams, authReq, runtime);
    tmpBody = json(authResponse.at("body"));
    useAccelerate = Darabonba::Convert::boolVal(tmpBody.at("UseAccelerate"));
    authResponseBody = Utils::Utils::stringifyMapValue(tmpBody);
    fileObj = FileField(json({
      {"filename" , authResponseBody.at("ObjectKey")},
      {"content" , request.certificateFileObject()},
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
    importCertificateReq.setCertificateFile(DARA_STRING_TEMPLATE("http://" , authResponseBody.at("Bucket") , "." , authResponseBody.at("Endpoint") , "/" , authResponseBody.at("ObjectKey")));
  }

  ImportCertificateResponse importCertificateResp = importCertificateWithOptions(importCertificateReq, runtime);
  return importCertificateResp;
}

/**
 * @summary Imports a workflow and its child nodes that are specified by the FlowSpec field to DataStudio.
 *
 * @description > 
 * *   You cannot use this API operation to import multiple workflows at a time. If you specify multiple workflows by using FlowSpec, the system imports only the first specified workflow.
 * *   ImportWorkflowDefinition is an asynchronous operation. After you send a request, an asynchronous task is generated, and the system returns the ID of the asynchronous task. You can call the GetJobStatus operation to query the status of the asynchronous task.
 *
 * @param request ImportWorkflowDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportWorkflowDefinitionResponse
 */
ImportWorkflowDefinitionResponse Client::importWorkflowDefinitionWithOptions(const ImportWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.spec();
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
 * @summary Imports a workflow and its child nodes that are specified by the FlowSpec field to DataStudio.
 *
 * @description > 
 * *   You cannot use this API operation to import multiple workflows at a time. If you specify multiple workflows by using FlowSpec, the system imports only the first specified workflow.
 * *   ImportWorkflowDefinition is an asynchronous operation. After you send a request, an asynchronous task is generated, and the system returns the ID of the asynchronous task. You can call the GetJobStatus operation to query the status of the asynchronous task.
 *
 * @param request ImportWorkflowDefinitionRequest
 * @return ImportWorkflowDefinitionResponse
 */
ImportWorkflowDefinitionResponse Client::importWorkflowDefinition(const ImportWorkflowDefinitionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importWorkflowDefinitionWithOptions(request, runtime);
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
    request.setTaskIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.taskIds(), "TaskIds", "json"));
  }

  if (!!tmpReq.hasTypes()) {
    request.setTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.types(), "Types", "json"));
  }

  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.owner();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasReceiver()) {
    query["Receiver"] = request.receiver();
  }

  if (!!request.hasTaskIdsShrink()) {
    query["TaskIds"] = request.taskIdsShrink();
  }

  if (!!request.hasTypesShrink()) {
    query["Types"] = request.typesShrink();
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
 * @param request ListBusinessRequest
 * @return ListBusinessResponse
 */
ListBusinessResponse Client::listBusiness(const ListBusinessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBusinessWithOptions(request, runtime);
}

/**
 * @summary 查询数据目录列表
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
    request.setTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.types(), "Types", "simple"));
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
 * @summary 查询数据目录列表
 *
 * @param request ListCatalogsRequest
 * @return ListCatalogsResponse
 */
ListCatalogsResponse Client::listCatalogs(const ListCatalogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCatalogsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of certificate files.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks: Tenant Owner, Workspace Administrator, Deploy, Develop, Visitor, Workspace Owner, O\\&M, Model Designer, Security Administrator, Data Analyst, OpenPlatform Administrator, and Data Governance Administrator.
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
 * @summary Queries a list of certificate files.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks: Tenant Owner, Workspace Administrator, Deploy, Develop, Visitor, Workspace Owner, O\\&M, Model Designer, Security Administrator, Data Analyst, OpenPlatform Administrator, and Data Governance Administrator.
 *
 * @param request ListCertificatesRequest
 * @return ListCertificatesResponse
 */
ListCertificatesResponse Client::listCertificates(const ListCertificatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCertificatesWithOptions(request, runtime);
}

/**
 * @summary 查询字段列表
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
 * @summary 查询字段列表
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListComponentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComponentsResponse
 */
ListComponentsResponse Client::listComponentsWithOptions(const ListComponentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListComponentsRequest
 * @return ListComponentsResponse
 */
ListComponentsResponse Client::listComponents(const ListComponentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listComponentsWithOptions(request, runtime);
}

/**
 * @summary 查询元数据采集器类型列表
 *
 * @param request ListCrawlerTypesRequest
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
 * @summary 查询元数据采集器类型列表
 *
 * @return ListCrawlerTypesResponse
 */
ListCrawlerTypesResponse Client::listCrawlerTypes() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCrawlerTypesWithOptions(runtime);
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
    request.setMetricNameShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.metricName(), "MetricName", "json"));
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
 * @summary Queries a list of new-version synchronization tasks in Data Integration. A new-version synchronization task can be a real-time synchronization task used to synchronize full or incremental data in a database, a batch synchronization task used to synchronize full or incremental data in a database, or a real-time synchronization task used to synchronize incremental data in a single table.
 *
 * @description This API operation is available for all DataWorks editions.
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
 * @summary Queries a list of new-version synchronization tasks in Data Integration. A new-version synchronization task can be a real-time synchronization task used to synchronize full or incremental data in a database, a batch synchronization task used to synchronize full or incremental data in a database, or a real-time synchronization task used to synchronize incremental data in a single table.
 *
 * @description This API operation is available for all DataWorks editions.
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
 * @summary Queries the information about DataWorks data assets to which tags are added by page.
 *
 * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
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
    request.setDataAssetIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dataAssetIds(), "DataAssetIds", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
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
 * @summary Queries the information about DataWorks data assets to which tags are added by page.
 *
 * @description This API operation is available only for DataWorks Enterprise Edition or a more advanced edition.
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListDataQualityAlertRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataQualityAlertRulesResponse
 */
ListDataQualityAlertRulesResponse Client::listDataQualityAlertRulesWithOptions(const ListDataQualityAlertRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataQualityScanId()) {
    query["DataQualityScanId"] = request.dataQualityScanId();
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

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListDataQualityAlertRulesRequest
 * @return ListDataQualityAlertRulesResponse
 */
ListDataQualityAlertRulesResponse Client::listDataQualityAlertRules(const ListDataQualityAlertRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataQualityAlertRulesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of instances generated by a data quality monitoring task by page.
 *
 * @description This API operation is available for all DataWorks editions.
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
 * @summary Queries a list of instances generated by a data quality monitoring task by page.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListDataQualityEvaluationTaskInstancesRequest
 * @return ListDataQualityEvaluationTaskInstancesResponse
 */
ListDataQualityEvaluationTaskInstancesResponse Client::listDataQualityEvaluationTaskInstances(const ListDataQualityEvaluationTaskInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataQualityEvaluationTaskInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of data quality monitoring tasks by page.
 *
 * @description This API operation is available for all DataWorks editions.
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
 * @summary Queries a list of data quality monitoring tasks by page.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListDataQualityEvaluationTasksRequest
 * @return ListDataQualityEvaluationTasksResponse
 */
ListDataQualityEvaluationTasksResponse Client::listDataQualityEvaluationTasks(const ListDataQualityEvaluationTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataQualityEvaluationTasksWithOptions(request, runtime);
}

/**
 * @description This API operation is available for all DataWorks editions.
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListDataQualityResultsRequest
 * @return ListDataQualityResultsResponse
 */
ListDataQualityResultsResponse Client::listDataQualityResults(const ListDataQualityResultsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataQualityResultsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of data quality monitoring rule templates.
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
 * @summary Queries a list of data quality monitoring rule templates.
 *
 * @param request ListDataQualityRuleTemplatesRequest
 * @return ListDataQualityRuleTemplatesResponse
 */
ListDataQualityRuleTemplatesResponse Client::listDataQualityRuleTemplates(const ListDataQualityRuleTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataQualityRuleTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of data quality monitoring rules by page.
 *
 * @description This API operation is available for all DataWorks editions.
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
 * @summary Queries a list of data quality monitoring rules by page.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListDataQualityRulesRequest
 * @return ListDataQualityRulesResponse
 */
ListDataQualityRulesResponse Client::listDataQualityRules(const ListDataQualityRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataQualityRulesWithOptions(request, runtime);
}

/**
 * @summary Queries the execution records of data quality scans in a project.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListDataQualityScanRunsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataQualityScanRunsResponse
 */
ListDataQualityScanRunsResponse Client::listDataQualityScanRunsWithOptions(const ListDataQualityScanRunsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTimeFrom()) {
    query["CreateTimeFrom"] = request.createTimeFrom();
  }

  if (!!request.hasCreateTimeTo()) {
    query["CreateTimeTo"] = request.createTimeTo();
  }

  if (!!request.hasDataQualityScanId()) {
    query["DataQualityScanId"] = request.dataQualityScanId();
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

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
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
 * @summary Queries the execution records of data quality scans in a project.
 *
 * @description This API operation is available for all DataWorks editions.
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListDataQualityScansRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataQualityScansResponse
 */
ListDataQualityScansResponse Client::listDataQualityScansWithOptions(const ListDataQualityScansRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasTable()) {
    query["Table"] = request.table();
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
 * @description This API operation is available for all DataWorks editions.
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListDataQualityTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDataQualityTemplatesResponse
 */
ListDataQualityTemplatesResponse Client::listDataQualityTemplatesWithOptions(const ListDataQualityTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCatalog()) {
    query["Catalog"] = request.catalog();
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListDataQualityTemplatesRequest
 * @return ListDataQualityTemplatesResponse
 */
ListDataQualityTemplatesResponse Client::listDataQualityTemplates(const ListDataQualityTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataQualityTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of sharing rules of a data source.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  If you want to query the sharing rules of a data source that is associated with Workspace A, you must have the permissions to share the data source in Workspace A. You can call this operation only if you are assigned one of the following roles in DataWorks:
 * *   Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
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
 * @summary Queries a list of sharing rules of a data source.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  If you want to query the sharing rules of a data source that is associated with Workspace A, you must have the permissions to share the data source in Workspace A. You can call this operation only if you are assigned one of the following roles in DataWorks:
 * *   Tenant Owner, Tenant Administrator, Workspace Administrator, and Workspace Owner
 *
 * @param request ListDataSourceSharedRulesRequest
 * @return ListDataSourceSharedRulesResponse
 */
ListDataSourceSharedRulesResponse Client::listDataSourceSharedRules(const ListDataSourceSharedRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSourceSharedRulesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of data sources based on the business information of data sources.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
 * *   Tenant Owner, Workspace Administrator, Deploy, Develop, Visitor, Workspace Owner, O\\&M, Model Designer, Security Administrator, Data Analyst, OpenPlatform Administrator, and Data Governance Administrator
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
    request.setTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.types(), "Types", "simple"));
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
 * @summary Queries a list of data sources based on the business information of data sources.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
 * *   Tenant Owner, Workspace Administrator, Deploy, Develop, Visitor, Workspace Owner, O\\&M, Model Designer, Security Administrator, Data Analyst, OpenPlatform Administrator, and Data Governance Administrator
 *
 * @param request ListDataSourcesRequest
 * @return ListDataSourcesResponse
 */
ListDataSourcesResponse Client::listDataSources(const ListDataSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDataSourcesWithOptions(request, runtime);
}

/**
 * @summary 查询数据库列表
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
 * @summary 查询数据库列表
 *
 * @param request ListDatabasesRequest
 * @return ListDatabasesResponse
 */
ListDatabasesResponse Client::listDatabases(const ListDatabasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDatabasesWithOptions(request, runtime);
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
    request.setFileIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.fileIds(), "FileIds", "json"));
  }

  json query = {};
  if (!!request.hasBusinessId()) {
    query["BusinessId"] = request.businessId();
  }

  if (!!request.hasChangeType()) {
    query["ChangeType"] = request.changeType();
  }

  if (!!request.hasCommitFrom()) {
    query["CommitFrom"] = request.commitFrom();
  }

  if (!!request.hasCommitTo()) {
    query["CommitTo"] = request.commitTo();
  }

  if (!!request.hasCommitUserId()) {
    query["CommitUserId"] = request.commitUserId();
  }

  if (!!request.hasFileIdsShrink()) {
    query["FileIds"] = request.fileIdsShrink();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasFileType()) {
    query["FileType"] = request.fileType();
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

  if (!!request.hasSolutionId()) {
    query["SolutionId"] = request.solutionId();
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
 * @param request ListEntitiesInMetaCollectionRequest
 * @return ListEntitiesInMetaCollectionResponse
 */
ListEntitiesInMetaCollectionResponse Client::listEntitiesInMetaCollection(const ListEntitiesInMetaCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEntitiesInMetaCollectionWithOptions(request, runtime);
}

/**
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
 * @param request ListFileVersionsRequest
 * @return ListFileVersionsResponse
 */
ListFileVersionsResponse Client::listFileVersions(const ListFileVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFileVersionsWithOptions(request, runtime);
}

/**
 * @param request ListFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFilesResponse
 */
ListFilesResponse Client::listFilesWithOptions(const ListFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCommitStatus()) {
    body["CommitStatus"] = request.commitStatus();
  }

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
 * @param request ListFilesRequest
 * @return ListFilesResponse
 */
ListFilesResponse Client::listFiles(const ListFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFilesWithOptions(request, runtime);
}

/**
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
 * @summary 查询血缘关系
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
 * @summary 查询血缘关系
 *
 * @param request ListLineageRelationshipsRequest
 * @return ListLineageRelationshipsResponse
 */
ListLineageRelationshipsResponse Client::listLineageRelationships(const ListLineageRelationshipsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLineageRelationshipsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of ancestor and descendant entities of an entity in Data Map. You can specify whether to return the lineage between the entities.
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
 * @summary Queries a list of ancestor and descendant entities of an entity in Data Map. You can specify whether to return the lineage between the entities.
 *
 * @param request ListLineagesRequest
 * @return ListLineagesResponse
 */
ListLineagesResponse Client::listLineages(const ListLineagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLineagesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of collections in Data Map. Collections include categories and data albums.
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
 * @param request ListMetaCollectionsRequest
 * @return ListMetaCollectionsResponse
 */
ListMetaCollectionsResponse Client::listMetaCollections(const ListMetaCollectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMetaCollectionsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of network resources of a serverless resource group.
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
 * @summary Queries a list of network resources of a serverless resource group.
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
 * @summary Queries a list of descendant nodes of a node in DataStudio.
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
 * @summary Queries a list of descendant nodes of a node in DataStudio.
 *
 * @param request ListNodeDependenciesRequest
 * @return ListNodeDependenciesResponse
 */
ListNodeDependenciesResponse Client::listNodeDependencies(const ListNodeDependenciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodeDependenciesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of nodes in DataStudio. You can also specify filter conditions to query specific nodes.
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
 * @summary Queries a list of nodes in DataStudio. You can also specify filter conditions to query specific nodes.
 *
 * @param request ListNodesRequest
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodes(const ListNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodesWithOptions(request, runtime);
}

/**
 * @summary 查询数据表的分区列表
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
 * @summary 查询数据表的分区列表
 *
 * @param request ListPartitionsRequest
 * @return ListPartitionsResponse
 */
ListPartitionsResponse Client::listPartitions(const ListPartitionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPartitionsWithOptions(request, runtime);
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
 * @summary Queries a list of processes that are used to deploy or undeploy entities in DataStudio. You can also specify filter conditions to query specific processes.
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
 * @summary Queries a list of processes that are used to deploy or undeploy entities in DataStudio. You can also specify filter conditions to query specific processes.
 *
 * @param request ListPipelineRunsRequest
 * @return ListPipelineRunsResponse
 */
ListPipelineRunsResponse Client::listPipelineRuns(const ListPipelineRunsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPipelineRunsWithOptions(request, runtime);
}

/**
 * @summary Queries details about members in a workspace.
 *
 * @description This API operation is available for all DataWorks editions.
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
    request.setRoleCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.roleCodes(), "RoleCodes", "json"));
  }

  if (!!tmpReq.hasUserIds()) {
    request.setUserIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userIds(), "UserIds", "json"));
  }

  json body = {};
  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasRoleCodesShrink()) {
    body["RoleCodes"] = request.roleCodesShrink();
  }

  if (!!request.hasUserIdsShrink()) {
    body["UserIds"] = request.userIdsShrink();
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
 * @summary Queries details about members in a workspace.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListProjectMembersRequest
 * @return ListProjectMembersResponse
 */
ListProjectMembersResponse Client::listProjectMembers(const ListProjectMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectMembersWithOptions(request, runtime);
}

/**
 * @summary Queries the information about roles in a DataWorks workspace by page.
 *
 * @description This API operation is available for all DataWorks editions.
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
    request.setCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.codes(), "Codes", "json"));
  }

  if (!!tmpReq.hasNames()) {
    request.setNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.names(), "Names", "json"));
  }

  json body = {};
  if (!!request.hasCodesShrink()) {
    body["Codes"] = request.codesShrink();
  }

  if (!!request.hasNamesShrink()) {
    body["Names"] = request.namesShrink();
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

  if (!!request.hasType()) {
    body["Type"] = request.type();
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
 * @summary Queries the information about roles in a DataWorks workspace by page.
 *
 * @description This API operation is available for all DataWorks editions.
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
    request.setAliyunResourceTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.aliyunResourceTags(), "AliyunResourceTags", "json"));
  }

  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ids(), "Ids", "json"));
  }

  if (!!tmpReq.hasNames()) {
    request.setNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.names(), "Names", "json"));
  }

  json body = {};
  if (!!request.hasAliyunResourceGroupId()) {
    body["AliyunResourceGroupId"] = request.aliyunResourceGroupId();
  }

  if (!!request.hasAliyunResourceTagsShrink()) {
    body["AliyunResourceTags"] = request.aliyunResourceTagsShrink();
  }

  if (!!request.hasDevEnvironmentEnabled()) {
    body["DevEnvironmentEnabled"] = request.devEnvironmentEnabled();
  }

  if (!!request.hasDevRoleDisabled()) {
    body["DevRoleDisabled"] = request.devRoleDisabled();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.idsShrink();
  }

  if (!!request.hasNamesShrink()) {
    body["Names"] = request.namesShrink();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.pageSize();
  }

  if (!!request.hasPaiTaskEnabled()) {
    body["PaiTaskEnabled"] = request.paiTaskEnabled();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
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
 * @summary Queries a list of resource groups.
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
    request.setAliyunResourceTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.aliyunResourceTags(), "AliyunResourceTags", "json"));
  }

  if (!!tmpReq.hasResourceGroupTypes()) {
    request.setResourceGroupTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceGroupTypes(), "ResourceGroupTypes", "json"));
  }

  if (!!tmpReq.hasStatuses()) {
    request.setStatusesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.statuses(), "Statuses", "json"));
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
 * @summary Queries a list of resource groups.
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
 * @summary Queries a list of routes of a network resource.
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
 * @summary Queries a list of routes of a network resource.
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
 * @summary Queries a list of schemas in a database or a MaxCompute project in Data Map. Only schemas of the MaxCompute and Hologres metadata crawler types are supported.
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
    request.setTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.types(), "Types", "simple"));
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
 * @summary Queries a list of schemas in a database or a MaxCompute project in Data Map. Only schemas of the MaxCompute and Hologres metadata crawler types are supported.
 *
 * @param request ListSchemasRequest
 * @return ListSchemasResponse
 */
ListSchemasResponse Client::listSchemas(const ListSchemasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSchemasWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tables in Data Map. For data source types that do not support schemas, you can call this API operation to query a list of tables in a specific database. For data source types that support schemas, you can call this API operation to query a list of tables in a specific database, MaxCompute project, or schema. Only the basic information about tables is returned. The information about technical metadata and business metadata is not returned.
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
    request.setTableTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tableTypes(), "TableTypes", "simple"));
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
 * @summary Queries a list of tables in Data Map. For data source types that do not support schemas, you can call this API operation to query a list of tables in a specific database. For data source types that support schemas, you can call this API operation to query a list of tables in a specific database, MaxCompute project, or schema. Only the basic information about tables is returned. The information about technical metadata and business metadata is not returned.
 *
 * @param request ListTablesRequest
 * @return ListTablesResponse
 */
ListTablesResponse Client::listTables(const ListTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTablesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of operation logs of an instance by page.
 *
 * @description This API operation is available for all DataWorks editions.
 * You can call this operation to query only the operation logs generated within the previous 31 days.
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
 * @summary Queries a list of operation logs of an instance by page.
 *
 * @description This API operation is available for all DataWorks editions.
 * You can call this operation to query only the operation logs generated within the previous 31 days.
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
 * @description This API operation is available for all DataWorks editions.
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
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ids(), "Ids", "json"));
  }

  if (!!tmpReq.hasTaskIds()) {
    request.setTaskIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.taskIds(), "TaskIds", "json"));
  }

  json body = {};
  if (!!request.hasBizdate()) {
    body["Bizdate"] = request.bizdate();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.idsShrink();
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

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasRuntimeResource()) {
    body["RuntimeResource"] = request.runtimeResource();
  }

  if (!!request.hasSortBy()) {
    body["SortBy"] = request.sortBy();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskIdsShrink()) {
    body["TaskIds"] = request.taskIdsShrink();
  }

  if (!!request.hasTaskName()) {
    body["TaskName"] = request.taskName();
  }

  if (!!request.hasTaskType()) {
    body["TaskType"] = request.taskType();
  }

  if (!!request.hasTriggerRecurrence()) {
    body["TriggerRecurrence"] = request.triggerRecurrence();
  }

  if (!!request.hasTriggerType()) {
    body["TriggerType"] = request.triggerType();
  }

  if (!!request.hasWorkflowId()) {
    body["WorkflowId"] = request.workflowId();
  }

  if (!!request.hasWorkflowInstanceId()) {
    body["WorkflowInstanceId"] = request.workflowInstanceId();
  }

  if (!!request.hasWorkflowInstanceType()) {
    body["WorkflowInstanceType"] = request.workflowInstanceType();
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListTaskInstancesRequest
 * @return ListTaskInstancesResponse
 */
ListTaskInstancesResponse Client::listTaskInstances(const ListTaskInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTaskInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of operation logs of a task by page.
 *
 * @description This API operation is available for all DataWorks editions.
 * You can call this operation to query only the operation logs generated within the previous 31 days.
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
 * @summary Queries a list of operation logs of a task by page.
 *
 * @description This API operation is available for all DataWorks editions.
 * You can call this operation to query only the operation logs generated within the previous 31 days.
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
 * @param tmpReq ListTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTasksResponse
 */
ListTasksResponse Client::listTasksWithOptions(const ListTasksRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTasksShrinkRequest request = ListTasksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ids(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.idsShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
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

  if (!!request.hasProjectEnv()) {
    body["ProjectEnv"] = request.projectEnv();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasRuntimeResource()) {
    body["RuntimeResource"] = request.runtimeResource();
  }

  if (!!request.hasSortBy()) {
    body["SortBy"] = request.sortBy();
  }

  if (!!request.hasTaskType()) {
    body["TaskType"] = request.taskType();
  }

  if (!!request.hasTriggerRecurrence()) {
    body["TriggerRecurrence"] = request.triggerRecurrence();
  }

  if (!!request.hasTriggerType()) {
    body["TriggerType"] = request.triggerType();
  }

  if (!!request.hasWorkflowId()) {
    body["WorkflowId"] = request.workflowId();
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
 * @summary Queries a list of workflow instances by page. You can also specify filter conditions to query workflow instances.
 *
 * @description This API operation is available for all DataWorks editions.
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
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ids(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasBizDate()) {
    body["BizDate"] = request.bizDate();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.idsShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
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

  if (!!request.hasSortBy()) {
    body["SortBy"] = request.sortBy();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  if (!!request.hasWorkflowId()) {
    body["WorkflowId"] = request.workflowId();
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
 * @summary Queries a list of workflow instances by page. You can also specify filter conditions to query workflow instances.
 *
 * @description This API operation is available for all DataWorks editions.
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
 * @description This API operation is available for all DataWorks editions.
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
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ids(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasEnvType()) {
    body["EnvType"] = request.envType();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.idsShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
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

  if (!!request.hasSortBy()) {
    body["SortBy"] = request.sortBy();
  }

  if (!!request.hasTriggerType()) {
    body["TriggerType"] = request.triggerType();
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request ListWorkflowsRequest
 * @return ListWorkflowsResponse
 */
ListWorkflowsResponse Client::listWorkflows(const ListWorkflowsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkflowsWithOptions(request, runtime);
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
    body["Id"] = request.id();
  }

  if (!!request.hasPath()) {
    body["Path"] = request.path();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
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
    body["Id"] = request.id();
  }

  if (!!request.hasPath()) {
    body["Path"] = request.path();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
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
    body["Id"] = request.id();
  }

  if (!!request.hasPath()) {
    body["Path"] = request.path();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
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
    body["Id"] = request.id();
  }

  if (!!request.hasPath()) {
    body["Path"] = request.path();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
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
 * @summary 从集合中移除实体对象
 *
 * @param request RemoveEntityFromMetaCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveEntityFromMetaCollectionResponse
 */
RemoveEntityFromMetaCollectionResponse Client::removeEntityFromMetaCollectionWithOptions(const RemoveEntityFromMetaCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasMetaCollectionId()) {
    query["MetaCollectionId"] = request.metaCollectionId();
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
 * @summary 从集合中移除实体对象
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
    request.setUpstreamTaskInstanceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.upstreamTaskInstanceIds(), "UpstreamTaskInstanceIds", "json"));
  }

  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.comment();
  }

  if (!!request.hasUpstreamTaskInstanceIdsShrink()) {
    body["UpstreamTaskInstanceIds"] = request.upstreamTaskInstanceIdsShrink();
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
    body["Id"] = request.id();
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
    body["Id"] = request.id();
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
    body["Id"] = request.id();
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
    query["Id"] = request.id();
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
 * @summary Reruns multiple instances at a time.
 *
 * @description This API operation is available for all DataWorks editions.
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
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ids(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.comment();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.idsShrink();
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
 * @summary Reruns multiple instances at a time.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request RerunTaskInstancesRequest
 * @return RerunTaskInstancesResponse
 */
RerunTaskInstancesResponse Client::rerunTaskInstances(const RerunTaskInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rerunTaskInstancesWithOptions(request, runtime);
}

/**
 * @summary Reruns workflow instances.
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
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filter(), "Filter", "json"));
  }

  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ids(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasBizdate()) {
    body["Bizdate"] = request.bizdate();
  }

  if (!!request.hasEndTriggerTime()) {
    body["EndTriggerTime"] = request.endTriggerTime();
  }

  if (!!request.hasEnvType()) {
    body["EnvType"] = request.envType();
  }

  if (!!request.hasFilterShrink()) {
    body["Filter"] = request.filterShrink();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.idsShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasStartTriggerTime()) {
    body["StartTriggerTime"] = request.startTriggerTime();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  if (!!request.hasWorkflowId()) {
    body["WorkflowId"] = request.workflowId();
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
 * @summary Reruns workflow instances.
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
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ids(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.comment();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.idsShrink();
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
    request.setRoleCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.roleCodes(), "RoleCodes", "json"));
  }

  json body = {};
  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasRoleCodesShrink()) {
    body["RoleCodes"] = request.roleCodesShrink();
  }

  if (!!request.hasUserId()) {
    body["UserId"] = request.userId();
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
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ids(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.comment();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.idsShrink();
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
    request.setRealtimeStartSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.realtimeStartSettings(), "RealtimeStartSettings", "json"));
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
 * @summary Starts multiple workflow instances at a time.
 *
 * @description This API operation is available for all DataWorks editions.
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
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ids(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.comment();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.idsShrink();
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
 * @summary Starts multiple workflow instances at a time.
 *
 * @description This API operation is available for all DataWorks editions.
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
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ids(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.comment();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.idsShrink();
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
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ids(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.comment();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.idsShrink();
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
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ids(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.comment();
  }

  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.idsShrink();
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
    request.setDataAssetIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dataAssetIds(), "DataAssetIds", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasAutoTraceEnabled()) {
    query["AutoTraceEnabled"] = request.autoTraceEnabled();
  }

  if (!!request.hasDataAssetIdsShrink()) {
    query["DataAssetIds"] = request.dataAssetIdsShrink();
  }

  if (!!request.hasDataAssetType()) {
    query["DataAssetType"] = request.dataAssetType();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.envType();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
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
 * @summary Tests the connectivity between a data source and a resource group.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  Your account must be assigned one of the following roles of the desired workspace: Tenant Owner, Workspace Administrator, Deploy, Develop, Workspace Owner, and O\\&M
 *
 * @param request TestDataSourceConnectivityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TestDataSourceConnectivityResponse
 */
TestDataSourceConnectivityResponse Client::testDataSourceConnectivityWithOptions(const TestDataSourceConnectivityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDataSourceId()) {
    query["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
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
 * @summary Tests the connectivity between a data source and a resource group.
 *
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  Your account must be assigned one of the following roles of the desired workspace: Tenant Owner, Workspace Administrator, Deploy, Develop, Workspace Owner, and O\\&M
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
    query["EnvType"] = request.envType();
  }

  json body = {};
  if (!!request.hasTaskId()) {
    body["TaskId"] = request.taskId();
  }

  if (!!request.hasTriggerTime()) {
    body["TriggerTime"] = request.triggerTime();
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
    request.setDataAssetIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dataAssetIds(), "DataAssetIds", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasDataAssetIdsShrink()) {
    query["DataAssetIds"] = request.dataAssetIdsShrink();
  }

  if (!!request.hasDataAssetType()) {
    query["DataAssetType"] = request.dataAssetType();
  }

  if (!!request.hasEnvType()) {
    query["EnvType"] = request.envType();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.tagsShrink();
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
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTriggerCondition()) {
    request.setTriggerConditionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.triggerCondition(), "TriggerCondition", "json"));
  }

  json query = {};
  if (!!request.hasEnabled()) {
    query["Enabled"] = request.enabled();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNotificationShrink()) {
    query["Notification"] = request.notificationShrink();
  }

  if (!!request.hasOwner()) {
    query["Owner"] = request.owner();
  }

  if (!!request.hasTriggerConditionShrink()) {
    query["TriggerCondition"] = request.triggerConditionShrink();
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
 * @summary 更新字段业务元数据
 *
 * @param request UpdateColumnBusinessMetadataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateColumnBusinessMetadataResponse
 */
UpdateColumnBusinessMetadataResponse Client::updateColumnBusinessMetadataWithOptions(const UpdateColumnBusinessMetadataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
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
 * @summary 更新字段业务元数据
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
 * @description This operation is currently in beta. To join the beta testing, please submit a request. You can call this operation after we add you to the beta program.
 *
 * @param request UpdateComponentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateComponentResponse
 */
UpdateComponentResponse Client::updateComponentWithOptions(const UpdateComponentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  json body = {};
  if (!!request.hasComponentId()) {
    body["ComponentId"] = request.componentId();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.spec();
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
 * @description This operation is currently in beta. To join the beta testing, please submit a request. You can call this operation after we add you to the beta program.
 *
 * @param request UpdateComponentRequest
 * @return UpdateComponentResponse
 */
UpdateComponentResponse Client::updateComponent(const UpdateComponentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateComponentWithOptions(request, runtime);
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
    request.setNotificationSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notificationSettings(), "NotificationSettings", "json"));
  }

  if (!!tmpReq.hasTriggerConditions()) {
    request.setTriggerConditionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.triggerConditions(), "TriggerConditions", "json"));
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
 * @summary Updates a synchronization task.
 *
 * @description This API operation is available for all DataWorks editions.
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

  json query = {};
  if (!!request.hasDIJobId()) {
    query["DIJobId"] = request.DIJobId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  json body = {};
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
 * @summary Updates a synchronization task.
 *
 * @description This API operation is available for all DataWorks editions.
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
    request.setManagersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.managers(), "Managers", "json"));
  }

  if (!!tmpReq.hasValues()) {
    request.setValuesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.values(), "Values", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasManagersShrink()) {
    query["Managers"] = request.managersShrink();
  }

  if (!!request.hasValuesShrink()) {
    query["Values"] = request.valuesShrink();
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
 * @description This API operation is available for all DataWorks editions.
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
    request.setNotificationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notification(), "Notification", "json"));
  }

  if (!!tmpReq.hasTarget()) {
    request.setTargetShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.target(), "Target", "json"));
  }

  json body = {};
  if (!!request.hasCondition()) {
    body["Condition"] = request.condition();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasNotificationShrink()) {
    body["Notification"] = request.notificationShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasTargetShrink()) {
    body["Target"] = request.targetShrink();
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request UpdateDataQualityAlertRuleRequest
 * @return UpdateDataQualityAlertRuleResponse
 */
UpdateDataQualityAlertRuleResponse Client::updateDataQualityAlertRule(const UpdateDataQualityAlertRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataQualityAlertRuleWithOptions(request, runtime);
}

/**
 * @summary Updates a monitor.
 *
 * @description This API operation is supported in all DataWorks editions.
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
    request.setDataQualityRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dataQualityRules(), "DataQualityRules", "json"));
  }

  if (!!tmpReq.hasHooks()) {
    request.setHooksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.hooks(), "Hooks", "json"));
  }

  if (!!tmpReq.hasNotifications()) {
    request.setNotificationsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.notifications(), "Notifications", "json"));
  }

  if (!!tmpReq.hasTarget()) {
    request.setTargetShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.target(), "Target", "json"));
  }

  if (!!tmpReq.hasTrigger()) {
    request.setTriggerShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.trigger(), "Trigger", "json"));
  }

  json body = {};
  if (!!request.hasDataQualityRulesShrink()) {
    body["DataQualityRules"] = request.dataQualityRulesShrink();
  }

  if (!!request.hasDataSourceId()) {
    body["DataSourceId"] = request.dataSourceId();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasHooksShrink()) {
    body["Hooks"] = request.hooksShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNotificationsShrink()) {
    body["Notifications"] = request.notificationsShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasRuntimeConf()) {
    body["RuntimeConf"] = request.runtimeConf();
  }

  if (!!request.hasTargetShrink()) {
    body["Target"] = request.targetShrink();
  }

  if (!!request.hasTriggerShrink()) {
    body["Trigger"] = request.triggerShrink();
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
 * @summary Updates a monitor.
 *
 * @description This API operation is supported in all DataWorks editions.
 *
 * @param request UpdateDataQualityEvaluationTaskRequest
 * @return UpdateDataQualityEvaluationTaskResponse
 */
UpdateDataQualityEvaluationTaskResponse Client::updateDataQualityEvaluationTask(const UpdateDataQualityEvaluationTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataQualityEvaluationTaskWithOptions(request, runtime);
}

/**
 * @summary Updates a data quality monitoring rule.
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
    request.setCheckingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.checkingConfig(), "CheckingConfig", "json"));
  }

  if (!!tmpReq.hasErrorHandlers()) {
    request.setErrorHandlersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.errorHandlers(), "ErrorHandlers", "json"));
  }

  if (!!tmpReq.hasSamplingConfig()) {
    request.setSamplingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.samplingConfig(), "SamplingConfig", "json"));
  }

  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  json body = {};
  if (!!request.hasCheckingConfigShrink()) {
    body["CheckingConfig"] = request.checkingConfigShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEnabled()) {
    body["Enabled"] = request.enabled();
  }

  if (!!request.hasErrorHandlersShrink()) {
    body["ErrorHandlers"] = request.errorHandlersShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasSamplingConfigShrink()) {
    body["SamplingConfig"] = request.samplingConfigShrink();
  }

  if (!!request.hasSeverity()) {
    body["Severity"] = request.severity();
  }

  if (!!request.hasTemplateCode()) {
    body["TemplateCode"] = request.templateCode();
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
 * @summary Updates a data quality monitoring rule.
 *
 * @param request UpdateDataQualityRuleRequest
 * @return UpdateDataQualityRuleResponse
 */
UpdateDataQualityRuleResponse Client::updateDataQualityRule(const UpdateDataQualityRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataQualityRuleWithOptions(request, runtime);
}

/**
 * @summary Updates a data quality monitoring rule template.
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
    request.setCheckingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.checkingConfig(), "CheckingConfig", "json"));
  }

  if (!!tmpReq.hasSamplingConfig()) {
    request.setSamplingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.samplingConfig(), "SamplingConfig", "json"));
  }

  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  json body = {};
  if (!!request.hasCheckingConfigShrink()) {
    body["CheckingConfig"] = request.checkingConfigShrink();
  }

  if (!!request.hasCode()) {
    body["Code"] = request.code();
  }

  if (!!request.hasDirectoryPath()) {
    body["DirectoryPath"] = request.directoryPath();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasSamplingConfigShrink()) {
    body["SamplingConfig"] = request.samplingConfigShrink();
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
 * @summary Updates a data quality monitoring rule template.
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
 * @description This API operation is available for all DataWorks editions.
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
    request.setComputeResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.computeResource(), "ComputeResource", "json"));
  }

  if (!!tmpReq.hasHooks()) {
    request.setHooksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.hooks(), "Hooks", "json"));
  }

  if (!!tmpReq.hasParameters()) {
    request.setParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.parameters(), "Parameters", "json"));
  }

  if (!!tmpReq.hasRuntimeResource()) {
    request.setRuntimeResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.runtimeResource(), "RuntimeResource", "json"));
  }

  if (!!tmpReq.hasTrigger()) {
    request.setTriggerShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.trigger(), "Trigger", "json"));
  }

  json body = {};
  if (!!request.hasComputeResourceShrink()) {
    body["ComputeResource"] = request.computeResourceShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasHooksShrink()) {
    body["Hooks"] = request.hooksShrink();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasParametersShrink()) {
    body["Parameters"] = request.parametersShrink();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasRuntimeResourceShrink()) {
    body["RuntimeResource"] = request.runtimeResourceShrink();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.spec();
  }

  if (!!request.hasTriggerShrink()) {
    body["Trigger"] = request.triggerShrink();
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
 * @description This API operation is available for all DataWorks editions.
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
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request UpdateDataQualityTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataQualityTemplateResponse
 */
UpdateDataQualityTemplateResponse Client::updateDataQualityTemplateWithOptions(const UpdateDataQualityTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwner()) {
    query["Owner"] = request.owner();
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.spec();
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
 * @description This API operation is available for all DataWorks editions.
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
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
 * *   Tenant Owner, Tenant Administrator, Workspace Administrator, Workspace Owner, and O\\&M
 *
 * @param request UpdateDataSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDataSourceResponse
 */
UpdateDataSourceResponse Client::updateDataSourceWithOptions(const UpdateDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionProperties()) {
    query["ConnectionProperties"] = request.connectionProperties();
  }

  if (!!request.hasConnectionPropertiesMode()) {
    query["ConnectionPropertiesMode"] = request.connectionPropertiesMode();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
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
 * @description 1.  This API operation is available for all DataWorks editions.
 * 2.  You can call this operation only if you are assigned one of the following roles in DataWorks:
 * *   Tenant Owner, Tenant Administrator, Workspace Administrator, Workspace Owner, and O\\&M
 *
 * @param request UpdateDataSourceRequest
 * @return UpdateDataSourceResponse
 */
UpdateDataSourceResponse Client::updateDataSource(const UpdateDataSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDataSourceWithOptions(request, runtime);
}

/**
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
 * @param request UpdateFileRequest
 * @return UpdateFileResponse
 */
UpdateFileResponse Client::updateFile(const UpdateFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFileWithOptions(request, runtime);
}

/**
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
    body["Id"] = request.id();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.spec();
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
 * @summary 回调扩展点消息的检查结果
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
 * @summary 回调扩展点消息的检查结果
 *
 * @param request UpdateIDEEventResultRequest
 * @return UpdateIDEEventResultResponse
 */
UpdateIDEEventResultResponse Client::updateIDEEventResult(const UpdateIDEEventResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateIDEEventResultWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a collection in Data Map, including the collection name, description, and administrator. Collections include categories and data albums. If you want to update the information about a data album, the account that you use must be attached the AliyunDataWorksFullAccess policy, or you are the data album creator or administrator.
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
    request.setAdministratorsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.administrators(), "Administrators", "simple"));
  }

  json query = {};
  if (!!request.hasAdministratorsShrink()) {
    query["Administrators"] = request.administratorsShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
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
 * @summary Updates the information about a collection in Data Map, including the collection name, description, and administrator. Collections include categories and data albums. If you want to update the information about a data album, the account that you use must be attached the AliyunDataWorksFullAccess policy, or you are the data album creator or administrator.
 *
 * @param request UpdateMetaCollectionRequest
 * @return UpdateMetaCollectionResponse
 */
UpdateMetaCollectionResponse Client::updateMetaCollection(const UpdateMetaCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMetaCollectionWithOptions(request, runtime);
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
    body["Id"] = request.id();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.spec();
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
 * @summary Updates a DataWorks workspace.
 *
 * @param request UpdateProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProjectWithOptions(const UpdateProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasDevEnvironmentEnabled()) {
    body["DevEnvironmentEnabled"] = request.devEnvironmentEnabled();
  }

  if (!!request.hasDevRoleDisabled()) {
    body["DevRoleDisabled"] = request.devRoleDisabled();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.displayName();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasPaiTaskEnabled()) {
    body["PaiTaskEnabled"] = request.paiTaskEnabled();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.status();
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
 * @summary Updates a DataWorks workspace.
 *
 * @param request UpdateProjectRequest
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProject(const UpdateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProjectWithOptions(request, runtime);
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
    body["Id"] = request.id();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasResourceFile()) {
    body["ResourceFile"] = request.resourceFile();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.spec();
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
  UpdateResourceRequest updateResourceReq = UpdateResourceRequest();
  Utils::Utils::convert(request, updateResourceReq);
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
    body["AliyunResourceGroupId"] = request.aliyunResourceGroupId();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasRemark()) {
    body["Remark"] = request.remark();
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
    body["DestinationCidr"] = request.destinationCidr();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
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
 * @summary Updates the business metadata of a table in Data Map. Currently, only the usage notes of a table can be updated.
 *
 * @param request UpdateTableBusinessMetadataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTableBusinessMetadataResponse
 */
UpdateTableBusinessMetadataResponse Client::updateTableBusinessMetadataWithOptions(const UpdateTableBusinessMetadataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasReadme()) {
    body["Readme"] = request.readme();
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
 * @summary Updates the business metadata of a table in Data Map. Currently, only the usage notes of a table can be updated.
 *
 * @param request UpdateTableBusinessMetadataRequest
 * @return UpdateTableBusinessMetadataResponse
 */
UpdateTableBusinessMetadataResponse Client::updateTableBusinessMetadata(const UpdateTableBusinessMetadataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTableBusinessMetadataWithOptions(request, runtime);
}

/**
 * @summary Update a task. The changes are synchronized to Data Studio, which creates a new saved version.
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
    request.setDataSourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dataSource(), "DataSource", "json"));
  }

  if (!!tmpReq.hasDependencies()) {
    request.setDependenciesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dependencies(), "Dependencies", "json"));
  }

  if (!!tmpReq.hasInputs()) {
    request.setInputsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.inputs(), "Inputs", "json"));
  }

  if (!!tmpReq.hasOutputs()) {
    request.setOutputsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.outputs(), "Outputs", "json"));
  }

  if (!!tmpReq.hasRuntimeResource()) {
    request.setRuntimeResourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.runtimeResource(), "RuntimeResource", "json"));
  }

  if (!!tmpReq.hasScript()) {
    request.setScriptShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.script(), "Script", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  if (!!tmpReq.hasTrigger()) {
    request.setTriggerShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.trigger(), "Trigger", "json"));
  }

  json body = {};
  if (!!request.hasClientUniqueCode()) {
    body["ClientUniqueCode"] = request.clientUniqueCode();
  }

  if (!!request.hasDataSourceShrink()) {
    body["DataSource"] = request.dataSourceShrink();
  }

  if (!!request.hasDependenciesShrink()) {
    body["Dependencies"] = request.dependenciesShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEnvType()) {
    body["EnvType"] = request.envType();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasInputsShrink()) {
    body["Inputs"] = request.inputsShrink();
  }

  if (!!request.hasInstanceMode()) {
    body["InstanceMode"] = request.instanceMode();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasOutputsShrink()) {
    body["Outputs"] = request.outputsShrink();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasRerunInterval()) {
    body["RerunInterval"] = request.rerunInterval();
  }

  if (!!request.hasRerunMode()) {
    body["RerunMode"] = request.rerunMode();
  }

  if (!!request.hasRerunTimes()) {
    body["RerunTimes"] = request.rerunTimes();
  }

  if (!!request.hasRuntimeResourceShrink()) {
    body["RuntimeResource"] = request.runtimeResourceShrink();
  }

  if (!!request.hasScriptShrink()) {
    body["Script"] = request.scriptShrink();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTimeout()) {
    body["Timeout"] = request.timeout();
  }

  if (!!request.hasTriggerShrink()) {
    body["Trigger"] = request.triggerShrink();
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
 * @summary Update a task. The changes are synchronized to Data Studio, which creates a new saved version.
 *
 * @param request UpdateTaskRequest
 * @return UpdateTaskResponse
 */
UpdateTaskResponse Client::updateTask(const UpdateTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskWithOptions(request, runtime);
}

/**
 * @summary Modifies properties configured for multiple instances at a time. The properties include the priority, resource group for scheduling, and data source.
 *
 * @description This API operation is available for all DataWorks editions.
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
    request.setTaskInstancesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.taskInstances(), "TaskInstances", "json"));
  }

  json body = {};
  if (!!request.hasComment()) {
    body["Comment"] = request.comment();
  }

  if (!!request.hasTaskInstancesShrink()) {
    body["TaskInstances"] = request.taskInstancesShrink();
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
 * @summary Modifies properties configured for multiple instances at a time. The properties include the priority, resource group for scheduling, and data source.
 *
 * @description This API operation is available for all DataWorks editions.
 *
 * @param request UpdateTaskInstancesRequest
 * @return UpdateTaskInstancesResponse
 */
UpdateTaskInstancesResponse Client::updateTaskInstances(const UpdateTaskInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTaskInstancesWithOptions(request, runtime);
}

/**
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
 * @param request UpdateUdfFileRequest
 * @return UpdateUdfFileResponse
 */
UpdateUdfFileResponse Client::updateUdfFile(const UpdateUdfFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUdfFileWithOptions(request, runtime);
}

/**
 * @summary Updates a specified workflow in full update mode.
 *
 * @description This API operation is available for all DataWorks editions.
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
    request.setDependenciesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dependencies(), "Dependencies", "json"));
  }

  if (!!tmpReq.hasOutputs()) {
    request.setOutputsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.outputs(), "Outputs", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  if (!!tmpReq.hasTasks()) {
    request.setTasksShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tasks(), "Tasks", "json"));
  }

  if (!!tmpReq.hasTrigger()) {
    request.setTriggerShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.trigger(), "Trigger", "json"));
  }

  json body = {};
  if (!!request.hasClientUniqueCode()) {
    body["ClientUniqueCode"] = request.clientUniqueCode();
  }

  if (!!request.hasDependenciesShrink()) {
    body["Dependencies"] = request.dependenciesShrink();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEnvType()) {
    body["EnvType"] = request.envType();
  }

  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasInstanceMode()) {
    body["InstanceMode"] = request.instanceMode();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasOutputsShrink()) {
    body["Outputs"] = request.outputsShrink();
  }

  if (!!request.hasOwner()) {
    body["Owner"] = request.owner();
  }

  if (!!request.hasParameters()) {
    body["Parameters"] = request.parameters();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.tagsShrink();
  }

  if (!!request.hasTasksShrink()) {
    body["Tasks"] = request.tasksShrink();
  }

  if (!!request.hasTriggerShrink()) {
    body["Trigger"] = request.triggerShrink();
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
 * @summary Updates a specified workflow in full update mode.
 *
 * @description This API operation is available for all DataWorks editions.
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
 * @description >  You cannot use this API operation to create multiple workflows at a time. If you specify multiple workflows in the FlowSpec filed, only the first workflow is created. Other specified workflows and the nodes in the workflows are ignored. You can call the UpdateNode operation to update a node.
 *
 * @param request UpdateWorkflowDefinitionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkflowDefinitionResponse
 */
UpdateWorkflowDefinitionResponse Client::updateWorkflowDefinitionWithOptions(const UpdateWorkflowDefinitionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.id();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.projectId();
  }

  if (!!request.hasSpec()) {
    body["Spec"] = request.spec();
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
 * @description >  You cannot use this API operation to create multiple workflows at a time. If you specify multiple workflows in the FlowSpec filed, only the first workflow is created. Other specified workflows and the nodes in the workflows are ignored. You can call the UpdateNode operation to update a node.
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