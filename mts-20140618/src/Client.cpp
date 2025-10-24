#include <darabonba/Core.hpp>
#include <alibabacloud/Mts20140618.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Mts20140618::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Mts20140618
{

AlibabaCloud::Mts20140618::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-2-pop" , "mts.aliyuncs.com"},
    {"ap-southeast-2" , "mts.aliyuncs.com"},
    {"ap-southeast-3" , "mts.aliyuncs.com"},
    {"cn-beijing-finance-1" , "mts.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "mts.aliyuncs.com"},
    {"cn-beijing-gov-1" , "mts.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "mts.aliyuncs.com"},
    {"cn-chengdu" , "mts.aliyuncs.com"},
    {"cn-edge-1" , "mts.aliyuncs.com"},
    {"cn-fujian" , "mts.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "mts.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "mts.aliyuncs.com"},
    {"cn-hangzhou-finance" , "mts.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "mts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "mts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "mts.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "mts.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "mts.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "mts.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "mts.aliyuncs.com"},
    {"cn-north-2-gov-1" , "mts.aliyuncs.com"},
    {"cn-qingdao-nebula" , "mts.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "mts.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "mts.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "mts.aliyuncs.com"},
    {"cn-shanghai-inner" , "mts.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "mts.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "mts.aliyuncs.com"},
    {"cn-shenzhen-inner" , "mts.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "mts.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "mts.aliyuncs.com"},
    {"cn-wuhan" , "mts.aliyuncs.com"},
    {"cn-wulanchabu" , "mts.aliyuncs.com"},
    {"cn-yushanfang" , "mts.aliyuncs.com"},
    {"cn-zhangbei" , "mts.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "mts.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "mts.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "mts.aliyuncs.com"},
    {"eu-west-1-oxs" , "mts.aliyuncs.com"},
    {"me-east-1" , "mts.aliyuncs.com"},
    {"rus-west-1-pop" , "mts.aliyuncs.com"},
    {"us-east-1" , "mts.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("mts", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Activates a media workflow.
 *
 * @description You can call this operation to activate a media workflow that has been deactivated. After you activate a media workflow, you cannot modify the workflow information, such as the name, topology, or trigger mode. A media workflow is activated by default after it is created.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ActivateMediaWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ActivateMediaWorkflowResponse
 */
ActivateMediaWorkflowResponse Client::activateMediaWorkflowWithOptions(const ActivateMediaWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaWorkflowId()) {
    query["MediaWorkflowId"] = request.mediaWorkflowId();
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
    {"action" , "ActivateMediaWorkflow"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ActivateMediaWorkflowResponse>();
}

/**
 * @summary Activates a media workflow.
 *
 * @description You can call this operation to activate a media workflow that has been deactivated. After you activate a media workflow, you cannot modify the workflow information, such as the name, topology, or trigger mode. A media workflow is activated by default after it is created.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ActivateMediaWorkflowRequest
 * @return ActivateMediaWorkflowResponse
 */
ActivateMediaWorkflowResponse Client::activateMediaWorkflow(const ActivateMediaWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return activateMediaWorkflowWithOptions(request, runtime);
}

/**
 * @summary Adds a media file.
 *
 * @description *   You can call this operation to process videos that are uploaded to Object Storage Service (OSS) but not processed. This way, you do not need to upload the videos to OSS again. If you have configured media workflows, OSS automatically notifies ApsaraVideo Media Processing (MPS) when a media file is uploaded to OSS. MPS automatically finds the corresponding workflow in the Active state based on the specified OSS bucket and object. Therefore, in most cases, you do not need to manually call the AddMedia operation to process the media file.
 * *   Media information is automatically obtained only when the specified media workflow is in the Active state. If no media workflow is specified or the specified media workflow is not in the Active state, media information is not obtained.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request AddMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMediaResponse
 */
AddMediaResponse Client::addMediaWithOptions(const AddMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCateId()) {
    query["CateId"] = request.cateId();
  }

  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.coverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFileURL()) {
    query["FileURL"] = request.fileURL();
  }

  if (!!request.hasInputUnbind()) {
    query["InputUnbind"] = request.inputUnbind();
  }

  if (!!request.hasMediaWorkflowId()) {
    query["MediaWorkflowId"] = request.mediaWorkflowId();
  }

  if (!!request.hasMediaWorkflowUserData()) {
    query["MediaWorkflowUserData"] = request.mediaWorkflowUserData();
  }

  if (!!request.hasOverrideParams()) {
    query["OverrideParams"] = request.overrideParams();
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

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddMedia"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMediaResponse>();
}

/**
 * @summary Adds a media file.
 *
 * @description *   You can call this operation to process videos that are uploaded to Object Storage Service (OSS) but not processed. This way, you do not need to upload the videos to OSS again. If you have configured media workflows, OSS automatically notifies ApsaraVideo Media Processing (MPS) when a media file is uploaded to OSS. MPS automatically finds the corresponding workflow in the Active state based on the specified OSS bucket and object. Therefore, in most cases, you do not need to manually call the AddMedia operation to process the media file.
 * *   Media information is automatically obtained only when the specified media workflow is in the Active state. If no media workflow is specified or the specified media workflow is not in the Active state, media information is not obtained.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request AddMediaRequest
 * @return AddMediaResponse
 */
AddMediaResponse Client::addMedia(const AddMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addMediaWithOptions(request, runtime);
}

/**
 * @summary Adds a tag to a media file.
 *
 * @description You can call this operation to add only one tag. To add multiple tags at a time, you can call the [UpdateMedia](https://help.aliyun.com/document_detail/44464.html) operation.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request AddMediaTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMediaTagResponse
 */
AddMediaTagResponse Client::addMediaTagWithOptions(const AddMediaTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
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

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddMediaTag"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMediaTagResponse>();
}

/**
 * @summary Adds a tag to a media file.
 *
 * @description You can call this operation to add only one tag. To add multiple tags at a time, you can call the [UpdateMedia](https://help.aliyun.com/document_detail/44464.html) operation.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request AddMediaTagRequest
 * @return AddMediaTagResponse
 */
AddMediaTagResponse Client::addMediaTag(const AddMediaTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addMediaTagWithOptions(request, runtime);
}

/**
 * @summary Creates a media workflow.
 *
 * @description *   You can call this operation to define the topology, activities, and dependencies of a media workflow. The topology is represented by a directed acyclic graph (DAG) in the console. For more information, see [Workflow activities](https://help.aliyun.com/document_detail/68494.html). You can view and run the workflows that are created by calling this operation in the ApsaraVideo Media Processing (MPS) console.
 * *   MPS media workflows can be automatically triggered only by using the prefix of the file path. Automatic triggering by using the suffix is not supported. For more information about the trigger rules, see [Workflow triggering rules for files](https://help.aliyun.com/document_detail/68574.html).
 * ### [](#qps)QPS limits
 * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request AddMediaWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMediaWorkflowResponse
 */
AddMediaWorkflowResponse Client::addMediaWorkflowWithOptions(const AddMediaWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
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

  if (!!request.hasTopology()) {
    query["Topology"] = request.topology();
  }

  if (!!request.hasTriggerMode()) {
    query["TriggerMode"] = request.triggerMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddMediaWorkflow"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMediaWorkflowResponse>();
}

/**
 * @summary Creates a media workflow.
 *
 * @description *   You can call this operation to define the topology, activities, and dependencies of a media workflow. The topology is represented by a directed acyclic graph (DAG) in the console. For more information, see [Workflow activities](https://help.aliyun.com/document_detail/68494.html). You can view and run the workflows that are created by calling this operation in the ApsaraVideo Media Processing (MPS) console.
 * *   MPS media workflows can be automatically triggered only by using the prefix of the file path. Automatic triggering by using the suffix is not supported. For more information about the trigger rules, see [Workflow triggering rules for files](https://help.aliyun.com/document_detail/68574.html).
 * ### [](#qps)QPS limits
 * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request AddMediaWorkflowRequest
 * @return AddMediaWorkflowResponse
 */
AddMediaWorkflowResponse Client::addMediaWorkflow(const AddMediaWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addMediaWorkflowWithOptions(request, runtime);
}

/**
 * @summary Adds an ApsaraVideo Media Processing (MPS) queue.
 *
 * @param request AddPipelineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddPipelineResponse
 */
AddPipelineResponse Client::addPipelineWithOptions(const AddPipelineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNotifyConfig()) {
    query["NotifyConfig"] = request.notifyConfig();
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

  if (!!request.hasRole()) {
    query["Role"] = request.role();
  }

  if (!!request.hasSpeed()) {
    query["Speed"] = request.speed();
  }

  if (!!request.hasSpeedLevel()) {
    query["SpeedLevel"] = request.speedLevel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddPipeline"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddPipelineResponse>();
}

/**
 * @summary Adds an ApsaraVideo Media Processing (MPS) queue.
 *
 * @param request AddPipelineRequest
 * @return AddPipelineResponse
 */
AddPipelineResponse Client::addPipeline(const AddPipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addPipelineWithOptions(request, runtime);
}

/**
 * @summary 添加labelVersion、knowledgeConfig配置
 *
 * @param request AddSmarttagTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddSmarttagTemplateResponse
 */
AddSmarttagTemplateResponse Client::addSmarttagTemplateWithOptions(const AddSmarttagTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnalyseTypes()) {
    query["AnalyseTypes"] = request.analyseTypes();
  }

  if (!!request.hasFaceCategoryIds()) {
    query["FaceCategoryIds"] = request.faceCategoryIds();
  }

  if (!!request.hasFaceCustomParamsConfig()) {
    query["FaceCustomParamsConfig"] = request.faceCustomParamsConfig();
  }

  if (!!request.hasIndustry()) {
    query["Industry"] = request.industry();
  }

  if (!!request.hasIsDefault()) {
    query["IsDefault"] = request.isDefault();
  }

  if (!!request.hasKeywordConfig()) {
    query["KeywordConfig"] = request.keywordConfig();
  }

  if (!!request.hasKnowledgeConfig()) {
    query["KnowledgeConfig"] = request.knowledgeConfig();
  }

  if (!!request.hasLabelCustomCategoryIds()) {
    query["LabelCustomCategoryIds"] = request.labelCustomCategoryIds();
  }

  if (!!request.hasLabelCustomParamsConfig()) {
    query["LabelCustomParamsConfig"] = request.labelCustomParamsConfig();
  }

  if (!!request.hasLabelType()) {
    query["LabelType"] = request.labelType();
  }

  if (!!request.hasLabelVersion()) {
    query["LabelVersion"] = request.labelVersion();
  }

  if (!!request.hasLandmarkGroupIds()) {
    query["LandmarkGroupIds"] = request.landmarkGroupIds();
  }

  if (!!request.hasObjectGroupIds()) {
    query["ObjectGroupIds"] = request.objectGroupIds();
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

  if (!!request.hasScene()) {
    query["Scene"] = request.scene();
  }

  if (!!request.hasTemplateConfig()) {
    query["TemplateConfig"] = request.templateConfig();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddSmarttagTemplate"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSmarttagTemplateResponse>();
}

/**
 * @summary 添加labelVersion、knowledgeConfig配置
 *
 * @param request AddSmarttagTemplateRequest
 * @return AddSmarttagTemplateResponse
 */
AddSmarttagTemplateResponse Client::addSmarttagTemplate(const AddSmarttagTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSmarttagTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a custom transcoding template. You need to configure the information such as the container format, video stream settings, and audio stream settings.
 *
 * @description When you call this operation, you need to set transcoding parameters such as those related to the container format, video stream, and audio stream. If you do not specify some parameters, streams that are generated by using the template do not contain the information specified by those parameters.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request AddTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTemplateResponse
 */
AddTemplateResponse Client::addTemplateWithOptions(const AddTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAudio()) {
    query["Audio"] = request.audio();
  }

  if (!!request.hasContainer()) {
    query["Container"] = request.container();
  }

  if (!!request.hasMuxConfig()) {
    query["MuxConfig"] = request.muxConfig();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
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

  if (!!request.hasTransConfig()) {
    query["TransConfig"] = request.transConfig();
  }

  if (!!request.hasVideo()) {
    query["Video"] = request.video();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddTemplate"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddTemplateResponse>();
}

/**
 * @summary Creates a custom transcoding template. You need to configure the information such as the container format, video stream settings, and audio stream settings.
 *
 * @description When you call this operation, you need to set transcoding parameters such as those related to the container format, video stream, and audio stream. If you do not specify some parameters, streams that are generated by using the template do not contain the information specified by those parameters.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request AddTemplateRequest
 * @return AddTemplateResponse
 */
AddTemplateResponse Client::addTemplate(const AddTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a watermark template.
 *
 * @description After you create a watermark template by calling this operation, you can specify the watermark template and watermark asset when you [submit a transcoding job](https://help.aliyun.com/document_detail/29226.html). This allows you to add watermark information to the output video.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request AddWaterMarkTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddWaterMarkTemplateResponse
 */
AddWaterMarkTemplateResponse Client::addWaterMarkTemplateWithOptions(const AddWaterMarkTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
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
    {"action" , "AddWaterMarkTemplate"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddWaterMarkTemplateResponse>();
}

/**
 * @summary Creates a watermark template.
 *
 * @description After you create a watermark template by calling this operation, you can specify the watermark template and watermark asset when you [submit a transcoding job](https://help.aliyun.com/document_detail/29226.html). This allows you to add watermark information to the output video.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request AddWaterMarkTemplateRequest
 * @return AddWaterMarkTemplateResponse
 */
AddWaterMarkTemplateResponse Client::addWaterMarkTemplate(const AddWaterMarkTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addWaterMarkTemplateWithOptions(request, runtime);
}

/**
 * @summary Binds an input media bucket.
 *
 * @description Before you call this operation to bind an input media bucket, you must create a media bucket. For more information, see [Add media buckets](https://help.aliyun.com/document_detail/42430.html).
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request BindInputBucketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindInputBucketResponse
 */
BindInputBucketResponse Client::bindInputBucketWithOptions(const BindInputBucketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucket()) {
    query["Bucket"] = request.bucket();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReferer()) {
    query["Referer"] = request.referer();
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
    {"action" , "BindInputBucket"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindInputBucketResponse>();
}

/**
 * @summary Binds an input media bucket.
 *
 * @description Before you call this operation to bind an input media bucket, you must create a media bucket. For more information, see [Add media buckets](https://help.aliyun.com/document_detail/42430.html).
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request BindInputBucketRequest
 * @return BindInputBucketResponse
 */
BindInputBucketResponse Client::bindInputBucket(const BindInputBucketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindInputBucketWithOptions(request, runtime);
}

/**
 * @summary Binds an output media bucket to the media library.
 *
 * @description Before you call this operation to bind an output media bucket to the media library, you must create a media bucket. For more information, see [Add media buckets](https://help.aliyun.com/document_detail/42430.html).
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request BindOutputBucketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BindOutputBucketResponse
 */
BindOutputBucketResponse Client::bindOutputBucketWithOptions(const BindOutputBucketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucket()) {
    query["Bucket"] = request.bucket();
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
    {"action" , "BindOutputBucket"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BindOutputBucketResponse>();
}

/**
 * @summary Binds an output media bucket to the media library.
 *
 * @description Before you call this operation to bind an output media bucket to the media library, you must create a media bucket. For more information, see [Add media buckets](https://help.aliyun.com/document_detail/42430.html).
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request BindOutputBucketRequest
 * @return BindOutputBucketResponse
 */
BindOutputBucketResponse Client::bindOutputBucket(const BindOutputBucketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bindOutputBucketWithOptions(request, runtime);
}

/**
 * @summary Cancels a transcoding job.
 *
 * @description *   You can cancel a transcoding job only if the job is in the Submitted state.
 * *   We recommend that you call the **UpdatePipeline** operation to set the status of the ApsaraVideo Media Processing (MPS) queue to Paused before you cancel a job. This suspends job scheduling in the MPS queue. After the job is canceled, you must set the status of the MPS queue back to Active so that the other jobs in the MPS queue can be scheduled.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request CancelJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelJobResponse
 */
CancelJobResponse Client::cancelJobWithOptions(const CancelJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
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
    {"action" , "CancelJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelJobResponse>();
}

/**
 * @summary Cancels a transcoding job.
 *
 * @description *   You can cancel a transcoding job only if the job is in the Submitted state.
 * *   We recommend that you call the **UpdatePipeline** operation to set the status of the ApsaraVideo Media Processing (MPS) queue to Paused before you cancel a job. This suspends job scheduling in the MPS queue. After the job is canceled, you must set the status of the MPS queue back to Active so that the other jobs in the MPS queue can be scheduled.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request CancelJobRequest
 * @return CancelJobResponse
 */
CancelJobResponse Client::cancelJob(const CancelJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelJobWithOptions(request, runtime);
}

/**
 * @param request CreateCustomEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomEntityResponse
 */
CreateCustomEntityResponse Client::createCustomEntityWithOptions(const CreateCustomEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasCustomEntityInfo()) {
    query["CustomEntityInfo"] = request.customEntityInfo();
  }

  if (!!request.hasCustomEntityName()) {
    query["CustomEntityName"] = request.customEntityName();
  }

  if (!!request.hasCustomGroupId()) {
    query["CustomGroupId"] = request.customGroupId();
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
    {"action" , "CreateCustomEntity"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomEntityResponse>();
}

/**
 * @param request CreateCustomEntityRequest
 * @return CreateCustomEntityResponse
 */
CreateCustomEntityResponse Client::createCustomEntity(const CreateCustomEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomEntityWithOptions(request, runtime);
}

/**
 * @param request CreateCustomGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomGroupResponse
 */
CreateCustomGroupResponse Client::createCustomGroupWithOptions(const CreateCustomGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasCustomGroupDescription()) {
    query["CustomGroupDescription"] = request.customGroupDescription();
  }

  if (!!request.hasCustomGroupName()) {
    query["CustomGroupName"] = request.customGroupName();
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
    {"action" , "CreateCustomGroup"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomGroupResponse>();
}

/**
 * @param request CreateCustomGroupRequest
 * @return CreateCustomGroupResponse
 */
CreateCustomGroupResponse Client::createCustomGroup(const CreateCustomGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomGroupWithOptions(request, runtime);
}

/**
 * @summary Submits a job of creating a media fingerprint library.
 *
 * @description *   You can call this operation to submit a job to create a video or text fingerprint library. You can use a text fingerprint library to store fingerprints for text.
 * *   You can submit a job of creating a text fingerprint library only in the China (Shanghai) region.
 * *   By default, you can submit up to 10 jobs of creating a video fingerprint library to an ApsaraVideo Media Processing (MPS) queue at a time. If you submit more than 10 jobs at a time, the call may fail.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request CreateFpShotDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFpShotDBResponse
 */
CreateFpShotDBResponse Client::createFpShotDBWithOptions(const CreateFpShotDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasModelId()) {
    query["ModelId"] = request.modelId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
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
    {"action" , "CreateFpShotDB"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFpShotDBResponse>();
}

/**
 * @summary Submits a job of creating a media fingerprint library.
 *
 * @description *   You can call this operation to submit a job to create a video or text fingerprint library. You can use a text fingerprint library to store fingerprints for text.
 * *   You can submit a job of creating a text fingerprint library only in the China (Shanghai) region.
 * *   By default, you can submit up to 10 jobs of creating a video fingerprint library to an ApsaraVideo Media Processing (MPS) queue at a time. If you submit more than 10 jobs at a time, the call may fail.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request CreateFpShotDBRequest
 * @return CreateFpShotDBResponse
 */
CreateFpShotDBResponse Client::createFpShotDB(const CreateFpShotDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFpShotDBWithOptions(request, runtime);
}

/**
 * @summary Disables a media workflow.
 *
 * @description The time when the media workflow was created.
 *
 * @param request DeactivateMediaWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeactivateMediaWorkflowResponse
 */
DeactivateMediaWorkflowResponse Client::deactivateMediaWorkflowWithOptions(const DeactivateMediaWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaWorkflowId()) {
    query["MediaWorkflowId"] = request.mediaWorkflowId();
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
    {"action" , "DeactivateMediaWorkflow"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeactivateMediaWorkflowResponse>();
}

/**
 * @summary Disables a media workflow.
 *
 * @description The time when the media workflow was created.
 *
 * @param request DeactivateMediaWorkflowRequest
 * @return DeactivateMediaWorkflowResponse
 */
DeactivateMediaWorkflowResponse Client::deactivateMediaWorkflow(const DeactivateMediaWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deactivateMediaWorkflowWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom entity from a custom library.
 *
 * @param request DeleteCustomEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomEntityResponse
 */
DeleteCustomEntityResponse Client::deleteCustomEntityWithOptions(const DeleteCustomEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasCustomEntityId()) {
    query["CustomEntityId"] = request.customEntityId();
  }

  if (!!request.hasCustomGroupId()) {
    query["CustomGroupId"] = request.customGroupId();
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
    {"action" , "DeleteCustomEntity"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomEntityResponse>();
}

/**
 * @summary Deletes a custom entity from a custom library.
 *
 * @param request DeleteCustomEntityRequest
 * @return DeleteCustomEntityResponse
 */
DeleteCustomEntityResponse Client::deleteCustomEntity(const DeleteCustomEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomEntityWithOptions(request, runtime);
}

/**
 * @summary Delete a custom image library.
 *
 * @description You can call this operation only in the China (Beijing), China (Shanghai), and China (Hangzhou) regions.
 * ### QPS limit
 * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request DeleteCustomGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomGroupResponse
 */
DeleteCustomGroupResponse Client::deleteCustomGroupWithOptions(const DeleteCustomGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasCustomGroupId()) {
    query["CustomGroupId"] = request.customGroupId();
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
    {"action" , "DeleteCustomGroup"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomGroupResponse>();
}

/**
 * @summary Delete a custom image library.
 *
 * @description You can call this operation only in the China (Beijing), China (Shanghai), and China (Hangzhou) regions.
 * ### QPS limit
 * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request DeleteCustomGroupRequest
 * @return DeleteCustomGroupResponse
 */
DeleteCustomGroupResponse Client::deleteCustomGroup(const DeleteCustomGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomGroupWithOptions(request, runtime);
}

/**
 * @param request DeleteCustomViewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomViewResponse
 */
DeleteCustomViewResponse Client::deleteCustomViewWithOptions(const DeleteCustomViewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasCustomEntityId()) {
    query["CustomEntityId"] = request.customEntityId();
  }

  if (!!request.hasCustomGroupId()) {
    query["CustomGroupId"] = request.customGroupId();
  }

  if (!!request.hasCustomViewId()) {
    query["CustomViewId"] = request.customViewId();
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
    {"action" , "DeleteCustomView"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomViewResponse>();
}

/**
 * @param request DeleteCustomViewRequest
 * @return DeleteCustomViewResponse
 */
DeleteCustomViewResponse Client::deleteCustomView(const DeleteCustomViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomViewWithOptions(request, runtime);
}

/**
 * @summary Deletes media files from ApsaraVideo Media Processing (MPS).
 *
 * @description This operation allows you to logically delete a media file. The media file can no longer be processed, but the corresponding objects in the input and output Object Storage Service (OSS) buckets are retained.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request DeleteMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMediaResponse
 */
DeleteMediaResponse Client::deleteMediaWithOptions(const DeleteMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.mediaIds();
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
    {"action" , "DeleteMedia"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMediaResponse>();
}

/**
 * @summary Deletes media files from ApsaraVideo Media Processing (MPS).
 *
 * @description This operation allows you to logically delete a media file. The media file can no longer be processed, but the corresponding objects in the input and output Object Storage Service (OSS) buckets are retained.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request DeleteMediaRequest
 * @return DeleteMediaResponse
 */
DeleteMediaResponse Client::deleteMedia(const DeleteMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMediaWithOptions(request, runtime);
}

/**
 * @summary Removes a tag for a media file.
 *
 * @description You can call this operation to remove only one tag at a time.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request DeleteMediaTagRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMediaTagResponse
 */
DeleteMediaTagResponse Client::deleteMediaTagWithOptions(const DeleteMediaTagRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
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

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMediaTag"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMediaTagResponse>();
}

/**
 * @summary Removes a tag for a media file.
 *
 * @description You can call this operation to remove only one tag at a time.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request DeleteMediaTagRequest
 * @return DeleteMediaTagResponse
 */
DeleteMediaTagResponse Client::deleteMediaTag(const DeleteMediaTagRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMediaTagWithOptions(request, runtime);
}

/**
 * @summary Deletes a media workflow. This does not affect workflow instances that are running.
 *
 * @description After you delete or disable a workflow, the workflow cannot be used. In this case, the workflow is not automatically triggered when you upload a file to the bucket specified by the workflow.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request DeleteMediaWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMediaWorkflowResponse
 */
DeleteMediaWorkflowResponse Client::deleteMediaWorkflowWithOptions(const DeleteMediaWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaWorkflowId()) {
    query["MediaWorkflowId"] = request.mediaWorkflowId();
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
    {"action" , "DeleteMediaWorkflow"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMediaWorkflowResponse>();
}

/**
 * @summary Deletes a media workflow. This does not affect workflow instances that are running.
 *
 * @description After you delete or disable a workflow, the workflow cannot be used. In this case, the workflow is not automatically triggered when you upload a file to the bucket specified by the workflow.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request DeleteMediaWorkflowRequest
 * @return DeleteMediaWorkflowResponse
 */
DeleteMediaWorkflowResponse Client::deleteMediaWorkflow(const DeleteMediaWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMediaWorkflowWithOptions(request, runtime);
}

/**
 * @summary Deletes an ApsaraVideo Media Processing (MPS) queue.
 *
 * @description You can call this operation to delete only one MPS queue at a time.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request DeletePipelineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePipelineResponse
 */
DeletePipelineResponse Client::deletePipelineWithOptions(const DeletePipelineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
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
    {"action" , "DeletePipeline"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePipelineResponse>();
}

/**
 * @summary Deletes an ApsaraVideo Media Processing (MPS) queue.
 *
 * @description You can call this operation to delete only one MPS queue at a time.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request DeletePipelineRequest
 * @return DeletePipelineResponse
 */
DeletePipelineResponse Client::deletePipeline(const DeletePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePipelineWithOptions(request, runtime);
}

/**
 * @summary Deletes a template.
 *
 * @description You can call this operation to delete only one template at a time.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request DeleteSmarttagTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSmarttagTemplateResponse
 */
DeleteSmarttagTemplateResponse Client::deleteSmarttagTemplateWithOptions(const DeleteSmarttagTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSmarttagTemplate"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSmarttagTemplateResponse>();
}

/**
 * @summary Deletes a template.
 *
 * @description You can call this operation to delete only one template at a time.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request DeleteSmarttagTemplateRequest
 * @return DeleteSmarttagTemplateResponse
 */
DeleteSmarttagTemplateResponse Client::deleteSmarttagTemplate(const DeleteSmarttagTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSmarttagTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom transcoding template.
 *
 * @description A custom transcoding template cannot be deleted if it is being used by a job that has been submitted.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request DeleteTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplateWithOptions(const DeleteTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTemplate"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTemplateResponse>();
}

/**
 * @summary Deletes a custom transcoding template.
 *
 * @description A custom transcoding template cannot be deleted if it is being used by a job that has been submitted.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request DeleteTemplateRequest
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplate(const DeleteTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a watermark template.
 *
 * @description A watermark template cannot be deleted if it is being used by a submitted job.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request DeleteWaterMarkTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWaterMarkTemplateResponse
 */
DeleteWaterMarkTemplateResponse Client::deleteWaterMarkTemplateWithOptions(const DeleteWaterMarkTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasWaterMarkTemplateId()) {
    query["WaterMarkTemplateId"] = request.waterMarkTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWaterMarkTemplate"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWaterMarkTemplateResponse>();
}

/**
 * @summary Deletes a watermark template.
 *
 * @description A watermark template cannot be deleted if it is being used by a submitted job.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request DeleteWaterMarkTemplateRequest
 * @return DeleteWaterMarkTemplateResponse
 */
DeleteWaterMarkTemplateResponse Client::deleteWaterMarkTemplate(const DeleteWaterMarkTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWaterMarkTemplateWithOptions(request, runtime);
}

/**
 * @summary Reviews images and text and returns the review results.
 *
 * @description *   The moderation results are synchronously returned after the moderation is complete.
 * *   You can use the image and text moderation feature only in the China (Beijing), China (Shanghai), and Singapore regions.
 * ### QPS limits
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ImAuditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImAuditResponse
 */
ImAuditResponse Client::imAuditWithOptions(const ImAuditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasContents()) {
    query["Contents"] = request.contents();
  }

  if (!!request.hasImages()) {
    query["Images"] = request.images();
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

  if (!!request.hasScenes()) {
    query["Scenes"] = request.scenes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImAudit"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImAuditResponse>();
}

/**
 * @summary Reviews images and text and returns the review results.
 *
 * @description *   The moderation results are synchronously returned after the moderation is complete.
 * *   You can use the image and text moderation feature only in the China (Beijing), China (Shanghai), and Singapore regions.
 * ### QPS limits
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ImAuditRequest
 * @return ImAuditResponse
 */
ImAuditResponse Client::imAudit(const ImAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return imAuditWithOptions(request, runtime);
}

/**
 * @summary Submits a job of importing text files to a text fingerprint library.
 *
 * @description *   You can call this operation to import multiple text files to a text fingerprint library at a time. The system extracts fingerprints from the text files and saves the fingerprints to the text fingerprint library.
 * *   You can call this operation only in the China (Shanghai) region.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ImportFpShotJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportFpShotJobResponse
 */
ImportFpShotJobResponse Client::importFpShotJobWithOptions(const ImportFpShotJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFpDBId()) {
    query["FpDBId"] = request.fpDBId();
  }

  if (!!request.hasFpImportConfig()) {
    query["FpImportConfig"] = request.fpImportConfig();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.input();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ImportFpShotJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportFpShotJobResponse>();
}

/**
 * @summary Submits a job of importing text files to a text fingerprint library.
 *
 * @description *   You can call this operation to import multiple text files to a text fingerprint library at a time. The system extracts fingerprints from the text files and saves the fingerprints to the text fingerprint library.
 * *   You can call this operation only in the China (Shanghai) region.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ImportFpShotJobRequest
 * @return ImportFpShotJobResponse
 */
ImportFpShotJobResponse Client::importFpShotJob(const ImportFpShotJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importFpShotJobWithOptions(request, runtime);
}

/**
 * @summary Queries all media buckets bound to the media library.
 *
 * @description A maximum of 100 media buckets can be returned.
 * ### QPS limit
 * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ListAllMediaBucketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllMediaBucketResponse
 */
ListAllMediaBucketResponse Client::listAllMediaBucketWithOptions(const ListAllMediaBucketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaximumPageSize()) {
    query["MaximumPageSize"] = request.maximumPageSize();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
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
    {"action" , "ListAllMediaBucket"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllMediaBucketResponse>();
}

/**
 * @summary Queries all media buckets bound to the media library.
 *
 * @description A maximum of 100 media buckets can be returned.
 * ### QPS limit
 * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ListAllMediaBucketRequest
 * @return ListAllMediaBucketResponse
 */
ListAllMediaBucketResponse Client::listAllMediaBucket(const ListAllMediaBucketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAllMediaBucketWithOptions(request, runtime);
}

/**
 * @summary Queries a list of entities in a custom library.
 *
 * @param request ListCustomEntitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomEntitiesResponse
 */
ListCustomEntitiesResponse Client::listCustomEntitiesWithOptions(const ListCustomEntitiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasCustomGroupId()) {
    query["CustomGroupId"] = request.customGroupId();
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
    {"action" , "ListCustomEntities"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomEntitiesResponse>();
}

/**
 * @summary Queries a list of entities in a custom library.
 *
 * @param request ListCustomEntitiesRequest
 * @return ListCustomEntitiesResponse
 */
ListCustomEntitiesResponse Client::listCustomEntities(const ListCustomEntitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomEntitiesWithOptions(request, runtime);
}

/**
 * @param request ListCustomGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomGroupsResponse
 */
ListCustomGroupsResponse Client::listCustomGroupsWithOptions(const ListCustomGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
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
    {"action" , "ListCustomGroups"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomGroupsResponse>();
}

/**
 * @param request ListCustomGroupsRequest
 * @return ListCustomGroupsResponse
 */
ListCustomGroupsResponse Client::listCustomGroups(const ListCustomGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about all figures and faces in a specific figure library.
 *
 * @description You can specify the ID of a figure or a figure library to query the corresponding information. If neither the figure ID nor figure library ID is specified, the operation returns the information about all figures and faces in all figure libraries within the current RAM user.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ListCustomPersonsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomPersonsResponse
 */
ListCustomPersonsResponse Client::listCustomPersonsWithOptions(const ListCustomPersonsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.categoryId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPersonId()) {
    query["PersonId"] = request.personId();
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
    {"action" , "ListCustomPersons"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomPersonsResponse>();
}

/**
 * @summary Queries the information about all figures and faces in a specific figure library.
 *
 * @description You can specify the ID of a figure or a figure library to query the corresponding information. If neither the figure ID nor figure library ID is specified, the operation returns the information about all figures and faces in all figure libraries within the current RAM user.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ListCustomPersonsRequest
 * @return ListCustomPersonsResponse
 */
ListCustomPersonsResponse Client::listCustomPersons(const ListCustomPersonsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomPersonsWithOptions(request, runtime);
}

/**
 * @param request ListCustomViewsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomViewsResponse
 */
ListCustomViewsResponse Client::listCustomViewsWithOptions(const ListCustomViewsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasCustomEntityId()) {
    query["CustomEntityId"] = request.customEntityId();
  }

  if (!!request.hasCustomGroupId()) {
    query["CustomGroupId"] = request.customGroupId();
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
    {"action" , "ListCustomViews"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomViewsResponse>();
}

/**
 * @param request ListCustomViewsRequest
 * @return ListCustomViewsResponse
 */
ListCustomViewsResponse Client::listCustomViews(const ListCustomViewsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomViewsWithOptions(request, runtime);
}

/**
 * @summary Queries media fingerprint libraries.
 *
 * @description *   You can call this operation to query the status and information about the media fingerprint libraries based on the specified IDs.
 * *   You can query text fingerprint libraries only in the China (Shanghai) region.
 * *   You can call this operation to query up to 10 media fingerprint libraries.
 * ### QPS limit
 * You can call this operation up to 500 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ListFpShotDBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFpShotDBResponse
 */
ListFpShotDBResponse Client::listFpShotDBWithOptions(const ListFpShotDBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFpDBIds()) {
    query["FpDBIds"] = request.fpDBIds();
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
    {"action" , "ListFpShotDB"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFpShotDBResponse>();
}

/**
 * @summary Queries media fingerprint libraries.
 *
 * @description *   You can call this operation to query the status and information about the media fingerprint libraries based on the specified IDs.
 * *   You can query text fingerprint libraries only in the China (Shanghai) region.
 * *   You can call this operation to query up to 10 media fingerprint libraries.
 * ### QPS limit
 * You can call this operation up to 500 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ListFpShotDBRequest
 * @return ListFpShotDBResponse
 */
ListFpShotDBResponse Client::listFpShotDB(const ListFpShotDBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFpShotDBWithOptions(request, runtime);
}

/**
 * @summary Queries media files in a media fingerprint library.
 *
 * @description *   You can call this operation to query media files in a specific media fingerprint library based on the library ID. This operation supports paged queries.
 * *   You can call this operation only in the China (Beijing), China (Hangzhou), China (Shanghai), and Singapore regions.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ListFpShotFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFpShotFilesResponse
 */
ListFpShotFilesResponse Client::listFpShotFilesWithOptions(const ListFpShotFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasFpDBId()) {
    query["FpDBId"] = request.fpDBId();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
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
    {"action" , "ListFpShotFiles"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFpShotFilesResponse>();
}

/**
 * @summary Queries media files in a media fingerprint library.
 *
 * @description *   You can call this operation to query media files in a specific media fingerprint library based on the library ID. This operation supports paged queries.
 * *   You can call this operation only in the China (Beijing), China (Hangzhou), China (Shanghai), and Singapore regions.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ListFpShotFilesRequest
 * @return ListFpShotFilesResponse
 */
ListFpShotFilesResponse Client::listFpShotFiles(const ListFpShotFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFpShotFilesWithOptions(request, runtime);
}

/**
 * @summary Queries jobs of importing text files to a text fingerprint library.
 *
 * @description You can call this operation only in the China (Shanghai) region.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ListFpShotImportJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListFpShotImportJobResponse
 */
ListFpShotImportJobResponse Client::listFpShotImportJobWithOptions(const ListFpShotImportJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobIds()) {
    query["JobIds"] = request.jobIds();
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
    {"action" , "ListFpShotImportJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListFpShotImportJobResponse>();
}

/**
 * @summary Queries jobs of importing text files to a text fingerprint library.
 *
 * @description You can call this operation only in the China (Shanghai) region.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ListFpShotImportJobRequest
 * @return ListFpShotImportJobResponse
 */
ListFpShotImportJobResponse Client::listFpShotImportJob(const ListFpShotImportJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listFpShotImportJobWithOptions(request, runtime);
}

/**
 * @summary Traverses transcoding jobs
 *
 * @description *   By default, the returned transcoding jobs are sorted by CreationTime in descending order.
 * *   You can call this operation to return transcoding jobs of the last 90 days. The jobs are returned based on the specified time range.
 * *   You can filter query results by configuring request parameters such as job status, creation time interval, and ApsaraVideo Media Processing (MPS) queue for transcoding.
 * *   By default, MPS does not allow you to access data across regions within the same account. Before you call this operation, make sure that the region that you specify is the same as the region of the transcoding jobs to be queried. Otherwise, this operation may fail to be called, or invalid information may be returned.
 * ### [](#qps)QPS limits
 * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ListJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobResponse
 */
ListJobResponse Client::listJobWithOptions(const ListJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndOfJobCreatedTimeRange()) {
    query["EndOfJobCreatedTimeRange"] = request.endOfJobCreatedTimeRange();
  }

  if (!!request.hasMaximumPageSize()) {
    query["MaximumPageSize"] = request.maximumPageSize();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartOfJobCreatedTimeRange()) {
    query["StartOfJobCreatedTimeRange"] = request.startOfJobCreatedTimeRange();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobResponse>();
}

/**
 * @summary Traverses transcoding jobs
 *
 * @description *   By default, the returned transcoding jobs are sorted by CreationTime in descending order.
 * *   You can call this operation to return transcoding jobs of the last 90 days. The jobs are returned based on the specified time range.
 * *   You can filter query results by configuring request parameters such as job status, creation time interval, and ApsaraVideo Media Processing (MPS) queue for transcoding.
 * *   By default, MPS does not allow you to access data across regions within the same account. Before you call this operation, make sure that the region that you specify is the same as the region of the transcoding jobs to be queried. Otherwise, this operation may fail to be called, or invalid information may be returned.
 * ### [](#qps)QPS limits
 * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ListJobRequest
 * @return ListJobResponse
 */
ListJobResponse Client::listJob(const ListJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobWithOptions(request, runtime);
}

/**
 * @summary Queries the execution instances of a media workflow.
 *
 * @description This operation returns execution instances only in the recent 90 days.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ListMediaWorkflowExecutionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMediaWorkflowExecutionsResponse
 */
ListMediaWorkflowExecutionsResponse Client::listMediaWorkflowExecutionsWithOptions(const ListMediaWorkflowExecutionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInputFileURL()) {
    query["InputFileURL"] = request.inputFileURL();
  }

  if (!!request.hasMaximumPageSize()) {
    query["MaximumPageSize"] = request.maximumPageSize();
  }

  if (!!request.hasMediaWorkflowId()) {
    query["MediaWorkflowId"] = request.mediaWorkflowId();
  }

  if (!!request.hasMediaWorkflowName()) {
    query["MediaWorkflowName"] = request.mediaWorkflowName();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
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
    {"action" , "ListMediaWorkflowExecutions"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMediaWorkflowExecutionsResponse>();
}

/**
 * @summary Queries the execution instances of a media workflow.
 *
 * @description This operation returns execution instances only in the recent 90 days.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request ListMediaWorkflowExecutionsRequest
 * @return ListMediaWorkflowExecutionsResponse
 */
ListMediaWorkflowExecutionsResponse Client::listMediaWorkflowExecutions(const ListMediaWorkflowExecutionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMediaWorkflowExecutionsWithOptions(request, runtime);
}

/**
 * @summary Queries the template analysis job and returns a list of available preset templates when the template analysis job is complete.
 *
 * @description The time when the job was created.
 *
 * @param request QueryAnalysisJobListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAnalysisJobListResponse
 */
QueryAnalysisJobListResponse Client::queryAnalysisJobListWithOptions(const QueryAnalysisJobListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnalysisJobIds()) {
    query["AnalysisJobIds"] = request.analysisJobIds();
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
    {"action" , "QueryAnalysisJobList"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAnalysisJobListResponse>();
}

/**
 * @summary Queries the template analysis job and returns a list of available preset templates when the template analysis job is complete.
 *
 * @description The time when the job was created.
 *
 * @param request QueryAnalysisJobListRequest
 * @return QueryAnalysisJobListResponse
 */
QueryAnalysisJobListResponse Client::queryAnalysisJobList(const QueryAnalysisJobListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAnalysisJobListWithOptions(request, runtime);
}

/**
 * @summary 查询版权水印提取任务
 *
 * @param request QueryCopyrightExtractJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCopyrightExtractJobResponse
 */
QueryCopyrightExtractJobResponse Client::queryCopyrightExtractJobWithOptions(const QueryCopyrightExtractJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCopyrightExtractJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCopyrightExtractJobResponse>();
}

/**
 * @summary 查询版权水印提取任务
 *
 * @param request QueryCopyrightExtractJobRequest
 * @return QueryCopyrightExtractJobResponse
 */
QueryCopyrightExtractJobResponse Client::queryCopyrightExtractJob(const QueryCopyrightExtractJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCopyrightExtractJobWithOptions(request, runtime);
}

/**
 * @summary 查询视频版权水印任务
 *
 * @param request QueryCopyrightJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCopyrightJobResponse
 */
QueryCopyrightJobResponse Client::queryCopyrightJobWithOptions(const QueryCopyrightJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTimeEnd()) {
    query["CreateTimeEnd"] = request.createTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    query["CreateTimeStart"] = request.createTimeStart();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.level();
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
    {"action" , "QueryCopyrightJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCopyrightJobResponse>();
}

/**
 * @summary 查询视频版权水印任务
 *
 * @param request QueryCopyrightJobRequest
 * @return QueryCopyrightJobResponse
 */
QueryCopyrightJobResponse Client::queryCopyrightJob(const QueryCopyrightJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCopyrightJobWithOptions(request, runtime);
}

/**
 * @summary Queries the jobs of clearing or deleting a media fingerprint library.
 *
 * @description You can call this operation to query the specified jobs of clearing or deleting a media fingerprint library based on the job IDs. If you do not specify job IDs, the system returns the latest 20 jobs that are submitted.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QueryFpDBDeleteJobListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFpDBDeleteJobListResponse
 */
QueryFpDBDeleteJobListResponse Client::queryFpDBDeleteJobListWithOptions(const QueryFpDBDeleteJobListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobIds()) {
    query["JobIds"] = request.jobIds();
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
    {"action" , "QueryFpDBDeleteJobList"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFpDBDeleteJobListResponse>();
}

/**
 * @summary Queries the jobs of clearing or deleting a media fingerprint library.
 *
 * @description You can call this operation to query the specified jobs of clearing or deleting a media fingerprint library based on the job IDs. If you do not specify job IDs, the system returns the latest 20 jobs that are submitted.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QueryFpDBDeleteJobListRequest
 * @return QueryFpDBDeleteJobListResponse
 */
QueryFpDBDeleteJobListResponse Client::queryFpDBDeleteJobList(const QueryFpDBDeleteJobListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFpDBDeleteJobListWithOptions(request, runtime);
}

/**
 * @summary Queries the jobs of deleting media files from a media fingerprint library.
 *
 * @description You can call this operation to query the specified jobs of deleting media files from a media fingerprint library based on the job IDs. If you do not specify job IDs, the system returns the latest 20 jobs that are submitted.
 * ### QPS limit
 * You can call this operation up to 500 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QueryFpFileDeleteJobListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFpFileDeleteJobListResponse
 */
QueryFpFileDeleteJobListResponse Client::queryFpFileDeleteJobListWithOptions(const QueryFpFileDeleteJobListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobIds()) {
    query["JobIds"] = request.jobIds();
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
    {"action" , "QueryFpFileDeleteJobList"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFpFileDeleteJobListResponse>();
}

/**
 * @summary Queries the jobs of deleting media files from a media fingerprint library.
 *
 * @description You can call this operation to query the specified jobs of deleting media files from a media fingerprint library based on the job IDs. If you do not specify job IDs, the system returns the latest 20 jobs that are submitted.
 * ### QPS limit
 * You can call this operation up to 500 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QueryFpFileDeleteJobListRequest
 * @return QueryFpFileDeleteJobListResponse
 */
QueryFpFileDeleteJobListResponse Client::queryFpFileDeleteJobList(const QueryFpFileDeleteJobListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFpFileDeleteJobListWithOptions(request, runtime);
}

/**
 * @summary Queries media fingerprint analysis jobs. You can call this operation to query video fingerprint analysis jobs and text fingerprint analysis jobs.
 *
 * @description *   After a media fingerprint analysis job is submitted, the media fingerprinting service compares the fingerprints of the job input with those of the media files in the media fingerprint library. You can call this operation to query the job results.
 * *   You can query the results of a text fingerprint analysis job only in the China (Shanghai) region.
 * ### [](#qps)QPS limits
 * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QueryFpShotJobListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryFpShotJobListResponse
 */
QueryFpShotJobListResponse Client::queryFpShotJobListWithOptions(const QueryFpShotJobListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndOfJobCreatedTimeRange()) {
    query["EndOfJobCreatedTimeRange"] = request.endOfJobCreatedTimeRange();
  }

  if (!!request.hasJobIds()) {
    query["JobIds"] = request.jobIds();
  }

  if (!!request.hasMaximumPageSize()) {
    query["MaximumPageSize"] = request.maximumPageSize();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartOfJobCreatedTimeRange()) {
    query["StartOfJobCreatedTimeRange"] = request.startOfJobCreatedTimeRange();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryFpShotJobList"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryFpShotJobListResponse>();
}

/**
 * @summary Queries media fingerprint analysis jobs. You can call this operation to query video fingerprint analysis jobs and text fingerprint analysis jobs.
 *
 * @description *   After a media fingerprint analysis job is submitted, the media fingerprinting service compares the fingerprints of the job input with those of the media files in the media fingerprint library. You can call this operation to query the job results.
 * *   You can query the results of a text fingerprint analysis job only in the China (Shanghai) region.
 * ### [](#qps)QPS limits
 * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QueryFpShotJobListRequest
 * @return QueryFpShotJobListResponse
 */
QueryFpShotJobListResponse Client::queryFpShotJobList(const QueryFpShotJobListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryFpShotJobListWithOptions(request, runtime);
}

/**
 * @param request QueryIProductionJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryIProductionJobResponse
 */
QueryIProductionJobResponse Client::queryIProductionJobWithOptions(const QueryIProductionJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
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
    {"action" , "QueryIProductionJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryIProductionJobResponse>();
}

/**
 * @param request QueryIProductionJobRequest
 * @return QueryIProductionJobResponse
 */
QueryIProductionJobResponse Client::queryIProductionJob(const QueryIProductionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryIProductionJobWithOptions(request, runtime);
}

/**
 * @summary Queries transcoding jobs at a time by job ID.
 *
 * @description *   By default, returned jobs are sorted in descending order by CreationTime.
 * *   You can call this operation to query up to 10 transcoding jobs at a time.
 * *   If you do not set the JobIds parameter, the `InvalidParameter` error code is returned.
 * ## QPS limit
 * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
 *
 * @param request QueryJobListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryJobListResponse
 */
QueryJobListResponse Client::queryJobListWithOptions(const QueryJobListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobIds()) {
    query["JobIds"] = request.jobIds();
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
    {"action" , "QueryJobList"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryJobListResponse>();
}

/**
 * @summary Queries transcoding jobs at a time by job ID.
 *
 * @description *   By default, returned jobs are sorted in descending order by CreationTime.
 * *   You can call this operation to query up to 10 transcoding jobs at a time.
 * *   If you do not set the JobIds parameter, the `InvalidParameter` error code is returned.
 * ## QPS limit
 * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
 *
 * @param request QueryJobListRequest
 * @return QueryJobListResponse
 */
QueryJobListResponse Client::queryJobList(const QueryJobListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryJobListWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a content moderation job.
 *
 * @description In the content moderation results, the moderation results of the video are sorted in ascending order by time into a timeline. If the video is long, the content moderation results are paginated, and the first page is returned. You can call this operation again to query the remaining moderation results of the video.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QueryMediaCensorJobDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMediaCensorJobDetailResponse
 */
QueryMediaCensorJobDetailResponse Client::queryMediaCensorJobDetailWithOptions(const QueryMediaCensorJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasMaximumPageSize()) {
    query["MaximumPageSize"] = request.maximumPageSize();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
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
    {"action" , "QueryMediaCensorJobDetail"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMediaCensorJobDetailResponse>();
}

/**
 * @summary Queries the information about a content moderation job.
 *
 * @description In the content moderation results, the moderation results of the video are sorted in ascending order by time into a timeline. If the video is long, the content moderation results are paginated, and the first page is returned. You can call this operation again to query the remaining moderation results of the video.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QueryMediaCensorJobDetailRequest
 * @return QueryMediaCensorJobDetailResponse
 */
QueryMediaCensorJobDetailResponse Client::queryMediaCensorJobDetail(const QueryMediaCensorJobDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMediaCensorJobDetailWithOptions(request, runtime);
}

/**
 * @summary Queries content moderation jobs.
 *
 * @description You can call this operation to query only the content moderation jobs within three months.
 * ### QPS limit
 * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QueryMediaCensorJobListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMediaCensorJobListResponse
 */
QueryMediaCensorJobListResponse Client::queryMediaCensorJobListWithOptions(const QueryMediaCensorJobListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndOfJobCreatedTimeRange()) {
    query["EndOfJobCreatedTimeRange"] = request.endOfJobCreatedTimeRange();
  }

  if (!!request.hasJobIds()) {
    query["JobIds"] = request.jobIds();
  }

  if (!!request.hasMaximumPageSize()) {
    query["MaximumPageSize"] = request.maximumPageSize();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStartOfJobCreatedTimeRange()) {
    query["StartOfJobCreatedTimeRange"] = request.startOfJobCreatedTimeRange();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMediaCensorJobList"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMediaCensorJobListResponse>();
}

/**
 * @summary Queries content moderation jobs.
 *
 * @description You can call this operation to query only the content moderation jobs within three months.
 * ### QPS limit
 * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QueryMediaCensorJobListRequest
 * @return QueryMediaCensorJobListResponse
 */
QueryMediaCensorJobListResponse Client::queryMediaCensorJobList(const QueryMediaCensorJobListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMediaCensorJobListWithOptions(request, runtime);
}

/**
 * @summary Queries the results of media information analysis jobs.
 *
 * @description *   In asynchronous mode, the media information can be retrieved only after the Message Service (MNS) callback of **submitting a media information job** is returned. If you have not retrieved the media information for a long period, the job may have failed.
 * *   You can call this operation to query up to 10 media information analysis jobs at a time.
 * *   By default, returned jobs are sorted in descending order by CreationTime.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QueryMediaInfoJobListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMediaInfoJobListResponse
 */
QueryMediaInfoJobListResponse Client::queryMediaInfoJobListWithOptions(const QueryMediaInfoJobListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaInfoJobIds()) {
    query["MediaInfoJobIds"] = request.mediaInfoJobIds();
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
    {"action" , "QueryMediaInfoJobList"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMediaInfoJobListResponse>();
}

/**
 * @summary Queries the results of media information analysis jobs.
 *
 * @description *   In asynchronous mode, the media information can be retrieved only after the Message Service (MNS) callback of **submitting a media information job** is returned. If you have not retrieved the media information for a long period, the job may have failed.
 * *   You can call this operation to query up to 10 media information analysis jobs at a time.
 * *   By default, returned jobs are sorted in descending order by CreationTime.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QueryMediaInfoJobListRequest
 * @return QueryMediaInfoJobListResponse
 */
QueryMediaInfoJobListResponse Client::queryMediaInfoJobList(const QueryMediaInfoJobListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMediaInfoJobListWithOptions(request, runtime);
}

/**
 * @summary Queries media files based on media file IDs.
 *
 * @description You can call this operation to query up to 10 media files at a time.
 * ## QPS limit
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limits](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
 *
 * @param request QueryMediaListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMediaListResponse
 */
QueryMediaListResponse Client::queryMediaListWithOptions(const QueryMediaListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIncludeMediaInfo()) {
    query["IncludeMediaInfo"] = request.includeMediaInfo();
  }

  if (!!request.hasIncludePlayList()) {
    query["IncludePlayList"] = request.includePlayList();
  }

  if (!!request.hasIncludeSnapshotList()) {
    query["IncludeSnapshotList"] = request.includeSnapshotList();
  }

  if (!!request.hasIncludeSummaryList()) {
    query["IncludeSummaryList"] = request.includeSummaryList();
  }

  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.mediaIds();
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
    {"action" , "QueryMediaList"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMediaListResponse>();
}

/**
 * @summary Queries media files based on media file IDs.
 *
 * @description You can call this operation to query up to 10 media files at a time.
 * ## QPS limit
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limits](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
 *
 * @param request QueryMediaListRequest
 * @return QueryMediaListResponse
 */
QueryMediaListResponse Client::queryMediaList(const QueryMediaListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMediaListWithOptions(request, runtime);
}

/**
 * @summary Queries media files based on their Object Storage Service (OSS) URLs.
 *
 * @description *   You can call this operation to query up to 10 media files at a time.
 * *   Before you call this operation, you must call the [AddMedia](https://help.aliyun.com/document_detail/44458.html) operation to add media files.
 * *   You can call this operation to query only media files that are processed in a workflow. To obtain comprehensive information about a media file that is newly uploaded to OSS, you can call this operation after the corresponding workflow is complete. To query media files that are not processed in a workflow, you must call the [SubmitMediaInfoJob](https://help.aliyun.com/document_detail/29220.html) operation to submit a media information analysis job. After the job is complete, you can query the information about the media files.
 * ## QPS limit
 * You can call this API operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limit](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
 *
 * @param request QueryMediaListByURLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMediaListByURLResponse
 */
QueryMediaListByURLResponse Client::queryMediaListByURLWithOptions(const QueryMediaListByURLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileURLs()) {
    query["FileURLs"] = request.fileURLs();
  }

  if (!!request.hasIncludeMediaInfo()) {
    query["IncludeMediaInfo"] = request.includeMediaInfo();
  }

  if (!!request.hasIncludePlayList()) {
    query["IncludePlayList"] = request.includePlayList();
  }

  if (!!request.hasIncludeSnapshotList()) {
    query["IncludeSnapshotList"] = request.includeSnapshotList();
  }

  if (!!request.hasIncludeSummaryList()) {
    query["IncludeSummaryList"] = request.includeSummaryList();
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
    {"action" , "QueryMediaListByURL"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMediaListByURLResponse>();
}

/**
 * @summary Queries media files based on their Object Storage Service (OSS) URLs.
 *
 * @description *   You can call this operation to query up to 10 media files at a time.
 * *   Before you call this operation, you must call the [AddMedia](https://help.aliyun.com/document_detail/44458.html) operation to add media files.
 * *   You can call this operation to query only media files that are processed in a workflow. To obtain comprehensive information about a media file that is newly uploaded to OSS, you can call this operation after the corresponding workflow is complete. To query media files that are not processed in a workflow, you must call the [SubmitMediaInfoJob](https://help.aliyun.com/document_detail/29220.html) operation to submit a media information analysis job. After the job is complete, you can query the information about the media files.
 * ## QPS limit
 * You can call this API operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limit](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
 *
 * @param request QueryMediaListByURLRequest
 * @return QueryMediaListByURLResponse
 */
QueryMediaListByURLResponse Client::queryMediaListByURL(const QueryMediaListByURLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMediaListByURLWithOptions(request, runtime);
}

/**
 * @summary Queries media workflow execution instances.
 *
 * @description *   You can call this operation to query a maximum of 10 media workflow execution instances at a time.
 * *   Before you call this operation, make sure that the workflow pipeline is enabled. Otherwise, the workflow may not run as expected. For example, the following exceptions may occur: the workflow node is invalid and jobs created in the workflow cannot be executed.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QueryMediaWorkflowExecutionListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMediaWorkflowExecutionListResponse
 */
QueryMediaWorkflowExecutionListResponse Client::queryMediaWorkflowExecutionListWithOptions(const QueryMediaWorkflowExecutionListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasRunIds()) {
    query["RunIds"] = request.runIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMediaWorkflowExecutionList"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMediaWorkflowExecutionListResponse>();
}

/**
 * @summary Queries media workflow execution instances.
 *
 * @description *   You can call this operation to query a maximum of 10 media workflow execution instances at a time.
 * *   Before you call this operation, make sure that the workflow pipeline is enabled. Otherwise, the workflow may not run as expected. For example, the following exceptions may occur: the workflow node is invalid and jobs created in the workflow cannot be executed.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QueryMediaWorkflowExecutionListRequest
 * @return QueryMediaWorkflowExecutionListResponse
 */
QueryMediaWorkflowExecutionListResponse Client::queryMediaWorkflowExecutionList(const QueryMediaWorkflowExecutionListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMediaWorkflowExecutionListWithOptions(request, runtime);
}

/**
 * @summary Queries registered media workflows.
 *
 * @description You can call this operation to query up to 10 media workflows at a time.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QueryMediaWorkflowListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMediaWorkflowListResponse
 */
QueryMediaWorkflowListResponse Client::queryMediaWorkflowListWithOptions(const QueryMediaWorkflowListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaWorkflowIds()) {
    query["MediaWorkflowIds"] = request.mediaWorkflowIds();
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
    {"action" , "QueryMediaWorkflowList"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMediaWorkflowListResponse>();
}

/**
 * @summary Queries registered media workflows.
 *
 * @description You can call this operation to query up to 10 media workflows at a time.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QueryMediaWorkflowListRequest
 * @return QueryMediaWorkflowListResponse
 */
QueryMediaWorkflowListResponse Client::queryMediaWorkflowList(const QueryMediaWorkflowListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMediaWorkflowListWithOptions(request, runtime);
}

/**
 * @summary Queries an ApsaraVideo Media Processing (MPS) queue by using the ID of the queue.
 *
 * @description *   You can call this operation to query up to 10 MPS queues at a time.
 * *   If `"Code": "InvalidIdentity.ServiceDisabled","Message": "The request identity was not allowed operated.","Recommend"` is returned after you call this operation, check whether the RAM user that you use is assigned the AliyunMTSDefaultRole role to obtain the permissions on MPS and whether your Alibaba Cloud account has overdue payments.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QueryPipelineListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPipelineListResponse
 */
QueryPipelineListResponse Client::queryPipelineListWithOptions(const QueryPipelineListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPipelineIds()) {
    query["PipelineIds"] = request.pipelineIds();
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
    {"action" , "QueryPipelineList"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPipelineListResponse>();
}

/**
 * @summary Queries an ApsaraVideo Media Processing (MPS) queue by using the ID of the queue.
 *
 * @description *   You can call this operation to query up to 10 MPS queues at a time.
 * *   If `"Code": "InvalidIdentity.ServiceDisabled","Message": "The request identity was not allowed operated.","Recommend"` is returned after you call this operation, check whether the RAM user that you use is assigned the AliyunMTSDefaultRole role to obtain the permissions on MPS and whether your Alibaba Cloud account has overdue payments.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QueryPipelineListRequest
 * @return QueryPipelineListResponse
 */
QueryPipelineListResponse Client::queryPipelineList(const QueryPipelineListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPipelineListWithOptions(request, runtime);
}

/**
 * @summary 查询智能标签任务
 *
 * @param request QuerySmarttagJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySmarttagJobResponse
 */
QuerySmarttagJobResponse Client::querySmarttagJobWithOptions(const QuerySmarttagJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
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
    {"action" , "QuerySmarttagJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySmarttagJobResponse>();
}

/**
 * @summary 查询智能标签任务
 *
 * @param request QuerySmarttagJobRequest
 * @return QuerySmarttagJobResponse
 */
QuerySmarttagJobResponse Client::querySmarttagJob(const QuerySmarttagJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySmarttagJobWithOptions(request, runtime);
}

/**
 * @summary Queries the analysis template of a smart tagging job.
 *
 * @description If you call this operation to query the information about a smart tagging template, you must specify the template ID. Otherwise, the operation returns the information about all the templates that are created by the current RAM user.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QuerySmarttagTemplateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySmarttagTemplateListResponse
 */
QuerySmarttagTemplateListResponse Client::querySmarttagTemplateListWithOptions(const QuerySmarttagTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySmarttagTemplateList"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySmarttagTemplateListResponse>();
}

/**
 * @summary Queries the analysis template of a smart tagging job.
 *
 * @description If you call this operation to query the information about a smart tagging template, you must specify the template ID. Otherwise, the operation returns the information about all the templates that are created by the current RAM user.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QuerySmarttagTemplateListRequest
 * @return QuerySmarttagTemplateListResponse
 */
QuerySmarttagTemplateListResponse Client::querySmarttagTemplateList(const QuerySmarttagTemplateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySmarttagTemplateListWithOptions(request, runtime);
}

/**
 * @summary Queries snapshot jobs.
 *
 * @description The status of the snapshot jobs that you want to query.
 * *   **Submitted**: The job was submitted.
 * *   **Snapshoting**: The job is being processed.
 * *   **Success**: The job was successfully processed.
 * *   **Fail**: The job failed.
 *
 * @param request QuerySnapshotJobListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySnapshotJobListResponse
 */
QuerySnapshotJobListResponse Client::querySnapshotJobListWithOptions(const QuerySnapshotJobListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndOfJobCreatedTimeRange()) {
    query["EndOfJobCreatedTimeRange"] = request.endOfJobCreatedTimeRange();
  }

  if (!!request.hasMaximumPageSize()) {
    query["MaximumPageSize"] = request.maximumPageSize();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSnapshotJobIds()) {
    query["SnapshotJobIds"] = request.snapshotJobIds();
  }

  if (!!request.hasStartOfJobCreatedTimeRange()) {
    query["StartOfJobCreatedTimeRange"] = request.startOfJobCreatedTimeRange();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySnapshotJobList"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySnapshotJobListResponse>();
}

/**
 * @summary Queries snapshot jobs.
 *
 * @description The status of the snapshot jobs that you want to query.
 * *   **Submitted**: The job was submitted.
 * *   **Snapshoting**: The job is being processed.
 * *   **Success**: The job was successfully processed.
 * *   **Fail**: The job failed.
 *
 * @param request QuerySnapshotJobListRequest
 * @return QuerySnapshotJobListResponse
 */
QuerySnapshotJobListResponse Client::querySnapshotJobList(const QuerySnapshotJobListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySnapshotJobListWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to query up to 10 transcoding templates at a time.
 *
 * @description The IDs of the transcoding templates that you want to query. You can query up to 10 transcoding templates at a time. Separate multiple IDs of custom transcoding templates with commas (,).
 *
 * @param request QueryTemplateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTemplateListResponse
 */
QueryTemplateListResponse Client::queryTemplateListWithOptions(const QueryTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasTemplateIds()) {
    query["TemplateIds"] = request.templateIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTemplateList"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTemplateListResponse>();
}

/**
 * @summary You can call this operation to query up to 10 transcoding templates at a time.
 *
 * @description The IDs of the transcoding templates that you want to query. You can query up to 10 transcoding templates at a time. Separate multiple IDs of custom transcoding templates with commas (,).
 *
 * @param request QueryTemplateListRequest
 * @return QueryTemplateListResponse
 */
QueryTemplateListResponse Client::queryTemplateList(const QueryTemplateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTemplateListWithOptions(request, runtime);
}

/**
 * @summary 查询视频溯源水印ab流任务
 *
 * @param request QueryTraceAbJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTraceAbJobResponse
 */
QueryTraceAbJobResponse Client::queryTraceAbJobWithOptions(const QueryTraceAbJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTraceAbJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTraceAbJobResponse>();
}

/**
 * @summary 查询视频溯源水印ab流任务
 *
 * @param request QueryTraceAbJobRequest
 * @return QueryTraceAbJobResponse
 */
QueryTraceAbJobResponse Client::queryTraceAbJob(const QueryTraceAbJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTraceAbJobWithOptions(request, runtime);
}

/**
 * @summary 查询溯源水印提取任务
 *
 * @param request QueryTraceExtractJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTraceExtractJobResponse
 */
QueryTraceExtractJobResponse Client::queryTraceExtractJobWithOptions(const QueryTraceExtractJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTraceExtractJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTraceExtractJobResponse>();
}

/**
 * @summary 查询溯源水印提取任务
 *
 * @param request QueryTraceExtractJobRequest
 * @return QueryTraceExtractJobResponse
 */
QueryTraceExtractJobResponse Client::queryTraceExtractJob(const QueryTraceExtractJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTraceExtractJobWithOptions(request, runtime);
}

/**
 * @summary 查询视频溯源水印m3u8任务
 *
 * @param request QueryTraceM3u8JobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTraceM3u8JobResponse
 */
QueryTraceM3u8JobResponse Client::queryTraceM3u8JobWithOptions(const QueryTraceM3u8JobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateTimeEnd()) {
    query["CreateTimeEnd"] = request.createTimeEnd();
  }

  if (!!request.hasCreateTimeStart()) {
    query["CreateTimeStart"] = request.createTimeStart();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
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
    {"action" , "QueryTraceM3u8Job"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTraceM3u8JobResponse>();
}

/**
 * @summary 查询视频溯源水印m3u8任务
 *
 * @param request QueryTraceM3u8JobRequest
 * @return QueryTraceM3u8JobResponse
 */
QueryTraceM3u8JobResponse Client::queryTraceM3u8Job(const QueryTraceM3u8JobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTraceM3u8JobWithOptions(request, runtime);
}

/**
 * @summary Queries watermark templates.
 *
 * @description You can call this operation to query up to 10 watermark templates at a time.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QueryWaterMarkTemplateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryWaterMarkTemplateListResponse
 */
QueryWaterMarkTemplateListResponse Client::queryWaterMarkTemplateListWithOptions(const QueryWaterMarkTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasWaterMarkTemplateIds()) {
    query["WaterMarkTemplateIds"] = request.waterMarkTemplateIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryWaterMarkTemplateList"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryWaterMarkTemplateListResponse>();
}

/**
 * @summary Queries watermark templates.
 *
 * @description You can call this operation to query up to 10 watermark templates at a time.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request QueryWaterMarkTemplateListRequest
 * @return QueryWaterMarkTemplateListResponse
 */
QueryWaterMarkTemplateListResponse Client::queryWaterMarkTemplateList(const QueryWaterMarkTemplateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryWaterMarkTemplateListWithOptions(request, runtime);
}

/**
 * @summary Registers a custom face.
 *
 * @description *   You can call this operation to register only one custom face at a time.
 * *   A maximum of 10 images can be registered for a custom face.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request RegisterCustomFaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterCustomFaceResponse
 */
RegisterCustomFaceResponse Client::registerCustomFaceWithOptions(const RegisterCustomFaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.categoryId();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.imageUrl();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPersonId()) {
    query["PersonId"] = request.personId();
  }

  if (!!request.hasPersonName()) {
    query["PersonName"] = request.personName();
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
    {"action" , "RegisterCustomFace"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterCustomFaceResponse>();
}

/**
 * @summary Registers a custom face.
 *
 * @description *   You can call this operation to register only one custom face at a time.
 * *   A maximum of 10 images can be registered for a custom face.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request RegisterCustomFaceRequest
 * @return RegisterCustomFaceResponse
 */
RegisterCustomFaceResponse Client::registerCustomFace(const RegisterCustomFaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerCustomFaceWithOptions(request, runtime);
}

/**
 * @summary 注册自定义实体项
 *
 * @param request RegisterCustomViewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterCustomViewResponse
 */
RegisterCustomViewResponse Client::registerCustomViewWithOptions(const RegisterCustomViewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasCustomEntityId()) {
    query["CustomEntityId"] = request.customEntityId();
  }

  if (!!request.hasCustomGroupId()) {
    query["CustomGroupId"] = request.customGroupId();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.imageUrl();
  }

  if (!!request.hasLabelPrompt()) {
    query["LabelPrompt"] = request.labelPrompt();
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
    {"action" , "RegisterCustomView"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterCustomViewResponse>();
}

/**
 * @summary 注册自定义实体项
 *
 * @param request RegisterCustomViewRequest
 * @return RegisterCustomViewResponse
 */
RegisterCustomViewResponse Client::registerCustomView(const RegisterCustomViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerCustomViewWithOptions(request, runtime);
}

/**
 * @summary Queries media workflows in the specified state.
 *
 * @description You can call this operation to query media workflows in the specified state. If you do not specify the state, all media workflows are queried by default.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SearchMediaWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMediaWorkflowResponse
 */
SearchMediaWorkflowResponse Client::searchMediaWorkflowWithOptions(const SearchMediaWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasStateList()) {
    query["StateList"] = request.stateList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchMediaWorkflow"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchMediaWorkflowResponse>();
}

/**
 * @summary Queries media workflows in the specified state.
 *
 * @description You can call this operation to query media workflows in the specified state. If you do not specify the state, all media workflows are queried by default.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SearchMediaWorkflowRequest
 * @return SearchMediaWorkflowResponse
 */
SearchMediaWorkflowResponse Client::searchMediaWorkflow(const SearchMediaWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMediaWorkflowWithOptions(request, runtime);
}

/**
 * @summary Searches for ApsaraVideo Media Processing (MPS) queues in the specified state.
 *
 * @description You can call this operation to query MPS queues in the specified state. If you do not specify the state, all MPS queues are queried by default.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SearchPipelineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchPipelineResponse
 */
SearchPipelineResponse Client::searchPipelineWithOptions(const SearchPipelineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchPipeline"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchPipelineResponse>();
}

/**
 * @summary Searches for ApsaraVideo Media Processing (MPS) queues in the specified state.
 *
 * @description You can call this operation to query MPS queues in the specified state. If you do not specify the state, all MPS queues are queried by default.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SearchPipelineRequest
 * @return SearchPipelineResponse
 */
SearchPipelineResponse Client::searchPipeline(const SearchPipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchPipelineWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to query custom transcoding templates in the specified state.
 *
 * @description You can call this operation up to 100 times per second. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SearchTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchTemplateResponse
 */
SearchTemplateResponse Client::searchTemplateWithOptions(const SearchTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamePrefix()) {
    query["NamePrefix"] = request.namePrefix();
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchTemplate"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchTemplateResponse>();
}

/**
 * @summary You can call this operation to query custom transcoding templates in the specified state.
 *
 * @description You can call this operation up to 100 times per second. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SearchTemplateRequest
 * @return SearchTemplateResponse
 */
SearchTemplateResponse Client::searchTemplate(const SearchTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchTemplateWithOptions(request, runtime);
}

/**
 * @summary Searches for watermark templates.
 *
 * @description The total number of returned entries.
 *
 * @param request SearchWaterMarkTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchWaterMarkTemplateResponse
 */
SearchWaterMarkTemplateResponse Client::searchWaterMarkTemplateWithOptions(const SearchWaterMarkTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchWaterMarkTemplate"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchWaterMarkTemplateResponse>();
}

/**
 * @summary Searches for watermark templates.
 *
 * @description The total number of returned entries.
 *
 * @param request SearchWaterMarkTemplateRequest
 * @return SearchWaterMarkTemplateResponse
 */
SearchWaterMarkTemplateResponse Client::searchWaterMarkTemplate(const SearchWaterMarkTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchWaterMarkTemplateWithOptions(request, runtime);
}

/**
 * @summary Submits a preset template analysis job.
 *
 * @description *   After you call the SubmitAnalysisJob operation to submit a preset template analysis job, ApsaraVideo Media Processing (MPS) intelligently analyzes the input file of the job and recommends a suitable preset template. You can call the [QueryAnalysisJobList](https://help.aliyun.com/document_detail/29224.html) operation to query the analysis result or enable asynchronous notifications to receive the analysis result.
 * *   The analysis result is retained only for two weeks after it is generated. The analysis result is deleted after two weeks. If you use the recommended preset template in a transcoding job after two weeks, the job fails, and the `AnalysisResultNotFound` error code is returned.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SubmitAnalysisJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAnalysisJobResponse
 */
SubmitAnalysisJobResponse Client::submitAnalysisJobWithOptions(const SubmitAnalysisJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnalysisConfig()) {
    query["AnalysisConfig"] = request.analysisConfig();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.input();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitAnalysisJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAnalysisJobResponse>();
}

/**
 * @summary Submits a preset template analysis job.
 *
 * @description *   After you call the SubmitAnalysisJob operation to submit a preset template analysis job, ApsaraVideo Media Processing (MPS) intelligently analyzes the input file of the job and recommends a suitable preset template. You can call the [QueryAnalysisJobList](https://help.aliyun.com/document_detail/29224.html) operation to query the analysis result or enable asynchronous notifications to receive the analysis result.
 * *   The analysis result is retained only for two weeks after it is generated. The analysis result is deleted after two weeks. If you use the recommended preset template in a transcoding job after two weeks, the job fails, and the `AnalysisResultNotFound` error code is returned.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SubmitAnalysisJobRequest
 * @return SubmitAnalysisJobResponse
 */
SubmitAnalysisJobResponse Client::submitAnalysisJob(const SubmitAnalysisJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAnalysisJobWithOptions(request, runtime);
}

/**
 * @summary 提交版权水印提取任务
 *
 * @param request SubmitCopyrightExtractJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitCopyrightExtractJobResponse
 */
SubmitCopyrightExtractJobResponse Client::submitCopyrightExtractJobWithOptions(const SubmitCopyrightExtractJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallBack()) {
    query["CallBack"] = request.callBack();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.input();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitCopyrightExtractJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitCopyrightExtractJobResponse>();
}

/**
 * @summary 提交版权水印提取任务
 *
 * @param request SubmitCopyrightExtractJobRequest
 * @return SubmitCopyrightExtractJobResponse
 */
SubmitCopyrightExtractJobResponse Client::submitCopyrightExtractJob(const SubmitCopyrightExtractJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitCopyrightExtractJobWithOptions(request, runtime);
}

/**
 * @summary 提交视频版权水印
 *
 * @param request SubmitCopyrightJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitCopyrightJobResponse
 */
SubmitCopyrightJobResponse Client::submitCopyrightJobWithOptions(const SubmitCopyrightJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallBack()) {
    query["CallBack"] = request.callBack();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.input();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.level();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.message();
  }

  if (!!request.hasOutput()) {
    query["Output"] = request.output();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTotalTime()) {
    query["TotalTime"] = request.totalTime();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitCopyrightJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitCopyrightJobResponse>();
}

/**
 * @summary 提交视频版权水印
 *
 * @param request SubmitCopyrightJobRequest
 * @return SubmitCopyrightJobResponse
 */
SubmitCopyrightJobResponse Client::submitCopyrightJob(const SubmitCopyrightJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitCopyrightJobWithOptions(request, runtime);
}

/**
 * @summary Submits a job of clearing or deleting a media fingerprint library.
 *
 * @description You can call this operation to clear or delete the specified media fingerprint library based on the library ID. If you clear a media fingerprint library, the content in the library is deleted, but the library is not deleted. If you delete a media fingerprint library, both the library and the content in the library are deleted. If you do not specify the operation type, the system clears the media fingerprint library by default.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SubmitFpDBDeleteJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitFpDBDeleteJobResponse
 */
SubmitFpDBDeleteJobResponse Client::submitFpDBDeleteJobWithOptions(const SubmitFpDBDeleteJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDelType()) {
    query["DelType"] = request.delType();
  }

  if (!!request.hasFpDBId()) {
    query["FpDBId"] = request.fpDBId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitFpDBDeleteJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitFpDBDeleteJobResponse>();
}

/**
 * @summary Submits a job of clearing or deleting a media fingerprint library.
 *
 * @description You can call this operation to clear or delete the specified media fingerprint library based on the library ID. If you clear a media fingerprint library, the content in the library is deleted, but the library is not deleted. If you delete a media fingerprint library, both the library and the content in the library are deleted. If you do not specify the operation type, the system clears the media fingerprint library by default.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SubmitFpDBDeleteJobRequest
 * @return SubmitFpDBDeleteJobResponse
 */
SubmitFpDBDeleteJobResponse Client::submitFpDBDeleteJob(const SubmitFpDBDeleteJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitFpDBDeleteJobWithOptions(request, runtime);
}

/**
 * @summary Submits a job of deleting media files from a media fingerprint library.
 *
 * @description ## [](#)Limits
 * *   You can call this operation to delete up to 200 media files from a media fingerprint library at a time.
 * *   This operation is available in the following regions: China (Beijing), China (Hangzhou), China (Shanghai), and Singapore.
 * ## [](#qps-)QPS limits
 * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SubmitFpFileDeleteJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitFpFileDeleteJobResponse
 */
SubmitFpFileDeleteJobResponse Client::submitFpFileDeleteJobWithOptions(const SubmitFpFileDeleteJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileIds()) {
    query["FileIds"] = request.fileIds();
  }

  if (!!request.hasFpDBId()) {
    query["FpDBId"] = request.fpDBId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  if (!!request.hasPrimaryKeys()) {
    query["PrimaryKeys"] = request.primaryKeys();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitFpFileDeleteJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitFpFileDeleteJobResponse>();
}

/**
 * @summary Submits a job of deleting media files from a media fingerprint library.
 *
 * @description ## [](#)Limits
 * *   You can call this operation to delete up to 200 media files from a media fingerprint library at a time.
 * *   This operation is available in the following regions: China (Beijing), China (Hangzhou), China (Shanghai), and Singapore.
 * ## [](#qps-)QPS limits
 * You can call this operation up to 10 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SubmitFpFileDeleteJobRequest
 * @return SubmitFpFileDeleteJobResponse
 */
SubmitFpFileDeleteJobResponse Client::submitFpFileDeleteJob(const SubmitFpFileDeleteJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitFpFileDeleteJobWithOptions(request, runtime);
}

/**
 * @summary Submits a media fingerprint analysis job to query the media fingerprint repository for a media file with the identical or similar fingerprint as the input file.
 *
 * @description *   You can call this operation to submit a video, audio, image, or text fingerprint analysis job.
 * *   This operation asynchronously submits a job. The query results may not have been generated when the response is returned. After the results are generated, an asynchronous message is returned.
 * *   You can submit a text fingerprint analysis job only in the China (Shanghai) region.
 * *   The input file of the job must be in one of the following formats:
 *     *   Image formats: JPEG, PNG, and BMP.
 *     *   Video formats: MP4, AVI, MKV, MPG, TS, MOV, FLV, MXF.
 *     *   Video encoding formats: MPEG2, MPEG4, H264, HEVC, and WMV.
 * ### QPS limit
 * You can call this operation up to 150 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SubmitFpShotJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitFpShotJobResponse
 */
SubmitFpShotJobResponse Client::submitFpShotJobWithOptions(const SubmitFpShotJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFpShotConfig()) {
    query["FpShotConfig"] = request.fpShotConfig();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.input();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitFpShotJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitFpShotJobResponse>();
}

/**
 * @summary Submits a media fingerprint analysis job to query the media fingerprint repository for a media file with the identical or similar fingerprint as the input file.
 *
 * @description *   You can call this operation to submit a video, audio, image, or text fingerprint analysis job.
 * *   This operation asynchronously submits a job. The query results may not have been generated when the response is returned. After the results are generated, an asynchronous message is returned.
 * *   You can submit a text fingerprint analysis job only in the China (Shanghai) region.
 * *   The input file of the job must be in one of the following formats:
 *     *   Image formats: JPEG, PNG, and BMP.
 *     *   Video formats: MP4, AVI, MKV, MPG, TS, MOV, FLV, MXF.
 *     *   Video encoding formats: MPEG2, MPEG4, H264, HEVC, and WMV.
 * ### QPS limit
 * You can call this operation up to 150 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SubmitFpShotJobRequest
 * @return SubmitFpShotJobResponse
 */
SubmitFpShotJobResponse Client::submitFpShotJob(const SubmitFpShotJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitFpShotJobWithOptions(request, runtime);
}

/**
 * @description *   Jobs that are submitted by calling this operation run in an asynchronous manner. After a job is added to the ApsaraVideo Media Processing (MPS) queue, the job is scheduled to run. You can call the [QueryIProductionJob](https://help.aliyun.com/document_detail/170217.html) operation or configure a callback to query the job result.
 * *   Capabilities provided by the intelligent production feature vary based on the region. Before you call this operation to submit an intelligent production job, check whether the job is supported in the region in which your service is activated. For more information, see [Regions and endpoints](https://help.aliyun.com/document_detail/43248.html).
 * ### [](#qps)QPS limit
 * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SubmitIProductionJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitIProductionJobResponse
 */
SubmitIProductionJobResponse Client::submitIProductionJobWithOptions(const SubmitIProductionJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFunctionName()) {
    query["FunctionName"] = request.functionName();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.input();
  }

  if (!!request.hasJobParams()) {
    query["JobParams"] = request.jobParams();
  }

  if (!!request.hasModelId()) {
    query["ModelId"] = request.modelId();
  }

  if (!!request.hasNotifyUrl()) {
    query["NotifyUrl"] = request.notifyUrl();
  }

  if (!!request.hasOutput()) {
    query["Output"] = request.output();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasScheduleParams()) {
    query["ScheduleParams"] = request.scheduleParams();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitIProductionJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitIProductionJobResponse>();
}

/**
 * @description *   Jobs that are submitted by calling this operation run in an asynchronous manner. After a job is added to the ApsaraVideo Media Processing (MPS) queue, the job is scheduled to run. You can call the [QueryIProductionJob](https://help.aliyun.com/document_detail/170217.html) operation or configure a callback to query the job result.
 * *   Capabilities provided by the intelligent production feature vary based on the region. Before you call this operation to submit an intelligent production job, check whether the job is supported in the region in which your service is activated. For more information, see [Regions and endpoints](https://help.aliyun.com/document_detail/43248.html).
 * ### [](#qps)QPS limit
 * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SubmitIProductionJobRequest
 * @return SubmitIProductionJobResponse
 */
SubmitIProductionJobResponse Client::submitIProductionJob(const SubmitIProductionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitIProductionJobWithOptions(request, runtime);
}

/**
 * @summary 提交图片版权水印任务
 *
 * @param request SubmitImageCopyrightRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitImageCopyrightResponse
 */
SubmitImageCopyrightResponse Client::submitImageCopyrightWithOptions(const SubmitImageCopyrightRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMessage()) {
    query["Message"] = request.message();
  }

  if (!!request.hasOutput()) {
    query["Output"] = request.output();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitImageCopyright"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitImageCopyrightResponse>();
}

/**
 * @summary 提交图片版权水印任务
 *
 * @param request SubmitImageCopyrightRequest
 * @return SubmitImageCopyrightResponse
 */
SubmitImageCopyrightResponse Client::submitImageCopyright(const SubmitImageCopyrightRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitImageCopyrightWithOptions(request, runtime);
}

/**
 * @summary Submits transcoding jobs. If the transcoding jobs and workflows created in the ApsaraVideo Media Processing (MPS) console cannot meet your business requirements, you can call the SubmitJobs operation to submit transcoding jobs. Specify transcoding parameters as required when you call the SubmitJobs operation.
 *
 * @description *   SubmitJobs is an asynchronous operation. After you submit transcoding jobs, the jobs are added to an MPS queue to be scheduled and run. The transcoding jobs may not have been complete when the response is returned. After you call this operation, you can call the [QueryJobList](https://help.aliyun.com/document_detail/602836.html) operation to query the job results. You can also associate a Message Service (MNS) queue or topic with the MPS queue to receive notifications on the jobs. For more information, see [Receive notifications](https://help.aliyun.com/document_detail/42618.html).
 * *   An input file can be up to 100 GB in size. If the size of the input file exceeds this limit, the job may fail.
 * *   If you use an **intelligent preset template** to transcode an input file, you must first call the [SubmitAnalysisJob](https://help.aliyun.com/document_detail/29223.html) operation to submit a preset template analysis job. After the analysis job is complete, you can call the [QueryAnalysisJobList](https://help.aliyun.com/document_detail/29224.html)operation to obtain the available preset templates for the input file. When you submit a transcoding job, set TemplateId to the ID of an available preset template. If you specify a preset template that is not in the available preset templates, the transcoding job fails.
 * *   If you use a **static preset template** to transcode an input file, you do not need to submit a preset template analysis job.
 * *   If you want to use multiple accounts in MPS, you can create Resource Access Management (RAM) users by using your Alibaba Cloud account. For more information, see [Create a RAM user and grant permissions to the RAM user](https://help.aliyun.com/document_detail/42841.html). If the Alibaba Cloud account that is used to query transcoding jobs is not the one that is used to submit the transcoding jobs, no data is returned.
 * *   For information about transcoding FAQ, see [FAQ about MPS](https://help.aliyun.com/document_detail/38986.html).
 * ### [](#qps)QPS limits
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SubmitJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitJobsResponse
 */
SubmitJobsResponse Client::submitJobsWithOptions(const SubmitJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInput()) {
    query["Input"] = request.input();
  }

  if (!!request.hasOutputBucket()) {
    query["OutputBucket"] = request.outputBucket();
  }

  if (!!request.hasOutputLocation()) {
    query["OutputLocation"] = request.outputLocation();
  }

  if (!!request.hasOutputs()) {
    query["Outputs"] = request.outputs();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
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
    {"action" , "SubmitJobs"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitJobsResponse>();
}

/**
 * @summary Submits transcoding jobs. If the transcoding jobs and workflows created in the ApsaraVideo Media Processing (MPS) console cannot meet your business requirements, you can call the SubmitJobs operation to submit transcoding jobs. Specify transcoding parameters as required when you call the SubmitJobs operation.
 *
 * @description *   SubmitJobs is an asynchronous operation. After you submit transcoding jobs, the jobs are added to an MPS queue to be scheduled and run. The transcoding jobs may not have been complete when the response is returned. After you call this operation, you can call the [QueryJobList](https://help.aliyun.com/document_detail/602836.html) operation to query the job results. You can also associate a Message Service (MNS) queue or topic with the MPS queue to receive notifications on the jobs. For more information, see [Receive notifications](https://help.aliyun.com/document_detail/42618.html).
 * *   An input file can be up to 100 GB in size. If the size of the input file exceeds this limit, the job may fail.
 * *   If you use an **intelligent preset template** to transcode an input file, you must first call the [SubmitAnalysisJob](https://help.aliyun.com/document_detail/29223.html) operation to submit a preset template analysis job. After the analysis job is complete, you can call the [QueryAnalysisJobList](https://help.aliyun.com/document_detail/29224.html)operation to obtain the available preset templates for the input file. When you submit a transcoding job, set TemplateId to the ID of an available preset template. If you specify a preset template that is not in the available preset templates, the transcoding job fails.
 * *   If you use a **static preset template** to transcode an input file, you do not need to submit a preset template analysis job.
 * *   If you want to use multiple accounts in MPS, you can create Resource Access Management (RAM) users by using your Alibaba Cloud account. For more information, see [Create a RAM user and grant permissions to the RAM user](https://help.aliyun.com/document_detail/42841.html). If the Alibaba Cloud account that is used to query transcoding jobs is not the one that is used to submit the transcoding jobs, no data is returned.
 * *   For information about transcoding FAQ, see [FAQ about MPS](https://help.aliyun.com/document_detail/38986.html).
 * ### [](#qps)QPS limits
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SubmitJobsRequest
 * @return SubmitJobsResponse
 */
SubmitJobsResponse Client::submitJobs(const SubmitJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitJobsWithOptions(request, runtime);
}

/**
 * @summary Submits a content moderation job.
 *
 * @description The job that you submit by calling this operation is run in asynchronous mode. The job is added to an ApsaraVideo Media Processing (MPS) queue and then scheduled, queued, and run. You can call the [QueryMediaCensorJobDetail](https://help.aliyun.com/document_detail/91779.html) operation or configure an asynchronous notification to obtain the job result.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SubmitMediaCensorJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitMediaCensorJobResponse
 */
SubmitMediaCensorJobResponse Client::submitMediaCensorJobWithOptions(const SubmitMediaCensorJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBarrages()) {
    query["Barrages"] = request.barrages();
  }

  if (!!request.hasCoverImages()) {
    query["CoverImages"] = request.coverImages();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasExternalUrl()) {
    query["ExternalUrl"] = request.externalUrl();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.input();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  if (!!request.hasVideoCensorConfig()) {
    query["VideoCensorConfig"] = request.videoCensorConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitMediaCensorJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitMediaCensorJobResponse>();
}

/**
 * @summary Submits a content moderation job.
 *
 * @description The job that you submit by calling this operation is run in asynchronous mode. The job is added to an ApsaraVideo Media Processing (MPS) queue and then scheduled, queued, and run. You can call the [QueryMediaCensorJobDetail](https://help.aliyun.com/document_detail/91779.html) operation or configure an asynchronous notification to obtain the job result.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SubmitMediaCensorJobRequest
 * @return SubmitMediaCensorJobResponse
 */
SubmitMediaCensorJobResponse Client::submitMediaCensorJob(const SubmitMediaCensorJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitMediaCensorJobWithOptions(request, runtime);
}

/**
 * @summary Submits a media information analysis job.
 *
 * @description *   Before you submit a media information analysis job, make sure that the input file is uploaded to an Object Storage Service (OSS) bucket. Otherwise, the job fails. You can configure upload callbacks to be notified of the upload status of files.****
 * *   A media information analysis job can be run in synchronous or asynchronous mode.
 * *   In asynchronous mode, the media information analysis job is submitted to and scheduled in an ApsaraVideo Media Processing (MPS) queue. In this case, the media information analysis job may be queued. The media information analysis job may not be generated when the response to the SubmitMediaInfoJob operation is returned. After the execution is complete, you can call the [QueryMediaInfoJobList](https://help.aliyun.com/document_detail/602828.html) operation to poll the execution results, or associate a Message Service (MNS) queue or topic with the MPS queue to receive the execution results. For more information, see [Receive message notifications](https://www.alibabacloud.com/help/en/mps/receive-message-notifications/?spm=a2c63.p38356.0.0.b48576d2jxNSca).
 * ### QPS limits
 * You can call this operation up to 50 times per second per account. If the number of requests that you send to call this operation within one second reaches the request limit of this operation, new requests fail and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SubmitMediaInfoJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitMediaInfoJobResponse
 */
SubmitMediaInfoJobResponse Client::submitMediaInfoJobWithOptions(const SubmitMediaInfoJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAsync()) {
    query["Async"] = request.async();
  }

  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.input();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitMediaInfoJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitMediaInfoJobResponse>();
}

/**
 * @summary Submits a media information analysis job.
 *
 * @description *   Before you submit a media information analysis job, make sure that the input file is uploaded to an Object Storage Service (OSS) bucket. Otherwise, the job fails. You can configure upload callbacks to be notified of the upload status of files.****
 * *   A media information analysis job can be run in synchronous or asynchronous mode.
 * *   In asynchronous mode, the media information analysis job is submitted to and scheduled in an ApsaraVideo Media Processing (MPS) queue. In this case, the media information analysis job may be queued. The media information analysis job may not be generated when the response to the SubmitMediaInfoJob operation is returned. After the execution is complete, you can call the [QueryMediaInfoJobList](https://help.aliyun.com/document_detail/602828.html) operation to poll the execution results, or associate a Message Service (MNS) queue or topic with the MPS queue to receive the execution results. For more information, see [Receive message notifications](https://www.alibabacloud.com/help/en/mps/receive-message-notifications/?spm=a2c63.p38356.0.0.b48576d2jxNSca).
 * ### QPS limits
 * You can call this operation up to 50 times per second per account. If the number of requests that you send to call this operation within one second reaches the request limit of this operation, new requests fail and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SubmitMediaInfoJobRequest
 * @return SubmitMediaInfoJobResponse
 */
SubmitMediaInfoJobResponse Client::submitMediaInfoJob(const SubmitMediaInfoJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitMediaInfoJobWithOptions(request, runtime);
}

/**
 * @param request SubmitSmarttagJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSmarttagJobResponse
 */
SubmitSmarttagJobResponse Client::submitSmarttagJobWithOptions(const SubmitSmarttagJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasContentAddr()) {
    query["ContentAddr"] = request.contentAddr();
  }

  if (!!request.hasContentType()) {
    query["ContentType"] = request.contentType();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.input();
  }

  if (!!request.hasNotifyUrl()) {
    query["NotifyUrl"] = request.notifyUrl();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitSmarttagJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSmarttagJobResponse>();
}

/**
 * @param request SubmitSmarttagJobRequest
 * @return SubmitSmarttagJobResponse
 */
SubmitSmarttagJobResponse Client::submitSmarttagJob(const SubmitSmarttagJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSmarttagJobWithOptions(request, runtime);
}

/**
 * @summary Submits a snapshot job.
 *
 * @description *   Only JPG images can be generated by calling this operation.
 * *   Asynchronous mode: This operation may return a response before snapshots are captured. Snapshot jobs are queued in the background and asynchronously processed by ApsaraVideo Media Processing (MPS). If the **Interval** or **Num** parameter is set, the snapshot job is processed in asynchronous mode. For more information about FAQ about capturing snapshots, see [FAQ about taking snapshots](https://help.aliyun.com/document_detail/60805.html).
 * *   Notifications: When you submit a snapshot job, the **PipelineId** parameter is required. An asynchronous message is sent only after the notification feature is enabled for the MPS queue.
 * ### QPS limit
 * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SubmitSnapshotJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSnapshotJobResponse
 */
SubmitSnapshotJobResponse Client::submitSnapshotJobWithOptions(const SubmitSnapshotJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInput()) {
    query["Input"] = request.input();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSnapshotConfig()) {
    query["SnapshotConfig"] = request.snapshotConfig();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitSnapshotJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSnapshotJobResponse>();
}

/**
 * @summary Submits a snapshot job.
 *
 * @description *   Only JPG images can be generated by calling this operation.
 * *   Asynchronous mode: This operation may return a response before snapshots are captured. Snapshot jobs are queued in the background and asynchronously processed by ApsaraVideo Media Processing (MPS). If the **Interval** or **Num** parameter is set, the snapshot job is processed in asynchronous mode. For more information about FAQ about capturing snapshots, see [FAQ about taking snapshots](https://help.aliyun.com/document_detail/60805.html).
 * *   Notifications: When you submit a snapshot job, the **PipelineId** parameter is required. An asynchronous message is sent only after the notification feature is enabled for the MPS queue.
 * ### QPS limit
 * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request SubmitSnapshotJobRequest
 * @return SubmitSnapshotJobResponse
 */
SubmitSnapshotJobResponse Client::submitSnapshotJob(const SubmitSnapshotJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSnapshotJobWithOptions(request, runtime);
}

/**
 * @summary 提交视频溯源水印ab流任务
 *
 * @param request SubmitTraceAbJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitTraceAbJobResponse
 */
SubmitTraceAbJobResponse Client::submitTraceAbJobWithOptions(const SubmitTraceAbJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallBack()) {
    query["CallBack"] = request.callBack();
  }

  if (!!request.hasCipherBase64ed()) {
    query["CipherBase64ed"] = request.cipherBase64ed();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.input();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.level();
  }

  if (!!request.hasOutput()) {
    query["Output"] = request.output();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTotalTime()) {
    query["TotalTime"] = request.totalTime();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitTraceAbJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitTraceAbJobResponse>();
}

/**
 * @summary 提交视频溯源水印ab流任务
 *
 * @param request SubmitTraceAbJobRequest
 * @return SubmitTraceAbJobResponse
 */
SubmitTraceAbJobResponse Client::submitTraceAbJob(const SubmitTraceAbJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitTraceAbJobWithOptions(request, runtime);
}

/**
 * @summary 提交溯源水印提取任务
 *
 * @param request SubmitTraceExtractJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitTraceExtractJobResponse
 */
SubmitTraceExtractJobResponse Client::submitTraceExtractJobWithOptions(const SubmitTraceExtractJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCallBack()) {
    query["CallBack"] = request.callBack();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.input();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitTraceExtractJob"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitTraceExtractJobResponse>();
}

/**
 * @summary 提交溯源水印提取任务
 *
 * @param request SubmitTraceExtractJobRequest
 * @return SubmitTraceExtractJobResponse
 */
SubmitTraceExtractJobResponse Client::submitTraceExtractJob(const SubmitTraceExtractJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitTraceExtractJobWithOptions(request, runtime);
}

/**
 * @summary 提交视频溯源水印m3u8文件任务
 *
 * @param request SubmitTraceM3u8JobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitTraceM3u8JobResponse
 */
SubmitTraceM3u8JobResponse Client::submitTraceM3u8JobWithOptions(const SubmitTraceM3u8JobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyUri()) {
    query["KeyUri"] = request.keyUri();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasOutput()) {
    query["Output"] = request.output();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  if (!!request.hasTrace()) {
    query["Trace"] = request.trace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitTraceM3u8Job"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitTraceM3u8JobResponse>();
}

/**
 * @summary 提交视频溯源水印m3u8文件任务
 *
 * @param request SubmitTraceM3u8JobRequest
 * @return SubmitTraceM3u8JobResponse
 */
SubmitTraceM3u8JobResponse Client::submitTraceM3u8Job(const SubmitTraceM3u8JobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitTraceM3u8JobWithOptions(request, runtime);
}

/**
 * @summary The description of the figure. The description can be up to 512 characters in length.
 *
 * @description The response parameters.
 *
 * @param request TagCustomPersonRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagCustomPersonResponse
 */
TagCustomPersonResponse Client::tagCustomPersonWithOptions(const TagCustomPersonRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryDescription()) {
    query["CategoryDescription"] = request.categoryDescription();
  }

  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.categoryId();
  }

  if (!!request.hasCategoryName()) {
    query["CategoryName"] = request.categoryName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPersonDescription()) {
    query["PersonDescription"] = request.personDescription();
  }

  if (!!request.hasPersonId()) {
    query["PersonId"] = request.personId();
  }

  if (!!request.hasPersonName()) {
    query["PersonName"] = request.personName();
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
    {"action" , "TagCustomPerson"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagCustomPersonResponse>();
}

/**
 * @summary The description of the figure. The description can be up to 512 characters in length.
 *
 * @description The response parameters.
 *
 * @param request TagCustomPersonRequest
 * @return TagCustomPersonResponse
 */
TagCustomPersonResponse Client::tagCustomPerson(const TagCustomPersonRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagCustomPersonWithOptions(request, runtime);
}

/**
 * @summary Unbinds an input media bucket from the media library.
 *
 * @description # Usage notes
 * You can call this operation to unbind an input media bucket from the media library based on the name of the output media bucket.
 * # QPS limits
 * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request UnbindInputBucketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindInputBucketResponse
 */
UnbindInputBucketResponse Client::unbindInputBucketWithOptions(const UnbindInputBucketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucket()) {
    query["Bucket"] = request.bucket();
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

  if (!!request.hasRoleArn()) {
    query["RoleArn"] = request.roleArn();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnbindInputBucket"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindInputBucketResponse>();
}

/**
 * @summary Unbinds an input media bucket from the media library.
 *
 * @description # Usage notes
 * You can call this operation to unbind an input media bucket from the media library based on the name of the output media bucket.
 * # QPS limits
 * You can call this API operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request UnbindInputBucketRequest
 * @return UnbindInputBucketResponse
 */
UnbindInputBucketResponse Client::unbindInputBucket(const UnbindInputBucketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindInputBucketWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to unbind an output media bucket from the media library based on the name of the output media bucket.
 * ## QPS limit
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limits](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
 *
 * @description The name of the output media bucket to be unbound. To obtain the media bucket name, you can log on to the **ApsaraVideo Media Processing (MPS)** console and choose **Workflows** > **Media Buckets** in the left-side navigation pane. Alternatively, you can log on to the **Object Storage Service (OSS) console** and click **My OSS Paths**.
 *
 * @param request UnbindOutputBucketRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnbindOutputBucketResponse
 */
UnbindOutputBucketResponse Client::unbindOutputBucketWithOptions(const UnbindOutputBucketRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucket()) {
    query["Bucket"] = request.bucket();
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
    {"action" , "UnbindOutputBucket"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnbindOutputBucketResponse>();
}

/**
 * @summary You can call this operation to unbind an output media bucket from the media library based on the name of the output media bucket.
 * ## QPS limit
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limits](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
 *
 * @description The name of the output media bucket to be unbound. To obtain the media bucket name, you can log on to the **ApsaraVideo Media Processing (MPS)** console and choose **Workflows** > **Media Buckets** in the left-side navigation pane. Alternatively, you can log on to the **Object Storage Service (OSS) console** and click **My OSS Paths**.
 *
 * @param request UnbindOutputBucketRequest
 * @return UnbindOutputBucketResponse
 */
UnbindOutputBucketResponse Client::unbindOutputBucket(const UnbindOutputBucketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unbindOutputBucketWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom face, all the custom faces that are registered in a custom figure library, or a custom figure library.
 *
 * @description You can call this operation to delete a specific custom face, all the custom faces that are registered in a custom figure library, or a custom figure library.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request UnregisterCustomFaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnregisterCustomFaceResponse
 */
UnregisterCustomFaceResponse Client::unregisterCustomFaceWithOptions(const UnregisterCustomFaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategoryId()) {
    query["CategoryId"] = request.categoryId();
  }

  if (!!request.hasFaceId()) {
    query["FaceId"] = request.faceId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPersonId()) {
    query["PersonId"] = request.personId();
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
    {"action" , "UnregisterCustomFace"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnregisterCustomFaceResponse>();
}

/**
 * @summary Deletes a custom face, all the custom faces that are registered in a custom figure library, or a custom figure library.
 *
 * @description You can call this operation to delete a specific custom face, all the custom faces that are registered in a custom figure library, or a custom figure library.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped, and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request UnregisterCustomFaceRequest
 * @return UnregisterCustomFaceResponse
 */
UnregisterCustomFaceResponse Client::unregisterCustomFace(const UnregisterCustomFaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unregisterCustomFaceWithOptions(request, runtime);
}

/**
 * @summary Updates the basic information about a media file.
 *
 * @description The basic information that you can update by calling this operation includes the title, description, and category of a media file. This operation applies to a full update. You must set all the parameters unless you want to replace the value of a specific parameter with a NULL value.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request UpdateMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaResponse
 */
UpdateMediaResponse Client::updateMediaWithOptions(const UpdateMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCateId()) {
    query["CateId"] = request.cateId();
  }

  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.coverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
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

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMedia"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMediaResponse>();
}

/**
 * @summary Updates the basic information about a media file.
 *
 * @description The basic information that you can update by calling this operation includes the title, description, and category of a media file. This operation applies to a full update. You must set all the parameters unless you want to replace the value of a specific parameter with a NULL value.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request UpdateMediaRequest
 * @return UpdateMediaResponse
 */
UpdateMediaResponse Client::updateMedia(const UpdateMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMediaWithOptions(request, runtime);
}

/**
 * @summary Updates the category to which a media file belongs.
 *
 * @description You can call this operation to update only the category of a media file. For more information about how to update all the information about a media file, see [UpdateMedia](https://help.aliyun.com/document_detail/44464.html).
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request UpdateMediaCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaCategoryResponse
 */
UpdateMediaCategoryResponse Client::updateMediaCategoryWithOptions(const UpdateMediaCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCateId()) {
    query["CateId"] = request.cateId();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
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
    {"action" , "UpdateMediaCategory"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMediaCategoryResponse>();
}

/**
 * @summary Updates the category to which a media file belongs.
 *
 * @description You can call this operation to update only the category of a media file. For more information about how to update all the information about a media file, see [UpdateMedia](https://help.aliyun.com/document_detail/44464.html).
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request UpdateMediaCategoryRequest
 * @return UpdateMediaCategoryResponse
 */
UpdateMediaCategoryResponse Client::updateMediaCategory(const UpdateMediaCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMediaCategoryWithOptions(request, runtime);
}

/**
 * @summary Updates the thumbnail of a media file.
 *
 * @description You can call this operation to update only the thumbnail of a media file. For more information about how to update all the information about a media file, see [UpdateMedia](https://help.aliyun.com/document_detail/44464.html).
 * ## Limits on QPS
 * You can call this operation up to 100 times per second. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limits](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
 *
 * @param request UpdateMediaCoverRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaCoverResponse
 */
UpdateMediaCoverResponse Client::updateMediaCoverWithOptions(const UpdateMediaCoverRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.coverURL();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
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
    {"action" , "UpdateMediaCover"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMediaCoverResponse>();
}

/**
 * @summary Updates the thumbnail of a media file.
 *
 * @description You can call this operation to update only the thumbnail of a media file. For more information about how to update all the information about a media file, see [UpdateMedia](https://help.aliyun.com/document_detail/44464.html).
 * ## Limits on QPS
 * You can call this operation up to 100 times per second. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limits](https://www.alibabacloud.com/help/en/apsaravideo-for-media-processing/latest/qps-limit).
 *
 * @param request UpdateMediaCoverRequest
 * @return UpdateMediaCoverResponse
 */
UpdateMediaCoverResponse Client::updateMediaCover(const UpdateMediaCoverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMediaCoverWithOptions(request, runtime);
}

/**
 * @summary Updates the publishing status of a media file.
 *
 * @description The published state indicates that the access control list (ACL) of media playback resources and snapshot files is set to inherit the ACL of the bucket to which they belong. The unpublished state indicates that the ACL of media playback resources and snapshot files is set to private.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request UpdateMediaPublishStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaPublishStateResponse
 */
UpdateMediaPublishStateResponse Client::updateMediaPublishStateWithOptions(const UpdateMediaPublishStateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPublish()) {
    query["Publish"] = request.publish();
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
    {"action" , "UpdateMediaPublishState"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMediaPublishStateResponse>();
}

/**
 * @summary Updates the publishing status of a media file.
 *
 * @description The published state indicates that the access control list (ACL) of media playback resources and snapshot files is set to inherit the ACL of the bucket to which they belong. The unpublished state indicates that the ACL of media playback resources and snapshot files is set to private.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request UpdateMediaPublishStateRequest
 * @return UpdateMediaPublishStateResponse
 */
UpdateMediaPublishStateResponse Client::updateMediaPublishState(const UpdateMediaPublishStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMediaPublishStateWithOptions(request, runtime);
}

/**
 * @summary Updates the topology of a media workflow.
 *
 * @description *   You can call this operation to update the topology of a media workflow. To update the trigger mode of a media workflow, call the [UpdateMediaWorkflowTriggerMode](https://help.aliyun.com/document_detail/70372.html) operation.
 * *   After you delete or deactivate a media workflow, the workflow cannot be used. In this case, the workflow is not automatically triggered when you upload a file to the bucket specified by the workflow.
 * <warning>Deleting or deactivating a workflow will not affect tasks that have already been submitted. If a workflow is deleted or deactivated after a task has been submitted, tasks that are already in the processing queue will not be canceled and will be executed normally and charged the corresponding fees.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).>
 *
 * @param request UpdateMediaWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaWorkflowResponse
 */
UpdateMediaWorkflowResponse Client::updateMediaWorkflowWithOptions(const UpdateMediaWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaWorkflowId()) {
    query["MediaWorkflowId"] = request.mediaWorkflowId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
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

  if (!!request.hasTopology()) {
    query["Topology"] = request.topology();
  }

  if (!!request.hasTriggerMode()) {
    query["TriggerMode"] = request.triggerMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMediaWorkflow"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMediaWorkflowResponse>();
}

/**
 * @summary Updates the topology of a media workflow.
 *
 * @description *   You can call this operation to update the topology of a media workflow. To update the trigger mode of a media workflow, call the [UpdateMediaWorkflowTriggerMode](https://help.aliyun.com/document_detail/70372.html) operation.
 * *   After you delete or deactivate a media workflow, the workflow cannot be used. In this case, the workflow is not automatically triggered when you upload a file to the bucket specified by the workflow.
 * <warning>Deleting or deactivating a workflow will not affect tasks that have already been submitted. If a workflow is deleted or deactivated after a task has been submitted, tasks that are already in the processing queue will not be canceled and will be executed normally and charged the corresponding fees.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).>
 *
 * @param request UpdateMediaWorkflowRequest
 * @return UpdateMediaWorkflowResponse
 */
UpdateMediaWorkflowResponse Client::updateMediaWorkflow(const UpdateMediaWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMediaWorkflowWithOptions(request, runtime);
}

/**
 * @summary Updates the trigger mode of a media workflow.
 *
 * @description You can call this operation only to modify the trigger mode of a media workflow. To modify other information about the workflow, call the [UpdateMediaWorkflow](https://help.aliyun.com/document_detail/44438.html) operation.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request UpdateMediaWorkflowTriggerModeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaWorkflowTriggerModeResponse
 */
UpdateMediaWorkflowTriggerModeResponse Client::updateMediaWorkflowTriggerModeWithOptions(const UpdateMediaWorkflowTriggerModeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaWorkflowId()) {
    query["MediaWorkflowId"] = request.mediaWorkflowId();
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

  if (!!request.hasTriggerMode()) {
    query["TriggerMode"] = request.triggerMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMediaWorkflowTriggerMode"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMediaWorkflowTriggerModeResponse>();
}

/**
 * @summary Updates the trigger mode of a media workflow.
 *
 * @description You can call this operation only to modify the trigger mode of a media workflow. To modify other information about the workflow, call the [UpdateMediaWorkflow](https://help.aliyun.com/document_detail/44438.html) operation.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request UpdateMediaWorkflowTriggerModeRequest
 * @return UpdateMediaWorkflowTriggerModeResponse
 */
UpdateMediaWorkflowTriggerModeResponse Client::updateMediaWorkflowTriggerMode(const UpdateMediaWorkflowTriggerModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMediaWorkflowTriggerModeWithOptions(request, runtime);
}

/**
 * @summary Updates an ApsaraVideo Media Processing (MPS) queue.
 *
 * @description *   You can call this operation to modify the name, status, and notification settings of the specified MPS queue.
 * *   If a paused MPS queue is selected in a workflow or a job, such as a video review or media fingerprint job, the workflow or job fails.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request UpdatePipelineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePipelineResponse
 */
UpdatePipelineResponse Client::updatePipelineWithOptions(const UpdatePipelineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtendConfig()) {
    query["ExtendConfig"] = request.extendConfig();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNotifyConfig()) {
    query["NotifyConfig"] = request.notifyConfig();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.role();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePipeline"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePipelineResponse>();
}

/**
 * @summary Updates an ApsaraVideo Media Processing (MPS) queue.
 *
 * @description *   You can call this operation to modify the name, status, and notification settings of the specified MPS queue.
 * *   If a paused MPS queue is selected in a workflow or a job, such as a video review or media fingerprint job, the workflow or job fails.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request UpdatePipelineRequest
 * @return UpdatePipelineResponse
 */
UpdatePipelineResponse Client::updatePipeline(const UpdatePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePipelineWithOptions(request, runtime);
}

/**
 * @summary 更新智能标签模板接口支持cpv
 *
 * @param request UpdateSmarttagTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSmarttagTemplateResponse
 */
UpdateSmarttagTemplateResponse Client::updateSmarttagTemplateWithOptions(const UpdateSmarttagTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnalyseTypes()) {
    query["AnalyseTypes"] = request.analyseTypes();
  }

  if (!!request.hasFaceCategoryIds()) {
    query["FaceCategoryIds"] = request.faceCategoryIds();
  }

  if (!!request.hasFaceCustomParamsConfig()) {
    query["FaceCustomParamsConfig"] = request.faceCustomParamsConfig();
  }

  if (!!request.hasIndustry()) {
    query["Industry"] = request.industry();
  }

  if (!!request.hasIsDefault()) {
    query["IsDefault"] = request.isDefault();
  }

  if (!!request.hasKeywordConfig()) {
    query["KeywordConfig"] = request.keywordConfig();
  }

  if (!!request.hasKnowledgeConfig()) {
    query["KnowledgeConfig"] = request.knowledgeConfig();
  }

  if (!!request.hasLabelType()) {
    query["LabelType"] = request.labelType();
  }

  if (!!request.hasLabelVersion()) {
    query["LabelVersion"] = request.labelVersion();
  }

  if (!!request.hasLandmarkGroupIds()) {
    query["LandmarkGroupIds"] = request.landmarkGroupIds();
  }

  if (!!request.hasObjectGroupIds()) {
    query["ObjectGroupIds"] = request.objectGroupIds();
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

  if (!!request.hasScene()) {
    query["Scene"] = request.scene();
  }

  if (!!request.hasTemplateConfig()) {
    query["TemplateConfig"] = request.templateConfig();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSmarttagTemplate"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSmarttagTemplateResponse>();
}

/**
 * @summary 更新智能标签模板接口支持cpv
 *
 * @param request UpdateSmarttagTemplateRequest
 * @return UpdateSmarttagTemplateResponse
 */
UpdateSmarttagTemplateResponse Client::updateSmarttagTemplate(const UpdateSmarttagTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmarttagTemplateWithOptions(request, runtime);
}

/**
 * @description A custom transcoding template cannot be updated if it is being used by a job that has been submitted.The ID of the template. You can obtain the template ID from the response of the [AddTemplate](https://help.aliyun.com/document_detail/213306.html) operation.
 * ### QPS limits
 * You can call this operation up to 100 times per second. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request UpdateTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplateWithOptions(const UpdateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAudio()) {
    query["Audio"] = request.audio();
  }

  if (!!request.hasContainer()) {
    query["Container"] = request.container();
  }

  if (!!request.hasMuxConfig()) {
    query["MuxConfig"] = request.muxConfig();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
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

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTransConfig()) {
    query["TransConfig"] = request.transConfig();
  }

  if (!!request.hasVideo()) {
    query["Video"] = request.video();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTemplate"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTemplateResponse>();
}

/**
 * @description A custom transcoding template cannot be updated if it is being used by a job that has been submitted.The ID of the template. You can obtain the template ID from the response of the [AddTemplate](https://help.aliyun.com/document_detail/213306.html) operation.
 * ### QPS limits
 * You can call this operation up to 100 times per second. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request UpdateTemplateRequest
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplate(const UpdateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTemplateWithOptions(request, runtime);
}

/**
 * @summary Updates the name and configurations of the specified watermark template.
 *
 * @description *   You can call this operation to update the information about a watermark template based on the ID of the watermark template. For example, you can update the name and configurations of a watermark template.
 * *   A watermark template cannot be updated if it is being used by a job that has been submitted.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request UpdateWaterMarkTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWaterMarkTemplateResponse
 */
UpdateWaterMarkTemplateResponse Client::updateWaterMarkTemplateWithOptions(const UpdateWaterMarkTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
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

  if (!!request.hasWaterMarkTemplateId()) {
    query["WaterMarkTemplateId"] = request.waterMarkTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateWaterMarkTemplate"},
    {"version" , "2014-06-18"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWaterMarkTemplateResponse>();
}

/**
 * @summary Updates the name and configurations of the specified watermark template.
 *
 * @description *   You can call this operation to update the information about a watermark template based on the ID of the watermark template. For example, you can update the name and configurations of a watermark template.
 * *   A watermark template cannot be updated if it is being used by a job that has been submitted.
 * ### QPS limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342832.html).
 *
 * @param request UpdateWaterMarkTemplateRequest
 * @return UpdateWaterMarkTemplateResponse
 */
UpdateWaterMarkTemplateResponse Client::updateWaterMarkTemplate(const UpdateWaterMarkTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWaterMarkTemplateWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Mts20140618