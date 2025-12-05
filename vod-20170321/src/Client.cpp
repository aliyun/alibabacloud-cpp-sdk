#include <darabonba/Core.hpp>
#include <alibabacloud/Vod20170321.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Vod20170321::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Vod20170321
{

AlibabaCloud::Vod20170321::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hangzhou" , "vod.cn-shanghai.aliyuncs.com"},
    {"ap-northeast-2-pop" , "vod.aliyuncs.com"},
    {"ap-southeast-2" , "vod.aliyuncs.com"},
    {"ap-southeast-3" , "vod.aliyuncs.com"},
    {"cn-beijing-finance-1" , "vod.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "vod.aliyuncs.com"},
    {"cn-beijing-gov-1" , "vod.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "vod.aliyuncs.com"},
    {"cn-chengdu" , "vod.aliyuncs.com"},
    {"cn-edge-1" , "vod.aliyuncs.com"},
    {"cn-fujian" , "vod.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "vod.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "vod.aliyuncs.com"},
    {"cn-hangzhou-finance" , "vod.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "vod.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "vod.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "vod.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "vod.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "vod.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "vod.aliyuncs.com"},
    {"cn-huhehaote" , "vod.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "vod.aliyuncs.com"},
    {"cn-qingdao" , "vod.aliyuncs.com"},
    {"cn-qingdao-nebula" , "vod.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "vod.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "vod.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "vod.aliyuncs.com"},
    {"cn-shanghai-inner" , "vod.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "vod.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "vod.aliyuncs.com"},
    {"cn-shenzhen-inner" , "vod.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "vod.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "vod.aliyuncs.com"},
    {"cn-wuhan" , "vod.aliyuncs.com"},
    {"cn-wulanchabu" , "vod.aliyuncs.com"},
    {"cn-yushanfang" , "vod.aliyuncs.com"},
    {"cn-zhangbei" , "vod.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "vod.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "vod.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "vod.aliyuncs.com"},
    {"eu-west-1-oxs" , "vod.aliyuncs.com"},
    {"me-east-1" , "vod.aliyuncs.com"},
    {"rus-west-1-pop" , "vod.aliyuncs.com"},
    {"us-east-1" , "vod.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("vod", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds an AI template for automated review and smart thumbnail tasks.
 *
 * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * *   Before you add an AI template for automated review and smart thumbnail tasks, make sure that [automated review](https://ai.aliyun.com/vi/censor) and [smart thumbnail](https://ai.aliyun.com/vi/cover) are enabled.
 *
 * @param request AddAITemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAITemplateResponse
 */
AddAITemplateResponse Client::addAITemplateWithOptions(const AddAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateConfig()) {
    query["TemplateConfig"] = request.templateConfig();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddAITemplate"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAITemplateResponse>();
}

/**
 * @summary Adds an AI template for automated review and smart thumbnail tasks.
 *
 * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * *   Before you add an AI template for automated review and smart thumbnail tasks, make sure that [automated review](https://ai.aliyun.com/vi/censor) and [smart thumbnail](https://ai.aliyun.com/vi/cover) are enabled.
 *
 * @param request AddAITemplateRequest
 * @return AddAITemplateResponse
 */
AddAITemplateResponse Client::addAITemplate(const AddAITemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAITemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a video category. You can call this operation to categorize media assets including audio or video files, images, and short video materials in ApsaraVideo VOD. This simplifies the query and management of media assets.
 *
 * @description *   You can create a maximum of 3 levels of categories for audio, video, and image files and 2 levels of categories for short video materials. Each category level can contain a maximum of 100 subcategories. To create categories for audio and video files, set `Type` to `default`. To create categories for short video materials, set `Type` to `material`.
 * *   After you create a category, you can categorize media resources during upload or categorize the uploaded media resources. For more information, see [Manage video categories](https://help.aliyun.com/document_detail/86070.html).
 *
 * @param request AddCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddCategoryResponse
 */
AddCategoryResponse Client::addCategoryWithOptions(const AddCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCateName()) {
    query["CateName"] = request.cateName();
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
    {"action" , "AddCategory"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddCategoryResponse>();
}

/**
 * @summary Creates a video category. You can call this operation to categorize media assets including audio or video files, images, and short video materials in ApsaraVideo VOD. This simplifies the query and management of media assets.
 *
 * @description *   You can create a maximum of 3 levels of categories for audio, video, and image files and 2 levels of categories for short video materials. Each category level can contain a maximum of 100 subcategories. To create categories for audio and video files, set `Type` to `default`. To create categories for short video materials, set `Type` to `material`.
 * *   After you create a category, you can categorize media resources during upload or categorize the uploaded media resources. For more information, see [Manage video categories](https://help.aliyun.com/document_detail/86070.html).
 *
 * @param request AddCategoryRequest
 * @return AddCategoryResponse
 */
AddCategoryResponse Client::addCategory(const AddCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addCategoryWithOptions(request, runtime);
}

/**
 * @summary Creates an online editing project.
 *
 * @description *   For more information about the online editing feature, see [Overview](https://help.aliyun.com/document_detail/95482.html).
 *
 * @param request AddEditingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddEditingProjectResponse
 */
AddEditingProjectResponse Client::addEditingProjectWithOptions(const AddEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.coverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDivision()) {
    query["Division"] = request.division();
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

  if (!!request.hasTimeline()) {
    query["Timeline"] = request.timeline();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddEditingProject"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddEditingProjectResponse>();
}

/**
 * @summary Creates an online editing project.
 *
 * @description *   For more information about the online editing feature, see [Overview](https://help.aliyun.com/document_detail/95482.html).
 *
 * @param request AddEditingProjectRequest
 * @return AddEditingProjectResponse
 */
AddEditingProjectResponse Client::addEditingProject(const AddEditingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addEditingProjectWithOptions(request, runtime);
}

/**
 * @summary Adds one or more materials to an editing project.
 *
 * @param request AddEditingProjectMaterialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddEditingProjectMaterialsResponse
 */
AddEditingProjectMaterialsResponse Client::addEditingProjectMaterialsWithOptions(const AddEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaterialIds()) {
    query["MaterialIds"] = request.materialIds();
  }

  if (!!request.hasMaterialType()) {
    query["MaterialType"] = request.materialType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
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
    {"action" , "AddEditingProjectMaterials"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddEditingProjectMaterialsResponse>();
}

/**
 * @summary Adds one or more materials to an editing project.
 *
 * @param request AddEditingProjectMaterialsRequest
 * @return AddEditingProjectMaterialsResponse
 */
AddEditingProjectMaterialsResponse Client::addEditingProjectMaterials(const AddEditingProjectMaterialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addEditingProjectMaterialsWithOptions(request, runtime);
}

/**
 * @summary Creates a transcoding template group or adds transcoding templates to a transcoding template group.
 *
 * @description *   You cannot perform custom operations on transcoding template groups that are **locked** in the ApsaraVideo VOD console. You can call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation to query the information about a transcoding template group and check whether the transcoding template group is locked based on the value of the Locked parameter. You can call the [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to unlock a transcoding template group if it is locked. Then, you can perform custom operations on the transcoding template group.
 * *   An Object Storage Service (OSS) bucket is required to store files that are used for transcoding. You cannot create a transcoding template group if no bucket is available. To activate a bucket, perform the following operations: Log on to the ApsaraVideo VOD console. In the left-side navigation pane, choose **Configuration Management > Media Management > Storage**. On the **Storage** page, activate the bucket that is allocated by ApsaraVideo VOD.
 * *   You cannot add transcoding templates to the **No Transcoding** template group.
 * *   You can create a maximum of 20 transcoding template groups.
 * *   You can add a maximum of 20 transcoding templates to a transcoding template group.
 * *   If you want to generate a URL for adaptive bitrate streaming, you can add video packaging templates to a transcoding template group. You can add a maximum of 10 video packaging templates to a transcoding template group. If you add more than 10 video packaging templates, URLs of the video transcoded based on the video packaging templates are generated but the URL for adaptive bitrate streaming is not generated.
 * ### QPS limits
 * You can call this operation up to five times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request AddTranscodeTemplateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTranscodeTemplateGroupResponse
 */
AddTranscodeTemplateGroupResponse Client::addTranscodeTemplateGroupWithOptions(const AddTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasTranscodeTemplateGroupId()) {
    query["TranscodeTemplateGroupId"] = request.transcodeTemplateGroupId();
  }

  if (!!request.hasTranscodeTemplateList()) {
    query["TranscodeTemplateList"] = request.transcodeTemplateList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddTranscodeTemplateGroup"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddTranscodeTemplateGroupResponse>();
}

/**
 * @summary Creates a transcoding template group or adds transcoding templates to a transcoding template group.
 *
 * @description *   You cannot perform custom operations on transcoding template groups that are **locked** in the ApsaraVideo VOD console. You can call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation to query the information about a transcoding template group and check whether the transcoding template group is locked based on the value of the Locked parameter. You can call the [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to unlock a transcoding template group if it is locked. Then, you can perform custom operations on the transcoding template group.
 * *   An Object Storage Service (OSS) bucket is required to store files that are used for transcoding. You cannot create a transcoding template group if no bucket is available. To activate a bucket, perform the following operations: Log on to the ApsaraVideo VOD console. In the left-side navigation pane, choose **Configuration Management > Media Management > Storage**. On the **Storage** page, activate the bucket that is allocated by ApsaraVideo VOD.
 * *   You cannot add transcoding templates to the **No Transcoding** template group.
 * *   You can create a maximum of 20 transcoding template groups.
 * *   You can add a maximum of 20 transcoding templates to a transcoding template group.
 * *   If you want to generate a URL for adaptive bitrate streaming, you can add video packaging templates to a transcoding template group. You can add a maximum of 10 video packaging templates to a transcoding template group. If you add more than 10 video packaging templates, URLs of the video transcoded based on the video packaging templates are generated but the URL for adaptive bitrate streaming is not generated.
 * ### QPS limits
 * You can call this operation up to five times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request AddTranscodeTemplateGroupRequest
 * @return AddTranscodeTemplateGroupResponse
 */
AddTranscodeTemplateGroupResponse Client::addTranscodeTemplateGroup(const AddTranscodeTemplateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTranscodeTemplateGroupWithOptions(request, runtime);
}

/**
 * @summary Adds a domain name to accelerate in ApsaraVideo VOD.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   Before you add a domain name to accelerate, you must activate ApsaraVideo VOD and apply for an Internet content provider (ICP) filing for the domain name. For more information about how to activate ApsaraVideo VOD, see [Activate ApsaraVideo VOD](https://help.aliyun.com/document_detail/51512.html).
 * *   If the content on the origin server is not stored on Alibaba Cloud, the content must be reviewed by Alibaba Cloud. The review will be complete by the end of the next business day after you submit an application.
 * *   You can add only one domain name to accelerate in a request. You can add a maximum of 20 accelerated domain names within an Alibaba Cloud account.
 *
 * @param request AddVodDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddVodDomainResponse
 */
AddVodDomainResponse Client::addVodDomainWithOptions(const AddVodDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckUrl()) {
    query["CheckUrl"] = request.checkUrl();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.scope();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasSources()) {
    query["Sources"] = request.sources();
  }

  if (!!request.hasTopLevelDomain()) {
    query["TopLevelDomain"] = request.topLevelDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddVodDomain"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddVodDomainResponse>();
}

/**
 * @summary Adds a domain name to accelerate in ApsaraVideo VOD.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   Before you add a domain name to accelerate, you must activate ApsaraVideo VOD and apply for an Internet content provider (ICP) filing for the domain name. For more information about how to activate ApsaraVideo VOD, see [Activate ApsaraVideo VOD](https://help.aliyun.com/document_detail/51512.html).
 * *   If the content on the origin server is not stored on Alibaba Cloud, the content must be reviewed by Alibaba Cloud. The review will be complete by the end of the next business day after you submit an application.
 * *   You can add only one domain name to accelerate in a request. You can add a maximum of 20 accelerated domain names within an Alibaba Cloud account.
 *
 * @param request AddVodDomainRequest
 * @return AddVodDomainResponse
 */
AddVodDomainResponse Client::addVodDomain(const AddVodDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addVodDomainWithOptions(request, runtime);
}

/**
 * @summary Binds a storage bucket to one or more applications in ApsaraVideo VOD.
 *
 * @description You can call this operation to add a buckets to an ApsaraVideo VOD applications.
 * > You can add only one ApsaraVideo VOD bucket for each application. If you specify an AppId that does not exist or the ID of an application for which an VOD bucket is enabled, an error is returned.
 *
 * @param request AddVodStorageForAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddVodStorageForAppResponse
 */
AddVodStorageForAppResponse Client::addVodStorageForAppWithOptions(const AddVodStorageForAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasStorageLocation()) {
    query["StorageLocation"] = request.storageLocation();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.storageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddVodStorageForApp"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddVodStorageForAppResponse>();
}

/**
 * @summary Binds a storage bucket to one or more applications in ApsaraVideo VOD.
 *
 * @description You can call this operation to add a buckets to an ApsaraVideo VOD applications.
 * > You can add only one ApsaraVideo VOD bucket for each application. If you specify an AppId that does not exist or the ID of an application for which an VOD bucket is enabled, an error is returned.
 *
 * @param request AddVodStorageForAppRequest
 * @return AddVodStorageForAppResponse
 */
AddVodStorageForAppResponse Client::addVodStorageForApp(const AddVodStorageForAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addVodStorageForAppWithOptions(request, runtime);
}

/**
 * @summary Adds a snapshot template or frame animation template.
 *
 * @description *   After you add a snapshot template, you can call the [SubmitSnapshotJob](https://help.aliyun.com/document_detail/72213.html) operation and specify the template ID to submit a snapshot job.
 * *   You can use the HTTP (HTTPS compatible) callback or MNS callback method to receive the [SnapshotComplete](https://help.aliyun.com/document_detail/57337.html) callback. For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
 *
 * @param request AddVodTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddVodTemplateResponse
 */
AddVodTemplateResponse Client::addVodTemplateWithOptions(const AddVodTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasTemplateConfig()) {
    query["TemplateConfig"] = request.templateConfig();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddVodTemplate"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddVodTemplateResponse>();
}

/**
 * @summary Adds a snapshot template or frame animation template.
 *
 * @description *   After you add a snapshot template, you can call the [SubmitSnapshotJob](https://help.aliyun.com/document_detail/72213.html) operation and specify the template ID to submit a snapshot job.
 * *   You can use the HTTP (HTTPS compatible) callback or MNS callback method to receive the [SnapshotComplete](https://help.aliyun.com/document_detail/57337.html) callback. For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
 *
 * @param request AddVodTemplateRequest
 * @return AddVodTemplateResponse
 */
AddVodTemplateResponse Client::addVodTemplate(const AddVodTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addVodTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates an image or text watermark. ApsaraVideo VOD allows you to create watermark templates to reuse your parameter configurations such as watermark position, size, font, and color. Each watermark template is assigned a unique ID. This simplifies the progress of creating watermark tasks.
 *
 * @description *   You can call this operation to create an `Image` watermark template or a `Text` watermark template. You can use static images in the PNG format or dynamic images in the GIF, APNG, and MOV formats as image watermarks.
 * *   After you call this operation to create a watermark template, you must call the [AddTranscodeTemplateGroup](~~AddTranscodeTemplateGroup~~) or [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to associate the watermark template with a transcoding template group. This way, you can add watermarks to videos during transcoding.
 * *   For more information, see [Video watermarks](https://help.aliyun.com/document_detail/99369.html).
 *
 * @param request AddWatermarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddWatermarkResponse
 */
AddWatermarkResponse Client::addWatermarkWithOptions(const AddWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.fileUrl();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasWatermarkConfig()) {
    query["WatermarkConfig"] = request.watermarkConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddWatermark"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddWatermarkResponse>();
}

/**
 * @summary Creates an image or text watermark. ApsaraVideo VOD allows you to create watermark templates to reuse your parameter configurations such as watermark position, size, font, and color. Each watermark template is assigned a unique ID. This simplifies the progress of creating watermark tasks.
 *
 * @description *   You can call this operation to create an `Image` watermark template or a `Text` watermark template. You can use static images in the PNG format or dynamic images in the GIF, APNG, and MOV formats as image watermarks.
 * *   After you call this operation to create a watermark template, you must call the [AddTranscodeTemplateGroup](~~AddTranscodeTemplateGroup~~) or [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to associate the watermark template with a transcoding template group. This way, you can add watermarks to videos during transcoding.
 * *   For more information, see [Video watermarks](https://help.aliyun.com/document_detail/99369.html).
 *
 * @param request AddWatermarkRequest
 * @return AddWatermarkResponse
 */
AddWatermarkResponse Client::addWatermark(const AddWatermarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addWatermarkWithOptions(request, runtime);
}

/**
 * @summary Grants a RAM user or RAM role permissions to access ApsaraVideo VOD applications.
 *
 * @description > You can grant a RAM user or RAM role permissions to access up to 10 applications.
 *
 * @param request AttachAppPolicyToIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachAppPolicyToIdentityResponse
 */
AttachAppPolicyToIdentityResponse Client::attachAppPolicyToIdentityWithOptions(const AttachAppPolicyToIdentityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasIdentityName()) {
    query["IdentityName"] = request.identityName();
  }

  if (!!request.hasIdentityType()) {
    query["IdentityType"] = request.identityType();
  }

  if (!!request.hasPolicyNames()) {
    query["PolicyNames"] = request.policyNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AttachAppPolicyToIdentity"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AttachAppPolicyToIdentityResponse>();
}

/**
 * @summary Grants a RAM user or RAM role permissions to access ApsaraVideo VOD applications.
 *
 * @description > You can grant a RAM user or RAM role permissions to access up to 10 applications.
 *
 * @param request AttachAppPolicyToIdentityRequest
 * @return AttachAppPolicyToIdentityResponse
 */
AttachAppPolicyToIdentityResponse Client::attachAppPolicyToIdentity(const AttachAppPolicyToIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachAppPolicyToIdentityWithOptions(request, runtime);
}

/**
 * @summary Obtains the basic information and source file information of multiple media assets.
 *
 * @description *   You can specify up to 20 audio or video file IDs in each request.
 * *   After a media file is uploaded, ApsaraVideo VOD processes the source file. Then, information about the media file is asynchronously generated. You can configure notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event and call this operation to query information about a media file after you receive notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event. For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
 *
 * @param request BatchGetMediaInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetMediaInfosResponse
 */
BatchGetMediaInfosResponse Client::batchGetMediaInfosWithOptions(const BatchGetMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.mediaIds();
  }

  if (!!request.hasReferenceIds()) {
    query["ReferenceIds"] = request.referenceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchGetMediaInfos"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGetMediaInfosResponse>();
}

/**
 * @summary Obtains the basic information and source file information of multiple media assets.
 *
 * @description *   You can specify up to 20 audio or video file IDs in each request.
 * *   After a media file is uploaded, ApsaraVideo VOD processes the source file. Then, information about the media file is asynchronously generated. You can configure notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event and call this operation to query information about a media file after you receive notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event. For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
 *
 * @param request BatchGetMediaInfosRequest
 * @return BatchGetMediaInfosResponse
 */
BatchGetMediaInfosResponse Client::batchGetMediaInfos(const BatchGetMediaInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetMediaInfosWithOptions(request, runtime);
}

/**
 * @summary Configures one or more domain names for CDN.
 *
 * @description > This operation is available only in the **China (Shanghai)** region.
 *
 * @param request BatchSetVodDomainConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchSetVodDomainConfigsResponse
 */
BatchSetVodDomainConfigsResponse Client::batchSetVodDomainConfigsWithOptions(const BatchSetVodDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.domainNames();
  }

  if (!!request.hasFunctions()) {
    query["Functions"] = request.functions();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchSetVodDomainConfigs"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchSetVodDomainConfigsResponse>();
}

/**
 * @summary Configures one or more domain names for CDN.
 *
 * @description > This operation is available only in the **China (Shanghai)** region.
 *
 * @param request BatchSetVodDomainConfigsRequest
 * @return BatchSetVodDomainConfigsResponse
 */
BatchSetVodDomainConfigsResponse Client::batchSetVodDomainConfigs(const BatchSetVodDomainConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchSetVodDomainConfigsWithOptions(request, runtime);
}

/**
 * @summary Enables accelerated domain names that are in the disabled state.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   If the domain name that you want to enable is invalid or your Alibaba Cloud account has overdue payments, you cannot call this operation to enable the domain name.
 *
 * @param request BatchStartVodDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchStartVodDomainResponse
 */
BatchStartVodDomainResponse Client::batchStartVodDomainWithOptions(const BatchStartVodDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.domainNames();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchStartVodDomain"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchStartVodDomainResponse>();
}

/**
 * @summary Enables accelerated domain names that are in the disabled state.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   If the domain name that you want to enable is invalid or your Alibaba Cloud account has overdue payments, you cannot call this operation to enable the domain name.
 *
 * @param request BatchStartVodDomainRequest
 * @return BatchStartVodDomainResponse
 */
BatchStartVodDomainResponse Client::batchStartVodDomain(const BatchStartVodDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchStartVodDomainWithOptions(request, runtime);
}

/**
 * @summary Disables accelerated domain names.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   After you disable an accelerated domain name, the information about the domain name is retained. The system automatically reroutes all the requests that are destined for the domain name to the origin server.
 *
 * @param request BatchStopVodDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchStopVodDomainResponse
 */
BatchStopVodDomainResponse Client::batchStopVodDomainWithOptions(const BatchStopVodDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.domainNames();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchStopVodDomain"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchStopVodDomainResponse>();
}

/**
 * @summary Disables accelerated domain names.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   After you disable an accelerated domain name, the information about the domain name is retained. The system automatically reroutes all the requests that are destined for the domain name to the origin server.
 *
 * @param request BatchStopVodDomainRequest
 * @return BatchStopVodDomainResponse
 */
BatchStopVodDomainResponse Client::batchStopVodDomain(const BatchStopVodDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchStopVodDomainWithOptions(request, runtime);
}

/**
 * @summary Cancels URL-based upload jobs in the queue.
 *
 * @description *   You can cancel only URL-based upload jobs in the **Pending** state. You can query the status of a URL-based upload job by calling the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation.
 * *   You cannot cancel an upload job that already starts.
 * *   You must specify either JobIds or UploadUrls. If you specify both parameters, only JobIds takes effect.
 *
 * @param request CancelUrlUploadJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelUrlUploadJobsResponse
 */
CancelUrlUploadJobsResponse Client::cancelUrlUploadJobsWithOptions(const CancelUrlUploadJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobIds()) {
    query["JobIds"] = request.jobIds();
  }

  if (!!request.hasUploadUrls()) {
    query["UploadUrls"] = request.uploadUrls();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelUrlUploadJobs"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelUrlUploadJobsResponse>();
}

/**
 * @summary Cancels URL-based upload jobs in the queue.
 *
 * @description *   You can cancel only URL-based upload jobs in the **Pending** state. You can query the status of a URL-based upload job by calling the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation.
 * *   You cannot cancel an upload job that already starts.
 * *   You must specify either JobIds or UploadUrls. If you specify both parameters, only JobIds takes effect.
 *
 * @param request CancelUrlUploadJobsRequest
 * @return CancelUrlUploadJobsResponse
 */
CancelUrlUploadJobsResponse Client::cancelUrlUploadJobs(const CancelUrlUploadJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelUrlUploadJobsWithOptions(request, runtime);
}

/**
 * @summary Transfers a resource to a specified resource group.
 *
 * @param request ChangeResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceRegionId()) {
    query["ResourceRegionId"] = request.resourceRegionId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2017-03-21"},
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
 * @summary Transfers a resource to a specified resource group.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Creates an application.
 *
 * @description You can create up to 10 applications within an Alibaba Cloud account. For more information, see [Multi-application service](https://help.aliyun.com/document_detail/113600.html).
 * ### QPS limits
 * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits on API operations in ApsaraVideo VOD](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request CreateAppInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppInfoResponse
 */
CreateAppInfoResponse Client::createAppInfoWithOptions(const CreateAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppInfo"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppInfoResponse>();
}

/**
 * @summary Creates an application.
 *
 * @description You can create up to 10 applications within an Alibaba Cloud account. For more information, see [Multi-application service](https://help.aliyun.com/document_detail/113600.html).
 * ### QPS limits
 * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits on API operations in ApsaraVideo VOD](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request CreateAppInfoRequest
 * @return CreateAppInfoResponse
 */
CreateAppInfoResponse Client::createAppInfo(const CreateAppInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppInfoWithOptions(request, runtime);
}

/**
 * @summary Performs manual review on media files, such as audio and video files.
 *
 * @param request CreateAuditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAuditResponse
 */
CreateAuditResponse Client::createAuditWithOptions(const CreateAuditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditContent()) {
    query["AuditContent"] = request.auditContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAudit"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAuditResponse>();
}

/**
 * @summary Performs manual review on media files, such as audio and video files.
 *
 * @param request CreateAuditRequest
 * @return CreateAuditResponse
 */
CreateAuditResponse Client::createAudit(const CreateAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAuditWithOptions(request, runtime);
}

/**
 * @summary Obtains an upload URL and an upload credential for an auxiliary media asset such as a watermark image, subtitle file, or material and generates the media ID. ApsaraVideo VOD issues upload URLs and credentials to perform authorization and ensure security. This prevents unauthorized users from uploading media files. ApsaraVideo VOD generates media IDs together with upload URLs and credentials. Media IDs are used in lifecycle management and media processing.
 *
 * @description *   **Make sure that you understand the billing method and prices of ApsaraVideo VOD before you call this operation. You are charged storage fees after you upload media files to ApsaraVideo VOD. For more information, see [Billing of media asset storage](~~188308#section_e97_xrp_mzz~~). If you have activated the acceleration service, you are charged acceleration fees when you upload media files to ApsaraVideo VOD. For more information, see [Billing of acceleration traffic](~~188310#section_sta_zm2_tsv~~).**
 * *   You can call this operation only to obtain the upload URLs and credentials for media files and create media assets in ApsaraVideo VOD. You cannot call this operation to upload media files. For more information about how to upload media files by calling API operations, see [Upload media files by calling API operations](https://help.aliyun.com/document_detail/476208.html).
 * *   If the upload credential expires after 3,000 seconds, you can call the CreateUploadAttachedMedia operation again to obtain a new upload URL and a new upload credential.
 * *   You can configure a callback to receive an [AttachedMediaUploadComplete](https://help.aliyun.com/document_detail/103250.html) event notification to determine whether the upload is successful.
 * *   You must obtain a URL and a credential before you upload a media file to ApsaraVideo VOD. ApsaraVideo VOD supports multiple upload methods. Each method has different requirements on upload URLs and credentials. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
 *
 * @param request CreateUploadAttachedMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUploadAttachedMediaResponse
 */
CreateUploadAttachedMediaResponse Client::createUploadAttachedMediaWithOptions(const CreateUploadAttachedMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.businessType();
  }

  if (!!request.hasCateIds()) {
    query["CateIds"] = request.cateIds();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasFileSize()) {
    query["FileSize"] = request.fileSize();
  }

  if (!!request.hasMediaExt()) {
    query["MediaExt"] = request.mediaExt();
  }

  if (!!request.hasStorageLocation()) {
    query["StorageLocation"] = request.storageLocation();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
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
    {"action" , "CreateUploadAttachedMedia"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUploadAttachedMediaResponse>();
}

/**
 * @summary Obtains an upload URL and an upload credential for an auxiliary media asset such as a watermark image, subtitle file, or material and generates the media ID. ApsaraVideo VOD issues upload URLs and credentials to perform authorization and ensure security. This prevents unauthorized users from uploading media files. ApsaraVideo VOD generates media IDs together with upload URLs and credentials. Media IDs are used in lifecycle management and media processing.
 *
 * @description *   **Make sure that you understand the billing method and prices of ApsaraVideo VOD before you call this operation. You are charged storage fees after you upload media files to ApsaraVideo VOD. For more information, see [Billing of media asset storage](~~188308#section_e97_xrp_mzz~~). If you have activated the acceleration service, you are charged acceleration fees when you upload media files to ApsaraVideo VOD. For more information, see [Billing of acceleration traffic](~~188310#section_sta_zm2_tsv~~).**
 * *   You can call this operation only to obtain the upload URLs and credentials for media files and create media assets in ApsaraVideo VOD. You cannot call this operation to upload media files. For more information about how to upload media files by calling API operations, see [Upload media files by calling API operations](https://help.aliyun.com/document_detail/476208.html).
 * *   If the upload credential expires after 3,000 seconds, you can call the CreateUploadAttachedMedia operation again to obtain a new upload URL and a new upload credential.
 * *   You can configure a callback to receive an [AttachedMediaUploadComplete](https://help.aliyun.com/document_detail/103250.html) event notification to determine whether the upload is successful.
 * *   You must obtain a URL and a credential before you upload a media file to ApsaraVideo VOD. ApsaraVideo VOD supports multiple upload methods. Each method has different requirements on upload URLs and credentials. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
 *
 * @param request CreateUploadAttachedMediaRequest
 * @return CreateUploadAttachedMediaResponse
 */
CreateUploadAttachedMediaResponse Client::createUploadAttachedMedia(const CreateUploadAttachedMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUploadAttachedMediaWithOptions(request, runtime);
}

/**
 * @summary Queries a URL and a credential for uploading an image.
 *
 * @description *   **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. You are charged storage fees after you upload media files to ApsaraVideo VOD. For more information, see [Billing of media asset storage](~~188308#section_e97_xrp_mzz~~). If you have activated the acceleration service, you are charged acceleration fees when you upload media files to ApsaraVideo VOD. For more information, see [Billing of acceleration traffic](~~188310#section_sta_zm2_tsv~~).**
 * *   You must obtain a URL and a credential before you upload an image to ApsaraVideo VOD. ApsaraVideo VOD provides multiple upload methods. You can upload files by using server upload SDKs, client upload SDKs, URLs, Object Storage Service (OSS) API, or OSS SDKs. Each upload method has different requirements for obtaining upload URLs and credentials. For more information, see the "Usage notes" section of the [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html) topic.
 * *   You cannot refresh the upload URL or credential when you upload images. If the image upload credential expires, you can call this operation to obtain a new upload URL and credential. By default, the validity period of an image upload credential is 3,000 seconds.
 * *   You can call the [CreateUploadAttachedMedia](https://help.aliyun.com/document_detail/98467.html) operation to upload image watermarks.
 * *   You can configure a callback for [ImageUploadComplete](https://help.aliyun.com/document_detail/91968.html) to receive notifications about the image upload status.
 *
 * @param request CreateUploadImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUploadImageResponse
 */
CreateUploadImageResponse Client::createUploadImageWithOptions(const CreateUploadImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCateId()) {
    query["CateId"] = request.cateId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasImageExt()) {
    query["ImageExt"] = request.imageExt();
  }

  if (!!request.hasImageType()) {
    query["ImageType"] = request.imageType();
  }

  if (!!request.hasOriginalFileName()) {
    query["OriginalFileName"] = request.originalFileName();
  }

  if (!!request.hasStorageLocation()) {
    query["StorageLocation"] = request.storageLocation();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
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
    {"action" , "CreateUploadImage"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUploadImageResponse>();
}

/**
 * @summary Queries a URL and a credential for uploading an image.
 *
 * @description *   **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. You are charged storage fees after you upload media files to ApsaraVideo VOD. For more information, see [Billing of media asset storage](~~188308#section_e97_xrp_mzz~~). If you have activated the acceleration service, you are charged acceleration fees when you upload media files to ApsaraVideo VOD. For more information, see [Billing of acceleration traffic](~~188310#section_sta_zm2_tsv~~).**
 * *   You must obtain a URL and a credential before you upload an image to ApsaraVideo VOD. ApsaraVideo VOD provides multiple upload methods. You can upload files by using server upload SDKs, client upload SDKs, URLs, Object Storage Service (OSS) API, or OSS SDKs. Each upload method has different requirements for obtaining upload URLs and credentials. For more information, see the "Usage notes" section of the [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html) topic.
 * *   You cannot refresh the upload URL or credential when you upload images. If the image upload credential expires, you can call this operation to obtain a new upload URL and credential. By default, the validity period of an image upload credential is 3,000 seconds.
 * *   You can call the [CreateUploadAttachedMedia](https://help.aliyun.com/document_detail/98467.html) operation to upload image watermarks.
 * *   You can configure a callback for [ImageUploadComplete](https://help.aliyun.com/document_detail/91968.html) to receive notifications about the image upload status.
 *
 * @param request CreateUploadImageRequest
 * @return CreateUploadImageResponse
 */
CreateUploadImageResponse Client::createUploadImage(const CreateUploadImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUploadImageWithOptions(request, runtime);
}

/**
 * @summary Obtains an upload URL and an upload credential for uploading an audio or video file and generates the audio or video ID. ApsaraVideo VOD issues upload URLs and credentials to perform authorization and ensure security. This prevents unauthorized users from uploading media files. ApsaraVideo VOD generates media IDs, video IDs, and image IDs together with upload URLs and credentials. Media IDs are used in lifecycle management and media processing.
 *
 * @description *   **Make sure that you understand the billing method and prices of ApsaraVideo VOD before you call this operation. You are charged storage fees after you upload media files to ApsaraVideo VOD. For more information, see [Billing of media asset storage](~~188308#section_e97_xrp_mzz~~). If you have activated the acceleration service, you are charged acceleration fees when you upload media files to ApsaraVideo VOD. For more information, see [Billing of acceleration traffic](~~188310#section_sta_zm2_tsv~~).**
 * *   You can call this operation to obtain upload URLs and credentials for video and audio files. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
 * *   You can call this operation only to obtain the upload URLs and credentials for media files and create media assets in ApsaraVideo VOD. You cannot call this operation to upload media files. For more information about how to upload media files by calling API operations, see [Upload media files by calling API operations](https://help.aliyun.com/document_detail/476208.html).
 * *   If the upload credential expires, call the [RefreshUploadVideo](~~RefreshUploadVideo~~) operation to obtain a new upload credential. The default validity period of an upload credential is 3,000 seconds.
 * *   You can configure a callback to receive an event notification when an audio or video file is uploaded. Alternatively, after you upload an audio or video file, you can call the [GetMezzanineInfo](https://help.aliyun.com/document_detail/59624.html) operation to determine whether the upload is successful. For more information, see [Overview](https://help.aliyun.com/document_detail/55396.html).
 * *   The value of the VideoId parameter that is returned after you call this operation can be used for media processing or the lifecycle management of media assets.
 * *   You must obtain a URL and a credential before you upload a media file to ApsaraVideo VOD. ApsaraVideo VOD supports multiple upload methods. Each method has different requirements on upload URLs and credentials. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
 *
 * @param request CreateUploadVideoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUploadVideoResponse
 */
CreateUploadVideoResponse Client::createUploadVideoWithOptions(const CreateUploadVideoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCateId()) {
    query["CateId"] = request.cateId();
  }

  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.coverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.fileName();
  }

  if (!!request.hasFileSize()) {
    query["FileSize"] = request.fileSize();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.referenceId();
  }

  if (!!request.hasStorageLocation()) {
    query["StorageLocation"] = request.storageLocation();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTemplateGroupId()) {
    query["TemplateGroupId"] = request.templateGroupId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.workflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUploadVideo"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUploadVideoResponse>();
}

/**
 * @summary Obtains an upload URL and an upload credential for uploading an audio or video file and generates the audio or video ID. ApsaraVideo VOD issues upload URLs and credentials to perform authorization and ensure security. This prevents unauthorized users from uploading media files. ApsaraVideo VOD generates media IDs, video IDs, and image IDs together with upload URLs and credentials. Media IDs are used in lifecycle management and media processing.
 *
 * @description *   **Make sure that you understand the billing method and prices of ApsaraVideo VOD before you call this operation. You are charged storage fees after you upload media files to ApsaraVideo VOD. For more information, see [Billing of media asset storage](~~188308#section_e97_xrp_mzz~~). If you have activated the acceleration service, you are charged acceleration fees when you upload media files to ApsaraVideo VOD. For more information, see [Billing of acceleration traffic](~~188310#section_sta_zm2_tsv~~).**
 * *   You can call this operation to obtain upload URLs and credentials for video and audio files. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
 * *   You can call this operation only to obtain the upload URLs and credentials for media files and create media assets in ApsaraVideo VOD. You cannot call this operation to upload media files. For more information about how to upload media files by calling API operations, see [Upload media files by calling API operations](https://help.aliyun.com/document_detail/476208.html).
 * *   If the upload credential expires, call the [RefreshUploadVideo](~~RefreshUploadVideo~~) operation to obtain a new upload credential. The default validity period of an upload credential is 3,000 seconds.
 * *   You can configure a callback to receive an event notification when an audio or video file is uploaded. Alternatively, after you upload an audio or video file, you can call the [GetMezzanineInfo](https://help.aliyun.com/document_detail/59624.html) operation to determine whether the upload is successful. For more information, see [Overview](https://help.aliyun.com/document_detail/55396.html).
 * *   The value of the VideoId parameter that is returned after you call this operation can be used for media processing or the lifecycle management of media assets.
 * *   You must obtain a URL and a credential before you upload a media file to ApsaraVideo VOD. ApsaraVideo VOD supports multiple upload methods. Each method has different requirements on upload URLs and credentials. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
 *
 * @param request CreateUploadVideoRequest
 * @return CreateUploadVideoResponse
 */
CreateUploadVideoResponse Client::createUploadVideo(const CreateUploadVideoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUploadVideoWithOptions(request, runtime);
}

/**
 * @summary Decrypts the ciphertext specified by CiphertextBlob in the Key Management Service (KMS) data key.
 *
 * @param request DecryptKMSDataKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DecryptKMSDataKeyResponse
 */
DecryptKMSDataKeyResponse Client::decryptKMSDataKeyWithOptions(const DecryptKMSDataKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCipherText()) {
    query["CipherText"] = request.cipherText();
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
    {"action" , "DecryptKMSDataKey"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DecryptKMSDataKeyResponse>();
}

/**
 * @summary Decrypts the ciphertext specified by CiphertextBlob in the Key Management Service (KMS) data key.
 *
 * @param request DecryptKMSDataKeyRequest
 * @return DecryptKMSDataKeyResponse
 */
DecryptKMSDataKeyResponse Client::decryptKMSDataKey(const DecryptKMSDataKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return decryptKMSDataKeyWithOptions(request, runtime);
}

/**
 * @summary Deletes the information about one or more images that are submitted for AI processing.
 *
 * @description *   Regions that support this operation: **China (Beijing)** and **China (Shanghai)**.
 * *   This operation deletes only information about images that are submitted for AI processing. The image files are not deleted.
 *
 * @param request DeleteAIImageInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAIImageInfosResponse
 */
DeleteAIImageInfosResponse Client::deleteAIImageInfosWithOptions(const DeleteAIImageInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAIImageInfoIds()) {
    query["AIImageInfoIds"] = request.AIImageInfoIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAIImageInfos"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAIImageInfosResponse>();
}

/**
 * @summary Deletes the information about one or more images that are submitted for AI processing.
 *
 * @description *   Regions that support this operation: **China (Beijing)** and **China (Shanghai)**.
 * *   This operation deletes only information about images that are submitted for AI processing. The image files are not deleted.
 *
 * @param request DeleteAIImageInfosRequest
 * @return DeleteAIImageInfosResponse
 */
DeleteAIImageInfosResponse Client::deleteAIImageInfos(const DeleteAIImageInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAIImageInfosWithOptions(request, runtime);
}

/**
 * @summary Deletes an AI template.
 *
 * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * *   You cannot delete an AI template that is set as the default template.
 *
 * @param request DeleteAITemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAITemplateResponse
 */
DeleteAITemplateResponse Client::deleteAITemplateWithOptions(const DeleteAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAITemplate"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAITemplateResponse>();
}

/**
 * @summary Deletes an AI template.
 *
 * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * *   You cannot delete an AI template that is set as the default template.
 *
 * @param request DeleteAITemplateRequest
 * @return DeleteAITemplateResponse
 */
DeleteAITemplateResponse Client::deleteAITemplate(const DeleteAITemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAITemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes an application.
 *
 * @description Application with resources can not be deleted.
 *
 * @param request DeleteAppInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppInfoResponse
 */
DeleteAppInfoResponse Client::deleteAppInfoWithOptions(const DeleteAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAppInfo"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppInfoResponse>();
}

/**
 * @summary Deletes an application.
 *
 * @description Application with resources can not be deleted.
 *
 * @param request DeleteAppInfoRequest
 * @return DeleteAppInfoResponse
 */
DeleteAppInfoResponse Client::deleteAppInfo(const DeleteAppInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppInfoWithOptions(request, runtime);
}

/**
 * @summary Deletes auxiliary media assets from ApsaraVideo VOD. You can delete multiple auxiliary media assets such as watermark images, subtitle files, and materials in a batch.
 *
 * @description *   **This operation physically deletes auxiliary media assets. You cannot recover the auxiliary media assets that you deleted. Exercise caution when you call this operation.**
 * *   You can delete a maximum of 20 auxiliary media assets in one request.
 *
 * @param request DeleteAttachedMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAttachedMediaResponse
 */
DeleteAttachedMediaResponse Client::deleteAttachedMediaWithOptions(const DeleteAttachedMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.mediaIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAttachedMedia"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAttachedMediaResponse>();
}

/**
 * @summary Deletes auxiliary media assets from ApsaraVideo VOD. You can delete multiple auxiliary media assets such as watermark images, subtitle files, and materials in a batch.
 *
 * @description *   **This operation physically deletes auxiliary media assets. You cannot recover the auxiliary media assets that you deleted. Exercise caution when you call this operation.**
 * *   You can delete a maximum of 20 auxiliary media assets in one request.
 *
 * @param request DeleteAttachedMediaRequest
 * @return DeleteAttachedMediaResponse
 */
DeleteAttachedMediaResponse Client::deleteAttachedMedia(const DeleteAttachedMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAttachedMediaWithOptions(request, runtime);
}

/**
 * @summary Deletes a category and its subcategories.
 *
 * @description *   **After you call this operation to delete a category, all subcategories including level 2 and level 3 categories are deleted at the same time. Exercise caution when you call this operation.**
 * *   If you have classified specific media resources to a category, the category names labeled on these media resources are automatically deleted when you delete the category.
 *
 * @param request DeleteCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCategoryResponse
 */
DeleteCategoryResponse Client::deleteCategoryWithOptions(const DeleteCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCateId()) {
    query["CateId"] = request.cateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCategory"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCategoryResponse>();
}

/**
 * @summary Deletes a category and its subcategories.
 *
 * @description *   **After you call this operation to delete a category, all subcategories including level 2 and level 3 categories are deleted at the same time. Exercise caution when you call this operation.**
 * *   If you have classified specific media resources to a category, the category names labeled on these media resources are automatically deleted when you delete the category.
 *
 * @param request DeleteCategoryRequest
 * @return DeleteCategoryResponse
 */
DeleteCategoryResponse Client::deleteCategory(const DeleteCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCategoryWithOptions(request, runtime);
}

/**
 * @summary Deletes the information about animated stickers.
 *
 * @description > This operation deletes only the information about animated stickers, but not the animated stickers themselves.
 *
 * @param request DeleteDynamicImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDynamicImageResponse
 */
DeleteDynamicImageResponse Client::deleteDynamicImageWithOptions(const DeleteDynamicImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDynamicImageIds()) {
    query["DynamicImageIds"] = request.dynamicImageIds();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDynamicImage"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDynamicImageResponse>();
}

/**
 * @summary Deletes the information about animated stickers.
 *
 * @description > This operation deletes only the information about animated stickers, but not the animated stickers themselves.
 *
 * @param request DeleteDynamicImageRequest
 * @return DeleteDynamicImageResponse
 */
DeleteDynamicImageResponse Client::deleteDynamicImage(const DeleteDynamicImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDynamicImageWithOptions(request, runtime);
}

/**
 * @summary Deletes online editing projects.
 *
 * @description *   You can call this operation to delete multiple online editing projects at a time.
 *
 * @param request DeleteEditingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEditingProjectResponse
 */
DeleteEditingProjectResponse Client::deleteEditingProjectWithOptions(const DeleteEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProjectIds()) {
    query["ProjectIds"] = request.projectIds();
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
    {"action" , "DeleteEditingProject"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEditingProjectResponse>();
}

/**
 * @summary Deletes online editing projects.
 *
 * @description *   You can call this operation to delete multiple online editing projects at a time.
 *
 * @param request DeleteEditingProjectRequest
 * @return DeleteEditingProjectResponse
 */
DeleteEditingProjectResponse Client::deleteEditingProject(const DeleteEditingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEditingProjectWithOptions(request, runtime);
}

/**
 * @summary 删除剪辑资源
 *
 * @param request DeleteEditingProjectMaterialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEditingProjectMaterialsResponse
 */
DeleteEditingProjectMaterialsResponse Client::deleteEditingProjectMaterialsWithOptions(const DeleteEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaterialIds()) {
    query["MaterialIds"] = request.materialIds();
  }

  if (!!request.hasMaterialType()) {
    query["MaterialType"] = request.materialType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
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
    {"action" , "DeleteEditingProjectMaterials"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEditingProjectMaterialsResponse>();
}

/**
 * @summary 删除剪辑资源
 *
 * @param request DeleteEditingProjectMaterialsRequest
 * @return DeleteEditingProjectMaterialsResponse
 */
DeleteEditingProjectMaterialsResponse Client::deleteEditingProjectMaterials(const DeleteEditingProjectMaterialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEditingProjectMaterialsWithOptions(request, runtime);
}

/**
 * @summary Deletes uploaded images and video snapshots that are automatically captured.
 *
 * @description *   **After you call this operation to delete an image, the source file is permanently deleted and cannot be recovered. Exercise caution when you call this operation.**
 * *   If some images are cached on Alibaba Cloud CDN points of presence (POPs), the image URLs do not immediately become invalid.
 * *   You can call this operation to delete uploaded images and video snapshots.
 *
 * @param request DeleteImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteImageResponse
 */
DeleteImageResponse Client::deleteImageWithOptions(const DeleteImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeleteImageType()) {
    query["DeleteImageType"] = request.deleteImageType();
  }

  if (!!request.hasImageIds()) {
    query["ImageIds"] = request.imageIds();
  }

  if (!!request.hasImageType()) {
    query["ImageType"] = request.imageType();
  }

  if (!!request.hasImageURLs()) {
    query["ImageURLs"] = request.imageURLs();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteImage"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteImageResponse>();
}

/**
 * @summary Deletes uploaded images and video snapshots that are automatically captured.
 *
 * @description *   **After you call this operation to delete an image, the source file is permanently deleted and cannot be recovered. Exercise caution when you call this operation.**
 * *   If some images are cached on Alibaba Cloud CDN points of presence (POPs), the image URLs do not immediately become invalid.
 * *   You can call this operation to delete uploaded images and video snapshots.
 *
 * @param request DeleteImageRequest
 * @return DeleteImageResponse
 */
DeleteImageResponse Client::deleteImage(const DeleteImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteImageWithOptions(request, runtime);
}

/**
 * @summary Deletes the callback method, callback URL, and event type of an event notification.
 *
 * @description > For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
 *
 * @param request DeleteMessageCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMessageCallbackResponse
 */
DeleteMessageCallbackResponse Client::deleteMessageCallbackWithOptions(const DeleteMessageCallbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMessageCallback"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMessageCallbackResponse>();
}

/**
 * @summary Deletes the callback method, callback URL, and event type of an event notification.
 *
 * @description > For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
 *
 * @param request DeleteMessageCallbackRequest
 * @return DeleteMessageCallbackResponse
 */
DeleteMessageCallbackResponse Client::deleteMessageCallback(const DeleteMessageCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMessageCallbackWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more source files at a time.
 *
 * @description All media processing operations in ApsaraVideo VOD, such as transcoding, snapshot capture, and content moderation, are performed based on source files. If you delete the source files, you cannot perform media processing operations. Exercise caution when you call this operation.
 *
 * @param request DeleteMezzaninesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMezzaninesResponse
 */
DeleteMezzaninesResponse Client::deleteMezzaninesWithOptions(const DeleteMezzaninesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasReferenceIds()) {
    query["ReferenceIds"] = request.referenceIds();
  }

  if (!!request.hasVideoIds()) {
    query["VideoIds"] = request.videoIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMezzanines"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMezzaninesResponse>();
}

/**
 * @summary Deletes one or more source files at a time.
 *
 * @description All media processing operations in ApsaraVideo VOD, such as transcoding, snapshot capture, and content moderation, are performed based on source files. If you delete the source files, you cannot perform media processing operations. Exercise caution when you call this operation.
 *
 * @param request DeleteMezzaninesRequest
 * @return DeleteMezzaninesResponse
 */
DeleteMezzaninesResponse Client::deleteMezzanines(const DeleteMezzaninesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMezzaninesWithOptions(request, runtime);
}

/**
 * @summary Deletes the parts generated during an upload.
 *
 * @description *   During multipart upload, useless parts may be retained if the upload fails. These useless parts are automatically deleted after 7 days. You can call this operation to delete the generated parts after the upload is successful or fails.
 * *   This operation does not delete the source file or transcoded file, but deletes only the parts generated during the upload.
 * *   If you call the [DeleteVideo](https://help.aliyun.com/document_detail/52837.html) operation, the entire video file is deleted, including the generated parts.
 *
 * @param request DeleteMultipartUploadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMultipartUploadResponse
 */
DeleteMultipartUploadResponse Client::deleteMultipartUploadWithOptions(const DeleteMultipartUploadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMultipartUpload"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMultipartUploadResponse>();
}

/**
 * @summary Deletes the parts generated during an upload.
 *
 * @description *   During multipart upload, useless parts may be retained if the upload fails. These useless parts are automatically deleted after 7 days. You can call this operation to delete the generated parts after the upload is successful or fails.
 * *   This operation does not delete the source file or transcoded file, but deletes only the parts generated during the upload.
 * *   If you call the [DeleteVideo](https://help.aliyun.com/document_detail/52837.html) operation, the entire video file is deleted, including the generated parts.
 *
 * @param request DeleteMultipartUploadRequest
 * @return DeleteMultipartUploadResponse
 */
DeleteMultipartUploadResponse Client::deleteMultipartUpload(const DeleteMultipartUploadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMultipartUploadWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more video or audio streams and their storage files at a time.
 *
 * @param request DeleteStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStreamResponse
 */
DeleteStreamResponse Client::deleteStreamWithOptions(const DeleteStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobIds()) {
    query["JobIds"] = request.jobIds();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.referenceId();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteStream"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteStreamResponse>();
}

/**
 * @summary Deletes one or more video or audio streams and their storage files at a time.
 *
 * @param request DeleteStreamRequest
 * @return DeleteStreamResponse
 */
DeleteStreamResponse Client::deleteStream(const DeleteStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStreamWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more transcoding templates from a transcoding template group or forcibly deletes a transcoding template group.
 *
 * @description *   You cannot call this operation to delete the default transcoding template. You can delete the transcoding template when it is no longer specified as the default one.
 * *   For security purposes, you cannot add, modify, or delete transcoding templates in a transcoding template group that is locked. To check whether a transcoding template group is locked, call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation and obtain the Locked parameter from the response. To modify transcoding templates within a locked transcoding template group, you must call the [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to unlock the transcoding template group first.
 *
 * @param request DeleteTranscodeTemplateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTranscodeTemplateGroupResponse
 */
DeleteTranscodeTemplateGroupResponse Client::deleteTranscodeTemplateGroupWithOptions(const DeleteTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForceDelGroup()) {
    query["ForceDelGroup"] = request.forceDelGroup();
  }

  if (!!request.hasTranscodeTemplateGroupId()) {
    query["TranscodeTemplateGroupId"] = request.transcodeTemplateGroupId();
  }

  if (!!request.hasTranscodeTemplateIds()) {
    query["TranscodeTemplateIds"] = request.transcodeTemplateIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTranscodeTemplateGroup"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTranscodeTemplateGroupResponse>();
}

/**
 * @summary Deletes one or more transcoding templates from a transcoding template group or forcibly deletes a transcoding template group.
 *
 * @description *   You cannot call this operation to delete the default transcoding template. You can delete the transcoding template when it is no longer specified as the default one.
 * *   For security purposes, you cannot add, modify, or delete transcoding templates in a transcoding template group that is locked. To check whether a transcoding template group is locked, call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation and obtain the Locked parameter from the response. To modify transcoding templates within a locked transcoding template group, you must call the [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to unlock the transcoding template group first.
 *
 * @param request DeleteTranscodeTemplateGroupRequest
 * @return DeleteTranscodeTemplateGroupResponse
 */
DeleteTranscodeTemplateGroupResponse Client::deleteTranscodeTemplateGroup(const DeleteTranscodeTemplateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTranscodeTemplateGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more videos at a time, including their mezzanine files, transcoded stream files, and thumbnail snapshots.
 *
 * @description *   This operation physically deletes videos. Deleted videos cannot be recovered. Exercise caution when you call this operation.
 * *   You can call this operation to delete multiple videos at a time.
 * *   When you delete a video, its source file, transcoded stream file, and thumbnail screenshot are also deleted. However, the Alibaba Cloud Content Delivery Network (CDN) cache is not refreshed simultaneously. You can use the refresh feature in the ApsaraVideo VOD console to clear garbage data on CDN nodes. For more information, see [Refresh and prefetch](https://help.aliyun.com/document_detail/86098.html).
 *
 * @param request DeleteVideoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVideoResponse
 */
DeleteVideoResponse Client::deleteVideoWithOptions(const DeleteVideoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReferenceIds()) {
    query["ReferenceIds"] = request.referenceIds();
  }

  if (!!request.hasVideoIds()) {
    query["VideoIds"] = request.videoIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVideo"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVideoResponse>();
}

/**
 * @summary Deletes one or more videos at a time, including their mezzanine files, transcoded stream files, and thumbnail snapshots.
 *
 * @description *   This operation physically deletes videos. Deleted videos cannot be recovered. Exercise caution when you call this operation.
 * *   You can call this operation to delete multiple videos at a time.
 * *   When you delete a video, its source file, transcoded stream file, and thumbnail screenshot are also deleted. However, the Alibaba Cloud Content Delivery Network (CDN) cache is not refreshed simultaneously. You can use the refresh feature in the ApsaraVideo VOD console to clear garbage data on CDN nodes. For more information, see [Refresh and prefetch](https://help.aliyun.com/document_detail/86098.html).
 *
 * @param request DeleteVideoRequest
 * @return DeleteVideoResponse
 */
DeleteVideoResponse Client::deleteVideo(const DeleteVideoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVideoWithOptions(request, runtime);
}

/**
 * @summary Removes a domain name for CDN from ApsaraVideo VOD.
 *
 * @description > *   This operation is available only in the **China (Shanghai)** region.
 * > *   After a domain name for CDN is removed from ApsaraVideo VOD, the domain name becomes unavailable. Proceed with caution. We recommend that you restore the A record at your DNS service provider before you remove the domain name for CDN.
 * > *   After you call this operation to remove a domain name for CDN from ApsaraVideo VOD, all records that are related to the domain name are deleted. If you only want to disable a domain name for CDN, call the [BatchStopVodDomain](https://help.aliyun.com/document_detail/120208.html) operation.
 *
 * @param request DeleteVodDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVodDomainResponse
 */
DeleteVodDomainResponse Client::deleteVodDomainWithOptions(const DeleteVodDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVodDomain"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVodDomainResponse>();
}

/**
 * @summary Removes a domain name for CDN from ApsaraVideo VOD.
 *
 * @description > *   This operation is available only in the **China (Shanghai)** region.
 * > *   After a domain name for CDN is removed from ApsaraVideo VOD, the domain name becomes unavailable. Proceed with caution. We recommend that you restore the A record at your DNS service provider before you remove the domain name for CDN.
 * > *   After you call this operation to remove a domain name for CDN from ApsaraVideo VOD, all records that are related to the domain name are deleted. If you only want to disable a domain name for CDN, call the [BatchStopVodDomain](https://help.aliyun.com/document_detail/120208.html) operation.
 *
 * @param request DeleteVodDomainRequest
 * @return DeleteVodDomainResponse
 */
DeleteVodDomainResponse Client::deleteVodDomain(const DeleteVodDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVodDomainWithOptions(request, runtime);
}

/**
 * @summary Deletes the configurations of a domain name for CDN.
 *
 * @description > 
 * *   This operation is available only in the **China (Shanghai)** region.
 * *   After the configurations of a domain name for CDN are deleted, the domain name becomes unavailable. We recommend that you restore the A record at your DNS service provider before you delete the configurations of the domain name for CDN.
 * *   After you call this operation to remove a domain name for CDN from ApsaraVideo VOD, all records that are related to the domain name are deleted. If you only want to disable a domain name for CDN, call the [BatchStopVodDomain](https://help.aliyun.com/document_detail/120208.html) operation.
 *
 * @param request DeleteVodSpecificConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVodSpecificConfigResponse
 */
DeleteVodSpecificConfigResponse Client::deleteVodSpecificConfigWithOptions(const DeleteVodSpecificConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.configId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEnv()) {
    query["Env"] = request.env();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVodSpecificConfig"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVodSpecificConfigResponse>();
}

/**
 * @summary Deletes the configurations of a domain name for CDN.
 *
 * @description > 
 * *   This operation is available only in the **China (Shanghai)** region.
 * *   After the configurations of a domain name for CDN are deleted, the domain name becomes unavailable. We recommend that you restore the A record at your DNS service provider before you delete the configurations of the domain name for CDN.
 * *   After you call this operation to remove a domain name for CDN from ApsaraVideo VOD, all records that are related to the domain name are deleted. If you only want to disable a domain name for CDN, call the [BatchStopVodDomain](https://help.aliyun.com/document_detail/120208.html) operation.
 *
 * @param request DeleteVodSpecificConfigRequest
 * @return DeleteVodSpecificConfigResponse
 */
DeleteVodSpecificConfigResponse Client::deleteVodSpecificConfig(const DeleteVodSpecificConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVodSpecificConfigWithOptions(request, runtime);
}

/**
 * @summary Deletes a snapshot template.
 *
 * @param request DeleteVodTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVodTemplateResponse
 */
DeleteVodTemplateResponse Client::deleteVodTemplateWithOptions(const DeleteVodTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVodTemplateId()) {
    query["VodTemplateId"] = request.vodTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVodTemplate"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVodTemplateResponse>();
}

/**
 * @summary Deletes a snapshot template.
 *
 * @param request DeleteVodTemplateRequest
 * @return DeleteVodTemplateResponse
 */
DeleteVodTemplateResponse Client::deleteVodTemplate(const DeleteVodTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVodTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes an image watermark or text watermark template.
 *
 * @description *   **After you delete an image watermark template, the source watermark file is physically deleted and cannot be restored. Exercise caution when you call this operation.**
 * *   You cannot delete the default watermark template. To delete a default watermark template, call the [SetDefaultWatermark](~~SetDefaultWatermark~~) operation to set another watermark template as the default one.
 *
 * @param request DeleteWatermarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWatermarkResponse
 */
DeleteWatermarkResponse Client::deleteWatermarkWithOptions(const DeleteWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWatermarkId()) {
    query["WatermarkId"] = request.watermarkId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWatermark"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWatermarkResponse>();
}

/**
 * @summary Deletes an image watermark or text watermark template.
 *
 * @description *   **After you delete an image watermark template, the source watermark file is physically deleted and cannot be restored. Exercise caution when you call this operation.**
 * *   You cannot delete the default watermark template. To delete a default watermark template, call the [SetDefaultWatermark](~~SetDefaultWatermark~~) operation to set another watermark template as the default one.
 *
 * @param request DeleteWatermarkRequest
 * @return DeleteWatermarkResponse
 */
DeleteWatermarkResponse Client::deleteWatermark(const DeleteWatermarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWatermarkWithOptions(request, runtime);
}

/**
 * @summary Queries the distribution of media asset data by time. The maximum time range to query is 6 months.
 *
 * @description *   This operation is available only in the China (Shanghai) region.
 * *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the previous 7 days. If you set both the parameters, the request returns the data collected within the specified time range.
 *
 * @param request DescribeMediaDistributionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMediaDistributionResponse
 */
DescribeMediaDistributionResponse Client::describeMediaDistributionWithOptions(const DescribeMediaDistributionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStorageClass()) {
    query["StorageClass"] = request.storageClass();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMediaDistribution"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMediaDistributionResponse>();
}

/**
 * @summary Queries the distribution of media asset data by time. The maximum time range to query is 6 months.
 *
 * @description *   This operation is available only in the China (Shanghai) region.
 * *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the previous 7 days. If you set both the parameters, the request returns the data collected within the specified time range.
 *
 * @param request DescribeMediaDistributionRequest
 * @return DescribeMediaDistributionResponse
 */
DescribeMediaDistributionResponse Client::describeMediaDistribution(const DescribeMediaDistributionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMediaDistributionWithOptions(request, runtime);
}

/**
 * @summary Queries daily playback statistics on top videos, including video views, unique visitors, and total playback duration.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   You can query playback statistics on top 1,000 videos at most on a specified day. By default, top videos are sorted in descending order based on video views.
 * *   You can call this operation to query only playback statistics collected on videos that are played by using ApsaraVideo Player SDKs.
 * *   Playback statistics for the previous day are generated at 09:00 on the current day, in UTC+8.
 * *   You can query data that is generated since January 1, 2018. The maximum time range to query is 180 days.
 *
 * @param request DescribePlayTopVideosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePlayTopVideosResponse
 */
DescribePlayTopVideosResponse Client::describePlayTopVideosWithOptions(const DescribePlayTopVideosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizDate()) {
    query["BizDate"] = request.bizDate();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePlayTopVideos"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePlayTopVideosResponse>();
}

/**
 * @summary Queries daily playback statistics on top videos, including video views, unique visitors, and total playback duration.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   You can query playback statistics on top 1,000 videos at most on a specified day. By default, top videos are sorted in descending order based on video views.
 * *   You can call this operation to query only playback statistics collected on videos that are played by using ApsaraVideo Player SDKs.
 * *   Playback statistics for the previous day are generated at 09:00 on the current day, in UTC+8.
 * *   You can query data that is generated since January 1, 2018. The maximum time range to query is 180 days.
 *
 * @param request DescribePlayTopVideosRequest
 * @return DescribePlayTopVideosResponse
 */
DescribePlayTopVideosResponse Client::describePlayTopVideos(const DescribePlayTopVideosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePlayTopVideosWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on average playback each day in a specified time range.
 *
 * @description > *   This operation is available only in the **China (Shanghai)** region.
 * > *   You can call this operation to query only playback statistics collected on videos that are played by using ApsaraVideo Player SDKs.
 * > *   Playback statistics for the previous day are generated at 09:00 on the current day, in UTC+8.
 * > *   You can query data that is generated since January 1, 2018. The maximum time range to query is 180 days.
 *
 * @param request DescribePlayUserAvgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePlayUserAvgResponse
 */
DescribePlayUserAvgResponse Client::describePlayUserAvgWithOptions(const DescribePlayUserAvgRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePlayUserAvg"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePlayUserAvgResponse>();
}

/**
 * @summary Queries the statistics on average playback each day in a specified time range.
 *
 * @description > *   This operation is available only in the **China (Shanghai)** region.
 * > *   You can call this operation to query only playback statistics collected on videos that are played by using ApsaraVideo Player SDKs.
 * > *   Playback statistics for the previous day are generated at 09:00 on the current day, in UTC+8.
 * > *   You can query data that is generated since January 1, 2018. The maximum time range to query is 180 days.
 *
 * @param request DescribePlayUserAvgRequest
 * @return DescribePlayUserAvgResponse
 */
DescribePlayUserAvgResponse Client::describePlayUserAvg(const DescribePlayUserAvgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePlayUserAvgWithOptions(request, runtime);
}

/**
 * @summary Queries the daily playback statistics in a specified time range. The playback statistics include the total number of views, total number of viewers, total playback duration, and playback duration distribution.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   You can call this operation to query only playback statistics collected on videos that are played by using ApsaraVideo Player SDKs.
 * *   Playback statistics for the current day are generated at 09:00 (UTC+8) on the next day.
 * *   You can query data that is generated since January 1, 2018. The maximum time range to query is 180 days.
 *
 * @param request DescribePlayUserTotalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePlayUserTotalResponse
 */
DescribePlayUserTotalResponse Client::describePlayUserTotalWithOptions(const DescribePlayUserTotalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePlayUserTotal"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePlayUserTotalResponse>();
}

/**
 * @summary Queries the daily playback statistics in a specified time range. The playback statistics include the total number of views, total number of viewers, total playback duration, and playback duration distribution.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   You can call this operation to query only playback statistics collected on videos that are played by using ApsaraVideo Player SDKs.
 * *   Playback statistics for the current day are generated at 09:00 (UTC+8) on the next day.
 * *   You can query data that is generated since January 1, 2018. The maximum time range to query is 180 days.
 *
 * @param request DescribePlayUserTotalRequest
 * @return DescribePlayUserTotalResponse
 */
DescribePlayUserTotalResponse Client::describePlayUserTotal(const DescribePlayUserTotalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePlayUserTotalWithOptions(request, runtime);
}

/**
 * @summary Queries daily playback statistics on a video in the specified time range.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   You can call this operation to query only playback statistics collected on videos that are played by using ApsaraVideo Player SDKs.
 * *   Playback statistics for the current day are generated at 09:00 (UTC+8) on the next day.
 * *   You can query only data in the last 730 days. The maximum time range to query is 180 days.
 *
 * @param request DescribePlayVideoStatisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePlayVideoStatisResponse
 */
DescribePlayVideoStatisResponse Client::describePlayVideoStatisWithOptions(const DescribePlayVideoStatisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePlayVideoStatis"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePlayVideoStatisResponse>();
}

/**
 * @summary Queries daily playback statistics on a video in the specified time range.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   You can call this operation to query only playback statistics collected on videos that are played by using ApsaraVideo Player SDKs.
 * *   Playback statistics for the current day are generated at 09:00 (UTC+8) on the next day.
 * *   You can query only data in the last 730 days. The maximum time range to query is 180 days.
 *
 * @param request DescribePlayVideoStatisRequest
 * @return DescribePlayVideoStatisResponse
 */
DescribePlayVideoStatisResponse Client::describePlayVideoStatis(const DescribePlayVideoStatisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePlayVideoStatisWithOptions(request, runtime);
}

/**
 * @summary Queries the statistics on video AI of different types, such as automated review and media fingerprinting.
 *
 * @description > *   This operation is available only in the **China (Shanghai)** region.
 * >*   If the time range to query is less than or equal to seven days, the system returns the statistics collected on an hourly basis. If the time range to query is greater than seven days, the system returns the statistics collected on a daily basis. The maximum time range that you can specify to query is 31 days.
 *
 * @param request DescribeVodAIDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodAIDataResponse
 */
DescribeVodAIDataResponse Client::describeVodAIDataWithOptions(const DescribeVodAIDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAIType()) {
    query["AIType"] = request.AIType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodAIData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodAIDataResponse>();
}

/**
 * @summary Queries the statistics on video AI of different types, such as automated review and media fingerprinting.
 *
 * @description > *   This operation is available only in the **China (Shanghai)** region.
 * >*   If the time range to query is less than or equal to seven days, the system returns the statistics collected on an hourly basis. If the time range to query is greater than seven days, the system returns the statistics collected on a daily basis. The maximum time range that you can specify to query is 31 days.
 *
 * @param request DescribeVodAIDataRequest
 * @return DescribeVodAIDataResponse
 */
DescribeVodAIDataResponse Client::describeVodAIData(const DescribeVodAIDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodAIDataWithOptions(request, runtime);
}

/**
 * @summary Queries the certificates of a specified domain name for CDN or all the domain names for CDN within your Alibaba Cloud account.
 *
 * @description >  This operation is available only in the **China (Shanghai)** region.
 *
 * @param request DescribeVodCertificateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodCertificateListResponse
 */
DescribeVodCertificateListResponse Client::describeVodCertificateListWithOptions(const DescribeVodCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodCertificateList"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodCertificateListResponse>();
}

/**
 * @summary Queries the certificates of a specified domain name for CDN or all the domain names for CDN within your Alibaba Cloud account.
 *
 * @description >  This operation is available only in the **China (Shanghai)** region.
 *
 * @param request DescribeVodCertificateListRequest
 * @return DescribeVodCertificateListResponse
 */
DescribeVodCertificateListResponse Client::describeVodCertificateList(const DescribeVodCertificateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodCertificateListWithOptions(request, runtime);
}

/**
 * @summary Queries the bandwidth for one or more specified domain names for CDN.
 *
 * @description If you specify neither the StartTime parameter nor the EndTime parameter, the data in the last 24 hours is queried. Alternatively, you can specify both the StartTime and EndTime parameters to query data that is generated in the specified duration. You can query data for the last 90 days at most.
 *
 * @param request DescribeVodDomainBpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainBpsDataResponse
 */
DescribeVodDomainBpsDataResponse Client::describeVodDomainBpsDataWithOptions(const DescribeVodDomainBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodDomainBpsData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainBpsDataResponse>();
}

/**
 * @summary Queries the bandwidth for one or more specified domain names for CDN.
 *
 * @description If you specify neither the StartTime parameter nor the EndTime parameter, the data in the last 24 hours is queried. Alternatively, you can specify both the StartTime and EndTime parameters to query data that is generated in the specified duration. You can query data for the last 90 days at most.
 *
 * @param request DescribeVodDomainBpsDataRequest
 * @return DescribeVodDomainBpsDataResponse
 */
DescribeVodDomainBpsDataResponse Client::describeVodDomainBpsData(const DescribeVodDomainBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainBpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the bandwidth data by protocol.
 *
 * @description You can call this API operation up to 20 times per second per account. If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range. Time granularity
 * The time granularity supported by Interval, the maximum time period within which historical data is available, and the data delay vary based on the time range to query, as described in the following table.
 * |Time granularity|Time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |15 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|3 to 4 hours|
 * |1 day|90 days|366 days|4 hours in most cases, not more than 24 hours|
 *
 * @param request DescribeVodDomainBpsDataByLayerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainBpsDataByLayerResponse
 */
DescribeVodDomainBpsDataByLayerResponse Client::describeVodDomainBpsDataByLayerWithOptions(const DescribeVodDomainBpsDataByLayerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLayer()) {
    query["Layer"] = request.layer();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodDomainBpsDataByLayer"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainBpsDataByLayerResponse>();
}

/**
 * @summary Queries the bandwidth data by protocol.
 *
 * @description You can call this API operation up to 20 times per second per account. If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range. Time granularity
 * The time granularity supported by Interval, the maximum time period within which historical data is available, and the data delay vary based on the time range to query, as described in the following table.
 * |Time granularity|Time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |15 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|3 to 4 hours|
 * |1 day|90 days|366 days|4 hours in most cases, not more than 24 hours|
 *
 * @param request DescribeVodDomainBpsDataByLayerRequest
 * @return DescribeVodDomainBpsDataByLayerResponse
 */
DescribeVodDomainBpsDataByLayerResponse Client::describeVodDomainBpsDataByLayer(const DescribeVodDomainBpsDataByLayerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainBpsDataByLayerWithOptions(request, runtime);
}

/**
 * @summary Queries the certificate information about an accelerated domain name.
 *
 * @description This operation is available only in the **China (Shanghai)** region.
 *
 * @param request DescribeVodDomainCertificateInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainCertificateInfoResponse
 */
DescribeVodDomainCertificateInfoResponse Client::describeVodDomainCertificateInfoWithOptions(const DescribeVodDomainCertificateInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodDomainCertificateInfo"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainCertificateInfoResponse>();
}

/**
 * @summary Queries the certificate information about an accelerated domain name.
 *
 * @description This operation is available only in the **China (Shanghai)** region.
 *
 * @param request DescribeVodDomainCertificateInfoRequest
 * @return DescribeVodDomainCertificateInfoResponse
 */
DescribeVodDomainCertificateInfoResponse Client::describeVodDomainCertificateInfo(const DescribeVodDomainCertificateInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainCertificateInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of a domain name for CDN. You can query the configurations of multiple features at a time.
 *
 * @description > This operation is available only in the **China (Shanghai)** region.
 *
 * @param request DescribeVodDomainConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainConfigsResponse
 */
DescribeVodDomainConfigsResponse Client::describeVodDomainConfigsWithOptions(const DescribeVodDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasFunctionNames()) {
    query["FunctionNames"] = request.functionNames();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodDomainConfigs"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainConfigsResponse>();
}

/**
 * @summary Queries the configurations of a domain name for CDN. You can query the configurations of multiple features at a time.
 *
 * @description > This operation is available only in the **China (Shanghai)** region.
 *
 * @param request DescribeVodDomainConfigsRequest
 * @return DescribeVodDomainConfigsResponse
 */
DescribeVodDomainConfigsResponse Client::describeVodDomainConfigs(const DescribeVodDomainConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainConfigsWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information about a specified domain name for CDN.
 *
 * @description > This operation is available only in the **China (Shanghai)** region.
 *
 * @param request DescribeVodDomainDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainDetailResponse
 */
DescribeVodDomainDetailResponse Client::describeVodDomainDetailWithOptions(const DescribeVodDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodDomainDetail"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainDetailResponse>();
}

/**
 * @summary Queries the basic information about a specified domain name for CDN.
 *
 * @description > This operation is available only in the **China (Shanghai)** region.
 *
 * @param request DescribeVodDomainDetailRequest
 * @return DescribeVodDomainDetailResponse
 */
DescribeVodDomainDetailResponse Client::describeVodDomainDetail(const DescribeVodDomainDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the byte hit ratios of accelerated domain names. Byte hit ratios are measured in percentage.
 *
 * @description * This operation is supported only in the **China (Shanghai)** region.
 * * You can specify a maximum of 500 accelerated domain names.
 * * If you specify neither `StartTime` nor `EndTime`, the data of the last 24 hours is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay when you do not set `Interval`.
 * |Time granularity|Time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|Time range per query &#x3C; 3 days|93 days|15 minutes|
 * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
 * |1 day|31 days ≤ Time span of a single query ≤ 366 days|366 days|4 hours in most cases, not more than 24 hours|
 *
 * @param request DescribeVodDomainHitRateDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainHitRateDataResponse
 */
DescribeVodDomainHitRateDataResponse Client::describeVodDomainHitRateDataWithOptions(const DescribeVodDomainHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodDomainHitRateData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainHitRateDataResponse>();
}

/**
 * @summary Queries the byte hit ratios of accelerated domain names. Byte hit ratios are measured in percentage.
 *
 * @description * This operation is supported only in the **China (Shanghai)** region.
 * * You can specify a maximum of 500 accelerated domain names.
 * * If you specify neither `StartTime` nor `EndTime`, the data of the last 24 hours is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay when you do not set `Interval`.
 * |Time granularity|Time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|Time range per query &#x3C; 3 days|93 days|15 minutes|
 * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
 * |1 day|31 days ≤ Time span of a single query ≤ 366 days|366 days|4 hours in most cases, not more than 24 hours|
 *
 * @param request DescribeVodDomainHitRateDataRequest
 * @return DescribeVodDomainHitRateDataResponse
 */
DescribeVodDomainHitRateDataResponse Client::describeVodDomainHitRateData(const DescribeVodDomainHitRateDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainHitRateDataWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the CDN access logs for a domain name, including the log path.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   For more information about the log format and latency, see [Download logs](https://help.aliyun.com/document_detail/86099.html).
 * *   If you specify neither the StartTime parameter nor the EndTime parameter, the log data in the last 24 hours is queried.
 * *   You can specify both the StartTime and EndTime parameters to query the log data that is generated in the specified time range.
 *
 * @param request DescribeVodDomainLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainLogResponse
 */
DescribeVodDomainLogResponse Client::describeVodDomainLogWithOptions(const DescribeVodDomainLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodDomainLog"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainLogResponse>();
}

/**
 * @summary Queries the information about the CDN access logs for a domain name, including the log path.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   For more information about the log format and latency, see [Download logs](https://help.aliyun.com/document_detail/86099.html).
 * *   If you specify neither the StartTime parameter nor the EndTime parameter, the log data in the last 24 hours is queried.
 * *   You can specify both the StartTime and EndTime parameters to query the log data that is generated in the specified time range.
 *
 * @param request DescribeVodDomainLogRequest
 * @return DescribeVodDomainLogResponse
 */
DescribeVodDomainLogResponse Client::describeVodDomainLog(const DescribeVodDomainLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainLogWithOptions(request, runtime);
}

/**
 * @summary Queries the 95th percentile bandwidth data of an accelerated domain name.
 *
 * @param request DescribeVodDomainMax95BpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainMax95BpsDataResponse
 */
DescribeVodDomainMax95BpsDataResponse Client::describeVodDomainMax95BpsDataWithOptions(const DescribeVodDomainMax95BpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodDomainMax95BpsData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainMax95BpsDataResponse>();
}

/**
 * @summary Queries the 95th percentile bandwidth data of an accelerated domain name.
 *
 * @param request DescribeVodDomainMax95BpsDataRequest
 * @return DescribeVodDomainMax95BpsDataResponse
 */
DescribeVodDomainMax95BpsDataResponse Client::describeVodDomainMax95BpsData(const DescribeVodDomainMax95BpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainMax95BpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the number of queries per second (QPS) for one or more accelerated domain names. Data is collected every 5 minutes. You can query data collected in the last 90 days.
 *
 * @description * This operation is available only in the China (Shanghai) region.
 * * You can call this operation up to 100 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|3 to 4 hours|
 * |1 day|366 days|366 days|4 to 24 hours|
 * ---
 *
 * @param request DescribeVodDomainQpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainQpsDataResponse
 */
DescribeVodDomainQpsDataResponse Client::describeVodDomainQpsDataWithOptions(const DescribeVodDomainQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodDomainQpsData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainQpsDataResponse>();
}

/**
 * @summary Queries the number of queries per second (QPS) for one or more accelerated domain names. Data is collected every 5 minutes. You can query data collected in the last 90 days.
 *
 * @description * This operation is available only in the China (Shanghai) region.
 * * You can call this operation up to 100 times per second per account.
 * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
 * **Time granularity**
 * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|3 days|93 days|15 minutes|
 * |1 hour|31 days|186 days|3 to 4 hours|
 * |1 day|366 days|366 days|4 to 24 hours|
 * ---
 *
 * @param request DescribeVodDomainQpsDataRequest
 * @return DescribeVodDomainQpsDataResponse
 */
DescribeVodDomainQpsDataResponse Client::describeVodDomainQpsData(const DescribeVodDomainQpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainQpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the bandwidth data for one or more accelerated domains. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days. Compared with the DescribeVodDomainBpsData operation, this operation provides a smaller time granularity, lower data latency, and allows you to query historical data within a shorter time period.
 *
 * @description * This operation is supported only in the **China (Shanghai)** region.
 * * You can specify a maximum of 500 accelerated domain names.
 * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
 * |5 minutes|1 Hour &#x3C; Time range per query ≤ 3 days|93 days|15 minutes|
 * |1 hour|3 days &#x3C; Time range per query ≤ 31 days|186 days|3 to 4 hours|
 *
 * @param request DescribeVodDomainRealTimeBpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainRealTimeBpsDataResponse
 */
DescribeVodDomainRealTimeBpsDataResponse Client::describeVodDomainRealTimeBpsDataWithOptions(const DescribeVodDomainRealTimeBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodDomainRealTimeBpsData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainRealTimeBpsDataResponse>();
}

/**
 * @summary Queries the bandwidth data for one or more accelerated domains. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days. Compared with the DescribeVodDomainBpsData operation, this operation provides a smaller time granularity, lower data latency, and allows you to query historical data within a shorter time period.
 *
 * @description * This operation is supported only in the **China (Shanghai)** region.
 * * You can specify a maximum of 500 accelerated domain names.
 * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
 * |5 minutes|1 Hour &#x3C; Time range per query ≤ 3 days|93 days|15 minutes|
 * |1 hour|3 days &#x3C; Time range per query ≤ 31 days|186 days|3 to 4 hours|
 *
 * @param request DescribeVodDomainRealTimeBpsDataRequest
 * @return DescribeVodDomainRealTimeBpsDataResponse
 */
DescribeVodDomainRealTimeBpsDataResponse Client::describeVodDomainRealTimeBpsData(const DescribeVodDomainRealTimeBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainRealTimeBpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the byte hit ratio for one or more accelerated domains. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days.
 *
 * @description * This operation is supported only in the **China (Shanghai)** region.
 * * You can specify a maximum of 100 accelerated domain names.
 * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
 * |5 minutes|1 Hour &#x3C; Time range per query ≤ 3 days|93 days|15 minutes|
 * |1 hour|3 days &#x3C; Time range per query ≤ 31 days|186 days|3 to 4 hours|
 *
 * @param request DescribeVodDomainRealTimeByteHitRateDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainRealTimeByteHitRateDataResponse
 */
DescribeVodDomainRealTimeByteHitRateDataResponse Client::describeVodDomainRealTimeByteHitRateDataWithOptions(const DescribeVodDomainRealTimeByteHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodDomainRealTimeByteHitRateData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainRealTimeByteHitRateDataResponse>();
}

/**
 * @summary Queries the byte hit ratio for one or more accelerated domains. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days.
 *
 * @description * This operation is supported only in the **China (Shanghai)** region.
 * * You can specify a maximum of 100 accelerated domain names.
 * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
 * |5 minutes|1 Hour &#x3C; Time range per query ≤ 3 days|93 days|15 minutes|
 * |1 hour|3 days &#x3C; Time range per query ≤ 31 days|186 days|3 to 4 hours|
 *
 * @param request DescribeVodDomainRealTimeByteHitRateDataRequest
 * @return DescribeVodDomainRealTimeByteHitRateDataResponse
 */
DescribeVodDomainRealTimeByteHitRateDataResponse Client::describeVodDomainRealTimeByteHitRateData(const DescribeVodDomainRealTimeByteHitRateDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainRealTimeByteHitRateDataWithOptions(request, runtime);
}

/**
 * @summary Queries real-time monitoring data of one or more accelerated domain names.
 *
 * @description You can query data within the last seven days. Data is collected every minute. You can call this API operation up to 10 times per second per account.
 *
 * @param request DescribeVodDomainRealTimeDetailDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainRealTimeDetailDataResponse
 */
DescribeVodDomainRealTimeDetailDataResponse Client::describeVodDomainRealTimeDetailDataWithOptions(const DescribeVodDomainRealTimeDetailDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodDomainRealTimeDetailData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainRealTimeDetailDataResponse>();
}

/**
 * @summary Queries real-time monitoring data of one or more accelerated domain names.
 *
 * @description You can query data within the last seven days. Data is collected every minute. You can call this API operation up to 10 times per second per account.
 *
 * @param request DescribeVodDomainRealTimeDetailDataRequest
 * @return DescribeVodDomainRealTimeDetailDataResponse
 */
DescribeVodDomainRealTimeDetailDataResponse Client::describeVodDomainRealTimeDetailData(const DescribeVodDomainRealTimeDetailDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainRealTimeDetailDataWithOptions(request, runtime);
}

/**
 * @summary Queries the total number of HTTP status codes and proportion of each HTTP status code for one or more accelerated domains. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days.
 *
 * @description * This operation is supported only in the **China (Shanghai)** region.
 * * You can specify a maximum of 100 accelerated domain names.
 * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Time range per query|Historical data available (days)|Data latency|
 * |---|---|---|---|
 * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
 * |5 minutes|1 hour &#x3C; Time range per query &#x3C; 3 days|93 days|15 minutes|
 * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
 *
 * @param request DescribeVodDomainRealTimeHttpCodeDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainRealTimeHttpCodeDataResponse
 */
DescribeVodDomainRealTimeHttpCodeDataResponse Client::describeVodDomainRealTimeHttpCodeDataWithOptions(const DescribeVodDomainRealTimeHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodDomainRealTimeHttpCodeData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainRealTimeHttpCodeDataResponse>();
}

/**
 * @summary Queries the total number of HTTP status codes and proportion of each HTTP status code for one or more accelerated domains. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days.
 *
 * @description * This operation is supported only in the **China (Shanghai)** region.
 * * You can specify a maximum of 100 accelerated domain names.
 * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Time range per query|Historical data available (days)|Data latency|
 * |---|---|---|---|
 * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
 * |5 minutes|1 hour &#x3C; Time range per query &#x3C; 3 days|93 days|15 minutes|
 * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
 *
 * @param request DescribeVodDomainRealTimeHttpCodeDataRequest
 * @return DescribeVodDomainRealTimeHttpCodeDataResponse
 */
DescribeVodDomainRealTimeHttpCodeDataResponse Client::describeVodDomainRealTimeHttpCodeData(const DescribeVodDomainRealTimeHttpCodeDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainRealTimeHttpCodeDataWithOptions(request, runtime);
}

/**
 * @summary Queries the number of queries per second (QPS) for one or more accelerated domains. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days.
 *
 * @description * This operation is supported only in the **China (Shanghai)** region.
 * * You can specify a maximum of 500 accelerated domain names.
 * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
 * |5 minutes|1 Hour &#x3C; Time range per query ≤ 3 days|93 days|15 minutes|
 * |1 hour|3 days &#x3C; Time range per query ≤ 31 days|186 days|3 to 4 hours|
 *
 * @param request DescribeVodDomainRealTimeQpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainRealTimeQpsDataResponse
 */
DescribeVodDomainRealTimeQpsDataResponse Client::describeVodDomainRealTimeQpsDataWithOptions(const DescribeVodDomainRealTimeQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodDomainRealTimeQpsData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainRealTimeQpsDataResponse>();
}

/**
 * @summary Queries the number of queries per second (QPS) for one or more accelerated domains. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days.
 *
 * @description * This operation is supported only in the **China (Shanghai)** region.
 * * You can specify a maximum of 500 accelerated domain names.
 * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
 * |5 minutes|1 Hour &#x3C; Time range per query ≤ 3 days|93 days|15 minutes|
 * |1 hour|3 days &#x3C; Time range per query ≤ 31 days|186 days|3 to 4 hours|
 *
 * @param request DescribeVodDomainRealTimeQpsDataRequest
 * @return DescribeVodDomainRealTimeQpsDataResponse
 */
DescribeVodDomainRealTimeQpsDataResponse Client::describeVodDomainRealTimeQpsData(const DescribeVodDomainRealTimeQpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainRealTimeQpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the request hit ratio data for one or more accelerated domain names. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days.
 *
 * @description * This operation is supported only in the **China (Shanghai)** region.
 * * You can specify a maximum of 100 accelerated domain names.
 * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
 * * By default, the POST method is used for Go. To use the FET method, you must declare `request.Method="GET"`.
 * **Time granularity**
 * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
 * |5 minutes|1 hour &#x3C; Time range per query &#x3C; 3 days|93 days|15 minutes|
 * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
 *
 * @param request DescribeVodDomainRealTimeReqHitRateDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainRealTimeReqHitRateDataResponse
 */
DescribeVodDomainRealTimeReqHitRateDataResponse Client::describeVodDomainRealTimeReqHitRateDataWithOptions(const DescribeVodDomainRealTimeReqHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodDomainRealTimeReqHitRateData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainRealTimeReqHitRateDataResponse>();
}

/**
 * @summary Queries the request hit ratio data for one or more accelerated domain names. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days.
 *
 * @description * This operation is supported only in the **China (Shanghai)** region.
 * * You can specify a maximum of 100 accelerated domain names.
 * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
 * * By default, the POST method is used for Go. To use the FET method, you must declare `request.Method="GET"`.
 * **Time granularity**
 * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
 * |5 minutes|1 hour &#x3C; Time range per query &#x3C; 3 days|93 days|15 minutes|
 * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
 *
 * @param request DescribeVodDomainRealTimeReqHitRateDataRequest
 * @return DescribeVodDomainRealTimeReqHitRateDataResponse
 */
DescribeVodDomainRealTimeReqHitRateDataResponse Client::describeVodDomainRealTimeReqHitRateData(const DescribeVodDomainRealTimeReqHitRateDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainRealTimeReqHitRateDataWithOptions(request, runtime);
}

/**
 * @summary Queries the traffic data for one or more accelerated domains. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days. Compared with the DescribeVodDomainTrafficData operation, this operation provides a smaller time granularity, lower data latency, and allows you to query historical data within a shorter time period.
 *
 * @description * This operation is supported only in the **China (Shanghai)** region.
 * * You can specify a maximum of 100 accelerated domain names.
 * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
 * |5 minutes|1 Hour &#x3C; Time range per query ≤ 3 days|93 days|15 minutes|
 * |1 hour|3 days &#x3C; Time range per query ≤ 31 days|186 days|3 to 4 hours|
 *
 * @param request DescribeVodDomainRealTimeTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainRealTimeTrafficDataResponse
 */
DescribeVodDomainRealTimeTrafficDataResponse Client::describeVodDomainRealTimeTrafficDataWithOptions(const DescribeVodDomainRealTimeTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodDomainRealTimeTrafficData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainRealTimeTrafficDataResponse>();
}

/**
 * @summary Queries the traffic data for one or more accelerated domains. The minimum time granularity is 1 minute. The minimum data latency is 5 minutes. You can query data in the last 186 days. Compared with the DescribeVodDomainTrafficData operation, this operation provides a smaller time granularity, lower data latency, and allows you to query historical data within a shorter time period.
 *
 * @description * This operation is supported only in the **China (Shanghai)** region.
 * * You can specify a maximum of 100 accelerated domain names.
 * * If you specify neither `StartTime` nor `EndTime`, the data of the last 1 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |1 minute|Time range per query ≤ 1 hour|7 days|5 minutes|
 * |5 minutes|1 Hour &#x3C; Time range per query ≤ 3 days|93 days|15 minutes|
 * |1 hour|3 days &#x3C; Time range per query ≤ 31 days|186 days|3 to 4 hours|
 *
 * @param request DescribeVodDomainRealTimeTrafficDataRequest
 * @return DescribeVodDomainRealTimeTrafficDataResponse
 */
DescribeVodDomainRealTimeTrafficDataResponse Client::describeVodDomainRealTimeTrafficData(const DescribeVodDomainRealTimeTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainRealTimeTrafficDataWithOptions(request, runtime);
}

/**
 * @summary Queries the byte hit ratio for one or more accelerated domains. Request hit ratios are measured in percentage.
 *
 * @description * This operation is supported only in the **China (Shanghai)** region.
 * * You can specify a maximum of 500 accelerated domain names.
 * * If you specify neither `StartTime` nor `EndTime`, the data of the last 24 hours is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay when you do not set `Interval`.
 * |Time granularity|Time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|Time range per query &#x3C; 3 days|93 days|15 minutes|
 * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
 * |1 day|31 days ≤ Time range per query ≤ 90 days|366 days|4 hours in most cases, not more than 24 hours|
 *
 * @param request DescribeVodDomainReqHitRateDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainReqHitRateDataResponse
 */
DescribeVodDomainReqHitRateDataResponse Client::describeVodDomainReqHitRateDataWithOptions(const DescribeVodDomainReqHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodDomainReqHitRateData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainReqHitRateDataResponse>();
}

/**
 * @summary Queries the byte hit ratio for one or more accelerated domains. Request hit ratios are measured in percentage.
 *
 * @description * This operation is supported only in the **China (Shanghai)** region.
 * * You can specify a maximum of 500 accelerated domain names.
 * * If you specify neither `StartTime` nor `EndTime`, the data of the last 24 hours is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay when you do not set `Interval`.
 * |Time granularity|Time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|Time range per query &#x3C; 3 days|93 days|15 minutes|
 * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
 * |1 day|31 days ≤ Time range per query ≤ 90 days|366 days|4 hours in most cases, not more than 24 hours|
 *
 * @param request DescribeVodDomainReqHitRateDataRequest
 * @return DescribeVodDomainReqHitRateDataResponse
 */
DescribeVodDomainReqHitRateDataResponse Client::describeVodDomainReqHitRateData(const DescribeVodDomainReqHitRateDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainReqHitRateDataWithOptions(request, runtime);
}

/**
 * @summary Queries the bandwidth data during back-to-origin routing for one or more accelerated domain names.
 *
 * @description * This operation is supported only in the **China (Shanghai)** region.
 * * You can specify a maximum of 500 accelerated domain names.
 * * If you specify neither `StartTime` nor `EndTime`, the data of the last 24 hours is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay when you do not set `Interval`.
 * |Time granularity|Time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|Time range per query &#x3C; 3 days|93 days|15 minutes|
 * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
 * |1 day|31 days ≤ Time span of a single query ≤ 366 days|366 days|4 hours in most cases, not more than 24 hours|
 *
 * @param request DescribeVodDomainSrcBpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainSrcBpsDataResponse
 */
DescribeVodDomainSrcBpsDataResponse Client::describeVodDomainSrcBpsDataWithOptions(const DescribeVodDomainSrcBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodDomainSrcBpsData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainSrcBpsDataResponse>();
}

/**
 * @summary Queries the bandwidth data during back-to-origin routing for one or more accelerated domain names.
 *
 * @description * This operation is supported only in the **China (Shanghai)** region.
 * * You can specify a maximum of 500 accelerated domain names.
 * * If you specify neither `StartTime` nor `EndTime`, the data of the last 24 hours is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay when you do not set `Interval`.
 * |Time granularity|Time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|Time range per query &#x3C; 3 days|93 days|15 minutes|
 * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
 * |1 day|31 days ≤ Time span of a single query ≤ 366 days|366 days|4 hours in most cases, not more than 24 hours|
 *
 * @param request DescribeVodDomainSrcBpsDataRequest
 * @return DescribeVodDomainSrcBpsDataResponse
 */
DescribeVodDomainSrcBpsDataResponse Client::describeVodDomainSrcBpsData(const DescribeVodDomainSrcBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainSrcBpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries origin traffic data for accelerated domain names in ApsaraVideo VOD. The traffic is measured in bytes.
 *
 * @description * This operation is available only in the **China (Shanghai)** region.
 * * ApsaraVideo VOD stores the origin traffic data for 90 days before the data is deleted.
 * * If you do not set the `StartTime` or `EndTime` parameter, the request returns the data collected in the last 24 hours. If you set both the `StartTime` and `EndTime` parameters, the request returns the data collected within the specified time range.
 * * You can specify a maximum of 500 domain names in a request. Separate multiple domain names with commas (,). If you specify multiple domain names in a request, aggregation results are returned.
 * ### Time granularity
 * The time granularity supported by the Interval parameter varies based on the time range per query specified by using `StartTime` and `EndTime`. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Time range per query (days)|Historical data available (days)|Data delay|
 * |---|---|---|---|
 * |5 minutes|(0, 3\\]|93|15 minutes|
 * |1 hour|(3, 31\\]|186|4 hours|
 * |1 day|(31, 366\\]|366|04:00 on the next day|
 *
 * @param request DescribeVodDomainSrcTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainSrcTrafficDataResponse
 */
DescribeVodDomainSrcTrafficDataResponse Client::describeVodDomainSrcTrafficDataWithOptions(const DescribeVodDomainSrcTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodDomainSrcTrafficData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainSrcTrafficDataResponse>();
}

/**
 * @summary Queries origin traffic data for accelerated domain names in ApsaraVideo VOD. The traffic is measured in bytes.
 *
 * @description * This operation is available only in the **China (Shanghai)** region.
 * * ApsaraVideo VOD stores the origin traffic data for 90 days before the data is deleted.
 * * If you do not set the `StartTime` or `EndTime` parameter, the request returns the data collected in the last 24 hours. If you set both the `StartTime` and `EndTime` parameters, the request returns the data collected within the specified time range.
 * * You can specify a maximum of 500 domain names in a request. Separate multiple domain names with commas (,). If you specify multiple domain names in a request, aggregation results are returned.
 * ### Time granularity
 * The time granularity supported by the Interval parameter varies based on the time range per query specified by using `StartTime` and `EndTime`. The following table describes the time period within which historical data is available and the data delay.
 * |Time granularity|Time range per query (days)|Historical data available (days)|Data delay|
 * |---|---|---|---|
 * |5 minutes|(0, 3\\]|93|15 minutes|
 * |1 hour|(3, 31\\]|186|4 hours|
 * |1 day|(31, 366\\]|366|04:00 on the next day|
 *
 * @param request DescribeVodDomainSrcTrafficDataRequest
 * @return DescribeVodDomainSrcTrafficDataResponse
 */
DescribeVodDomainSrcTrafficDataResponse Client::describeVodDomainSrcTrafficData(const DescribeVodDomainSrcTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainSrcTrafficDataWithOptions(request, runtime);
}

/**
 * @summary Queries the traffic data for one or more accelerated domains. The minimum time granularity is 5 minutes. You can query data in the last 366 days. Compared with the DescribeVodDomainRealTimeTrafficData operation, this operation provides a greater time granularity, higher data latency, but allows you to query historical data within a longer time period.
 *
 * @description * This operation is supported only in the **China (Shanghai)** region.
 * * You can specify a maximum of 500 accelerated domain names.
 * * If you specify neither `StartTime` nor `EndTime`, the data of the last 24 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay when you do not set `Interval`.
 * |Time granularity|Time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|Time range per query &#x3C; 3 days|93 days|15 minutes|
 * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
 * |1 day|31 days ≤ Time range per query ≤ 366 days|366 days|4 hours in most cases, not more than 24 hours|
 *
 * @param request DescribeVodDomainTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainTrafficDataResponse
 */
DescribeVodDomainTrafficDataResponse Client::describeVodDomainTrafficDataWithOptions(const DescribeVodDomainTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodDomainTrafficData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainTrafficDataResponse>();
}

/**
 * @summary Queries the traffic data for one or more accelerated domains. The minimum time granularity is 5 minutes. You can query data in the last 366 days. Compared with the DescribeVodDomainRealTimeTrafficData operation, this operation provides a greater time granularity, higher data latency, but allows you to query historical data within a longer time period.
 *
 * @description * This operation is supported only in the **China (Shanghai)** region.
 * * You can specify a maximum of 500 accelerated domain names.
 * * If you specify neither `StartTime` nor `EndTime`, the data of the last 24 hour is queried. You can specify both `StartTime` and `EndTime` parameters to query data of a specified time range.
 * **Time granularity**
 * The time granularity varies with the time range specified by the `StartTime` and `EndTime` parameters. The following table describes the time period within which historical data is available and the data delay when you do not set `Interval`.
 * |Time granularity|Time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|Time range per query &#x3C; 3 days|93 days|15 minutes|
 * |1 hour|3 days ≤ Time range per query &#x3C; 31 days|186 days|3 to 4 hours|
 * |1 day|31 days ≤ Time range per query ≤ 366 days|366 days|4 hours in most cases, not more than 24 hours|
 *
 * @param request DescribeVodDomainTrafficDataRequest
 * @return DescribeVodDomainTrafficDataResponse
 */
DescribeVodDomainTrafficDataResponse Client::describeVodDomainTrafficData(const DescribeVodDomainTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainTrafficDataWithOptions(request, runtime);
}

/**
 * @summary Queries the traffic or bandwidth data of one or more accelerated domain names.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   You can specify up to 100 accelerated domain names in a request. Separate multiple domain names with commas (,). If you do not specify an accelerated domain name, the data of all accelerated domain names within your Alibaba Cloud account is returned.
 * *   You can query data in the last year. The maximum time range that can be queried is three months. If you specify a time range of one to three days, the system returns data on an hourly basis. If you specify a time range of four days or more, the system returns data on a daily basis.
 *
 * @param request DescribeVodDomainUsageDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainUsageDataResponse
 */
DescribeVodDomainUsageDataResponse Client::describeVodDomainUsageDataWithOptions(const DescribeVodDomainUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArea()) {
    query["Area"] = request.area();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasField()) {
    query["Field"] = request.field();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
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
    {"action" , "DescribeVodDomainUsageData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodDomainUsageDataResponse>();
}

/**
 * @summary Queries the traffic or bandwidth data of one or more accelerated domain names.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   You can specify up to 100 accelerated domain names in a request. Separate multiple domain names with commas (,). If you do not specify an accelerated domain name, the data of all accelerated domain names within your Alibaba Cloud account is returned.
 * *   You can query data in the last year. The maximum time range that can be queried is three months. If you specify a time range of one to three days, the system returns data on an hourly basis. If you specify a time range of four days or more, the system returns data on a daily basis.
 *
 * @param request DescribeVodDomainUsageDataRequest
 * @return DescribeVodDomainUsageDataResponse
 */
DescribeVodDomainUsageDataResponse Client::describeVodDomainUsageData(const DescribeVodDomainUsageDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainUsageDataWithOptions(request, runtime);
}

/**
 * @summary 点播云剪辑用量查询
 *
 * @param request DescribeVodEditingUsageDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodEditingUsageDataResponse
 */
DescribeVodEditingUsageDataResponse Client::describeVodEditingUsageDataWithOptions(const DescribeVodEditingUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasSpecification()) {
    query["Specification"] = request.specification();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodEditingUsageData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodEditingUsageDataResponse>();
}

/**
 * @summary 点播云剪辑用量查询
 *
 * @param request DescribeVodEditingUsageDataRequest
 * @return DescribeVodEditingUsageDataResponse
 */
DescribeVodEditingUsageDataResponse Client::describeVodEditingUsageData(const DescribeVodEditingUsageDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodEditingUsageDataWithOptions(request, runtime);
}

/**
 * @summary Queries the playback statistics based on the media ID. You can call this operation to query information such as the number of visits, average video views per viewer, total number of views, average playback duration per viewer, and total playback duration.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   Only playback data in ApsaraVideo Player SDK is collected.
 * *   You can query only data within the last 30 days.
 * *   Before you call this operation, make sure that the following requirements are met:
 *     *   ApsaraVideo Player SDK for Android or iOS
 *         *   ApsaraVideo Player SDK for Android or iOS V5.4.9.2 or later is used.
 *         *   A license for ApsaraVideo Player SDK is obtained. For more information, see [Manage licenses](https://help.aliyun.com/document_detail/469166.html).
 *         *   The log reporting feature is enabled. By default, the feature is enabled for ApsaraVideo Player SDKs. For more information, see [Integrate ApsaraVideo Player SDK for Android](~~311525#section-dc4-gp6-xk2~~) and [Integrate ApsaraVideo Player SDK for iOS](~~313855#section-cmf-k7d-jg5~~).
 *     *   ApsaraVideo Player SDK for Web
 *         *   ApsaraVideo Player SDK for Web V2.16.0 or later is used.
 *         *   A license for **playback quality monitoring** is obtained. To apply for the license, [submit a request on Yida to enable value-added features for ApsaraVideo Player SDK for Web](https://yida.alibaba-inc.com/o/webplayer#/). For more information, see the description of the `license` parameter in the [API operations](~~125572#section-3ty-gwp-6pa~~) topic.
 *         *   The log reporting feature is enabled. By default, the feature is enabled for ApsaraVideo Player SDKs.
 *
 * @param request DescribeVodMediaPlayDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodMediaPlayDataResponse
 */
DescribeVodMediaPlayDataResponse Client::describeVodMediaPlayDataWithOptions(const DescribeVodMediaPlayDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasOrderName()) {
    query["OrderName"] = request.orderName();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasOs()) {
    query["Os"] = request.os();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPlayDate()) {
    query["PlayDate"] = request.playDate();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasTerminalType()) {
    query["TerminalType"] = request.terminalType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodMediaPlayData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodMediaPlayDataResponse>();
}

/**
 * @summary Queries the playback statistics based on the media ID. You can call this operation to query information such as the number of visits, average video views per viewer, total number of views, average playback duration per viewer, and total playback duration.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   Only playback data in ApsaraVideo Player SDK is collected.
 * *   You can query only data within the last 30 days.
 * *   Before you call this operation, make sure that the following requirements are met:
 *     *   ApsaraVideo Player SDK for Android or iOS
 *         *   ApsaraVideo Player SDK for Android or iOS V5.4.9.2 or later is used.
 *         *   A license for ApsaraVideo Player SDK is obtained. For more information, see [Manage licenses](https://help.aliyun.com/document_detail/469166.html).
 *         *   The log reporting feature is enabled. By default, the feature is enabled for ApsaraVideo Player SDKs. For more information, see [Integrate ApsaraVideo Player SDK for Android](~~311525#section-dc4-gp6-xk2~~) and [Integrate ApsaraVideo Player SDK for iOS](~~313855#section-cmf-k7d-jg5~~).
 *     *   ApsaraVideo Player SDK for Web
 *         *   ApsaraVideo Player SDK for Web V2.16.0 or later is used.
 *         *   A license for **playback quality monitoring** is obtained. To apply for the license, [submit a request on Yida to enable value-added features for ApsaraVideo Player SDK for Web](https://yida.alibaba-inc.com/o/webplayer#/). For more information, see the description of the `license` parameter in the [API operations](~~125572#section-3ty-gwp-6pa~~) topic.
 *         *   The log reporting feature is enabled. By default, the feature is enabled for ApsaraVideo Player SDKs.
 *
 * @param request DescribeVodMediaPlayDataRequest
 * @return DescribeVodMediaPlayDataResponse
 */
DescribeVodMediaPlayDataResponse Client::describeVodMediaPlayData(const DescribeVodMediaPlayDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodMediaPlayDataWithOptions(request, runtime);
}

/**
 * @summary 查询播放器指标数据
 *
 * @param request DescribeVodPlayerCollectDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodPlayerCollectDataResponse
 */
DescribeVodPlayerCollectDataResponse Client::describeVodPlayerCollectDataWithOptions(const DescribeVodPlayerCollectDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasMetrics()) {
    query["Metrics"] = request.metrics();
  }

  if (!!request.hasOs()) {
    query["Os"] = request.os();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.period();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTerminalType()) {
    query["TerminalType"] = request.terminalType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodPlayerCollectData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodPlayerCollectDataResponse>();
}

/**
 * @summary 查询播放器指标数据
 *
 * @param request DescribeVodPlayerCollectDataRequest
 * @return DescribeVodPlayerCollectDataResponse
 */
DescribeVodPlayerCollectDataResponse Client::describeVodPlayerCollectData(const DescribeVodPlayerCollectDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodPlayerCollectDataWithOptions(request, runtime);
}

/**
 * @summary 查询播放器指标数据
 *
 * @param request DescribeVodPlayerDimensionDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodPlayerDimensionDataResponse
 */
DescribeVodPlayerDimensionDataResponse Client::describeVodPlayerDimensionDataWithOptions(const DescribeVodPlayerDimensionDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasDimension()) {
    query["Dimension"] = request.dimension();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodPlayerDimensionData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodPlayerDimensionDataResponse>();
}

/**
 * @summary 查询播放器指标数据
 *
 * @param request DescribeVodPlayerDimensionDataRequest
 * @return DescribeVodPlayerDimensionDataResponse
 */
DescribeVodPlayerDimensionDataResponse Client::describeVodPlayerDimensionData(const DescribeVodPlayerDimensionDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodPlayerDimensionDataWithOptions(request, runtime);
}

/**
 * @summary 查询播放器指标数据
 *
 * @param request DescribeVodPlayerMetricDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodPlayerMetricDataResponse
 */
DescribeVodPlayerMetricDataResponse Client::describeVodPlayerMetricDataWithOptions(const DescribeVodPlayerMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.filters();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasMetrics()) {
    query["Metrics"] = request.metrics();
  }

  if (!!request.hasOs()) {
    query["Os"] = request.os();
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

  if (!!request.hasTerminalType()) {
    query["TerminalType"] = request.terminalType();
  }

  if (!!request.hasTop()) {
    query["Top"] = request.top();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodPlayerMetricData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodPlayerMetricDataResponse>();
}

/**
 * @summary 查询播放器指标数据
 *
 * @param request DescribeVodPlayerMetricDataRequest
 * @return DescribeVodPlayerMetricDataResponse
 */
DescribeVodPlayerMetricDataResponse Client::describeVodPlayerMetricData(const DescribeVodPlayerMetricDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodPlayerMetricDataWithOptions(request, runtime);
}

/**
 * @summary Queries the bandwidth data by Internet service provider (ISP) and region.
 *
 * @description The data is collected every 5 minutes. You can call this API operation up to 20 times per second per account. Time granularity
 * The time granularity supported by Interval, the maximum time period within which historical data is available, and the data delay vary based on the time range to query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|1 hour|93 days|15 minutes|
 *
 * @param request DescribeVodRangeDataByLocateAndIspServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodRangeDataByLocateAndIspServiceResponse
 */
DescribeVodRangeDataByLocateAndIspServiceResponse Client::describeVodRangeDataByLocateAndIspServiceWithOptions(const DescribeVodRangeDataByLocateAndIspServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.ispNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.locationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodRangeDataByLocateAndIspService"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodRangeDataByLocateAndIspServiceResponse>();
}

/**
 * @summary Queries the bandwidth data by Internet service provider (ISP) and region.
 *
 * @description The data is collected every 5 minutes. You can call this API operation up to 20 times per second per account. Time granularity
 * The time granularity supported by Interval, the maximum time period within which historical data is available, and the data delay vary based on the time range to query, as described in the following table.
 * |Time granularity|Maximum time range per query|Historical data available|Data delay|
 * |---|---|---|---|
 * |5 minutes|1 hour|93 days|15 minutes|
 *
 * @param request DescribeVodRangeDataByLocateAndIspServiceRequest
 * @return DescribeVodRangeDataByLocateAndIspServiceResponse
 */
DescribeVodRangeDataByLocateAndIspServiceResponse Client::describeVodRangeDataByLocateAndIspService(const DescribeVodRangeDataByLocateAndIspServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodRangeDataByLocateAndIspServiceWithOptions(request, runtime);
}

/**
 * @summary Queries the maximum number and remaining number of requests to refresh or prefetch files on the current day. You can prefetch files based on URLs and refresh files based on URLs or directories.
 *
 * @description > *   This operation is available only in the **China (Shanghai)** region.
 * > *   You can call the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) operation to refresh content and the [PreloadVodObjectCaches](https://help.aliyun.com/document_detail/69211.html) operation to prefetch content.
 *
 * @param request DescribeVodRefreshQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodRefreshQuotaResponse
 */
DescribeVodRefreshQuotaResponse Client::describeVodRefreshQuotaWithOptions(const DescribeVodRefreshQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodRefreshQuota"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodRefreshQuotaResponse>();
}

/**
 * @summary Queries the maximum number and remaining number of requests to refresh or prefetch files on the current day. You can prefetch files based on URLs and refresh files based on URLs or directories.
 *
 * @description > *   This operation is available only in the **China (Shanghai)** region.
 * > *   You can call the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) operation to refresh content and the [PreloadVodObjectCaches](https://help.aliyun.com/document_detail/69211.html) operation to prefetch content.
 *
 * @param request DescribeVodRefreshQuotaRequest
 * @return DescribeVodRefreshQuotaResponse
 */
DescribeVodRefreshQuotaResponse Client::describeVodRefreshQuota(const DescribeVodRefreshQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodRefreshQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries the information about one or more refresh or prefetch tasks.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   If you do not specify the TaskId or ObjectPath parameter, the data in the last three days is returned on the first page. By default, one page displays a maximum of 20 entries. You can specify the TaskId and ObjectPath parameters at the same time.
 *
 * @param request DescribeVodRefreshTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodRefreshTasksResponse
 */
DescribeVodRefreshTasksResponse Client::describeVodRefreshTasksWithOptions(const DescribeVodRefreshTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasObjectPath()) {
    query["ObjectPath"] = request.objectPath();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.objectType();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodRefreshTasks"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodRefreshTasksResponse>();
}

/**
 * @summary Queries the information about one or more refresh or prefetch tasks.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   If you do not specify the TaskId or ObjectPath parameter, the data in the last three days is returned on the first page. By default, one page displays a maximum of 20 entries. You can specify the TaskId and ObjectPath parameters at the same time.
 *
 * @param request DescribeVodRefreshTasksRequest
 * @return DescribeVodRefreshTasksResponse
 */
DescribeVodRefreshTasksResponse Client::describeVodRefreshTasks(const DescribeVodRefreshTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodRefreshTasksWithOptions(request, runtime);
}

/**
 * @summary Queries the certificates by domain name.
 *
 * @param request DescribeVodSSLCertificateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodSSLCertificateListResponse
 */
DescribeVodSSLCertificateListResponse Client::describeVodSSLCertificateListWithOptions(const DescribeVodSSLCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
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

  if (!!request.hasSearchKeyword()) {
    query["SearchKeyword"] = request.searchKeyword();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodSSLCertificateList"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodSSLCertificateListResponse>();
}

/**
 * @summary Queries the certificates by domain name.
 *
 * @param request DescribeVodSSLCertificateListRequest
 * @return DescribeVodSSLCertificateListResponse
 */
DescribeVodSSLCertificateListResponse Client::describeVodSSLCertificateList(const DescribeVodSSLCertificateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodSSLCertificateListWithOptions(request, runtime);
}

/**
 * @summary Queries the usage of storage-related resources, including the storage volume and outbound traffic.
 *
 * @description > *   This operation is available only in the **China (Shanghai)** region.
 * >*   If the time range to query is less than or equal to seven days, the system returns the statistics collected on an hourly basis. If the time range to query is greater than seven days, the system returns the statistics collected on a daily basis. The maximum time range that you can specify to query is 31 days.
 *
 * @param request DescribeVodStorageDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodStorageDataResponse
 */
DescribeVodStorageDataResponse Client::describeVodStorageDataWithOptions(const DescribeVodStorageDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStorage()) {
    query["Storage"] = request.storage();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.storageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodStorageData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodStorageDataResponse>();
}

/**
 * @summary Queries the usage of storage-related resources, including the storage volume and outbound traffic.
 *
 * @description > *   This operation is available only in the **China (Shanghai)** region.
 * >*   If the time range to query is less than or equal to seven days, the system returns the statistics collected on an hourly basis. If the time range to query is greater than seven days, the system returns the statistics collected on a daily basis. The maximum time range that you can specify to query is 31 days.
 *
 * @param request DescribeVodStorageDataRequest
 * @return DescribeVodStorageDataResponse
 */
DescribeVodStorageDataResponse Client::describeVodStorageData(const DescribeVodStorageDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodStorageDataWithOptions(request, runtime);
}

/**
 * @summary Queries the usage of tiered storage for media assets.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   If you specify a time range within 7 days, the request returns the data based on hours. If you specify a time range longer than 7 days, the request returns the data based on days. The maximum time range is 31 days.
 *
 * @param request DescribeVodTieringStorageDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodTieringStorageDataResponse
 */
DescribeVodTieringStorageDataResponse Client::describeVodTieringStorageDataWithOptions(const DescribeVodTieringStorageDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStorageClass()) {
    query["StorageClass"] = request.storageClass();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodTieringStorageData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodTieringStorageDataResponse>();
}

/**
 * @summary Queries the usage of tiered storage for media assets.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   If you specify a time range within 7 days, the request returns the data based on hours. If you specify a time range longer than 7 days, the request returns the data based on days. The maximum time range is 31 days.
 *
 * @param request DescribeVodTieringStorageDataRequest
 * @return DescribeVodTieringStorageDataResponse
 */
DescribeVodTieringStorageDataResponse Client::describeVodTieringStorageData(const DescribeVodTieringStorageDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodTieringStorageDataWithOptions(request, runtime);
}

/**
 * @summary Queries the data retrieval from tiered storage.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   If you specify a time range within 7 days, the request returns the data based on hours. If you specify a time range longer than 7 days, the request returns the data based on days. The maximum time range is 31 days.
 *
 * @param request DescribeVodTieringStorageRetrievalDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodTieringStorageRetrievalDataResponse
 */
DescribeVodTieringStorageRetrievalDataResponse Client::describeVodTieringStorageRetrievalDataWithOptions(const DescribeVodTieringStorageRetrievalDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStorageClass()) {
    query["StorageClass"] = request.storageClass();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodTieringStorageRetrievalData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodTieringStorageRetrievalDataResponse>();
}

/**
 * @summary Queries the data retrieval from tiered storage.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   If you specify a time range within 7 days, the request returns the data based on hours. If you specify a time range longer than 7 days, the request returns the data based on days. The maximum time range is 31 days.
 *
 * @param request DescribeVodTieringStorageRetrievalDataRequest
 * @return DescribeVodTieringStorageRetrievalDataResponse
 */
DescribeVodTieringStorageRetrievalDataResponse Client::describeVodTieringStorageRetrievalData(const DescribeVodTieringStorageRetrievalDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodTieringStorageRetrievalDataWithOptions(request, runtime);
}

/**
 * @summary Queries the transcoding statistics.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   If the time range to query is less than or equal to seven days, the system returns the statistics collected on an hourly basis. If the time range to query is greater than seven days, the system returns the statistics collected on a daily basis. The maximum time range that you can specify to query is 31 days.
 *
 * @param request DescribeVodTranscodeDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodTranscodeDataResponse
 */
DescribeVodTranscodeDataResponse Client::describeVodTranscodeDataWithOptions(const DescribeVodTranscodeDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasSpecification()) {
    query["Specification"] = request.specification();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStorage()) {
    query["Storage"] = request.storage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodTranscodeData"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodTranscodeDataResponse>();
}

/**
 * @summary Queries the transcoding statistics.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   If the time range to query is less than or equal to seven days, the system returns the statistics collected on an hourly basis. If the time range to query is greater than seven days, the system returns the statistics collected on a daily basis. The maximum time range that you can specify to query is 31 days.
 *
 * @param request DescribeVodTranscodeDataRequest
 * @return DescribeVodTranscodeDataResponse
 */
DescribeVodTranscodeDataResponse Client::describeVodTranscodeData(const DescribeVodTranscodeDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodTranscodeDataWithOptions(request, runtime);
}

/**
 * @summary Queries the domain names for CDN within your Alibaba Cloud account.
 *
 * @description *   You can filter domain names by name and status. Fuzzy match is supported for domain name-based query.
 * *   This operation is available only in the China (Shanghai) region.
 *
 * @param request DescribeVodUserDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodUserDomainsResponse
 */
DescribeVodUserDomainsResponse Client::describeVodUserDomainsWithOptions(const DescribeVodUserDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasDomainSearchType()) {
    query["DomainSearchType"] = request.domainSearchType();
  }

  if (!!request.hasDomainStatus()) {
    query["DomainStatus"] = request.domainStatus();
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

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodUserDomains"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodUserDomainsResponse>();
}

/**
 * @summary Queries the domain names for CDN within your Alibaba Cloud account.
 *
 * @description *   You can filter domain names by name and status. Fuzzy match is supported for domain name-based query.
 * *   This operation is available only in the China (Shanghai) region.
 *
 * @param request DescribeVodUserDomainsRequest
 * @return DescribeVodUserDomainsResponse
 */
DescribeVodUserDomainsResponse Client::describeVodUserDomains(const DescribeVodUserDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodUserDomainsWithOptions(request, runtime);
}

/**
 * @summary 获取域名Vip
 *
 * @param request DescribeVodUserVipsByDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodUserVipsByDomainResponse
 */
DescribeVodUserVipsByDomainResponse Client::describeVodUserVipsByDomainWithOptions(const DescribeVodUserVipsByDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAvailable()) {
    query["Available"] = request.available();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodUserVipsByDomain"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodUserVipsByDomainResponse>();
}

/**
 * @summary 获取域名Vip
 *
 * @param request DescribeVodUserVipsByDomainRequest
 * @return DescribeVodUserVipsByDomainResponse
 */
DescribeVodUserVipsByDomainResponse Client::describeVodUserVipsByDomain(const DescribeVodUserVipsByDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodUserVipsByDomainWithOptions(request, runtime);
}

/**
 * @summary Queries the ownership verification content.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 *
 * @param request DescribeVodVerifyContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodVerifyContentResponse
 */
DescribeVodVerifyContentResponse Client::describeVodVerifyContentWithOptions(const DescribeVodVerifyContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVodVerifyContent"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVodVerifyContentResponse>();
}

/**
 * @summary Queries the ownership verification content.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 *
 * @param request DescribeVodVerifyContentRequest
 * @return DescribeVodVerifyContentResponse
 */
DescribeVodVerifyContentResponse Client::describeVodVerifyContent(const DescribeVodVerifyContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodVerifyContentWithOptions(request, runtime);
}

/**
 * @summary Revokes application permissions from the specified identity. The identity may a RAM user or RAM role.
 *
 * @description >  You can grant a maximum of 10 application permissions to a RAM user or RAM role.
 *
 * @param request DetachAppPolicyFromIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachAppPolicyFromIdentityResponse
 */
DetachAppPolicyFromIdentityResponse Client::detachAppPolicyFromIdentityWithOptions(const DetachAppPolicyFromIdentityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasIdentityName()) {
    query["IdentityName"] = request.identityName();
  }

  if (!!request.hasIdentityType()) {
    query["IdentityType"] = request.identityType();
  }

  if (!!request.hasPolicyNames()) {
    query["PolicyNames"] = request.policyNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetachAppPolicyFromIdentity"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetachAppPolicyFromIdentityResponse>();
}

/**
 * @summary Revokes application permissions from the specified identity. The identity may a RAM user or RAM role.
 *
 * @description >  You can grant a maximum of 10 application permissions to a RAM user or RAM role.
 *
 * @param request DetachAppPolicyFromIdentityRequest
 * @return DetachAppPolicyFromIdentityResponse
 */
DetachAppPolicyFromIdentityResponse Client::detachAppPolicyFromIdentity(const DetachAppPolicyFromIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachAppPolicyFromIdentityWithOptions(request, runtime);
}

/**
 * @summary Generates a key for secure download. ApsaraVideo Player SDK provides the secure download feature. Videos that are downloaded to your local device in this mode are encrypted. You can play the encrypted videos only by using the key file generated from the app that you specified. Secure download protects your videos from malicious playback or distribution.
 *
 * @description *   To use the secure download feature, you must enable the download feature in the ApsaraVideo VOD console and set the download method to secure download. For more information, see [Configure download settings](https://help.aliyun.com/document_detail/86107.html).
 * *   After you generate a key for secure download, you must configure the key in ApsaraVideo Player SDK. For more information, see [Secure download](https://help.aliyun.com/document_detail/124735.html).
 *
 * @param request GenerateDownloadSecretKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateDownloadSecretKeyResponse
 */
GenerateDownloadSecretKeyResponse Client::generateDownloadSecretKeyWithOptions(const GenerateDownloadSecretKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppDecryptKey()) {
    query["AppDecryptKey"] = request.appDecryptKey();
  }

  if (!!request.hasAppIdentification()) {
    query["AppIdentification"] = request.appIdentification();
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
    {"action" , "GenerateDownloadSecretKey"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateDownloadSecretKeyResponse>();
}

/**
 * @summary Generates a key for secure download. ApsaraVideo Player SDK provides the secure download feature. Videos that are downloaded to your local device in this mode are encrypted. You can play the encrypted videos only by using the key file generated from the app that you specified. Secure download protects your videos from malicious playback or distribution.
 *
 * @description *   To use the secure download feature, you must enable the download feature in the ApsaraVideo VOD console and set the download method to secure download. For more information, see [Configure download settings](https://help.aliyun.com/document_detail/86107.html).
 * *   After you generate a key for secure download, you must configure the key in ApsaraVideo Player SDK. For more information, see [Secure download](https://help.aliyun.com/document_detail/124735.html).
 *
 * @param request GenerateDownloadSecretKeyRequest
 * @return GenerateDownloadSecretKeyResponse
 */
GenerateDownloadSecretKeyResponse Client::generateDownloadSecretKey(const GenerateDownloadSecretKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateDownloadSecretKeyWithOptions(request, runtime);
}

/**
 * @summary Generates a random Key Management Service (KMS) data key used for HLS encryption in ApsaraVideo VOD.
 *
 * @param request GenerateKMSDataKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateKMSDataKeyResponse
 */
GenerateKMSDataKeyResponse Client::generateKMSDataKeyWithOptions(const GenerateKMSDataKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateKMSDataKey"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateKMSDataKeyResponse>();
}

/**
 * @summary Generates a random Key Management Service (KMS) data key used for HLS encryption in ApsaraVideo VOD.
 *
 * @param request GenerateKMSDataKeyRequest
 * @return GenerateKMSDataKeyResponse
 */
GenerateKMSDataKeyResponse Client::generateKMSDataKey(const GenerateKMSDataKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateKMSDataKeyWithOptions(request, runtime);
}

/**
 * @summary Queries jobs of image AI processing.
 *
 * @description *   Regions that support this operation: **China (Beijing)** and **China (Shanghai)**.
 * *   Call the [SubmitAIImageJob](~~SubmitAIImageJob~~) operation to submit image AI processing jobs before you call this operation to query image AI processing jobs.
 * *   You can query a maximum of 10 jobs of image AI processing in one request.
 *
 * @param request GetAIImageJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAIImageJobsResponse
 */
GetAIImageJobsResponse Client::getAIImageJobsWithOptions(const GetAIImageJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetAIImageJobs"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAIImageJobsResponse>();
}

/**
 * @summary Queries jobs of image AI processing.
 *
 * @description *   Regions that support this operation: **China (Beijing)** and **China (Shanghai)**.
 * *   Call the [SubmitAIImageJob](~~SubmitAIImageJob~~) operation to submit image AI processing jobs before you call this operation to query image AI processing jobs.
 * *   You can query a maximum of 10 jobs of image AI processing in one request.
 *
 * @param request GetAIImageJobsRequest
 * @return GetAIImageJobsResponse
 */
GetAIImageJobsResponse Client::getAIImageJobs(const GetAIImageJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAIImageJobsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an intelligent review job. After the job is submitted, it is processed asynchronously. You can call this operation to query the job information in real time.
 *
 * @description ApsaraVideo VOD stores the snapshots of the intelligent review results free of charge for two weeks. After this period, the snapshots are automatically deleted.
 *
 * @param request GetAIMediaAuditJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAIMediaAuditJobResponse
 */
GetAIMediaAuditJobResponse Client::getAIMediaAuditJobWithOptions(const GetAIMediaAuditJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAIMediaAuditJob"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAIMediaAuditJobResponse>();
}

/**
 * @summary Queries the information about an intelligent review job. After the job is submitted, it is processed asynchronously. You can call this operation to query the job information in real time.
 *
 * @description ApsaraVideo VOD stores the snapshots of the intelligent review results free of charge for two weeks. After this period, the snapshots are automatically deleted.
 *
 * @param request GetAIMediaAuditJobRequest
 * @return GetAIMediaAuditJobResponse
 */
GetAIMediaAuditJobResponse Client::getAIMediaAuditJob(const GetAIMediaAuditJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAIMediaAuditJobWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an AI template.
 *
 * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * *   Before you call this operation to query details of an AI template, you must obtain the ID of the AI template.
 *
 * @param request GetAITemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAITemplateResponse
 */
GetAITemplateResponse Client::getAITemplateWithOptions(const GetAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAITemplate"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAITemplateResponse>();
}

/**
 * @summary Queries the details of an AI template.
 *
 * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * *   Before you call this operation to query details of an AI template, you must obtain the ID of the AI template.
 *
 * @param request GetAITemplateRequest
 * @return GetAITemplateResponse
 */
GetAITemplateResponse Client::getAITemplate(const GetAITemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAITemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the results of smart tagging jobs.
 *
 * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * *   You can obtain the smart tagging results by using the video ID.
 *
 * @param request GetAIVideoTagResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAIVideoTagResultResponse
 */
GetAIVideoTagResultResponse Client::getAIVideoTagResultWithOptions(const GetAIVideoTagResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAIVideoTagResult"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAIVideoTagResultResponse>();
}

/**
 * @summary Queries the results of smart tagging jobs.
 *
 * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * *   You can obtain the smart tagging results by using the video ID.
 *
 * @param request GetAIVideoTagResultRequest
 * @return GetAIVideoTagResultResponse
 */
GetAIVideoTagResultResponse Client::getAIVideoTagResult(const GetAIVideoTagResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAIVideoTagResultWithOptions(request, runtime);
}

/**
 * @summary Queries the information about one or more applications based on application IDs.
 *
 * @description You can specify multiple accelerated domain names in a request.
 *
 * @param request GetAppInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppInfosResponse
 */
GetAppInfosResponse Client::getAppInfosWithOptions(const GetAppInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppIds()) {
    query["AppIds"] = request.appIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAppInfos"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppInfosResponse>();
}

/**
 * @summary Queries the information about one or more applications based on application IDs.
 *
 * @description You can specify multiple accelerated domain names in a request.
 *
 * @param request GetAppInfosRequest
 * @return GetAppInfosResponse
 */
GetAppInfosResponse Client::getAppInfos(const GetAppInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppInfosWithOptions(request, runtime);
}

/**
 * @summary 获取应用播放密钥
 *
 * @param request GetAppPlayKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppPlayKeyResponse
 */
GetAppPlayKeyResponse Client::getAppPlayKeyWithOptions(const GetAppPlayKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
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
    {"action" , "GetAppPlayKey"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAppPlayKeyResponse>();
}

/**
 * @summary 获取应用播放密钥
 *
 * @param request GetAppPlayKeyRequest
 * @return GetAppPlayKeyResponse
 */
GetAppPlayKeyResponse Client::getAppPlayKey(const GetAppPlayKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppPlayKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the URL and basic information about one or more auxiliary media assets such as watermark images, subtitle files, and materials based on IDs.
 *
 * @description You can query information about up to 20 auxiliary media assets in a request.
 *
 * @param request GetAttachedMediaInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAttachedMediaInfoResponse
 */
GetAttachedMediaInfoResponse Client::getAttachedMediaInfoWithOptions(const GetAttachedMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.authTimeout();
  }

  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.mediaIds();
  }

  if (!!request.hasOutputType()) {
    query["OutputType"] = request.outputType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAttachedMediaInfo"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAttachedMediaInfoResponse>();
}

/**
 * @summary Queries the URL and basic information about one or more auxiliary media assets such as watermark images, subtitle files, and materials based on IDs.
 *
 * @description You can query information about up to 20 auxiliary media assets in a request.
 *
 * @param request GetAttachedMediaInfoRequest
 * @return GetAttachedMediaInfoResponse
 */
GetAttachedMediaInfoResponse Client::getAttachedMediaInfo(const GetAttachedMediaInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAttachedMediaInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the manual review history.
 *
 * @param request GetAuditHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAuditHistoryResponse
 */
GetAuditHistoryResponse Client::getAuditHistoryWithOptions(const GetAuditHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAuditHistory"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAuditHistoryResponse>();
}

/**
 * @summary Queries the manual review history.
 *
 * @param request GetAuditHistoryRequest
 * @return GetAuditHistoryResponse
 */
GetAuditHistoryResponse Client::getAuditHistory(const GetAuditHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuditHistoryWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a specific category and its subcategories based on the ID or type of the category.
 *
 * @param request GetCategoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCategoriesResponse
 */
GetCategoriesResponse Client::getCategoriesWithOptions(const GetCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCateId()) {
    query["CateId"] = request.cateId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCategories"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCategoriesResponse>();
}

/**
 * @summary Queries the information about a specific category and its subcategories based on the ID or type of the category.
 *
 * @param request GetCategoriesRequest
 * @return GetCategoriesResponse
 */
GetCategoriesResponse Client::getCategories(const GetCategoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCategoriesWithOptions(request, runtime);
}

/**
 * @summary 支持区域化媒资ID级别播放数据查询
 *
 * @param request GetDailyPlayRegionStatisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDailyPlayRegionStatisResponse
 */
GetDailyPlayRegionStatisResponse Client::getDailyPlayRegionStatisWithOptions(const GetDailyPlayRegionStatisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDate()) {
    query["Date"] = request.date();
  }

  if (!!request.hasMediaRegion()) {
    query["MediaRegion"] = request.mediaRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDailyPlayRegionStatis"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDailyPlayRegionStatisResponse>();
}

/**
 * @summary 支持区域化媒资ID级别播放数据查询
 *
 * @param request GetDailyPlayRegionStatisRequest
 * @return GetDailyPlayRegionStatisResponse
 */
GetDailyPlayRegionStatisResponse Client::getDailyPlayRegionStatis(const GetDailyPlayRegionStatisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDailyPlayRegionStatisWithOptions(request, runtime);
}

/**
 * @summary Queries information about the default AI template.
 *
 * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * *   You can query information only about the default AI template for automated review.
 *
 * @param request GetDefaultAITemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDefaultAITemplateResponse
 */
GetDefaultAITemplateResponse Client::getDefaultAITemplateWithOptions(const GetDefaultAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDefaultAITemplate"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDefaultAITemplateResponse>();
}

/**
 * @summary Queries information about the default AI template.
 *
 * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * *   You can query information only about the default AI template for automated review.
 *
 * @param request GetDefaultAITemplateRequest
 * @return GetDefaultAITemplateResponse
 */
GetDefaultAITemplateResponse Client::getDefaultAITemplate(const GetDefaultAITemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDefaultAITemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the results of a digital watermark extraction job. You can call this operation to obtain information such as the job status and the content of the copyright or user-tracing watermark.
 *
 * @description *   This operation is supported only in the China (Shanghai) and China (Beijing) regions.
 * *   You can call this operation to query the watermark content after you call the [SubmitDigitalWatermarkExtractJob](~~SubmitDigitalWatermarkExtractJob~~) operation to extract the copyright or user-tracing watermark in a video.
 * *   You can query watermark content extracted only from watermark extraction jobs that are submitted in the last 2 years.
 *
 * @param request GetDigitalWatermarkExtractResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDigitalWatermarkExtractResultResponse
 */
GetDigitalWatermarkExtractResultResponse Client::getDigitalWatermarkExtractResultWithOptions(const GetDigitalWatermarkExtractResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtractType()) {
    query["ExtractType"] = request.extractType();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
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
    {"action" , "GetDigitalWatermarkExtractResult"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDigitalWatermarkExtractResultResponse>();
}

/**
 * @summary Queries the results of a digital watermark extraction job. You can call this operation to obtain information such as the job status and the content of the copyright or user-tracing watermark.
 *
 * @description *   This operation is supported only in the China (Shanghai) and China (Beijing) regions.
 * *   You can call this operation to query the watermark content after you call the [SubmitDigitalWatermarkExtractJob](~~SubmitDigitalWatermarkExtractJob~~) operation to extract the copyright or user-tracing watermark in a video.
 * *   You can query watermark content extracted only from watermark extraction jobs that are submitted in the last 2 years.
 *
 * @param request GetDigitalWatermarkExtractResultRequest
 * @return GetDigitalWatermarkExtractResultResponse
 */
GetDigitalWatermarkExtractResultResponse Client::getDigitalWatermarkExtractResult(const GetDigitalWatermarkExtractResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDigitalWatermarkExtractResultWithOptions(request, runtime);
}

/**
 * @summary 获取剪辑工程
 *
 * @param request GetEditingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEditingProjectResponse
 */
GetEditingProjectResponse Client::getEditingProjectWithOptions(const GetEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
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
    {"action" , "GetEditingProject"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEditingProjectResponse>();
}

/**
 * @summary 获取剪辑工程
 *
 * @param request GetEditingProjectRequest
 * @return GetEditingProjectResponse
 */
GetEditingProjectResponse Client::getEditingProject(const GetEditingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEditingProjectWithOptions(request, runtime);
}

/**
 * @summary Queries materials to be edited for an online editing project.
 *
 * @description During editing, you can add materials to the timeline, but some of them may not be used.
 *
 * @param request GetEditingProjectMaterialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEditingProjectMaterialsResponse
 */
GetEditingProjectMaterialsResponse Client::getEditingProjectMaterialsWithOptions(const GetEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaterialType()) {
    query["MaterialType"] = request.materialType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEditingProjectMaterials"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEditingProjectMaterialsResponse>();
}

/**
 * @summary Queries materials to be edited for an online editing project.
 *
 * @description During editing, you can add materials to the timeline, but some of them may not be used.
 *
 * @param request GetEditingProjectMaterialsRequest
 * @return GetEditingProjectMaterialsResponse
 */
GetEditingProjectMaterialsResponse Client::getEditingProjectMaterials(const GetEditingProjectMaterialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEditingProjectMaterialsWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information and access URL of an image based on the image ID.
 *
 * @param request GetImageInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageInfoResponse
 */
GetImageInfoResponse Client::getImageInfoWithOptions(const GetImageInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.authTimeout();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.imageId();
  }

  if (!!request.hasOutputType()) {
    query["OutputType"] = request.outputType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetImageInfo"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageInfoResponse>();
}

/**
 * @summary Queries the basic information and access URL of an image based on the image ID.
 *
 * @param request GetImageInfoRequest
 * @return GetImageInfoResponse
 */
GetImageInfoResponse Client::getImageInfo(const GetImageInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information about multiple images at a time.
 *
 * @description *   You can call the [CreateUploadImage](~~CreateUploadImage~~) operation to upload images to ApsaraVideo VOD and call this operation to query the basic information about multiple images at a time.
 * *   To query information about video snapshots, call the [ListSnapshots](~~ListSnapshots~~) operation.
 * *   You can specify up to 20 image IDs in one call.
 *
 * @param request GetImageInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageInfosResponse
 */
GetImageInfosResponse Client::getImageInfosWithOptions(const GetImageInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.authTimeout();
  }

  if (!!request.hasImageIds()) {
    query["ImageIds"] = request.imageIds();
  }

  if (!!request.hasOutputType()) {
    query["OutputType"] = request.outputType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetImageInfos"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetImageInfosResponse>();
}

/**
 * @summary Queries the basic information about multiple images at a time.
 *
 * @description *   You can call the [CreateUploadImage](~~CreateUploadImage~~) operation to upload images to ApsaraVideo VOD and call this operation to query the basic information about multiple images at a time.
 * *   To query information about video snapshots, call the [ListSnapshots](~~ListSnapshots~~) operation.
 * *   You can specify up to 20 image IDs in one call.
 *
 * @param request GetImageInfosRequest
 * @return GetImageInfosResponse
 */
GetImageInfosResponse Client::getImageInfos(const GetImageInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageInfosWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an asynchronous task based on jobId.
 *
 * @description ****
 * You can call this operation to query only asynchronous tasks of the last six months. The types of tasks that you can query include transcoding tasks, snapshot tasks, and AI tasks.
 * **QPS limit**
 * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request GetJobDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobDetailResponse
 */
GetJobDetailResponse Client::getJobDetailWithOptions(const GetJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.jobType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetJobDetail"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetJobDetailResponse>();
}

/**
 * @summary Queries the details of an asynchronous task based on jobId.
 *
 * @description ****
 * You can call this operation to query only asynchronous tasks of the last six months. The types of tasks that you can query include transcoding tasks, snapshot tasks, and AI tasks.
 * **QPS limit**
 * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request GetJobDetailRequest
 * @return GetJobDetailResponse
 */
GetJobDetailResponse Client::getJobDetail(const GetJobDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJobDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the details of audio review results.
 *
 * @description If notifications for the [CreateAuditComplete](https://help.aliyun.com/document_detail/89576.html) event are configured, event notifications are sent to the callback URL after automated review is complete. You can call this operation to query the details of audio review results.
 *
 * @param request GetMediaAuditAudioResultDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaAuditAudioResultDetailResponse
 */
GetMediaAuditAudioResultDetailResponse Client::getMediaAuditAudioResultDetailWithOptions(const GetMediaAuditAudioResultDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
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
    {"action" , "GetMediaAuditAudioResultDetail"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaAuditAudioResultDetailResponse>();
}

/**
 * @summary Queries the details of audio review results.
 *
 * @description If notifications for the [CreateAuditComplete](https://help.aliyun.com/document_detail/89576.html) event are configured, event notifications are sent to the callback URL after automated review is complete. You can call this operation to query the details of audio review results.
 *
 * @param request GetMediaAuditAudioResultDetailRequest
 * @return GetMediaAuditAudioResultDetailResponse
 */
GetMediaAuditAudioResultDetailResponse Client::getMediaAuditAudioResultDetail(const GetMediaAuditAudioResultDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaAuditAudioResultDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the summary of automated review results.
 *
 * @param request GetMediaAuditResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaAuditResultResponse
 */
GetMediaAuditResultResponse Client::getMediaAuditResultWithOptions(const GetMediaAuditResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMediaAuditResult"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaAuditResultResponse>();
}

/**
 * @summary Queries the summary of automated review results.
 *
 * @param request GetMediaAuditResultRequest
 * @return GetMediaAuditResultResponse
 */
GetMediaAuditResultResponse Client::getMediaAuditResult(const GetMediaAuditResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaAuditResultWithOptions(request, runtime);
}

/**
 * @summary Queries the details of automated review results. You can call this operation to query the details of review results in real time.
 *
 * @description *   By default, only details of snapshots that violate content regulations and potentially violate content regulations are returned.
 * *   ApsaraVideo VOD stores the snapshots in the automated review results free of charge for two weeks. After this period, the snapshots are automatically deleted.
 * *   This operation is available only in the Singapore region.
 *
 * @param request GetMediaAuditResultDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaAuditResultDetailResponse
 */
GetMediaAuditResultDetailResponse Client::getMediaAuditResultDetailWithOptions(const GetMediaAuditResultDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMediaAuditResultDetail"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaAuditResultDetailResponse>();
}

/**
 * @summary Queries the details of automated review results. You can call this operation to query the details of review results in real time.
 *
 * @description *   By default, only details of snapshots that violate content regulations and potentially violate content regulations are returned.
 * *   ApsaraVideo VOD stores the snapshots in the automated review results free of charge for two weeks. After this period, the snapshots are automatically deleted.
 * *   This operation is available only in the Singapore region.
 *
 * @param request GetMediaAuditResultDetailRequest
 * @return GetMediaAuditResultDetailResponse
 */
GetMediaAuditResultDetailResponse Client::getMediaAuditResultDetail(const GetMediaAuditResultDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaAuditResultDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the timelines of all snapshots that violate content regulations.
 *
 * @description >  By default, only details of snapshots that violate content regulations and potentially violate content regulations are returned.
 * This operation is available only in the Singapore region.
 *
 * @param request GetMediaAuditResultTimelineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaAuditResultTimelineResponse
 */
GetMediaAuditResultTimelineResponse Client::getMediaAuditResultTimelineWithOptions(const GetMediaAuditResultTimelineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMediaAuditResultTimeline"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaAuditResultTimelineResponse>();
}

/**
 * @summary Queries the timelines of all snapshots that violate content regulations.
 *
 * @description >  By default, only details of snapshots that violate content regulations and potentially violate content regulations are returned.
 * This operation is available only in the Singapore region.
 *
 * @param request GetMediaAuditResultTimelineRequest
 * @return GetMediaAuditResultTimelineResponse
 */
GetMediaAuditResultTimelineResponse Client::getMediaAuditResultTimeline(const GetMediaAuditResultTimelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaAuditResultTimelineWithOptions(request, runtime);
}

/**
 * @summary Queries a media fingerprinting result. After a media fingerprinting job is complete, you can call this operation to query the media fingerprinting result.
 *
 * @description Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 *
 * @param request GetMediaDNAResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaDNAResultResponse
 */
GetMediaDNAResultResponse Client::getMediaDNAResultWithOptions(const GetMediaDNAResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMediaDNAResult"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaDNAResultResponse>();
}

/**
 * @summary Queries a media fingerprinting result. After a media fingerprinting job is complete, you can call this operation to query the media fingerprinting result.
 *
 * @description Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 *
 * @param request GetMediaDNAResultRequest
 * @return GetMediaDNAResultResponse
 */
GetMediaDNAResultResponse Client::getMediaDNAResult(const GetMediaDNAResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaDNAResultWithOptions(request, runtime);
}

/**
 * @summary Queries the information about media refresh or prefetch jobs, such as the job status and filtering conditions.
 *
 * @description You can query the information about all media files or a specific media file in a refresh or prefetch job.
 * ### QPS limits
 * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits on API operations in ApsaraVideo VoD](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request GetMediaRefreshJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaRefreshJobsResponse
 */
GetMediaRefreshJobsResponse Client::getMediaRefreshJobsWithOptions(const GetMediaRefreshJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMediaRefreshJobs"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaRefreshJobsResponse>();
}

/**
 * @summary Queries the information about media refresh or prefetch jobs, such as the job status and filtering conditions.
 *
 * @description You can query the information about all media files or a specific media file in a refresh or prefetch job.
 * ### QPS limits
 * You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits on API operations in ApsaraVideo VoD](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request GetMediaRefreshJobsRequest
 * @return GetMediaRefreshJobsResponse
 */
GetMediaRefreshJobsResponse Client::getMediaRefreshJobs(const GetMediaRefreshJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaRefreshJobsWithOptions(request, runtime);
}

/**
 * @summary Queries the callback method, callback URL, and event type for event notifications.
 *
 * @description > For more information, see [Event notification](https://help.aliyun.com/document_detail/55627.html).
 *
 * @param request GetMessageCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMessageCallbackResponse
 */
GetMessageCallbackResponse Client::getMessageCallbackWithOptions(const GetMessageCallbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMessageCallback"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMessageCallbackResponse>();
}

/**
 * @summary Queries the callback method, callback URL, and event type for event notifications.
 *
 * @description > For more information, see [Event notification](https://help.aliyun.com/document_detail/55627.html).
 *
 * @param request GetMessageCallbackRequest
 * @return GetMessageCallbackResponse
 */
GetMessageCallbackResponse Client::getMessageCallback(const GetMessageCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMessageCallbackWithOptions(request, runtime);
}

/**
 * @summary Queries the information about the mezzanine file of an audio or video. The information includes the mezzanine file URL, resolution, and bitrate of the audio or video.
 *
 * @description You can obtain complete information about the source file only after a stream is transcoded.
 *
 * @param request GetMezzanineInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMezzanineInfoResponse
 */
GetMezzanineInfoResponse Client::getMezzanineInfoWithOptions(const GetMezzanineInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdditionType()) {
    query["AdditionType"] = request.additionType();
  }

  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.authTimeout();
  }

  if (!!request.hasOutputType()) {
    query["OutputType"] = request.outputType();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.referenceId();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMezzanineInfo"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMezzanineInfoResponse>();
}

/**
 * @summary Queries the information about the mezzanine file of an audio or video. The information includes the mezzanine file URL, resolution, and bitrate of the audio or video.
 *
 * @description You can obtain complete information about the source file only after a stream is transcoded.
 *
 * @param request GetMezzanineInfoRequest
 * @return GetMezzanineInfoResponse
 */
GetMezzanineInfoResponse Client::getMezzanineInfo(const GetMezzanineInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMezzanineInfoWithOptions(request, runtime);
}

/**
 * @summary Obtains the playback URL by the audio or video ID. Then, you can use ApsaraVideo Player or a third-party player, such as a system player, open source player, orself-developed player, to play the audio or video.
 *
 * @description *   **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. You are charged for outbound traffic when you download or play videos based on URLs in ApsaraVideo VOD. For more information about billing of outbound traffic, see [Billing of outbound traffic](~~188308#section-rwh-e88-f7j~~). If you have configured an accelerated domain name, see [Billing of the acceleration service](~~188308#section-c5t-oq9-15e~~). If you have activated the acceleration service, you are charged acceleration fees when you upload media files to ApsaraVideo VOD. For more information, see [Billing of acceleration traffic](~~188310#section_sta_zm2_tsv~~).**
 * *   Only videos whose Status is Normal can be played. For more information, see [Overview](https://help.aliyun.com/document_detail/57290.html).
 * *   If video playback fails, you can call the [GetMezzanineInfo](~~GetMezzanineInfo~~) operation to check whether the video source information is correct.
 *
 * @param request GetPlayInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPlayInfoResponse
 */
GetPlayInfoResponse Client::getPlayInfoWithOptions(const GetPlayInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdditionType()) {
    query["AdditionType"] = request.additionType();
  }

  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.authTimeout();
  }

  if (!!request.hasDefinition()) {
    query["Definition"] = request.definition();
  }

  if (!!request.hasDigitalWatermarkType()) {
    query["DigitalWatermarkType"] = request.digitalWatermarkType();
  }

  if (!!request.hasFormats()) {
    query["Formats"] = request.formats();
  }

  if (!!request.hasOutputType()) {
    query["OutputType"] = request.outputType();
  }

  if (!!request.hasPlayConfig()) {
    query["PlayConfig"] = request.playConfig();
  }

  if (!!request.hasReAuthInfo()) {
    query["ReAuthInfo"] = request.reAuthInfo();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.referenceId();
  }

  if (!!request.hasResultType()) {
    query["ResultType"] = request.resultType();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.streamType();
  }

  if (!!request.hasTrace()) {
    query["Trace"] = request.trace();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPlayInfo"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPlayInfoResponse>();
}

/**
 * @summary Obtains the playback URL by the audio or video ID. Then, you can use ApsaraVideo Player or a third-party player, such as a system player, open source player, orself-developed player, to play the audio or video.
 *
 * @description *   **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. You are charged for outbound traffic when you download or play videos based on URLs in ApsaraVideo VOD. For more information about billing of outbound traffic, see [Billing of outbound traffic](~~188308#section-rwh-e88-f7j~~). If you have configured an accelerated domain name, see [Billing of the acceleration service](~~188308#section-c5t-oq9-15e~~). If you have activated the acceleration service, you are charged acceleration fees when you upload media files to ApsaraVideo VOD. For more information, see [Billing of acceleration traffic](~~188310#section_sta_zm2_tsv~~).**
 * *   Only videos whose Status is Normal can be played. For more information, see [Overview](https://help.aliyun.com/document_detail/57290.html).
 * *   If video playback fails, you can call the [GetMezzanineInfo](~~GetMezzanineInfo~~) operation to check whether the video source information is correct.
 *
 * @param request GetPlayInfoRequest
 * @return GetPlayInfoResponse
 */
GetPlayInfoResponse Client::getPlayInfo(const GetPlayInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPlayInfoWithOptions(request, runtime);
}

/**
 * @summary Queries transcoding summaries of audio and video files based on the file ID. A transcoding summary includes the status and progress of transcoding.
 *
 * @description *   An audio or video file may be transcoded multiple times. This operation returns only the latest transcoding summary.
 * *   You can query transcoding summaries for a maximum of 10 audio and video files in one request.
 * *   You can call the [ListTranscodeTask](https://help.aliyun.com/document_detail/109120.html) operation to query historical transcoding tasks.
 * *   **You can call this operation to query information only about transcoding tasks created within the past year.
 *
 * @param request GetTranscodeSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTranscodeSummaryResponse
 */
GetTranscodeSummaryResponse Client::getTranscodeSummaryWithOptions(const GetTranscodeSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVideoIds()) {
    query["VideoIds"] = request.videoIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTranscodeSummary"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTranscodeSummaryResponse>();
}

/**
 * @summary Queries transcoding summaries of audio and video files based on the file ID. A transcoding summary includes the status and progress of transcoding.
 *
 * @description *   An audio or video file may be transcoded multiple times. This operation returns only the latest transcoding summary.
 * *   You can query transcoding summaries for a maximum of 10 audio and video files in one request.
 * *   You can call the [ListTranscodeTask](https://help.aliyun.com/document_detail/109120.html) operation to query historical transcoding tasks.
 * *   **You can call this operation to query information only about transcoding tasks created within the past year.
 *
 * @param request GetTranscodeSummaryRequest
 * @return GetTranscodeSummaryResponse
 */
GetTranscodeSummaryResponse Client::getTranscodeSummary(const GetTranscodeSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTranscodeSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries details about transcoding jobs based on the transcoding task ID.
 *
 * @description You can call this operation to query only transcoding tasks created within the past year.
 *
 * @param request GetTranscodeTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTranscodeTaskResponse
 */
GetTranscodeTaskResponse Client::getTranscodeTaskWithOptions(const GetTranscodeTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobIds()) {
    query["JobIds"] = request.jobIds();
  }

  if (!!request.hasTranscodeTaskId()) {
    query["TranscodeTaskId"] = request.transcodeTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTranscodeTask"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTranscodeTaskResponse>();
}

/**
 * @summary Queries details about transcoding jobs based on the transcoding task ID.
 *
 * @description You can call this operation to query only transcoding tasks created within the past year.
 *
 * @param request GetTranscodeTaskRequest
 * @return GetTranscodeTaskResponse
 */
GetTranscodeTaskResponse Client::getTranscodeTask(const GetTranscodeTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTranscodeTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a transcoding template group based on the template group ID.
 *
 * @description This operation returns information about the specified transcoding template group and the configurations of all the transcoding templates in the group.
 *
 * @param request GetTranscodeTemplateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTranscodeTemplateGroupResponse
 */
GetTranscodeTemplateGroupResponse Client::getTranscodeTemplateGroupWithOptions(const GetTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTranscodeTemplateGroupId()) {
    query["TranscodeTemplateGroupId"] = request.transcodeTemplateGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTranscodeTemplateGroup"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTranscodeTemplateGroupResponse>();
}

/**
 * @summary Queries the details of a transcoding template group based on the template group ID.
 *
 * @description This operation returns information about the specified transcoding template group and the configurations of all the transcoding templates in the group.
 *
 * @param request GetTranscodeTemplateGroupRequest
 * @return GetTranscodeTemplateGroupResponse
 */
GetTranscodeTemplateGroupResponse Client::getTranscodeTemplateGroup(const GetTranscodeTemplateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTranscodeTemplateGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the information about URL-based upload jobs.
 *
 * @description You can query the information about a URL-based upload job by specifying the upload URL or using the job ID returned when you upload media files. The information includes the status of the upload job, custom configurations, the time when the job was created, and the time when the job was complete.
 * If the upload fails, you can view the error code and error message. If the upload is successful, you can obtain the video ID.
 *
 * @param request GetURLUploadInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetURLUploadInfosResponse
 */
GetURLUploadInfosResponse Client::getURLUploadInfosWithOptions(const GetURLUploadInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobIds()) {
    query["JobIds"] = request.jobIds();
  }

  if (!!request.hasUploadURLs()) {
    query["UploadURLs"] = request.uploadURLs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetURLUploadInfos"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetURLUploadInfosResponse>();
}

/**
 * @summary Queries the information about URL-based upload jobs.
 *
 * @description You can query the information about a URL-based upload job by specifying the upload URL or using the job ID returned when you upload media files. The information includes the status of the upload job, custom configurations, the time when the job was created, and the time when the job was complete.
 * If the upload fails, you can view the error code and error message. If the upload is successful, you can obtain the video ID.
 *
 * @param request GetURLUploadInfosRequest
 * @return GetURLUploadInfosResponse
 */
GetURLUploadInfosResponse Client::getURLUploadInfos(const GetURLUploadInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getURLUploadInfosWithOptions(request, runtime);
}

/**
 * @summary Queries the upload details, such as the upload time, upload ratio, and upload source, about one or more media files based on the media IDs.
 *
 * @description *   You can call this operation to obtain the upload details only about audio and video files.
 * *   If you use the ApsaraVideo VOD console to upload audio and video files, you can call this operation to query information such as the upload ratio. If you use an upload SDK to upload audio and video files, make sure that the version of the [upload SDK](https://help.aliyun.com/document_detail/52200.html) meets one of the following requirements:
 *     *   The version of the upload SDK for Java is 1.4.4 or later.
 *     *   The version of the upload SDK for C++ is 1.0.0 or later.
 *     *   The version of the upload SDK for PHP is 1.0.2 or later.
 *     *   The version of the upload SDK for Python is 1.3.0 or later.
 *     *   The version of the upload SDK for JavaScript is 1.4.0 or later.
 *     *   The version of the upload SDK for Android is 1.5.0 or later.
 *     *   The version of the upload SDK for iOS is 1.5.0 or later.
 *
 * @param request GetUploadDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUploadDetailsResponse
 */
GetUploadDetailsResponse Client::getUploadDetailsWithOptions(const GetUploadDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.mediaIds();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUploadDetails"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUploadDetailsResponse>();
}

/**
 * @summary Queries the upload details, such as the upload time, upload ratio, and upload source, about one or more media files based on the media IDs.
 *
 * @description *   You can call this operation to obtain the upload details only about audio and video files.
 * *   If you use the ApsaraVideo VOD console to upload audio and video files, you can call this operation to query information such as the upload ratio. If you use an upload SDK to upload audio and video files, make sure that the version of the [upload SDK](https://help.aliyun.com/document_detail/52200.html) meets one of the following requirements:
 *     *   The version of the upload SDK for Java is 1.4.4 or later.
 *     *   The version of the upload SDK for C++ is 1.0.0 or later.
 *     *   The version of the upload SDK for PHP is 1.0.2 or later.
 *     *   The version of the upload SDK for Python is 1.3.0 or later.
 *     *   The version of the upload SDK for JavaScript is 1.4.0 or later.
 *     *   The version of the upload SDK for Android is 1.5.0 or later.
 *     *   The version of the upload SDK for iOS is 1.5.0 or later.
 *
 * @param request GetUploadDetailsRequest
 * @return GetUploadDetailsResponse
 */
GetUploadDetailsResponse Client::getUploadDetails(const GetUploadDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUploadDetailsWithOptions(request, runtime);
}

/**
 * @summary Obtains the title, description, duration, thumbnail URL, status, creation time, size, snapshots, category, and tags of a media file based on the file ID.
 *
 * @description After a media file is uploaded, ApsaraVideo VOD processes the source file. Then, information about the media file is asynchronously generated. You can configure notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event and call this operation to query information about a media file after you receive notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event. For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
 *
 * @param request GetVideoInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoInfoResponse
 */
GetVideoInfoResponse Client::getVideoInfoWithOptions(const GetVideoInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.referenceId();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVideoInfo"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoInfoResponse>();
}

/**
 * @summary Obtains the title, description, duration, thumbnail URL, status, creation time, size, snapshots, category, and tags of a media file based on the file ID.
 *
 * @description After a media file is uploaded, ApsaraVideo VOD processes the source file. Then, information about the media file is asynchronously generated. You can configure notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event and call this operation to query information about a media file after you receive notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event. For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
 *
 * @param request GetVideoInfoRequest
 * @return GetVideoInfoResponse
 */
GetVideoInfoResponse Client::getVideoInfo(const GetVideoInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoInfoWithOptions(request, runtime);
}

/**
 * @summary Queries information such as the title, description, duration, thumbnail URL, status, creation time, size, snapshots, category, and tags about multiple audio or video files based on IDs.
 *
 * @description *   You can specify up to 20 audio or video file IDs in each request.
 * *   After a media file is uploaded, ApsaraVideo VOD processes the source file. Then, information about the media file is asynchronously generated. You can configure notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event and call this operation to query information about a media file after you receive notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event. For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
 *
 * @param request GetVideoInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoInfosResponse
 */
GetVideoInfosResponse Client::getVideoInfosWithOptions(const GetVideoInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReferenceIds()) {
    query["ReferenceIds"] = request.referenceIds();
  }

  if (!!request.hasVideoIds()) {
    query["VideoIds"] = request.videoIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVideoInfos"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoInfosResponse>();
}

/**
 * @summary Queries information such as the title, description, duration, thumbnail URL, status, creation time, size, snapshots, category, and tags about multiple audio or video files based on IDs.
 *
 * @description *   You can specify up to 20 audio or video file IDs in each request.
 * *   After a media file is uploaded, ApsaraVideo VOD processes the source file. Then, information about the media file is asynchronously generated. You can configure notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event and call this operation to query information about a media file after you receive notifications for the [VideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event. For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
 *
 * @param request GetVideoInfosRequest
 * @return GetVideoInfosResponse
 */
GetVideoInfosResponse Client::getVideoInfos(const GetVideoInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoInfosWithOptions(request, runtime);
}

/**
 * @summary Queries information about media files.
 *
 * @description You can call this operation to query information about media files based on the filter conditions that you specify, such as video status and category ID. Information about a maximum of **5,000** media files can be returned for each request. We recommend that you set the StartTime and EndTime parameters to specify a time range for each request. For more information about how to query information about more media files or even all media files, see [SearchMedia](https://help.aliyun.com/document_detail/86044.html).
 *
 * @param request GetVideoListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoListResponse
 */
GetVideoListResponse Client::getVideoListWithOptions(const GetVideoListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCateId()) {
    query["CateId"] = request.cateId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasReferenceIds()) {
    query["ReferenceIds"] = request.referenceIds();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasStorageLocation()) {
    query["StorageLocation"] = request.storageLocation();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVideoList"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoListResponse>();
}

/**
 * @summary Queries information about media files.
 *
 * @description You can call this operation to query information about media files based on the filter conditions that you specify, such as video status and category ID. Information about a maximum of **5,000** media files can be returned for each request. We recommend that you set the StartTime and EndTime parameters to specify a time range for each request. For more information about how to query information about more media files or even all media files, see [SearchMedia](https://help.aliyun.com/document_detail/86044.html).
 *
 * @param request GetVideoListRequest
 * @return GetVideoListResponse
 */
GetVideoListResponse Client::getVideoList(const GetVideoListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoListWithOptions(request, runtime);
}

/**
 * @summary Queries the credential required for media playback. ApsaraVideo Player SDK automatically obtains the playback URL based on the playback credential. Each playback credential can be used to obtain the playback URL only for a specific video in a specific period of time. You cannot obtain the playback URL if the credential expires or is incorrect. You can use PlayAuth-based playback when you require high security for audio and video playback.
 *
 * @description *   You can call this operation to obtain a playback credential when you use ApsaraVideo Player SDK to play a media file based on PlayAuth. The credential is used to obtain the playback URL. For more information, see [ApsaraVideo Player SDK](https://help.aliyun.com/document_detail/125579.html).
 * *   You cannot obtain the playback URL of a video by using a credential that has expired. A new credential is required.
 *
 * @param request GetVideoPlayAuthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoPlayAuthResponse
 */
GetVideoPlayAuthResponse Client::getVideoPlayAuthWithOptions(const GetVideoPlayAuthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiVersion()) {
    query["ApiVersion"] = request.apiVersion();
  }

  if (!!request.hasAuthInfoTimeout()) {
    query["AuthInfoTimeout"] = request.authInfoTimeout();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.referenceId();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVideoPlayAuth"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVideoPlayAuthResponse>();
}

/**
 * @summary Queries the credential required for media playback. ApsaraVideo Player SDK automatically obtains the playback URL based on the playback credential. Each playback credential can be used to obtain the playback URL only for a specific video in a specific period of time. You cannot obtain the playback URL if the credential expires or is incorrect. You can use PlayAuth-based playback when you require high security for audio and video playback.
 *
 * @description *   You can call this operation to obtain a playback credential when you use ApsaraVideo Player SDK to play a media file based on PlayAuth. The credential is used to obtain the playback URL. For more information, see [ApsaraVideo Player SDK](https://help.aliyun.com/document_detail/125579.html).
 * *   You cannot obtain the playback URL of a video by using a credential that has expired. A new credential is required.
 *
 * @param request GetVideoPlayAuthRequest
 * @return GetVideoPlayAuthResponse
 */
GetVideoPlayAuthResponse Client::getVideoPlayAuth(const GetVideoPlayAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoPlayAuthWithOptions(request, runtime);
}

/**
 * @summary Queries a single snapshot template.
 *
 * @param request GetVodTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVodTemplateResponse
 */
GetVodTemplateResponse Client::getVodTemplateWithOptions(const GetVodTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVodTemplateId()) {
    query["VodTemplateId"] = request.vodTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVodTemplate"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVodTemplateResponse>();
}

/**
 * @summary Queries a single snapshot template.
 *
 * @param request GetVodTemplateRequest
 * @return GetVodTemplateResponse
 */
GetVodTemplateResponse Client::getVodTemplate(const GetVodTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVodTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an image or text watermark based on the watermark template ID. You can call this operation to obtain information such as the position, size, and display time of an image watermark or the content, position, font, and font color of a text watermark.
 *
 * @param request GetWatermarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWatermarkResponse
 */
GetWatermarkResponse Client::getWatermarkWithOptions(const GetWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWatermarkId()) {
    query["WatermarkId"] = request.watermarkId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWatermark"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWatermarkResponse>();
}

/**
 * @summary Queries the information about an image or text watermark based on the watermark template ID. You can call this operation to obtain information such as the position, size, and display time of an image watermark or the content, position, font, and font color of a text watermark.
 *
 * @param request GetWatermarkRequest
 * @return GetWatermarkResponse
 */
GetWatermarkResponse Client::getWatermark(const GetWatermarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWatermarkWithOptions(request, runtime);
}

/**
 * @summary Queries the AI processing results about the images of a specified video.
 *
 * @description *   Regions that support this operation: **China (Beijing)** and **China (Shanghai)**.
 * *   You can call this operation to query AI processing results about images of a specified video. Images of different videos cannot be queried in one request.
 *
 * @param request ListAIImageInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAIImageInfoResponse
 */
ListAIImageInfoResponse Client::listAIImageInfoWithOptions(const ListAIImageInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAIImageInfo"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAIImageInfoResponse>();
}

/**
 * @summary Queries the AI processing results about the images of a specified video.
 *
 * @description *   Regions that support this operation: **China (Beijing)** and **China (Shanghai)**.
 * *   You can call this operation to query AI processing results about images of a specified video. Images of different videos cannot be queried in one request.
 *
 * @param request ListAIImageInfoRequest
 * @return ListAIImageInfoResponse
 */
ListAIImageInfoResponse Client::listAIImageInfo(const ListAIImageInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAIImageInfoWithOptions(request, runtime);
}

/**
 * @summary Queries AI jobs. After a job is submitted, ApsaraVideo VOD asynchronously processes the job. You can call this operation to query the job information in real time.
 *
 * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * *   You can call this operation to query video fingerprinting jobs and smart tagging jobs.
 *
 * @param request ListAIJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAIJobResponse
 */
ListAIJobResponse Client::listAIJobWithOptions(const ListAIJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListAIJob"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAIJobResponse>();
}

/**
 * @summary Queries AI jobs. After a job is submitted, ApsaraVideo VOD asynchronously processes the job. You can call this operation to query the job information in real time.
 *
 * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * *   You can call this operation to query video fingerprinting jobs and smart tagging jobs.
 *
 * @param request ListAIJobRequest
 * @return ListAIJobResponse
 */
ListAIJobResponse Client::listAIJob(const ListAIJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAIJobWithOptions(request, runtime);
}

/**
 * @summary Queries AI templates.
 *
 * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * *   You can call this operation to query AI templates of a specified type.
 *
 * @param request ListAITemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAITemplateResponse
 */
ListAITemplateResponse Client::listAITemplateWithOptions(const ListAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAITemplate"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAITemplateResponse>();
}

/**
 * @summary Queries AI templates.
 *
 * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * *   You can call this operation to query AI templates of a specified type.
 *
 * @param request ListAITemplateRequest
 * @return ListAITemplateResponse
 */
ListAITemplateResponse Client::listAITemplate(const ListAITemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAITemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the applications that you are authorized to manage based on query conditions.
 *
 * @description ### [](#)Usage notes
 * You can query applications based on states.
 * ### [](#qps-)QPS limit
 * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits on API operations](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request ListAppInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppInfoResponse
 */
ListAppInfoResponse Client::listAppInfoWithOptions(const ListAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppInfo"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppInfoResponse>();
}

/**
 * @summary Queries the applications that you are authorized to manage based on query conditions.
 *
 * @description ### [](#)Usage notes
 * You can query applications based on states.
 * ### [](#qps-)QPS limit
 * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits on API operations](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request ListAppInfoRequest
 * @return ListAppInfoResponse
 */
ListAppInfoResponse Client::listAppInfo(const ListAppInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the application policies that are attached to the specified identity. The identity may be a RAM user or RAM role.
 *
 * @description > The IdentityType and IdentityName parameters take effect only when an identity assumes the application administrator role to call this operation. Otherwise, only application policies that are attached to the current identity are returned.
 *
 * @param request ListAppPoliciesForIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppPoliciesForIdentityResponse
 */
ListAppPoliciesForIdentityResponse Client::listAppPoliciesForIdentityWithOptions(const ListAppPoliciesForIdentityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasIdentityName()) {
    query["IdentityName"] = request.identityName();
  }

  if (!!request.hasIdentityType()) {
    query["IdentityType"] = request.identityType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAppPoliciesForIdentity"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAppPoliciesForIdentityResponse>();
}

/**
 * @summary Queries the application policies that are attached to the specified identity. The identity may be a RAM user or RAM role.
 *
 * @description > The IdentityType and IdentityName parameters take effect only when an identity assumes the application administrator role to call this operation. Otherwise, only application policies that are attached to the current identity are returned.
 *
 * @param request ListAppPoliciesForIdentityRequest
 * @return ListAppPoliciesForIdentityResponse
 */
ListAppPoliciesForIdentityResponse Client::listAppPoliciesForIdentity(const ListAppPoliciesForIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppPoliciesForIdentityWithOptions(request, runtime);
}

/**
 * @summary Queries the IP addresses in a review security group.
 *
 * @param request ListAuditSecurityIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuditSecurityIpResponse
 */
ListAuditSecurityIpResponse Client::listAuditSecurityIpWithOptions(const ListAuditSecurityIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityGroupName()) {
    query["SecurityGroupName"] = request.securityGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAuditSecurityIp"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuditSecurityIpResponse>();
}

/**
 * @summary Queries the IP addresses in a review security group.
 *
 * @param request ListAuditSecurityIpRequest
 * @return ListAuditSecurityIpResponse
 */
ListAuditSecurityIpResponse Client::listAuditSecurityIp(const ListAuditSecurityIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuditSecurityIpWithOptions(request, runtime);
}

/**
 * @summary Queries the information about animated stickers of a video based on the video ID.
 *
 * @param request ListDynamicImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDynamicImageResponse
 */
ListDynamicImageResponse Client::listDynamicImageWithOptions(const ListDynamicImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDynamicImage"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDynamicImageResponse>();
}

/**
 * @summary Queries the information about animated stickers of a video based on the video ID.
 *
 * @param request ListDynamicImageRequest
 * @return ListDynamicImageResponse
 */
ListDynamicImageResponse Client::listDynamicImage(const ListDynamicImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDynamicImageWithOptions(request, runtime);
}

/**
 * @summary Queries historical tasks based on the media asset ID.
 *
 * @description ****
 * *   You can call the [GetJobDetail](https://apiworkbench.aliyun-inc.com/document/vod/2017-03-21/GetJobDetail?spm=openapi-amp.newDocPublishment.0.0.616a281fSegn0e) operation to query detailed information about the tasks.
 * *   You can call this operation to query only asynchronous tasks of the last six months. The types of tasks that you can query include transcoding tasks, snapshot tasks, and AI tasks.
 * **QPS limits**
 * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request ListJobInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobInfoResponse
 */
ListJobInfoResponse Client::listJobInfoWithOptions(const ListJobInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobType()) {
    query["JobType"] = request.jobType();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListJobInfo"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListJobInfoResponse>();
}

/**
 * @summary Queries historical tasks based on the media asset ID.
 *
 * @description ****
 * *   You can call the [GetJobDetail](https://apiworkbench.aliyun-inc.com/document/vod/2017-03-21/GetJobDetail?spm=openapi-amp.newDocPublishment.0.0.616a281fSegn0e) operation to query detailed information about the tasks.
 * *   You can call this operation to query only asynchronous tasks of the last six months. The types of tasks that you can query include transcoding tasks, snapshot tasks, and AI tasks.
 * **QPS limits**
 * You can call this operation up to 15 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request ListJobInfoRequest
 * @return ListJobInfoResponse
 */
ListJobInfoResponse Client::listJobInfo(const ListJobInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobInfoWithOptions(request, runtime);
}

/**
 * @summary Queries live-to-VOD videos.
 *
 * @description You can query up to 5,000 videos based on the specified filter condition.
 *
 * @param request ListLiveRecordVideoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLiveRecordVideoResponse
 */
ListLiveRecordVideoResponse Client::listLiveRecordVideoWithOptions(const ListLiveRecordVideoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStreamName()) {
    query["StreamName"] = request.streamName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLiveRecordVideo"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLiveRecordVideoResponse>();
}

/**
 * @summary Queries live-to-VOD videos.
 *
 * @description You can query up to 5,000 videos based on the specified filter condition.
 *
 * @param request ListLiveRecordVideoRequest
 * @return ListLiveRecordVideoResponse
 */
ListLiveRecordVideoResponse Client::listLiveRecordVideo(const ListLiveRecordVideoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLiveRecordVideoWithOptions(request, runtime);
}

/**
 * @summary Queries the snapshots that are captured by submitting snapshot jobs or snapshots that are generated by the system when you upload the video.
 *
 * @description If multiple snapshots exist for a video, you can call this operation to query information about the latest snapshot.
 *
 * @param request ListSnapshotsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSnapshotsResponse
 */
ListSnapshotsResponse Client::listSnapshotsWithOptions(const ListSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.authTimeout();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSnapshotType()) {
    query["SnapshotType"] = request.snapshotType();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSnapshots"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSnapshotsResponse>();
}

/**
 * @summary Queries the snapshots that are captured by submitting snapshot jobs or snapshots that are generated by the system when you upload the video.
 *
 * @description If multiple snapshots exist for a video, you can call this operation to query information about the latest snapshot.
 *
 * @param request ListSnapshotsRequest
 * @return ListSnapshotsResponse
 */
ListSnapshotsResponse Client::listSnapshots(const ListSnapshotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSnapshotsWithOptions(request, runtime);
}

/**
 * @summary Queries transcoding tasks based on the media ID. This operation does not return specific job information.
 *
 * @description *   You can call the [GetTranscodeTask](https://help.aliyun.com/document_detail/109121.html) operation to query details about transcoding jobs.
 * *   **You can call this operation to query only transcoding tasks created within the past year.**
 *
 * @param request ListTranscodeTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTranscodeTaskResponse
 */
ListTranscodeTaskResponse Client::listTranscodeTaskWithOptions(const ListTranscodeTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTranscodeTask"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTranscodeTaskResponse>();
}

/**
 * @summary Queries transcoding tasks based on the media ID. This operation does not return specific job information.
 *
 * @description *   You can call the [GetTranscodeTask](https://help.aliyun.com/document_detail/109121.html) operation to query details about transcoding jobs.
 * *   **You can call this operation to query only transcoding tasks created within the past year.**
 *
 * @param request ListTranscodeTaskRequest
 * @return ListTranscodeTaskResponse
 */
ListTranscodeTaskResponse Client::listTranscodeTask(const ListTranscodeTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTranscodeTaskWithOptions(request, runtime);
}

/**
 * @summary Queries transcoding template groups.
 *
 * @description > This operation does not return the configurations of transcoding templates in each transcoding template group. To query the configurations of transcoding templates in a specific transcoding template group, call the [GetTranscodeTemplateGroup](https://help.aliyun.com/document_detail/102670.html) operation.
 *
 * @param request ListTranscodeTemplateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTranscodeTemplateGroupResponse
 */
ListTranscodeTemplateGroupResponse Client::listTranscodeTemplateGroupWithOptions(const ListTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTranscodeTemplateGroup"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTranscodeTemplateGroupResponse>();
}

/**
 * @summary Queries transcoding template groups.
 *
 * @description > This operation does not return the configurations of transcoding templates in each transcoding template group. To query the configurations of transcoding templates in a specific transcoding template group, call the [GetTranscodeTemplateGroup](https://help.aliyun.com/document_detail/102670.html) operation.
 *
 * @param request ListTranscodeTemplateGroupRequest
 * @return ListTranscodeTemplateGroupResponse
 */
ListTranscodeTemplateGroupResponse Client::listTranscodeTemplateGroup(const ListTranscodeTemplateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTranscodeTemplateGroupWithOptions(request, runtime);
}

/**
 * @summary Queries snapshot templates.
 *
 * @param request ListVodTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVodTemplateResponse
 */
ListVodTemplateResponse Client::listVodTemplateWithOptions(const ListVodTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVodTemplate"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVodTemplateResponse>();
}

/**
 * @summary Queries snapshot templates.
 *
 * @param request ListVodTemplateRequest
 * @return ListVodTemplateResponse
 */
ListVodTemplateResponse Client::listVodTemplate(const ListVodTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVodTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the configuration information about all image and text watermark templates in a region. You can call this operation to obtain information such as the position, size, and display time of image watermarks or the content, position, font, and font color of text watermarks.
 *
 * @param request ListWatermarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWatermarkResponse
 */
ListWatermarkResponse Client::listWatermarkWithOptions(const ListWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWatermark"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWatermarkResponse>();
}

/**
 * @summary Queries the configuration information about all image and text watermark templates in a region. You can call this operation to obtain information such as the position, size, and display time of image watermarks or the content, position, font, and font color of text watermarks.
 *
 * @param request ListWatermarkRequest
 * @return ListWatermarkResponse
 */
ListWatermarkResponse Client::listWatermark(const ListWatermarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWatermarkWithOptions(request, runtime);
}

/**
 * @summary Migrates resources between applications. The application administrator can directly migrate resources between applications. Resource Access Management (RAM) users or RAM roles must obtain the write permissions on the source and destination applications before they migrate resources between applications. Multiple resources can be migrated at a time.
 *
 * @param request MoveAppResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveAppResourceResponse
 */
MoveAppResourceResponse Client::moveAppResourceWithOptions(const MoveAppResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTargetAppId()) {
    query["TargetAppId"] = request.targetAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveAppResource"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveAppResourceResponse>();
}

/**
 * @summary Migrates resources between applications. The application administrator can directly migrate resources between applications. Resource Access Management (RAM) users or RAM roles must obtain the write permissions on the source and destination applications before they migrate resources between applications. Multiple resources can be migrated at a time.
 *
 * @param request MoveAppResourceRequest
 * @return MoveAppResourceResponse
 */
MoveAppResourceResponse Client::moveAppResource(const MoveAppResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveAppResourceWithOptions(request, runtime);
}

/**
 * @summary Prefetches resources from an origin server to L2 nodes. Users can directly hit the cache upon their first visits. This way, workloads on the origin server can be reduced.
 *
 * @description > *   This operation is available only in the **China (Shanghai)** region.
 * > *   You can submit a maximum of 500 requests to prefetch resources based on URLs each day by using an Alibaba Cloud account. You cannot prefetch resources based on directories.
 * > *   You can call the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) operation to refresh content and the [PreloadVodObjectCaches](https://help.aliyun.com/document_detail/69211.htmll) operation to prefetch content.
 *
 * @param request PreloadVodObjectCachesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreloadVodObjectCachesResponse
 */
PreloadVodObjectCachesResponse Client::preloadVodObjectCachesWithOptions(const PreloadVodObjectCachesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArea()) {
    query["Area"] = request.area();
  }

  if (!!request.hasL2Preload()) {
    query["L2Preload"] = request.l2Preload();
  }

  if (!!request.hasObjectPath()) {
    query["ObjectPath"] = request.objectPath();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasWithHeader()) {
    query["WithHeader"] = request.withHeader();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PreloadVodObjectCaches"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreloadVodObjectCachesResponse>();
}

/**
 * @summary Prefetches resources from an origin server to L2 nodes. Users can directly hit the cache upon their first visits. This way, workloads on the origin server can be reduced.
 *
 * @description > *   This operation is available only in the **China (Shanghai)** region.
 * > *   You can submit a maximum of 500 requests to prefetch resources based on URLs each day by using an Alibaba Cloud account. You cannot prefetch resources based on directories.
 * > *   You can call the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) operation to refresh content and the [PreloadVodObjectCaches](https://help.aliyun.com/document_detail/69211.htmll) operation to prefetch content.
 *
 * @param request PreloadVodObjectCachesRequest
 * @return PreloadVodObjectCachesResponse
 */
PreloadVodObjectCachesResponse Client::preloadVodObjectCaches(const PreloadVodObjectCachesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return preloadVodObjectCachesWithOptions(request, runtime);
}

/**
 * @summary Produces a video from one or more source files. You can directly specify source files by configuring the Timeline parameter. Alternatively, you can specify source files after you create an online editing project.
 *
 * @description *   **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. You are charged for using the online editing feature. For more information, see [Billing](~~188310#section-pyv-b8h-bo7~~).**
 * *   This operation returns only the submission result of a video production task. When the submission result is returned, video production may still be in progress. After a video production task is submitted, the task is queued in the background for asynchronous processing.
 * *   The source files that are used in the timeline of an online editing project can be materials directly uploaded to the online project or selected from the media asset library. Only media assets that are in the Normal state can be used in the project.
 * *   Videos are produced based on ProjectId and Timeline. The following content describes the parameter configurations:
 *     *   You must specify ProjectId or Timeline. If you leave both parameters empty, the video cannot be produced.
 *     *   If you specify Timeline and leave ProjectId empty, the system automatically creates an online editing project based on Timeline and adds the materials specified in the Timeline to the project to produce videos.
 *     *   If you specify ProjectId and leave Timeline empty, the system automatically uses the latest timeline information of the project to produce videos.
 *     *   If you specify both ProjectId and Timeline, the system automatically uses the timeline information that you specified to produce videos and updates the project timeline and materials. You can also specify other parameters to update the corresponding information about the online editing project.
 * *   You can create up to 100 video tracks, 100 image tracks, and 100 subtitle tracks in a project.
 * *   The total size of material files cannot exceed 1 TB.
 * *   The buckets in which the materials reside and where the exported videos are stored must be in the same region as the region where ApsaraVideo VOD is activated.
 * *   The exported videos must meet the following requirements:
 *     *   The width and height of the video image cannot be less than 128 pixels.
 *     *   The width and height of the video image cannot exceed 4,096 pixels.
 *     *   The width cannot exceed 2,160 pixels.
 * *   After a video is produced, the video is automatically uploaded to ApsaraVideo VOD. Then, the **ProduceMediaComplete** and **FileUploadComplete** event notifications are sent to you. After the produced video is transcoded, the **StreamTranscodeComplete** and **TranscodeComplete** event notifications are sent to you.
 * *   You can add special effects to the video. For more information, see [Special effects](https://help.aliyun.com/document_detail/69082.html).
 *
 * @param request ProduceEditingProjectVideoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ProduceEditingProjectVideoResponse
 */
ProduceEditingProjectVideoResponse Client::produceEditingProjectVideoWithOptions(const ProduceEditingProjectVideoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.coverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasMediaMetadata()) {
    query["MediaMetadata"] = request.mediaMetadata();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProduceConfig()) {
    query["ProduceConfig"] = request.produceConfig();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTimeline()) {
    query["Timeline"] = request.timeline();
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
    {"action" , "ProduceEditingProjectVideo"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ProduceEditingProjectVideoResponse>();
}

/**
 * @summary Produces a video from one or more source files. You can directly specify source files by configuring the Timeline parameter. Alternatively, you can specify source files after you create an online editing project.
 *
 * @description *   **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. You are charged for using the online editing feature. For more information, see [Billing](~~188310#section-pyv-b8h-bo7~~).**
 * *   This operation returns only the submission result of a video production task. When the submission result is returned, video production may still be in progress. After a video production task is submitted, the task is queued in the background for asynchronous processing.
 * *   The source files that are used in the timeline of an online editing project can be materials directly uploaded to the online project or selected from the media asset library. Only media assets that are in the Normal state can be used in the project.
 * *   Videos are produced based on ProjectId and Timeline. The following content describes the parameter configurations:
 *     *   You must specify ProjectId or Timeline. If you leave both parameters empty, the video cannot be produced.
 *     *   If you specify Timeline and leave ProjectId empty, the system automatically creates an online editing project based on Timeline and adds the materials specified in the Timeline to the project to produce videos.
 *     *   If you specify ProjectId and leave Timeline empty, the system automatically uses the latest timeline information of the project to produce videos.
 *     *   If you specify both ProjectId and Timeline, the system automatically uses the timeline information that you specified to produce videos and updates the project timeline and materials. You can also specify other parameters to update the corresponding information about the online editing project.
 * *   You can create up to 100 video tracks, 100 image tracks, and 100 subtitle tracks in a project.
 * *   The total size of material files cannot exceed 1 TB.
 * *   The buckets in which the materials reside and where the exported videos are stored must be in the same region as the region where ApsaraVideo VOD is activated.
 * *   The exported videos must meet the following requirements:
 *     *   The width and height of the video image cannot be less than 128 pixels.
 *     *   The width and height of the video image cannot exceed 4,096 pixels.
 *     *   The width cannot exceed 2,160 pixels.
 * *   After a video is produced, the video is automatically uploaded to ApsaraVideo VOD. Then, the **ProduceMediaComplete** and **FileUploadComplete** event notifications are sent to you. After the produced video is transcoded, the **StreamTranscodeComplete** and **TranscodeComplete** event notifications are sent to you.
 * *   You can add special effects to the video. For more information, see [Special effects](https://help.aliyun.com/document_detail/69082.html).
 *
 * @param request ProduceEditingProjectVideoRequest
 * @return ProduceEditingProjectVideoResponse
 */
ProduceEditingProjectVideoResponse Client::produceEditingProjectVideo(const ProduceEditingProjectVideoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return produceEditingProjectVideoWithOptions(request, runtime);
}

/**
 * @summary Submits media refresh or prefetch tasks based on the media IDs.
 *
 * @description *   ApsaraVideo VOD allows you to purge and prefetch resources. The purge feature forces the point of presence (POP) to clear cached resources and retrieve the latest resources from origin servers. The prefetch feature allows the POP to retrieve frequently accessed resources from origin servers during off-peak hours. This increases the cache hit ratio.
 * *   You can call this operation to submit purge or prefetch tasks based on the media ID. You can also specify the format and resolution of the media streams to purge or prefetch based on your business requirements.
 * *   You can submit a maximum of 20 purge or prefetch tasks at a time.
 *
 * @param request RefreshMediaPlayUrlsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshMediaPlayUrlsResponse
 */
RefreshMediaPlayUrlsResponse Client::refreshMediaPlayUrlsWithOptions(const RefreshMediaPlayUrlsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefinitions()) {
    query["Definitions"] = request.definitions();
  }

  if (!!request.hasFormats()) {
    query["Formats"] = request.formats();
  }

  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.mediaIds();
  }

  if (!!request.hasResultType()) {
    query["ResultType"] = request.resultType();
  }

  if (!!request.hasSliceCount()) {
    query["SliceCount"] = request.sliceCount();
  }

  if (!!request.hasSliceFlag()) {
    query["SliceFlag"] = request.sliceFlag();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.streamType();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshMediaPlayUrls"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshMediaPlayUrlsResponse>();
}

/**
 * @summary Submits media refresh or prefetch tasks based on the media IDs.
 *
 * @description *   ApsaraVideo VOD allows you to purge and prefetch resources. The purge feature forces the point of presence (POP) to clear cached resources and retrieve the latest resources from origin servers. The prefetch feature allows the POP to retrieve frequently accessed resources from origin servers during off-peak hours. This increases the cache hit ratio.
 * *   You can call this operation to submit purge or prefetch tasks based on the media ID. You can also specify the format and resolution of the media streams to purge or prefetch based on your business requirements.
 * *   You can submit a maximum of 20 purge or prefetch tasks at a time.
 *
 * @param request RefreshMediaPlayUrlsRequest
 * @return RefreshMediaPlayUrlsResponse
 */
RefreshMediaPlayUrlsResponse Client::refreshMediaPlayUrls(const RefreshMediaPlayUrlsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshMediaPlayUrlsWithOptions(request, runtime);
}

/**
 * @summary Obtains a new upload credential after a file failed to be uploaded.
 *
 * @description You can also call this operation to overwrite the source file of an audio or video file. After you call this operation, the system obtains the upload URL and uploads a new source file without changing the ID of the audio or video file. If you have configured transcoding or snapshot capture for the upload, the transcoding or snapshot capture job is automatically triggered. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
 *
 * @param request RefreshUploadVideoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshUploadVideoResponse
 */
RefreshUploadVideoResponse Client::refreshUploadVideoWithOptions(const RefreshUploadVideoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.referenceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshUploadVideo"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshUploadVideoResponse>();
}

/**
 * @summary Obtains a new upload credential after a file failed to be uploaded.
 *
 * @description You can also call this operation to overwrite the source file of an audio or video file. After you call this operation, the system obtains the upload URL and uploads a new source file without changing the ID of the audio or video file. If you have configured transcoding or snapshot capture for the upload, the transcoding or snapshot capture job is automatically triggered. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
 *
 * @param request RefreshUploadVideoRequest
 * @return RefreshUploadVideoResponse
 */
RefreshUploadVideoResponse Client::refreshUploadVideo(const RefreshUploadVideoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshUploadVideoWithOptions(request, runtime);
}

/**
 * @summary Refreshes files on Alibaba Cloud CDN nodes. You can refresh multiple files at a time based on URLs.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   You can submit a maximum of 2,000 requests to refresh resources based on URLs and 100 requests to refresh resources based on directories each day by using an Alibaba Cloud account.
 * *   You can call the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) operation to refresh content and the [PreloadVodObjectCaches](https://help.aliyun.com/document_detail/69211.html) operation to prefetch content.
 *
 * @param request RefreshVodObjectCachesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshVodObjectCachesResponse
 */
RefreshVodObjectCachesResponse Client::refreshVodObjectCachesWithOptions(const RefreshVodObjectCachesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.force();
  }

  if (!!request.hasObjectPath()) {
    query["ObjectPath"] = request.objectPath();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.objectType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshVodObjectCaches"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshVodObjectCachesResponse>();
}

/**
 * @summary Refreshes files on Alibaba Cloud CDN nodes. You can refresh multiple files at a time based on URLs.
 *
 * @description *   This operation is available only in the **China (Shanghai)** region.
 * *   You can submit a maximum of 2,000 requests to refresh resources based on URLs and 100 requests to refresh resources based on directories each day by using an Alibaba Cloud account.
 * *   You can call the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) operation to refresh content and the [PreloadVodObjectCaches](https://help.aliyun.com/document_detail/69211.html) operation to prefetch content.
 *
 * @param request RefreshVodObjectCachesRequest
 * @return RefreshVodObjectCachesResponse
 */
RefreshVodObjectCachesResponse Client::refreshVodObjectCaches(const RefreshVodObjectCachesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshVodObjectCachesWithOptions(request, runtime);
}

/**
 * @summary Registers media files. After you add an Object Storage Service (OSS) bucket to ApsaraVideo VOD, you must register the media files in the bucket to generate the required information before you use features such as transcoding and snapshot capture on the media files.
 *
 * @description *   After you add an OSS bucket to ApsaraVideo VOD, you must register media files in the OSS bucket to generate the required information. Then, you can use media IDs for features such as transcoding, snapshot capture, and AI processing.use features such as xxx on media files by specifying their IDs?
 * *   You can register up to 10 media files in an OSS bucket in a request. The media files must be stored in the same bucket.
 * *   If you do not specify a transcoding template group ID when you upload a media file to ApsaraVideo VOD, the media file is automatically transcoded based on the default template group. If you do not specify a transcoding template group ID after you register a media file, the media file is not automatically transcoded. The registered media files are automatically transcoded only if you specify a transcoding template group ID.
 * *   If the media file that you want to register has been registered, this operation returns only the unique media ID that is associated with the media file. No further operation is performed.
 * *   Make sure that the media file that you want to register has a valid suffix. Otherwise, the registration fails.
 *
 * @param request RegisterMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterMediaResponse
 */
RegisterMediaResponse Client::registerMediaWithOptions(const RegisterMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegisterMetadatas()) {
    query["RegisterMetadatas"] = request.registerMetadatas();
  }

  if (!!request.hasTemplateGroupId()) {
    query["TemplateGroupId"] = request.templateGroupId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.workflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterMedia"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterMediaResponse>();
}

/**
 * @summary Registers media files. After you add an Object Storage Service (OSS) bucket to ApsaraVideo VOD, you must register the media files in the bucket to generate the required information before you use features such as transcoding and snapshot capture on the media files.
 *
 * @description *   After you add an OSS bucket to ApsaraVideo VOD, you must register media files in the OSS bucket to generate the required information. Then, you can use media IDs for features such as transcoding, snapshot capture, and AI processing.use features such as xxx on media files by specifying their IDs?
 * *   You can register up to 10 media files in an OSS bucket in a request. The media files must be stored in the same bucket.
 * *   If you do not specify a transcoding template group ID when you upload a media file to ApsaraVideo VOD, the media file is automatically transcoded based on the default template group. If you do not specify a transcoding template group ID after you register a media file, the media file is not automatically transcoded. The registered media files are automatically transcoded only if you specify a transcoding template group ID.
 * *   If the media file that you want to register has been registered, this operation returns only the unique media ID that is associated with the media file. No further operation is performed.
 * *   Make sure that the media file that you want to register has a valid suffix. Otherwise, the registration fails.
 *
 * @param request RegisterMediaRequest
 * @return RegisterMediaResponse
 */
RegisterMediaResponse Client::registerMedia(const RegisterMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerMediaWithOptions(request, runtime);
}

/**
 * @summary Restores media assets.
 *
 * @description You can call this operation to restore only Archive and Cold Archive audio and video files. You can access the audio and video files after the files are restored. You cannot change the storage class of an audio or video file that is being restored. You are charged for the retrieval traffic generated during restoration. After a Cold Archive audio or video file is restored, a Standard replica of the file is generated for access. You are charged for the storage of the replica before the file returns to the frozen state.
 *
 * @param request RestoreMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestoreMediaResponse
 */
RestoreMediaResponse Client::restoreMediaWithOptions(const RestoreMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.mediaIds();
  }

  if (!!request.hasRestoreDays()) {
    query["RestoreDays"] = request.restoreDays();
  }

  if (!!request.hasRestoreTier()) {
    query["RestoreTier"] = request.restoreTier();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.scope();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestoreMedia"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestoreMediaResponse>();
}

/**
 * @summary Restores media assets.
 *
 * @description You can call this operation to restore only Archive and Cold Archive audio and video files. You can access the audio and video files after the files are restored. You cannot change the storage class of an audio or video file that is being restored. You are charged for the retrieval traffic generated during restoration. After a Cold Archive audio or video file is restored, a Standard replica of the file is generated for access. You are charged for the storage of the replica before the file returns to the frozen state.
 *
 * @param request RestoreMediaRequest
 * @return RestoreMediaResponse
 */
RestoreMediaResponse Client::restoreMedia(const RestoreMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restoreMediaWithOptions(request, runtime);
}

/**
 * @summary Queries online editing projects.
 *
 * @param request SearchEditingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchEditingProjectResponse
 */
SearchEditingProjectResponse Client::searchEditingProjectWithOptions(const SearchEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
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

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchEditingProject"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchEditingProjectResponse>();
}

/**
 * @summary Queries online editing projects.
 *
 * @param request SearchEditingProjectRequest
 * @return SearchEditingProjectResponse
 */
SearchEditingProjectResponse Client::searchEditingProject(const SearchEditingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchEditingProjectWithOptions(request, runtime);
}

/**
 * @summary Queries information about videos, audio, images, and auxiliary media assets. You can call this operation and specify the search protocol to query media assets based on the return fields, fields used for exact match, fields used for fuzzy match, fields used for a multi-value query, fields used for a range query, and sort fields.
 *
 * @description The maximum number of data records that you can query varies based on the method used to query the data. You can use the following methods to query data:
 * *   Method 1: Traverse data by page
 *     You can use the PageNo and PageSize parameters to traverse up to 5,000 data records that meet the specified filter condition. PageNo specifies the page number and PageSize specifies the number of data records displayed on a page. If the number of data records that meet the specified filter condition exceeds 5,000, change the filter conditions to narrow down the results. You cannot use this method to traverse all data records. If you want to traverse more data records, use Method 2.
 * *   Method 2: Traverse all data (available only for audio and video files)
 *     You can use this method to traverse up to 2 million data records related to audio and video files. If the number of data records that meet the specified filter condition exceeds 2 million, change the filter conditions to narrow down the results. To traverse data page by page, you must set the PageNo, PageSize, and ScrollToken parameters. The total number of data records from the current page to the target page cannot exceed 100. For example, you set PageSize to 20. The following content describes the traverse logic:
 *     *   When the PageNo parameter is set to 1, you can traverse data records from page 1 to page 5.
 *     *   When the PageNo parameter is set to 2, you can traverse data records from page 2 to page 6.
 * Make sure that you set the appropriate page number and page size, and use a traverse method based on the number of results that meet your filter condition.
 *
 * @param request SearchMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMediaResponse
 */
SearchMediaResponse Client::searchMediaWithOptions(const SearchMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFields()) {
    query["Fields"] = request.fields();
  }

  if (!!request.hasMatch()) {
    query["Match"] = request.match();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasScrollToken()) {
    query["ScrollToken"] = request.scrollToken();
  }

  if (!!request.hasSearchType()) {
    query["SearchType"] = request.searchType();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchMedia"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchMediaResponse>();
}

/**
 * @summary Queries information about videos, audio, images, and auxiliary media assets. You can call this operation and specify the search protocol to query media assets based on the return fields, fields used for exact match, fields used for fuzzy match, fields used for a multi-value query, fields used for a range query, and sort fields.
 *
 * @description The maximum number of data records that you can query varies based on the method used to query the data. You can use the following methods to query data:
 * *   Method 1: Traverse data by page
 *     You can use the PageNo and PageSize parameters to traverse up to 5,000 data records that meet the specified filter condition. PageNo specifies the page number and PageSize specifies the number of data records displayed on a page. If the number of data records that meet the specified filter condition exceeds 5,000, change the filter conditions to narrow down the results. You cannot use this method to traverse all data records. If you want to traverse more data records, use Method 2.
 * *   Method 2: Traverse all data (available only for audio and video files)
 *     You can use this method to traverse up to 2 million data records related to audio and video files. If the number of data records that meet the specified filter condition exceeds 2 million, change the filter conditions to narrow down the results. To traverse data page by page, you must set the PageNo, PageSize, and ScrollToken parameters. The total number of data records from the current page to the target page cannot exceed 100. For example, you set PageSize to 20. The following content describes the traverse logic:
 *     *   When the PageNo parameter is set to 1, you can traverse data records from page 1 to page 5.
 *     *   When the PageNo parameter is set to 2, you can traverse data records from page 2 to page 6.
 * Make sure that you set the appropriate page number and page size, and use a traverse method based on the number of results that meet your filter condition.
 *
 * @param request SearchMediaRequest
 * @return SearchMediaResponse
 */
SearchMediaResponse Client::searchMedia(const SearchMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMediaWithOptions(request, runtime);
}

/**
 * @summary 设置应用播放密钥
 *
 * @param request SetAppPlayKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAppPlayKeyResponse
 */
SetAppPlayKeyResponse Client::setAppPlayKeyWithOptions(const SetAppPlayKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlayKey()) {
    query["PlayKey"] = request.playKey();
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
    {"action" , "SetAppPlayKey"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetAppPlayKeyResponse>();
}

/**
 * @summary 设置应用播放密钥
 *
 * @param request SetAppPlayKeyRequest
 * @return SetAppPlayKeyResponse
 */
SetAppPlayKeyResponse Client::setAppPlayKey(const SetAppPlayKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAppPlayKeyWithOptions(request, runtime);
}

/**
 * @summary Manages the IP addresses in review security groups.
 *
 * @description You can play videos in the Checking or Blocked state only from the IP addresses that are added to review security groups.
 *
 * @param request SetAuditSecurityIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAuditSecurityIpResponse
 */
SetAuditSecurityIpResponse Client::setAuditSecurityIpWithOptions(const SetAuditSecurityIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIps()) {
    query["Ips"] = request.ips();
  }

  if (!!request.hasOperateMode()) {
    query["OperateMode"] = request.operateMode();
  }

  if (!!request.hasSecurityGroupName()) {
    query["SecurityGroupName"] = request.securityGroupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetAuditSecurityIp"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetAuditSecurityIpResponse>();
}

/**
 * @summary Manages the IP addresses in review security groups.
 *
 * @description You can play videos in the Checking or Blocked state only from the IP addresses that are added to review security groups.
 *
 * @param request SetAuditSecurityIpRequest
 * @return SetAuditSecurityIpResponse
 */
SetAuditSecurityIpResponse Client::setAuditSecurityIp(const SetAuditSecurityIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAuditSecurityIpWithOptions(request, runtime);
}

/**
 * @summary Updates the cross-domain policy file crossdomain.xml.
 *
 * @description > After you use the cross-domain policy file to update the resources on the origin server, you must refresh the resources that are cached on Alibaba Cloud CDN nodes. You can use the ApsaraVideo VOD console to refresh resources. For more information, see [Refresh and prefetch](https://help.aliyun.com/document_detail/86098.html). Alternatively, you can call the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) operation to refresh resources.
 *
 * @param request SetCrossdomainContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetCrossdomainContentResponse
 */
SetCrossdomainContentResponse Client::setCrossdomainContentWithOptions(const SetCrossdomainContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.content();
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

  if (!!request.hasResourceRealOwnerId()) {
    query["ResourceRealOwnerId"] = request.resourceRealOwnerId();
  }

  if (!!request.hasStorageLocation()) {
    query["StorageLocation"] = request.storageLocation();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetCrossdomainContent"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetCrossdomainContentResponse>();
}

/**
 * @summary Updates the cross-domain policy file crossdomain.xml.
 *
 * @description > After you use the cross-domain policy file to update the resources on the origin server, you must refresh the resources that are cached on Alibaba Cloud CDN nodes. You can use the ApsaraVideo VOD console to refresh resources. For more information, see [Refresh and prefetch](https://help.aliyun.com/document_detail/86098.html). Alternatively, you can call the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) operation to refresh resources.
 *
 * @param request SetCrossdomainContentRequest
 * @return SetCrossdomainContentResponse
 */
SetCrossdomainContentResponse Client::setCrossdomainContent(const SetCrossdomainContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setCrossdomainContentWithOptions(request, runtime);
}

/**
 * @summary Specifies an AI template as the default template.
 *
 * @description Specifies an AI template as the default template.
 *
 * @param request SetDefaultAITemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDefaultAITemplateResponse
 */
SetDefaultAITemplateResponse Client::setDefaultAITemplateWithOptions(const SetDefaultAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDefaultAITemplate"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDefaultAITemplateResponse>();
}

/**
 * @summary Specifies an AI template as the default template.
 *
 * @description Specifies an AI template as the default template.
 *
 * @param request SetDefaultAITemplateRequest
 * @return SetDefaultAITemplateResponse
 */
SetDefaultAITemplateResponse Client::setDefaultAITemplate(const SetDefaultAITemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDefaultAITemplateWithOptions(request, runtime);
}

/**
 * @summary Specifies a transcoding template group as the default one.
 *
 * @param request SetDefaultTranscodeTemplateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDefaultTranscodeTemplateGroupResponse
 */
SetDefaultTranscodeTemplateGroupResponse Client::setDefaultTranscodeTemplateGroupWithOptions(const SetDefaultTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTranscodeTemplateGroupId()) {
    query["TranscodeTemplateGroupId"] = request.transcodeTemplateGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDefaultTranscodeTemplateGroup"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDefaultTranscodeTemplateGroupResponse>();
}

/**
 * @summary Specifies a transcoding template group as the default one.
 *
 * @param request SetDefaultTranscodeTemplateGroupRequest
 * @return SetDefaultTranscodeTemplateGroupResponse
 */
SetDefaultTranscodeTemplateGroupResponse Client::setDefaultTranscodeTemplateGroup(const SetDefaultTranscodeTemplateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDefaultTranscodeTemplateGroupWithOptions(request, runtime);
}

/**
 * @summary Sets a watermark template as the default one.
 *
 * @param request SetDefaultWatermarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDefaultWatermarkResponse
 */
SetDefaultWatermarkResponse Client::setDefaultWatermarkWithOptions(const SetDefaultWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWatermarkId()) {
    query["WatermarkId"] = request.watermarkId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDefaultWatermark"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDefaultWatermarkResponse>();
}

/**
 * @summary Sets a watermark template as the default one.
 *
 * @param request SetDefaultWatermarkRequest
 * @return SetDefaultWatermarkResponse
 */
SetDefaultWatermarkResponse Client::setDefaultWatermark(const SetDefaultWatermarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDefaultWatermarkWithOptions(request, runtime);
}

/**
 * @summary Specifies the media assets that you want to edit in an online editing project.
 *
 * @param request SetEditingProjectMaterialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetEditingProjectMaterialsResponse
 */
SetEditingProjectMaterialsResponse Client::setEditingProjectMaterialsWithOptions(const SetEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaterialIds()) {
    query["MaterialIds"] = request.materialIds();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
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
    {"action" , "SetEditingProjectMaterials"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetEditingProjectMaterialsResponse>();
}

/**
 * @summary Specifies the media assets that you want to edit in an online editing project.
 *
 * @param request SetEditingProjectMaterialsRequest
 * @return SetEditingProjectMaterialsResponse
 */
SetEditingProjectMaterialsResponse Client::setEditingProjectMaterials(const SetEditingProjectMaterialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setEditingProjectMaterialsWithOptions(request, runtime);
}

/**
 * @summary Sets the callback method, callback URL, and event type of an event notification.
 *
 * @description HTTP callbacks and MNS callbacks are supported. For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
 *
 * @param request SetMessageCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetMessageCallbackResponse
 */
SetMessageCallbackResponse Client::setMessageCallbackWithOptions(const SetMessageCallbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAuthKey()) {
    query["AuthKey"] = request.authKey();
  }

  if (!!request.hasAuthSwitch()) {
    query["AuthSwitch"] = request.authSwitch();
  }

  if (!!request.hasCallbackType()) {
    query["CallbackType"] = request.callbackType();
  }

  if (!!request.hasCallbackURL()) {
    query["CallbackURL"] = request.callbackURL();
  }

  if (!!request.hasEventTypeList()) {
    query["EventTypeList"] = request.eventTypeList();
  }

  if (!!request.hasMnsEndpoint()) {
    query["MnsEndpoint"] = request.mnsEndpoint();
  }

  if (!!request.hasMnsQueueName()) {
    query["MnsQueueName"] = request.mnsQueueName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetMessageCallback"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetMessageCallbackResponse>();
}

/**
 * @summary Sets the callback method, callback URL, and event type of an event notification.
 *
 * @description HTTP callbacks and MNS callbacks are supported. For more information, see [Overview](https://help.aliyun.com/document_detail/55627.html).
 *
 * @param request SetMessageCallbackRequest
 * @return SetMessageCallbackResponse
 */
SetMessageCallbackResponse Client::setMessageCallback(const SetMessageCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setMessageCallbackWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the certificate of a domain name and modifies the certificate information.
 *
 * @description > This operation is available only in the **China (Shanghai)** region.
 *
 * @param request SetVodDomainCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetVodDomainCertificateResponse
 */
SetVodDomainCertificateResponse Client::setVodDomainCertificateWithOptions(const SetVodDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertName()) {
    query["CertName"] = request.certName();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSSLPri()) {
    query["SSLPri"] = request.SSLPri();
  }

  if (!!request.hasSSLProtocol()) {
    query["SSLProtocol"] = request.SSLProtocol();
  }

  if (!!request.hasSSLPub()) {
    query["SSLPub"] = request.SSLPub();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetVodDomainCertificate"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetVodDomainCertificateResponse>();
}

/**
 * @summary Enables or disables the certificate of a domain name and modifies the certificate information.
 *
 * @description > This operation is available only in the **China (Shanghai)** region.
 *
 * @param request SetVodDomainCertificateRequest
 * @return SetVodDomainCertificateResponse
 */
SetVodDomainCertificateResponse Client::setVodDomainCertificate(const SetVodDomainCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setVodDomainCertificateWithOptions(request, runtime);
}

/**
 * @summary Enables or disables the SSL certificate of a domain name and updates the certificate information.
 *
 * @param request SetVodDomainSSLCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetVodDomainSSLCertificateResponse
 */
SetVodDomainSSLCertificateResponse Client::setVodDomainSSLCertificateWithOptions(const SetVodDomainSSLCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertId()) {
    query["CertId"] = request.certId();
  }

  if (!!request.hasCertName()) {
    query["CertName"] = request.certName();
  }

  if (!!request.hasCertRegion()) {
    query["CertRegion"] = request.certRegion();
  }

  if (!!request.hasCertType()) {
    query["CertType"] = request.certType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasEnv()) {
    query["Env"] = request.env();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSSLPri()) {
    query["SSLPri"] = request.SSLPri();
  }

  if (!!request.hasSSLProtocol()) {
    query["SSLProtocol"] = request.SSLProtocol();
  }

  if (!!request.hasSSLPub()) {
    query["SSLPub"] = request.SSLPub();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetVodDomainSSLCertificate"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetVodDomainSSLCertificateResponse>();
}

/**
 * @summary Enables or disables the SSL certificate of a domain name and updates the certificate information.
 *
 * @param request SetVodDomainSSLCertificateRequest
 * @return SetVodDomainSSLCertificateResponse
 */
SetVodDomainSSLCertificateResponse Client::setVodDomainSSLCertificate(const SetVodDomainSSLCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setVodDomainSSLCertificateWithOptions(request, runtime);
}

/**
 * @summary Submits an automated review job for an image. After the job is submitted, the job is processed in an asynchronous manner. The operation may return a response before the job is complete.
 *
 * @description This operation is available only in the Singapore region.
 *
 * @param request SubmitAIImageAuditJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAIImageAuditJobResponse
 */
SubmitAIImageAuditJobResponse Client::submitAIImageAuditJobWithOptions(const SubmitAIImageAuditJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaAuditConfiguration()) {
    query["MediaAuditConfiguration"] = request.mediaAuditConfiguration();
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

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitAIImageAuditJob"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAIImageAuditJobResponse>();
}

/**
 * @summary Submits an automated review job for an image. After the job is submitted, the job is processed in an asynchronous manner. The operation may return a response before the job is complete.
 *
 * @description This operation is available only in the Singapore region.
 *
 * @param request SubmitAIImageAuditJobRequest
 * @return SubmitAIImageAuditJobResponse
 */
SubmitAIImageAuditJobResponse Client::submitAIImageAuditJob(const SubmitAIImageAuditJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAIImageAuditJobWithOptions(request, runtime);
}

/**
 * @summary Submits jobs of image AI processing.
 *
 * @description *   Regions that support this operation: **China (Beijing)** and **China (Shanghai)**.
 * *   After you call this operation, you can call the [GetAIImageJobs](https://help.aliyun.com/document_detail/186923.html) operation to query the job execution result.
 *
 * @param request SubmitAIImageJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAIImageJobResponse
 */
SubmitAIImageJobResponse Client::submitAIImageJobWithOptions(const SubmitAIImageJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAIPipelineId()) {
    query["AIPipelineId"] = request.AIPipelineId();
  }

  if (!!request.hasAITemplateId()) {
    query["AITemplateId"] = request.AITemplateId();
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

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitAIImageJob"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAIImageJobResponse>();
}

/**
 * @summary Submits jobs of image AI processing.
 *
 * @description *   Regions that support this operation: **China (Beijing)** and **China (Shanghai)**.
 * *   After you call this operation, you can call the [GetAIImageJobs](https://help.aliyun.com/document_detail/186923.html) operation to query the job execution result.
 *
 * @param request SubmitAIImageJobRequest
 * @return SubmitAIImageJobResponse
 */
SubmitAIImageJobResponse Client::submitAIImageJob(const SubmitAIImageJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAIImageJobWithOptions(request, runtime);
}

/**
 * @summary Submits a smart tagging or video fingerprinting job.
 *
 * @description *   **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. You are charged for using the smart tagging and video fingerprinting features. For more information, see [Billing of video AI](~~188310#section-g7l-s3o-9ng~~).**
 * *   Regions that support the video fingerprinting feature: **China (Beijing)**, **China (Shanghai)**, and **Singapore**. Regions that support the smart tagging feature: **China (Beijing)** and **China (Shanghai)**.
 * *   You need to enable the video fingerprinting feature or the smart tagging feature before you can call this operation to submit jobs. For more information, see [Overview](https://help.aliyun.com/document_detail/101148.html).
 * *   If this is the first time you use the video fingerprinting feature, you must submit a ticket to apply for using the media fingerprint library for free. Otherwise, the video fingerprinting feature will be affected. For more information about how to submit a ticket, see [Contact us](https://help.aliyun.com/document_detail/464625.html).
 * *   After you submit an AI job, ApsaraVideo VOD asynchronously processes the job. The operation may return a response before the job is complete. You can configure the [Event Notification](https://help.aliyun.com/document_detail/55627.html) feature and set the callback event to **AI Processing Completed**. After you receive the event notification, you can query the execution result of the AI job.
 *
 * @param request SubmitAIJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAIJobResponse
 */
SubmitAIJobResponse Client::submitAIJobWithOptions(const SubmitAIJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.config();
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

  if (!!request.hasTypes()) {
    query["Types"] = request.types();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitAIJob"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAIJobResponse>();
}

/**
 * @summary Submits a smart tagging or video fingerprinting job.
 *
 * @description *   **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. You are charged for using the smart tagging and video fingerprinting features. For more information, see [Billing of video AI](~~188310#section-g7l-s3o-9ng~~).**
 * *   Regions that support the video fingerprinting feature: **China (Beijing)**, **China (Shanghai)**, and **Singapore**. Regions that support the smart tagging feature: **China (Beijing)** and **China (Shanghai)**.
 * *   You need to enable the video fingerprinting feature or the smart tagging feature before you can call this operation to submit jobs. For more information, see [Overview](https://help.aliyun.com/document_detail/101148.html).
 * *   If this is the first time you use the video fingerprinting feature, you must submit a ticket to apply for using the media fingerprint library for free. Otherwise, the video fingerprinting feature will be affected. For more information about how to submit a ticket, see [Contact us](https://help.aliyun.com/document_detail/464625.html).
 * *   After you submit an AI job, ApsaraVideo VOD asynchronously processes the job. The operation may return a response before the job is complete. You can configure the [Event Notification](https://help.aliyun.com/document_detail/55627.html) feature and set the callback event to **AI Processing Completed**. After you receive the event notification, you can query the execution result of the AI job.
 *
 * @param request SubmitAIJobRequest
 * @return SubmitAIJobResponse
 */
SubmitAIJobResponse Client::submitAIJob(const SubmitAIJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAIJobWithOptions(request, runtime);
}

/**
 * @summary Submits an automated review job for a media file. After the job is submitted, ApsaraVideo VOD asynchronously processes the job. Therefore, the operation may return a response before the job is complete.
 *
 * @description *   **Make sure that you understand the billing methods and price of ApsaraVideo VOD before you call this operation. You are charged for using the automated review feature. For more information about billing, submit a ticket or contact your account manager.**
 * *   You can call this operation only in the **China (Shanghai)**, **China (Beijing)**, and **Singapore** regions.
 * *   For more information, see [Automated review](https://help.aliyun.com/document_detail/101148.html).
 * *   After an automated review job is complete, the images generated during the review are stored in the VOD bucket for two weeks free of charge. The images are automatically deleted after two weeks.
 *
 * @param request SubmitAIMediaAuditJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAIMediaAuditJobResponse
 */
SubmitAIMediaAuditJobResponse Client::submitAIMediaAuditJobWithOptions(const SubmitAIMediaAuditJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaAuditConfiguration()) {
    query["MediaAuditConfiguration"] = request.mediaAuditConfiguration();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitAIMediaAuditJob"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAIMediaAuditJobResponse>();
}

/**
 * @summary Submits an automated review job for a media file. After the job is submitted, ApsaraVideo VOD asynchronously processes the job. Therefore, the operation may return a response before the job is complete.
 *
 * @description *   **Make sure that you understand the billing methods and price of ApsaraVideo VOD before you call this operation. You are charged for using the automated review feature. For more information about billing, submit a ticket or contact your account manager.**
 * *   You can call this operation only in the **China (Shanghai)**, **China (Beijing)**, and **Singapore** regions.
 * *   For more information, see [Automated review](https://help.aliyun.com/document_detail/101148.html).
 * *   After an automated review job is complete, the images generated during the review are stored in the VOD bucket for two weeks free of charge. The images are automatically deleted after two weeks.
 *
 * @param request SubmitAIMediaAuditJobRequest
 * @return SubmitAIMediaAuditJobResponse
 */
SubmitAIMediaAuditJobResponse Client::submitAIMediaAuditJob(const SubmitAIMediaAuditJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAIMediaAuditJobWithOptions(request, runtime);
}

/**
 * @summary Submits a digital watermark extraction job. You can call this operation to asynchronously extract a copyright watermark or user-tracing watermark.
 *
 * @description *   **Make sure that you understand the billing methods and price of ApsaraVideo VOD before you call this operation. You are charged for generating and extracting digital watermarks. For more information, see [Billing](~~188310#62b9c940403se~~).**
 * *   This operation is supported only in the **China (Shanghai)** and **China (Beijing)** regions.
 * *   Before you submit a digital watermark extraction job, make sure that the following conditions are met:
 *     *   The video from which you want to extract the watermark is uploaded to the ApsaraVideo VOD.
 *     *   The video from which you want to extract the watermark is longer than 6 minutes.
 *
 * @param request SubmitDigitalWatermarkExtractJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDigitalWatermarkExtractJobResponse
 */
SubmitDigitalWatermarkExtractJobResponse Client::submitDigitalWatermarkExtractJobWithOptions(const SubmitDigitalWatermarkExtractJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtractType()) {
    query["ExtractType"] = request.extractType();
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
    {"action" , "SubmitDigitalWatermarkExtractJob"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitDigitalWatermarkExtractJobResponse>();
}

/**
 * @summary Submits a digital watermark extraction job. You can call this operation to asynchronously extract a copyright watermark or user-tracing watermark.
 *
 * @description *   **Make sure that you understand the billing methods and price of ApsaraVideo VOD before you call this operation. You are charged for generating and extracting digital watermarks. For more information, see [Billing](~~188310#62b9c940403se~~).**
 * *   This operation is supported only in the **China (Shanghai)** and **China (Beijing)** regions.
 * *   Before you submit a digital watermark extraction job, make sure that the following conditions are met:
 *     *   The video from which you want to extract the watermark is uploaded to the ApsaraVideo VOD.
 *     *   The video from which you want to extract the watermark is longer than 6 minutes.
 *
 * @param request SubmitDigitalWatermarkExtractJobRequest
 * @return SubmitDigitalWatermarkExtractJobResponse
 */
SubmitDigitalWatermarkExtractJobResponse Client::submitDigitalWatermarkExtractJob(const SubmitDigitalWatermarkExtractJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDigitalWatermarkExtractJobWithOptions(request, runtime);
}

/**
 * @summary Submits a frame animation job and starts asynchronous processing.
 *
 * @description *   You can capture a part of a video and generate animated images only when the video is in the **Uploaded**, **Transcoding**, **Normal**, **Reviewing**, or **Flagged** state.
 * *   The fees for frame animation are included in your video transcoding bill. You are charged based on the output resolution and the duration. For more information, see [Billing of basic services](https://help.aliyun.com/document_detail/188308.html).
 * ### QPS limits
 * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on API operations](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request SubmitDynamicImageJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDynamicImageJobResponse
 */
SubmitDynamicImageJobResponse Client::submitDynamicImageJobWithOptions(const SubmitDynamicImageJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDynamicImageTemplateId()) {
    query["DynamicImageTemplateId"] = request.dynamicImageTemplateId();
  }

  if (!!request.hasOverrideParams()) {
    query["OverrideParams"] = request.overrideParams();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitDynamicImageJob"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitDynamicImageJobResponse>();
}

/**
 * @summary Submits a frame animation job and starts asynchronous processing.
 *
 * @description *   You can capture a part of a video and generate animated images only when the video is in the **Uploaded**, **Transcoding**, **Normal**, **Reviewing**, or **Flagged** state.
 * *   The fees for frame animation are included in your video transcoding bill. You are charged based on the output resolution and the duration. For more information, see [Billing of basic services](https://help.aliyun.com/document_detail/188308.html).
 * ### QPS limits
 * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limit on API operations](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request SubmitDynamicImageJobRequest
 * @return SubmitDynamicImageJobResponse
 */
SubmitDynamicImageJobResponse Client::submitDynamicImageJob(const SubmitDynamicImageJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDynamicImageJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a video fingerprinting job.
 *
 * @description Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 *
 * @param request SubmitMediaDNADeleteJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitMediaDNADeleteJobResponse
 */
SubmitMediaDNADeleteJobResponse Client::submitMediaDNADeleteJobWithOptions(const SubmitMediaDNADeleteJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitMediaDNADeleteJob"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitMediaDNADeleteJobResponse>();
}

/**
 * @summary Deletes a video fingerprinting job.
 *
 * @description Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 *
 * @param request SubmitMediaDNADeleteJobRequest
 * @return SubmitMediaDNADeleteJobResponse
 */
SubmitMediaDNADeleteJobResponse Client::submitMediaDNADeleteJob(const SubmitMediaDNADeleteJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitMediaDNADeleteJobWithOptions(request, runtime);
}

/**
 * @summary Transcodes a video by using the production studio.
 *
 * @description *   During video preprocessing, videos are transcoded to meet the playback requirements of the production studio. Therefore, **you are charged for video preprocessing**. For more information about billing, see [Billing of production studios](https://help.aliyun.com/document_detail/64531.html).
 * *   You can obtain the preprocessing result in the [TranscodeComplete](https://help.aliyun.com/document_detail/55638.html) event notification. If **Preprocess=true** is returned in the event notification, the video is transcoded.
 *
 * @param request SubmitPreprocessJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitPreprocessJobsResponse
 */
SubmitPreprocessJobsResponse Client::submitPreprocessJobsWithOptions(const SubmitPreprocessJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPreprocessType()) {
    query["PreprocessType"] = request.preprocessType();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitPreprocessJobs"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitPreprocessJobsResponse>();
}

/**
 * @summary Transcodes a video by using the production studio.
 *
 * @description *   During video preprocessing, videos are transcoded to meet the playback requirements of the production studio. Therefore, **you are charged for video preprocessing**. For more information about billing, see [Billing of production studios](https://help.aliyun.com/document_detail/64531.html).
 * *   You can obtain the preprocessing result in the [TranscodeComplete](https://help.aliyun.com/document_detail/55638.html) event notification. If **Preprocess=true** is returned in the event notification, the video is transcoded.
 *
 * @param request SubmitPreprocessJobsRequest
 * @return SubmitPreprocessJobsResponse
 */
SubmitPreprocessJobsResponse Client::submitPreprocessJobs(const SubmitPreprocessJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitPreprocessJobsWithOptions(request, runtime);
}

/**
 * @summary Submits a snapshot job for a video and starts asynchronous snapshot processing.
 *
 * @description *   Only snapshots in the JPG format are generated.
 * *   After a snapshot is captured, the [SnapshotComplete](https://help.aliyun.com/document_detail/57337.html) callback is fired and EventType=SnapshotComplete, SubType=SpecifiedTime is returned.
 * ### [](#qps-)QPS limits
 * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param tmpReq SubmitSnapshotJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSnapshotJobResponse
 */
SubmitSnapshotJobResponse Client::submitSnapshotJobWithOptions(const SubmitSnapshotJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitSnapshotJobShrinkRequest request = SubmitSnapshotJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSpecifiedOffsetTimes()) {
    request.setSpecifiedOffsetTimesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.specifiedOffsetTimes(), "SpecifiedOffsetTimes", "json"));
  }

  json query = {};
  if (!!request.hasCount()) {
    query["Count"] = request.count();
  }

  if (!!request.hasHeight()) {
    query["Height"] = request.height();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.referenceId();
  }

  if (!!request.hasSnapshotTemplateId()) {
    query["SnapshotTemplateId"] = request.snapshotTemplateId();
  }

  if (!!request.hasSpecifiedOffsetTime()) {
    query["SpecifiedOffsetTime"] = request.specifiedOffsetTime();
  }

  if (!!request.hasSpecifiedOffsetTimesShrink()) {
    query["SpecifiedOffsetTimes"] = request.specifiedOffsetTimesShrink();
  }

  if (!!request.hasSpriteSnapshotConfig()) {
    query["SpriteSnapshotConfig"] = request.spriteSnapshotConfig();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  if (!!request.hasWidth()) {
    query["Width"] = request.width();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitSnapshotJob"},
    {"version" , "2017-03-21"},
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
 * @summary Submits a snapshot job for a video and starts asynchronous snapshot processing.
 *
 * @description *   Only snapshots in the JPG format are generated.
 * *   After a snapshot is captured, the [SnapshotComplete](https://help.aliyun.com/document_detail/57337.html) callback is fired and EventType=SnapshotComplete, SubType=SpecifiedTime is returned.
 * ### [](#qps-)QPS limits
 * You can call this operation up to 30 times per second per account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request SubmitSnapshotJobRequest
 * @return SubmitSnapshotJobResponse
 */
SubmitSnapshotJobResponse Client::submitSnapshotJob(const SubmitSnapshotJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSnapshotJobWithOptions(request, runtime);
}

/**
 * @summary Submits a transcoding job to start transcoding in an asynchronous manner.
 *
 * @description ### [](#)Usage notes
 * *   **Make sure that you understand the billing methods and prices of ApsaraVideo VOD before you call this operation. For more information about billing of the transcoding feature, see [Billing of basic services](~~188308#section-ejb-nii-nqa~~).**
 * *   You can transcode a video only in the Uploaded, Normal, or Reviewing state.
 * *   You can obtain the transcoding results from the [StreamTranscodeComplete](https://help.aliyun.com/document_detail/55636.html) or [TranscodeComplete](https://help.aliyun.com/document_detail/55638.html) callback.
 * *   You can call this operation to dynamically override the subtitle URL in an HTTP Live Streaming (HLS) packaging task. If the packaging task does not contain subtitles, we recommend that you specify the ID of the specific packaging template group when you upload the video instead of calling this operation.
 *
 * @param request SubmitTranscodeJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitTranscodeJobsResponse
 */
SubmitTranscodeJobsResponse Client::submitTranscodeJobsWithOptions(const SubmitTranscodeJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncryptConfig()) {
    query["EncryptConfig"] = request.encryptConfig();
  }

  if (!!request.hasOverrideParams()) {
    query["OverrideParams"] = request.overrideParams();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.referenceId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasTemplateGroupId()) {
    query["TemplateGroupId"] = request.templateGroupId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitTranscodeJobs"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitTranscodeJobsResponse>();
}

/**
 * @summary Submits a transcoding job to start transcoding in an asynchronous manner.
 *
 * @description ### [](#)Usage notes
 * *   **Make sure that you understand the billing methods and prices of ApsaraVideo VOD before you call this operation. For more information about billing of the transcoding feature, see [Billing of basic services](~~188308#section-ejb-nii-nqa~~).**
 * *   You can transcode a video only in the Uploaded, Normal, or Reviewing state.
 * *   You can obtain the transcoding results from the [StreamTranscodeComplete](https://help.aliyun.com/document_detail/55636.html) or [TranscodeComplete](https://help.aliyun.com/document_detail/55638.html) callback.
 * *   You can call this operation to dynamically override the subtitle URL in an HTTP Live Streaming (HLS) packaging task. If the packaging task does not contain subtitles, we recommend that you specify the ID of the specific packaging template group when you upload the video instead of calling this operation.
 *
 * @param request SubmitTranscodeJobsRequest
 * @return SubmitTranscodeJobsResponse
 */
SubmitTranscodeJobsResponse Client::submitTranscodeJobs(const SubmitTranscodeJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitTranscodeJobsWithOptions(request, runtime);
}

/**
 * @summary Initiates a workflow to process media files.
 *
 * @description * **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. When you use workflows to process videos, you may be charged for transcoding, encryption, and automated review. For more information, see [Billing overview](https://help.aliyun.com/document_detail/188307.html).**
 * * You can call this operation to initiate a VOD workflow to process media files. For more information, see [Workflows](https://help.aliyun.com/document_detail/115347.html).
 *
 * @param request SubmitWorkflowJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitWorkflowJobResponse
 */
SubmitWorkflowJobResponse Client::submitWorkflowJobWithOptions(const SubmitWorkflowJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.workflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitWorkflowJob"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitWorkflowJobResponse>();
}

/**
 * @summary Initiates a workflow to process media files.
 *
 * @description * **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. When you use workflows to process videos, you may be charged for transcoding, encryption, and automated review. For more information, see [Billing overview](https://help.aliyun.com/document_detail/188307.html).**
 * * You can call this operation to initiate a VOD workflow to process media files. For more information, see [Workflows](https://help.aliyun.com/document_detail/115347.html).
 *
 * @param request SubmitWorkflowJobRequest
 * @return SubmitWorkflowJobResponse
 */
SubmitWorkflowJobResponse Client::submitWorkflowJob(const SubmitWorkflowJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitWorkflowJobWithOptions(request, runtime);
}

/**
 * @summary Modifies an AI template.
 *
 * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * *   After you call the [AddAITemplate](https://help.aliyun.com/document_detail/102930.html) operation to add an AI template, you can call this operation to modify the AI template.
 *
 * @param request UpdateAITemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAITemplateResponse
 */
UpdateAITemplateResponse Client::updateAITemplateWithOptions(const UpdateAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "UpdateAITemplate"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAITemplateResponse>();
}

/**
 * @summary Modifies an AI template.
 *
 * @description *   Regions that support this operation: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * *   After you call the [AddAITemplate](https://help.aliyun.com/document_detail/102930.html) operation to add an AI template, you can call this operation to modify the AI template.
 *
 * @param request UpdateAITemplateRequest
 * @return UpdateAITemplateResponse
 */
UpdateAITemplateResponse Client::updateAITemplate(const UpdateAITemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAITemplateWithOptions(request, runtime);
}

/**
 * @summary Updates the information about an application.
 *
 * @description ## QPS limit
 * A single user can perform a maximum of 30 queries per second (QPS). Throttling is triggered when the number of calls per second exceeds the QPS limit. The throttling may affect your business. Thus, we recommend that you observe the QPS limit on this operation.
 *
 * @param request UpdateAppInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAppInfoResponse
 */
UpdateAppInfoResponse Client::updateAppInfoWithOptions(const UpdateAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAppInfo"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAppInfoResponse>();
}

/**
 * @summary Updates the information about an application.
 *
 * @description ## QPS limit
 * A single user can perform a maximum of 30 queries per second (QPS). Throttling is triggered when the number of calls per second exceeds the QPS limit. The throttling may affect your business. Thus, we recommend that you observe the QPS limit on this operation.
 *
 * @param request UpdateAppInfoRequest
 * @return UpdateAppInfoResponse
 */
UpdateAppInfoResponse Client::updateAppInfo(const UpdateAppInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAppInfoWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about multiple auxiliary media assets such as watermark images, subtitle files, and materials in a batch based on IDs. You can modify information such as the title, description, tags, and category.
 *
 * @description You can modify the information about up to 20 auxiliary media assets at a time.
 *
 * @param request UpdateAttachedMediaInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAttachedMediaInfosResponse
 */
UpdateAttachedMediaInfosResponse Client::updateAttachedMediaInfosWithOptions(const UpdateAttachedMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUpdateContent()) {
    query["UpdateContent"] = request.updateContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAttachedMediaInfos"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAttachedMediaInfosResponse>();
}

/**
 * @summary Modifies the information about multiple auxiliary media assets such as watermark images, subtitle files, and materials in a batch based on IDs. You can modify information such as the title, description, tags, and category.
 *
 * @description You can modify the information about up to 20 auxiliary media assets at a time.
 *
 * @param request UpdateAttachedMediaInfosRequest
 * @return UpdateAttachedMediaInfosResponse
 */
UpdateAttachedMediaInfosResponse Client::updateAttachedMediaInfos(const UpdateAttachedMediaInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAttachedMediaInfosWithOptions(request, runtime);
}

/**
 * @summary Modifies a video category.
 *
 * @description After you create a category, you can call this operation to modify the name of the category. If you have classified specific media resources to this category, the category names that are labeled on the media resources are automatically updated.
 *
 * @param request UpdateCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCategoryResponse
 */
UpdateCategoryResponse Client::updateCategoryWithOptions(const UpdateCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCateId()) {
    query["CateId"] = request.cateId();
  }

  if (!!request.hasCateName()) {
    query["CateName"] = request.cateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCategory"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCategoryResponse>();
}

/**
 * @summary Modifies a video category.
 *
 * @description After you create a category, you can call this operation to modify the name of the category. If you have classified specific media resources to this category, the category names that are labeled on the media resources are automatically updated.
 *
 * @param request UpdateCategoryRequest
 * @return UpdateCategoryResponse
 */
UpdateCategoryResponse Client::updateCategory(const UpdateCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCategoryWithOptions(request, runtime);
}

/**
 * @summary Modifies an online editing project.
 *
 * @param request UpdateEditingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEditingProjectResponse
 */
UpdateEditingProjectResponse Client::updateEditingProjectWithOptions(const UpdateEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.coverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTimeline()) {
    query["Timeline"] = request.timeline();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateEditingProject"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEditingProjectResponse>();
}

/**
 * @summary Modifies an online editing project.
 *
 * @param request UpdateEditingProjectRequest
 * @return UpdateEditingProjectResponse
 */
UpdateEditingProjectResponse Client::updateEditingProject(const UpdateEditingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEditingProjectWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about one or more images at a time.
 *
 * @description *   You can call this operation to modify information such as the title, tags, description, and category about images based on image IDs. You must pass in the parameters that you want to modify. Otherwise, parameter configurations are not overwritten.
 * *   You can modify the information about up to 20 images at a time.
 *
 * @param request UpdateImageInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateImageInfosResponse
 */
UpdateImageInfosResponse Client::updateImageInfosWithOptions(const UpdateImageInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUpdateContent()) {
    query["UpdateContent"] = request.updateContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateImageInfos"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateImageInfosResponse>();
}

/**
 * @summary Modifies the information about one or more images at a time.
 *
 * @description *   You can call this operation to modify information such as the title, tags, description, and category about images based on image IDs. You must pass in the parameters that you want to modify. Otherwise, parameter configurations are not overwritten.
 * *   You can modify the information about up to 20 images at a time.
 *
 * @param request UpdateImageInfosRequest
 * @return UpdateImageInfosResponse
 */
UpdateImageInfosResponse Client::updateImageInfos(const UpdateImageInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateImageInfosWithOptions(request, runtime);
}

/**
 * @summary Modifies the storage classes of media assets.
 *
 * @description *   This operation is an asynchronous operation. You can call this operation to modify the storage classes of media assets. After the storage class is modified, a callback notification is sent.
 * *   If the storage class of the media asset is Archive or Cold Archive and you call this operation to modify the storage class of the media asset, the media asset is automatically restored before the storage class is modified. You do not need to call the RestoreMedia operation to restore the media asset. You must specify the restoration priority for Cold Archive objects. Default configuration: RestoreTier=Standard.
 * *   Media assets whose storage classes are being modified cannot be used or processed.
 * *   Non-Standard objects have minimum storage durations. If an object is stored for less than the minimum storage duration, the storage class of the object cannot be changed. The following content describes the minimum storage durations for objects in different storage classes: IA or IA storage for source files: 30 days, Archive or Archive storage for source files: 60 days, Cold Archive or Cold Archive for source files: 180 days.
 *
 * @param request UpdateMediaStorageClassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaStorageClassResponse
 */
UpdateMediaStorageClassResponse Client::updateMediaStorageClassWithOptions(const UpdateMediaStorageClassRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowUpdateWithoutTimeLimit()) {
    query["AllowUpdateWithoutTimeLimit"] = request.allowUpdateWithoutTimeLimit();
  }

  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.mediaIds();
  }

  if (!!request.hasRestoreTier()) {
    query["RestoreTier"] = request.restoreTier();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.scope();
  }

  if (!!request.hasStorageClass()) {
    query["StorageClass"] = request.storageClass();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMediaStorageClass"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMediaStorageClassResponse>();
}

/**
 * @summary Modifies the storage classes of media assets.
 *
 * @description *   This operation is an asynchronous operation. You can call this operation to modify the storage classes of media assets. After the storage class is modified, a callback notification is sent.
 * *   If the storage class of the media asset is Archive or Cold Archive and you call this operation to modify the storage class of the media asset, the media asset is automatically restored before the storage class is modified. You do not need to call the RestoreMedia operation to restore the media asset. You must specify the restoration priority for Cold Archive objects. Default configuration: RestoreTier=Standard.
 * *   Media assets whose storage classes are being modified cannot be used or processed.
 * *   Non-Standard objects have minimum storage durations. If an object is stored for less than the minimum storage duration, the storage class of the object cannot be changed. The following content describes the minimum storage durations for objects in different storage classes: IA or IA storage for source files: 30 days, Archive or Archive storage for source files: 60 days, Cold Archive or Cold Archive for source files: 180 days.
 *
 * @param request UpdateMediaStorageClassRequest
 * @return UpdateMediaStorageClassResponse
 */
UpdateMediaStorageClassResponse Client::updateMediaStorageClass(const UpdateMediaStorageClassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMediaStorageClassWithOptions(request, runtime);
}

/**
 * @summary Modifies the configurations of a transcoding template group or configurations of transcoding templates in the transcoding template group.
 *
 * @description For security purposes, you cannot add, modify, or delete transcoding templates in a transcoding template group that is locked. You can call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation to query the configurations of a transcoding template group, check whether the transcoding template group is locked by using the response parameter Locked, and unlock the transcoding template group before you perform operations such as add, modify, and delete transcoding templates.
 *
 * @param request UpdateTranscodeTemplateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTranscodeTemplateGroupResponse
 */
UpdateTranscodeTemplateGroupResponse Client::updateTranscodeTemplateGroupWithOptions(const UpdateTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLocked()) {
    query["Locked"] = request.locked();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasTranscodeTemplateGroupId()) {
    query["TranscodeTemplateGroupId"] = request.transcodeTemplateGroupId();
  }

  if (!!request.hasTranscodeTemplateList()) {
    query["TranscodeTemplateList"] = request.transcodeTemplateList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateTranscodeTemplateGroup"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateTranscodeTemplateGroupResponse>();
}

/**
 * @summary Modifies the configurations of a transcoding template group or configurations of transcoding templates in the transcoding template group.
 *
 * @description For security purposes, you cannot add, modify, or delete transcoding templates in a transcoding template group that is locked. You can call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation to query the configurations of a transcoding template group, check whether the transcoding template group is locked by using the response parameter Locked, and unlock the transcoding template group before you perform operations such as add, modify, and delete transcoding templates.
 *
 * @param request UpdateTranscodeTemplateGroupRequest
 * @return UpdateTranscodeTemplateGroupResponse
 */
UpdateTranscodeTemplateGroupResponse Client::updateTranscodeTemplateGroup(const UpdateTranscodeTemplateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTranscodeTemplateGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about an audio or video file.
 *
 * @description ### [](#)
 * You can call this operation to modify information such as the title, tags, and description about audio and video files based on audio or video IDs. You must pass in the parameters that you want to modify. Otherwise, parameter configurations are not overwritten.
 * ### [](#qps-)Queries per second (QPS) limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits on API operations](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request UpdateVideoInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVideoInfoResponse
 */
UpdateVideoInfoResponse Client::updateVideoInfoWithOptions(const UpdateVideoInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.referenceId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.videoId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateVideoInfo"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVideoInfoResponse>();
}

/**
 * @summary Modifies the information about an audio or video file.
 *
 * @description ### [](#)
 * You can call this operation to modify information such as the title, tags, and description about audio and video files based on audio or video IDs. You must pass in the parameters that you want to modify. Otherwise, parameter configurations are not overwritten.
 * ### [](#qps-)Queries per second (QPS) limit
 * You can call this operation up to 100 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation. For more information, see [QPS limits on API operations](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request UpdateVideoInfoRequest
 * @return UpdateVideoInfoResponse
 */
UpdateVideoInfoResponse Client::updateVideoInfo(const UpdateVideoInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVideoInfoWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about multiple videos at a time.
 *
 * @description The specific parameter of a video is updated only when a new value is passed in the parameter.
 *
 * @param request UpdateVideoInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVideoInfosResponse
 */
UpdateVideoInfosResponse Client::updateVideoInfosWithOptions(const UpdateVideoInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUpdateContent()) {
    query["UpdateContent"] = request.updateContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateVideoInfos"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVideoInfosResponse>();
}

/**
 * @summary Modifies the information about multiple videos at a time.
 *
 * @description The specific parameter of a video is updated only when a new value is passed in the parameter.
 *
 * @param request UpdateVideoInfosRequest
 * @return UpdateVideoInfosResponse
 */
UpdateVideoInfosResponse Client::updateVideoInfos(const UpdateVideoInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVideoInfosWithOptions(request, runtime);
}

/**
 * @summary Modifies a specific accelerated domain name.
 *
 * @description UpdateVodDomain
 *
 * @param request UpdateVodDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVodDomainResponse
 */
UpdateVodDomainResponse Client::updateVodDomainWithOptions(const UpdateVodDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.securityToken();
  }

  if (!!request.hasSources()) {
    query["Sources"] = request.sources();
  }

  if (!!request.hasTopLevelDomain()) {
    query["TopLevelDomain"] = request.topLevelDomain();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateVodDomain"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVodDomainResponse>();
}

/**
 * @summary Modifies a specific accelerated domain name.
 *
 * @description UpdateVodDomain
 *
 * @param request UpdateVodDomainRequest
 * @return UpdateVodDomainResponse
 */
UpdateVodDomainResponse Client::updateVodDomain(const UpdateVodDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVodDomainWithOptions(request, runtime);
}

/**
 * @summary Modifies a snapshot template.
 *
 * @param request UpdateVodTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVodTemplateResponse
 */
UpdateVodTemplateResponse Client::updateVodTemplateWithOptions(const UpdateVodTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasTemplateConfig()) {
    query["TemplateConfig"] = request.templateConfig();
  }

  if (!!request.hasVodTemplateId()) {
    query["VodTemplateId"] = request.vodTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateVodTemplate"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVodTemplateResponse>();
}

/**
 * @summary Modifies a snapshot template.
 *
 * @param request UpdateVodTemplateRequest
 * @return UpdateVodTemplateResponse
 */
UpdateVodTemplateResponse Client::updateVodTemplate(const UpdateVodTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVodTemplateWithOptions(request, runtime);
}

/**
 * @summary Modifies the name and configurations of a watermark template after you create a watermark template.
 *
 * @description *   You can modify the name and configurations of the watermark template after you call the [AddWatermark](~~AddWatermark~~) operation to create a watermark template.
 * *   You cannot call this operation to change the image in an image watermark template.
 *
 * @param request UpdateWatermarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWatermarkResponse
 */
UpdateWatermarkResponse Client::updateWatermarkWithOptions(const UpdateWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasWatermarkConfig()) {
    query["WatermarkConfig"] = request.watermarkConfig();
  }

  if (!!request.hasWatermarkId()) {
    query["WatermarkId"] = request.watermarkId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateWatermark"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWatermarkResponse>();
}

/**
 * @summary Modifies the name and configurations of a watermark template after you create a watermark template.
 *
 * @description *   You can modify the name and configurations of the watermark template after you call the [AddWatermark](~~AddWatermark~~) operation to create a watermark template.
 * *   You cannot call this operation to change the image in an image watermark template.
 *
 * @param request UpdateWatermarkRequest
 * @return UpdateWatermarkResponse
 */
UpdateWatermarkResponse Client::updateWatermark(const UpdateWatermarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWatermarkWithOptions(request, runtime);
}

/**
 * @summary Uploads media files based on URLs.
 *
 * @description *   You can call this operation to upload media files that are not stored on a local server or device and must be uploaded based on URLs over the Internet.
 * *   The URL-based upload jobs are asynchronous. After you submit a URL-based upload job by calling this operation, it may take hours, even days to complete. If you require high timeliness, we recommend that you use the upload SDK.
 * *   If you configure callbacks, you can receive an [UploadByURLComplete](https://help.aliyun.com/document_detail/86326.html) event notification after the media file is uploaded. You can query the upload status by calling the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation.
 * *   After you submit an upload job, the job is asynchronously processed on the cloud. All URL-based upload jobs that are submitted in each region are queued. The waiting time for the upload job depends on the number of queued jobs. After the upload job is complete, you can associate the playback URL included in the callback with the media ID.
 * *   You can call this operation only in the **China (Shanghai)** and **Singapore** regions.
 * *   Every time you submit a URL-based upload job, a new media ID is generated in ApsaraVideo VOD.
 *
 * @param request UploadMediaByURLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadMediaByURLResponse
 */
UploadMediaByURLResponse Client::uploadMediaByURLWithOptions(const UploadMediaByURLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasStorageLocation()) {
    query["StorageLocation"] = request.storageLocation();
  }

  if (!!request.hasTemplateGroupId()) {
    query["TemplateGroupId"] = request.templateGroupId();
  }

  if (!!request.hasUploadMetadatas()) {
    query["UploadMetadatas"] = request.uploadMetadatas();
  }

  if (!!request.hasUploadURLs()) {
    query["UploadURLs"] = request.uploadURLs();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.workflowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadMediaByURL"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadMediaByURLResponse>();
}

/**
 * @summary Uploads media files based on URLs.
 *
 * @description *   You can call this operation to upload media files that are not stored on a local server or device and must be uploaded based on URLs over the Internet.
 * *   The URL-based upload jobs are asynchronous. After you submit a URL-based upload job by calling this operation, it may take hours, even days to complete. If you require high timeliness, we recommend that you use the upload SDK.
 * *   If you configure callbacks, you can receive an [UploadByURLComplete](https://help.aliyun.com/document_detail/86326.html) event notification after the media file is uploaded. You can query the upload status by calling the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation.
 * *   After you submit an upload job, the job is asynchronously processed on the cloud. All URL-based upload jobs that are submitted in each region are queued. The waiting time for the upload job depends on the number of queued jobs. After the upload job is complete, you can associate the playback URL included in the callback with the media ID.
 * *   You can call this operation only in the **China (Shanghai)** and **Singapore** regions.
 * *   Every time you submit a URL-based upload job, a new media ID is generated in ApsaraVideo VOD.
 *
 * @param request UploadMediaByURLRequest
 * @return UploadMediaByURLResponse
 */
UploadMediaByURLResponse Client::uploadMediaByURL(const UploadMediaByURLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadMediaByURLWithOptions(request, runtime);
}

/**
 * @summary Uploads transcoded streams to ApsaraVideo VOD from external storage.
 *
 * @description *   **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. You are charged storage fees after you upload media files to ApsaraVideo VOD. For more information, see [Billing of media asset storage](~~188308#section_e97_xrp_mzz~~). If you have activated the acceleration service, you are charged acceleration fees when you upload media files to ApsaraVideo VOD. For more information, see [Billing of acceleration traffic](~~188310#section_sta_zm2_tsv~~).**
 * *   This operation is available only in the **China (Shanghai)** and **Singapore** regions.
 * *   You can call this operation to upload transcoded streams to ApsaraVideo VOD from external storage. The following HDR types of transcoded streams are supported: HDR, HDR 10, HLG, Dolby Vision, HDR Vivid, and SDR+.
 * *   You can call the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation to query the upload status. After the upload is complete, the callback of the [UploadByURLComplete](https://help.aliyun.com/document_detail/376427.html) event is returned.
 *
 * @param request UploadStreamByURLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadStreamByURLResponse
 */
UploadStreamByURLResponse Client::uploadStreamByURLWithOptions(const UploadStreamByURLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefinition()) {
    query["Definition"] = request.definition();
  }

  if (!!request.hasFileExtension()) {
    query["FileExtension"] = request.fileExtension();
  }

  if (!!request.hasHDRType()) {
    query["HDRType"] = request.HDRType();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasStreamURL()) {
    query["StreamURL"] = request.streamURL();
  }

  if (!!request.hasUploadMetadata()) {
    query["UploadMetadata"] = request.uploadMetadata();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadStreamByURL"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadStreamByURLResponse>();
}

/**
 * @summary Uploads transcoded streams to ApsaraVideo VOD from external storage.
 *
 * @description *   **Make sure that you understand the billing method and price of ApsaraVideo VOD before you call this operation. You are charged storage fees after you upload media files to ApsaraVideo VOD. For more information, see [Billing of media asset storage](~~188308#section_e97_xrp_mzz~~). If you have activated the acceleration service, you are charged acceleration fees when you upload media files to ApsaraVideo VOD. For more information, see [Billing of acceleration traffic](~~188310#section_sta_zm2_tsv~~).**
 * *   This operation is available only in the **China (Shanghai)** and **Singapore** regions.
 * *   You can call this operation to upload transcoded streams to ApsaraVideo VOD from external storage. The following HDR types of transcoded streams are supported: HDR, HDR 10, HLG, Dolby Vision, HDR Vivid, and SDR+.
 * *   You can call the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation to query the upload status. After the upload is complete, the callback of the [UploadByURLComplete](https://help.aliyun.com/document_detail/376427.html) event is returned.
 *
 * @param request UploadStreamByURLRequest
 * @return UploadStreamByURLResponse
 */
UploadStreamByURLResponse Client::uploadStreamByURL(const UploadStreamByURLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadStreamByURLWithOptions(request, runtime);
}

/**
 * @summary Verifies the ownership of a specified domain name.
 *
 * @description This operation is available only in the **China (Shanghai)** region.
 *
 * @param request VerifyVodDomainOwnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyVodDomainOwnerResponse
 */
VerifyVodDomainOwnerResponse Client::verifyVodDomainOwnerWithOptions(const VerifyVodDomainOwnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasVerifyType()) {
    query["VerifyType"] = request.verifyType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyVodDomainOwner"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyVodDomainOwnerResponse>();
}

/**
 * @summary Verifies the ownership of a specified domain name.
 *
 * @description This operation is available only in the **China (Shanghai)** region.
 *
 * @param request VerifyVodDomainOwnerRequest
 * @return VerifyVodDomainOwnerResponse
 */
VerifyVodDomainOwnerResponse Client::verifyVodDomainOwner(const VerifyVodDomainOwnerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyVodDomainOwnerWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Vod20170321