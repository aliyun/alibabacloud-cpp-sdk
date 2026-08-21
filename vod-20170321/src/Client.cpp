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
    {"us-east-1" , "vod.aliyuncs.com"},
    {"cn-shenzhen" , "vod.cn-shenzhen.aliyuncs.com"},
    {"cn-beijing" , "vod.cn-beijing.aliyuncs.com"},
    {"cn-shanghai" , "vod.cn-shanghai.aliyuncs.com"},
    {"cn-hongkong" , "vod.cn-hongkong.aliyuncs.com"},
    {"ap-southeast-1" , "vod.ap-southeast-1.aliyuncs.com"},
    {"ap-northeast-1" , "vod.ap-northeast-1.aliyuncs.com"},
    {"ap-southeast-5" , "vod.ap-southeast-5.aliyuncs.com"},
    {"us-west-1" , "vod.us-west-1.aliyuncs.com"},
    {"eu-central-1" , "vod.eu-central-1.aliyuncs.com"},
    {"me-central-1" , "vod.me-central-1.aliyuncs.com"},
    {"cn-north-2-gov-1" , "vod.cn-north-2-gov-1.aliyuncs.com"}
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
 * @summary Adds an AI template used for automated review and smart thumbnail tasks.
 *
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * - Before adding an AI template for automated review or smart thumbnail tasks, make sure that you have activated [automated review](https://ai.aliyun.com/vi/censor) or [smart thumbnail](https://ai.aliyun.com/vi/cover).
 *
 * @param request AddAITemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAITemplateResponse
 */
AddAITemplateResponse Client::addAITemplateWithOptions(const AddAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateConfig()) {
    query["TemplateConfig"] = request.getTemplateConfig();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
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
 * @summary Adds an AI template used for automated review and smart thumbnail tasks.
 *
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * - Before adding an AI template for automated review or smart thumbnail tasks, make sure that you have activated [automated review](https://ai.aliyun.com/vi/censor) or [smart thumbnail](https://ai.aliyun.com/vi/cover).
 *
 * @param request AddAITemplateRequest
 * @return AddAITemplateResponse
 */
AddAITemplateResponse Client::addAITemplate(const AddAITemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAITemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a category to classify audio, video, image, and short video materials stored in ApsaraVideo VOD, making resource discovery and management more efficient.
 *
 * @description - Audio/video/image categories (`Type` set to `default`) support up to three levels, with a maximum of 100 subcategories per level. Short video material categories (`Type` set to `material`) support up to two levels, with a maximum of 100 subcategories per level.
 * - After creating a category, you can assign it to media assets during upload or to already uploaded media assets. For more information, see [Media asset categories](https://help.aliyun.com/document_detail/86070.html).
 *
 * @param request AddCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddCategoryResponse
 */
AddCategoryResponse Client::addCategoryWithOptions(const AddCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCateName()) {
    query["CateName"] = request.getCateName();
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
 * @summary Creates a category to classify audio, video, image, and short video materials stored in ApsaraVideo VOD, making resource discovery and management more efficient.
 *
 * @description - Audio/video/image categories (`Type` set to `default`) support up to three levels, with a maximum of 100 subcategories per level. Short video material categories (`Type` set to `material`) support up to two levels, with a maximum of 100 subcategories per level.
 * - After creating a category, you can assign it to media assets during upload or to already uploaded media assets. For more information, see [Media asset categories](https://help.aliyun.com/document_detail/86070.html).
 *
 * @param request AddCategoryRequest
 * @return AddCategoryResponse
 */
AddCategoryResponse Client::addCategory(const AddCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addCategoryWithOptions(request, runtime);
}

/**
 * @summary Creates an online editing project (video editing task).
 *
 * @description - For more information about online editing, see [Online editing](https://help.aliyun.com/document_detail/95482.html).
 *
 * @param request AddEditingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddEditingProjectResponse
 */
AddEditingProjectResponse Client::addEditingProjectWithOptions(const AddEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.getCoverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasDivision()) {
    query["Division"] = request.getDivision();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTimeline()) {
    query["Timeline"] = request.getTimeline();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
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
 * @summary Creates an online editing project (video editing task).
 *
 * @description - For more information about online editing, see [Online editing](https://help.aliyun.com/document_detail/95482.html).
 *
 * @param request AddEditingProjectRequest
 * @return AddEditingProjectResponse
 */
AddEditingProjectResponse Client::addEditingProject(const AddEditingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addEditingProjectWithOptions(request, runtime);
}

/**
 * @summary Adds one or more materials to an online editing project.
 *
 * @param request AddEditingProjectMaterialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddEditingProjectMaterialsResponse
 */
AddEditingProjectMaterialsResponse Client::addEditingProjectMaterialsWithOptions(const AddEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaterialIds()) {
    query["MaterialIds"] = request.getMaterialIds();
  }

  if (!!request.hasMaterialType()) {
    query["MaterialType"] = request.getMaterialType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Adds one or more materials to an online editing project.
 *
 * @param request AddEditingProjectMaterialsRequest
 * @return AddEditingProjectMaterialsResponse
 */
AddEditingProjectMaterialsResponse Client::addEditingProjectMaterials(const AddEditingProjectMaterialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addEditingProjectMaterialsWithOptions(request, runtime);
}

/**
 * @summary Adds transcoding configurations. You can create a transcoding template group or add transcoding templates to a specified template group.
 *
 * @description - Transcoding template groups that are **locked** by the ApsaraVideo VOD backend do not support custom operations. You can call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation to query the template configuration and check whether the template group is locked based on the Locked response parameter. You can call the [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to unlock the template before you modify it.
 * - Because transcoding involves storage addresses of files, you cannot add a transcoding template group if no storage address is available. You can activate a **VOD system bucket** in the **ApsaraVideo VOD console > Configuration Management > Media Asset Management Configuration > Storage Management** to obtain an available storage address.
 * - You cannot add transcoding template configurations to a **No Transcoding** template group.
 * - You must specify either **TranscodeTemplateGroupId** or **Name**.
 * - You can create a maximum of 20 transcoding template groups.
 * - You can add a maximum of 20 transcoding template configurations to a transcoding template group.
 * - To generate adaptive bitrate streaming addresses through transcoding, you can add a maximum of 10 video packaging templates to a transcoding template group. If more than 10 templates are added, only individual stream addresses are generated instead of adaptive bitrate streaming addresses.
 * ### QPS limit
 * The maximum number of queries per second (QPS) per user for this operation is 5. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Manage your calls appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request AddTranscodeTemplateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTranscodeTemplateGroupResponse
 */
AddTranscodeTemplateGroupResponse Client::addTranscodeTemplateGroupWithOptions(const AddTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTranscodeTemplateGroupId()) {
    query["TranscodeTemplateGroupId"] = request.getTranscodeTemplateGroupId();
  }

  if (!!request.hasTranscodeTemplateList()) {
    query["TranscodeTemplateList"] = request.getTranscodeTemplateList();
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
 * @summary Adds transcoding configurations. You can create a transcoding template group or add transcoding templates to a specified template group.
 *
 * @description - Transcoding template groups that are **locked** by the ApsaraVideo VOD backend do not support custom operations. You can call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation to query the template configuration and check whether the template group is locked based on the Locked response parameter. You can call the [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to unlock the template before you modify it.
 * - Because transcoding involves storage addresses of files, you cannot add a transcoding template group if no storage address is available. You can activate a **VOD system bucket** in the **ApsaraVideo VOD console > Configuration Management > Media Asset Management Configuration > Storage Management** to obtain an available storage address.
 * - You cannot add transcoding template configurations to a **No Transcoding** template group.
 * - You must specify either **TranscodeTemplateGroupId** or **Name**.
 * - You can create a maximum of 20 transcoding template groups.
 * - You can add a maximum of 20 transcoding template configurations to a transcoding template group.
 * - To generate adaptive bitrate streaming addresses through transcoding, you can add a maximum of 10 video packaging templates to a transcoding template group. If more than 10 templates are added, only individual stream addresses are generated instead of adaptive bitrate streaming addresses.
 * ### QPS limit
 * The maximum number of queries per second (QPS) per user for this operation is 5. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Manage your calls appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request AddTranscodeTemplateGroupRequest
 * @return AddTranscodeTemplateGroupResponse
 */
AddTranscodeTemplateGroupResponse Client::addTranscodeTemplateGroup(const AddTranscodeTemplateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTranscodeTemplateGroupWithOptions(request, runtime);
}

/**
 * @summary Adds a domain name for CDN acceleration in ApsaraVideo VOD.
 *
 * @description - Currently, the only supported service address is **China (Shanghai)**.
 * - Before creating an accelerated domain name, you must activate [ApsaraVideo VOD](https://help.aliyun.com/document_detail/51512.html), and the accelerated domain name must have a completed ICP filing. 
 * - Origin content that is not hosted on Alibaba Cloud requires review, which will be completed before the next business day.
 * - You can submit only one accelerated domain name at a time. Each user can add up to 20 domain names.
 *
 * @param request AddVodDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddVodDomainResponse
 */
AddVodDomainResponse Client::addVodDomainWithOptions(const AddVodDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCheckUrl()) {
    query["CheckUrl"] = request.getCheckUrl();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSources()) {
    query["Sources"] = request.getSources();
  }

  if (!!request.hasTopLevelDomain()) {
    query["TopLevelDomain"] = request.getTopLevelDomain();
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
 * @summary Adds a domain name for CDN acceleration in ApsaraVideo VOD.
 *
 * @description - Currently, the only supported service address is **China (Shanghai)**.
 * - Before creating an accelerated domain name, you must activate [ApsaraVideo VOD](https://help.aliyun.com/document_detail/51512.html), and the accelerated domain name must have a completed ICP filing. 
 * - Origin content that is not hosted on Alibaba Cloud requires review, which will be completed before the next business day.
 * - You can submit only one accelerated domain name at a time. Each user can add up to 20 domain names.
 *
 * @param request AddVodDomainRequest
 * @return AddVodDomainResponse
 */
AddVodDomainResponse Client::addVodDomain(const AddVodDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addVodDomainWithOptions(request, runtime);
}

/**
 * @summary Binds a storage bucket to a sub-application of ApsaraVideo VOD.
 *
 * @description Calls AddVodStorageForApp to enable a VOD system bucket for an ApsaraVideo VOD sub-application.
 *  <notice>Each sub-application can have at most one VOD system bucket enabled. If you specify an AppId that does not exist or an AppId that already has a VOD system bucket enabled, an error is returned.</notice>
 * <notice>To call this operation, the caller must have application administrator permissions (VODAppAdministratorAccess). The Alibaba Cloud account has application administrator permissions by default. An application administrator can call AttachAppPolicyToIdentity to grant application permissions to a RAM user or role.</notice>
 *
 * @param request AddVodStorageForAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddVodStorageForAppResponse
 */
AddVodStorageForAppResponse Client::addVodStorageForAppWithOptions(const AddVodStorageForAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasStorageLocation()) {
    query["StorageLocation"] = request.getStorageLocation();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
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
 * @summary Binds a storage bucket to a sub-application of ApsaraVideo VOD.
 *
 * @description Calls AddVodStorageForApp to enable a VOD system bucket for an ApsaraVideo VOD sub-application.
 *  <notice>Each sub-application can have at most one VOD system bucket enabled. If you specify an AppId that does not exist or an AppId that already has a VOD system bucket enabled, an error is returned.</notice>
 * <notice>To call this operation, the caller must have application administrator permissions (VODAppAdministratorAccess). The Alibaba Cloud account has application administrator permissions by default. An application administrator can call AttachAppPolicyToIdentity to grant application permissions to a RAM user or role.</notice>
 *
 * @param request AddVodStorageForAppRequest
 * @return AddVodStorageForAppResponse
 */
AddVodStorageForAppResponse Client::addVodStorageForApp(const AddVodStorageForAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addVodStorageForAppWithOptions(request, runtime);
}

/**
 * @summary Adds a snapshot or animated image template.
 *
 * @description - After adding a template, you can pass the snapshot or animated image template ID through the [SubmitSnapshotJob](~~SubmitSnapshotJob~~) or [SubmitDynamicImageJob](~~SubmitDynamicImageJob~~) operation to initiate a snapshot or animated image job.
 * - You can receive [video snapshot completed](https://help.aliyun.com/document_detail/57337.html) and [video animated image completed](https://help.aliyun.com/document_detail/143490.html) callback messages through HTTP callbacks (compatible with HTTPS) or MNS callbacks. For more information, see [Callback methods](https://help.aliyun.com/document_detail/55627.html).
 *
 * @param request AddVodTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddVodTemplateResponse
 */
AddVodTemplateResponse Client::addVodTemplateWithOptions(const AddVodTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTemplateConfig()) {
    query["TemplateConfig"] = request.getTemplateConfig();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
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
 * @summary Adds a snapshot or animated image template.
 *
 * @description - After adding a template, you can pass the snapshot or animated image template ID through the [SubmitSnapshotJob](~~SubmitSnapshotJob~~) or [SubmitDynamicImageJob](~~SubmitDynamicImageJob~~) operation to initiate a snapshot or animated image job.
 * - You can receive [video snapshot completed](https://help.aliyun.com/document_detail/57337.html) and [video animated image completed](https://help.aliyun.com/document_detail/143490.html) callback messages through HTTP callbacks (compatible with HTTPS) or MNS callbacks. For more information, see [Callback methods](https://help.aliyun.com/document_detail/55627.html).
 *
 * @param request AddVodTemplateRequest
 * @return AddVodTemplateResponse
 */
AddVodTemplateResponse Client::addVodTemplate(const AddVodTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addVodTemplateWithOptions(request, runtime);
}

/**
 * @summary To simplify watermark task processing, ApsaraVideo VOD consolidates complex watermark parameters such as position, size, font, and color into templates, each identified by a unique watermark template ID. Calls this operation to add an image or text watermark template.
 *
 * @description - Call this operation to add an image watermark template (`Image`) or a text watermark template (`Text`). Image watermark templates support the following formats: static images (PNG) and animated images (GIF, APNG, MOV).
 * - After adding a watermark template by calling this operation, call [AddTranscodeTemplateGroup](~~AddTranscodeTemplateGroup~~) or [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) to associate the watermark template with a transcoding template group for subsequent watermark transcoding.
 * - For more information about adding image and text watermarks to videos, see [Video watermarks](https://help.aliyun.com/document_detail/99369.html).
 *
 * @param request AddWatermarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddWatermarkResponse
 */
AddWatermarkResponse Client::addWatermarkWithOptions(const AddWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasFileUrl()) {
    query["FileUrl"] = request.getFileUrl();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasWatermarkConfig()) {
    query["WatermarkConfig"] = request.getWatermarkConfig();
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
 * @summary To simplify watermark task processing, ApsaraVideo VOD consolidates complex watermark parameters such as position, size, font, and color into templates, each identified by a unique watermark template ID. Calls this operation to add an image or text watermark template.
 *
 * @description - Call this operation to add an image watermark template (`Image`) or a text watermark template (`Text`). Image watermark templates support the following formats: static images (PNG) and animated images (GIF, APNG, MOV).
 * - After adding a watermark template by calling this operation, call [AddTranscodeTemplateGroup](~~AddTranscodeTemplateGroup~~) or [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) to associate the watermark template with a transcoding template group for subsequent watermark transcoding.
 * - For more information about adding image and text watermarks to videos, see [Video watermarks](https://help.aliyun.com/document_detail/99369.html).
 *
 * @param request AddWatermarkRequest
 * @return AddWatermarkResponse
 */
AddWatermarkResponse Client::addWatermark(const AddWatermarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addWatermarkWithOptions(request, runtime);
}

/**
 * @summary Invokes this operation to attach access permissions of an ApsaraVideo VOD application to a specified identity (Resource Access Management (RAM) user or RAM role).
 *
 * @description >Notice:  Each Resource Access Management (RAM) user or RAM role can be granted permissions on up to 10 applications.
 * >Notice: You must have application administrator permissions to invoke this operation. For the first invocation, use your Alibaba Cloud account.
 * - If the policy name is VODAppAdministratorAccess, AppId is optional. For other policies, AppId is required.
 *
 * @param request AttachAppPolicyToIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AttachAppPolicyToIdentityResponse
 */
AttachAppPolicyToIdentityResponse Client::attachAppPolicyToIdentityWithOptions(const AttachAppPolicyToIdentityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasIdentityName()) {
    query["IdentityName"] = request.getIdentityName();
  }

  if (!!request.hasIdentityType()) {
    query["IdentityType"] = request.getIdentityType();
  }

  if (!!request.hasPolicyNames()) {
    query["PolicyNames"] = request.getPolicyNames();
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
 * @summary Invokes this operation to attach access permissions of an ApsaraVideo VOD application to a specified identity (Resource Access Management (RAM) user or RAM role).
 *
 * @description >Notice:  Each Resource Access Management (RAM) user or RAM role can be granted permissions on up to 10 applications.
 * >Notice: You must have application administrator permissions to invoke this operation. For the first invocation, use your Alibaba Cloud account.
 * - If the policy name is VODAppAdministratorAccess, AppId is optional. For other policies, AppId is required.
 *
 * @param request AttachAppPolicyToIdentityRequest
 * @return AttachAppPolicyToIdentityResponse
 */
AttachAppPolicyToIdentityResponse Client::attachAppPolicyToIdentity(const AttachAppPolicyToIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return attachAppPolicyToIdentityWithOptions(request, runtime);
}

/**
 * @summary Retrieves the basic information and source file information of multiple media assets in a batch.
 *
 * @description - You can retrieve information about up to 20 audio or video files at a time.
 * - After an audio or video file is uploaded, ApsaraVideo VOD analyzes the uploaded source file. Therefore, media asset information is generated asynchronously. You can configure an [event notification](https://help.aliyun.com/document_detail/55627.html) for the [AudioVideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event. After you receive the [AudioVideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event notification, call this operation to retrieve the audio or video information.
 *
 * @param request BatchGetMediaInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetMediaInfosResponse
 */
BatchGetMediaInfosResponse Client::batchGetMediaInfosWithOptions(const BatchGetMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
  }

  if (!!request.hasReferenceIds()) {
    query["ReferenceIds"] = request.getReferenceIds();
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
 * @summary Retrieves the basic information and source file information of multiple media assets in a batch.
 *
 * @description - You can retrieve information about up to 20 audio or video files at a time.
 * - After an audio or video file is uploaded, ApsaraVideo VOD analyzes the uploaded source file. Therefore, media asset information is generated asynchronously. You can configure an [event notification](https://help.aliyun.com/document_detail/55627.html) for the [AudioVideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event. After you receive the [AudioVideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event notification, call this operation to retrieve the audio or video information.
 *
 * @param request BatchGetMediaInfosRequest
 * @return BatchGetMediaInfosResponse
 */
BatchGetMediaInfosResponse Client::batchGetMediaInfos(const BatchGetMediaInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetMediaInfosWithOptions(request, runtime);
}

/**
 * @summary Configures multiple accelerated domain names in a batch.
 *
 * @description - Currently, the only supported service region is **China (Shanghai)**.
 * - You can configure up to 50 domain names at a time.
 * - After you call this operation to configure certain features for domain names, a unique ConfigId is generated. You can use the ConfigId to update or delete domain name configurations. This operation does not return the ConfigId. To obtain the ConfigId, call the [DescribeVodDomainConfigs](~~DescribeVodDomainConfigs~~) operation.
 *
 * @param request BatchSetVodDomainConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchSetVodDomainConfigsResponse
 */
BatchSetVodDomainConfigsResponse Client::batchSetVodDomainConfigsWithOptions(const BatchSetVodDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.getDomainNames();
  }

  if (!!request.hasFunctions()) {
    query["Functions"] = request.getFunctions();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
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
 * @summary Configures multiple accelerated domain names in a batch.
 *
 * @description - Currently, the only supported service region is **China (Shanghai)**.
 * - You can configure up to 50 domain names at a time.
 * - After you call this operation to configure certain features for domain names, a unique ConfigId is generated. You can use the ConfigId to update or delete domain name configurations. This operation does not return the ConfigId. To obtain the ConfigId, call the [DescribeVodDomainConfigs](~~DescribeVodDomainConfigs~~) operation.
 *
 * @param request BatchSetVodDomainConfigsRequest
 * @return BatchSetVodDomainConfigsResponse
 */
BatchSetVodDomainConfigsResponse Client::batchSetVodDomainConfigs(const BatchSetVodDomainConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchSetVodDomainConfigsWithOptions(request, runtime);
}

/**
 * @summary Enables an accelerated domain name that is in the Disabled state.
 *
 * @description - Currently, the only supported endpoint is **China (Shanghai)**.
 * - If the account associated with the domain name has an overdue payment or the domain name is in an illegal state, you cannot call this operation to enable the ApsaraVideo VOD domain name.
 *
 * @param request BatchStartVodDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchStartVodDomainResponse
 */
BatchStartVodDomainResponse Client::batchStartVodDomainWithOptions(const BatchStartVodDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.getDomainNames();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
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
 * @summary Enables an accelerated domain name that is in the Disabled state.
 *
 * @description - Currently, the only supported endpoint is **China (Shanghai)**.
 * - If the account associated with the domain name has an overdue payment or the domain name is in an illegal state, you cannot call this operation to enable the ApsaraVideo VOD domain name.
 *
 * @param request BatchStartVodDomainRequest
 * @return BatchStartVodDomainResponse
 */
BatchStartVodDomainResponse Client::batchStartVodDomain(const BatchStartVodDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchStartVodDomainWithOptions(request, runtime);
}

/**
 * @summary Pauses domain name acceleration.
 *
 * @description - Currently, the only supported service address is **China (Shanghai)**.
 * - After you pause the accelerated domain name, the domain name information is retained. Requests to the accelerated domain name are automatically redirected to the origin server.
 *
 * @param request BatchStopVodDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchStopVodDomainResponse
 */
BatchStopVodDomainResponse Client::batchStopVodDomainWithOptions(const BatchStopVodDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainNames()) {
    query["DomainNames"] = request.getDomainNames();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
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
 * @summary Pauses domain name acceleration.
 *
 * @description - Currently, the only supported service address is **China (Shanghai)**.
 * - After you pause the accelerated domain name, the domain name information is retained. Requests to the accelerated domain name are automatically redirected to the origin server.
 *
 * @param request BatchStopVodDomainRequest
 * @return BatchStopVodDomainResponse
 */
BatchStopVodDomainResponse Client::batchStopVodDomain(const BatchStopVodDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchStopVodDomainWithOptions(request, runtime);
}

/**
 * @summary Cancels URL upload tasks that are in the queue.
 *
 * @description - You can cancel only URL upload nodes whose status is **Pending**. You can call the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation to query the node status.
 * - Upload nodes that have already started to execute cannot be canceled.
 * - The request parameters JobIds and UploadUrls must have one specified. If both are specified, only JobIds is processed.
 *
 * @param request CancelUrlUploadJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelUrlUploadJobsResponse
 */
CancelUrlUploadJobsResponse Client::cancelUrlUploadJobsWithOptions(const CancelUrlUploadJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobIds()) {
    query["JobIds"] = request.getJobIds();
  }

  if (!!request.hasUploadUrls()) {
    query["UploadUrls"] = request.getUploadUrls();
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
 * @summary Cancels URL upload tasks that are in the queue.
 *
 * @description - You can cancel only URL upload nodes whose status is **Pending**. You can call the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation to query the node status.
 * - Upload nodes that have already started to execute cannot be canceled.
 * - The request parameters JobIds and UploadUrls must have one specified. If both are specified, only JobIds is processed.
 *
 * @param request CancelUrlUploadJobsRequest
 * @return CancelUrlUploadJobsResponse
 */
CancelUrlUploadJobsResponse Client::cancelUrlUploadJobs(const CancelUrlUploadJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelUrlUploadJobsWithOptions(request, runtime);
}

/**
 * @summary Transfers a resource to a different resource group.
 *
 * @description Transfers a resource to another resource group.
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
 * @summary Transfers a resource to a different resource group.
 *
 * @description Transfers a resource to another resource group.
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
 * @description Each account can create up to 10 applications. For more information, see [Multi-application development guide](https://help.aliyun.com/document_detail/113600.html).
 * ### QPS limit
 * The single-user QPS limit for this operation is 50 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request CreateAppInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppInfoResponse
 */
CreateAppInfoResponse Client::createAppInfoWithOptions(const CreateAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @description Each account can create up to 10 applications. For more information, see [Multi-application development guide](https://help.aliyun.com/document_detail/113600.html).
 * ### QPS limit
 * The single-user QPS limit for this operation is 50 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request CreateAppInfoRequest
 * @return CreateAppInfoResponse
 */
CreateAppInfoResponse Client::createAppInfo(const CreateAppInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppInfoWithOptions(request, runtime);
}

/**
 * @summary Submits a manual review request to review media information such as videos and audio files.
 *
 * @param request CreateAuditRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAuditResponse
 */
CreateAuditResponse Client::createAuditWithOptions(const CreateAuditRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuditContent()) {
    query["AuditContent"] = request.getAuditContent();
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
 * @summary Submits a manual review request to review media information such as videos and audio files.
 *
 * @param request CreateAuditRequest
 * @return CreateAuditResponse
 */
CreateAuditResponse Client::createAudit(const CreateAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAuditWithOptions(request, runtime);
}

/**
 * @summary The upload URL and credential are provided by ApsaraVideo VOD to address authorization and security concerns, prevent malicious uploads, and enable automatic creation of a media asset ID (MediaId) for management and processing. For auxiliary media assets such as watermarks and subtitles, invoke this operation to obtain the upload credential and create the corresponding media asset information.
 *
 * @description - **Before using this operation, make sure that you understand the billing methods and pricing of ApsaraVideo VOD. Uploading media files to ApsaraVideo VOD incurs storage fees. For more information, see [Media asset storage billing](~~188308#section_e97_xrp_mzz~~). If you have enabled storage transfer acceleration, uploading media files to ApsaraVideo VOD also incurs upload acceleration fees. For more information, see [Storage transfer acceleration billing](~~188310#section_sta_zm2_tsv~~).**
 * - This operation only obtains the upload URL and credential and creates basic media asset information. It does not upload files. For a complete example of uploading files by using the API, see [Upload media files by using the ApsaraVideo VOD API](https://help.aliyun.com/document_detail/476208.html).
 * - If the upload credential expires (valid for 3000 seconds), call this operation again to obtain a new upload URL and credential.
 * - You can configure callbacks to receive event notifications for [auxiliary media asset upload complete](https://help.aliyun.com/document_detail/103250.html) to determine whether the upload is successful.
 * - Obtaining the upload URL and credential is a core fundamental of ApsaraVideo VOD and a required step for every upload operation. ApsaraVideo VOD provides various upload methods, each with different requirements for obtaining the upload URL and credential. For more information, see the instructions in [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
 *
 * @param request CreateUploadAttachedMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUploadAttachedMediaResponse
 */
CreateUploadAttachedMediaResponse Client::createUploadAttachedMediaWithOptions(const CreateUploadAttachedMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasCateIds()) {
    query["CateIds"] = request.getCateIds();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasFileSize()) {
    query["FileSize"] = request.getFileSize();
  }

  if (!!request.hasMediaExt()) {
    query["MediaExt"] = request.getMediaExt();
  }

  if (!!request.hasStorageLocation()) {
    query["StorageLocation"] = request.getStorageLocation();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary The upload URL and credential are provided by ApsaraVideo VOD to address authorization and security concerns, prevent malicious uploads, and enable automatic creation of a media asset ID (MediaId) for management and processing. For auxiliary media assets such as watermarks and subtitles, invoke this operation to obtain the upload credential and create the corresponding media asset information.
 *
 * @description - **Before using this operation, make sure that you understand the billing methods and pricing of ApsaraVideo VOD. Uploading media files to ApsaraVideo VOD incurs storage fees. For more information, see [Media asset storage billing](~~188308#section_e97_xrp_mzz~~). If you have enabled storage transfer acceleration, uploading media files to ApsaraVideo VOD also incurs upload acceleration fees. For more information, see [Storage transfer acceleration billing](~~188310#section_sta_zm2_tsv~~).**
 * - This operation only obtains the upload URL and credential and creates basic media asset information. It does not upload files. For a complete example of uploading files by using the API, see [Upload media files by using the ApsaraVideo VOD API](https://help.aliyun.com/document_detail/476208.html).
 * - If the upload credential expires (valid for 3000 seconds), call this operation again to obtain a new upload URL and credential.
 * - You can configure callbacks to receive event notifications for [auxiliary media asset upload complete](https://help.aliyun.com/document_detail/103250.html) to determine whether the upload is successful.
 * - Obtaining the upload URL and credential is a core fundamental of ApsaraVideo VOD and a required step for every upload operation. ApsaraVideo VOD provides various upload methods, each with different requirements for obtaining the upload URL and credential. For more information, see the instructions in [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
 *
 * @param request CreateUploadAttachedMediaRequest
 * @return CreateUploadAttachedMediaResponse
 */
CreateUploadAttachedMediaResponse Client::createUploadAttachedMedia(const CreateUploadAttachedMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUploadAttachedMediaWithOptions(request, runtime);
}

/**
 * @summary Retrieves the upload URL and upload credential for uploading an image to ApsaraVideo VOD, and creates image information. ApsaraVideo VOD issues upload URLs and credentials to ensure authorization and security, prevent malicious uploads, and supports automatic creation of an image ID (ImageId) for management. You can invoke this operation to obtain the upload URL and credential and create image information.
 *
 * @description - **Before using this operation, make sure that you understand the billing methods and pricing of ApsaraVideo VOD. Uploading media files to ApsaraVideo VOD incurs storage fees. For more information, see [Media asset storage billing](~~188308#section_e97_xrp_mzz~~). If you have enabled storage and transfer acceleration, uploading media files to ApsaraVideo VOD also incurs upload acceleration fees. For more information, see [Storage and transfer acceleration billing](~~188310#section_sta_zm2_tsv~~).**
 * - This operation only retrieves the upload URL and credential and creates basic media asset information. It does not upload files. For a complete example of uploading files by calling API operations, see [Upload media files by using the ApsaraVideo VOD API](https://help.aliyun.com/document_detail/476208.html).
 * - Refreshing the upload URL and credential is not supported for image uploads. If the image upload credential expires (the default validity period is 3000 seconds), call this operation again to obtain a new upload URL and credential.
 * - You can configure callbacks to receive event notifications for [image upload completion](https://help.aliyun.com/document_detail/91968.html) to determine whether the upload is successful.
 * - Retrieving the upload URL and credential is a core operation of ApsaraVideo VOD and is required for every upload. ApsaraVideo VOD provides multiple upload methods, each with different requirements for retrieving the upload URL and credential. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
 *
 * @param request CreateUploadImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUploadImageResponse
 */
CreateUploadImageResponse Client::createUploadImageWithOptions(const CreateUploadImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasCateId()) {
    query["CateId"] = request.getCateId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasImageExt()) {
    query["ImageExt"] = request.getImageExt();
  }

  if (!!request.hasImageType()) {
    query["ImageType"] = request.getImageType();
  }

  if (!!request.hasOriginalFileName()) {
    query["OriginalFileName"] = request.getOriginalFileName();
  }

  if (!!request.hasStorageLocation()) {
    query["StorageLocation"] = request.getStorageLocation();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Retrieves the upload URL and upload credential for uploading an image to ApsaraVideo VOD, and creates image information. ApsaraVideo VOD issues upload URLs and credentials to ensure authorization and security, prevent malicious uploads, and supports automatic creation of an image ID (ImageId) for management. You can invoke this operation to obtain the upload URL and credential and create image information.
 *
 * @description - **Before using this operation, make sure that you understand the billing methods and pricing of ApsaraVideo VOD. Uploading media files to ApsaraVideo VOD incurs storage fees. For more information, see [Media asset storage billing](~~188308#section_e97_xrp_mzz~~). If you have enabled storage and transfer acceleration, uploading media files to ApsaraVideo VOD also incurs upload acceleration fees. For more information, see [Storage and transfer acceleration billing](~~188310#section_sta_zm2_tsv~~).**
 * - This operation only retrieves the upload URL and credential and creates basic media asset information. It does not upload files. For a complete example of uploading files by calling API operations, see [Upload media files by using the ApsaraVideo VOD API](https://help.aliyun.com/document_detail/476208.html).
 * - Refreshing the upload URL and credential is not supported for image uploads. If the image upload credential expires (the default validity period is 3000 seconds), call this operation again to obtain a new upload URL and credential.
 * - You can configure callbacks to receive event notifications for [image upload completion](https://help.aliyun.com/document_detail/91968.html) to determine whether the upload is successful.
 * - Retrieving the upload URL and credential is a core operation of ApsaraVideo VOD and is required for every upload. ApsaraVideo VOD provides multiple upload methods, each with different requirements for retrieving the upload URL and credential. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
 *
 * @param request CreateUploadImageRequest
 * @return CreateUploadImageResponse
 */
CreateUploadImageResponse Client::createUploadImage(const CreateUploadImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUploadImageWithOptions(request, runtime);
}

/**
 * @summary ApsaraVideo VOD issues the upload URL and upload credential to ensure authorization and security and prevent malicious uploads. During issuance, a media ID (MediaId), also called a video ID (VideoId), undergoes automatic creation for management. Invoke this operation to obtain the upload URL and upload credential, and create audio or video information.
 *
 * @description - **Before you use this operation, make sure that you are familiar with the billing methods and pricing of ApsaraVideo VOD. Uploading media files to ApsaraVideo VOD incurs storage fees. For more information, see [Media asset storage billing](~~188308#section_e97_xrp_mzz~~). If you have enabled storage and transfer acceleration, uploading media files to ApsaraVideo VOD also incurs upload acceleration fees. For more information, see [Storage and transfer acceleration billing](~~188310#section_sta_zm2_tsv~~). Storage fees are calculated from the time when the file is uploaded. Acceleration fees are calculated when you perform upload operations after the feature is enabled. Simply calling this operation does not incur fees.**
 * - Obtaining the upload URL and credential is the core foundation of ApsaraVideo VOD and is a required step for every upload operation. ApsaraVideo VOD provides multiple upload methods, each with different requirements for obtaining the upload URL and credential. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
 * - This operation is used only to obtain the upload URL and credential and create basic media asset information. It does not upload files. For a complete example of uploading files by using API operations, see [Upload media files by using the ApsaraVideo VOD API](https://help.aliyun.com/document_detail/476208.html).
 * - This operation supports obtaining the upload URL and credential for both video and audio files. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
 * - If the upload credential expires (the default validity period is 3000 seconds), call the [RefreshUploadVideo](~~RefreshUploadVideo~~) operation to obtain a new upload credential.
 * - After the upload is complete, you can configure callbacks to receive [upload event notifications](https://help.aliyun.com/document_detail/55396.html) or call the [GetMezzanineInfo](https://help.aliyun.com/document_detail/59624.html) operation to check the file status and determine whether the upload is successful.
 * - The VideoId parameter returned by this operation can be used for media asset lifecycle management or media processing.
 *
 * @param request CreateUploadVideoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUploadVideoResponse
 */
CreateUploadVideoResponse Client::createUploadVideoWithOptions(const CreateUploadVideoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasCateId()) {
    query["CateId"] = request.getCateId();
  }

  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.getCoverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEnableFirstFrameCover()) {
    query["EnableFirstFrameCover"] = request.getEnableFirstFrameCover();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasFileSize()) {
    query["FileSize"] = request.getFileSize();
  }

  if (!!request.hasGenerateThumbnail()) {
    query["GenerateThumbnail"] = request.getGenerateThumbnail();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.getReferenceId();
  }

  if (!!request.hasStorageLocation()) {
    query["StorageLocation"] = request.getStorageLocation();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasTemplateGroupId()) {
    query["TemplateGroupId"] = request.getTemplateGroupId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.getWorkflowId();
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
 * @summary ApsaraVideo VOD issues the upload URL and upload credential to ensure authorization and security and prevent malicious uploads. During issuance, a media ID (MediaId), also called a video ID (VideoId), undergoes automatic creation for management. Invoke this operation to obtain the upload URL and upload credential, and create audio or video information.
 *
 * @description - **Before you use this operation, make sure that you are familiar with the billing methods and pricing of ApsaraVideo VOD. Uploading media files to ApsaraVideo VOD incurs storage fees. For more information, see [Media asset storage billing](~~188308#section_e97_xrp_mzz~~). If you have enabled storage and transfer acceleration, uploading media files to ApsaraVideo VOD also incurs upload acceleration fees. For more information, see [Storage and transfer acceleration billing](~~188310#section_sta_zm2_tsv~~). Storage fees are calculated from the time when the file is uploaded. Acceleration fees are calculated when you perform upload operations after the feature is enabled. Simply calling this operation does not incur fees.**
 * - Obtaining the upload URL and credential is the core foundation of ApsaraVideo VOD and is a required step for every upload operation. ApsaraVideo VOD provides multiple upload methods, each with different requirements for obtaining the upload URL and credential. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
 * - This operation is used only to obtain the upload URL and credential and create basic media asset information. It does not upload files. For a complete example of uploading files by using API operations, see [Upload media files by using the ApsaraVideo VOD API](https://help.aliyun.com/document_detail/476208.html).
 * - This operation supports obtaining the upload URL and credential for both video and audio files. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
 * - If the upload credential expires (the default validity period is 3000 seconds), call the [RefreshUploadVideo](~~RefreshUploadVideo~~) operation to obtain a new upload credential.
 * - After the upload is complete, you can configure callbacks to receive [upload event notifications](https://help.aliyun.com/document_detail/55396.html) or call the [GetMezzanineInfo](https://help.aliyun.com/document_detail/59624.html) operation to check the file status and determine whether the upload is successful.
 * - The VideoId parameter returned by this operation can be used for media asset lifecycle management or media processing.
 *
 * @param request CreateUploadVideoRequest
 * @return CreateUploadVideoResponse
 */
CreateUploadVideoResponse Client::createUploadVideo(const CreateUploadVideoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUploadVideoWithOptions(request, runtime);
}

/**
 * @summary Invokes this operation to perform decryption on the CiphertextBlob in a KMS data key (DK).
 *
 * @param request DecryptKMSDataKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DecryptKMSDataKeyResponse
 */
DecryptKMSDataKeyResponse Client::decryptKMSDataKeyWithOptions(const DecryptKMSDataKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCipherText()) {
    query["CipherText"] = request.getCipherText();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Invokes this operation to perform decryption on the CiphertextBlob in a KMS data key (DK).
 *
 * @param request DecryptKMSDataKeyRequest
 * @return DecryptKMSDataKeyResponse
 */
DecryptKMSDataKeyResponse Client::decryptKMSDataKey(const DecryptKMSDataKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return decryptKMSDataKeyWithOptions(request, runtime);
}

/**
 * @summary Deletes AI image information.
 *
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)** and **China (Shanghai)**.
 * - **This operation only deletes AI image information and does not actually delete image files**.
 * - A maximum of 10 IDs can be deleted at a time.
 *
 * @param request DeleteAIImageInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAIImageInfosResponse
 */
DeleteAIImageInfosResponse Client::deleteAIImageInfosWithOptions(const DeleteAIImageInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAIImageInfoIds()) {
    query["AIImageInfoIds"] = request.getAIImageInfoIds();
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
 * @summary Deletes AI image information.
 *
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)** and **China (Shanghai)**.
 * - **This operation only deletes AI image information and does not actually delete image files**.
 * - A maximum of 10 IDs can be deleted at a time.
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
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * - An AI template that is set as the default template cannot be deleted.
 *
 * @param request DeleteAITemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAITemplateResponse
 */
DeleteAITemplateResponse Client::deleteAITemplateWithOptions(const DeleteAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * - An AI template that is set as the default template cannot be deleted.
 *
 * @param request DeleteAITemplateRequest
 * @return DeleteAITemplateResponse
 */
DeleteAITemplateResponse Client::deleteAITemplate(const DeleteAITemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAITemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes application information.
 *
 * @description An application cannot be deleted if it contains resources.
 * ### QPS limit
 * The single-user QPS limit for this API is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this API appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request DeleteAppInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppInfoResponse
 */
DeleteAppInfoResponse Client::deleteAppInfoWithOptions(const DeleteAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
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
 * @summary Deletes application information.
 *
 * @description An application cannot be deleted if it contains resources.
 * ### QPS limit
 * The single-user QPS limit for this API is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this API appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request DeleteAppInfoRequest
 * @return DeleteAppInfoResponse
 */
DeleteAppInfoResponse Client::deleteAppInfo(const DeleteAppInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppInfoWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more auxiliary media assets that have been uploaded to ApsaraVideo VOD, such as watermark images, subtitle files, and materials.
 *
 * @description - **This operation physically deletes auxiliary media assets. Once deleted, they cannot be recovered. Proceed with caution.**
 * - You can delete up to 20 auxiliary media assets at a time.
 *
 * @param request DeleteAttachedMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAttachedMediaResponse
 */
DeleteAttachedMediaResponse Client::deleteAttachedMediaWithOptions(const DeleteAttachedMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
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
 * @summary Deletes one or more auxiliary media assets that have been uploaded to ApsaraVideo VOD, such as watermark images, subtitle files, and materials.
 *
 * @description - **This operation physically deletes auxiliary media assets. Once deleted, they cannot be recovered. Proceed with caution.**
 * - You can delete up to 20 auxiliary media assets at a time.
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
 * @description - **This operation deletes a category and all its subcategories (including second-level and third-level categories). Proceed with caution.**
 * - If a category has been assigned to media assets, deleting the category also removes the category assignment from those media assets.
 *
 * @param request DeleteCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCategoryResponse
 */
DeleteCategoryResponse Client::deleteCategoryWithOptions(const DeleteCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCateId()) {
    query["CateId"] = request.getCateId();
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
 * @description - **This operation deletes a category and all its subcategories (including second-level and third-level categories). Proceed with caution.**
 * - If a category has been assigned to media assets, deleting the category also removes the category assignment from those media assets.
 *
 * @param request DeleteCategoryRequest
 * @return DeleteCategoryResponse
 */
DeleteCategoryResponse Client::deleteCategory(const DeleteCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCategoryWithOptions(request, runtime);
}

/**
 * @summary Deletes animated sticker information.
 *
 * @description - This operation only deletes the association between animated stickers and videos. It does not delete the actual animated sticker files.
 * - After the association is deleted, the deleted animated sticker information can no longer be queried by calling the [ListDynamicImage](https://help.aliyun.com/document_detail/180958.html) operation.
 * - If you do not specify **DynamicImageIds**, all animated stickers associated with the specified VideoId are deleted. However, if the video has more than 10 animated stickers, the deletion request is rejected.
 * ### QPS limit
 * The maximum queries per second (QPS) per user for this operation is 10. If the number of calls exceeds the limit, throttling is triggered. This may affect your business. Call this operation as needed. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request DeleteDynamicImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDynamicImageResponse
 */
DeleteDynamicImageResponse Client::deleteDynamicImageWithOptions(const DeleteDynamicImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDynamicImageIds()) {
    query["DynamicImageIds"] = request.getDynamicImageIds();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Deletes animated sticker information.
 *
 * @description - This operation only deletes the association between animated stickers and videos. It does not delete the actual animated sticker files.
 * - After the association is deleted, the deleted animated sticker information can no longer be queried by calling the [ListDynamicImage](https://help.aliyun.com/document_detail/180958.html) operation.
 * - If you do not specify **DynamicImageIds**, all animated stickers associated with the specified VideoId are deleted. However, if the video has more than 10 animated stickers, the deletion request is rejected.
 * ### QPS limit
 * The maximum queries per second (QPS) per user for this operation is 10. If the number of calls exceeds the limit, throttling is triggered. This may affect your business. Call this operation as needed. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request DeleteDynamicImageRequest
 * @return DeleteDynamicImageResponse
 */
DeleteDynamicImageResponse Client::deleteDynamicImage(const DeleteDynamicImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDynamicImageWithOptions(request, runtime);
}

/**
 * @summary Deletes an online editing project.
 *
 * @description - Supports batch deletion.
 *
 * @param request DeleteEditingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEditingProjectResponse
 */
DeleteEditingProjectResponse Client::deleteEditingProjectWithOptions(const DeleteEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProjectIds()) {
    query["ProjectIds"] = request.getProjectIds();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Deletes an online editing project.
 *
 * @description - Supports batch deletion.
 *
 * @param request DeleteEditingProjectRequest
 * @return DeleteEditingProjectResponse
 */
DeleteEditingProjectResponse Client::deleteEditingProject(const DeleteEditingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEditingProjectWithOptions(request, runtime);
}

/**
 * @summary Deletes materials from an online editing project.
 *
 * @param request DeleteEditingProjectMaterialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEditingProjectMaterialsResponse
 */
DeleteEditingProjectMaterialsResponse Client::deleteEditingProjectMaterialsWithOptions(const DeleteEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaterialIds()) {
    query["MaterialIds"] = request.getMaterialIds();
  }

  if (!!request.hasMaterialType()) {
    query["MaterialType"] = request.getMaterialType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Deletes materials from an online editing project.
 *
 * @param request DeleteEditingProjectMaterialsRequest
 * @return DeleteEditingProjectMaterialsResponse
 */
DeleteEditingProjectMaterialsResponse Client::deleteEditingProjectMaterials(const DeleteEditingProjectMaterialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEditingProjectMaterialsWithOptions(request, runtime);
}

/**
 * @summary Deletes images uploaded by users or images generated from video snapshots.
 *
 * @description - **When you call this operation to delete images, the source files are permanently deleted. This action is irreversible. Once deleted, the images cannot be recovered. Proceed with caution.**
 * - When **DeleteImageType** is set to **VideoId**, **VideoId** and **ImageType** are available and required. 
 * - When **DeleteImageType** is set to **ImageURL**, **ImageIds** and **ImageURLs** are available and required. 
 * - After you call this operation to delete images, CDN caches may still exist in some cases, which means the image URLs may not become invalid immediately.
 *
 * @param request DeleteImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteImageResponse
 */
DeleteImageResponse Client::deleteImageWithOptions(const DeleteImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeleteImageType()) {
    query["DeleteImageType"] = request.getDeleteImageType();
  }

  if (!!request.hasImageIds()) {
    query["ImageIds"] = request.getImageIds();
  }

  if (!!request.hasImageType()) {
    query["ImageType"] = request.getImageType();
  }

  if (!!request.hasImageURLs()) {
    query["ImageURLs"] = request.getImageURLs();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Deletes images uploaded by users or images generated from video snapshots.
 *
 * @description - **When you call this operation to delete images, the source files are permanently deleted. This action is irreversible. Once deleted, the images cannot be recovered. Proceed with caution.**
 * - When **DeleteImageType** is set to **VideoId**, **VideoId** and **ImageType** are available and required. 
 * - When **DeleteImageType** is set to **ImageURL**, **ImageIds** and **ImageURLs** are available and required. 
 * - After you call this operation to delete images, CDN caches may still exist in some cases, which means the image URLs may not become invalid immediately.
 *
 * @param request DeleteImageRequest
 * @return DeleteImageResponse
 */
DeleteImageResponse Client::deleteImage(const DeleteImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteImageWithOptions(request, runtime);
}

/**
 * @summary Deletes the callback method, callback URL, and event types of an event notification.
 *
 * @description > For more information, see [Event notification development guide](https://help.aliyun.com/document_detail/55627.html).
 *
 * @param request DeleteMessageCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMessageCallbackResponse
 */
DeleteMessageCallbackResponse Client::deleteMessageCallbackWithOptions(const DeleteMessageCallbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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
 * @summary Deletes the callback method, callback URL, and event types of an event notification.
 *
 * @description > For more information, see [Event notification development guide](https://help.aliyun.com/document_detail/55627.html).
 *
 * @param request DeleteMessageCallbackRequest
 * @return DeleteMessageCallbackResponse
 */
DeleteMessageCallbackResponse Client::deleteMessageCallback(const DeleteMessageCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMessageCallbackWithOptions(request, runtime);
}

/**
 * @summary Deletes the source files of multiple audio and video files at a time.
 *
 * @description Media processing operations in ApsaraVideo VOD (transcoding, snapshots, automated review, etc.) are performed on source files. Once a source file is deleted, subsequent media processing operations cannot be performed. Proceed with caution.
 *
 * @param request DeleteMezzaninesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMezzaninesResponse
 */
DeleteMezzaninesResponse Client::deleteMezzaninesWithOptions(const DeleteMezzaninesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasReferenceIds()) {
    query["ReferenceIds"] = request.getReferenceIds();
  }

  if (!!request.hasVideoIds()) {
    query["VideoIds"] = request.getVideoIds();
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
 * @summary Deletes the source files of multiple audio and video files at a time.
 *
 * @description Media processing operations in ApsaraVideo VOD (transcoding, snapshots, automated review, etc.) are performed on source files. Once a source file is deleted, subsequent media processing operations cannot be performed. Proceed with caution.
 *
 * @param request DeleteMezzaninesRequest
 * @return DeleteMezzaninesResponse
 */
DeleteMezzaninesResponse Client::deleteMezzanines(const DeleteMezzaninesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMezzaninesWithOptions(request, runtime);
}

/**
 * @summary Deletes fragment files generated during upload.
 *
 * @description - When you use multipart upload, fragment files may be generated if the upload fails. These fragment files are automatically cleared after 7 days. After the upload is complete or fails, you can call this operation to manually clear the fragment files.
 * - Calling this operation does not delete the original file or transcoded files. It only deletes fragment files generated during the upload process.
 * - Calling the [DeleteVideo](https://help.aliyun.com/document_detail/52837.html) operation deletes the complete video file, including fragment files.
 *
 * @param request DeleteMultipartUploadRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMultipartUploadResponse
 */
DeleteMultipartUploadResponse Client::deleteMultipartUploadWithOptions(const DeleteMultipartUploadRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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
 * @summary Deletes fragment files generated during upload.
 *
 * @description - When you use multipart upload, fragment files may be generated if the upload fails. These fragment files are automatically cleared after 7 days. After the upload is complete or fails, you can call this operation to manually clear the fragment files.
 * - Calling this operation does not delete the original file or transcoded files. It only deletes fragment files generated during the upload process.
 * - Calling the [DeleteVideo](https://help.aliyun.com/document_detail/52837.html) operation deletes the complete video file, including fragment files.
 *
 * @param request DeleteMultipartUploadRequest
 * @return DeleteMultipartUploadResponse
 */
DeleteMultipartUploadResponse Client::deleteMultipartUpload(const DeleteMultipartUploadRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMultipartUploadWithOptions(request, runtime);
}

/**
 * @summary Deletes media stream (video stream or audio stream) information and storage files.
 *
 * @description ### Usage notes
 * Batch deletion is supported.
 * ### QPS limit
 * A single user can perform a maximum of 50 queries per second (QPS). Throttling is triggered when the QPS limit is exceeded, which may affect your business. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request DeleteStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteStreamResponse
 */
DeleteStreamResponse Client::deleteStreamWithOptions(const DeleteStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobIds()) {
    query["JobIds"] = request.getJobIds();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.getReferenceId();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Deletes media stream (video stream or audio stream) information and storage files.
 *
 * @description ### Usage notes
 * Batch deletion is supported.
 * ### QPS limit
 * A single user can perform a maximum of 50 queries per second (QPS). Throttling is triggered when the QPS limit is exceeded, which may affect your business. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request DeleteStreamRequest
 * @return DeleteStreamResponse
 */
DeleteStreamResponse Client::deleteStream(const DeleteStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteStreamWithOptions(request, runtime);
}

/**
 * @summary Deletes transcoding configurations. You can delete specific transcoding templates from a transcoding template group or force delete an entire transcoding template group.
 *
 * @description - Default transcoding templates cannot be deleted. Remove the default designation before deleting them.
 *  - For security protection purposes, a locked transcoding template group cannot be added to, modified, or deleted. Call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation to query the template configuration and check the Locked response parameter to determine whether the template group is locked. Call the [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to unlock the template before making changes.
 *  - If the ForceDelGroup parameter is empty or set to false, the TranscodeTemplateIds parameter is required.
 *
 * @param request DeleteTranscodeTemplateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTranscodeTemplateGroupResponse
 */
DeleteTranscodeTemplateGroupResponse Client::deleteTranscodeTemplateGroupWithOptions(const DeleteTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForceDelGroup()) {
    query["ForceDelGroup"] = request.getForceDelGroup();
  }

  if (!!request.hasTranscodeTemplateGroupId()) {
    query["TranscodeTemplateGroupId"] = request.getTranscodeTemplateGroupId();
  }

  if (!!request.hasTranscodeTemplateIds()) {
    query["TranscodeTemplateIds"] = request.getTranscodeTemplateIds();
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
 * @summary Deletes transcoding configurations. You can delete specific transcoding templates from a transcoding template group or force delete an entire transcoding template group.
 *
 * @description - Default transcoding templates cannot be deleted. Remove the default designation before deleting them.
 *  - For security protection purposes, a locked transcoding template group cannot be added to, modified, or deleted. Call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation to query the template configuration and check the Locked response parameter to determine whether the template group is locked. Call the [UpdateTranscodeTemplateGroup](~~UpdateTranscodeTemplateGroup~~) operation to unlock the template before making changes.
 *  - If the ForceDelGroup parameter is empty or set to false, the TranscodeTemplateIds parameter is required.
 *
 * @param request DeleteTranscodeTemplateGroupRequest
 * @return DeleteTranscodeTemplateGroupResponse
 */
DeleteTranscodeTemplateGroupResponse Client::deleteTranscodeTemplateGroup(const DeleteTranscodeTemplateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTranscodeTemplateGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes complete videos, including video source files, transcoded stream files, and thumbnails.
 *
 * @description ### Usage notes
 * - **This operation physically deletes videos. Deleted videos cannot be recovered. Proceed with caution.**
 * - Batch deletion is supported.
 * - When you delete a video, the source files are deleted, including the video source file, transcoded stream files, and thumbnails. However, the CDN cache is not refreshed through synchronization. If your business requires it, use the purge feature in the ApsaraVideo VOD console to clear stale data from the point of presence. Related operations: see [Purge and prefetch](https://help.aliyun.com/document_detail/86098.html).
 * ### QPS limit
 * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, the API invoke is throttled, which may affect your business. Invoke this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request DeleteVideoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVideoResponse
 */
DeleteVideoResponse Client::deleteVideoWithOptions(const DeleteVideoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReferenceIds()) {
    query["ReferenceIds"] = request.getReferenceIds();
  }

  if (!!request.hasVideoIds()) {
    query["VideoIds"] = request.getVideoIds();
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
 * @summary Deletes complete videos, including video source files, transcoded stream files, and thumbnails.
 *
 * @description ### Usage notes
 * - **This operation physically deletes videos. Deleted videos cannot be recovered. Proceed with caution.**
 * - Batch deletion is supported.
 * - When you delete a video, the source files are deleted, including the video source file, transcoded stream files, and thumbnails. However, the CDN cache is not refreshed through synchronization. If your business requires it, use the purge feature in the ApsaraVideo VOD console to clear stale data from the point of presence. Related operations: see [Purge and prefetch](https://help.aliyun.com/document_detail/86098.html).
 * ### QPS limit
 * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, the API invoke is throttled, which may affect your business. Invoke this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request DeleteVideoRequest
 * @return DeleteVideoResponse
 */
DeleteVideoResponse Client::deleteVideo(const DeleteVideoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVideoWithOptions(request, runtime);
}

/**
 * @summary Deletes an accelerated domain name that has been added for ApsaraVideo VOD.
 *
 * @description >- Currently, the only supported service region is **China (Shanghai)**.
 * >- This operation makes the domain name inaccessible. Proceed with caution. Before deleting the domain name, restore the A record of the domain name at your DNS service provider.
 * >- After the domain name is successfully deleted, all related records of the ApsaraVideo VOD domain name are deleted. If you only want to temporarily disable the domain name, use the [DisableVodDomainOffline](https://help.aliyun.com/document_detail/120208.html) operation.
 *
 * @param request DeleteVodDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVodDomainResponse
 */
DeleteVodDomainResponse Client::deleteVodDomainWithOptions(const DeleteVodDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
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
 * @summary Deletes an accelerated domain name that has been added for ApsaraVideo VOD.
 *
 * @description >- Currently, the only supported service region is **China (Shanghai)**.
 * >- This operation makes the domain name inaccessible. Proceed with caution. Before deleting the domain name, restore the A record of the domain name at your DNS service provider.
 * >- After the domain name is successfully deleted, all related records of the ApsaraVideo VOD domain name are deleted. If you only want to temporarily disable the domain name, use the [DisableVodDomainOffline](https://help.aliyun.com/document_detail/120208.html) operation.
 *
 * @param request DeleteVodDomainRequest
 * @return DeleteVodDomainResponse
 */
DeleteVodDomainResponse Client::deleteVodDomain(const DeleteVodDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVodDomainWithOptions(request, runtime);
}

/**
 * @summary Deletes the configurations of a domain name for CDN acceleration in ApsaraVideo VOD.
 *
 * @description - Currently, the only supported service region is **China (Shanghai)**.
 * - This operation causes the domain name to become inaccessible. Before deleting the domain name, restore the A record of the domain name at your DNS service provider.
 * - After the domain name is successfully deleted, all related records of the ApsaraVideo VOD domain name are removed. If you only want to temporarily disable the domain name, use the [DisableVodRealtimeLogDelivery](https://help.aliyun.com/document_detail/120208.html) operation.
 *
 * @param request DeleteVodSpecificConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVodSpecificConfigResponse
 */
DeleteVodSpecificConfigResponse Client::deleteVodSpecificConfigWithOptions(const DeleteVodSpecificConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["ConfigId"] = request.getConfigId();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
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
 * @summary Deletes the configurations of a domain name for CDN acceleration in ApsaraVideo VOD.
 *
 * @description - Currently, the only supported service region is **China (Shanghai)**.
 * - This operation causes the domain name to become inaccessible. Before deleting the domain name, restore the A record of the domain name at your DNS service provider.
 * - After the domain name is successfully deleted, all related records of the ApsaraVideo VOD domain name are removed. If you only want to temporarily disable the domain name, use the [DisableVodRealtimeLogDelivery](https://help.aliyun.com/document_detail/120208.html) operation.
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
    query["VodTemplateId"] = request.getVodTemplateId();
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
 * @summary Deletes an image watermark template or text watermark template by watermark template ID.
 *
 * @description - **When you delete an image watermark template, the watermark source file is physically deleted and cannot be recovered. Proceed with caution.**
 * - A watermark template that has been set as the default watermark template cannot be deleted. To delete it, call [SetDefaultWatermark](~~SetDefaultWatermark~~) to set another watermark template as the default template to remove the default status, and then delete it.
 *
 * @param request DeleteWatermarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWatermarkResponse
 */
DeleteWatermarkResponse Client::deleteWatermarkWithOptions(const DeleteWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWatermarkId()) {
    query["WatermarkId"] = request.getWatermarkId();
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
 * @summary Deletes an image watermark template or text watermark template by watermark template ID.
 *
 * @description - **When you delete an image watermark template, the watermark source file is physically deleted and cannot be recovered. Proceed with caution.**
 * - A watermark template that has been set as the default watermark template cannot be deleted. To delete it, call [SetDefaultWatermark](~~SetDefaultWatermark~~) to set another watermark template as the default template to remove the default status, and then delete it.
 *
 * @param request DeleteWatermarkRequest
 * @return DeleteWatermarkResponse
 */
DeleteWatermarkResponse Client::deleteWatermark(const DeleteWatermarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWatermarkWithOptions(request, runtime);
}

/**
 * @summary Queries the time-based distribution of audio and video media assets. The maximum time span between the start time and end time is six months.
 *
 * @description - Currently, this operation is supported only in the China (Shanghai) region.
 * - If you do not specify StartTime and EndTime, this operation returns data for the past 7 days by default. If you specify StartTime and EndTime, this operation returns data for the specified time range.
 *
 * @param request DescribeMediaDistributionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMediaDistributionResponse
 */
DescribeMediaDistributionResponse Client::describeMediaDistributionWithOptions(const DescribeMediaDistributionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStorageClass()) {
    query["StorageClass"] = request.getStorageClass();
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
 * @summary Queries the time-based distribution of audio and video media assets. The maximum time span between the start time and end time is six months.
 *
 * @description - Currently, this operation is supported only in the China (Shanghai) region.
 * - If you do not specify StartTime and EndTime, this operation returns data for the past 7 days by default. If you specify StartTime and EndTime, this operation returns data for the specified time range.
 *
 * @param request DescribeMediaDistributionRequest
 * @return DescribeMediaDistributionResponse
 */
DescribeMediaDistributionResponse Client::describeMediaDistribution(const DescribeMediaDistributionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMediaDistributionWithOptions(request, runtime);
}

/**
 * @summary Retrieves daily playback statistics for top videos, including the number of views, unique viewers, and total playback duration.
 *
 * @description - Currently, the only supported service region is **China (Shanghai)**.
 * - You can query playback statistics for up to the top 1000 videos per day. The top video list is sorted in descending order by the number of views by default.
 * - Only playback data collected through ApsaraVideo Player SDK is supported.
 * - Based on UTC+8, playback statistics for the previous day are generated at 9:00 AM each day.
 * - You can query data generated after January 1, 2018. The maximum time range for a query is 180 days.
 *
 * @param request DescribePlayTopVideosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePlayTopVideosResponse
 */
DescribePlayTopVideosResponse Client::describePlayTopVideosWithOptions(const DescribePlayTopVideosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizDate()) {
    query["BizDate"] = request.getBizDate();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Retrieves daily playback statistics for top videos, including the number of views, unique viewers, and total playback duration.
 *
 * @description - Currently, the only supported service region is **China (Shanghai)**.
 * - You can query playback statistics for up to the top 1000 videos per day. The top video list is sorted in descending order by the number of views by default.
 * - Only playback data collected through ApsaraVideo Player SDK is supported.
 * - Based on UTC+8, playback statistics for the previous day are generated at 9:00 AM each day.
 * - You can query data generated after January 1, 2018. The maximum time range for a query is 180 days.
 *
 * @param request DescribePlayTopVideosRequest
 * @return DescribePlayTopVideosResponse
 */
DescribePlayTopVideosResponse Client::describePlayTopVideos(const DescribePlayTopVideosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePlayTopVideosWithOptions(request, runtime);
}

/**
 * @summary Retrieves daily average playback statistics for a specified time range, including average playback duration and average playback count.
 *
 * @description - Currently, the only supported service region is **China (Shanghai)**.
 * - Only playback data collected through ApsaraVideo Player SDK is supported.
 * - Playback statistics for the previous day are generated at 9:00 AM (UTC+8) each day.
 * - You can query data generated after 2018-01-01. The maximum time range between the start time and end time is 180 days.
 *
 * @param request DescribePlayUserAvgRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePlayUserAvgResponse
 */
DescribePlayUserAvgResponse Client::describePlayUserAvgWithOptions(const DescribePlayUserAvgRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Retrieves daily average playback statistics for a specified time range, including average playback duration and average playback count.
 *
 * @description - Currently, the only supported service region is **China (Shanghai)**.
 * - Only playback data collected through ApsaraVideo Player SDK is supported.
 * - Playback statistics for the previous day are generated at 9:00 AM (UTC+8) each day.
 * - You can query data generated after 2018-01-01. The maximum time range between the start time and end time is 180 days.
 *
 * @param request DescribePlayUserAvgRequest
 * @return DescribePlayUserAvgResponse
 */
DescribePlayUserAvgResponse Client::describePlayUserAvg(const DescribePlayUserAvgRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePlayUserAvgWithOptions(request, runtime);
}

/**
 * @summary Retrieves the total daily playback statistics within a specified time range, including total play count, total unique viewers, total playback duration, and playback duration distribution.
 *
 * @description - Currently, the only supported service region is **China (Shanghai)**.
 * - Only playback data from ApsaraVideo Player SDK is supported.
 * - Based on UTC+8, playback statistics for the previous day are generated at 9:00 AM each day.
 * - Data after 2018-01-01 can be queried. The maximum time span between the start time and end time is 180 days.
 *
 * @param request DescribePlayUserTotalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePlayUserTotalResponse
 */
DescribePlayUserTotalResponse Client::describePlayUserTotalWithOptions(const DescribePlayUserTotalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Retrieves the total daily playback statistics within a specified time range, including total play count, total unique viewers, total playback duration, and playback duration distribution.
 *
 * @description - Currently, the only supported service region is **China (Shanghai)**.
 * - Only playback data from ApsaraVideo Player SDK is supported.
 * - Based on UTC+8, playback statistics for the previous day are generated at 9:00 AM each day.
 * - Data after 2018-01-01 can be queried. The maximum time span between the start time and end time is 180 days.
 *
 * @param request DescribePlayUserTotalRequest
 * @return DescribePlayUserTotalResponse
 */
DescribePlayUserTotalResponse Client::describePlayUserTotal(const DescribePlayUserTotalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePlayUserTotalWithOptions(request, runtime);
}

/**
 * @summary Queries the daily playback statistics of a specified video within a specified time range. The statistics include total playback duration, number of playbacks, number of unique viewers, and playback duration distribution.
 *
 * @description - Currently, the service address supports only **China (Shanghai)**.
 * - Only playback data of videos that use ApsaraVideo Player SDK and rank in the top 1,000 by daily playback count is supported.
 * - Based on UTC+8, playback statistics for the previous day are generated at 9:00 AM each day.
 *  - Only data within the last 2 years (730 days) can be queried, and the maximum time span between the start time and end time is 180 days.
 *
 * @param request DescribePlayVideoStatisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePlayVideoStatisResponse
 */
DescribePlayVideoStatisResponse Client::describePlayVideoStatisWithOptions(const DescribePlayVideoStatisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Queries the daily playback statistics of a specified video within a specified time range. The statistics include total playback duration, number of playbacks, number of unique viewers, and playback duration distribution.
 *
 * @description - Currently, the service address supports only **China (Shanghai)**.
 * - Only playback data of videos that use ApsaraVideo Player SDK and rank in the top 1,000 by daily playback count is supported.
 * - Based on UTC+8, playback statistics for the previous day are generated at 9:00 AM each day.
 *  - Only data within the last 2 years (730 days) can be queried, and the maximum time span between the start time and end time is 180 days.
 *
 * @param request DescribePlayVideoStatisRequest
 * @return DescribePlayVideoStatisResponse
 */
DescribePlayVideoStatisResponse Client::describePlayVideoStatis(const DescribePlayVideoStatisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePlayVideoStatisWithOptions(request, runtime);
}

/**
 * @summary Queries usage data of AI processing services such as automated review and media fingerprint.
 *
 * @description - Currently, the service address supports only **China (Shanghai)**.
 * - If the interval between the start time and end time is within 7 days, hourly data is returned. If the interval is greater than 7 days, daily data is returned. The maximum interval is 31 days.
 *
 * @param request DescribeVodAIDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodAIDataResponse
 */
DescribeVodAIDataResponse Client::describeVodAIDataWithOptions(const DescribeVodAIDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAIType()) {
    query["AIType"] = request.getAIType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries usage data of AI processing services such as automated review and media fingerprint.
 *
 * @description - Currently, the service address supports only **China (Shanghai)**.
 * - If the interval between the start time and end time is within 7 days, hourly data is returned. If the interval is greater than 7 days, daily data is returned. The maximum interval is 31 days.
 *
 * @param request DescribeVodAIDataRequest
 * @return DescribeVodAIDataResponse
 */
DescribeVodAIDataResponse Client::describeVodAIData(const DescribeVodAIDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodAIDataWithOptions(request, runtime);
}

/**
 * @summary Queries the certificate list information.
 *
 * @description - Currently, the service address is supported only in the **China (Shanghai)** region.
 *
 * @param request DescribeVodCertificateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodCertificateListResponse
 */
DescribeVodCertificateListResponse Client::describeVodCertificateListWithOptions(const DescribeVodCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
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
 * @summary Queries the certificate list information.
 *
 * @description - Currently, the service address is supported only in the **China (Shanghai)** region.
 *
 * @param request DescribeVodCertificateListRequest
 * @return DescribeVodCertificateListResponse
 */
DescribeVodCertificateListResponse Client::describeVodCertificateList(const DescribeVodCertificateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodCertificateListWithOptions(request, runtime);
}

/**
 * @summary Invokes this operation to query the bandwidth data of an accelerated domain name. Compared with the DescribeVodDomainRealTimeBpsData operation, this operation supports a longer time range for historical data queries (up to 366 days) but provides a larger data time granularity (minimum of 5 minutes) and higher data latency.
 *
 * @description - Currently, this operation is available only in the **China (Shanghai)** region.
 * - Batch queries are supported. You can query data for up to 500 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data for the past 24 hours by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
 * **Time granularity of returned data**
 * If you specify `StartTime` and `EndTime` without Settings for `Interval`, the default time granularity of returned data, the queryable historical data time range, and the data latency are as follows:
 * |Time granularity  |Time span per query   |  Queryable historical data time range  |  Data latency   |
 * | ------------- |------------   | ----------- | ----------- |
 * |5 minutes  | Time span per query < 3 days   |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time span per query < 31 days  |186 days  |Generally 3-4 hours  |
 * | 1 day | 31 days ≤ Time span per query ≤ 90 days |366 days  |Generally 4 hours, no more than 24 hours  |
 *
 * @param request DescribeVodDomainBpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainBpsDataResponse
 */
DescribeVodDomainBpsDataResponse Client::describeVodDomainBpsDataWithOptions(const DescribeVodDomainBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Invokes this operation to query the bandwidth data of an accelerated domain name. Compared with the DescribeVodDomainRealTimeBpsData operation, this operation supports a longer time range for historical data queries (up to 366 days) but provides a larger data time granularity (minimum of 5 minutes) and higher data latency.
 *
 * @description - Currently, this operation is available only in the **China (Shanghai)** region.
 * - Batch queries are supported. You can query data for up to 500 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data for the past 24 hours by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
 * **Time granularity of returned data**
 * If you specify `StartTime` and `EndTime` without Settings for `Interval`, the default time granularity of returned data, the queryable historical data time range, and the data latency are as follows:
 * |Time granularity  |Time span per query   |  Queryable historical data time range  |  Data latency   |
 * | ------------- |------------   | ----------- | ----------- |
 * |5 minutes  | Time span per query < 3 days   |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time span per query < 31 days  |186 days  |Generally 3-4 hours  |
 * | 1 day | 31 days ≤ Time span per query ≤ 90 days |366 days  |Generally 4 hours, no more than 24 hours  |
 *
 * @param request DescribeVodDomainBpsDataRequest
 * @return DescribeVodDomainBpsDataResponse
 */
DescribeVodDomainBpsDataResponse Client::describeVodDomainBpsData(const DescribeVodDomainBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainBpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries bandwidth data of accelerated domain names by protocol type.
 *
 * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
 * - Batch queries are supported. You can query data of up to 500 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data of the last 24 hours by default. If you specify `StartTime` and `EndTime`, this operation returns data of the specified time range.
 * **Time granularity of returned data**
 * If you specify `StartTime` and `EndTime` without configuring `Interval`, the default time granularity, the maximum time range for historical data queries, and the data delay are as follows:
 * |Time granularity  |Time range per query   |  Maximum time range for historical data queries  |  Data delay   |
 * | ------------- |------------   | ----------- | ----------- |
 * |5 minutes  | Time range per query < 3 days   |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time range per query < 31 days  |186 days  |Typically 3 to 4 hours  |
 * | 1 day | 31 days ≤ Time range per query ≤ 366 days |366 days  |Typically 4 hours, up to 24 hours  |
 *
 * @param request DescribeVodDomainBpsDataByLayerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainBpsDataByLayerResponse
 */
DescribeVodDomainBpsDataByLayerResponse Client::describeVodDomainBpsDataByLayerWithOptions(const DescribeVodDomainBpsDataByLayerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLayer()) {
    query["Layer"] = request.getLayer();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries bandwidth data of accelerated domain names by protocol type.
 *
 * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
 * - Batch queries are supported. You can query data of up to 500 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data of the last 24 hours by default. If you specify `StartTime` and `EndTime`, this operation returns data of the specified time range.
 * **Time granularity of returned data**
 * If you specify `StartTime` and `EndTime` without configuring `Interval`, the default time granularity, the maximum time range for historical data queries, and the data delay are as follows:
 * |Time granularity  |Time range per query   |  Maximum time range for historical data queries  |  Data delay   |
 * | ------------- |------------   | ----------- | ----------- |
 * |5 minutes  | Time range per query < 3 days   |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time range per query < 31 days  |186 days  |Typically 3 to 4 hours  |
 * | 1 day | 31 days ≤ Time range per query ≤ 366 days |366 days  |Typically 4 hours, up to 24 hours  |
 *
 * @param request DescribeVodDomainBpsDataByLayerRequest
 * @return DescribeVodDomainBpsDataByLayerResponse
 */
DescribeVodDomainBpsDataByLayerResponse Client::describeVodDomainBpsDataByLayer(const DescribeVodDomainBpsDataByLayerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainBpsDataByLayerWithOptions(request, runtime);
}

/**
 * @summary Retrieves the certificate information of a specified accelerated domain name.
 *
 * @description Currently, the only supported service region is **China (Shanghai)**.
 *
 * @param request DescribeVodDomainCertificateInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainCertificateInfoResponse
 */
DescribeVodDomainCertificateInfoResponse Client::describeVodDomainCertificateInfoWithOptions(const DescribeVodDomainCertificateInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasHeraApiAutoVersion()) {
    query["HeraApiAutoVersion"] = request.getHeraApiAutoVersion();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Retrieves the certificate information of a specified accelerated domain name.
 *
 * @description Currently, the only supported service region is **China (Shanghai)**.
 *
 * @param request DescribeVodDomainCertificateInfoRequest
 * @return DescribeVodDomainCertificateInfoResponse
 */
DescribeVodDomainCertificateInfoResponse Client::describeVodDomainCertificateInfo(const DescribeVodDomainCertificateInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainCertificateInfoWithOptions(request, runtime);
}

/**
 * @summary Queries domain name configurations. You can query multiple feature configurations in a single request.
 *
 * @description - Currently, the service address supports only **China (Shanghai)**.
 *
 * @param request DescribeVodDomainConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainConfigsResponse
 */
DescribeVodDomainConfigsResponse Client::describeVodDomainConfigsWithOptions(const DescribeVodDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasFunctionNames()) {
    query["FunctionNames"] = request.getFunctionNames();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
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
 * @summary Queries domain name configurations. You can query multiple feature configurations in a single request.
 *
 * @description - Currently, the service address supports only **China (Shanghai)**.
 *
 * @param request DescribeVodDomainConfigsRequest
 * @return DescribeVodDomainConfigsResponse
 */
DescribeVodDomainConfigsResponse Client::describeVodDomainConfigs(const DescribeVodDomainConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainConfigsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the basic configuration information of a specified China domain name for video-on-demand (VOD) acceleration.
 *
 * @description Currently, the China service address supports only **China (Shanghai)**.
 *
 * @param request DescribeVodDomainDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainDetailResponse
 */
DescribeVodDomainDetailResponse Client::describeVodDomainDetailWithOptions(const DescribeVodDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
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
 * @summary Retrieves the basic configuration information of a specified China domain name for video-on-demand (VOD) acceleration.
 *
 * @description Currently, the China service address supports only **China (Shanghai)**.
 *
 * @param request DescribeVodDomainDetailRequest
 * @return DescribeVodDomainDetailResponse
 */
DescribeVodDomainDetailResponse Client::describeVodDomainDetail(const DescribeVodDomainDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the byte hit ratio (percentage of hit bytes) of an accelerated domain name.
 *
 * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
 * - Batch queries are supported. You can query data for up to 500 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, data from the past 24 hours is returned by default. If you specify `StartTime` and `EndTime`, data for the specified time range is returned.
 * **Time granularity of returned data**
 * If you specify `StartTime` and `EndTime` without setting `Interval`, the default time granularity, the maximum time range for historical data queries, and the data delay are as follows:
 * |Time granularity  |Time span per query   |  Maximum time range for historical data queries  |  Data delay   |
 * | ------------- |------------   | ----------- | ----------- |
 * |5 minutes  | Time span per query < 3 days   |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time span per query < 31 days  |186 days  |Generally 3 to 4 hours  |
 * | 1 day | 31 days ≤ Time span per query ≤ 366 days |366 days  |Generally 4 hours, up to 24 hours  |
 *
 * @param request DescribeVodDomainHitRateDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainHitRateDataResponse
 */
DescribeVodDomainHitRateDataResponse Client::describeVodDomainHitRateDataWithOptions(const DescribeVodDomainHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the byte hit ratio (percentage of hit bytes) of an accelerated domain name.
 *
 * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
 * - Batch queries are supported. You can query data for up to 500 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, data from the past 24 hours is returned by default. If you specify `StartTime` and `EndTime`, data for the specified time range is returned.
 * **Time granularity of returned data**
 * If you specify `StartTime` and `EndTime` without setting `Interval`, the default time granularity, the maximum time range for historical data queries, and the data delay are as follows:
 * |Time granularity  |Time span per query   |  Maximum time range for historical data queries  |  Data delay   |
 * | ------------- |------------   | ----------- | ----------- |
 * |5 minutes  | Time span per query < 3 days   |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time span per query < 31 days  |186 days  |Generally 3 to 4 hours  |
 * | 1 day | 31 days ≤ Time span per query ≤ 366 days |366 days  |Generally 4 hours, up to 24 hours  |
 *
 * @param request DescribeVodDomainHitRateDataRequest
 * @return DescribeVodDomainHitRateDataResponse
 */
DescribeVodDomainHitRateDataResponse Client::describeVodDomainHitRateData(const DescribeVodDomainHitRateDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainHitRateDataWithOptions(request, runtime);
}

/**
 * @summary Retrieves the download URLs of raw CDN access logs for a specified domain name.
 *
 * @description - Currently, the only supported service region is **China (Shanghai)**.
 * - For details about log formats and latency, refer to [Log Management](https://help.aliyun.com/document_detail/86099.html).
 * - If you do not specify StartTime and EndTime, log data from the past 24 hours is returned by default.
 * - StartTime and EndTime must be specified together to query logs within the specified time range.
 *
 * @param request DescribeVodDomainLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainLogResponse
 */
DescribeVodDomainLogResponse Client::describeVodDomainLogWithOptions(const DescribeVodDomainLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Retrieves the download URLs of raw CDN access logs for a specified domain name.
 *
 * @description - Currently, the only supported service region is **China (Shanghai)**.
 * - For details about log formats and latency, refer to [Log Management](https://help.aliyun.com/document_detail/86099.html).
 * - If you do not specify StartTime and EndTime, log data from the past 24 hours is returned by default.
 * - StartTime and EndTime must be specified together to query logs within the specified time range.
 *
 * @param request DescribeVodDomainLogRequest
 * @return DescribeVodDomainLogResponse
 */
DescribeVodDomainLogResponse Client::describeVodDomainLog(const DescribeVodDomainLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainLogWithOptions(request, runtime);
}

/**
 * @summary Queries the 95th percentile bandwidth monitoring data for accelerated domain names.
 *
 * @description **Three query methods are available:**
 * - When both StartTime and EndTime are specified: if the difference between EndTime and StartTime is within 24 hours, the 95th percentile bandwidth of the day that contains StartTime is returned. Otherwise, the 95th percentile bandwidth of the month that contains StartTime is returned.
 * - When both TimePoint and Cycle are specified, the 95th percentile bandwidth of the cycle that contains TimePoint is returned.
 * - When StartTime and EndTime are specified with an additional Cycle parameter, the 95th percentile bandwidth for all specified cycles within the query range is returned.
 * If none of these three methods are specified, the 95th percentile bandwidth of the past 24 hours is returned by default.
 * - Maximum query span: 90 days.
 * - Minimum query granularity: 1 day.
 * - Maximum query range: 90 days.
 * - Maximum number of calls per user per second: 100.
 * - Data unit: bit/s.
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
 * @summary Queries the 95th percentile bandwidth monitoring data for accelerated domain names.
 *
 * @description **Three query methods are available:**
 * - When both StartTime and EndTime are specified: if the difference between EndTime and StartTime is within 24 hours, the 95th percentile bandwidth of the day that contains StartTime is returned. Otherwise, the 95th percentile bandwidth of the month that contains StartTime is returned.
 * - When both TimePoint and Cycle are specified, the 95th percentile bandwidth of the cycle that contains TimePoint is returned.
 * - When StartTime and EndTime are specified with an additional Cycle parameter, the 95th percentile bandwidth for all specified cycles within the query range is returned.
 * If none of these three methods are specified, the 95th percentile bandwidth of the past 24 hours is returned by default.
 * - Maximum query span: 90 days.
 * - Minimum query granularity: 1 day.
 * - Maximum query range: 90 days.
 * - Maximum number of calls per user per second: 100.
 * - Data unit: bit/s.
 *
 * @param request DescribeVodDomainMax95BpsDataRequest
 * @return DescribeVodDomainMax95BpsDataResponse
 */
DescribeVodDomainMax95BpsDataResponse Client::describeVodDomainMax95BpsData(const DescribeVodDomainMax95BpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainMax95BpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the queries per second (QPS) of accelerated domain names at a 5-minute granularity. Data from the last 90 days is supported.
 *
 * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
 * - Maximum call frequency per user: 100 calls per second.
 * - If you do not specify StartTime and EndTime, this operation returns data from the last 24 hours. If you specify StartTime and EndTime, this operation returns data for the specified time range.
 * **Supported time granularities**
 * The Interval request parameter supports different data time granularities based on the maximum time range per query. The following table describes the queryable historical data time range and data latency for each time granularity:
 * |Time granularity	|Maximum time range per query	|Queryable historical data time range	|Data latency
 * | ------------- |------------   | ----------- | ----------- |
 * |5 minutes	|3 days	|93 days	|15 minutes
 * |1 hour	|31 days	|186 days	|Typically 3-4 hours
 * |1 day	|366 days	|366 days	|Typically 4 hours, no more than 24 hours
 * *********
 *
 * @param request DescribeVodDomainQpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainQpsDataResponse
 */
DescribeVodDomainQpsDataResponse Client::describeVodDomainQpsDataWithOptions(const DescribeVodDomainQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the queries per second (QPS) of accelerated domain names at a 5-minute granularity. Data from the last 90 days is supported.
 *
 * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
 * - Maximum call frequency per user: 100 calls per second.
 * - If you do not specify StartTime and EndTime, this operation returns data from the last 24 hours. If you specify StartTime and EndTime, this operation returns data for the specified time range.
 * **Supported time granularities**
 * The Interval request parameter supports different data time granularities based on the maximum time range per query. The following table describes the queryable historical data time range and data latency for each time granularity:
 * |Time granularity	|Maximum time range per query	|Queryable historical data time range	|Data latency
 * | ------------- |------------   | ----------- | ----------- |
 * |5 minutes	|3 days	|93 days	|15 minutes
 * |1 hour	|31 days	|186 days	|Typically 3-4 hours
 * |1 day	|366 days	|366 days	|Typically 4 hours, no more than 24 hours
 * *********
 *
 * @param request DescribeVodDomainQpsDataRequest
 * @return DescribeVodDomainQpsDataResponse
 */
DescribeVodDomainQpsDataResponse Client::describeVodDomainQpsData(const DescribeVodDomainQpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainQpsDataWithOptions(request, runtime);
}

/**
 * @summary Invokes this operation to query the bandwidth data of an accelerated domain name. Compared with the DescribeVodDomainBpsData operation, this operation supports a smaller time granularity (minimum of 1 minute), lower data latency (minimum of 5 minutes), but a shorter historical data time range (up to 186 days).
 *
 * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
 * - Batch queries are supported. You can query data for up to 500 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data for the last hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
 * **Time granularity of returned data**
 * The time granularity of returned data varies based on the time range specified by `StartTime` and `EndTime`. The following table describes the queryable historical data time range and data latency for each time granularity:
 * |Time granularity  |Time range per query   |  Queryable historical data time range  |  Data latency   |
 * | ------------- |------------   | ----------- | ----------- |
 * |1 minute  | Time range per query ≤ 1 hour   |7 days  |5 minutes  |
 * |5 minutes  | 1 hour < Time range per query < 3 days  |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time range per query < 31 days |186 days  |Generally 3 to 4 hours  |
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
 * @summary Invokes this operation to query the bandwidth data of an accelerated domain name. Compared with the DescribeVodDomainBpsData operation, this operation supports a smaller time granularity (minimum of 1 minute), lower data latency (minimum of 5 minutes), but a shorter historical data time range (up to 186 days).
 *
 * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
 * - Batch queries are supported. You can query data for up to 500 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data for the last hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
 * **Time granularity of returned data**
 * The time granularity of returned data varies based on the time range specified by `StartTime` and `EndTime`. The following table describes the queryable historical data time range and data latency for each time granularity:
 * |Time granularity  |Time range per query   |  Queryable historical data time range  |  Data latency   |
 * | ------------- |------------   | ----------- | ----------- |
 * |1 minute  | Time range per query ≤ 1 hour   |7 days  |5 minutes  |
 * |5 minutes  | 1 hour < Time range per query < 3 days  |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time range per query < 31 days |186 days  |Generally 3 to 4 hours  |
 *
 * @param request DescribeVodDomainRealTimeBpsDataRequest
 * @return DescribeVodDomainRealTimeBpsDataResponse
 */
DescribeVodDomainRealTimeBpsDataResponse Client::describeVodDomainRealTimeBpsData(const DescribeVodDomainRealTimeBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainRealTimeBpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the byte hit rate data of accelerated domain names. This operation supports a minimum time granularity of 1 minute, with a data delay of at least 5 minutes, and allows you to query data from the last 186 days.
 *
 * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
 * - Batch queries are supported. You can query data for up to 100 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data from the last hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
 * **Time granularity of returned data**
 * The time granularity of returned data varies based on the time range specified by `StartTime` and `EndTime`. The following table describes the queryable historical data range and data delay for each time granularity:
 * |Time granularity  |Time range per query   |  Queryable historical data range  |  Data delay   |
 * | ------------- |------------   | ----------- | ----------- |
 * |1 minute  | Time range per query ≤ 1 hour   |7 days  |5 minutes  |
 * |5 minutes  | 1 hour < Time range per query < 3 days  |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time range per query < 31 days |186 days  |Typically 3 to 4 hours  |
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
 * @summary Queries the byte hit rate data of accelerated domain names. This operation supports a minimum time granularity of 1 minute, with a data delay of at least 5 minutes, and allows you to query data from the last 186 days.
 *
 * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
 * - Batch queries are supported. You can query data for up to 100 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data from the last hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
 * **Time granularity of returned data**
 * The time granularity of returned data varies based on the time range specified by `StartTime` and `EndTime`. The following table describes the queryable historical data range and data delay for each time granularity:
 * |Time granularity  |Time range per query   |  Queryable historical data range  |  Data delay   |
 * | ------------- |------------   | ----------- | ----------- |
 * |1 minute  | Time range per query ≤ 1 hour   |7 days  |5 minutes  |
 * |5 minutes  | 1 hour < Time range per query < 3 days  |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time range per query < 31 days |186 days  |Typically 3 to 4 hours  |
 *
 * @param request DescribeVodDomainRealTimeByteHitRateDataRequest
 * @return DescribeVodDomainRealTimeByteHitRateDataResponse
 */
DescribeVodDomainRealTimeByteHitRateDataResponse Client::describeVodDomainRealTimeByteHitRateData(const DescribeVodDomainRealTimeByteHitRateDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainRealTimeByteHitRateDataWithOptions(request, runtime);
}

/**
 * @summary Queries real-time access data for accelerated domain names, including QPS, bandwidth, and HTTP status code data within the last 7 days.
 *
 * @description - Currently, this operation is available only in the **China (Shanghai)** region.
 * - Batch queries are supported. You can query data for up to 20 domain names at a time.
 * - The maximum time range per query (the time range between StartTime and EndTime) is 10 minutes, and data is returned at a time granularity of 1 minute.
 * - Only data within the last 7 days can be queried.
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
 * @summary Queries real-time access data for accelerated domain names, including QPS, bandwidth, and HTTP status code data within the last 7 days.
 *
 * @description - Currently, this operation is available only in the **China (Shanghai)** region.
 * - Batch queries are supported. You can query data for up to 20 domain names at a time.
 * - The maximum time range per query (the time range between StartTime and EndTime) is 10 minutes, and data is returned at a time granularity of 1 minute.
 * - Only data within the last 7 days can be queried.
 *
 * @param request DescribeVodDomainRealTimeDetailDataRequest
 * @return DescribeVodDomainRealTimeDetailDataResponse
 */
DescribeVodDomainRealTimeDetailDataResponse Client::describeVodDomainRealTimeDetailData(const DescribeVodDomainRealTimeDetailDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainRealTimeDetailDataWithOptions(request, runtime);
}

/**
 * @summary Queries the total number and proportion of HTTP status codes for an accelerated domain name. This operation supports a minimum data time granularity of 1 minute, with a data delay of at least 5 minutes, and allows you to query data from the last 186 days.
 *
 * @description - Currently, this operation is available only in the **China (Shanghai)** region.
 * - Batch queries are supported. You can query data for up to 100 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data from the last hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
 * **Time granularity of returned data**
 * The time granularity of returned data varies based on the time range specified by `StartTime` and `EndTime`. The following table describes the queryable historical data range and data delay for each time granularity:
 * |Time granularity  |Time range per query   |  Queryable historical data range  |  Data delay   |
 * | ------------- |------------   | ----------- | ----------- |
 * |1 minute  | Time range per query ≤ 1 hour   |7 days  |5 minutes  |
 * |5 minutes  | 1 hour < Time range per query < 3 days  |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time range per query < 31 days |186 days  |Typically 3 to 4 hours  |
 *
 * @param request DescribeVodDomainRealTimeHttpCodeDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainRealTimeHttpCodeDataResponse
 */
DescribeVodDomainRealTimeHttpCodeDataResponse Client::describeVodDomainRealTimeHttpCodeDataWithOptions(const DescribeVodDomainRealTimeHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the total number and proportion of HTTP status codes for an accelerated domain name. This operation supports a minimum data time granularity of 1 minute, with a data delay of at least 5 minutes, and allows you to query data from the last 186 days.
 *
 * @description - Currently, this operation is available only in the **China (Shanghai)** region.
 * - Batch queries are supported. You can query data for up to 100 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data from the last hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
 * **Time granularity of returned data**
 * The time granularity of returned data varies based on the time range specified by `StartTime` and `EndTime`. The following table describes the queryable historical data range and data delay for each time granularity:
 * |Time granularity  |Time range per query   |  Queryable historical data range  |  Data delay   |
 * | ------------- |------------   | ----------- | ----------- |
 * |1 minute  | Time range per query ≤ 1 hour   |7 days  |5 minutes  |
 * |5 minutes  | 1 hour < Time range per query < 3 days  |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time range per query < 31 days |186 days  |Typically 3 to 4 hours  |
 *
 * @param request DescribeVodDomainRealTimeHttpCodeDataRequest
 * @return DescribeVodDomainRealTimeHttpCodeDataResponse
 */
DescribeVodDomainRealTimeHttpCodeDataResponse Client::describeVodDomainRealTimeHttpCodeData(const DescribeVodDomainRealTimeHttpCodeDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainRealTimeHttpCodeDataWithOptions(request, runtime);
}

/**
 * @summary Invoke this operation to query the queries per second (QPS) data for access to an accelerated domain name. This operation supports a minimum data time granularity of 1 minute, with a data delay of at least 5 minutes, and allows you to query data from the last 186 days.
 *
 * @description - Currently, this operation is available only in the **China (Shanghai)** region.
 * - Batch queries are supported. You can query data for up to 500 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data from the last hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
 * **Time granularity of returned data**
 * The time granularity of returned data varies based on the time range specified by `StartTime` and `EndTime`. The following table describes the queryable historical data range and data delay for each time granularity:
 * |Time granularity  |Time range per query   |  Queryable historical data range  |  Data delay   |
 * | ------------- |------------   | ----------- | ----------- |
 * |1 minute  | Time range per query ≤ 1 hour   |7 days  |5 minutes  |
 * |5 minutes  | 1 hour < Time range per query < 3 days  |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time range per query < 31 days |186 days  |Typically 3 to 4 hours  |
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
 * @summary Invoke this operation to query the queries per second (QPS) data for access to an accelerated domain name. This operation supports a minimum data time granularity of 1 minute, with a data delay of at least 5 minutes, and allows you to query data from the last 186 days.
 *
 * @description - Currently, this operation is available only in the **China (Shanghai)** region.
 * - Batch queries are supported. You can query data for up to 500 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data from the last hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
 * **Time granularity of returned data**
 * The time granularity of returned data varies based on the time range specified by `StartTime` and `EndTime`. The following table describes the queryable historical data range and data delay for each time granularity:
 * |Time granularity  |Time range per query   |  Queryable historical data range  |  Data delay   |
 * | ------------- |------------   | ----------- | ----------- |
 * |1 minute  | Time range per query ≤ 1 hour   |7 days  |5 minutes  |
 * |5 minutes  | 1 hour < Time range per query < 3 days  |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time range per query < 31 days |186 days  |Typically 3 to 4 hours  |
 *
 * @param request DescribeVodDomainRealTimeQpsDataRequest
 * @return DescribeVodDomainRealTimeQpsDataResponse
 */
DescribeVodDomainRealTimeQpsDataResponse Client::describeVodDomainRealTimeQpsData(const DescribeVodDomainRealTimeQpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainRealTimeQpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the request hit ratio data for an accelerated domain name. The minimum time granularity for data queried by this operation is 1 minute. The data latency is at least 5 minutes. You can query data for up to the last 186 days.
 *
 * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
 * - Batch queries are supported. You can query data for up to 100 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data for the last 1 hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
 * - The Go language uses the POST method by default. Manually change the request method to GET by declaring `request.Method="GET"`.
 * **Time granularity of returned data**
 * The time granularity of returned data varies based on the time range specified by `StartTime` and `EndTime`. The following table describes the queryable historical data range and data latency for each time granularity:
 * |Time granularity  |Time range per query   |  Queryable historical data range  |  Data latency   |
 * | ------------- |------------   | ----------- | ----------- |
 * |1 minute  | Time range per query ≤ 1 hour   |7 days  |5 minutes  |
 * |5 minutes  | 1 hour < Time range per query < 3 days  |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time range per query < 31 days |186 days  |Typically 3 to 4 hours  |
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
 * @summary Queries the request hit ratio data for an accelerated domain name. The minimum time granularity for data queried by this operation is 1 minute. The data latency is at least 5 minutes. You can query data for up to the last 186 days.
 *
 * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
 * - Batch queries are supported. You can query data for up to 100 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data for the last 1 hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
 * - The Go language uses the POST method by default. Manually change the request method to GET by declaring `request.Method="GET"`.
 * **Time granularity of returned data**
 * The time granularity of returned data varies based on the time range specified by `StartTime` and `EndTime`. The following table describes the queryable historical data range and data latency for each time granularity:
 * |Time granularity  |Time range per query   |  Queryable historical data range  |  Data latency   |
 * | ------------- |------------   | ----------- | ----------- |
 * |1 minute  | Time range per query ≤ 1 hour   |7 days  |5 minutes  |
 * |5 minutes  | 1 hour < Time range per query < 3 days  |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time range per query < 31 days |186 days  |Typically 3 to 4 hours  |
 *
 * @param request DescribeVodDomainRealTimeReqHitRateDataRequest
 * @return DescribeVodDomainRealTimeReqHitRateDataResponse
 */
DescribeVodDomainRealTimeReqHitRateDataResponse Client::describeVodDomainRealTimeReqHitRateData(const DescribeVodDomainRealTimeReqHitRateDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainRealTimeReqHitRateDataWithOptions(request, runtime);
}

/**
 * @summary Invokes this operation to query the traffic data of an accelerated domain name. Compared with the DescribeVodDomainTrafficData operation, this operation supports a smaller time granularity (minimum of 1 minute), lower data latency (minimum of 5 minutes), but a shorter historical data range (up to 186 days).
 *
 * @description - The service address of this operation supports only **China (Shanghai)**.
 * - Batch queries are supported. You can query data for up to 100 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data for the last hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
 * **Time granularity of returned data**
 * The time granularity of returned data varies based on the time range specified by `StartTime` and `EndTime`. The following table describes the queryable historical data range and data latency for each time granularity:
 * |Time granularity  |Time range per query   |  Queryable historical data range  |  Data latency   |
 * | ------------- |------------   | ----------- | ----------- |
 * |1 minute  | Time range per query ≤ 1 hour   |7 days  |5 minutes  |
 * |5 minutes  | 1 hour < Time range per query < 3 days  |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time range per query < 31 days |186 days  |Generally 3 to 4 hours  |
 *
 * @param request DescribeVodDomainRealTimeTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainRealTimeTrafficDataResponse
 */
DescribeVodDomainRealTimeTrafficDataResponse Client::describeVodDomainRealTimeTrafficDataWithOptions(const DescribeVodDomainRealTimeTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Invokes this operation to query the traffic data of an accelerated domain name. Compared with the DescribeVodDomainTrafficData operation, this operation supports a smaller time granularity (minimum of 1 minute), lower data latency (minimum of 5 minutes), but a shorter historical data range (up to 186 days).
 *
 * @description - The service address of this operation supports only **China (Shanghai)**.
 * - Batch queries are supported. You can query data for up to 100 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data for the last hour by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
 * **Time granularity of returned data**
 * The time granularity of returned data varies based on the time range specified by `StartTime` and `EndTime`. The following table describes the queryable historical data range and data latency for each time granularity:
 * |Time granularity  |Time range per query   |  Queryable historical data range  |  Data latency   |
 * | ------------- |------------   | ----------- | ----------- |
 * |1 minute  | Time range per query ≤ 1 hour   |7 days  |5 minutes  |
 * |5 minutes  | 1 hour < Time range per query < 3 days  |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time range per query < 31 days |186 days  |Generally 3 to 4 hours  |
 *
 * @param request DescribeVodDomainRealTimeTrafficDataRequest
 * @return DescribeVodDomainRealTimeTrafficDataResponse
 */
DescribeVodDomainRealTimeTrafficDataResponse Client::describeVodDomainRealTimeTrafficData(const DescribeVodDomainRealTimeTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainRealTimeTrafficDataWithOptions(request, runtime);
}

/**
 * @summary Queries the request hit ratio (percentage of hit requests) of an accelerated domain name.
 *
 * @description - Currently, this operation supports only the following service address: **China (Shanghai)**.
 * - Batch query is supported. You can query data of up to 500 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data of the last 24 hours by default. If you specify `StartTime` and `EndTime`, this operation returns data of the specified time range.
 * **Time granularity of returned data**
 * Based on the time span specified by `StartTime` and `EndTime`, and when `Interval` is not set, the default time granularity of returned data, the queryable historical data time range, and data latency are as follows:
 * |Time granularity  |Time span per query   |  Queryable historical data time range  |  Data latency   |
 * | ------------- |------------   | ----------- | ----------- |
 * |5 minutes  | Time span per query < 3 days   |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time span per query < 31 days  |186 days  |Generally 3 to 4 hours  |
 * | 1 day | 31 days ≤ Time span per query ≤ 90 days |366 days  |Generally 4 hours, no more than 24 hours  |
 *
 * @param request DescribeVodDomainReqHitRateDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainReqHitRateDataResponse
 */
DescribeVodDomainReqHitRateDataResponse Client::describeVodDomainReqHitRateDataWithOptions(const DescribeVodDomainReqHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the request hit ratio (percentage of hit requests) of an accelerated domain name.
 *
 * @description - Currently, this operation supports only the following service address: **China (Shanghai)**.
 * - Batch query is supported. You can query data of up to 500 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data of the last 24 hours by default. If you specify `StartTime` and `EndTime`, this operation returns data of the specified time range.
 * **Time granularity of returned data**
 * Based on the time span specified by `StartTime` and `EndTime`, and when `Interval` is not set, the default time granularity of returned data, the queryable historical data time range, and data latency are as follows:
 * |Time granularity  |Time span per query   |  Queryable historical data time range  |  Data latency   |
 * | ------------- |------------   | ----------- | ----------- |
 * |5 minutes  | Time span per query < 3 days   |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time span per query < 31 days  |186 days  |Generally 3 to 4 hours  |
 * | 1 day | 31 days ≤ Time span per query ≤ 90 days |366 days  |Generally 4 hours, no more than 24 hours  |
 *
 * @param request DescribeVodDomainReqHitRateDataRequest
 * @return DescribeVodDomainReqHitRateDataResponse
 */
DescribeVodDomainReqHitRateDataResponse Client::describeVodDomainReqHitRateData(const DescribeVodDomainReqHitRateDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainReqHitRateDataWithOptions(request, runtime);
}

/**
 * @summary Queries the back-to-origin bandwidth data of accelerated domain names.
 *
 * @description - Currently, this operation supports only the following service address: **China (Shanghai)**.
 * - Batch queries are supported. You can query data for up to 500 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data from the past 24 hours by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
 * **Time granularity of returned data**
 * Based on the time span specified by `StartTime` and `EndTime`, and when `Interval` is not set, the default time granularity of returned data, the queryable historical data range, and data latency are as follows:
 * |Time granularity  |Time span per query   |  Queryable historical data range  |  Data latency   |
 * | ------------- |------------   | ----------- | ----------- |
 * |5 minutes  | Time span per query < 3 days   |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time span per query < 31 days  |186 days  |Generally 3 to 4 hours  |
 * | 1 day | 31 days ≤ Time span per query ≤ 366 days |366 days  |Generally 4 hours, up to 24 hours  |
 *
 * @param request DescribeVodDomainSrcBpsDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainSrcBpsDataResponse
 */
DescribeVodDomainSrcBpsDataResponse Client::describeVodDomainSrcBpsDataWithOptions(const DescribeVodDomainSrcBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the back-to-origin bandwidth data of accelerated domain names.
 *
 * @description - Currently, this operation supports only the following service address: **China (Shanghai)**.
 * - Batch queries are supported. You can query data for up to 500 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data from the past 24 hours by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
 * **Time granularity of returned data**
 * Based on the time span specified by `StartTime` and `EndTime`, and when `Interval` is not set, the default time granularity of returned data, the queryable historical data range, and data latency are as follows:
 * |Time granularity  |Time span per query   |  Queryable historical data range  |  Data latency   |
 * | ------------- |------------   | ----------- | ----------- |
 * |5 minutes  | Time span per query < 3 days   |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time span per query < 31 days  |186 days  |Generally 3 to 4 hours  |
 * | 1 day | 31 days ≤ Time span per query ≤ 366 days |366 days  |Generally 4 hours, up to 24 hours  |
 *
 * @param request DescribeVodDomainSrcBpsDataRequest
 * @return DescribeVodDomainSrcBpsDataResponse
 */
DescribeVodDomainSrcBpsDataResponse Client::describeVodDomainSrcBpsData(const DescribeVodDomainSrcBpsDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainSrcBpsDataWithOptions(request, runtime);
}

/**
 * @summary Queries the back-to-origin traffic data of accelerated domain names.
 *
 * @description - Currently, this operation supports only the following service address: **China (Shanghai)**.
 * - Batch queries are supported. You can query data for up to 500 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data from the past 24 hours by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
 * **Time granularity of returned data**
 * Based on the time span specified by `StartTime` and `EndTime`, and when `Interval` is not set at the same time, the default time granularity, the queryable historical data range, and data delay are as follows:
 * |Time granularity  |Time span per query   |  Queryable historical data range  |  Data delay   |
 * | ------------- |------------   | ----------- | ----------- |
 * |5 minutes  | Time span per query < 3 days   |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time span per query < 31 days  |186 days  |Generally 3 to 4 hours  |
 * | 1 day | 31 days ≤ Time span per query ≤ 366 days |366 days  |Generally 4 hours, up to 24 hours  |
 *
 * @param request DescribeVodDomainSrcTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainSrcTrafficDataResponse
 */
DescribeVodDomainSrcTrafficDataResponse Client::describeVodDomainSrcTrafficDataWithOptions(const DescribeVodDomainSrcTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the back-to-origin traffic data of accelerated domain names.
 *
 * @description - Currently, this operation supports only the following service address: **China (Shanghai)**.
 * - Batch queries are supported. You can query data for up to 500 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, this operation returns data from the past 24 hours by default. If you specify `StartTime` and `EndTime`, this operation returns data for the specified time range.
 * **Time granularity of returned data**
 * Based on the time span specified by `StartTime` and `EndTime`, and when `Interval` is not set at the same time, the default time granularity, the queryable historical data range, and data delay are as follows:
 * |Time granularity  |Time span per query   |  Queryable historical data range  |  Data delay   |
 * | ------------- |------------   | ----------- | ----------- |
 * |5 minutes  | Time span per query < 3 days   |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time span per query < 31 days  |186 days  |Generally 3 to 4 hours  |
 * | 1 day | 31 days ≤ Time span per query ≤ 366 days |366 days  |Generally 4 hours, up to 24 hours  |
 *
 * @param request DescribeVodDomainSrcTrafficDataRequest
 * @return DescribeVodDomainSrcTrafficDataResponse
 */
DescribeVodDomainSrcTrafficDataResponse Client::describeVodDomainSrcTrafficData(const DescribeVodDomainSrcTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainSrcTrafficDataWithOptions(request, runtime);
}

/**
 * @summary Invokes this operation to query the traffic data of an accelerated domain name. Compared with the DescribeVodDomainRealTimeTrafficData operation, this operation supports a longer historical data query range (up to 366 days) but provides a larger data time granularity (minimum of 5 minutes) and higher data latency.
 *
 * @description - The service address of this operation supports only **China (Shanghai)**.
 * - Batch queries are supported. You can query data for up to 500 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, data of the last 24 hours is returned by default. If you specify `StartTime` and `EndTime`, data of the specified time range is returned.
 * **Data time granularity of returned data**
 * The following table describes the default data time granularity of returned data, the queryable historical data range, and the data latency based on the time span specified by `StartTime` and `EndTime` when `Interval` is not set:
 * |Time granularity  |Time span per query   |  Queryable historical data range  |  Data latency   |
 * | ------------- |------------   | ----------- | ----------- |
 * |5 minutes  | Time span per query < 3 days   |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time span per query < 31 days  |186 days  |Typically 3 to 4 hours  |
 * | 1 day | 31 days ≤ Time span per query ≤ 366 days |366 days  |Typically 4 hours, up to 24 hours  |
 *
 * @param request DescribeVodDomainTrafficDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainTrafficDataResponse
 */
DescribeVodDomainTrafficDataResponse Client::describeVodDomainTrafficDataWithOptions(const DescribeVodDomainTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Invokes this operation to query the traffic data of an accelerated domain name. Compared with the DescribeVodDomainRealTimeTrafficData operation, this operation supports a longer historical data query range (up to 366 days) but provides a larger data time granularity (minimum of 5 minutes) and higher data latency.
 *
 * @description - The service address of this operation supports only **China (Shanghai)**.
 * - Batch queries are supported. You can query data for up to 500 domain names at a time.
 * - If you do not specify `StartTime` and `EndTime`, data of the last 24 hours is returned by default. If you specify `StartTime` and `EndTime`, data of the specified time range is returned.
 * **Data time granularity of returned data**
 * The following table describes the default data time granularity of returned data, the queryable historical data range, and the data latency based on the time span specified by `StartTime` and `EndTime` when `Interval` is not set:
 * |Time granularity  |Time span per query   |  Queryable historical data range  |  Data latency   |
 * | ------------- |------------   | ----------- | ----------- |
 * |5 minutes  | Time span per query < 3 days   |93 days  |15 minutes  |
 * |1 hour  | 3 days ≤ Time span per query < 31 days  |186 days  |Typically 3 to 4 hours  |
 * | 1 day | 31 days ≤ Time span per query ≤ 366 days |366 days  |Typically 4 hours, up to 24 hours  |
 *
 * @param request DescribeVodDomainTrafficDataRequest
 * @return DescribeVodDomainTrafficDataResponse
 */
DescribeVodDomainTrafficDataResponse Client::describeVodDomainTrafficData(const DescribeVodDomainTrafficDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainTrafficDataWithOptions(request, runtime);
}

/**
 * @summary Queries acceleration traffic or bandwidth usage data.
 *
 * @description - Currently, the only supported service region is **China (Shanghai)**.
 * - Batch domain name queries are supported. Separate multiple domain names with commas (,). You can query up to 100 domain names at a time. If this parameter is left empty, data for all domain names under the account is returned.
 * - You can query data for up to the last year. The maximum time span for a single query is 3 months. If the query time range is 1 to 3 days, data is returned at hourly granularity. If the query time range is 4 days or more, data is returned at daily granularity.
 *
 * @param request DescribeVodDomainUsageDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodDomainUsageDataResponse
 */
DescribeVodDomainUsageDataResponse Client::describeVodDomainUsageDataWithOptions(const DescribeVodDomainUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArea()) {
    query["Area"] = request.getArea();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasField()) {
    query["Field"] = request.getField();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Queries acceleration traffic or bandwidth usage data.
 *
 * @description - Currently, the only supported service region is **China (Shanghai)**.
 * - Batch domain name queries are supported. Separate multiple domain names with commas (,). You can query up to 100 domain names at a time. If this parameter is left empty, data for all domain names under the account is returned.
 * - You can query data for up to the last year. The maximum time span for a single query is 3 months. If the query time range is 1 to 3 days, data is returned at hourly granularity. If the query time range is 4 days or more, data is returned at daily granularity.
 *
 * @param request DescribeVodDomainUsageDataRequest
 * @return DescribeVodDomainUsageDataResponse
 */
DescribeVodDomainUsageDataResponse Client::describeVodDomainUsageData(const DescribeVodDomainUsageDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodDomainUsageDataWithOptions(request, runtime);
}

/**
 * @summary Queries the usage data of online editing in ApsaraVideo VOD.
 *
 * @description - Single user call frequency: 10 calls per second.
 * **Supported time granularities**:
 * The adaptive time granularity and the maximum time range for historical data queries vary based on the maximum time span per query.
 * | Time granularity          | Maximum time span per query            | Maximum time range for historical data queries    |
 * | -------------- | -------------- | ------ |
 * | 1 hour       | 7 days      |   31 days  | 
 * | 1 day  | 31 days     |    366 days  |
 *
 * @param request DescribeVodEditingUsageDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodEditingUsageDataResponse
 */
DescribeVodEditingUsageDataResponse Client::describeVodEditingUsageDataWithOptions(const DescribeVodEditingUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasSpecification()) {
    query["Specification"] = request.getSpecification();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the usage data of online editing in ApsaraVideo VOD.
 *
 * @description - Single user call frequency: 10 calls per second.
 * **Supported time granularities**:
 * The adaptive time granularity and the maximum time range for historical data queries vary based on the maximum time span per query.
 * | Time granularity          | Maximum time span per query            | Maximum time range for historical data queries    |
 * | -------------- | -------------- | ------ |
 * | 1 hour       | 7 days      |   31 days  | 
 * | 1 day  | 31 days     |    366 days  |
 *
 * @param request DescribeVodEditingUsageDataRequest
 * @return DescribeVodEditingUsageDataResponse
 */
DescribeVodEditingUsageDataResponse Client::describeVodEditingUsageData(const DescribeVodEditingUsageDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodEditingUsageDataWithOptions(request, runtime);
}

/**
 * @summary Retrieves playback data of an audio or video file on a specified date by media ID (audio or video ID), including the number of unique visitors, average plays per user, total plays, average play duration per user, and total play duration.
 *
 * @description - Currently, this operation is available only in the **China (Shanghai)** region.
 * - Only playback data collected by ApsaraVideo Player SDK is supported. Traffic statistics for audio-only streams are not supported.
 * - Only data within the last 30 days can be queried.
 * >Notice: - Before calling this operation, make sure that ApsaraVideo Player SDK meets the following conditions:
 *   - Android Player SDK or iOS Player SDK
 *     - The Player SDK version is 5.4.9.2 or later.
 *     - A License for the Player SDK has been obtained and integrated. For more information, see [License management](https://help.aliyun.com/document_detail/469166.html).
 *     - The event tracking log reporting feature of the Player SDK is enabled. By default, this feature is enabled in ApsaraVideo Player SDK. For more information, see [Create a player for Android](~~311525#section-dc4-gp6-xk2~~) and [Create a player for iOS](~~313855#section-cmf-k7d-jg5~~).
 *   - Web Player SDK
 *      - The Player SDK version is 2.16.0 or later.
 *     - A License for **Playback Quality Monitoring** has been obtained and integrated. Submit the [Web Player SDK value-added service application form](https://yida.alibaba-inc.com/o/webplayer#/) to apply. For the License integration method, see the `license` property in [Web SDK API reference](~~125572#section-3ty-gwp-6pa~~).
 *     - The event tracking log reporting feature of the Player SDK is enabled. By default, this feature is enabled in ApsaraVideo Player SDK.
 *
 * @param request DescribeVodMediaPlayDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodMediaPlayDataResponse
 */
DescribeVodMediaPlayDataResponse Client::describeVodMediaPlayDataWithOptions(const DescribeVodMediaPlayDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasOrderName()) {
    query["OrderName"] = request.getOrderName();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasOs()) {
    query["Os"] = request.getOs();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPlayDate()) {
    query["PlayDate"] = request.getPlayDate();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasTerminalType()) {
    query["TerminalType"] = request.getTerminalType();
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
 * @summary Retrieves playback data of an audio or video file on a specified date by media ID (audio or video ID), including the number of unique visitors, average plays per user, total plays, average play duration per user, and total play duration.
 *
 * @description - Currently, this operation is available only in the **China (Shanghai)** region.
 * - Only playback data collected by ApsaraVideo Player SDK is supported. Traffic statistics for audio-only streams are not supported.
 * - Only data within the last 30 days can be queried.
 * >Notice: - Before calling this operation, make sure that ApsaraVideo Player SDK meets the following conditions:
 *   - Android Player SDK or iOS Player SDK
 *     - The Player SDK version is 5.4.9.2 or later.
 *     - A License for the Player SDK has been obtained and integrated. For more information, see [License management](https://help.aliyun.com/document_detail/469166.html).
 *     - The event tracking log reporting feature of the Player SDK is enabled. By default, this feature is enabled in ApsaraVideo Player SDK. For more information, see [Create a player for Android](~~311525#section-dc4-gp6-xk2~~) and [Create a player for iOS](~~313855#section-cmf-k7d-jg5~~).
 *   - Web Player SDK
 *      - The Player SDK version is 2.16.0 or later.
 *     - A License for **Playback Quality Monitoring** has been obtained and integrated. Submit the [Web Player SDK value-added service application form](https://yida.alibaba-inc.com/o/webplayer#/) to apply. For the License integration method, see the `license` property in [Web SDK API reference](~~125572#section-3ty-gwp-6pa~~).
 *     - The event tracking log reporting feature of the Player SDK is enabled. By default, this feature is enabled in ApsaraVideo Player SDK.
 *
 * @param request DescribeVodMediaPlayDataRequest
 * @return DescribeVodMediaPlayDataResponse
 */
DescribeVodMediaPlayDataResponse Client::describeVodMediaPlayData(const DescribeVodMediaPlayDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodMediaPlayDataWithOptions(request, runtime);
}

/**
 * @summary Queries aggregated playback data of the player.
 *
 * @param request DescribeVodPlayerCollectDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodPlayerCollectDataResponse
 */
DescribeVodPlayerCollectDataResponse Client::describeVodPlayerCollectDataWithOptions(const DescribeVodPlayerCollectDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasMetrics()) {
    query["Metrics"] = request.getMetrics();
  }

  if (!!request.hasOs()) {
    query["Os"] = request.getOs();
  }

  if (!!request.hasPeriod()) {
    query["Period"] = request.getPeriod();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTerminalType()) {
    query["TerminalType"] = request.getTerminalType();
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
 * @summary Queries aggregated playback data of the player.
 *
 * @param request DescribeVodPlayerCollectDataRequest
 * @return DescribeVodPlayerCollectDataResponse
 */
DescribeVodPlayerCollectDataResponse Client::describeVodPlayerCollectData(const DescribeVodPlayerCollectDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodPlayerCollectDataWithOptions(request, runtime);
}

/**
 * @summary Queries the dimension metadata of the player.
 *
 * @param request DescribeVodPlayerDimensionDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodPlayerDimensionDataResponse
 */
DescribeVodPlayerDimensionDataResponse Client::describeVodPlayerDimensionDataWithOptions(const DescribeVodPlayerDimensionDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasDimension()) {
    query["Dimension"] = request.getDimension();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the dimension metadata of the player.
 *
 * @param request DescribeVodPlayerDimensionDataRequest
 * @return DescribeVodPlayerDimensionDataResponse
 */
DescribeVodPlayerDimensionDataResponse Client::describeVodPlayerDimensionData(const DescribeVodPlayerDimensionDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodPlayerDimensionDataWithOptions(request, runtime);
}

/**
 * @summary Queries player metric data.
 *
 * @param request DescribeVodPlayerMetricDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodPlayerMetricDataResponse
 */
DescribeVodPlayerMetricDataResponse Client::describeVodPlayerMetricDataWithOptions(const DescribeVodPlayerMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFilters()) {
    query["Filters"] = request.getFilters();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasMetrics()) {
    query["Metrics"] = request.getMetrics();
  }

  if (!!request.hasOs()) {
    query["Os"] = request.getOs();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTerminalType()) {
    query["TerminalType"] = request.getTerminalType();
  }

  if (!!request.hasTop()) {
    query["Top"] = request.getTop();
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
 * @summary Queries player metric data.
 *
 * @param request DescribeVodPlayerMetricDataRequest
 * @return DescribeVodPlayerMetricDataResponse
 */
DescribeVodPlayerMetricDataResponse Client::describeVodPlayerMetricData(const DescribeVodPlayerMetricDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodPlayerMetricDataWithOptions(request, runtime);
}

/**
 * @summary Queries access data for an accelerated domain name by ISP or region, including bandwidth, average response rate, page views, cache hit ratio, and request hit ratio.
 *
 * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
 * - The maximum time range for a single query (the time range between StartTime and EndTime) is 1 hour.
 * **Supported time granularities**
 * Based on the time range specified by `StartTime` and `EndTime`, the default data timestamp granularity, queryable historical data range, and data latency are as follows:
 * |Time granularity	|Time range per query|Queryable historical data range|Data latency|
 * | ------------- |------------   | ----------- | ----------- |
 * |5 minutes	|≤ 1 hour	|93 days	|15 minutes|
 *
 * @param request DescribeVodRangeDataByLocateAndIspServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodRangeDataByLocateAndIspServiceResponse
 */
DescribeVodRangeDataByLocateAndIspServiceResponse Client::describeVodRangeDataByLocateAndIspServiceWithOptions(const DescribeVodRangeDataByLocateAndIspServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIspNameEn()) {
    query["IspNameEn"] = request.getIspNameEn();
  }

  if (!!request.hasLocationNameEn()) {
    query["LocationNameEn"] = request.getLocationNameEn();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries access data for an accelerated domain name by ISP or region, including bandwidth, average response rate, page views, cache hit ratio, and request hit ratio.
 *
 * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
 * - The maximum time range for a single query (the time range between StartTime and EndTime) is 1 hour.
 * **Supported time granularities**
 * Based on the time range specified by `StartTime` and `EndTime`, the default data timestamp granularity, queryable historical data range, and data latency are as follows:
 * |Time granularity	|Time range per query|Queryable historical data range|Data latency|
 * | ------------- |------------   | ----------- | ----------- |
 * |5 minutes	|≤ 1 hour	|93 days	|15 minutes|
 *
 * @param request DescribeVodRangeDataByLocateAndIspServiceRequest
 * @return DescribeVodRangeDataByLocateAndIspServiceResponse
 */
DescribeVodRangeDataByLocateAndIspServiceResponse Client::describeVodRangeDataByLocateAndIspService(const DescribeVodRangeDataByLocateAndIspServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodRangeDataByLocateAndIspServiceWithOptions(request, runtime);
}

/**
 * @summary Queries the maximum number and remaining daily quota of URLs and directories for purge and prefetch operations.
 *
 * @description - Currently, the service address supports only **China (Shanghai)**.
 * - Purge and prefetch operations include the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) purge operation and the [PreloadVodObjectCaches](https://help.aliyun.com/document_detail/69211.html) prefetch operation.
 *
 * @param request DescribeVodRefreshQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodRefreshQuotaResponse
 */
DescribeVodRefreshQuotaResponse Client::describeVodRefreshQuotaWithOptions(const DescribeVodRefreshQuotaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
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
 * @summary Queries the maximum number and remaining daily quota of URLs and directories for purge and prefetch operations.
 *
 * @description - Currently, the service address supports only **China (Shanghai)**.
 * - Purge and prefetch operations include the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) purge operation and the [PreloadVodObjectCaches](https://help.aliyun.com/document_detail/69211.html) prefetch operation.
 *
 * @param request DescribeVodRefreshQuotaRequest
 * @return DescribeVodRefreshQuotaResponse
 */
DescribeVodRefreshQuotaResponse Client::describeVodRefreshQuota(const DescribeVodRefreshQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodRefreshQuotaWithOptions(request, runtime);
}

/**
 * @summary Queries whether purge and prefetch tasks have taken effect.
 *
 * @description - Currently, the service address supports only **China (Shanghai)**.
 * - If neither Taskid nor Objectpath is specified, the first page of data (20 entries) within the last 3 days is returned by default. Taskid and Objectpath can be specified at the same time.
 * - When DomainName or Status is specified, ObjectType is required.
 *
 * @param request DescribeVodRefreshTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodRefreshTasksResponse
 */
DescribeVodRefreshTasksResponse Client::describeVodRefreshTasksWithOptions(const DescribeVodRefreshTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasObjectPath()) {
    query["ObjectPath"] = request.getObjectPath();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.getObjectType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Queries whether purge and prefetch tasks have taken effect.
 *
 * @description - Currently, the service address supports only **China (Shanghai)**.
 * - If neither Taskid nor Objectpath is specified, the first page of data (20 entries) within the last 3 days is returned by default. Taskid and Objectpath can be specified at the same time.
 * - When DomainName or Status is specified, ObjectType is required.
 *
 * @param request DescribeVodRefreshTasksRequest
 * @return DescribeVodRefreshTasksResponse
 */
DescribeVodRefreshTasksResponse Client::describeVodRefreshTasks(const DescribeVodRefreshTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodRefreshTasksWithOptions(request, runtime);
}

/**
 * @summary Queries certificate list information by domain name.
 *
 * @description This operation currently supports only the **China (Shanghai)** region.
 *
 * @param request DescribeVodSSLCertificateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodSSLCertificateListResponse
 */
DescribeVodSSLCertificateListResponse Client::describeVodSSLCertificateListWithOptions(const DescribeVodSSLCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchKeyword()) {
    query["SearchKeyword"] = request.getSearchKeyword();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
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
 * @summary Queries certificate list information by domain name.
 *
 * @description This operation currently supports only the **China (Shanghai)** region.
 *
 * @param request DescribeVodSSLCertificateListRequest
 * @return DescribeVodSSLCertificateListResponse
 */
DescribeVodSSLCertificateListResponse Client::describeVodSSLCertificateList(const DescribeVodSSLCertificateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodSSLCertificateListWithOptions(request, runtime);
}

/**
 * @summary Queries the usage of media asset management, including storage space and outbound storage traffic.
 *
 * @description - Currently, the service address supports only **China (Shanghai)**.
 * - If the interval between the start time and end time is within 7 days, hourly data is returned. If the interval is greater than 7 days, daily data is returned. The maximum interval is 31 days.
 *
 * @param request DescribeVodStorageDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodStorageDataResponse
 */
DescribeVodStorageDataResponse Client::describeVodStorageDataWithOptions(const DescribeVodStorageDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStorage()) {
    query["Storage"] = request.getStorage();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.getStorageType();
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
 * @summary Queries the usage of media asset management, including storage space and outbound storage traffic.
 *
 * @description - Currently, the service address supports only **China (Shanghai)**.
 * - If the interval between the start time and end time is within 7 days, hourly data is returned. If the interval is greater than 7 days, daily data is returned. The maximum interval is 31 days.
 *
 * @param request DescribeVodStorageDataRequest
 * @return DescribeVodStorageDataResponse
 */
DescribeVodStorageDataResponse Client::describeVodStorageData(const DescribeVodStorageDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodStorageDataWithOptions(request, runtime);
}

/**
 * @summary Queries the usage of tiered storage for media asset management.
 *
 * @description - Currently, the service is available only in the **China (Shanghai)** region.
 * - If the query time range is within 7 days, hourly data is returned. If the query time range is greater than 7 days, daily data is returned. The maximum time range is 31 days.
 *
 * @param request DescribeVodTieringStorageDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodTieringStorageDataResponse
 */
DescribeVodTieringStorageDataResponse Client::describeVodTieringStorageDataWithOptions(const DescribeVodTieringStorageDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStorageClass()) {
    query["StorageClass"] = request.getStorageClass();
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
 * @summary Queries the usage of tiered storage for media asset management.
 *
 * @description - Currently, the service is available only in the **China (Shanghai)** region.
 * - If the query time range is within 7 days, hourly data is returned. If the query time range is greater than 7 days, daily data is returned. The maximum time range is 31 days.
 *
 * @param request DescribeVodTieringStorageDataRequest
 * @return DescribeVodTieringStorageDataResponse
 */
DescribeVodTieringStorageDataResponse Client::describeVodTieringStorageData(const DescribeVodTieringStorageDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodTieringStorageDataWithOptions(request, runtime);
}

/**
 * @summary Queries the retrieval data usage of tiered storage in media asset management.
 *
 * @description > - Currently, the service address supports only **China (Shanghai)**.
 * > - If the query time interval is within 7 days, data at the hour granularity is returned. If the query time interval is greater than 7 days, data at the day granularity is returned. The maximum interval is 31 days.
 *
 * @param request DescribeVodTieringStorageRetrievalDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodTieringStorageRetrievalDataResponse
 */
DescribeVodTieringStorageRetrievalDataResponse Client::describeVodTieringStorageRetrievalDataWithOptions(const DescribeVodTieringStorageRetrievalDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStorageClass()) {
    query["StorageClass"] = request.getStorageClass();
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
 * @summary Queries the retrieval data usage of tiered storage in media asset management.
 *
 * @description > - Currently, the service address supports only **China (Shanghai)**.
 * > - If the query time interval is within 7 days, data at the hour granularity is returned. If the query time interval is greater than 7 days, data at the day granularity is returned. The maximum interval is 31 days.
 *
 * @param request DescribeVodTieringStorageRetrievalDataRequest
 * @return DescribeVodTieringStorageRetrievalDataResponse
 */
DescribeVodTieringStorageRetrievalDataResponse Client::describeVodTieringStorageRetrievalData(const DescribeVodTieringStorageRetrievalDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodTieringStorageRetrievalDataWithOptions(request, runtime);
}

/**
 * @summary Queries transcoding usage data.
 *
 * @description - Currently, the only supported service region is **China (Shanghai)**.
 * - If the interval between the start time and end time is within 7 days, hourly data is returned. If the interval is greater than 7 days, daily data is returned. The maximum interval is 31 days.
 *
 * @param request DescribeVodTranscodeDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodTranscodeDataResponse
 */
DescribeVodTranscodeDataResponse Client::describeVodTranscodeDataWithOptions(const DescribeVodTranscodeDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasSpecification()) {
    query["Specification"] = request.getSpecification();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStorage()) {
    query["Storage"] = request.getStorage();
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
 * @summary Queries transcoding usage data.
 *
 * @description - Currently, the only supported service region is **China (Shanghai)**.
 * - If the interval between the start time and end time is within 7 days, hourly data is returned. If the interval is greater than 7 days, daily data is returned. The maximum interval is 31 days.
 *
 * @param request DescribeVodTranscodeDataRequest
 * @return DescribeVodTranscodeDataResponse
 */
DescribeVodTranscodeDataResponse Client::describeVodTranscodeData(const DescribeVodTranscodeDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodTranscodeDataWithOptions(request, runtime);
}

/**
 * @summary Queries the list of all acceleration domain names under your account for ApsaraVideo VOD.
 *
 * @description - Supports fuzzy match filtering by domain name and filtering by domain name status.
 * - This operation currently supports only the following region: **China (Shanghai)**.
 *
 * @param request DescribeVodUserDomainsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodUserDomainsResponse
 */
DescribeVodUserDomainsResponse Client::describeVodUserDomainsWithOptions(const DescribeVodUserDomainsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasDomainSearchType()) {
    query["DomainSearchType"] = request.getDomainSearchType();
  }

  if (!!request.hasDomainStatus()) {
    query["DomainStatus"] = request.getDomainStatus();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary Queries the list of all acceleration domain names under your account for ApsaraVideo VOD.
 *
 * @description - Supports fuzzy match filtering by domain name and filtering by domain name status.
 * - This operation currently supports only the following region: **China (Shanghai)**.
 *
 * @param request DescribeVodUserDomainsRequest
 * @return DescribeVodUserDomainsResponse
 */
DescribeVodUserDomainsResponse Client::describeVodUserDomains(const DescribeVodUserDomainsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodUserDomainsWithOptions(request, runtime);
}

/**
 * @summary Queries the IP list of a domain name.
 *
 * @description This operation is supported only in the China (Shanghai) region.
 *
 * @param request DescribeVodUserVipsByDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodUserVipsByDomainResponse
 */
DescribeVodUserVipsByDomainResponse Client::describeVodUserVipsByDomainWithOptions(const DescribeVodUserVipsByDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAvailable()) {
    query["Available"] = request.getAvailable();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Queries the IP list of a domain name.
 *
 * @description This operation is supported only in the China (Shanghai) region.
 *
 * @param request DescribeVodUserVipsByDomainRequest
 * @return DescribeVodUserVipsByDomainResponse
 */
DescribeVodUserVipsByDomainResponse Client::describeVodUserVipsByDomain(const DescribeVodUserVipsByDomainRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodUserVipsByDomainWithOptions(request, runtime);
}

/**
 * @summary Retrieves the domain ownership verification content.
 *
 * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
 *
 * @param request DescribeVodVerifyContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVodVerifyContentResponse
 */
DescribeVodVerifyContentResponse Client::describeVodVerifyContentWithOptions(const DescribeVodVerifyContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Retrieves the domain ownership verification content.
 *
 * @description - Currently, this operation is supported only in the **China (Shanghai)** region.
 *
 * @param request DescribeVodVerifyContentRequest
 * @return DescribeVodVerifyContentResponse
 */
DescribeVodVerifyContentResponse Client::describeVodVerifyContent(const DescribeVodVerifyContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVodVerifyContentWithOptions(request, runtime);
}

/**
 * @summary Invokes this operation to revoke application authorization from a specified account identity (Resource Access Management (RAM) user or RAM role).
 *
 * @description >Notice: Each Resource Access Management (RAM) user or RAM role can be granted permissions for up to 10 applications.
 * -  If the policy name is **VODAppAdministratorAccess**, **AppId** is optional. For other policies, **AppId** is required.
 *
 * @param request DetachAppPolicyFromIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetachAppPolicyFromIdentityResponse
 */
DetachAppPolicyFromIdentityResponse Client::detachAppPolicyFromIdentityWithOptions(const DetachAppPolicyFromIdentityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasIdentityName()) {
    query["IdentityName"] = request.getIdentityName();
  }

  if (!!request.hasIdentityType()) {
    query["IdentityType"] = request.getIdentityType();
  }

  if (!!request.hasPolicyNames()) {
    query["PolicyNames"] = request.getPolicyNames();
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
 * @summary Invokes this operation to revoke application authorization from a specified account identity (Resource Access Management (RAM) user or RAM role).
 *
 * @description >Notice: Each Resource Access Management (RAM) user or RAM role can be granted permissions for up to 10 applications.
 * -  If the policy name is **VODAppAdministratorAccess**, **AppId** is optional. For other policies, **AppId** is required.
 *
 * @param request DetachAppPolicyFromIdentityRequest
 * @return DetachAppPolicyFromIdentityResponse
 */
DetachAppPolicyFromIdentityResponse Client::detachAppPolicyFromIdentity(const DetachAppPolicyFromIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detachAppPolicyFromIdentityWithOptions(request, runtime);
}

/**
 * @summary Generates a key for secure download. The secure download feature of ApsaraVideo Player SDK encrypts videos downloaded to local devices by using a key file. The encrypted videos can only be decrypted and played by using the key file generated by the unique app that is bindable in advance. This effectively protects video content and prevents downloaded videos from being maliciously played or distributed.
 *
 * @description - To use the secure download feature, first enable the download feature in the ApsaraVideo VOD console and set the download method to secure download. For more information, see [Download settings](https://help.aliyun.com/document_detail/86107.html).
 * - After generating a key for secure download, configure the key in ApsaraVideo Player SDK. For more information, see [Secure download](https://help.aliyun.com/document_detail/124735.html).
 *
 * @param request GenerateDownloadSecretKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateDownloadSecretKeyResponse
 */
GenerateDownloadSecretKeyResponse Client::generateDownloadSecretKeyWithOptions(const GenerateDownloadSecretKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppDecryptKey()) {
    query["AppDecryptKey"] = request.getAppDecryptKey();
  }

  if (!!request.hasAppIdentification()) {
    query["AppIdentification"] = request.getAppIdentification();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Generates a key for secure download. The secure download feature of ApsaraVideo Player SDK encrypts videos downloaded to local devices by using a key file. The encrypted videos can only be decrypted and played by using the key file generated by the unique app that is bindable in advance. This effectively protects video content and prevents downloaded videos from being maliciously played or distributed.
 *
 * @description - To use the secure download feature, first enable the download feature in the ApsaraVideo VOD console and set the download method to secure download. For more information, see [Download settings](https://help.aliyun.com/document_detail/86107.html).
 * - After generating a key for secure download, configure the key in ApsaraVideo Player SDK. For more information, see [Secure download](https://help.aliyun.com/document_detail/124735.html).
 *
 * @param request GenerateDownloadSecretKeyRequest
 * @return GenerateDownloadSecretKeyResponse
 */
GenerateDownloadSecretKeyResponse Client::generateDownloadSecretKey(const GenerateDownloadSecretKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateDownloadSecretKeyWithOptions(request, runtime);
}

/**
 * @summary Invokes the operation to generate a random KMS data key (DK) for ApsaraVideo VOD HLS encryption.
 *
 * @param request GenerateKMSDataKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateKMSDataKeyResponse
 */
GenerateKMSDataKeyResponse Client::generateKMSDataKeyWithOptions(const GenerateKMSDataKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Invokes the operation to generate a random KMS data key (DK) for ApsaraVideo VOD HLS encryption.
 *
 * @param request GenerateKMSDataKeyRequest
 * @return GenerateKMSDataKeyResponse
 */
GenerateKMSDataKeyResponse Client::generateKMSDataKey(const GenerateKMSDataKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateKMSDataKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the list of AI image processing tasks.
 *
 * @description -  Currently, this operation is supported in the following regions: **China (Beijing)** and **China (Shanghai)**.
 * - Call the [SubmitAIImageJob](~~SubmitAIImageJob~~) operation to submit an AI image processing task before you call this operation to query the list of AI image tasks.
 * - You can query up to 10 AI image processing tasks at a time.
 *
 * @param request GetAIImageJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAIImageJobsResponse
 */
GetAIImageJobsResponse Client::getAIImageJobsWithOptions(const GetAIImageJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobIds()) {
    query["JobIds"] = request.getJobIds();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Queries the list of AI image processing tasks.
 *
 * @description -  Currently, this operation is supported in the following regions: **China (Beijing)** and **China (Shanghai)**.
 * - Call the [SubmitAIImageJob](~~SubmitAIImageJob~~) operation to submit an AI image processing task before you call this operation to query the list of AI image tasks.
 * - You can query up to 10 AI image processing tasks at a time.
 *
 * @param request GetAIImageJobsRequest
 * @return GetAIImageJobsResponse
 */
GetAIImageJobsResponse Client::getAIImageJobs(const GetAIImageJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAIImageJobsWithOptions(request, runtime);
}

/**
 * @summary Queries an automated review job. After you submit an AI job, the job is processed asynchronously. You can call this operation to query job information in real time.
 *
 * @description <props="intl">
 * - This operation is supported only in the Singapore region.
 * - Image resources in automated review job results are retained in the free storage provided by ApsaraVideo VOD for only two weeks. After two weeks, the images are automatically deleted.
 *
 * @param request GetAIMediaAuditJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAIMediaAuditJobResponse
 */
GetAIMediaAuditJobResponse Client::getAIMediaAuditJobWithOptions(const GetAIMediaAuditJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
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
 * @summary Queries an automated review job. After you submit an AI job, the job is processed asynchronously. You can call this operation to query job information in real time.
 *
 * @description <props="intl">
 * - This operation is supported only in the Singapore region.
 * - Image resources in automated review job results are retained in the free storage provided by ApsaraVideo VOD for only two weeks. After two weeks, the images are automatically deleted.
 *
 * @param request GetAIMediaAuditJobRequest
 * @return GetAIMediaAuditJobResponse
 */
GetAIMediaAuditJobResponse Client::getAIMediaAuditJob(const GetAIMediaAuditJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAIMediaAuditJobWithOptions(request, runtime);
}

/**
 * @summary Queries an AI template.
 *
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * - Obtain the AI template ID first, and then call this operation to query the configuration information of the AI template.
 *
 * @param request GetAITemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAITemplateResponse
 */
GetAITemplateResponse Client::getAITemplateWithOptions(const GetAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Queries an AI template.
 *
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * - Obtain the AI template ID first, and then call this operation to query the configuration information of the AI template.
 *
 * @param request GetAITemplateRequest
 * @return GetAITemplateResponse
 */
GetAITemplateResponse Client::getAITemplate(const GetAITemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAITemplateWithOptions(request, runtime);
}

/**
 * @summary Retrieves the results of smart tagging for a video.
 *
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)** and **China (Shanghai)**.
 * - Retrieves smart tagging results by video ID.
 *
 * @param request GetAIVideoTagResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAIVideoTagResultResponse
 */
GetAIVideoTagResultResponse Client::getAIVideoTagResultWithOptions(const GetAIVideoTagResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Retrieves the results of smart tagging for a video.
 *
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)** and **China (Shanghai)**.
 * - Retrieves smart tagging results by video ID.
 *
 * @param request GetAIVideoTagResultRequest
 * @return GetAIVideoTagResultResponse
 */
GetAIVideoTagResultResponse Client::getAIVideoTagResult(const GetAIVideoTagResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAIVideoTagResultWithOptions(request, runtime);
}

/**
 * @summary Queries application information by application ID.
 *
 * @description - Batch queries are supported.
 * - AppIds supports a maximum of 10 IDs.
 * ### QPS limit
 * The single-user QPS limit for this operation is 100 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request GetAppInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppInfosResponse
 */
GetAppInfosResponse Client::getAppInfosWithOptions(const GetAppInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppIds()) {
    query["AppIds"] = request.getAppIds();
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
 * @summary Queries application information by application ID.
 *
 * @description - Batch queries are supported.
 * - AppIds supports a maximum of 10 IDs.
 * ### QPS limit
 * The single-user QPS limit for this operation is 100 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request GetAppInfosRequest
 * @return GetAppInfosResponse
 */
GetAppInfosResponse Client::getAppInfos(const GetAppInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppInfosWithOptions(request, runtime);
}

/**
 * @summary Retrieves the playback key of an application.
 *
 * @param request GetAppPlayKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAppPlayKeyResponse
 */
GetAppPlayKeyResponse Client::getAppPlayKeyWithOptions(const GetAppPlayKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Retrieves the playback key of an application.
 *
 * @param request GetAppPlayKeyRequest
 * @return GetAppPlayKeyResponse
 */
GetAppPlayKeyResponse Client::getAppPlayKey(const GetAppPlayKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAppPlayKeyWithOptions(request, runtime);
}

/**
 * @summary Retrieves the basic information and access URLs of multiple auxiliary media assets in a batch by specifying their IDs after the assets such as watermark images, subtitle files, and materials are uploaded to ApsaraVideo VOD.
 *
 * @description You can retrieve information about up to 20 auxiliary media assets at a time.
 *
 * @param request GetAttachedMediaInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAttachedMediaInfoResponse
 */
GetAttachedMediaInfoResponse Client::getAttachedMediaInfoWithOptions(const GetAttachedMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.getAuthTimeout();
  }

  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
  }

  if (!!request.hasOutputType()) {
    query["OutputType"] = request.getOutputType();
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
 * @summary Retrieves the basic information and access URLs of multiple auxiliary media assets in a batch by specifying their IDs after the assets such as watermark images, subtitle files, and materials are uploaded to ApsaraVideo VOD.
 *
 * @description You can retrieve information about up to 20 auxiliary media assets at a time.
 *
 * @param request GetAttachedMediaInfoRequest
 * @return GetAttachedMediaInfoResponse
 */
GetAttachedMediaInfoResponse Client::getAttachedMediaInfo(const GetAttachedMediaInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAttachedMediaInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the history of manual review records.
 *
 * @param request GetAuditHistoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAuditHistoryResponse
 */
GetAuditHistoryResponse Client::getAuditHistoryWithOptions(const GetAuditHistoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Retrieves the history of manual review records.
 *
 * @param request GetAuditHistoryRequest
 * @return GetAuditHistoryResponse
 */
GetAuditHistoryResponse Client::getAuditHistory(const GetAuditHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuditHistoryWithOptions(request, runtime);
}

/**
 * @summary Invokes this operation to perform a filtered query for specified categorization information by ID or type, and retrieves the list of its subcategories (next-level categories).
 *
 * @param request GetCategoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCategoriesResponse
 */
GetCategoriesResponse Client::getCategoriesWithOptions(const GetCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCateId()) {
    query["CateId"] = request.getCateId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Invokes this operation to perform a filtered query for specified categorization information by ID or type, and retrieves the list of its subcategories (next-level categories).
 *
 * @param request GetCategoriesRequest
 * @return GetCategoriesResponse
 */
GetCategoriesResponse Client::getCategories(const GetCategoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCategoriesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the full traffic data of media assets for a specified date and region. The data is generated based on CDN traffic logs and primarily reflects the traffic consumption of videos. The generated CSV file contains the following information: date, video ID, domain name, traffic, application ID, and category ID. You can download the file to your local machine for scenarios such as operational data analytics.
 *
 * @description - Currently, the service address of this operation only supports: **China (Shanghai)**.
 * - Only data within the past 90 days can be queried (data starts from April 29, 2025).
 * - The traffic data provided by this operation is raw traffic data. To align with billing traffic, multiply the data by a TCP coefficient of 1.1.
 *
 * @param request GetDailyPlayRegionStatisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDailyPlayRegionStatisResponse
 */
GetDailyPlayRegionStatisResponse Client::getDailyPlayRegionStatisWithOptions(const GetDailyPlayRegionStatisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDate()) {
    query["Date"] = request.getDate();
  }

  if (!!request.hasMediaRegion()) {
    query["MediaRegion"] = request.getMediaRegion();
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
 * @summary Retrieves the full traffic data of media assets for a specified date and region. The data is generated based on CDN traffic logs and primarily reflects the traffic consumption of videos. The generated CSV file contains the following information: date, video ID, domain name, traffic, application ID, and category ID. You can download the file to your local machine for scenarios such as operational data analytics.
 *
 * @description - Currently, the service address of this operation only supports: **China (Shanghai)**.
 * - Only data within the past 90 days can be queried (data starts from April 29, 2025).
 * - The traffic data provided by this operation is raw traffic data. To align with billing traffic, multiply the data by a TCP coefficient of 1.1.
 *
 * @param request GetDailyPlayRegionStatisRequest
 * @return GetDailyPlayRegionStatisResponse
 */
GetDailyPlayRegionStatisResponse Client::getDailyPlayRegionStatis(const GetDailyPlayRegionStatisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDailyPlayRegionStatisWithOptions(request, runtime);
}

/**
 * @summary Queries the default AI template.
 *
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * - Currently, only the default AI template for automated review can be queried.
 *
 * @param request GetDefaultAITemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDefaultAITemplateResponse
 */
GetDefaultAITemplateResponse Client::getDefaultAITemplateWithOptions(const GetDefaultAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
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
 * @summary Queries the default AI template.
 *
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * - Currently, only the default AI template for automated review can be queried.
 *
 * @param request GetDefaultAITemplateRequest
 * @return GetDefaultAITemplateResponse
 */
GetDefaultAITemplateResponse Client::getDefaultAITemplate(const GetDefaultAITemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDefaultAITemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the results of a digital watermarking (copyright watermark or tracing watermark) extraction job, including the job status and the successfully extracted watermark text.
 *
 * @description - Currently, this operation is available only in the China (Shanghai) and China (Beijing) regions.
 * - After you call the [SubmitDigitalWatermarkExtractJob](~~SubmitDigitalWatermarkExtractJob~~) operation to extract the copyright watermark or tracing watermark from a video, call this operation to query the extracted watermark text.
 * - Only watermark extraction jobs from the last 2 years can be queried.
 *
 * @param request GetDigitalWatermarkExtractResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDigitalWatermarkExtractResultResponse
 */
GetDigitalWatermarkExtractResultResponse Client::getDigitalWatermarkExtractResultWithOptions(const GetDigitalWatermarkExtractResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtractType()) {
    query["ExtractType"] = request.getExtractType();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Queries the results of a digital watermarking (copyright watermark or tracing watermark) extraction job, including the job status and the successfully extracted watermark text.
 *
 * @description - Currently, this operation is available only in the China (Shanghai) and China (Beijing) regions.
 * - After you call the [SubmitDigitalWatermarkExtractJob](~~SubmitDigitalWatermarkExtractJob~~) operation to extract the copyright watermark or tracing watermark from a video, call this operation to query the extracted watermark text.
 * - Only watermark extraction jobs from the last 2 years can be queried.
 *
 * @param request GetDigitalWatermarkExtractResultRequest
 * @return GetDigitalWatermarkExtractResultResponse
 */
GetDigitalWatermarkExtractResultResponse Client::getDigitalWatermarkExtractResult(const GetDigitalWatermarkExtractResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDigitalWatermarkExtractResultWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an online editing project (video editing task).
 *
 * @param request GetEditingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEditingProjectResponse
 */
GetEditingProjectResponse Client::getEditingProjectWithOptions(const GetEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Retrieves the details of an online editing project (video editing task).
 *
 * @param request GetEditingProjectRequest
 * @return GetEditingProjectResponse
 */
GetEditingProjectResponse Client::getEditingProject(const GetEditingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEditingProjectWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of materials to be edited in an online editing project.
 *
 * @description During the editing process, materials can be added to the timeline but are not necessarily fully used.
 *
 * @param request GetEditingProjectMaterialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEditingProjectMaterialsResponse
 */
GetEditingProjectMaterialsResponse Client::getEditingProjectMaterialsWithOptions(const GetEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaterialType()) {
    query["MaterialType"] = request.getMaterialType();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Retrieves the list of materials to be edited in an online editing project.
 *
 * @description During the editing process, materials can be added to the timeline but are not necessarily fully used.
 *
 * @param request GetEditingProjectMaterialsRequest
 * @return GetEditingProjectMaterialsResponse
 */
GetEditingProjectMaterialsResponse Client::getEditingProjectMaterials(const GetEditingProjectMaterialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEditingProjectMaterialsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the basic information and access URL of an image by image ID after the image is uploaded to ApsaraVideo VOD.
 *
 * @description This operation only supports querying information about images uploaded to ApsaraVideo VOD. To query information about snapshots generated from video snapshots, call the [ListSnapshots](~~ListSnapshots~~) operation.
 *
 * @param request GetImageInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageInfoResponse
 */
GetImageInfoResponse Client::getImageInfoWithOptions(const GetImageInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.getAuthTimeout();
  }

  if (!!request.hasImageId()) {
    query["ImageId"] = request.getImageId();
  }

  if (!!request.hasOutputType()) {
    query["OutputType"] = request.getOutputType();
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
 * @summary Retrieves the basic information and access URL of an image by image ID after the image is uploaded to ApsaraVideo VOD.
 *
 * @description This operation only supports querying information about images uploaded to ApsaraVideo VOD. To query information about snapshots generated from video snapshots, call the [ListSnapshots](~~ListSnapshots~~) operation.
 *
 * @param request GetImageInfoRequest
 * @return GetImageInfoResponse
 */
GetImageInfoResponse Client::getImageInfo(const GetImageInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information and access URLs of multiple images by image ID after the images are uploaded to ApsaraVideo VOD.
 *
 * @description - This operation only supports querying information about images uploaded to ApsaraVideo VOD. To query information about snapshots generated from video snapshots, call the [ListSnapshots](~~ListSnapshots~~) operation.
 * - You can query information about up to 20 images at a time.
 *
 * @param request GetImageInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetImageInfosResponse
 */
GetImageInfosResponse Client::getImageInfosWithOptions(const GetImageInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.getAuthTimeout();
  }

  if (!!request.hasImageIds()) {
    query["ImageIds"] = request.getImageIds();
  }

  if (!!request.hasOutputType()) {
    query["OutputType"] = request.getOutputType();
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
 * @summary Queries the basic information and access URLs of multiple images by image ID after the images are uploaded to ApsaraVideo VOD.
 *
 * @description - This operation only supports querying information about images uploaded to ApsaraVideo VOD. To query information about snapshots generated from video snapshots, call the [ListSnapshots](~~ListSnapshots~~) operation.
 * - You can query information about up to 20 images at a time.
 *
 * @param request GetImageInfosRequest
 * @return GetImageInfosResponse
 */
GetImageInfosResponse Client::getImageInfos(const GetImageInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getImageInfosWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an asynchronous task by job ID.
 *
 * @description **Usage notes**
 * This operation supports querying asynchronous task data from the last 6 months. Supported task types: transcoding tasks, snapshot tasks, AI tasks, and workflow tasks.
 * **QPS limit**
 * The single-user QPS limit for this operation is 15 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request GetJobDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetJobDetailResponse
 */
GetJobDetailResponse Client::getJobDetailWithOptions(const GetJobDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.getJobType();
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
 * @summary Queries the details of an asynchronous task by job ID.
 *
 * @description **Usage notes**
 * This operation supports querying asynchronous task data from the last 6 months. Supported task types: transcoding tasks, snapshot tasks, AI tasks, and workflow tasks.
 * **QPS limit**
 * The single-user QPS limit for this operation is 15 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request GetJobDetailRequest
 * @return GetJobDetailResponse
 */
GetJobDetailResponse Client::getJobDetail(const GetJobDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getJobDetailWithOptions(request, runtime);
}

/**
 * @summary Retrieves the results of video AI analysis.
 *
 * @param request GetMediaAiAnalysisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaAiAnalysisResponse
 */
GetMediaAiAnalysisResponse Client::getMediaAiAnalysisWithOptions(const GetMediaAiAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.getAuthTimeout();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasOutputType()) {
    query["OutputType"] = request.getOutputType();
  }

  if (!!request.hasResultTypes()) {
    query["ResultTypes"] = request.getResultTypes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMediaAiAnalysis"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaAiAnalysisResponse>();
}

/**
 * @summary Retrieves the results of video AI analysis.
 *
 * @param request GetMediaAiAnalysisRequest
 * @return GetMediaAiAnalysisResponse
 */
GetMediaAiAnalysisResponse Client::getMediaAiAnalysis(const GetMediaAiAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaAiAnalysisWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of audio automated review results.
 *
 * @description ### Usage notes
 * <props="china">After automated review is complete, if you have configured the [Automated review complete](https://help.aliyun.com/document_detail/89576.html) event notification, the callback URL is notified through a message callback. You can call this operation to query the details of audio review results.
 * <props="intl">
 * - This operation is supported only in the Singapore region.
 * - After automated review is complete, if you have configured the [Automated review complete](https://help.aliyun.com/document_detail/89576.html) event notification, the callback URL is notified through a message callback. You can call this operation to query the details of audio review results.
 *
 * @param request GetMediaAuditAudioResultDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaAuditAudioResultDetailResponse
 */
GetMediaAuditAudioResultDetailResponse Client::getMediaAuditAudioResultDetailWithOptions(const GetMediaAuditAudioResultDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Retrieves the details of audio automated review results.
 *
 * @description ### Usage notes
 * <props="china">After automated review is complete, if you have configured the [Automated review complete](https://help.aliyun.com/document_detail/89576.html) event notification, the callback URL is notified through a message callback. You can call this operation to query the details of audio review results.
 * <props="intl">
 * - This operation is supported only in the Singapore region.
 * - After automated review is complete, if you have configured the [Automated review complete](https://help.aliyun.com/document_detail/89576.html) event notification, the callback URL is notified through a message callback. You can call this operation to query the details of audio review results.
 *
 * @param request GetMediaAuditAudioResultDetailRequest
 * @return GetMediaAuditAudioResultDetailResponse
 */
GetMediaAuditAudioResultDetailResponse Client::getMediaAuditAudioResultDetail(const GetMediaAuditAudioResultDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaAuditAudioResultDetailWithOptions(request, runtime);
}

/**
 * @summary Retrieves the summary of automated review results.
 *
 * @description <props="intl">
 * ### Usage notes
 * This operation is supported only in the Singapore region.
 * ### QPS limit
 * The maximum queries per second (QPS) for a single user for this operation is 20. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request GetMediaAuditResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaAuditResultResponse
 */
GetMediaAuditResultResponse Client::getMediaAuditResultWithOptions(const GetMediaAuditResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
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
 * @summary Retrieves the summary of automated review results.
 *
 * @description <props="intl">
 * ### Usage notes
 * This operation is supported only in the Singapore region.
 * ### QPS limit
 * The maximum queries per second (QPS) for a single user for this operation is 20. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request GetMediaAuditResultRequest
 * @return GetMediaAuditResultResponse
 */
GetMediaAuditResultResponse Client::getMediaAuditResult(const GetMediaAuditResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaAuditResultWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of automated review results. You can call this operation to query the details of review results in real time.
 *
 * @description - By default, only the review screenshot details of violating and suspected violating content are returned. No results are returned for compliant videos and images.
 * - The image resources of review results are retained in the free storage provided by ApsaraVideo VOD for only 2 weeks. After 2 weeks, the images are automatically deleted.
 * <props="intl">
 * - This operation is supported only in the Singapore region.
 *
 * @param request GetMediaAuditResultDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaAuditResultDetailResponse
 */
GetMediaAuditResultDetailResponse Client::getMediaAuditResultDetailWithOptions(const GetMediaAuditResultDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
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
 * @summary Retrieves the details of automated review results. You can call this operation to query the details of review results in real time.
 *
 * @description - By default, only the review screenshot details of violating and suspected violating content are returned. No results are returned for compliant videos and images.
 * - The image resources of review results are retained in the free storage provided by ApsaraVideo VOD for only 2 weeks. After 2 weeks, the images are automatically deleted.
 * <props="intl">
 * - This operation is supported only in the Singapore region.
 *
 * @param request GetMediaAuditResultDetailRequest
 * @return GetMediaAuditResultDetailResponse
 */
GetMediaAuditResultDetailResponse Client::getMediaAuditResultDetail(const GetMediaAuditResultDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaAuditResultDetailWithOptions(request, runtime);
}

/**
 * @summary Retrieves the timestamps of all screenshots that contain violations.
 *
 * @description > By default, only screenshot details for violations and suspected violations are returned. No results are returned for compliant videos and images.
 * <props="intl">
 * This operation is supported only in the Singapore region.
 *
 * @param request GetMediaAuditResultTimelineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaAuditResultTimelineResponse
 */
GetMediaAuditResultTimelineResponse Client::getMediaAuditResultTimelineWithOptions(const GetMediaAuditResultTimelineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
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
 * @summary Retrieves the timestamps of all screenshots that contain violations.
 *
 * @description > By default, only screenshot details for violations and suspected violations are returned. No results are returned for compliant videos and images.
 * <props="intl">
 * This operation is supported only in the Singapore region.
 *
 * @param request GetMediaAuditResultTimelineRequest
 * @return GetMediaAuditResultTimelineResponse
 */
GetMediaAuditResultTimelineResponse Client::getMediaAuditResultTimeline(const GetMediaAuditResultTimelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaAuditResultTimelineWithOptions(request, runtime);
}

/**
 * @summary Retrieves media fingerprint results. After a media fingerprint job is complete, you can call this operation to query the results in real time.
 *
 * @description This operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 *
 * @param request GetMediaDNAResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaDNAResultResponse
 */
GetMediaDNAResultResponse Client::getMediaDNAResultWithOptions(const GetMediaDNAResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Retrieves media fingerprint results. After a media fingerprint job is complete, you can call this operation to query the results in real time.
 *
 * @description This operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 *
 * @param request GetMediaDNAResultRequest
 * @return GetMediaDNAResultResponse
 */
GetMediaDNAResultResponse Client::getMediaDNAResult(const GetMediaDNAResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaDNAResultWithOptions(request, runtime);
}

/**
 * @summary Queries task information such as task status and filtering policies for a video purge or prefetch task.
 *
 * @description ### Usage notes
 * You can query task information for all audio or video files under a purge or prefetch task, or query task information for a specific audio or video file.
 * ### QPS limit
 * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation as needed. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
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
 * @summary Queries task information such as task status and filtering policies for a video purge or prefetch task.
 *
 * @description ### Usage notes
 * You can query task information for all audio or video files under a purge or prefetch task, or query task information for a specific audio or video file.
 * ### QPS limit
 * The single-user QPS limit for this operation is 50 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation as needed. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request GetMediaRefreshJobsRequest
 * @return GetMediaRefreshJobsResponse
 */
GetMediaRefreshJobsResponse Client::getMediaRefreshJobs(const GetMediaRefreshJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaRefreshJobsWithOptions(request, runtime);
}

/**
 * @summary Queries the callback method, callback URL, and event types of event notifications.
 *
 * @description > For more information, see [Event notification development guide](https://help.aliyun.com/document_detail/55627.html).
 *
 * @param request GetMessageCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMessageCallbackResponse
 */
GetMessageCallbackResponse Client::getMessageCallbackWithOptions(const GetMessageCallbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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
 * @summary Queries the callback method, callback URL, and event types of event notifications.
 *
 * @description > For more information, see [Event notification development guide](https://help.aliyun.com/document_detail/55627.html).
 *
 * @param request GetMessageCallbackRequest
 * @return GetMessageCallbackResponse
 */
GetMessageCallbackResponse Client::getMessageCallback(const GetMessageCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMessageCallbackWithOptions(request, runtime);
}

/**
 * @summary Retrieves the source file information of an audio or video file, including the file URL, resolution, and bitrate.
 *
 * @description You can retrieve the complete source file information only after a video or audio stream is transcoded.
 *
 * @param request GetMezzanineInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMezzanineInfoResponse
 */
GetMezzanineInfoResponse Client::getMezzanineInfoWithOptions(const GetMezzanineInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdditionType()) {
    query["AdditionType"] = request.getAdditionType();
  }

  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.getAuthTimeout();
  }

  if (!!request.hasOutputType()) {
    query["OutputType"] = request.getOutputType();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.getReferenceId();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Retrieves the source file information of an audio or video file, including the file URL, resolution, and bitrate.
 *
 * @description You can retrieve the complete source file information only after a video or audio stream is transcoded.
 *
 * @param request GetMezzanineInfoRequest
 * @return GetMezzanineInfoResponse
 */
GetMezzanineInfoResponse Client::getMezzanineInfo(const GetMezzanineInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMezzanineInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the playback URL of an audio or video file by providing the audio or video ID, which can then be played using ApsaraVideo Player or a third-party player such as a system-native, open-source, or custom-built player.
 *
 * @description - **Before using this operation, make sure you fully understand the billing methods and pricing of ApsaraVideo VOD. Directly downloading or playing videos from ApsaraVideo VOD playback URLs incurs outbound traffic fees. If no accelerated domain name is configured, refer to [Storage outbound traffic billing](~~188308#section-rwh-e88-f7j~~). If an accelerated domain name is configured, refer to [Acceleration service billing](~~188308#section-c5t-oq9-15e~~). If you have enabled storage transfer acceleration, directly downloading or playing videos from ApsaraVideo VOD playback URLs also incurs download acceleration fees. For billing details, refer to [Storage transfer acceleration billing](~~188310#section_sta_zm2_tsv~~).**
 * - Only videos in the Normal state (the Status field value is Normal) can be played. For more information about playback URL descriptions and usage limits, refer to [Audio and video playback](https://help.aliyun.com/document_detail/57290.html).
 * - When the [media storage](https://help.aliyun.com/document_detail/2392368.html) type is non-standard storage, set the StorageClass field of the PlayConfig parameter accordingly. For details, refer to [PlayConfig](~~86952#section-9g7-s9b-v7z~~).
 * - If video playback is abnormal, call the [GetMezzanineInfo](~~GetMezzanineInfo~~) operation to check whether the video source file information is correct.
 * <props="china">
 * - To generate m3u8 tracing watermark video streams by calling this operation, submit a ticket to apply for activation. For information about how to submit a ticket, refer to [Contact us](https://help.aliyun.com/document_detail/464625.html). For more information about tracing watermarks, refer to [Digital watermarking](https://help.aliyun.com/document_detail/2527021.html).
 *
 * @param request GetPlayInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPlayInfoResponse
 */
GetPlayInfoResponse Client::getPlayInfoWithOptions(const GetPlayInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdditionType()) {
    query["AdditionType"] = request.getAdditionType();
  }

  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.getAuthTimeout();
  }

  if (!!request.hasCodecName()) {
    query["CodecName"] = request.getCodecName();
  }

  if (!!request.hasDefinition()) {
    query["Definition"] = request.getDefinition();
  }

  if (!!request.hasDigitalWatermarkType()) {
    query["DigitalWatermarkType"] = request.getDigitalWatermarkType();
  }

  if (!!request.hasFormats()) {
    query["Formats"] = request.getFormats();
  }

  if (!!request.hasOutputType()) {
    query["OutputType"] = request.getOutputType();
  }

  if (!!request.hasPlayConfig()) {
    query["PlayConfig"] = request.getPlayConfig();
  }

  if (!!request.hasReAuthInfo()) {
    query["ReAuthInfo"] = request.getReAuthInfo();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.getReferenceId();
  }

  if (!!request.hasResultType()) {
    query["ResultType"] = request.getResultType();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
  }

  if (!!request.hasTrace()) {
    query["Trace"] = request.getTrace();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Retrieves the playback URL of an audio or video file by providing the audio or video ID, which can then be played using ApsaraVideo Player or a third-party player such as a system-native, open-source, or custom-built player.
 *
 * @description - **Before using this operation, make sure you fully understand the billing methods and pricing of ApsaraVideo VOD. Directly downloading or playing videos from ApsaraVideo VOD playback URLs incurs outbound traffic fees. If no accelerated domain name is configured, refer to [Storage outbound traffic billing](~~188308#section-rwh-e88-f7j~~). If an accelerated domain name is configured, refer to [Acceleration service billing](~~188308#section-c5t-oq9-15e~~). If you have enabled storage transfer acceleration, directly downloading or playing videos from ApsaraVideo VOD playback URLs also incurs download acceleration fees. For billing details, refer to [Storage transfer acceleration billing](~~188310#section_sta_zm2_tsv~~).**
 * - Only videos in the Normal state (the Status field value is Normal) can be played. For more information about playback URL descriptions and usage limits, refer to [Audio and video playback](https://help.aliyun.com/document_detail/57290.html).
 * - When the [media storage](https://help.aliyun.com/document_detail/2392368.html) type is non-standard storage, set the StorageClass field of the PlayConfig parameter accordingly. For details, refer to [PlayConfig](~~86952#section-9g7-s9b-v7z~~).
 * - If video playback is abnormal, call the [GetMezzanineInfo](~~GetMezzanineInfo~~) operation to check whether the video source file information is correct.
 * <props="china">
 * - To generate m3u8 tracing watermark video streams by calling this operation, submit a ticket to apply for activation. For information about how to submit a ticket, refer to [Contact us](https://help.aliyun.com/document_detail/464625.html). For more information about tracing watermarks, refer to [Digital watermarking](https://help.aliyun.com/document_detail/2527021.html).
 *
 * @param request GetPlayInfoRequest
 * @return GetPlayInfoResponse
 */
GetPlayInfoResponse Client::getPlayInfo(const GetPlayInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPlayInfoWithOptions(request, runtime);
}

/**
 * @summary Queries video transcoding summary of one or more audio or video files by their IDs, including video transcoding status and transcoding progress.
 *
 * @description - Because an audio or video file may be transcoded multiple times, this operation returns only the most recent transcoding summary.
 * - Batch queries are supported. You can query the transcoding summaries of up to 10 audio or video files at a time.
 * - To query historical transcoding task information, call the [ListTranscodeTask](https://help.aliyun.com/document_detail/109120.html) operation.
 * - **This operation supports querying transcoding task data only within the last year.**
 *
 * @param request GetTranscodeSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTranscodeSummaryResponse
 */
GetTranscodeSummaryResponse Client::getTranscodeSummaryWithOptions(const GetTranscodeSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVideoIds()) {
    query["VideoIds"] = request.getVideoIds();
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
 * @summary Queries video transcoding summary of one or more audio or video files by their IDs, including video transcoding status and transcoding progress.
 *
 * @description - Because an audio or video file may be transcoded multiple times, this operation returns only the most recent transcoding summary.
 * - Batch queries are supported. You can query the transcoding summaries of up to 10 audio or video files at a time.
 * - To query historical transcoding task information, call the [ListTranscodeTask](https://help.aliyun.com/document_detail/109120.html) operation.
 * - **This operation supports querying transcoding task data only within the last year.**
 *
 * @param request GetTranscodeSummaryRequest
 * @return GetTranscodeSummaryResponse
 */
GetTranscodeSummaryResponse Client::getTranscodeSummary(const GetTranscodeSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTranscodeSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries the details of transcoding jobs based on a transcoding task ID.
 *
 * @description ### Usage notes
 * **This operation only supports querying transcoding task data from the last year.**
 * ### QPS limit
 * A single user can perform a maximum of 15 queries per second (QPS). Throttling is triggered if this limit is exceeded, which may affect your business. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request GetTranscodeTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTranscodeTaskResponse
 */
GetTranscodeTaskResponse Client::getTranscodeTaskWithOptions(const GetTranscodeTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobIds()) {
    query["JobIds"] = request.getJobIds();
  }

  if (!!request.hasTranscodeTaskId()) {
    query["TranscodeTaskId"] = request.getTranscodeTaskId();
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
 * @summary Queries the details of transcoding jobs based on a transcoding task ID.
 *
 * @description ### Usage notes
 * **This operation only supports querying transcoding task data from the last year.**
 * ### QPS limit
 * A single user can perform a maximum of 15 queries per second (QPS). Throttling is triggered if this limit is exceeded, which may affect your business. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request GetTranscodeTaskRequest
 * @return GetTranscodeTaskResponse
 */
GetTranscodeTaskResponse Client::getTranscodeTask(const GetTranscodeTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTranscodeTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a transcoding configuration by transcoding template group ID.
 *
 * @description Retrieves information about a single template group, including the configuration information of all transcoding templates in the group.
 *
 * @param request GetTranscodeTemplateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTranscodeTemplateGroupResponse
 */
GetTranscodeTemplateGroupResponse Client::getTranscodeTemplateGroupWithOptions(const GetTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTranscodeTemplateGroupId()) {
    query["TranscodeTemplateGroupId"] = request.getTranscodeTemplateGroupId();
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
 * @summary Queries the details of a transcoding configuration by transcoding template group ID.
 *
 * @description Retrieves information about a single template group, including the configuration information of all transcoding templates in the group.
 *
 * @param request GetTranscodeTemplateGroupRequest
 * @return GetTranscodeTemplateGroupResponse
 */
GetTranscodeTemplateGroupResponse Client::getTranscodeTemplateGroup(const GetTranscodeTemplateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTranscodeTemplateGroupWithOptions(request, runtime);
}

/**
 * @summary Retrieves URL upload information.
 *
 * @description - Retrieves URL upload information by using the JobId returned during URL-based upload or the URL used for upload. The information includes the URL upload status, UserData, creation time, and completion time.
 * - **This operation only supports querying upload task data within the last year.**
 * - This operation currently supports only the following service regions: **China (Shanghai)** and **Singapore**.
 * - After you call the [UploadMediaByURL](~~UploadMediaByURL~~) operation to upload a media file to ApsaraVideo VOD, you can call this operation to query the upload information of a specified media file by using the upload task IDs (`JobIds`) or the source file URLs (`UploadURLs`).
 * - When calling this operation, you must specify either `JobIds` or `UploadURLs`. If both are specified, only `JobIds` is processed.
 * - If the media upload fails, you can call this operation to view the error code and error message. If the media upload succeeds, you can call this operation to view the corresponding media ID.
 *
 * @param request GetURLUploadInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetURLUploadInfosResponse
 */
GetURLUploadInfosResponse Client::getURLUploadInfosWithOptions(const GetURLUploadInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobIds()) {
    query["JobIds"] = request.getJobIds();
  }

  if (!!request.hasUploadURLs()) {
    query["UploadURLs"] = request.getUploadURLs();
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
 * @summary Retrieves URL upload information.
 *
 * @description - Retrieves URL upload information by using the JobId returned during URL-based upload or the URL used for upload. The information includes the URL upload status, UserData, creation time, and completion time.
 * - **This operation only supports querying upload task data within the last year.**
 * - This operation currently supports only the following service regions: **China (Shanghai)** and **Singapore**.
 * - After you call the [UploadMediaByURL](~~UploadMediaByURL~~) operation to upload a media file to ApsaraVideo VOD, you can call this operation to query the upload information of a specified media file by using the upload task IDs (`JobIds`) or the source file URLs (`UploadURLs`).
 * - When calling this operation, you must specify either `JobIds` or `UploadURLs`. If both are specified, only `JobIds` is processed.
 * - If the media upload fails, you can call this operation to view the error code and error message. If the media upload succeeds, you can call this operation to view the corresponding media ID.
 *
 * @param request GetURLUploadInfosRequest
 * @return GetURLUploadInfosResponse
 */
GetURLUploadInfosResponse Client::getURLUploadInfos(const GetURLUploadInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getURLUploadInfosWithOptions(request, runtime);
}

/**
 * @summary Retrieves media upload details by media ID, such as upload time, upload ratio, and upload source. Batch retrieval is supported.
 *
 * @description - This operation only supports retrieving upload details of audio and video files.
 * - If audio or video files are uploaded through the ApsaraVideo VOD console, you can use this operation to retrieve information such as the upload ratio. If audio or video files are uploaded by using the upload SDK, only the following versions of the [upload SDK](https://help.aliyun.com/document_detail/52200.html) support this operation.
 * > Only the server upload SDK supports this operation. The client upload SDK does not support this operation. The server upload SDK version requirements are as follows:
 * > - Java upload SDK: version ≥ 1.4.4
 * > - C++ upload SDK: version ≥ 1.0.0
 * > - PHP upload SDK: version ≥ 1.0.2
 * > - Python upload SDK: version ≥ 1.3.0
 * ### QPS limit
 * The single-user QPS limit for this operation is 100 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request GetUploadDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUploadDetailsResponse
 */
GetUploadDetailsResponse Client::getUploadDetailsWithOptions(const GetUploadDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
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
 * @summary Retrieves media upload details by media ID, such as upload time, upload ratio, and upload source. Batch retrieval is supported.
 *
 * @description - This operation only supports retrieving upload details of audio and video files.
 * - If audio or video files are uploaded through the ApsaraVideo VOD console, you can use this operation to retrieve information such as the upload ratio. If audio or video files are uploaded by using the upload SDK, only the following versions of the [upload SDK](https://help.aliyun.com/document_detail/52200.html) support this operation.
 * > Only the server upload SDK supports this operation. The client upload SDK does not support this operation. The server upload SDK version requirements are as follows:
 * > - Java upload SDK: version ≥ 1.4.4
 * > - C++ upload SDK: version ≥ 1.0.0
 * > - PHP upload SDK: version ≥ 1.0.2
 * > - Python upload SDK: version ≥ 1.3.0
 * ### QPS limit
 * The single-user QPS limit for this operation is 100 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request GetUploadDetailsRequest
 * @return GetUploadDetailsResponse
 */
GetUploadDetailsResponse Client::getUploadDetails(const GetUploadDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUploadDetailsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the information about a single audio or video file by audio or video ID, including the title, description, duration, thumbnail URL, status, creation time, size, snapshots, category, and tags.
 *
 * @description After an audio or video file is uploaded, ApsaraVideo VOD analyzes the uploaded source file. Therefore, media asset information is generated asynchronously. You can configure an [event notification](https://help.aliyun.com/document_detail/55627.html) for [AudioVideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html). After you receive the [AudioVideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event notification, call this operation to retrieve the audio or video information.
 *
 * @param request GetVideoInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoInfoResponse
 */
GetVideoInfoResponse Client::getVideoInfoWithOptions(const GetVideoInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.getReferenceId();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Retrieves the information about a single audio or video file by audio or video ID, including the title, description, duration, thumbnail URL, status, creation time, size, snapshots, category, and tags.
 *
 * @description After an audio or video file is uploaded, ApsaraVideo VOD analyzes the uploaded source file. Therefore, media asset information is generated asynchronously. You can configure an [event notification](https://help.aliyun.com/document_detail/55627.html) for [AudioVideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html). After you receive the [AudioVideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event notification, call this operation to retrieve the audio or video information.
 *
 * @param request GetVideoInfoRequest
 * @return GetVideoInfoResponse
 */
GetVideoInfoResponse Client::getVideoInfo(const GetVideoInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the information about multiple audio and video files at a time by audio or video ID, including the title, description, duration, thumbnail URL, status, creation time, size, snapshots, category, and tags.
 *
 * @description - You can retrieve information about up to 20 audio and video files at a time.
 * - After an audio or video file is uploaded, ApsaraVideo VOD analyzes the uploaded source file. Therefore, media asset information is generated asynchronously. You can configure the [AudioVideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) [event notification](https://help.aliyun.com/document_detail/55627.html). After you receive the [AudioVideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event notification, call this operation to retrieve the audio and video information.
 *
 * @param request GetVideoInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoInfosResponse
 */
GetVideoInfosResponse Client::getVideoInfosWithOptions(const GetVideoInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasReferenceIds()) {
    query["ReferenceIds"] = request.getReferenceIds();
  }

  if (!!request.hasVideoIds()) {
    query["VideoIds"] = request.getVideoIds();
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
 * @summary Retrieves the information about multiple audio and video files at a time by audio or video ID, including the title, description, duration, thumbnail URL, status, creation time, size, snapshots, category, and tags.
 *
 * @description - You can retrieve information about up to 20 audio and video files at a time.
 * - After an audio or video file is uploaded, ApsaraVideo VOD analyzes the uploaded source file. Therefore, media asset information is generated asynchronously. You can configure the [AudioVideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) [event notification](https://help.aliyun.com/document_detail/55627.html). After you receive the [AudioVideoAnalysisComplete](https://help.aliyun.com/document_detail/99935.html) event notification, call this operation to retrieve the audio and video information.
 *
 * @param request GetVideoInfosRequest
 * @return GetVideoInfosResponse
 */
GetVideoInfosResponse Client::getVideoInfos(const GetVideoInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoInfosWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of audio and video information.
 *
 * @description This operation retrieves up to **5000** audio and video files that match the specified filter conditions (such as video status and category ID). Specify StartTime and EndTime to retrieve data in batches. To query more audio and video files or traverse all audio and video information, see [Search for media information](https://help.aliyun.com/document_detail/86044.html).
 *
 * @param request GetVideoListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoListResponse
 */
GetVideoListResponse Client::getVideoListWithOptions(const GetVideoListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCateId()) {
    query["CateId"] = request.getCateId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasReferenceIds()) {
    query["ReferenceIds"] = request.getReferenceIds();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasStorageLocation()) {
    query["StorageLocation"] = request.getStorageLocation();
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
 * @summary Retrieves a list of audio and video information.
 *
 * @description This operation retrieves up to **5000** audio and video files that match the specified filter conditions (such as video status and category ID). Specify StartTime and EndTime to retrieve data in batches. To query more audio and video files or traverse all audio and video information, see [Search for media information](https://help.aliyun.com/document_detail/86044.html).
 *
 * @param request GetVideoListRequest
 * @return GetVideoListResponse
 */
GetVideoListResponse Client::getVideoList(const GetVideoListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the playback credential (PlayAuth) for an audio or video file. ApsaraVideo Player SDK uses this credential to automatically obtain the playback URL. Because the playback credential has a validity period and is bound to a specific audio or video file, it cannot be shared or reused. An expired or invalid credential will cause playback failure. This playback method is suitable for audio and video playback scenarios that require high security.
 *
 * @description - When using ApsaraVideo Player SDK (applicable to the PlayAuth playback method), call this operation to obtain the playback credential. ApsaraVideo Player SDK uses the playback credential to automatically obtain the playback URL for playback. For more information, see [ApsaraVideo Player SDK](https://help.aliyun.com/document_detail/125579.html).
 * - If the playback credential expires, the playback URL cannot be obtained. You must obtain a new playback credential.
 *
 * @param request GetVideoPlayAuthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVideoPlayAuthResponse
 */
GetVideoPlayAuthResponse Client::getVideoPlayAuthWithOptions(const GetVideoPlayAuthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiVersion()) {
    query["ApiVersion"] = request.getApiVersion();
  }

  if (!!request.hasAuthInfoTimeout()) {
    query["AuthInfoTimeout"] = request.getAuthInfoTimeout();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.getReferenceId();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Retrieves the playback credential (PlayAuth) for an audio or video file. ApsaraVideo Player SDK uses this credential to automatically obtain the playback URL. Because the playback credential has a validity period and is bound to a specific audio or video file, it cannot be shared or reused. An expired or invalid credential will cause playback failure. This playback method is suitable for audio and video playback scenarios that require high security.
 *
 * @description - When using ApsaraVideo Player SDK (applicable to the PlayAuth playback method), call this operation to obtain the playback credential. ApsaraVideo Player SDK uses the playback credential to automatically obtain the playback URL for playback. For more information, see [ApsaraVideo Player SDK](https://help.aliyun.com/document_detail/125579.html).
 * - If the playback credential expires, the playback URL cannot be obtained. You must obtain a new playback credential.
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
    query["VodTemplateId"] = request.getVodTemplateId();
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
 * @summary Invokes this operation to query the parameter settings of a single image watermark template or text watermark template by watermark template ID, including the position, size, and display time of image watermarks, and the content, font, color, and position of text watermarks.
 *
 * @param request GetWatermarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWatermarkResponse
 */
GetWatermarkResponse Client::getWatermarkWithOptions(const GetWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWatermarkId()) {
    query["WatermarkId"] = request.getWatermarkId();
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
 * @summary Invokes this operation to query the parameter settings of a single image watermark template or text watermark template by watermark template ID, including the position, size, and display time of image watermarks, and the content, font, color, and position of text watermarks.
 *
 * @param request GetWatermarkRequest
 * @return GetWatermarkResponse
 */
GetWatermarkResponse Client::getWatermark(const GetWatermarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWatermarkWithOptions(request, runtime);
}

/**
 * @summary Queries the execution information of a workflow task.
 *
 * @description - **Before you use this operation, make sure that you are familiar with the billing methods and pricing of ApsaraVideo VOD. Using workflows may incur fees for transcoding, encryption, automated review, and other services. For billing details, see [Billing overview](https://help.aliyun.com/document_detail/188307.html).**
 * - You can call this operation to query workflow processing tasks. This operation currently supports only video understanding workflow task queries. Workflow tasks of other versions are not supported.
 *
 * @param request GetWorkflowTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkflowTaskResponse
 */
GetWorkflowTaskResponse Client::getWorkflowTaskWithOptions(const GetWorkflowTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkflowTask"},
    {"version" , "2017-03-21"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkflowTaskResponse>();
}

/**
 * @summary Queries the execution information of a workflow task.
 *
 * @description - **Before you use this operation, make sure that you are familiar with the billing methods and pricing of ApsaraVideo VOD. Using workflows may incur fees for transcoding, encryption, automated review, and other services. For billing details, see [Billing overview](https://help.aliyun.com/document_detail/188307.html).**
 * - You can call this operation to query workflow processing tasks. This operation currently supports only video understanding workflow task queries. Workflow tasks of other versions are not supported.
 *
 * @param request GetWorkflowTaskRequest
 * @return GetWorkflowTaskResponse
 */
GetWorkflowTaskResponse Client::getWorkflowTask(const GetWorkflowTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkflowTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the AI image information of a specified video.
 *
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)** and **China (Shanghai)**.
 * - This operation can query AI image information of only a single video. **Batch queries are not supported**.
 *
 * @param request ListAIImageInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAIImageInfoResponse
 */
ListAIImageInfoResponse Client::listAIImageInfoWithOptions(const ListAIImageInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Queries the AI image information of a specified video.
 *
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)** and **China (Shanghai)**.
 * - This operation can query AI image information of only a single video. **Batch queries are not supported**.
 *
 * @param request ListAIImageInfoRequest
 * @return ListAIImageInfoResponse
 */
ListAIImageInfoResponse Client::listAIImageInfo(const ListAIImageInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAIImageInfoWithOptions(request, runtime);
}

/**
 * @summary Queries intelligent tagging or media fingerprint jobs. After you submit an intelligent tagging or media fingerprint job, the job is processed asynchronously. You can call this operation to query job information in real time.
 *
 * @description - Regions that support media fingerprint: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * - Regions that support intelligent tagging: **China (Beijing)** and **China (Shanghai)**.
 *
 * @param request ListAIJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAIJobResponse
 */
ListAIJobResponse Client::listAIJobWithOptions(const ListAIJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobIds()) {
    query["JobIds"] = request.getJobIds();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Queries intelligent tagging or media fingerprint jobs. After you submit an intelligent tagging or media fingerprint job, the job is processed asynchronously. You can call this operation to query job information in real time.
 *
 * @description - Regions that support media fingerprint: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * - Regions that support intelligent tagging: **China (Beijing)** and **China (Shanghai)**.
 *
 * @param request ListAIJobRequest
 * @return ListAIJobResponse
 */
ListAIJobResponse Client::listAIJob(const ListAIJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAIJobWithOptions(request, runtime);
}

/**
 * @summary Queries the list of AI templates.
 *
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * - You can call this operation to query the list of AI templates of a specified type.
 *
 * @param request ListAITemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAITemplateResponse
 */
ListAITemplateResponse Client::listAITemplateWithOptions(const ListAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
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
 * @summary Queries the list of AI templates.
 *
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * - You can call this operation to query the list of AI templates of a specified type.
 *
 * @param request ListAITemplateRequest
 * @return ListAITemplateResponse
 */
ListAITemplateResponse Client::listAITemplate(const ListAITemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAITemplateWithOptions(request, runtime);
}

/**
 * @summary Queries a list of applications that you are authorized to access based on specified filter conditions.
 *
 * @description ### Usage notes
 * You can filter applications by application status.
 * ### QPS limit
 * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation properly. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request ListAppInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppInfoResponse
 */
ListAppInfoResponse Client::listAppInfoWithOptions(const ListAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Queries a list of applications that you are authorized to access based on specified filter conditions.
 *
 * @description ### Usage notes
 * You can filter applications by application status.
 * ### QPS limit
 * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation properly. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request ListAppInfoRequest
 * @return ListAppInfoResponse
 */
ListAppInfoResponse Client::listAppInfo(const ListAppInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppInfoWithOptions(request, runtime);
}

/**
 * @summary Invokes this operation to list the application permissions granted to a specified account identity (Resource Access Management (RAM) user or RAM role).
 *
 * @description - The **IdentityType** and **IdentityName** parameters take effect only when the caller invokes this operation with administrator permissions. Otherwise, only the application access policies granted to the current account identity are returned.
 *
 * @param request ListAppPoliciesForIdentityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAppPoliciesForIdentityResponse
 */
ListAppPoliciesForIdentityResponse Client::listAppPoliciesForIdentityWithOptions(const ListAppPoliciesForIdentityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasIdentityName()) {
    query["IdentityName"] = request.getIdentityName();
  }

  if (!!request.hasIdentityType()) {
    query["IdentityType"] = request.getIdentityType();
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
 * @summary Invokes this operation to list the application permissions granted to a specified account identity (Resource Access Management (RAM) user or RAM role).
 *
 * @description - The **IdentityType** and **IdentityName** parameters take effect only when the caller invokes this operation with administrator permissions. Otherwise, only the application access policies granted to the current account identity are returned.
 *
 * @param request ListAppPoliciesForIdentityRequest
 * @return ListAppPoliciesForIdentityResponse
 */
ListAppPoliciesForIdentityResponse Client::listAppPoliciesForIdentity(const ListAppPoliciesForIdentityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAppPoliciesForIdentityWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of China Chinese review security IPs.
 *
 * @param request ListAuditSecurityIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuditSecurityIpResponse
 */
ListAuditSecurityIpResponse Client::listAuditSecurityIpWithOptions(const ListAuditSecurityIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecurityGroupName()) {
    query["SecurityGroupName"] = request.getSecurityGroupName();
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
 * @summary Retrieves the list of China Chinese review security IPs.
 *
 * @param request ListAuditSecurityIpRequest
 * @return ListAuditSecurityIpResponse
 */
ListAuditSecurityIpResponse Client::listAuditSecurityIp(const ListAuditSecurityIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuditSecurityIpWithOptions(request, runtime);
}

/**
 * @summary Queries the list of animated images for a video by video ID.
 *
 * @description ### Usage notes
 * - After animated image capturing for a video is complete, call this operation to obtain the animated image information of the video.
 * - Animated image tasks can be initiated by calling an API operation ([SubmitDynamicImageJob](https://help.aliyun.com/document_detail/186842.html)) or by using the console. For more information, see [Animated images](https://help.aliyun.com/document_detail/177484.html).
 * ### QPS limit
 * The QPS limit for a single user for this operation is 100 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request ListDynamicImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDynamicImageResponse
 */
ListDynamicImageResponse Client::listDynamicImageWithOptions(const ListDynamicImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Queries the list of animated images for a video by video ID.
 *
 * @description ### Usage notes
 * - After animated image capturing for a video is complete, call this operation to obtain the animated image information of the video.
 * - Animated image tasks can be initiated by calling an API operation ([SubmitDynamicImageJob](https://help.aliyun.com/document_detail/186842.html)) or by using the console. For more information, see [Animated images](https://help.aliyun.com/document_detail/177484.html).
 * ### QPS limit
 * The QPS limit for a single user for this operation is 100 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request ListDynamicImageRequest
 * @return ListDynamicImageResponse
 */
ListDynamicImageResponse Client::listDynamicImage(const ListDynamicImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDynamicImageWithOptions(request, runtime);
}

/**
 * @summary Queries the historical task list based on a media asset ID.
 *
 * @description **Usage notes**
 * - To query detailed task information, call the [GetJobDetail](https://help.aliyun.com/document_detail/2861326.html) operation.
 * - This operation only supports querying asynchronous task data within the last 6 months. Supported task types: transcoding tasks, snapshot tasks, and AI tasks.
 * **QPS limit**
 * The single-user QPS limit for this operation is 15 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request ListJobInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListJobInfoResponse
 */
ListJobInfoResponse Client::listJobInfoWithOptions(const ListJobInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobType()) {
    query["JobType"] = request.getJobType();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
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
 * @summary Queries the historical task list based on a media asset ID.
 *
 * @description **Usage notes**
 * - To query detailed task information, call the [GetJobDetail](https://help.aliyun.com/document_detail/2861326.html) operation.
 * - This operation only supports querying asynchronous task data within the last 6 months. Supported task types: transcoding tasks, snapshot tasks, and AI tasks.
 * **QPS limit**
 * The single-user QPS limit for this operation is 15 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request ListJobInfoRequest
 * @return ListJobInfoResponse
 */
ListJobInfoResponse Client::listJobInfo(const ListJobInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listJobInfoWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of Live to VOD videos.
 *
 * @description A maximum of 5,000 records that match the specified filter conditions can be retrieved.
 *
 * @param request ListLiveRecordVideoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLiveRecordVideoResponse
 */
ListLiveRecordVideoResponse Client::listLiveRecordVideoWithOptions(const ListLiveRecordVideoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStreamName()) {
    query["StreamName"] = request.getStreamName();
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
 * @summary Retrieves the list of Live to VOD videos.
 *
 * @description A maximum of 5,000 records that match the specified filter conditions can be retrieved.
 *
 * @param request ListLiveRecordVideoRequest
 * @return ListLiveRecordVideoResponse
 */
ListLiveRecordVideoResponse Client::listLiveRecordVideo(const ListLiveRecordVideoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLiveRecordVideoWithOptions(request, runtime);
}

/**
 * @summary Queries snapshots generated by video snapshot jobs and thumbnail snapshots automatically generated by the system during video upload.
 *
 * @description If multiple snapshot jobs have been initiated for a video, this operation returns only the data of the most recent successful snapshot job.
 *
 * @param request ListSnapshotsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSnapshotsResponse
 */
ListSnapshotsResponse Client::listSnapshotsWithOptions(const ListSnapshotsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.getAuthTimeout();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSnapshotType()) {
    query["SnapshotType"] = request.getSnapshotType();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Queries snapshots generated by video snapshot jobs and thumbnail snapshots automatically generated by the system during video upload.
 *
 * @description If multiple snapshot jobs have been initiated for a video, this operation returns only the data of the most recent successful snapshot job.
 *
 * @param request ListSnapshotsRequest
 * @return ListSnapshotsResponse
 */
ListSnapshotsResponse Client::listSnapshots(const ListSnapshotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSnapshotsWithOptions(request, runtime);
}

/**
 * @summary Queries the historical transcoding task information of an audio or video file by its ID. This operation does not return specific job details.
 *
 * @description ### Usage notes
 * - To query detailed transcoding job information, call the [GetTranscodeTask](https://help.aliyun.com/document_detail/109121.html) operation.
 * - **This operation supports only querying transcoding task data within the last year.**
 * ### QPS limit
 * The single-user QPS limit for this operation is 15 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request ListTranscodeTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTranscodeTaskResponse
 */
ListTranscodeTaskResponse Client::listTranscodeTaskWithOptions(const ListTranscodeTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Queries the historical transcoding task information of an audio or video file by its ID. This operation does not return specific job details.
 *
 * @description ### Usage notes
 * - To query detailed transcoding job information, call the [GetTranscodeTask](https://help.aliyun.com/document_detail/109121.html) operation.
 * - **This operation supports only querying transcoding task data within the last year.**
 * ### QPS limit
 * The single-user QPS limit for this operation is 15 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request ListTranscodeTaskRequest
 * @return ListTranscodeTaskResponse
 */
ListTranscodeTaskResponse Client::listTranscodeTask(const ListTranscodeTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTranscodeTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the list of transcoding template configurations.
 *
 * @description > This operation does not return the transcoding template configuration information under each transcoding template group. You can call the [GetTranscodeTemplateGroup](https://help.aliyun.com/document_detail/102670.html) operation to obtain the information.
 *
 * @param request ListTranscodeTemplateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTranscodeTemplateGroupResponse
 */
ListTranscodeTemplateGroupResponse Client::listTranscodeTemplateGroupWithOptions(const ListTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
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
 * @summary Queries the list of transcoding template configurations.
 *
 * @description > This operation does not return the transcoding template configuration information under each transcoding template group. You can call the [GetTranscodeTemplateGroup](https://help.aliyun.com/document_detail/102670.html) operation to obtain the information.
 *
 * @param request ListTranscodeTemplateGroupRequest
 * @return ListTranscodeTemplateGroupResponse
 */
ListTranscodeTemplateGroupResponse Client::listTranscodeTemplateGroup(const ListTranscodeTemplateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTranscodeTemplateGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the list of snapshot templates.
 *
 * @param request ListVodTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVodTemplateResponse
 */
ListVodTemplateResponse Client::listVodTemplateWithOptions(const ListVodTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
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
 * @summary Queries the list of snapshot templates.
 *
 * @param request ListVodTemplateRequest
 * @return ListVodTemplateResponse
 */
ListVodTemplateResponse Client::listVodTemplate(const ListVodTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVodTemplateWithOptions(request, runtime);
}

/**
 * @summary Invokes this operation to query the parameter settings of all image watermark templates and text watermark templates that have been added in the current service region, including the position, size, and display time of image watermarks, and the content, font, color, position, and other parameter settings of text watermarks.
 *
 * @param request ListWatermarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWatermarkResponse
 */
ListWatermarkResponse Client::listWatermarkWithOptions(const ListWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
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
 * @summary Invokes this operation to query the parameter settings of all image watermark templates and text watermark templates that have been added in the current service region, including the position, size, and display time of image watermarks, and the content, font, color, position, and other parameter settings of text watermarks.
 *
 * @param request ListWatermarkRequest
 * @return ListWatermarkResponse
 */
ListWatermarkResponse Client::listWatermark(const ListWatermarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWatermarkWithOptions(request, runtime);
}

/**
 * @summary Invokes this operation to migrate resources such as media assets from one application to another. Application administrators can directly transfer resources. Resource Access Management (RAM) users or RAM roles must have write permissions on both the source and destination applications. Batch migration is supported.
 *
 * @param request MoveAppResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveAppResourceResponse
 */
MoveAppResourceResponse Client::moveAppResourceWithOptions(const MoveAppResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTargetAppId()) {
    query["TargetAppId"] = request.getTargetAppId();
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
 * @summary Invokes this operation to migrate resources such as media assets from one application to another. Application administrators can directly transfer resources. Resource Access Management (RAM) users or RAM roles must have write permissions on both the source and destination applications. Batch migration is supported.
 *
 * @param request MoveAppResourceRequest
 * @return MoveAppResourceResponse
 */
MoveAppResourceResponse Client::moveAppResource(const MoveAppResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveAppResourceWithOptions(request, runtime);
}

/**
 * @summary Prefetches content from the origin server to L2 Cache nodes so that the first access directly hits the cache, reducing the load on the origin server.
 *
 * @description - Currently, the only supported service region is **China (Shanghai)**.
 * - A maximum of 500 prefetch URL requests can be submitted per account per day. Directory-level prefetch is not supported.
 * - The purge and prefetch operations include the [RefreshVodObjectCaches](~~RefreshVodObjectCaches~~) purge operation and the [PreloadVodObjectCaches](~~PreloadVodObjectCaches~~) prefetch operation.
 *
 * @param request PreloadVodObjectCachesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreloadVodObjectCachesResponse
 */
PreloadVodObjectCachesResponse Client::preloadVodObjectCachesWithOptions(const PreloadVodObjectCachesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArea()) {
    query["Area"] = request.getArea();
  }

  if (!!request.hasL2Preload()) {
    query["L2Preload"] = request.getL2Preload();
  }

  if (!!request.hasObjectPath()) {
    query["ObjectPath"] = request.getObjectPath();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasWithHeader()) {
    query["WithHeader"] = request.getWithHeader();
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
 * @summary Prefetches content from the origin server to L2 Cache nodes so that the first access directly hits the cache, reducing the load on the origin server.
 *
 * @description - Currently, the only supported service region is **China (Shanghai)**.
 * - A maximum of 500 prefetch URL requests can be submitted per account per day. Directory-level prefetch is not supported.
 * - The purge and prefetch operations include the [RefreshVodObjectCaches](~~RefreshVodObjectCaches~~) purge operation and the [PreloadVodObjectCaches](~~PreloadVodObjectCaches~~) prefetch operation.
 *
 * @param request PreloadVodObjectCachesRequest
 * @return PreloadVodObjectCachesResponse
 */
PreloadVodObjectCachesResponse Client::preloadVodObjectCaches(const PreloadVodObjectCachesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return preloadVodObjectCachesWithOptions(request, runtime);
}

/**
 * @summary Produces one or more videos into a finished video. You can submit source videos directly through the timeline parameter, or create an online editing project first and then submit it for production.
 *
 * @description - **Before you use this operation, make sure that you are familiar with the billing methods and pricing of ApsaraVideo VOD. Online editing is a paid feature. For more information about billing, see [Video editing and production billing](~~188310#section-pyv-b8h-bo7~~).**
 * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the online editing project ID is returned (the video has not been produced yet, and the task enters a queue for asynchronous execution). The final result is sent through a callback notification. You can also call [GetEditingProject](https://help.aliyun.com/document_detail/69052.html) to query the task status.
 * - The video resources used in the online editing timeline can be materials in the material library or videos in the media library. If you use videos from the media library, make sure that their status is Normal.
 * - Videos are produced based on ProjectId and Timeline. The logic is as follows:
 *     - ProjectId and Timeline cannot both be empty. Otherwise, no basis exists to produce videos.
 *     - If ProjectId is empty and Timeline is not empty, an online editing project is automatically created with the specified Timeline. The materials referenced in the Timeline are extracted and set as the project materials. Then, video production begins.
 *     - If ProjectId is not empty and Timeline is empty, the most recently saved Timeline is retrieved based on ProjectId and used to produce videos.
 *     - If both ProjectId and Timeline are not empty, the specified Timeline is used to produce videos, and the corresponding online editing project is updated (Timeline and project materials). If other fields are specified, the corresponding project fields are also updated.
 * - The maximum number of tracks for video tracks, image tracks, and subtitle tracks is 100 each.
 * - The total number of materials cannot exceed 200, and the total file size of materials cannot exceed 1 TB.
 * - The region of the input or output bucket must be the same as the region where the ApsaraVideo VOD service is used.
 * - When the output is a video, the following resolution limits apply to the finished video:
 *   - Both the width and height must be at least 128 px.
 *   - Both the width and height must be at most 4096 px.
 *   - The short side must be at most 2160 px.
 * - After video production is complete, the video is automatically uploaded to ApsaraVideo VOD. Therefore, after video production is complete, ApsaraVideo VOD sends the **ProduceMediaComplete** and **FileUploadComplete** event notifications. After the produced video transcoding is complete, the **single definition video transcoding complete** and **all definition video transcoding complete** event notifications are sent.
 * - You can also add effects to the produced video. For more details, see [Effects](https://help.aliyun.com/document_detail/69082.html).
 *
 * @param request ProduceEditingProjectVideoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ProduceEditingProjectVideoResponse
 */
ProduceEditingProjectVideoResponse Client::produceEditingProjectVideoWithOptions(const ProduceEditingProjectVideoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.getCoverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasMediaMetadata()) {
    query["MediaMetadata"] = request.getMediaMetadata();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProduceConfig()) {
    query["ProduceConfig"] = request.getProduceConfig();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTimeline()) {
    query["Timeline"] = request.getTimeline();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Produces one or more videos into a finished video. You can submit source videos directly through the timeline parameter, or create an online editing project first and then submit it for production.
 *
 * @description - **Before you use this operation, make sure that you are familiar with the billing methods and pricing of ApsaraVideo VOD. Online editing is a paid feature. For more information about billing, see [Video editing and production billing](~~188310#section-pyv-b8h-bo7~~).**
 * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the online editing project ID is returned (the video has not been produced yet, and the task enters a queue for asynchronous execution). The final result is sent through a callback notification. You can also call [GetEditingProject](https://help.aliyun.com/document_detail/69052.html) to query the task status.
 * - The video resources used in the online editing timeline can be materials in the material library or videos in the media library. If you use videos from the media library, make sure that their status is Normal.
 * - Videos are produced based on ProjectId and Timeline. The logic is as follows:
 *     - ProjectId and Timeline cannot both be empty. Otherwise, no basis exists to produce videos.
 *     - If ProjectId is empty and Timeline is not empty, an online editing project is automatically created with the specified Timeline. The materials referenced in the Timeline are extracted and set as the project materials. Then, video production begins.
 *     - If ProjectId is not empty and Timeline is empty, the most recently saved Timeline is retrieved based on ProjectId and used to produce videos.
 *     - If both ProjectId and Timeline are not empty, the specified Timeline is used to produce videos, and the corresponding online editing project is updated (Timeline and project materials). If other fields are specified, the corresponding project fields are also updated.
 * - The maximum number of tracks for video tracks, image tracks, and subtitle tracks is 100 each.
 * - The total number of materials cannot exceed 200, and the total file size of materials cannot exceed 1 TB.
 * - The region of the input or output bucket must be the same as the region where the ApsaraVideo VOD service is used.
 * - When the output is a video, the following resolution limits apply to the finished video:
 *   - Both the width and height must be at least 128 px.
 *   - Both the width and height must be at most 4096 px.
 *   - The short side must be at most 2160 px.
 * - After video production is complete, the video is automatically uploaded to ApsaraVideo VOD. Therefore, after video production is complete, ApsaraVideo VOD sends the **ProduceMediaComplete** and **FileUploadComplete** event notifications. After the produced video transcoding is complete, the **single definition video transcoding complete** and **all definition video transcoding complete** event notifications are sent.
 * - You can also add effects to the produced video. For more details, see [Effects](https://help.aliyun.com/document_detail/69082.html).
 *
 * @param request ProduceEditingProjectVideoRequest
 * @return ProduceEditingProjectVideoResponse
 */
ProduceEditingProjectVideoResponse Client::produceEditingProjectVideo(const ProduceEditingProjectVideoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return produceEditingProjectVideoWithOptions(request, runtime);
}

/**
 * @summary Submits a refresh or prefetch task for audio or video files by audio or video ID.
 *
 * @description - ApsaraVideo VOD provides resource purge and prefetch features. The purge feature deletes cached resources on points of presence and forces the points of presence to retrieve the latest resources from the origin server through back-to-origin requests. The prefetch feature allows you to download and cache popular resources to points of presence before peak hours to improve access efficiency.
 * - This operation directly submits a refresh or prefetch node by audio or video ID and supports filtering by streaming format and definition, which allows you to refresh or prefetch specific streams as needed.
 * - You can submit a refresh or prefetch node for up to 20 audio or video files at a time.
 * ### QPS limit
 * The QPS limit for a single user for this operation is 50 calls per second. If the limit is exceeded, the API invocation is throttled, which may affect your business. Invoke this operation properly. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request RefreshMediaPlayUrlsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshMediaPlayUrlsResponse
 */
RefreshMediaPlayUrlsResponse Client::refreshMediaPlayUrlsWithOptions(const RefreshMediaPlayUrlsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefinitions()) {
    query["Definitions"] = request.getDefinitions();
  }

  if (!!request.hasFormats()) {
    query["Formats"] = request.getFormats();
  }

  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
  }

  if (!!request.hasResultType()) {
    query["ResultType"] = request.getResultType();
  }

  if (!!request.hasSliceCount()) {
    query["SliceCount"] = request.getSliceCount();
  }

  if (!!request.hasSliceFlag()) {
    query["SliceFlag"] = request.getSliceFlag();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Submits a refresh or prefetch task for audio or video files by audio or video ID.
 *
 * @description - ApsaraVideo VOD provides resource purge and prefetch features. The purge feature deletes cached resources on points of presence and forces the points of presence to retrieve the latest resources from the origin server through back-to-origin requests. The prefetch feature allows you to download and cache popular resources to points of presence before peak hours to improve access efficiency.
 * - This operation directly submits a refresh or prefetch node by audio or video ID and supports filtering by streaming format and definition, which allows you to refresh or prefetch specific streams as needed.
 * - You can submit a refresh or prefetch node for up to 20 audio or video files at a time.
 * ### QPS limit
 * The QPS limit for a single user for this operation is 50 calls per second. If the limit is exceeded, the API invocation is throttled, which may affect your business. Invoke this operation properly. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request RefreshMediaPlayUrlsRequest
 * @return RefreshMediaPlayUrlsResponse
 */
RefreshMediaPlayUrlsResponse Client::refreshMediaPlayUrls(const RefreshMediaPlayUrlsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshMediaPlayUrlsWithOptions(request, runtime);
}

/**
 * @summary Refreshes the upload credential for a video file after the upload times out.
 *
 * @description This operation can also be used to overwrite the source file of a video or audio file. This means that after you obtain the upload URL of the source file, you can upload the file again while keeping the audio or video ID unchanged. However, this may automatically trigger transcoding and snapshot capture if you have configured transcoding or snapshot capture upon upload. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
 *
 * @param request RefreshUploadVideoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshUploadVideoResponse
 */
RefreshUploadVideoResponse Client::refreshUploadVideoWithOptions(const RefreshUploadVideoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.getReferenceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Refreshes the upload credential for a video file after the upload times out.
 *
 * @description This operation can also be used to overwrite the source file of a video or audio file. This means that after you obtain the upload URL of the source file, you can upload the file again while keeping the audio or video ID unchanged. However, this may automatically trigger transcoding and snapshot capture if you have configured transcoding or snapshot capture upon upload. For more information, see [Upload URLs and credentials](https://help.aliyun.com/document_detail/55397.html).
 *
 * @param request RefreshUploadVideoRequest
 * @return RefreshUploadVideoResponse
 */
RefreshUploadVideoResponse Client::refreshUploadVideo(const RefreshUploadVideoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshUploadVideoWithOptions(request, runtime);
}

/**
 * @summary Purges file content on nodes. Specifies URL content to purge on cache nodes, and supports batch URL purging.
 *
 * @description - Currently, the only supported service region is **China (Shanghai)**.
 * - Each account can submit up to 2,000 URL purge requests and 100 directory purge requests per day.
 * - Purge and prefetch operations include the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) purge operation and the [PreloadVodObjectCaches](https://help.aliyun.com/document_detail/69211.html) prefetch operation.
 *
 * @param request RefreshVodObjectCachesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshVodObjectCachesResponse
 */
RefreshVodObjectCachesResponse Client::refreshVodObjectCachesWithOptions(const RefreshVodObjectCachesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
  }

  if (!!request.hasObjectPath()) {
    query["ObjectPath"] = request.getObjectPath();
  }

  if (!!request.hasObjectType()) {
    query["ObjectType"] = request.getObjectType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
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
 * @summary Purges file content on nodes. Specifies URL content to purge on cache nodes, and supports batch URL purging.
 *
 * @description - Currently, the only supported service region is **China (Shanghai)**.
 * - Each account can submit up to 2,000 URL purge requests and 100 directory purge requests per day.
 * - Purge and prefetch operations include the [RefreshVodObjectCaches](https://help.aliyun.com/document_detail/69215.html) purge operation and the [PreloadVodObjectCaches](https://help.aliyun.com/document_detail/69211.html) prefetch operation.
 *
 * @param request RefreshVodObjectCachesRequest
 * @return RefreshVodObjectCachesResponse
 */
RefreshVodObjectCachesResponse Client::refreshVodObjectCaches(const RefreshVodObjectCachesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshVodObjectCachesWithOptions(request, runtime);
}

/**
 * @summary Registers media assets. Existing media files stored in your own OSS bucket that is connected to ApsaraVideo VOD must be registered to generate the associated data required by VOD before you can use VOD features such as transcoding and snapshotting.
 *
 * @description - For audio and video files already stored in an OSS bucket connected to ApsaraVideo VOD, you must call this operation to generate the associated data required by VOD before you can initiate transcoding, snapshotting, AI processing, and other operations on these files by media ID.
 * - You can register up to **10 OSS media files** at a time, and all media files submitted in a single request must correspond to the same storage address.
 * - For media files uploaded through VOD, if no transcoding template group ID is specified, the default template group is used for transcoding. In contrast, after media asset registration, transcoding is not automatically triggered if no transcoding template group ID is specified. If a transcoding template group ID is specified, transcoding is performed based on the specified template group.
 * - If a media file is registered repeatedly, only the **unique media ID associated with it** is returned, and no other processing is performed.
 * - Make sure that the media file you want to register has a valid file name extension. Otherwise, the registration fails.
 *
 * @param request RegisterMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterMediaResponse
 */
RegisterMediaResponse Client::registerMediaWithOptions(const RegisterMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableFirstFrameCover()) {
    query["EnableFirstFrameCover"] = request.getEnableFirstFrameCover();
  }

  if (!!request.hasGenerateThumbnail()) {
    query["GenerateThumbnail"] = request.getGenerateThumbnail();
  }

  if (!!request.hasRegisterMetadatas()) {
    query["RegisterMetadatas"] = request.getRegisterMetadatas();
  }

  if (!!request.hasTemplateGroupId()) {
    query["TemplateGroupId"] = request.getTemplateGroupId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.getWorkflowId();
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
 * @summary Registers media assets. Existing media files stored in your own OSS bucket that is connected to ApsaraVideo VOD must be registered to generate the associated data required by VOD before you can use VOD features such as transcoding and snapshotting.
 *
 * @description - For audio and video files already stored in an OSS bucket connected to ApsaraVideo VOD, you must call this operation to generate the associated data required by VOD before you can initiate transcoding, snapshotting, AI processing, and other operations on these files by media ID.
 * - You can register up to **10 OSS media files** at a time, and all media files submitted in a single request must correspond to the same storage address.
 * - For media files uploaded through VOD, if no transcoding template group ID is specified, the default template group is used for transcoding. In contrast, after media asset registration, transcoding is not automatically triggered if no transcoding template group ID is specified. If a transcoding template group ID is specified, transcoding is performed based on the specified template group.
 * - If a media file is registered repeatedly, only the **unique media ID associated with it** is returned, and no other processing is performed.
 * - Make sure that the media file you want to register has a valid file name extension. Otherwise, the registration fails.
 *
 * @param request RegisterMediaRequest
 * @return RegisterMediaResponse
 */
RegisterMediaResponse Client::registerMedia(const RegisterMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerMediaWithOptions(request, runtime);
}

/**
 * @summary Restores media assets from frozen storage.
 *
 * @description - Make sure that you are familiar with the billing methods and pricing of ApsaraVideo VOD before you call this operation. Restoring media assets incurs storage fees. For more information, see [Media asset storage billing](~~188308#section-e97-xrp-mzz~~).
 * - This operation applies only to Archive and Cold Archive audio and video files. After a file is restored, it can be accessed. The storage class of an audio or video file that is being restored cannot be changed.
 * Restoration generates retrieval traffic. After a Cold Archive audio or video file is restored, a Standard storage copy of the file is generated for access. The file copy incurs Standard storage fees until the restoration period ends.
 *
 * @param request RestoreMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestoreMediaResponse
 */
RestoreMediaResponse Client::restoreMediaWithOptions(const RestoreMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
  }

  if (!!request.hasRestoreDays()) {
    query["RestoreDays"] = request.getRestoreDays();
  }

  if (!!request.hasRestoreTier()) {
    query["RestoreTier"] = request.getRestoreTier();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
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
 * @summary Restores media assets from frozen storage.
 *
 * @description - Make sure that you are familiar with the billing methods and pricing of ApsaraVideo VOD before you call this operation. Restoring media assets incurs storage fees. For more information, see [Media asset storage billing](~~188308#section-e97-xrp-mzz~~).
 * - This operation applies only to Archive and Cold Archive audio and video files. After a file is restored, it can be accessed. The storage class of an audio or video file that is being restored cannot be changed.
 * Restoration generates retrieval traffic. After a Cold Archive audio or video file is restored, a Standard storage copy of the file is generated for access. The file copy incurs Standard storage fees until the restoration period ends.
 *
 * @param request RestoreMediaRequest
 * @return RestoreMediaResponse
 */
RestoreMediaResponse Client::restoreMedia(const RestoreMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restoreMediaWithOptions(request, runtime);
}

/**
 * @summary Searches for online editing projects (video editing lists).
 *
 * @param request SearchEditingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchEditingProjectResponse
 */
SearchEditingProjectResponse Client::searchEditingProjectWithOptions(const SearchEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
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
 * @summary Searches for online editing projects (video editing lists).
 *
 * @param request SearchEditingProjectRequest
 * @return SearchEditingProjectResponse
 */
SearchEditingProjectResponse Client::searchEditingProject(const SearchEditingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchEditingProjectWithOptions(request, runtime);
}

/**
 * @summary Searches for media asset information such as videos, audio files, and images produced by ApsaraVideo VOD. You can use this operation with the media asset search protocol to perform multi-dimensional searches in ApsaraVideo VOD, including specifying return fields, exact matching, fuzzy matching, multi-value queries, range queries, and sort fields.
 *
 * @description For fields that support exact matching and fuzzy matching, when other query methods are used, the returned results follow the query method supported by the field. For example, if a field supports only fuzzy matching, results obtained through multi-value queries are also based on fuzzy matching.
 * The following describes the limits on the number of data records that can be retrieved:
 * - Method 1: Paged traversal
 *     For matched search results, you can set the pagination parameters PageNo (page number) and PageSize (number of records per page) to traverse up to 5,000 records. If the search results exceed 5,000 records, adjust the search conditions to narrow the result range. This method cannot traverse the complete dataset. To traverse more data, refer to Method 2.
 * - Method 2: Full traversal (for audio and video searches only)
 *   This method applies to video and audio content searches and supports traversing up to 2 million search results. If the number of search results exceeds 2 million, add more filter conditions to reduce the result count. When using this method, in addition to PageNo and PageSize, you must use the ScrollToken parameter for pagination. Each request supports traversing up to 100 records forward.
 * Using a PageSize of 20 as an example, the pagination logic is as follows:
 *     - If PageNo is 1, you can query up to the next 5 pages of data.
 *     - If PageNo is 2, you can query up to the next 6 pages of data.
 * Set pagination parameters properly and choose the appropriate traversal method based on the result set size. If you need to page through more than 1,000 records, use Method 2 for faster and more convenient data processing.
 *
 * @param request SearchMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMediaResponse
 */
SearchMediaResponse Client::searchMediaWithOptions(const SearchMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFields()) {
    query["Fields"] = request.getFields();
  }

  if (!!request.hasMatch()) {
    query["Match"] = request.getMatch();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasScrollToken()) {
    query["ScrollToken"] = request.getScrollToken();
  }

  if (!!request.hasSearchType()) {
    query["SearchType"] = request.getSearchType();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
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
 * @summary Searches for media asset information such as videos, audio files, and images produced by ApsaraVideo VOD. You can use this operation with the media asset search protocol to perform multi-dimensional searches in ApsaraVideo VOD, including specifying return fields, exact matching, fuzzy matching, multi-value queries, range queries, and sort fields.
 *
 * @description For fields that support exact matching and fuzzy matching, when other query methods are used, the returned results follow the query method supported by the field. For example, if a field supports only fuzzy matching, results obtained through multi-value queries are also based on fuzzy matching.
 * The following describes the limits on the number of data records that can be retrieved:
 * - Method 1: Paged traversal
 *     For matched search results, you can set the pagination parameters PageNo (page number) and PageSize (number of records per page) to traverse up to 5,000 records. If the search results exceed 5,000 records, adjust the search conditions to narrow the result range. This method cannot traverse the complete dataset. To traverse more data, refer to Method 2.
 * - Method 2: Full traversal (for audio and video searches only)
 *   This method applies to video and audio content searches and supports traversing up to 2 million search results. If the number of search results exceeds 2 million, add more filter conditions to reduce the result count. When using this method, in addition to PageNo and PageSize, you must use the ScrollToken parameter for pagination. Each request supports traversing up to 100 records forward.
 * Using a PageSize of 20 as an example, the pagination logic is as follows:
 *     - If PageNo is 1, you can query up to the next 5 pages of data.
 *     - If PageNo is 2, you can query up to the next 6 pages of data.
 * Set pagination parameters properly and choose the appropriate traversal method based on the result set size. If you need to page through more than 1,000 records, use Method 2 for faster and more convenient data processing.
 *
 * @param request SearchMediaRequest
 * @return SearchMediaResponse
 */
SearchMediaResponse Client::searchMedia(const SearchMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMediaWithOptions(request, runtime);
}

/**
 * @summary Sets the playback key for an application.
 *
 * @param request SetAppPlayKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAppPlayKeyResponse
 */
SetAppPlayKeyResponse Client::setAppPlayKeyWithOptions(const SetAppPlayKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlayKey()) {
    query["PlayKey"] = request.getPlayKey();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Sets the playback key for an application.
 *
 * @param request SetAppPlayKeyRequest
 * @return SetAppPlayKeyResponse
 */
SetAppPlayKeyResponse Client::setAppPlayKey(const SetAppPlayKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAppPlayKeyWithOptions(request, runtime);
}

/**
 * @summary Sets the review security IP addresses.
 *
 * @description When a video is in the Checking or Blocked state, only requests from review security IP addresses can play the video.
 *
 * @param request SetAuditSecurityIpRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAuditSecurityIpResponse
 */
SetAuditSecurityIpResponse Client::setAuditSecurityIpWithOptions(const SetAuditSecurityIpRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIps()) {
    query["Ips"] = request.getIps();
  }

  if (!!request.hasOperateMode()) {
    query["OperateMode"] = request.getOperateMode();
  }

  if (!!request.hasSecurityGroupName()) {
    query["SecurityGroupName"] = request.getSecurityGroupName();
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
 * @summary Sets the review security IP addresses.
 *
 * @description When a video is in the Checking or Blocked state, only requests from review security IP addresses can play the video.
 *
 * @param request SetAuditSecurityIpRequest
 * @return SetAuditSecurityIpResponse
 */
SetAuditSecurityIpResponse Client::setAuditSecurityIp(const SetAuditSecurityIpRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAuditSecurityIpWithOptions(request, runtime);
}

/**
 * @summary Updates the content of the cross-domain file crossdomain.xml for ApsaraVideo VOD.
 *
 * @description >Notice: If you access the cross-domain file through a domain name, purge the CDN cache for the update to take effect immediately. You can logon to the console to [purge files](https://help.aliyun.com/document_detail/86098.html) or invoke the [Refresh Cache operation](https://help.aliyun.com/document_detail/69215.html).
 *
 * @param request SetCrossdomainContentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetCrossdomainContentResponse
 */
SetCrossdomainContentResponse Client::setCrossdomainContentWithOptions(const SetCrossdomainContentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceRealOwnerId()) {
    query["ResourceRealOwnerId"] = request.getResourceRealOwnerId();
  }

  if (!!request.hasStorageLocation()) {
    query["StorageLocation"] = request.getStorageLocation();
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
 * @summary Updates the content of the cross-domain file crossdomain.xml for ApsaraVideo VOD.
 *
 * @description >Notice: If you access the cross-domain file through a domain name, purge the CDN cache for the update to take effect immediately. You can logon to the console to [purge files](https://help.aliyun.com/document_detail/86098.html) or invoke the [Refresh Cache operation](https://help.aliyun.com/document_detail/69215.html).
 *
 * @param request SetCrossdomainContentRequest
 * @return SetCrossdomainContentResponse
 */
SetCrossdomainContentResponse Client::setCrossdomainContent(const SetCrossdomainContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setCrossdomainContentWithOptions(request, runtime);
}

/**
 * @summary Sets a default AI template.
 *
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * - Obtain the AI template ID first, and then call this operation to set the template as the default AI template. A default AI template cannot be deleted.
 *
 * @param request SetDefaultAITemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDefaultAITemplateResponse
 */
SetDefaultAITemplateResponse Client::setDefaultAITemplateWithOptions(const SetDefaultAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Sets a default AI template.
 *
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * - Obtain the AI template ID first, and then call this operation to set the template as the default AI template. A default AI template cannot be deleted.
 *
 * @param request SetDefaultAITemplateRequest
 * @return SetDefaultAITemplateResponse
 */
SetDefaultAITemplateResponse Client::setDefaultAITemplate(const SetDefaultAITemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDefaultAITemplateWithOptions(request, runtime);
}

/**
 * @summary Sets the default transcoding template group configuration.
 *
 * @param request SetDefaultTranscodeTemplateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDefaultTranscodeTemplateGroupResponse
 */
SetDefaultTranscodeTemplateGroupResponse Client::setDefaultTranscodeTemplateGroupWithOptions(const SetDefaultTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTranscodeTemplateGroupId()) {
    query["TranscodeTemplateGroupId"] = request.getTranscodeTemplateGroupId();
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
 * @summary Sets the default transcoding template group configuration.
 *
 * @param request SetDefaultTranscodeTemplateGroupRequest
 * @return SetDefaultTranscodeTemplateGroupResponse
 */
SetDefaultTranscodeTemplateGroupResponse Client::setDefaultTranscodeTemplateGroup(const SetDefaultTranscodeTemplateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDefaultTranscodeTemplateGroupWithOptions(request, runtime);
}

/**
 * @summary Sets a specified watermark template as the default watermark template.
 *
 * @param request SetDefaultWatermarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDefaultWatermarkResponse
 */
SetDefaultWatermarkResponse Client::setDefaultWatermarkWithOptions(const SetDefaultWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWatermarkId()) {
    query["WatermarkId"] = request.getWatermarkId();
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
 * @summary Sets a specified watermark template as the default watermark template.
 *
 * @param request SetDefaultWatermarkRequest
 * @return SetDefaultWatermarkResponse
 */
SetDefaultWatermarkResponse Client::setDefaultWatermark(const SetDefaultWatermarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDefaultWatermarkWithOptions(request, runtime);
}

/**
 * @summary Sets the materials to be edited for an online editing project.
 *
 * @param request SetEditingProjectMaterialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetEditingProjectMaterialsResponse
 */
SetEditingProjectMaterialsResponse Client::setEditingProjectMaterialsWithOptions(const SetEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaterialIds()) {
    query["MaterialIds"] = request.getMaterialIds();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Sets the materials to be edited for an online editing project.
 *
 * @param request SetEditingProjectMaterialsRequest
 * @return SetEditingProjectMaterialsResponse
 */
SetEditingProjectMaterialsResponse Client::setEditingProjectMaterials(const SetEditingProjectMaterialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setEditingProjectMaterialsWithOptions(request, runtime);
}

/**
 * @summary Sets the callback method, callback URL, and event types for event notifications.
 *
 * @description HTTP callbacks and Simple Message Queue (formerly MNS) callbacks are supported. For more information, see [Event notifications](https://help.aliyun.com/document_detail/55627.html).
 * ### QPS limit
 * The single-user QPS limit for this operation is 15 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request SetMessageCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetMessageCallbackResponse
 */
SetMessageCallbackResponse Client::setMessageCallbackWithOptions(const SetMessageCallbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAuthKey()) {
    query["AuthKey"] = request.getAuthKey();
  }

  if (!!request.hasAuthSwitch()) {
    query["AuthSwitch"] = request.getAuthSwitch();
  }

  if (!!request.hasCallbackType()) {
    query["CallbackType"] = request.getCallbackType();
  }

  if (!!request.hasCallbackURL()) {
    query["CallbackURL"] = request.getCallbackURL();
  }

  if (!!request.hasEventTypeList()) {
    query["EventTypeList"] = request.getEventTypeList();
  }

  if (!!request.hasMnsEndpoint()) {
    query["MnsEndpoint"] = request.getMnsEndpoint();
  }

  if (!!request.hasMnsQueueName()) {
    query["MnsQueueName"] = request.getMnsQueueName();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
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
 * @summary Sets the callback method, callback URL, and event types for event notifications.
 *
 * @description HTTP callbacks and Simple Message Queue (formerly MNS) callbacks are supported. For more information, see [Event notifications](https://help.aliyun.com/document_detail/55627.html).
 * ### QPS limit
 * The single-user QPS limit for this operation is 15 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request SetMessageCallbackRequest
 * @return SetMessageCallbackResponse
 */
SetMessageCallbackResponse Client::setMessageCallback(const SetMessageCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setMessageCallbackWithOptions(request, runtime);
}

/**
 * @summary Configures whether the certificate feature is enabled for a specified domain name and modifies certificate information.
 *
 * @description - Currently, the service address supports only **China (Shanghai)**.
 *
 * @param request SetVodDomainCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetVodDomainCertificateResponse
 */
SetVodDomainCertificateResponse Client::setVodDomainCertificateWithOptions(const SetVodDomainCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertName()) {
    query["CertName"] = request.getCertName();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSSLPri()) {
    query["SSLPri"] = request.getSSLPri();
  }

  if (!!request.hasSSLProtocol()) {
    query["SSLProtocol"] = request.getSSLProtocol();
  }

  if (!!request.hasSSLPub()) {
    query["SSLPub"] = request.getSSLPub();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
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
 * @summary Configures whether the certificate feature is enabled for a specified domain name and modifies certificate information.
 *
 * @description - Currently, the service address supports only **China (Shanghai)**.
 *
 * @param request SetVodDomainCertificateRequest
 * @return SetVodDomainCertificateResponse
 */
SetVodDomainCertificateResponse Client::setVodDomainCertificate(const SetVodDomainCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setVodDomainCertificateWithOptions(request, runtime);
}

/**
 * @summary Sets whether the certificate feature is enabled for a specified domain name and updates the certificate information.
 *
 * @description - This operation currently supports only the **China East 2 (Shanghai)** region.
 * - Maximum calls per user: 30 calls per second.
 * - Request method: POST.
 *
 * @param request SetVodDomainSSLCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetVodDomainSSLCertificateResponse
 */
SetVodDomainSSLCertificateResponse Client::setVodDomainSSLCertificateWithOptions(const SetVodDomainSSLCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertId()) {
    query["CertId"] = request.getCertId();
  }

  if (!!request.hasCertName()) {
    query["CertName"] = request.getCertName();
  }

  if (!!request.hasCertRegion()) {
    query["CertRegion"] = request.getCertRegion();
  }

  if (!!request.hasCertType()) {
    query["CertType"] = request.getCertType();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSSLPri()) {
    query["SSLPri"] = request.getSSLPri();
  }

  if (!!request.hasSSLProtocol()) {
    query["SSLProtocol"] = request.getSSLProtocol();
  }

  if (!!request.hasSSLPub()) {
    query["SSLPub"] = request.getSSLPub();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
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
 * @summary Sets whether the certificate feature is enabled for a specified domain name and updates the certificate information.
 *
 * @description - This operation currently supports only the **China East 2 (Shanghai)** region.
 * - Maximum calls per user: 30 calls per second.
 * - Request method: POST.
 *
 * @param request SetVodDomainSSLCertificateRequest
 * @return SetVodDomainSSLCertificateResponse
 */
SetVodDomainSSLCertificateResponse Client::setVodDomainSSLCertificate(const SetVodDomainSSLCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setVodDomainSSLCertificateWithOptions(request, runtime);
}

/**
 * @summary Submits an image automated review task. The task is asynchronously executed after it is submitted. The task may not be complete when the response is returned.
 *
 * @description - **Before you use this operation, make sure that you are familiar with the billing methods and pricing of ApsaraVideo VOD. Automated review is a paid feature. For billing details, <props="china">see [Automated review billing](~~188310#section-g7l-s3o-9ng~~).<props="intl">submit a ticket or contact your Alibaba Cloud account manager.**
 * - <props="china">This operation is supported only in the **China (Shanghai), China (Beijing), and Singapore** regions.<props="intl">This operation is supported only in the Singapore region.
 * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the task ID is returned. At this point, the task is not complete and enters a queue for asynchronous execution. The final result is sent through a callback notification. You can also call [Query automated review job](https://help.aliyun.com/document_detail/454959.html) to query the task status.
 * - The size of a single image cannot exceed 20 MB. The height or width cannot exceed 30,000 px. The total number of pixels cannot exceed 250 million px.
 * - (Recommended) The image resolution is at least 256 × 256 px. A lower resolution may affect the review results.
 *
 * @param request SubmitAIImageAuditJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAIImageAuditJobResponse
 */
SubmitAIImageAuditJobResponse Client::submitAIImageAuditJobWithOptions(const SubmitAIImageAuditJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaAuditConfiguration()) {
    query["MediaAuditConfiguration"] = request.getMediaAuditConfiguration();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Submits an image automated review task. The task is asynchronously executed after it is submitted. The task may not be complete when the response is returned.
 *
 * @description - **Before you use this operation, make sure that you are familiar with the billing methods and pricing of ApsaraVideo VOD. Automated review is a paid feature. For billing details, <props="china">see [Automated review billing](~~188310#section-g7l-s3o-9ng~~).<props="intl">submit a ticket or contact your Alibaba Cloud account manager.**
 * - <props="china">This operation is supported only in the **China (Shanghai), China (Beijing), and Singapore** regions.<props="intl">This operation is supported only in the Singapore region.
 * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the task ID is returned. At this point, the task is not complete and enters a queue for asynchronous execution. The final result is sent through a callback notification. You can also call [Query automated review job](https://help.aliyun.com/document_detail/454959.html) to query the task status.
 * - The size of a single image cannot exceed 20 MB. The height or width cannot exceed 30,000 px. The total number of pixels cannot exceed 250 million px.
 * - (Recommended) The image resolution is at least 256 × 256 px. A lower resolution may affect the review results.
 *
 * @param request SubmitAIImageAuditJobRequest
 * @return SubmitAIImageAuditJobResponse
 */
SubmitAIImageAuditJobResponse Client::submitAIImageAuditJob(const SubmitAIImageAuditJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAIImageAuditJobWithOptions(request, runtime);
}

/**
 * @summary Submits an AI image processing task.
 *
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)** and **China (Shanghai)**.
 * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the task ID is returned. The task is not yet complete at this point and enters a background queue for asynchronous execution. The final result is sent through a callback notification. You can also call [GetAIImageJobs](https://help.aliyun.com/document_detail/186923.html) to query the task execution result.
 *
 * @param request SubmitAIImageJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAIImageJobResponse
 */
SubmitAIImageJobResponse Client::submitAIImageJobWithOptions(const SubmitAIImageJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAIPipelineId()) {
    query["AIPipelineId"] = request.getAIPipelineId();
  }

  if (!!request.hasAITemplateId()) {
    query["AITemplateId"] = request.getAITemplateId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Submits an AI image processing task.
 *
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)** and **China (Shanghai)**.
 * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the task ID is returned. The task is not yet complete at this point and enters a background queue for asynchronous execution. The final result is sent through a callback notification. You can also call [GetAIImageJobs](https://help.aliyun.com/document_detail/186923.html) to query the task execution result.
 *
 * @param request SubmitAIImageJobRequest
 * @return SubmitAIImageJobResponse
 */
SubmitAIImageJobResponse Client::submitAIImageJob(const SubmitAIImageJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAIImageJobWithOptions(request, runtime);
}

/**
 * @summary Submits an intelligent tagging or media fingerprint job.
 *
 * @description - **Before using this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Intelligent tagging and media fingerprint are paid features. For billing details, see [Video AI billing](~~188310#section-g7l-s3o-9ng~~).**
 * - Regions supported by media fingerprint: **China (Beijing)**, **China (Shanghai)**, and **Singapore**. Regions supported by intelligent tagging: **China (Beijing)** and **China (Shanghai)**.
 * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit an AI job, the job ID is returned. The job is not yet complete at this point and enters a queue for asynchronous execution. We recommend that you configure the [event notification](https://help.aliyun.com/document_detail/55627.html) feature and set the callback event to **Video AI Processing Complete** to obtain the final processing result. You can also call [GetTaskDetail](https://help.aliyun.com/document_detail/2861326.html) to query the job status.
 * - You must activate the media fingerprint or intelligent tagging service before you can call this operation to submit AI jobs. For more information, see [Video AI](https://help.aliyun.com/document_detail/101148.html).
 * - When you use media fingerprint for the first time, provide your UID and region information and submit a ticket to apply for free activation of the fingerprint library. Otherwise, the media fingerprint feature will not work properly. For more information about how to submit a ticket, see [Contact us](https://help.aliyun.com/document_detail/464625.html).
 *
 * @param request SubmitAIJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAIJobResponse
 */
SubmitAIJobResponse Client::submitAIJobWithOptions(const SubmitAIJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.getConfig();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTypes()) {
    query["Types"] = request.getTypes();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Submits an intelligent tagging or media fingerprint job.
 *
 * @description - **Before using this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Intelligent tagging and media fingerprint are paid features. For billing details, see [Video AI billing](~~188310#section-g7l-s3o-9ng~~).**
 * - Regions supported by media fingerprint: **China (Beijing)**, **China (Shanghai)**, and **Singapore**. Regions supported by intelligent tagging: **China (Beijing)** and **China (Shanghai)**.
 * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit an AI job, the job ID is returned. The job is not yet complete at this point and enters a queue for asynchronous execution. We recommend that you configure the [event notification](https://help.aliyun.com/document_detail/55627.html) feature and set the callback event to **Video AI Processing Complete** to obtain the final processing result. You can also call [GetTaskDetail](https://help.aliyun.com/document_detail/2861326.html) to query the job status.
 * - You must activate the media fingerprint or intelligent tagging service before you can call this operation to submit AI jobs. For more information, see [Video AI](https://help.aliyun.com/document_detail/101148.html).
 * - When you use media fingerprint for the first time, provide your UID and region information and submit a ticket to apply for free activation of the fingerprint library. Otherwise, the media fingerprint feature will not work properly. For more information about how to submit a ticket, see [Contact us](https://help.aliyun.com/document_detail/464625.html).
 *
 * @param request SubmitAIJobRequest
 * @return SubmitAIJobResponse
 */
SubmitAIJobResponse Client::submitAIJob(const SubmitAIJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAIJobWithOptions(request, runtime);
}

/**
 * @summary Submits an automated review job for audio and video files. The job is executed asynchronously after submission, and the job may not be complete when the response is returned.
 *
 * @description - **Before using this API, make sure that you understand the billing methods and pricing of ApsaraVideo VOD. Automated review is a paid feature. For billing details, <props="china">see [Automated review billing](~~188310#section-g7l-s3o-9ng~~).<props="intl">submit a ticket or contact your Alibaba Cloud account manager.**
 * - This operation currently supports only the **Shanghai**, **Beijing**, and **Singapore** regions.
 * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the task ID is returned. The task is not complete at this point and enters a queue for asynchronous execution. The final result is sent through a callback notification. You can also call [Query automated review job](https://help.aliyun.com/document_detail/454959.html) to query the task status.
 * - For the development guide on submitting automated review jobs, see [Automated review](https://help.aliyun.com/document_detail/101148.html).
 * - After an automated review job is complete, the image resources generated during the job are retained free of charge for only two weeks in the VOD system bucket allocated by ApsaraVideo VOD. The images are automatically deleted after two weeks.
 *
 * @param request SubmitAIMediaAuditJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAIMediaAuditJobResponse
 */
SubmitAIMediaAuditJobResponse Client::submitAIMediaAuditJobWithOptions(const SubmitAIMediaAuditJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaAuditConfiguration()) {
    query["MediaAuditConfiguration"] = request.getMediaAuditConfiguration();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.getMediaType();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Submits an automated review job for audio and video files. The job is executed asynchronously after submission, and the job may not be complete when the response is returned.
 *
 * @description - **Before using this API, make sure that you understand the billing methods and pricing of ApsaraVideo VOD. Automated review is a paid feature. For billing details, <props="china">see [Automated review billing](~~188310#section-g7l-s3o-9ng~~).<props="intl">submit a ticket or contact your Alibaba Cloud account manager.**
 * - This operation currently supports only the **Shanghai**, **Beijing**, and **Singapore** regions.
 * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the task ID is returned. The task is not complete at this point and enters a queue for asynchronous execution. The final result is sent through a callback notification. You can also call [Query automated review job](https://help.aliyun.com/document_detail/454959.html) to query the task status.
 * - For the development guide on submitting automated review jobs, see [Automated review](https://help.aliyun.com/document_detail/101148.html).
 * - After an automated review job is complete, the image resources generated during the job are retained free of charge for only two weeks in the VOD system bucket allocated by ApsaraVideo VOD. The images are automatically deleted after two weeks.
 *
 * @param request SubmitAIMediaAuditJobRequest
 * @return SubmitAIMediaAuditJobResponse
 */
SubmitAIMediaAuditJobResponse Client::submitAIMediaAuditJob(const SubmitAIMediaAuditJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAIMediaAuditJobWithOptions(request, runtime);
}

/**
 * @summary Submits a digital watermarking (copyright watermark or tracing watermark) extraction job to asynchronously extract a copyright watermark or tracing watermark.
 *
 * @description - **Before using this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Digital watermarking is a paid feature. Both the generation and extraction of digital watermarks incur fees. For billing details, see [Digital watermarking billing](~~188310#62b9c940403se~~).**
 * - Currently, this operation is available only in the following regions: **China (Shanghai)** and **China (Beijing)**.
 * - <props="china">For more information about the generation and extraction of digital watermarks, see [Digital watermarking](https://help.aliyun.com/document_detail/2527021.html).Before you submit a digital watermark extraction job, make sure that the following conditions are met:
 *   - The video from which you want to extract the watermark has been uploaded to ApsaraVideo VOD.
 *   - The duration of the video from which you want to extract the watermark exceeds 6 minutes.
 * - After you submit a digital watermark extraction job, call the [GetDigitalWatermarkExtractResult](https://help.aliyun.com/document_detail/2587769.html) operation to query the job result.
 *
 * @param request SubmitDigitalWatermarkExtractJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDigitalWatermarkExtractJobResponse
 */
SubmitDigitalWatermarkExtractJobResponse Client::submitDigitalWatermarkExtractJobWithOptions(const SubmitDigitalWatermarkExtractJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtractType()) {
    query["ExtractType"] = request.getExtractType();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Submits a digital watermarking (copyright watermark or tracing watermark) extraction job to asynchronously extract a copyright watermark or tracing watermark.
 *
 * @description - **Before using this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Digital watermarking is a paid feature. Both the generation and extraction of digital watermarks incur fees. For billing details, see [Digital watermarking billing](~~188310#62b9c940403se~~).**
 * - Currently, this operation is available only in the following regions: **China (Shanghai)** and **China (Beijing)**.
 * - <props="china">For more information about the generation and extraction of digital watermarks, see [Digital watermarking](https://help.aliyun.com/document_detail/2527021.html).Before you submit a digital watermark extraction job, make sure that the following conditions are met:
 *   - The video from which you want to extract the watermark has been uploaded to ApsaraVideo VOD.
 *   - The duration of the video from which you want to extract the watermark exceeds 6 minutes.
 * - After you submit a digital watermark extraction job, call the [GetDigitalWatermarkExtractResult](https://help.aliyun.com/document_detail/2587769.html) operation to query the job result.
 *
 * @param request SubmitDigitalWatermarkExtractJobRequest
 * @return SubmitDigitalWatermarkExtractJobResponse
 */
SubmitDigitalWatermarkExtractJobResponse Client::submitDigitalWatermarkExtractJob(const SubmitDigitalWatermarkExtractJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDigitalWatermarkExtractJobWithOptions(request, runtime);
}

/**
 * @summary Submits a media animated image job for asynchronous processing.
 *
 * @description ### Usage notes
 * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the task ID is returned. The task is queued for asynchronous execution in the background. You can receive the final result through a callback notification or proactively query the task status by calling [Get task details](https://help.aliyun.com/document_detail/2861326.html).
 * - You can submit an animated image job only for videos in the **UploadSucc**, **Transcoding**, **Normal**, **Checking**, or **Blocked** state.
 * - Animated image production is billed as video transcoding at the same rate, based on resolution and duration. For more information, see [Media transcoding billing](https://help.aliyun.com/document_detail/188308.html).
 * ### QPS limit
 * The QPS limit for a single user on this operation is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request SubmitDynamicImageJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDynamicImageJobResponse
 */
SubmitDynamicImageJobResponse Client::submitDynamicImageJobWithOptions(const SubmitDynamicImageJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDynamicImageTemplateId()) {
    query["DynamicImageTemplateId"] = request.getDynamicImageTemplateId();
  }

  if (!!request.hasOverrideParams()) {
    query["OverrideParams"] = request.getOverrideParams();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Submits a media animated image job for asynchronous processing.
 *
 * @description ### Usage notes
 * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the task ID is returned. The task is queued for asynchronous execution in the background. You can receive the final result through a callback notification or proactively query the task status by calling [Get task details](https://help.aliyun.com/document_detail/2861326.html).
 * - You can submit an animated image job only for videos in the **UploadSucc**, **Transcoding**, **Normal**, **Checking**, or **Blocked** state.
 * - Animated image production is billed as video transcoding at the same rate, based on resolution and duration. For more information, see [Media transcoding billing](https://help.aliyun.com/document_detail/188308.html).
 * ### QPS limit
 * The QPS limit for a single user on this operation is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request SubmitDynamicImageJobRequest
 * @return SubmitDynamicImageJobResponse
 */
SubmitDynamicImageJobResponse Client::submitDynamicImageJob(const SubmitDynamicImageJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDynamicImageJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a media fingerprint job.
 *
 * @description Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 *
 * @param request SubmitMediaDNADeleteJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitMediaDNADeleteJobResponse
 */
SubmitMediaDNADeleteJobResponse Client::submitMediaDNADeleteJobWithOptions(const SubmitMediaDNADeleteJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Deletes a media fingerprint job.
 *
 * @description Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 *
 * @param request SubmitMediaDNADeleteJobRequest
 * @return SubmitMediaDNADeleteJobResponse
 */
SubmitMediaDNADeleteJobResponse Client::submitMediaDNADeleteJob(const SubmitMediaDNADeleteJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitMediaDNADeleteJobWithOptions(request, runtime);
}

/**
 * @summary Transcodes a video by using a China Production Studio (China Production Studio) for preprocessing.
 *
 * @description - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the task ID is returned. The task is queued for asynchronous execution in the background. The final result is sent through a callback notification. You can also call [GetTaskDetail](https://help.aliyun.com/document_detail/2861326.html) to query the task status.
 * - Video preprocessing is essentially a transcoding process that generates videos that meet the playback requirements of the China Production Studio. Therefore, **metering and billing** information is generated. For billing details, see [China Production Studio fees](https://help.aliyun.com/document_detail/64531.html).
 * - To meet the quality requirements of the China Production Studio for materials, videos in MP4 format with a short side of 360 must meet at least one of the following conditions before preprocessing can be initiated: the resolution exceeds 1920, the bit rate exceeds 6000 kbps, or the frame rate exceeds 25.
 * - You can receive the [TranscodeComplete](https://help.aliyun.com/document_detail/55638.html) callback message to obtain the processing result. When the callback message contains **Preprocess=true**, it indicates that the preprocessing is complete.
 *
 * @param request SubmitPreprocessJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitPreprocessJobsResponse
 */
SubmitPreprocessJobsResponse Client::submitPreprocessJobsWithOptions(const SubmitPreprocessJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPreprocessType()) {
    query["PreprocessType"] = request.getPreprocessType();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Transcodes a video by using a China Production Studio (China Production Studio) for preprocessing.
 *
 * @description - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the task ID is returned. The task is queued for asynchronous execution in the background. The final result is sent through a callback notification. You can also call [GetTaskDetail](https://help.aliyun.com/document_detail/2861326.html) to query the task status.
 * - Video preprocessing is essentially a transcoding process that generates videos that meet the playback requirements of the China Production Studio. Therefore, **metering and billing** information is generated. For billing details, see [China Production Studio fees](https://help.aliyun.com/document_detail/64531.html).
 * - To meet the quality requirements of the China Production Studio for materials, videos in MP4 format with a short side of 360 must meet at least one of the following conditions before preprocessing can be initiated: the resolution exceeds 1920, the bit rate exceeds 6000 kbps, or the frame rate exceeds 25.
 * - You can receive the [TranscodeComplete](https://help.aliyun.com/document_detail/55638.html) callback message to obtain the processing result. When the callback message contains **Preprocess=true**, it indicates that the preprocessing is complete.
 *
 * @param request SubmitPreprocessJobsRequest
 * @return SubmitPreprocessJobsResponse
 */
SubmitPreprocessJobsResponse Client::submitPreprocessJobs(const SubmitPreprocessJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitPreprocessJobsWithOptions(request, runtime);
}

/**
 * @summary Submits a video snapshot job to start asynchronous snapshot processing.
 *
 * @description - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the task ID is returned (the task is not yet complete and enters a queue for asynchronous execution). The final result is sent through a callback notification. You can also proactively query the task status by calling [Get task details](https://help.aliyun.com/document_detail/2861326.html).
 * - Only JPG images are supported.
 * - When the snapshot is complete, an event notification of [Video snapshot complete](https://help.aliyun.com/document_detail/57337.html) with EventType=SnapshotComplete and SubType=SpecifiedTime is sent.
 * ### QPS limit
 * The QPS limit for a single user on this operation is 30 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
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
    request.setSpecifiedOffsetTimesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSpecifiedOffsetTimes(), "SpecifiedOffsetTimes", "json"));
  }

  json query = {};
  if (!!request.hasCount()) {
    query["Count"] = request.getCount();
  }

  if (!!request.hasHeight()) {
    query["Height"] = request.getHeight();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.getReferenceId();
  }

  if (!!request.hasSnapshotTemplateId()) {
    query["SnapshotTemplateId"] = request.getSnapshotTemplateId();
  }

  if (!!request.hasSpecifiedOffsetTime()) {
    query["SpecifiedOffsetTime"] = request.getSpecifiedOffsetTime();
  }

  if (!!request.hasSpecifiedOffsetTimesShrink()) {
    query["SpecifiedOffsetTimes"] = request.getSpecifiedOffsetTimesShrink();
  }

  if (!!request.hasSpriteSnapshotConfig()) {
    query["SpriteSnapshotConfig"] = request.getSpriteSnapshotConfig();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
  }

  if (!!request.hasWidth()) {
    query["Width"] = request.getWidth();
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
 * @summary Submits a video snapshot job to start asynchronous snapshot processing.
 *
 * @description - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the task ID is returned (the task is not yet complete and enters a queue for asynchronous execution). The final result is sent through a callback notification. You can also proactively query the task status by calling [Get task details](https://help.aliyun.com/document_detail/2861326.html).
 * - Only JPG images are supported.
 * - When the snapshot is complete, an event notification of [Video snapshot complete](https://help.aliyun.com/document_detail/57337.html) with EventType=SnapshotComplete and SubType=SpecifiedTime is sent.
 * ### QPS limit
 * The QPS limit for a single user on this operation is 30 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request SubmitSnapshotJobRequest
 * @return SubmitSnapshotJobResponse
 */
SubmitSnapshotJobResponse Client::submitSnapshotJob(const SubmitSnapshotJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSnapshotJobWithOptions(request, runtime);
}

/**
 * @summary Submits a media transcoding job to start asynchronous transcoding.
 *
 * @description ### Usage notes
 * - **Before you use this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Transcoding is a paid feature. For more information about billing, see [Transcoding billing](~~188308#section-ejb-nii-nqa~~).**
 * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the task ID is returned. The task is not yet complete at this point and enters a queue for asynchronous execution. The final result is sent through a callback notification. You can also call [GetTranscodeTask](https://help.aliyun.com/document_detail/454946.html) to query the task status.
 * - Only videos in the **UploadSucc**, **Normal**, or **Checking** state can be transcoded.
 * - To obtain transcoding results, configure callback messages: [SingleCompleteEvent](https://help.aliyun.com/document_detail/55636.html) and [AllCompleteEvent](https://help.aliyun.com/document_detail/55638.html).
 * - This operation supports dynamic replacement of subtitle URLs in HLS adaptive bitrate streaming packaging tasks. If the packaging task does not involve subtitle packaging, do not use this operation to initiate the task. Instead, specify the corresponding transcoding template group ID during video upload to automatically trigger the packaging process.
 *
 * @param request SubmitTranscodeJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitTranscodeJobsResponse
 */
SubmitTranscodeJobsResponse Client::submitTranscodeJobsWithOptions(const SubmitTranscodeJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncryptConfig()) {
    query["EncryptConfig"] = request.getEncryptConfig();
  }

  if (!!request.hasOverrideParams()) {
    query["OverrideParams"] = request.getOverrideParams();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.getPipelineId();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.getReferenceId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTemplateGroupId()) {
    query["TemplateGroupId"] = request.getTemplateGroupId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Submits a media transcoding job to start asynchronous transcoding.
 *
 * @description ### Usage notes
 * - **Before you use this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Transcoding is a paid feature. For more information about billing, see [Transcoding billing](~~188308#section-ejb-nii-nqa~~).**
 * - This is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, the task ID is returned. The task is not yet complete at this point and enters a queue for asynchronous execution. The final result is sent through a callback notification. You can also call [GetTranscodeTask](https://help.aliyun.com/document_detail/454946.html) to query the task status.
 * - Only videos in the **UploadSucc**, **Normal**, or **Checking** state can be transcoded.
 * - To obtain transcoding results, configure callback messages: [SingleCompleteEvent](https://help.aliyun.com/document_detail/55636.html) and [AllCompleteEvent](https://help.aliyun.com/document_detail/55638.html).
 * - This operation supports dynamic replacement of subtitle URLs in HLS adaptive bitrate streaming packaging tasks. If the packaging task does not involve subtitle packaging, do not use this operation to initiate the task. Instead, specify the corresponding transcoding template group ID during video upload to automatically trigger the packaging process.
 *
 * @param request SubmitTranscodeJobsRequest
 * @return SubmitTranscodeJobsResponse
 */
SubmitTranscodeJobsResponse Client::submitTranscodeJobs(const SubmitTranscodeJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitTranscodeJobsWithOptions(request, runtime);
}

/**
 * @summary Initiates a VOD workflow for a video.
 *
 * @description - **Before using this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Using workflows may incur fees for transcoding, encryption, automated review, and other services. For more information, see [Billing overview](https://help.aliyun.com/document_detail/188307.html).**
 * - This operation is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, a task ID is returned (the task is not yet complete and enters a background queue for asynchronous execution). The final result is sent through a callback notification. You can also call [GetTask](https://help.aliyun.com/document_detail/2861326.html) to query the task status.
 * - Call this operation to initiate a workflow processing task for a video. For more information about workflows, see [Workflow](https://help.aliyun.com/document_detail/115347.html).
 *
 * @param request SubmitWorkflowJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitWorkflowJobResponse
 */
SubmitWorkflowJobResponse Client::submitWorkflowJobWithOptions(const SubmitWorkflowJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.getWorkflowId();
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
 * @summary Initiates a VOD workflow for a video.
 *
 * @description - **Before using this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Using workflows may incur fees for transcoding, encryption, automated review, and other services. For more information, see [Billing overview](https://help.aliyun.com/document_detail/188307.html).**
 * - This operation is an [asynchronous operation](https://help.aliyun.com/document_detail/3027551.html). After you submit a task, a task ID is returned (the task is not yet complete and enters a background queue for asynchronous execution). The final result is sent through a callback notification. You can also call [GetTask](https://help.aliyun.com/document_detail/2861326.html) to query the task status.
 * - Call this operation to initiate a workflow processing task for a video. For more information about workflows, see [Workflow](https://help.aliyun.com/document_detail/115347.html).
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
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * - After you call the [AddAITemplate](https://help.aliyun.com/document_detail/102930.html) operation to add an AI template, you can call this operation to modify the AI template.
 *
 * @param request UpdateAITemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAITemplateResponse
 */
UpdateAITemplateResponse Client::updateAITemplateWithOptions(const UpdateAITemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateConfig()) {
    query["TemplateConfig"] = request.getTemplateConfig();
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
 * @description - Currently, this operation is supported in the following regions: **China (Beijing)**, **China (Shanghai)**, and **Singapore**.
 * - After you call the [AddAITemplate](https://help.aliyun.com/document_detail/102930.html) operation to add an AI template, you can call this operation to modify the AI template.
 *
 * @param request UpdateAITemplateRequest
 * @return UpdateAITemplateResponse
 */
UpdateAITemplateResponse Client::updateAITemplate(const UpdateAITemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAITemplateWithOptions(request, runtime);
}

/**
 * @summary Updates application information.
 *
 * @description After an application is created, you can call this operation to locate an application by its application ID and modify the name, description, and status of the application.
 * ### QPS limit
 * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation properly. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request UpdateAppInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAppInfoResponse
 */
UpdateAppInfoResponse Client::updateAppInfoWithOptions(const UpdateAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Updates application information.
 *
 * @description After an application is created, you can call this operation to locate an application by its application ID and modify the name, description, and status of the application.
 * ### QPS limit
 * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation properly. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request UpdateAppInfoRequest
 * @return UpdateAppInfoResponse
 */
UpdateAppInfoResponse Client::updateAppInfo(const UpdateAppInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAppInfoWithOptions(request, runtime);
}

/**
 * @summary Batch updates the information of auxiliary media assets, such as title, description, tags, and category, by specifying the unique identifiers (IDs) of the auxiliary media assets that have been uploaded to ApsaraVideo VOD, including watermarked images, subtitle files, and other materials.
 *
 * @description You can update the information of up to 20 auxiliary media assets at a time.
 *
 * @param request UpdateAttachedMediaInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAttachedMediaInfosResponse
 */
UpdateAttachedMediaInfosResponse Client::updateAttachedMediaInfosWithOptions(const UpdateAttachedMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUpdateContent()) {
    query["UpdateContent"] = request.getUpdateContent();
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
 * @summary Batch updates the information of auxiliary media assets, such as title, description, tags, and category, by specifying the unique identifiers (IDs) of the auxiliary media assets that have been uploaded to ApsaraVideo VOD, including watermarked images, subtitle files, and other materials.
 *
 * @description You can update the information of up to 20 auxiliary media assets at a time.
 *
 * @param request UpdateAttachedMediaInfosRequest
 * @return UpdateAttachedMediaInfosResponse
 */
UpdateAttachedMediaInfosResponse Client::updateAttachedMediaInfos(const UpdateAttachedMediaInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAttachedMediaInfosWithOptions(request, runtime);
}

/**
 * @summary Updates the name of a category.
 *
 * @description After a category is created, you can call this operation to modify the name of the category. If the category has been annotated to some media assets, the category name annotated to those media assets is updated synchronously after the category name is modified.
 *
 * @param request UpdateCategoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCategoryResponse
 */
UpdateCategoryResponse Client::updateCategoryWithOptions(const UpdateCategoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCateId()) {
    query["CateId"] = request.getCateId();
  }

  if (!!request.hasCateName()) {
    query["CateName"] = request.getCateName();
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
 * @summary Updates the name of a category.
 *
 * @description After a category is created, you can call this operation to modify the name of the category. If the category has been annotated to some media assets, the category name annotated to those media assets is updated synchronously after the category name is modified.
 *
 * @param request UpdateCategoryRequest
 * @return UpdateCategoryResponse
 */
UpdateCategoryResponse Client::updateCategory(const UpdateCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCategoryWithOptions(request, runtime);
}

/**
 * @summary Modifies an online editing project (video editing task).
 *
 * @param request UpdateEditingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEditingProjectResponse
 */
UpdateEditingProjectResponse Client::updateEditingProjectWithOptions(const UpdateEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.getCoverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.getOwnerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTimeline()) {
    query["Timeline"] = request.getTimeline();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
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
 * @summary Modifies an online editing project (video editing task).
 *
 * @param request UpdateEditingProjectRequest
 * @return UpdateEditingProjectResponse
 */
UpdateEditingProjectResponse Client::updateEditingProject(const UpdateEditingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEditingProjectWithOptions(request, runtime);
}

/**
 * @summary Batch modifies the title, description, tags, and category information of images by image ID after the images are uploaded to ApsaraVideo VOD.
 *
 * @description - This operation only supports modifying uploaded images. Modifying images generated from video snapshots is not supported.
 * - You can modify the information of up to 20 images at a time.
 *
 * @param request UpdateImageInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateImageInfosResponse
 */
UpdateImageInfosResponse Client::updateImageInfosWithOptions(const UpdateImageInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUpdateContent()) {
    query["UpdateContent"] = request.getUpdateContent();
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
 * @summary Batch modifies the title, description, tags, and category information of images by image ID after the images are uploaded to ApsaraVideo VOD.
 *
 * @description - This operation only supports modifying uploaded images. Modifying images generated from video snapshots is not supported.
 * - You can modify the information of up to 20 images at a time.
 *
 * @param request UpdateImageInfosRequest
 * @return UpdateImageInfosResponse
 */
UpdateImageInfosResponse Client::updateImageInfos(const UpdateImageInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateImageInfosWithOptions(request, runtime);
}

/**
 * @summary Modifies the storage class of a media asset.
 *
 * @description - Before using this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Modifying the storage class of a media asset incurs storage fees. For billing details, see [Media asset storage billing](~~188308#section-e97-xrp-mzz~~).
 * - Modifying the storage class is an **asynchronous operation**. A callback is sent to you after the entire operation is complete.
 * - If the current storage class of a media asset is Archive or ColdArchive, calling this operation automatically triggers a restore. After the restore is complete, the storage class is modified. You do not need to manually call the RestoreMedia operation to restore the media asset. For ColdArchive media assets, you need to specify the restore priority. The default value is RestoreTier=Standard.
 * - A media asset that is being modified cannot be modified again or be used for production or processing.
 * - Media assets in non-Standard storage classes have minimum storage duration requirements: Infrequent Access/source file Infrequent Access requires at least 30 days. Archive/source file Archive requires at least 60 days. ColdArchive/source file ColdArchive requires at least 180 days. If the storage duration is insufficient, modifying the storage class incurs storage fees for the remaining days. For example, if you modify the storage class from Infrequent Access to Standard after 10 days of storage, you are charged for the remaining 20 days of Infrequent Access storage, totaling 30 days of Infrequent Access storage fees.
 * - **Modifying the storage class of a self-managed bucket is not supported**.
 *
 * @param request UpdateMediaStorageClassRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaStorageClassResponse
 */
UpdateMediaStorageClassResponse Client::updateMediaStorageClassWithOptions(const UpdateMediaStorageClassRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAllowUpdateWithoutTimeLimit()) {
    query["AllowUpdateWithoutTimeLimit"] = request.getAllowUpdateWithoutTimeLimit();
  }

  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.getMediaIds();
  }

  if (!!request.hasRestoreTier()) {
    query["RestoreTier"] = request.getRestoreTier();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasStorageClass()) {
    query["StorageClass"] = request.getStorageClass();
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
 * @summary Modifies the storage class of a media asset.
 *
 * @description - Before using this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Modifying the storage class of a media asset incurs storage fees. For billing details, see [Media asset storage billing](~~188308#section-e97-xrp-mzz~~).
 * - Modifying the storage class is an **asynchronous operation**. A callback is sent to you after the entire operation is complete.
 * - If the current storage class of a media asset is Archive or ColdArchive, calling this operation automatically triggers a restore. After the restore is complete, the storage class is modified. You do not need to manually call the RestoreMedia operation to restore the media asset. For ColdArchive media assets, you need to specify the restore priority. The default value is RestoreTier=Standard.
 * - A media asset that is being modified cannot be modified again or be used for production or processing.
 * - Media assets in non-Standard storage classes have minimum storage duration requirements: Infrequent Access/source file Infrequent Access requires at least 30 days. Archive/source file Archive requires at least 60 days. ColdArchive/source file ColdArchive requires at least 180 days. If the storage duration is insufficient, modifying the storage class incurs storage fees for the remaining days. For example, if you modify the storage class from Infrequent Access to Standard after 10 days of storage, you are charged for the remaining 20 days of Infrequent Access storage, totaling 30 days of Infrequent Access storage fees.
 * - **Modifying the storage class of a self-managed bucket is not supported**.
 *
 * @param request UpdateMediaStorageClassRequest
 * @return UpdateMediaStorageClassResponse
 */
UpdateMediaStorageClassResponse Client::updateMediaStorageClass(const UpdateMediaStorageClassRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMediaStorageClassWithOptions(request, runtime);
}

/**
 * @summary Modifies transcoding configurations. You can modify the configuration of a specified transcoding template in a transcoding template group.
 *
 * @description For security purposes, you cannot add, modify, or delete transcoding template groups that are in the locked state. You can call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation to query the template configuration and check whether the template group is locked based on the Locked response parameter. Alternatively, you can call this operation to unlock the template group before you add, modify, or delete templates.
 *
 * @param request UpdateTranscodeTemplateGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTranscodeTemplateGroupResponse
 */
UpdateTranscodeTemplateGroupResponse Client::updateTranscodeTemplateGroupWithOptions(const UpdateTranscodeTemplateGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLocked()) {
    query["Locked"] = request.getLocked();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTranscodeTemplateGroupId()) {
    query["TranscodeTemplateGroupId"] = request.getTranscodeTemplateGroupId();
  }

  if (!!request.hasTranscodeTemplateList()) {
    query["TranscodeTemplateList"] = request.getTranscodeTemplateList();
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
 * @summary Modifies transcoding configurations. You can modify the configuration of a specified transcoding template in a transcoding template group.
 *
 * @description For security purposes, you cannot add, modify, or delete transcoding template groups that are in the locked state. You can call the [GetTranscodeTemplateGroup](~~GetTranscodeTemplateGroup~~) operation to query the template configuration and check whether the template group is locked based on the Locked response parameter. Alternatively, you can call this operation to unlock the template group before you add, modify, or delete templates.
 *
 * @param request UpdateTranscodeTemplateGroupRequest
 * @return UpdateTranscodeTemplateGroupResponse
 */
UpdateTranscodeTemplateGroupResponse Client::updateTranscodeTemplateGroup(const UpdateTranscodeTemplateGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTranscodeTemplateGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about a single audio or video file.
 *
 * @description ### Operation description
 * This operation locates an audio or video file by video ID and supports modifying the title, tags, description, and other information of the file. If a parameter is specified, the corresponding field is updated. Otherwise, the field is not overwritten or updated.
 * ### QPS limit
 * A single user can perform a maximum of 100 queries per second (QPS). Throttling is triggered when the QPS limit is exceeded, which may affect your business. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request UpdateVideoInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVideoInfoResponse
 */
UpdateVideoInfoResponse Client::updateVideoInfoWithOptions(const UpdateVideoInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCateId()) {
    query["CateId"] = request.getCateId();
  }

  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.getCoverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.getReferenceId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  if (!!request.hasVideoId()) {
    query["VideoId"] = request.getVideoId();
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
 * @summary Modifies the information about a single audio or video file.
 *
 * @description ### Operation description
 * This operation locates an audio or video file by video ID and supports modifying the title, tags, description, and other information of the file. If a parameter is specified, the corresponding field is updated. Otherwise, the field is not overwritten or updated.
 * ### QPS limit
 * A single user can perform a maximum of 100 queries per second (QPS). Throttling is triggered when the QPS limit is exceeded, which may affect your business. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request UpdateVideoInfoRequest
 * @return UpdateVideoInfoResponse
 */
UpdateVideoInfoResponse Client::updateVideoInfo(const UpdateVideoInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVideoInfoWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about multiple audio and video files at a time.
 *
 * @description ### Usage notes
 * - Audio and video files are identified by their IDs. You can modify the title, tags, and description of audio and video files. If a parameter is specified, the corresponding field is updated. Otherwise, the field is not overwritten or updated.
 * - You can modify the information about up to 20 audio and video files at a time.
 * ### QPS limit
 * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation properly. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request UpdateVideoInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVideoInfosResponse
 */
UpdateVideoInfosResponse Client::updateVideoInfosWithOptions(const UpdateVideoInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUpdateContent()) {
    query["UpdateContent"] = request.getUpdateContent();
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
 * @summary Modifies the information about multiple audio and video files at a time.
 *
 * @description ### Usage notes
 * - Audio and video files are identified by their IDs. You can modify the title, tags, and description of audio and video files. If a parameter is specified, the corresponding field is updated. Otherwise, the field is not overwritten or updated.
 * - You can modify the information about up to 20 audio and video files at a time.
 * ### QPS limit
 * The single-user QPS limit for this operation is 30 calls per second. If the limit is exceeded, the API call is throttled, which may affect your business. Call this operation properly. For more information, see [QPS limit](https://help.aliyun.com/document_detail/342790.html).
 *
 * @param request UpdateVideoInfosRequest
 * @return UpdateVideoInfosResponse
 */
UpdateVideoInfosResponse Client::updateVideoInfos(const UpdateVideoInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVideoInfosWithOptions(request, runtime);
}

/**
 * @summary Modifies an accelerated domain name.
 *
 * @description > This operation is available only in the **China (Shanghai)** region.
 *
 * @param request UpdateVodDomainRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVodDomainResponse
 */
UpdateVodDomainResponse Client::updateVodDomainWithOptions(const UpdateVodDomainRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSecurityToken()) {
    query["SecurityToken"] = request.getSecurityToken();
  }

  if (!!request.hasSources()) {
    query["Sources"] = request.getSources();
  }

  if (!!request.hasTopLevelDomain()) {
    query["TopLevelDomain"] = request.getTopLevelDomain();
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
 * @summary Modifies an accelerated domain name.
 *
 * @description > This operation is available only in the **China (Shanghai)** region.
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
    query["Name"] = request.getName();
  }

  if (!!request.hasTemplateConfig()) {
    query["TemplateConfig"] = request.getTemplateConfig();
  }

  if (!!request.hasVodTemplateId()) {
    query["VodTemplateId"] = request.getVodTemplateId();
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
 * @summary Modifies the name and watermark configuration (WatermarkConfig) of an image and text watermark template that was added by calling the AddWatermark operation.
 *
 * @description - After you invoke [AddWatermark](~~AddWatermark~~) to add an image and text watermark template, you can invoke this operation to modify the name and watermark configuration of the template.
 * - This operation does not support replacing the image in an image watermark template or modifying the template across templatetypes (such as changing an image watermark template to a text watermark template).
 *
 * @param request UpdateWatermarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWatermarkResponse
 */
UpdateWatermarkResponse Client::updateWatermarkWithOptions(const UpdateWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasWatermarkConfig()) {
    query["WatermarkConfig"] = request.getWatermarkConfig();
  }

  if (!!request.hasWatermarkId()) {
    query["WatermarkId"] = request.getWatermarkId();
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
 * @summary Modifies the name and watermark configuration (WatermarkConfig) of an image and text watermark template that was added by calling the AddWatermark operation.
 *
 * @description - After you invoke [AddWatermark](~~AddWatermark~~) to add an image and text watermark template, you can invoke this operation to modify the name and watermark configuration of the template.
 * - This operation does not support replacing the image in an image watermark template or modifying the template across templatetypes (such as changing an image watermark template to a text watermark template).
 *
 * @param request UpdateWatermarkRequest
 * @return UpdateWatermarkResponse
 */
UpdateWatermarkResponse Client::updateWatermark(const UpdateWatermarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWatermarkWithOptions(request, runtime);
}

/**
 * @summary Pulls audio and video media files for upload based on source file URLs. Batch upload is supported.
 *
 * @description - **Before using this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Uploading media files to ApsaraVideo VOD incurs storage fees. For billing details, see [Media asset storage billing](~~188308#section_e97_xrp_mzz~~). If you have enabled storage transfer acceleration, uploading media files to ApsaraVideo VOD also incurs upload acceleration fees. For billing details, see [Storage transfer acceleration billing](~~188310#section_sta_zm2_tsv~~).**
 * - For the media file formats supported by this operation, see [Media formats](~~55396#section-e27-2rj-mde~~).
 * - This operation is mainly applicable to scenarios where files are not stored on a local server or terminal and need to be uploaded through a URL with public network access.
 * - This operation is an [asynchronous upload operation](https://help.aliyun.com/document_detail/3027551.html). It is not real-time and does not guarantee timeliness. Generally, the migration upload is completed within hours or even days after the node is submitted. If you have high timeliness requirements, use the upload SDK instead.
 * - If a callback is configured, you will receive the [URL upload video complete](https://help.aliyun.com/document_detail/86326.html) event notification after the upload is completed. You can call the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation to query the upload status.
 * - After an upload node is submitted, an asynchronous node is generated in the cloud for execute. All URL upload nodes committed by users in the corresponding service region are queued for execute. The completion time is affected by the number of existing nodes. After the upload is completed, you can associate the URL with the video ID based on the information returned in the event notification (message callback).
 * - This operation currently supports only the **China (Shanghai)**, **China (Beijing)**, **China (Shenzhen)**, **Singapore**, and **US (Silicon Valley)** regions.
 * - Each time you commit an upload node for the same media file URL, a new media resource is generated in ApsaraVideo VOD (that is, a new media ID is generated).
 * - If a single file exceeds 20 GB, the upload is failed. If you need to upload a single file larger than 20 GB, use the upload SDK. For more information, see [Overview of the upload SDK](https://help.aliyun.com/document_detail/52200.html).
 *
 * @param request UploadMediaByURLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadMediaByURLResponse
 */
UploadMediaByURLResponse Client::uploadMediaByURLWithOptions(const UploadMediaByURLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEnableFirstFrameCover()) {
    query["EnableFirstFrameCover"] = request.getEnableFirstFrameCover();
  }

  if (!!request.hasGenerateThumbnail()) {
    query["GenerateThumbnail"] = request.getGenerateThumbnail();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasStorageLocation()) {
    query["StorageLocation"] = request.getStorageLocation();
  }

  if (!!request.hasTemplateGroupId()) {
    query["TemplateGroupId"] = request.getTemplateGroupId();
  }

  if (!!request.hasUploadMetadatas()) {
    query["UploadMetadatas"] = request.getUploadMetadatas();
  }

  if (!!request.hasUploadURLs()) {
    query["UploadURLs"] = request.getUploadURLs();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.getWorkflowId();
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
 * @summary Pulls audio and video media files for upload based on source file URLs. Batch upload is supported.
 *
 * @description - **Before using this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Uploading media files to ApsaraVideo VOD incurs storage fees. For billing details, see [Media asset storage billing](~~188308#section_e97_xrp_mzz~~). If you have enabled storage transfer acceleration, uploading media files to ApsaraVideo VOD also incurs upload acceleration fees. For billing details, see [Storage transfer acceleration billing](~~188310#section_sta_zm2_tsv~~).**
 * - For the media file formats supported by this operation, see [Media formats](~~55396#section-e27-2rj-mde~~).
 * - This operation is mainly applicable to scenarios where files are not stored on a local server or terminal and need to be uploaded through a URL with public network access.
 * - This operation is an [asynchronous upload operation](https://help.aliyun.com/document_detail/3027551.html). It is not real-time and does not guarantee timeliness. Generally, the migration upload is completed within hours or even days after the node is submitted. If you have high timeliness requirements, use the upload SDK instead.
 * - If a callback is configured, you will receive the [URL upload video complete](https://help.aliyun.com/document_detail/86326.html) event notification after the upload is completed. You can call the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation to query the upload status.
 * - After an upload node is submitted, an asynchronous node is generated in the cloud for execute. All URL upload nodes committed by users in the corresponding service region are queued for execute. The completion time is affected by the number of existing nodes. After the upload is completed, you can associate the URL with the video ID based on the information returned in the event notification (message callback).
 * - This operation currently supports only the **China (Shanghai)**, **China (Beijing)**, **China (Shenzhen)**, **Singapore**, and **US (Silicon Valley)** regions.
 * - Each time you commit an upload node for the same media file URL, a new media resource is generated in ApsaraVideo VOD (that is, a new media ID is generated).
 * - If a single file exceeds 20 GB, the upload is failed. If you need to upload a single file larger than 20 GB, use the upload SDK. For more information, see [Overview of the upload SDK](https://help.aliyun.com/document_detail/52200.html).
 *
 * @param request UploadMediaByURLRequest
 * @return UploadMediaByURLResponse
 */
UploadMediaByURLResponse Client::uploadMediaByURL(const UploadMediaByURLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadMediaByURLWithOptions(request, runtime);
}

/**
 * @summary Uploads a transcoded stream file from external storage and mounts it to the corresponding ApsaraVideo VOD media asset.
 *
 * @description - **Before using this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Uploading media files to ApsaraVideo VOD incurs storage fees. For more information, see [Media asset storage billing](~~188308#section_e97_xrp_mzz~~). If you have enabled storage transmission acceleration, upload acceleration fees also apply. For more information, see [Storage transmission acceleration billing](~~188310#section_sta_zm2_tsv~~).**
 * - This operation is currently supported only in the **Shanghai** and **Singapore** regions.
 * - Call this operation to upload a transcoded stream file from external storage and mount it to the corresponding ApsaraVideo VOD media asset. The supported HDR types for transcoded streams are HDR, HDR10, HLG, DolbyVision, HDRVivid, and SDR+.
 * - You can call the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation to query the upload status. After the upload is complete, you will receive the [URL upload transcoded stream complete](https://help.aliyun.com/document_detail/376427.html) event notification.
 *
 * @param request UploadStreamByURLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadStreamByURLResponse
 */
UploadStreamByURLResponse Client::uploadStreamByURLWithOptions(const UploadStreamByURLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDefinition()) {
    query["Definition"] = request.getDefinition();
  }

  if (!!request.hasFileExtension()) {
    query["FileExtension"] = request.getFileExtension();
  }

  if (!!request.hasHDRType()) {
    query["HDRType"] = request.getHDRType();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.getMediaId();
  }

  if (!!request.hasStreamURL()) {
    query["StreamURL"] = request.getStreamURL();
  }

  if (!!request.hasUploadMetadata()) {
    query["UploadMetadata"] = request.getUploadMetadata();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.getUserData();
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
 * @summary Uploads a transcoded stream file from external storage and mounts it to the corresponding ApsaraVideo VOD media asset.
 *
 * @description - **Before using this operation, make sure that you fully understand the billing methods and pricing of ApsaraVideo VOD. Uploading media files to ApsaraVideo VOD incurs storage fees. For more information, see [Media asset storage billing](~~188308#section_e97_xrp_mzz~~). If you have enabled storage transmission acceleration, upload acceleration fees also apply. For more information, see [Storage transmission acceleration billing](~~188310#section_sta_zm2_tsv~~).**
 * - This operation is currently supported only in the **Shanghai** and **Singapore** regions.
 * - Call this operation to upload a transcoded stream file from external storage and mount it to the corresponding ApsaraVideo VOD media asset. The supported HDR types for transcoded streams are HDR, HDR10, HLG, DolbyVision, HDRVivid, and SDR+.
 * - You can call the [GetURLUploadInfos](https://help.aliyun.com/document_detail/106830.html) operation to query the upload status. After the upload is complete, you will receive the [URL upload transcoded stream complete](https://help.aliyun.com/document_detail/376427.html) event notification.
 *
 * @param request UploadStreamByURLRequest
 * @return UploadStreamByURLResponse
 */
UploadStreamByURLResponse Client::uploadStreamByURL(const UploadStreamByURLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadStreamByURLWithOptions(request, runtime);
}

/**
 * @summary Calls this operation to verify domain name ownership.
 *
 * @description Currently, the service is supported only in the **China (Shanghai)** region.
 *
 * @param request VerifyVodDomainOwnerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyVodDomainOwnerResponse
 */
VerifyVodDomainOwnerResponse Client::verifyVodDomainOwnerWithOptions(const VerifyVodDomainOwnerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomainName()) {
    query["DomainName"] = request.getDomainName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasVerifyType()) {
    query["VerifyType"] = request.getVerifyType();
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
 * @summary Calls this operation to verify domain name ownership.
 *
 * @description Currently, the service is supported only in the **China (Shanghai)** region.
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