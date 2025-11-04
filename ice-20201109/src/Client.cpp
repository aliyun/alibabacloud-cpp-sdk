#include <darabonba/Core.hpp>
#include <alibabacloud/ICE20201109.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::ICE20201109::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace ICE20201109
{

AlibabaCloud::ICE20201109::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "ice.aliyuncs.com"},
    {"ap-northeast-2-pop" , "ice.aliyuncs.com"},
    {"ap-south-1" , "ice.aliyuncs.com"},
    {"ap-southeast-1" , "ice.aliyuncs.com"},
    {"ap-southeast-2" , "ice.aliyuncs.com"},
    {"ap-southeast-3" , "ice.aliyuncs.com"},
    {"ap-southeast-5" , "ice.aliyuncs.com"},
    {"cn-beijing" , "ice.aliyuncs.com"},
    {"cn-beijing-finance-1" , "ice.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "ice.aliyuncs.com"},
    {"cn-beijing-gov-1" , "ice.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "ice.aliyuncs.com"},
    {"cn-chengdu" , "ice.aliyuncs.com"},
    {"cn-edge-1" , "ice.aliyuncs.com"},
    {"cn-fujian" , "ice.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "ice.aliyuncs.com"},
    {"cn-hangzhou" , "ice.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "ice.aliyuncs.com"},
    {"cn-hangzhou-finance" , "ice.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "ice.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "ice.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "ice.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "ice.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "ice.aliyuncs.com"},
    {"cn-hongkong" , "ice.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "ice.aliyuncs.com"},
    {"cn-huhehaote" , "ice.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "ice.aliyuncs.com"},
    {"cn-north-2-gov-1" , "ice.aliyuncs.com"},
    {"cn-qingdao" , "ice.aliyuncs.com"},
    {"cn-qingdao-nebula" , "ice.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "ice.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "ice.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "ice.aliyuncs.com"},
    {"cn-shanghai-inner" , "ice.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "ice.aliyuncs.com"},
    {"cn-shenzhen" , "ice.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "ice.aliyuncs.com"},
    {"cn-shenzhen-inner" , "ice.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "ice.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "ice.aliyuncs.com"},
    {"cn-wuhan" , "ice.aliyuncs.com"},
    {"cn-wulanchabu" , "ice.aliyuncs.com"},
    {"cn-yushanfang" , "ice.aliyuncs.com"},
    {"cn-zhangbei" , "ice.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "ice.aliyuncs.com"},
    {"cn-zhangjiakou" , "ice.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "ice.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "ice.aliyuncs.com"},
    {"eu-central-1" , "ice.aliyuncs.com"},
    {"eu-west-1" , "ice.aliyuncs.com"},
    {"eu-west-1-oxs" , "ice.aliyuncs.com"},
    {"me-east-1" , "ice.aliyuncs.com"},
    {"rus-west-1-pop" , "ice.aliyuncs.com"},
    {"us-east-1" , "ice.aliyuncs.com"},
    {"us-west-1" , "ice.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("ice", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Adds an ad insertion configuration.
 *
 * @param request AddAdInsertionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddAdInsertionResponse
 */
AddAdInsertionResponse Client::addAdInsertionWithOptions(const AddAdInsertionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAdMarkerPassthrough()) {
    body["AdMarkerPassthrough"] = request.adMarkerPassthrough();
  }

  if (!!request.hasAdsUrl()) {
    body["AdsUrl"] = request.adsUrl();
  }

  if (!!request.hasCdnAdSegmentUrlPrefix()) {
    body["CdnAdSegmentUrlPrefix"] = request.cdnAdSegmentUrlPrefix();
  }

  if (!!request.hasCdnContentSegmentUrlPrefix()) {
    body["CdnContentSegmentUrlPrefix"] = request.cdnContentSegmentUrlPrefix();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConfigAliases()) {
    body["ConfigAliases"] = request.configAliases();
  }

  if (!!request.hasContentUrlPrefix()) {
    body["ContentUrlPrefix"] = request.contentUrlPrefix();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPersonalizationThreshold()) {
    body["PersonalizationThreshold"] = request.personalizationThreshold();
  }

  if (!!request.hasSlateAdUrl()) {
    body["SlateAdUrl"] = request.slateAdUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddAdInsertion"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddAdInsertionResponse>();
}

/**
 * @summary Adds an ad insertion configuration.
 *
 * @param request AddAdInsertionRequest
 * @return AddAdInsertionResponse
 */
AddAdInsertionResponse Client::addAdInsertion(const AddAdInsertionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addAdInsertionWithOptions(request, runtime);
}

/**
 * @summary Creates a category.
 *
 * @description You can create at most three levels of categories. Each category level can contain a maximum of 100 subcategories.
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
    {"version" , "2020-11-09"},
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
 * @summary Creates a category.
 *
 * @description You can create at most three levels of categories. Each category level can contain a maximum of 100 subcategories.
 *
 * @param request AddCategoryRequest
 * @return AddCategoryResponse
 */
AddCategoryResponse Client::addCategory(const AddCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addCategoryWithOptions(request, runtime);
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
  if (!!request.hasMaterialMaps()) {
    query["MaterialMaps"] = request.materialMaps();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddEditingProjectMaterials"},
    {"version" , "2020-11-09"},
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
 * @summary 收藏公共媒资
 *
 * @param request AddFavoritePublicMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddFavoritePublicMediaResponse
 */
AddFavoritePublicMediaResponse Client::addFavoritePublicMediaWithOptions(const AddFavoritePublicMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.mediaIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddFavoritePublicMedia"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddFavoritePublicMediaResponse>();
}

/**
 * @summary 收藏公共媒资
 *
 * @param request AddFavoritePublicMediaRequest
 * @return AddFavoritePublicMediaResponse
 */
AddFavoritePublicMediaResponse Client::addFavoritePublicMedia(const AddFavoritePublicMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addFavoritePublicMediaWithOptions(request, runtime);
}

/**
 * @summary Creates a source for a MediaConnect flow.
 *
 * @description *   When the specified flow ID is not available, an error code is returned.
 * *   A flow can have only one source.
 * ### [](#)Source type
 * *   RTMP-PUSH: An input that you can push to the returned URL over the RTMP protocol.
 * *   RTMP-PULL: An input that the MediaConnect flow pulls from the specified server over the RTMP protocol.
 * *   SRT-Listener: An input that you can push to the returned URL over the SRT protocol.
 * *   SRT-Caller: An input that the MediaConnect flow pulls from the specified server over the SRT protocol.
 * *   Flow: An input that uses the output of another upstream flow. You must specify an upstream flow and its output. The output type of the upstream flow must be SRT-Listener or RTMP-PULL. By default, a dedicated line is used when flows are cascaded. This allows for cross-region distribution among multiple flows.
 *
 * @param request AddMediaConnectFlowInputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMediaConnectFlowInputResponse
 */
AddMediaConnectFlowInputResponse Client::addMediaConnectFlowInputWithOptions(const AddMediaConnectFlowInputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidrs()) {
    query["Cidrs"] = request.cidrs();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.flowId();
  }

  if (!!request.hasInputFromUrl()) {
    query["InputFromUrl"] = request.inputFromUrl();
  }

  if (!!request.hasInputName()) {
    query["InputName"] = request.inputName();
  }

  if (!!request.hasInputProtocol()) {
    query["InputProtocol"] = request.inputProtocol();
  }

  if (!!request.hasMaxBitrate()) {
    query["MaxBitrate"] = request.maxBitrate();
  }

  if (!!request.hasPairFlowId()) {
    query["PairFlowId"] = request.pairFlowId();
  }

  if (!!request.hasPairOutputName()) {
    query["PairOutputName"] = request.pairOutputName();
  }

  if (!!request.hasSrtLatency()) {
    query["SrtLatency"] = request.srtLatency();
  }

  if (!!request.hasSrtPassphrase()) {
    query["SrtPassphrase"] = request.srtPassphrase();
  }

  if (!!request.hasSrtPbkeyLen()) {
    query["SrtPbkeyLen"] = request.srtPbkeyLen();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddMediaConnectFlowInput"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMediaConnectFlowInputResponse>();
}

/**
 * @summary Creates a source for a MediaConnect flow.
 *
 * @description *   When the specified flow ID is not available, an error code is returned.
 * *   A flow can have only one source.
 * ### [](#)Source type
 * *   RTMP-PUSH: An input that you can push to the returned URL over the RTMP protocol.
 * *   RTMP-PULL: An input that the MediaConnect flow pulls from the specified server over the RTMP protocol.
 * *   SRT-Listener: An input that you can push to the returned URL over the SRT protocol.
 * *   SRT-Caller: An input that the MediaConnect flow pulls from the specified server over the SRT protocol.
 * *   Flow: An input that uses the output of another upstream flow. You must specify an upstream flow and its output. The output type of the upstream flow must be SRT-Listener or RTMP-PULL. By default, a dedicated line is used when flows are cascaded. This allows for cross-region distribution among multiple flows.
 *
 * @param request AddMediaConnectFlowInputRequest
 * @return AddMediaConnectFlowInputResponse
 */
AddMediaConnectFlowInputResponse Client::addMediaConnectFlowInput(const AddMediaConnectFlowInputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addMediaConnectFlowInputWithOptions(request, runtime);
}

/**
 * @summary Creates an output for a MediaConnect flow.
 *
 * @description *   When the specified flow ID is not available, an error code is returned.
 * *   A flow can have a maximum of four outputs.
 * *   The output names in the same flow cannot be duplicated.
 * *   You can set an upper limit on the number of concurrent viewers for each output. If this limit is exceeded, any new playback requests will fail. Each output supports up to five streams.
 * ### [](#)Output types
 * *   RTMP-PUSH: An output that the MediaConnect flow pushes to the server you specified over the RTMP protocol.
 * *   RTMP-PULL: An output that you can pull using the returned streaming URL over the RTMP protocol.
 * *   SRT-Caller: An output that the MediaConnect flow pushes to the server you specified over the SRT protocol.
 * *   SRT-Listener: An output that you can pull using the returned streaming URL over the SRT protocol.
 * *   Flow: An output that is pushed to the source URL of another MediaConnect flow. The source type of the destination flow must be SRT-Listener or RTMP-PUSH. By default, a dedicated line is used when flows are cascaded. This allows for cross-region distribution among multiple flows.
 *
 * @param request AddMediaConnectFlowOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMediaConnectFlowOutputResponse
 */
AddMediaConnectFlowOutputResponse Client::addMediaConnectFlowOutputWithOptions(const AddMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidrs()) {
    query["Cidrs"] = request.cidrs();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.flowId();
  }

  if (!!request.hasOutputName()) {
    query["OutputName"] = request.outputName();
  }

  if (!!request.hasOutputProtocol()) {
    query["OutputProtocol"] = request.outputProtocol();
  }

  if (!!request.hasOutputToUrl()) {
    query["OutputToUrl"] = request.outputToUrl();
  }

  if (!!request.hasPairFlowId()) {
    query["PairFlowId"] = request.pairFlowId();
  }

  if (!!request.hasPairInputName()) {
    query["PairInputName"] = request.pairInputName();
  }

  if (!!request.hasPlayerLimit()) {
    query["PlayerLimit"] = request.playerLimit();
  }

  if (!!request.hasSrtLatency()) {
    query["SrtLatency"] = request.srtLatency();
  }

  if (!!request.hasSrtPassphrase()) {
    query["SrtPassphrase"] = request.srtPassphrase();
  }

  if (!!request.hasSrtPbkeyLen()) {
    query["SrtPbkeyLen"] = request.srtPbkeyLen();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddMediaConnectFlowOutput"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMediaConnectFlowOutputResponse>();
}

/**
 * @summary Creates an output for a MediaConnect flow.
 *
 * @description *   When the specified flow ID is not available, an error code is returned.
 * *   A flow can have a maximum of four outputs.
 * *   The output names in the same flow cannot be duplicated.
 * *   You can set an upper limit on the number of concurrent viewers for each output. If this limit is exceeded, any new playback requests will fail. Each output supports up to five streams.
 * ### [](#)Output types
 * *   RTMP-PUSH: An output that the MediaConnect flow pushes to the server you specified over the RTMP protocol.
 * *   RTMP-PULL: An output that you can pull using the returned streaming URL over the RTMP protocol.
 * *   SRT-Caller: An output that the MediaConnect flow pushes to the server you specified over the SRT protocol.
 * *   SRT-Listener: An output that you can pull using the returned streaming URL over the SRT protocol.
 * *   Flow: An output that is pushed to the source URL of another MediaConnect flow. The source type of the destination flow must be SRT-Listener or RTMP-PUSH. By default, a dedicated line is used when flows are cascaded. This allows for cross-region distribution among multiple flows.
 *
 * @param request AddMediaConnectFlowOutputRequest
 * @return AddMediaConnectFlowOutputResponse
 */
AddMediaConnectFlowOutputResponse Client::addMediaConnectFlowOutput(const AddMediaConnectFlowOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addMediaConnectFlowOutputWithOptions(request, runtime);
}

/**
 * @summary Adds marks for a media asset.
 *
 * @param request AddMediaMarksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMediaMarksResponse
 */
AddMediaMarksResponse Client::addMediaMarksWithOptions(const AddMediaMarksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasMediaMarks()) {
    query["MediaMarks"] = request.mediaMarks();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddMediaMarks"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMediaMarksResponse>();
}

/**
 * @summary Adds marks for a media asset.
 *
 * @param request AddMediaMarksRequest
 * @return AddMediaMarksResponse
 */
AddMediaMarksResponse Client::addMediaMarks(const AddMediaMarksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addMediaMarksWithOptions(request, runtime);
}

/**
 * @summary Adds tags for a specific live stream media asset.
 *
 * @param request AddStreamTagToSearchLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddStreamTagToSearchLibResponse
 */
AddStreamTagToSearchLibResponse Client::addStreamTagToSearchLibWithOptions(const AddStreamTagToSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasMsgBody()) {
    query["MsgBody"] = request.msgBody();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddStreamTagToSearchLib"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddStreamTagToSearchLibResponse>();
}

/**
 * @summary Adds tags for a specific live stream media asset.
 *
 * @param request AddStreamTagToSearchLibRequest
 * @return AddStreamTagToSearchLibResponse
 */
AddStreamTagToSearchLibResponse Client::addStreamTagToSearchLib(const AddStreamTagToSearchLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addStreamTagToSearchLibWithOptions(request, runtime);
}

/**
 * @summary Creates a template.
 *
 * @description *   For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
 * *   For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
 * *   After an advanced template is created, it enters the Processing state. In this case, the template is unavailable. The template can be used only when it is in the Available state. The time required for template processing varies based on the size of the template file. Generally, it ranges from 10 seconds to 5 minutes.
 *
 * @param request AddTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddTemplateResponse
 */
AddTemplateResponse Client::addTemplateWithOptions(const AddTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoverUrl()) {
    query["CoverUrl"] = request.coverUrl();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPreviewMedia()) {
    query["PreviewMedia"] = request.previewMedia();
  }

  if (!!request.hasRelatedMediaids()) {
    query["RelatedMediaids"] = request.relatedMediaids();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.config();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddTemplate"},
    {"version" , "2020-11-09"},
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
 * @summary Creates a template.
 *
 * @description *   For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
 * *   For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
 * *   After an advanced template is created, it enters the Processing state. In this case, the template is unavailable. The template can be used only when it is in the Available state. The time required for template processing varies based on the size of the template file. Generally, it ranges from 10 seconds to 5 minutes.
 *
 * @param request AddTemplateRequest
 * @return AddTemplateResponse
 */
AddTemplateResponse Client::addTemplate(const AddTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addTemplateWithOptions(request, runtime);
}

/**
 * @summary Modifies search index information including index status and configurations.
 *
 * @param request AlterSearchIndexRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AlterSearchIndexResponse
 */
AlterSearchIndexResponse Client::alterSearchIndexWithOptions(const AlterSearchIndexRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndexConfig()) {
    query["IndexConfig"] = request.indexConfig();
  }

  if (!!request.hasIndexStatus()) {
    query["IndexStatus"] = request.indexStatus();
  }

  if (!!request.hasIndexType()) {
    query["IndexType"] = request.indexType();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AlterSearchIndex"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AlterSearchIndexResponse>();
}

/**
 * @summary Modifies search index information including index status and configurations.
 *
 * @param request AlterSearchIndexRequest
 * @return AlterSearchIndexResponse
 */
AlterSearchIndexResponse Client::alterSearchIndex(const AlterSearchIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return alterSearchIndexWithOptions(request, runtime);
}

/**
 * @summary Ingests multiple assets for VOD packaging.
 *
 * @param tmpReq BatchCreateVodPackagingAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCreateVodPackagingAssetResponse
 */
BatchCreateVodPackagingAssetResponse Client::batchCreateVodPackagingAssetWithOptions(const BatchCreateVodPackagingAssetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchCreateVodPackagingAssetShrinkRequest request = BatchCreateVodPackagingAssetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssets()) {
    request.setAssetsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.assets(), "Assets", "json"));
  }

  json query = {};
  if (!!request.hasAssetsShrink()) {
    query["Assets"] = request.assetsShrink();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchCreateVodPackagingAsset"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCreateVodPackagingAssetResponse>();
}

/**
 * @summary Ingests multiple assets for VOD packaging.
 *
 * @param request BatchCreateVodPackagingAssetRequest
 * @return BatchCreateVodPackagingAssetResponse
 */
BatchCreateVodPackagingAssetResponse Client::batchCreateVodPackagingAsset(const BatchCreateVodPackagingAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCreateVodPackagingAssetWithOptions(request, runtime);
}

/**
 * @summary Queries the information about multiple media assets at a time based on media asset IDs.
 *
 * @param request BatchGetMediaInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGetMediaInfosResponse
 */
BatchGetMediaInfosResponse Client::batchGetMediaInfosWithOptions(const BatchGetMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdditionType()) {
    query["AdditionType"] = request.additionType();
  }

  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.authTimeout();
  }

  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.mediaIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BatchGetMediaInfos"},
    {"version" , "2020-11-09"},
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
 * @summary Queries the information about multiple media assets at a time based on media asset IDs.
 *
 * @param request BatchGetMediaInfosRequest
 * @return BatchGetMediaInfosResponse
 */
BatchGetMediaInfosResponse Client::batchGetMediaInfos(const BatchGetMediaInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchGetMediaInfosWithOptions(request, runtime);
}

/**
 * @summary Cancels a media fingerprint analysis job.
 *
 * @description *   You can cancel a media fingerprint analysis job only if the job is in the Queuing state.
 * *   We recommend that you call the **UpdatePipeline** operation to set the status of the ApsaraVideo Media Processing (MPS) queue to Paused before you cancel a job. This suspends job scheduling in the MPS queue. After the job is canceled, you must set the status of the MPS queue back to Active so that the other jobs in the MPS queue can be scheduled.
 *
 * @param request CancelDNAJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelDNAJobResponse
 */
CancelDNAJobResponse Client::cancelDNAJobWithOptions(const CancelDNAJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "CancelDNAJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelDNAJobResponse>();
}

/**
 * @summary Cancels a media fingerprint analysis job.
 *
 * @description *   You can cancel a media fingerprint analysis job only if the job is in the Queuing state.
 * *   We recommend that you call the **UpdatePipeline** operation to set the status of the ApsaraVideo Media Processing (MPS) queue to Paused before you cancel a job. This suspends job scheduling in the MPS queue. After the job is canceled, you must set the status of the MPS queue back to Active so that the other jobs in the MPS queue can be scheduled.
 *
 * @param request CancelDNAJobRequest
 * @return CancelDNAJobResponse
 */
CancelDNAJobResponse Client::cancelDNAJob(const CancelDNAJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelDNAJobWithOptions(request, runtime);
}

/**
 * @summary 取消收藏公共媒资
 *
 * @param request CancelFavoritePublicMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelFavoritePublicMediaResponse
 */
CancelFavoritePublicMediaResponse Client::cancelFavoritePublicMediaWithOptions(const CancelFavoritePublicMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.mediaIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelFavoritePublicMedia"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelFavoritePublicMediaResponse>();
}

/**
 * @summary 取消收藏公共媒资
 *
 * @param request CancelFavoritePublicMediaRequest
 * @return CancelFavoritePublicMediaResponse
 */
CancelFavoritePublicMediaResponse Client::cancelFavoritePublicMedia(const CancelFavoritePublicMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelFavoritePublicMediaWithOptions(request, runtime);
}

/**
 * @summary Cancels an intelligent production job.
 *
 * @param request CancelIProductionJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelIProductionJobResponse
 */
CancelIProductionJobResponse Client::cancelIProductionJobWithOptions(const CancelIProductionJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelIProductionJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelIProductionJobResponse>();
}

/**
 * @summary Cancels an intelligent production job.
 *
 * @param request CancelIProductionJobRequest
 * @return CancelIProductionJobResponse
 */
CancelIProductionJobResponse Client::cancelIProductionJob(const CancelIProductionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelIProductionJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a voiceprint based on its ID.
 *
 * @description ## [](#)
 * ``````````
 *
 * @param request ClearAIAgentVoiceprintRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ClearAIAgentVoiceprintResponse
 */
ClearAIAgentVoiceprintResponse Client::clearAIAgentVoiceprintWithOptions(const ClearAIAgentVoiceprintRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVoiceprintId()) {
    query["VoiceprintId"] = request.voiceprintId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ClearAIAgentVoiceprint"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ClearAIAgentVoiceprintResponse>();
}

/**
 * @summary Deletes a voiceprint based on its ID.
 *
 * @description ## [](#)
 * ``````````
 *
 * @param request ClearAIAgentVoiceprintRequest
 * @return ClearAIAgentVoiceprintResponse
 */
ClearAIAgentVoiceprintResponse Client::clearAIAgentVoiceprint(const ClearAIAgentVoiceprintRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return clearAIAgentVoiceprintWithOptions(request, runtime);
}

/**
 * @summary Disables Source Failover for a MediaConnect flow.
 *
 * @description *   If a flow has two sources, you cannot disable Source Failover. Delete one of them before this operation.
 *
 * @param request CloseMediaConnectFlowFailoverRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseMediaConnectFlowFailoverResponse
 */
CloseMediaConnectFlowFailoverResponse Client::closeMediaConnectFlowFailoverWithOptions(const CloseMediaConnectFlowFailoverRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.flowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseMediaConnectFlowFailover"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseMediaConnectFlowFailoverResponse>();
}

/**
 * @summary Disables Source Failover for a MediaConnect flow.
 *
 * @description *   If a flow has two sources, you cannot disable Source Failover. Delete one of them before this operation.
 *
 * @param request CloseMediaConnectFlowFailoverRequest
 * @return CloseMediaConnectFlowFailoverResponse
 */
CloseMediaConnectFlowFailoverResponse Client::closeMediaConnectFlowFailover(const CloseMediaConnectFlowFailoverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeMediaConnectFlowFailoverWithOptions(request, runtime);
}

/**
 * @summary Stops the tagging and analysis process for a live stream media asset.
 *
 * @param request CloseStreamToSearchLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseStreamToSearchLibResponse
 */
CloseStreamToSearchLibResponse Client::closeStreamToSearchLibWithOptions(const CloseStreamToSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CloseStreamToSearchLib"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseStreamToSearchLibResponse>();
}

/**
 * @summary Stops the tagging and analysis process for a live stream media asset.
 *
 * @param request CloseStreamToSearchLibRequest
 * @return CloseStreamToSearchLibResponse
 */
CloseStreamToSearchLibResponse Client::closeStreamToSearchLib(const CloseStreamToSearchLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return closeStreamToSearchLibWithOptions(request, runtime);
}

/**
 * @summary Submits manual review results for media assets.
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
    {"version" , "2020-11-09"},
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
 * @summary Submits manual review results for media assets.
 *
 * @param request CreateAuditRequest
 * @return CreateAuditResponse
 */
CreateAuditResponse Client::createAudit(const CreateAuditRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAuditWithOptions(request, runtime);
}

/**
 * @summary Creates a digital human training job. You can configure the basic information of the digital human and the materials required for the training. Note: This operation is used to initialize the training job. It does not submit the training job. To submit the training job, call the SubmitAvatarTrainingJob operation.
 *
 * @param request CreateAvatarTrainingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAvatarTrainingJobResponse
 */
CreateAvatarTrainingJobResponse Client::createAvatarTrainingJobWithOptions(const CreateAvatarTrainingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAvatarDescription()) {
    query["AvatarDescription"] = request.avatarDescription();
  }

  if (!!request.hasAvatarName()) {
    query["AvatarName"] = request.avatarName();
  }

  if (!!request.hasAvatarType()) {
    query["AvatarType"] = request.avatarType();
  }

  if (!!request.hasPortrait()) {
    query["Portrait"] = request.portrait();
  }

  if (!!request.hasThumbnail()) {
    query["Thumbnail"] = request.thumbnail();
  }

  if (!!request.hasTransparent()) {
    query["Transparent"] = request.transparent();
  }

  if (!!request.hasVideo()) {
    query["Video"] = request.video();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAvatarTrainingJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAvatarTrainingJobResponse>();
}

/**
 * @summary Creates a digital human training job. You can configure the basic information of the digital human and the materials required for the training. Note: This operation is used to initialize the training job. It does not submit the training job. To submit the training job, call the SubmitAvatarTrainingJob operation.
 *
 * @param request CreateAvatarTrainingJobRequest
 * @return CreateAvatarTrainingJobResponse
 */
CreateAvatarTrainingJobResponse Client::createAvatarTrainingJob(const CreateAvatarTrainingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAvatarTrainingJobWithOptions(request, runtime);
}

/**
 * @summary Creates a channel in MediaWeaver.
 *
 * @param request CreateChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateChannelResponse
 */
CreateChannelResponse Client::createChannelWithOptions(const CreateChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessPolicy()) {
    query["AccessPolicy"] = request.accessPolicy();
  }

  if (!!request.hasAccessToken()) {
    query["AccessToken"] = request.accessToken();
  }

  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.channelName();
  }

  if (!!request.hasChannelTier()) {
    query["ChannelTier"] = request.channelTier();
  }

  if (!!request.hasFillerSourceLocationName()) {
    query["FillerSourceLocationName"] = request.fillerSourceLocationName();
  }

  if (!!request.hasFillerSourceName()) {
    query["FillerSourceName"] = request.fillerSourceName();
  }

  if (!!request.hasOutPutConfigList()) {
    query["OutPutConfigList"] = request.outPutConfigList();
  }

  if (!!request.hasPlaybackMode()) {
    query["PlaybackMode"] = request.playbackMode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateChannel"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateChannelResponse>();
}

/**
 * @summary Creates a channel in MediaWeaver.
 *
 * @param request CreateChannelRequest
 * @return CreateChannelResponse
 */
CreateChannelResponse Client::createChannel(const CreateChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createChannelWithOptions(request, runtime);
}

/**
 * @summary Creates a custom template.
 *
 * @param request CreateCustomTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomTemplateResponse
 */
CreateCustomTemplateResponse Client::createCustomTemplateWithOptions(const CreateCustomTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasSubtype()) {
    query["Subtype"] = request.subtype();
  }

  if (!!request.hasTemplateConfig()) {
    query["TemplateConfig"] = request.templateConfig();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomTemplate"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomTemplateResponse>();
}

/**
 * @summary Creates a custom template.
 *
 * @param request CreateCustomTemplateRequest
 * @return CreateCustomTemplateResponse
 */
CreateCustomTemplateResponse Client::createCustomTemplate(const CreateCustomTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a human voice cloning job. You can configure the basic information of the human voice cloning job.
 *
 * @param request CreateCustomizedVoiceJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomizedVoiceJobResponse
 */
CreateCustomizedVoiceJobResponse Client::createCustomizedVoiceJobWithOptions(const CreateCustomizedVoiceJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGender()) {
    query["Gender"] = request.gender();
  }

  if (!!request.hasScenario()) {
    query["Scenario"] = request.scenario();
  }

  if (!!request.hasVoiceDesc()) {
    query["VoiceDesc"] = request.voiceDesc();
  }

  if (!!request.hasVoiceId()) {
    query["VoiceId"] = request.voiceId();
  }

  if (!!request.hasVoiceName()) {
    query["VoiceName"] = request.voiceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomizedVoiceJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomizedVoiceJobResponse>();
}

/**
 * @summary Creates a human voice cloning job. You can configure the basic information of the human voice cloning job.
 *
 * @param request CreateCustomizedVoiceJobRequest
 * @return CreateCustomizedVoiceJobResponse
 */
CreateCustomizedVoiceJobResponse Client::createCustomizedVoiceJob(const CreateCustomizedVoiceJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomizedVoiceJobWithOptions(request, runtime);
}

/**
 * @summary Creates media fingerprint libraries.
 *
 * @description *   You can create up to five media fingerprint libraries within an account. To increase the quota, submit a ticket. You can call the DeleteDNADB operation to delete the fingerprint libraries that you no longer need.
 *
 * @param request CreateDNADBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDNADBResponse
 */
CreateDNADBResponse Client::createDNADBWithOptions(const CreateDNADBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.model();
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
    {"action" , "CreateDNADB"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDNADBResponse>();
}

/**
 * @summary Creates media fingerprint libraries.
 *
 * @description *   You can create up to five media fingerprint libraries within an account. To increase the quota, submit a ticket. You can call the DeleteDNADB operation to delete the fingerprint libraries that you no longer need.
 *
 * @param request CreateDNADBRequest
 * @return CreateDNADBResponse
 */
CreateDNADBResponse Client::createDNADB(const CreateDNADBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDNADBWithOptions(request, runtime);
}

/**
 * @summary Creates an online editing project. You can specify configurations such as the title, description, timeline, and thumbnail for the project.
 *
 * @param request CreateEditingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEditingProjectResponse
 */
CreateEditingProjectResponse Client::createEditingProjectWithOptions(const CreateEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessConfig()) {
    query["BusinessConfig"] = request.businessConfig();
  }

  if (!!request.hasClipsParam()) {
    query["ClipsParam"] = request.clipsParam();
  }

  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.coverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasMaterialMaps()) {
    query["MaterialMaps"] = request.materialMaps();
  }

  if (!!request.hasProjectType()) {
    query["ProjectType"] = request.projectType();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  json body = {};
  if (!!request.hasTimeline()) {
    body["Timeline"] = request.timeline();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEditingProject"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEditingProjectResponse>();
}

/**
 * @summary Creates an online editing project. You can specify configurations such as the title, description, timeline, and thumbnail for the project.
 *
 * @param request CreateEditingProjectRequest
 * @return CreateEditingProjectResponse
 */
CreateEditingProjectResponse Client::createEditingProject(const CreateEditingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEditingProjectWithOptions(request, runtime);
}

/**
 * @summary Creates a hotword library.
 *
 * @param tmpReq CreateHotwordLibraryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateHotwordLibraryResponse
 */
CreateHotwordLibraryResponse Client::createHotwordLibraryWithOptions(const CreateHotwordLibraryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateHotwordLibraryShrinkRequest request = CreateHotwordLibraryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHotwords()) {
    request.setHotwordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.hotwords(), "Hotwords", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasHotwordsShrink()) {
    query["Hotwords"] = request.hotwordsShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasUsageScenario()) {
    query["UsageScenario"] = request.usageScenario();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateHotwordLibrary"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateHotwordLibraryResponse>();
}

/**
 * @summary Creates a hotword library.
 *
 * @param request CreateHotwordLibraryRequest
 * @return CreateHotwordLibraryResponse
 */
CreateHotwordLibraryResponse Client::createHotwordLibrary(const CreateHotwordLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createHotwordLibraryWithOptions(request, runtime);
}

/**
 * @summary Creates a live package channel.
 *
 * @description ## [](#)Usage notes
 * After you call this operation to create a live package channel, the system will automatically generate the ingest endpoint URL, and username and password required for authentication.
 * ### [](#)Precautions
 * *   Channel group names and channel names can contain only letters, digits, underscores (_), and hyphens (-).
 * *   Only `HLS` is supported.
 * *   The segment duration must be from 1 to 30 seconds.
 * *   The number of M3U8 segments must be from 2 to 100.
 * If the request succeeds, the system will return the details of the newly created channel, including the channel name, creation time, modification time, and ingest endpoint details.
 *
 * @param request CreateLivePackageChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLivePackageChannelResponse
 */
CreateLivePackageChannelResponse Client::createLivePackageChannelWithOptions(const CreateLivePackageChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasChannelName()) {
    body["ChannelName"] = request.channelName();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasGroupName()) {
    body["GroupName"] = request.groupName();
  }

  if (!!request.hasProtocol()) {
    body["Protocol"] = request.protocol();
  }

  if (!!request.hasSegmentCount()) {
    body["SegmentCount"] = request.segmentCount();
  }

  if (!!request.hasSegmentDuration()) {
    body["SegmentDuration"] = request.segmentDuration();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateLivePackageChannel"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLivePackageChannelResponse>();
}

/**
 * @summary Creates a live package channel.
 *
 * @description ## [](#)Usage notes
 * After you call this operation to create a live package channel, the system will automatically generate the ingest endpoint URL, and username and password required for authentication.
 * ### [](#)Precautions
 * *   Channel group names and channel names can contain only letters, digits, underscores (_), and hyphens (-).
 * *   Only `HLS` is supported.
 * *   The segment duration must be from 1 to 30 seconds.
 * *   The number of M3U8 segments must be from 2 to 100.
 * If the request succeeds, the system will return the details of the newly created channel, including the channel name, creation time, modification time, and ingest endpoint details.
 *
 * @param request CreateLivePackageChannelRequest
 * @return CreateLivePackageChannelResponse
 */
CreateLivePackageChannelResponse Client::createLivePackageChannel(const CreateLivePackageChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLivePackageChannelWithOptions(request, runtime);
}

/**
 * @summary Creates a live package channel group with a custom name and description.
 *
 * @description After you create a channel group, the assigned origin domain is returned.
 *
 * @param request CreateLivePackageChannelGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLivePackageChannelGroupResponse
 */
CreateLivePackageChannelGroupResponse Client::createLivePackageChannelGroupWithOptions(const CreateLivePackageChannelGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  json body = {};
  if (!!request.hasGroupName()) {
    body["GroupName"] = request.groupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateLivePackageChannelGroup"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLivePackageChannelGroupResponse>();
}

/**
 * @summary Creates a live package channel group with a custom name and description.
 *
 * @description After you create a channel group, the assigned origin domain is returned.
 *
 * @param request CreateLivePackageChannelGroupRequest
 * @return CreateLivePackageChannelGroupResponse
 */
CreateLivePackageChannelGroupResponse Client::createLivePackageChannelGroup(const CreateLivePackageChannelGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLivePackageChannelGroupWithOptions(request, runtime);
}

/**
 * @summary Creates an origin endpoint for a live package channel to deliver live streams in HLS format.
 *
 * @description ## [](#)Usage notes
 * This API operation is mainly used to configure origin settings, security policies including the IP address blacklist and whitelist and authorization code, and time shifting settings for channels. Before you create an origin endpoint, you must create a live package channel group and channel. After you create the endpoint, the endpoint URL and other configuration details are returned.
 *
 * @param tmpReq CreateLivePackageOriginEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLivePackageOriginEndpointResponse
 */
CreateLivePackageOriginEndpointResponse Client::createLivePackageOriginEndpointWithOptions(const CreateLivePackageOriginEndpointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateLivePackageOriginEndpointShrinkRequest request = CreateLivePackageOriginEndpointShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLivePackagingConfig()) {
    request.setLivePackagingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.livePackagingConfig(), "LivePackagingConfig", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  json body = {};
  if (!!request.hasAuthorizationCode()) {
    body["AuthorizationCode"] = request.authorizationCode();
  }

  if (!!request.hasChannelName()) {
    body["ChannelName"] = request.channelName();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEndpointName()) {
    body["EndpointName"] = request.endpointName();
  }

  if (!!request.hasGroupName()) {
    body["GroupName"] = request.groupName();
  }

  if (!!request.hasIpBlacklist()) {
    body["IpBlacklist"] = request.ipBlacklist();
  }

  if (!!request.hasIpWhitelist()) {
    body["IpWhitelist"] = request.ipWhitelist();
  }

  if (!!request.hasLivePackagingConfigShrink()) {
    body["LivePackagingConfig"] = request.livePackagingConfigShrink();
  }

  if (!!request.hasManifestName()) {
    body["ManifestName"] = request.manifestName();
  }

  if (!!request.hasProtocol()) {
    body["Protocol"] = request.protocol();
  }

  if (!!request.hasTimeshiftVision()) {
    body["TimeshiftVision"] = request.timeshiftVision();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateLivePackageOriginEndpoint"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLivePackageOriginEndpointResponse>();
}

/**
 * @summary Creates an origin endpoint for a live package channel to deliver live streams in HLS format.
 *
 * @description ## [](#)Usage notes
 * This API operation is mainly used to configure origin settings, security policies including the IP address blacklist and whitelist and authorization code, and time shifting settings for channels. Before you create an origin endpoint, you must create a live package channel group and channel. After you create the endpoint, the endpoint URL and other configuration details are returned.
 *
 * @param request CreateLivePackageOriginEndpointRequest
 * @return CreateLivePackageOriginEndpointResponse
 */
CreateLivePackageOriginEndpointResponse Client::createLivePackageOriginEndpoint(const CreateLivePackageOriginEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLivePackageOriginEndpointWithOptions(request, runtime);
}

/**
 * @summary Creates a live stream recording template to submit live stream recording jobs.
 *
 * @description You must specify a recording template for live stream recording. You can configure information such as the format and duration of a recording in a recording template. The recording format can be M3U8, MP4, or FLV.
 *
 * @param tmpReq CreateLiveRecordTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLiveRecordTemplateResponse
 */
CreateLiveRecordTemplateResponse Client::createLiveRecordTemplateWithOptions(const CreateLiveRecordTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateLiveRecordTemplateShrinkRequest request = CreateLiveRecordTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRecordFormat()) {
    request.setRecordFormatShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.recordFormat(), "RecordFormat", "json"));
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasRecordFormatShrink()) {
    body["RecordFormat"] = request.recordFormatShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateLiveRecordTemplate"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLiveRecordTemplateResponse>();
}

/**
 * @summary Creates a live stream recording template to submit live stream recording jobs.
 *
 * @description You must specify a recording template for live stream recording. You can configure information such as the format and duration of a recording in a recording template. The recording format can be M3U8, MP4, or FLV.
 *
 * @param request CreateLiveRecordTemplateRequest
 * @return CreateLiveRecordTemplateResponse
 */
CreateLiveRecordTemplateResponse Client::createLiveRecordTemplate(const CreateLiveRecordTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLiveRecordTemplateWithOptions(request, runtime);
}

/**
 * @summary Create a live stream snapshot template to facilitate the creation of snapshot jobs.
 *
 * @param request CreateLiveSnapshotTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLiveSnapshotTemplateResponse
 */
CreateLiveSnapshotTemplateResponse Client::createLiveSnapshotTemplateWithOptions(const CreateLiveSnapshotTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOverwriteFormat()) {
    body["OverwriteFormat"] = request.overwriteFormat();
  }

  if (!!request.hasSequenceFormat()) {
    body["SequenceFormat"] = request.sequenceFormat();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.templateName();
  }

  if (!!request.hasTimeInterval()) {
    body["TimeInterval"] = request.timeInterval();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateLiveSnapshotTemplate"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLiveSnapshotTemplateResponse>();
}

/**
 * @summary Create a live stream snapshot template to facilitate the creation of snapshot jobs.
 *
 * @param request CreateLiveSnapshotTemplateRequest
 * @return CreateLiveSnapshotTemplateResponse
 */
CreateLiveSnapshotTemplateResponse Client::createLiveSnapshotTemplate(const CreateLiveSnapshotTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLiveSnapshotTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a live stream transcoding template to submit live stream transcoding jobs.
 *
 * @param tmpReq CreateLiveTranscodeTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLiveTranscodeTemplateResponse
 */
CreateLiveTranscodeTemplateResponse Client::createLiveTranscodeTemplateWithOptions(const CreateLiveTranscodeTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateLiveTranscodeTemplateShrinkRequest request = CreateLiveTranscodeTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTemplateConfig()) {
    request.setTemplateConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.templateConfig(), "TemplateConfig", "json"));
  }

  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasTemplateConfigShrink()) {
    query["TemplateConfig"] = request.templateConfigShrink();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateLiveTranscodeTemplate"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLiveTranscodeTemplateResponse>();
}

/**
 * @summary Creates a live stream transcoding template to submit live stream transcoding jobs.
 *
 * @param request CreateLiveTranscodeTemplateRequest
 * @return CreateLiveTranscodeTemplateResponse
 */
CreateLiveTranscodeTemplateResponse Client::createLiveTranscodeTemplate(const CreateLiveTranscodeTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLiveTranscodeTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a MediaConnect flow.
 *
 * @description *   The flow names cannot be duplicated in the same region.
 * *   Take note of the returned flow ID. You may reference it in other API operations.
 *
 * @param request CreateMediaConnectFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMediaConnectFlowResponse
 */
CreateMediaConnectFlowResponse Client::createMediaConnectFlowWithOptions(const CreateMediaConnectFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowName()) {
    query["FlowName"] = request.flowName();
  }

  if (!!request.hasFlowRegion()) {
    query["FlowRegion"] = request.flowRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMediaConnectFlow"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMediaConnectFlowResponse>();
}

/**
 * @summary Creates a MediaConnect flow.
 *
 * @description *   The flow names cannot be duplicated in the same region.
 * *   Take note of the returned flow ID. You may reference it in other API operations.
 *
 * @param request CreateMediaConnectFlowRequest
 * @return CreateMediaConnectFlowResponse
 */
CreateMediaConnectFlowResponse Client::createMediaConnectFlow(const CreateMediaConnectFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMediaConnectFlowWithOptions(request, runtime);
}

/**
 * @summary Creates a MediaLive channel.
 *
 * @description ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param tmpReq CreateMediaLiveChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMediaLiveChannelResponse
 */
CreateMediaLiveChannelResponse Client::createMediaLiveChannelWithOptions(const CreateMediaLiveChannelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateMediaLiveChannelShrinkRequest request = CreateMediaLiveChannelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAudioSettings()) {
    request.setAudioSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.audioSettings(), "AudioSettings", "json"));
  }

  if (!!tmpReq.hasInputAttachments()) {
    request.setInputAttachmentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.inputAttachments(), "InputAttachments", "json"));
  }

  if (!!tmpReq.hasOutputGroups()) {
    request.setOutputGroupsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.outputGroups(), "OutputGroups", "json"));
  }

  if (!!tmpReq.hasVideoSettings()) {
    request.setVideoSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.videoSettings(), "VideoSettings", "json"));
  }

  json body = {};
  if (!!request.hasAudioSettingsShrink()) {
    body["AudioSettings"] = request.audioSettingsShrink();
  }

  if (!!request.hasInputAttachmentsShrink()) {
    body["InputAttachments"] = request.inputAttachmentsShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasOutputGroupsShrink()) {
    body["OutputGroups"] = request.outputGroupsShrink();
  }

  if (!!request.hasVideoSettingsShrink()) {
    body["VideoSettings"] = request.videoSettingsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMediaLiveChannel"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMediaLiveChannelResponse>();
}

/**
 * @summary Creates a MediaLive channel.
 *
 * @description ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request CreateMediaLiveChannelRequest
 * @return CreateMediaLiveChannelResponse
 */
CreateMediaLiveChannelResponse Client::createMediaLiveChannel(const CreateMediaLiveChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMediaLiveChannelWithOptions(request, runtime);
}

/**
 * @summary Creates a MediaLive input.
 *
 * @description ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param tmpReq CreateMediaLiveInputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMediaLiveInputResponse
 */
CreateMediaLiveInputResponse Client::createMediaLiveInputWithOptions(const CreateMediaLiveInputRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateMediaLiveInputShrinkRequest request = CreateMediaLiveInputShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInputSettings()) {
    request.setInputSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.inputSettings(), "InputSettings", "json"));
  }

  if (!!tmpReq.hasSecurityGroupIds()) {
    request.setSecurityGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.securityGroupIds(), "SecurityGroupIds", "json"));
  }

  json body = {};
  if (!!request.hasInputSettingsShrink()) {
    body["InputSettings"] = request.inputSettingsShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasSecurityGroupIdsShrink()) {
    body["SecurityGroupIds"] = request.securityGroupIdsShrink();
  }

  if (!!request.hasType()) {
    body["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMediaLiveInput"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMediaLiveInputResponse>();
}

/**
 * @summary Creates a MediaLive input.
 *
 * @description ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request CreateMediaLiveInputRequest
 * @return CreateMediaLiveInputResponse
 */
CreateMediaLiveInputResponse Client::createMediaLiveInput(const CreateMediaLiveInputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMediaLiveInputWithOptions(request, runtime);
}

/**
 * @summary Creates a security group in MediaLive.
 *
 * @description ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param tmpReq CreateMediaLiveInputSecurityGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMediaLiveInputSecurityGroupResponse
 */
CreateMediaLiveInputSecurityGroupResponse Client::createMediaLiveInputSecurityGroupWithOptions(const CreateMediaLiveInputSecurityGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateMediaLiveInputSecurityGroupShrinkRequest request = CreateMediaLiveInputSecurityGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWhitelistRules()) {
    request.setWhitelistRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.whitelistRules(), "WhitelistRules", "json"));
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasWhitelistRulesShrink()) {
    body["WhitelistRules"] = request.whitelistRulesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateMediaLiveInputSecurityGroup"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMediaLiveInputSecurityGroupResponse>();
}

/**
 * @summary Creates a security group in MediaLive.
 *
 * @description ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request CreateMediaLiveInputSecurityGroupRequest
 * @return CreateMediaLiveInputSecurityGroupResponse
 */
CreateMediaLiveInputSecurityGroupResponse Client::createMediaLiveInputSecurityGroup(const CreateMediaLiveInputSecurityGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMediaLiveInputSecurityGroupWithOptions(request, runtime);
}

/**
 * @summary Creates an ApsaraVideo Media Processing (MPS) queue.
 *
 * @param request CreatePipelineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePipelineResponse
 */
CreatePipelineResponse Client::createPipelineWithOptions(const CreatePipelineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasSpeed()) {
    query["Speed"] = request.speed();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatePipeline"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePipelineResponse>();
}

/**
 * @summary Creates an ApsaraVideo Media Processing (MPS) queue.
 *
 * @param request CreatePipelineRequest
 * @return CreatePipelineResponse
 */
CreatePipelineResponse Client::createPipeline(const CreatePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createPipelineWithOptions(request, runtime);
}

/**
 * @summary Creates a program in a MediaWeaver channel.
 *
 * @param request CreateProgramRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProgramResponse
 */
CreateProgramResponse Client::createProgramWithOptions(const CreateProgramRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdBreaks()) {
    query["AdBreaks"] = request.adBreaks();
  }

  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.channelName();
  }

  if (!!request.hasClipRange()) {
    query["ClipRange"] = request.clipRange();
  }

  if (!!request.hasProgramName()) {
    query["ProgramName"] = request.programName();
  }

  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.sourceLocationName();
  }

  if (!!request.hasSourceName()) {
    query["SourceName"] = request.sourceName();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasTransition()) {
    query["Transition"] = request.transition();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProgram"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProgramResponse>();
}

/**
 * @summary Creates a program in a MediaWeaver channel.
 *
 * @param request CreateProgramRequest
 * @return CreateProgramResponse
 */
CreateProgramResponse Client::createProgram(const CreateProgramRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProgramWithOptions(request, runtime);
}

/**
 * @summary Creates an entity to be recognized in a custom recognition library. The entity can be a landmark, object, logo, or person.
 *
 * @description *   This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * *   You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request CreateRecognitionEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecognitionEntityResponse
 */
CreateRecognitionEntityResponse Client::createRecognitionEntityWithOptions(const CreateRecognitionEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasEntityInfo()) {
    query["EntityInfo"] = request.entityInfo();
  }

  if (!!request.hasEntityName()) {
    query["EntityName"] = request.entityName();
  }

  if (!!request.hasLibId()) {
    query["LibId"] = request.libId();
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
    {"action" , "CreateRecognitionEntity"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecognitionEntityResponse>();
}

/**
 * @summary Creates an entity to be recognized in a custom recognition library. The entity can be a landmark, object, logo, or person.
 *
 * @description *   This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * *   You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request CreateRecognitionEntityRequest
 * @return CreateRecognitionEntityResponse
 */
CreateRecognitionEntityResponse Client::createRecognitionEntity(const CreateRecognitionEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRecognitionEntityWithOptions(request, runtime);
}

/**
 * @summary Creates a custom library to store the entity information for recognition.
 *
 * @description *   This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * *   Workflow for using a custom recognition library: Create a library, create a custom object entity within the library, register sample images for the entity, create an analysis template that uses your custom library, and then submit an analysis task using the template.
 * *   You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request CreateRecognitionLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecognitionLibResponse
 */
CreateRecognitionLibResponse Client::createRecognitionLibWithOptions(const CreateRecognitionLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasLibDescription()) {
    query["LibDescription"] = request.libDescription();
  }

  if (!!request.hasLibName()) {
    query["LibName"] = request.libName();
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
    {"action" , "CreateRecognitionLib"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecognitionLibResponse>();
}

/**
 * @summary Creates a custom library to store the entity information for recognition.
 *
 * @description *   This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * *   Workflow for using a custom recognition library: Create a library, create a custom object entity within the library, register sample images for the entity, create an analysis template that uses your custom library, and then submit an analysis task using the template.
 * *   You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request CreateRecognitionLibRequest
 * @return CreateRecognitionLibResponse
 */
CreateRecognitionLibResponse Client::createRecognitionLib(const CreateRecognitionLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRecognitionLibWithOptions(request, runtime);
}

/**
 * @summary Adds a sample image or a text label to a specific entity within a recognition library.
 *
 * @description *   This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * *   You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request CreateRecognitionSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRecognitionSampleResponse
 */
CreateRecognitionSampleResponse Client::createRecognitionSampleWithOptions(const CreateRecognitionSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.entityId();
  }

  if (!!request.hasImageUrl()) {
    query["ImageUrl"] = request.imageUrl();
  }

  if (!!request.hasLabelPrompt()) {
    query["LabelPrompt"] = request.labelPrompt();
  }

  if (!!request.hasLibId()) {
    query["LibId"] = request.libId();
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
    {"action" , "CreateRecognitionSample"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRecognitionSampleResponse>();
}

/**
 * @summary Adds a sample image or a text label to a specific entity within a recognition library.
 *
 * @description *   This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * *   You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request CreateRecognitionSampleRequest
 * @return CreateRecognitionSampleResponse
 */
CreateRecognitionSampleResponse Client::createRecognitionSample(const CreateRecognitionSampleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRecognitionSampleWithOptions(request, runtime);
}

/**
 * @summary 创建搜索索引
 *
 * @description The large visual model feature is still in the public preview phase. You can use this feature for free for 1,000 hours of videos.
 *
 * @param request CreateSearchIndexRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSearchIndexResponse
 */
CreateSearchIndexResponse Client::createSearchIndexWithOptions(const CreateSearchIndexRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndexConfig()) {
    query["IndexConfig"] = request.indexConfig();
  }

  if (!!request.hasIndexStatus()) {
    query["IndexStatus"] = request.indexStatus();
  }

  if (!!request.hasIndexType()) {
    query["IndexType"] = request.indexType();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSearchIndex"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSearchIndexResponse>();
}

/**
 * @summary 创建搜索索引
 *
 * @description The large visual model feature is still in the public preview phase. You can use this feature for free for 1,000 hours of videos.
 *
 * @param request CreateSearchIndexRequest
 * @return CreateSearchIndexResponse
 */
CreateSearchIndexResponse Client::createSearchIndex(const CreateSearchIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSearchIndexWithOptions(request, runtime);
}

/**
 * @summary Creates a search library to store media assets.
 *
 * @param request CreateSearchLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSearchLibResponse
 */
CreateSearchLibResponse Client::createSearchLibWithOptions(const CreateSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSearchLib"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSearchLibResponse>();
}

/**
 * @summary Creates a search library to store media assets.
 *
 * @param request CreateSearchLibRequest
 * @return CreateSearchLibResponse
 */
CreateSearchLibResponse Client::createSearchLib(const CreateSearchLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSearchLibWithOptions(request, runtime);
}

/**
 * @summary Creates a source in MediaWeaver.
 *
 * @param request CreateSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSourceResponse
 */
CreateSourceResponse Client::createSourceWithOptions(const CreateSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHttpPackageConfigurations()) {
    query["HttpPackageConfigurations"] = request.httpPackageConfigurations();
  }

  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.sourceLocationName();
  }

  if (!!request.hasSourceName()) {
    query["SourceName"] = request.sourceName();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSource"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSourceResponse>();
}

/**
 * @summary Creates a source in MediaWeaver.
 *
 * @param request CreateSourceRequest
 * @return CreateSourceResponse
 */
CreateSourceResponse Client::createSource(const CreateSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSourceWithOptions(request, runtime);
}

/**
 * @summary Creates a source location.
 *
 * @param request CreateSourceLocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSourceLocationResponse
 */
CreateSourceLocationResponse Client::createSourceLocationWithOptions(const CreateSourceLocationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseUrl()) {
    query["BaseUrl"] = request.baseUrl();
  }

  if (!!request.hasEnableSegmentDelivery()) {
    query["EnableSegmentDelivery"] = request.enableSegmentDelivery();
  }

  if (!!request.hasSegmentDeliveryUrl()) {
    query["SegmentDeliveryUrl"] = request.segmentDeliveryUrl();
  }

  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.sourceLocationName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSourceLocation"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSourceLocationResponse>();
}

/**
 * @summary Creates a source location.
 *
 * @param request CreateSourceLocationRequest
 * @return CreateSourceLocationResponse
 */
CreateSourceLocationResponse Client::createSourceLocation(const CreateSourceLocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSourceLocationWithOptions(request, runtime);
}

/**
 * @summary Registers a live stream as a media asset.
 *
 * @param request CreateStreamToSearchLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateStreamToSearchLibResponse
 */
CreateStreamToSearchLibResponse Client::createStreamToSearchLibWithOptions(const CreateStreamToSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInput()) {
    query["Input"] = request.input();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateStreamToSearchLib"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateStreamToSearchLibResponse>();
}

/**
 * @summary Registers a live stream as a media asset.
 *
 * @param request CreateStreamToSearchLibRequest
 * @return CreateStreamToSearchLibResponse
 */
CreateStreamToSearchLibResponse Client::createStreamToSearchLib(const CreateStreamToSearchLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createStreamToSearchLibWithOptions(request, runtime);
}

/**
 * @summary Obtains the upload URL and credential of a media asset and creates information about the media asset.
 *
 * @description *   You can call this operation to obtain the upload URLs and credentials of audio and video files. You can also call this operation to obtain the upload URLs and credentials of images and auxiliary media assets.
 * *   Obtaining an upload URL and credential is essential for Intelligent Media Services (IMS) and is required in each upload operation.
 * *   If the video upload credential expires, you can call the RefreshUploadMedia operation to obtain a new upload credential. The default validity period of a video upload credential is 3,000 seconds.
 * *   After you upload a media asset, you can configure a callback to receive upload event notifications or call the GetMediaInfo operation to determine whether the media asset is uploaded based on the returned status.
 * *   The MediaId parameter returned by this operation can be used for media asset lifecycle management or media processing.
 * *   You can call this operation to upload media assets only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media asset to your own OSS bucket, you can upload the file to your OSS bucket by using [OSS SDK](https://help.aliyun.com/document_detail/32006.html), and then call the [RegisterMediaInfo](https://help.aliyun.com/document_detail/441152.html) operation to register the file in the OSS bucket with the media asset library.
 * *   This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
 *
 * @param request CreateUploadMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUploadMediaResponse
 */
CreateUploadMediaResponse Client::createUploadMediaWithOptions(const CreateUploadMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.entityId();
  }

  if (!!request.hasFileInfo()) {
    query["FileInfo"] = request.fileInfo();
  }

  if (!!request.hasMediaMetaData()) {
    query["MediaMetaData"] = request.mediaMetaData();
  }

  if (!!request.hasPostProcessConfig()) {
    query["PostProcessConfig"] = request.postProcessConfig();
  }

  if (!!request.hasUploadTargetConfig()) {
    query["UploadTargetConfig"] = request.uploadTargetConfig();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUploadMedia"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUploadMediaResponse>();
}

/**
 * @summary Obtains the upload URL and credential of a media asset and creates information about the media asset.
 *
 * @description *   You can call this operation to obtain the upload URLs and credentials of audio and video files. You can also call this operation to obtain the upload URLs and credentials of images and auxiliary media assets.
 * *   Obtaining an upload URL and credential is essential for Intelligent Media Services (IMS) and is required in each upload operation.
 * *   If the video upload credential expires, you can call the RefreshUploadMedia operation to obtain a new upload credential. The default validity period of a video upload credential is 3,000 seconds.
 * *   After you upload a media asset, you can configure a callback to receive upload event notifications or call the GetMediaInfo operation to determine whether the media asset is uploaded based on the returned status.
 * *   The MediaId parameter returned by this operation can be used for media asset lifecycle management or media processing.
 * *   You can call this operation to upload media assets only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media asset to your own OSS bucket, you can upload the file to your OSS bucket by using [OSS SDK](https://help.aliyun.com/document_detail/32006.html), and then call the [RegisterMediaInfo](https://help.aliyun.com/document_detail/441152.html) operation to register the file in the OSS bucket with the media asset library.
 * *   This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
 *
 * @param request CreateUploadMediaRequest
 * @return CreateUploadMediaResponse
 */
CreateUploadMediaResponse Client::createUploadMedia(const CreateUploadMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUploadMediaWithOptions(request, runtime);
}

/**
 * @summary Obtains the upload URL and credential of a media stream.
 *
 * @description *   You can call this operation to upload only a local media stream. After the media stream is uploaded, it is associated with the specified media asset ID.
 * *   You can call this operation to upload media streams only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media stream to your own OSS bucket, you can upload the file to your OSS bucket by using [OSS SDK](https://help.aliyun.com/document_detail/32006.html), and then call the [RegisterMediaStream](https://help.aliyun.com/document_detail/440765.html) operation to associate the media stream with the specified media asset ID.
 * *   This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
 *
 * @param request CreateUploadStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUploadStreamResponse
 */
CreateUploadStreamResponse Client::createUploadStreamWithOptions(const CreateUploadStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUploadStream"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUploadStreamResponse>();
}

/**
 * @summary Obtains the upload URL and credential of a media stream.
 *
 * @description *   You can call this operation to upload only a local media stream. After the media stream is uploaded, it is associated with the specified media asset ID.
 * *   You can call this operation to upload media streams only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media stream to your own OSS bucket, you can upload the file to your OSS bucket by using [OSS SDK](https://help.aliyun.com/document_detail/32006.html), and then call the [RegisterMediaStream](https://help.aliyun.com/document_detail/440765.html) operation to associate the media stream with the specified media asset ID.
 * *   This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
 *
 * @param request CreateUploadStreamRequest
 * @return CreateUploadStreamResponse
 */
CreateUploadStreamResponse Client::createUploadStream(const CreateUploadStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUploadStreamWithOptions(request, runtime);
}

/**
 * @summary Ingests an asset for VOD packaging.
 *
 * @param tmpReq CreateVodPackagingAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVodPackagingAssetResponse
 */
CreateVodPackagingAssetResponse Client::createVodPackagingAssetWithOptions(const CreateVodPackagingAssetRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateVodPackagingAssetShrinkRequest request = CreateVodPackagingAssetShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  json query = {};
  if (!!request.hasAssetName()) {
    query["AssetName"] = request.assetName();
  }

  if (!!request.hasContentId()) {
    query["ContentId"] = request.contentId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasInputShrink()) {
    query["Input"] = request.inputShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVodPackagingAsset"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVodPackagingAssetResponse>();
}

/**
 * @summary Ingests an asset for VOD packaging.
 *
 * @param request CreateVodPackagingAssetRequest
 * @return CreateVodPackagingAssetResponse
 */
CreateVodPackagingAssetResponse Client::createVodPackagingAsset(const CreateVodPackagingAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVodPackagingAssetWithOptions(request, runtime);
}

/**
 * @summary Creates a packaging configuration.
 *
 * @param tmpReq CreateVodPackagingConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVodPackagingConfigurationResponse
 */
CreateVodPackagingConfigurationResponse Client::createVodPackagingConfigurationWithOptions(const CreateVodPackagingConfigurationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateVodPackagingConfigurationShrinkRequest request = CreateVodPackagingConfigurationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPackageConfig()) {
    request.setPackageConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.packageConfig(), "PackageConfig", "json"));
  }

  json query = {};
  if (!!request.hasConfigurationName()) {
    query["ConfigurationName"] = request.configurationName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasPackageConfigShrink()) {
    query["PackageConfig"] = request.packageConfigShrink();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.protocol();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVodPackagingConfiguration"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVodPackagingConfigurationResponse>();
}

/**
 * @summary Creates a packaging configuration.
 *
 * @param request CreateVodPackagingConfigurationRequest
 * @return CreateVodPackagingConfigurationResponse
 */
CreateVodPackagingConfigurationResponse Client::createVodPackagingConfiguration(const CreateVodPackagingConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVodPackagingConfigurationWithOptions(request, runtime);
}

/**
 * @summary Creates a packaging group.
 *
 * @param request CreateVodPackagingGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVodPackagingGroupResponse
 */
CreateVodPackagingGroupResponse Client::createVodPackagingGroupWithOptions(const CreateVodPackagingGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVodPackagingGroup"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVodPackagingGroupResponse>();
}

/**
 * @summary Creates a packaging group.
 *
 * @param request CreateVodPackagingGroupRequest
 * @return CreateVodPackagingGroupResponse
 */
CreateVodPackagingGroupResponse Client::createVodPackagingGroup(const CreateVodPackagingGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVodPackagingGroupWithOptions(request, runtime);
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
  if (!!request.hasCiphertextBlob()) {
    query["CiphertextBlob"] = request.ciphertextBlob();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DecryptKMSDataKey"},
    {"version" , "2020-11-09"},
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
 * @summary Deletes dialog records of an AI agent.
 *
 * @param request DeleteAIAgentDialogueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAIAgentDialogueResponse
 */
DeleteAIAgentDialogueResponse Client::deleteAIAgentDialogueWithOptions(const DeleteAIAgentDialogueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDialogueId()) {
    query["DialogueId"] = request.dialogueId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAIAgentDialogue"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAIAgentDialogueResponse>();
}

/**
 * @summary Deletes dialog records of an AI agent.
 *
 * @param request DeleteAIAgentDialogueRequest
 * @return DeleteAIAgentDialogueResponse
 */
DeleteAIAgentDialogueResponse Client::deleteAIAgentDialogue(const DeleteAIAgentDialogueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAIAgentDialogueWithOptions(request, runtime);
}

/**
 * @summary Deletes an ad insertion configuration.
 *
 * @param request DeleteAdInsertionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAdInsertionResponse
 */
DeleteAdInsertionResponse Client::deleteAdInsertionWithOptions(const DeleteAdInsertionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteAdInsertion"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAdInsertionResponse>();
}

/**
 * @summary Deletes an ad insertion configuration.
 *
 * @param request DeleteAdInsertionRequest
 * @return DeleteAdInsertionResponse
 */
DeleteAdInsertionResponse Client::deleteAdInsertion(const DeleteAdInsertionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAdInsertionWithOptions(request, runtime);
}

/**
 * @summary Deletes a digital human training job that is in the Init or Fail state.
 *
 * @param request DeleteAvatarTrainingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAvatarTrainingJobResponse
 */
DeleteAvatarTrainingJobResponse Client::deleteAvatarTrainingJobWithOptions(const DeleteAvatarTrainingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAvatarTrainingJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAvatarTrainingJobResponse>();
}

/**
 * @summary Deletes a digital human training job that is in the Init or Fail state.
 *
 * @param request DeleteAvatarTrainingJobRequest
 * @return DeleteAvatarTrainingJobResponse
 */
DeleteAvatarTrainingJobResponse Client::deleteAvatarTrainingJob(const DeleteAvatarTrainingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAvatarTrainingJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a media asset category.
 *
 * @description This operation also deletes the subcategories, including the level-2 and level-3 categories, of the category.
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
    {"version" , "2020-11-09"},
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
 * @summary Deletes a media asset category.
 *
 * @description This operation also deletes the subcategories, including the level-2 and level-3 categories, of the category.
 *
 * @param request DeleteCategoryRequest
 * @return DeleteCategoryResponse
 */
DeleteCategoryResponse Client::deleteCategory(const DeleteCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCategoryWithOptions(request, runtime);
}

/**
 * @summary Deletes a channel.
 *
 * @param request DeleteChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteChannelResponse
 */
DeleteChannelResponse Client::deleteChannelWithOptions(const DeleteChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.channelName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteChannel"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteChannelResponse>();
}

/**
 * @summary Deletes a channel.
 *
 * @param request DeleteChannelRequest
 * @return DeleteChannelResponse
 */
DeleteChannelResponse Client::deleteChannel(const DeleteChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteChannelWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom template.
 *
 * @param request DeleteCustomTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomTemplateResponse
 */
DeleteCustomTemplateResponse Client::deleteCustomTemplateWithOptions(const DeleteCustomTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomTemplate"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomTemplateResponse>();
}

/**
 * @summary Deletes a custom template.
 *
 * @param request DeleteCustomTemplateRequest
 * @return DeleteCustomTemplateResponse
 */
DeleteCustomTemplateResponse Client::deleteCustomTemplate(const DeleteCustomTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a human voice cloning job that is not in the Training or Success state.
 *
 * @param request DeleteCustomizedVoiceJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomizedVoiceJobResponse
 */
DeleteCustomizedVoiceJobResponse Client::deleteCustomizedVoiceJobWithOptions(const DeleteCustomizedVoiceJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomizedVoiceJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomizedVoiceJobResponse>();
}

/**
 * @summary Deletes a human voice cloning job that is not in the Training or Success state.
 *
 * @param request DeleteCustomizedVoiceJobRequest
 * @return DeleteCustomizedVoiceJobResponse
 */
DeleteCustomizedVoiceJobResponse Client::deleteCustomizedVoiceJob(const DeleteCustomizedVoiceJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomizedVoiceJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a media fingerprint library.
 *
 * @param request DeleteDNADBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDNADBResponse
 */
DeleteDNADBResponse Client::deleteDNADBWithOptions(const DeleteDNADBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBId()) {
    query["DBId"] = request.DBId();
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
    {"action" , "DeleteDNADB"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDNADBResponse>();
}

/**
 * @summary Deletes a media fingerprint library.
 *
 * @param request DeleteDNADBRequest
 * @return DeleteDNADBResponse
 */
DeleteDNADBResponse Client::deleteDNADB(const DeleteDNADBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDNADBWithOptions(request, runtime);
}

/**
 * @summary Deletes files from a media fingerprint library.
 *
 * @param request DeleteDNAFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDNAFilesResponse
 */
DeleteDNAFilesResponse Client::deleteDNAFilesWithOptions(const DeleteDNAFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBId()) {
    query["DBId"] = request.DBId();
  }

  if (!!request.hasOwnerAccount()) {
    query["OwnerAccount"] = request.ownerAccount();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDNAFiles"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDNAFilesResponse>();
}

/**
 * @summary Deletes files from a media fingerprint library.
 *
 * @param request DeleteDNAFilesRequest
 * @return DeleteDNAFilesResponse
 */
DeleteDNAFilesResponse Client::deleteDNAFiles(const DeleteDNAFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDNAFilesWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more materials from an online editing project.
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

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEditingProjectMaterials"},
    {"version" , "2020-11-09"},
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
 * @summary Deletes one or more materials from an online editing project.
 *
 * @param request DeleteEditingProjectMaterialsRequest
 * @return DeleteEditingProjectMaterialsResponse
 */
DeleteEditingProjectMaterialsResponse Client::deleteEditingProjectMaterials(const DeleteEditingProjectMaterialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEditingProjectMaterialsWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more online editing project.
 *
 * @param request DeleteEditingProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEditingProjectsResponse
 */
DeleteEditingProjectsResponse Client::deleteEditingProjectsWithOptions(const DeleteEditingProjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectIds()) {
    query["ProjectIds"] = request.projectIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEditingProjects"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEditingProjectsResponse>();
}

/**
 * @summary Deletes one or more online editing project.
 *
 * @param request DeleteEditingProjectsRequest
 * @return DeleteEditingProjectsResponse
 */
DeleteEditingProjectsResponse Client::deleteEditingProjects(const DeleteEditingProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEditingProjectsWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified hotword library based on the ID.
 *
 * @description ## [](#)
 * *   You can call this operation to delete a specified hotword library.
 * *   The delete operation is irreversible.
 * *   You can create up to 100 hotword libraries in an account.
 *
 * @param request DeleteHotwordLibraryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteHotwordLibraryResponse
 */
DeleteHotwordLibraryResponse Client::deleteHotwordLibraryWithOptions(const DeleteHotwordLibraryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHotwordLibraryId()) {
    query["HotwordLibraryId"] = request.hotwordLibraryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteHotwordLibrary"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteHotwordLibraryResponse>();
}

/**
 * @summary Deletes a specified hotword library based on the ID.
 *
 * @description ## [](#)
 * *   You can call this operation to delete a specified hotword library.
 * *   The delete operation is irreversible.
 * *   You can create up to 100 hotword libraries in an account.
 *
 * @param request DeleteHotwordLibraryRequest
 * @return DeleteHotwordLibraryResponse
 */
DeleteHotwordLibraryResponse Client::deleteHotwordLibrary(const DeleteHotwordLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteHotwordLibraryWithOptions(request, runtime);
}

/**
 * @summary Deletes a live package channel by GroupName and ChannelName.
 *
 * @description ## [](#)Usage notes
 * You need to provide GroupName and ChannelName as parameters to specify exactly which channel to delete. Before you delete a channel, you must delete the origin endpoints associated with the channel.
 *
 * @param request DeleteLivePackageChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLivePackageChannelResponse
 */
DeleteLivePackageChannelResponse Client::deleteLivePackageChannelWithOptions(const DeleteLivePackageChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.channelName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLivePackageChannel"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLivePackageChannelResponse>();
}

/**
 * @summary Deletes a live package channel by GroupName and ChannelName.
 *
 * @description ## [](#)Usage notes
 * You need to provide GroupName and ChannelName as parameters to specify exactly which channel to delete. Before you delete a channel, you must delete the origin endpoints associated with the channel.
 *
 * @param request DeleteLivePackageChannelRequest
 * @return DeleteLivePackageChannelResponse
 */
DeleteLivePackageChannelResponse Client::deleteLivePackageChannel(const DeleteLivePackageChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLivePackageChannelWithOptions(request, runtime);
}

/**
 * @summary Deletes a live package channel group by name.
 *
 * @description ## [](#)Usage notes
 * Make sure that no channels are included in the channel group before you delete it.
 *
 * @param request DeleteLivePackageChannelGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLivePackageChannelGroupResponse
 */
DeleteLivePackageChannelGroupResponse Client::deleteLivePackageChannelGroupWithOptions(const DeleteLivePackageChannelGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLivePackageChannelGroup"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLivePackageChannelGroupResponse>();
}

/**
 * @summary Deletes a live package channel group by name.
 *
 * @description ## [](#)Usage notes
 * Make sure that no channels are included in the channel group before you delete it.
 *
 * @param request DeleteLivePackageChannelGroupRequest
 * @return DeleteLivePackageChannelGroupResponse
 */
DeleteLivePackageChannelGroupResponse Client::deleteLivePackageChannelGroup(const DeleteLivePackageChannelGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLivePackageChannelGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes an origin endpoint associated with a live package channel.
 *
 * @description ## [](#)Usage notes
 * This API operation is used to delete an origin endpoint associated with a live package channel by specifying `GroupName`, `ChannelName`, and `EndpointName`. This operation will permanently delete the relevant configurations. Exercise caution when you perform this operation.
 *
 * @param request DeleteLivePackageOriginEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLivePackageOriginEndpointResponse
 */
DeleteLivePackageOriginEndpointResponse Client::deleteLivePackageOriginEndpointWithOptions(const DeleteLivePackageOriginEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.channelName();
  }

  if (!!request.hasEndpointName()) {
    query["EndpointName"] = request.endpointName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLivePackageOriginEndpoint"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLivePackageOriginEndpointResponse>();
}

/**
 * @summary Deletes an origin endpoint associated with a live package channel.
 *
 * @description ## [](#)Usage notes
 * This API operation is used to delete an origin endpoint associated with a live package channel by specifying `GroupName`, `ChannelName`, and `EndpointName`. This operation will permanently delete the relevant configurations. Exercise caution when you perform this operation.
 *
 * @param request DeleteLivePackageOriginEndpointRequest
 * @return DeleteLivePackageOriginEndpointResponse
 */
DeleteLivePackageOriginEndpointResponse Client::deleteLivePackageOriginEndpoint(const DeleteLivePackageOriginEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLivePackageOriginEndpointWithOptions(request, runtime);
}

/**
 * @summary Deletes live stream recording files. You can choose to delete only the recording files or delete both the recording files and the original Object Storage Service (OSS) files.
 *
 * @param request DeleteLiveRecordFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLiveRecordFilesResponse
 */
DeleteLiveRecordFilesResponse Client::deleteLiveRecordFilesWithOptions(const DeleteLiveRecordFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRecordIds()) {
    query["RecordIds"] = request.recordIds();
  }

  if (!!request.hasRemoveFile()) {
    query["RemoveFile"] = request.removeFile();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLiveRecordFiles"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLiveRecordFilesResponse>();
}

/**
 * @summary Deletes live stream recording files. You can choose to delete only the recording files or delete both the recording files and the original Object Storage Service (OSS) files.
 *
 * @param request DeleteLiveRecordFilesRequest
 * @return DeleteLiveRecordFilesResponse
 */
DeleteLiveRecordFilesResponse Client::deleteLiveRecordFiles(const DeleteLiveRecordFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLiveRecordFilesWithOptions(request, runtime);
}

/**
 * @summary Deletes a live stream recording template without affecting existing jobs.
 *
 * @param request DeleteLiveRecordTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLiveRecordTemplateResponse
 */
DeleteLiveRecordTemplateResponse Client::deleteLiveRecordTemplateWithOptions(const DeleteLiveRecordTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLiveRecordTemplate"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLiveRecordTemplateResponse>();
}

/**
 * @summary Deletes a live stream recording template without affecting existing jobs.
 *
 * @param request DeleteLiveRecordTemplateRequest
 * @return DeleteLiveRecordTemplateResponse
 */
DeleteLiveRecordTemplateResponse Client::deleteLiveRecordTemplate(const DeleteLiveRecordTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLiveRecordTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes live stream snapshot files. You can choose to delete only the snapshot files or delete both the snapshot files and the original Object Storage Service (OSS) files.
 *
 * @param tmpReq DeleteLiveSnapshotFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLiveSnapshotFilesResponse
 */
DeleteLiveSnapshotFilesResponse Client::deleteLiveSnapshotFilesWithOptions(const DeleteLiveSnapshotFilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteLiveSnapshotFilesShrinkRequest request = DeleteLiveSnapshotFilesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCreateTimestampList()) {
    request.setCreateTimestampListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.createTimestampList(), "CreateTimestampList", "json"));
  }

  json query = {};
  if (!!request.hasCreateTimestampListShrink()) {
    query["CreateTimestampList"] = request.createTimestampListShrink();
  }

  if (!!request.hasDeleteOriginalFile()) {
    query["DeleteOriginalFile"] = request.deleteOriginalFile();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLiveSnapshotFiles"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLiveSnapshotFilesResponse>();
}

/**
 * @summary Deletes live stream snapshot files. You can choose to delete only the snapshot files or delete both the snapshot files and the original Object Storage Service (OSS) files.
 *
 * @param request DeleteLiveSnapshotFilesRequest
 * @return DeleteLiveSnapshotFilesResponse
 */
DeleteLiveSnapshotFilesResponse Client::deleteLiveSnapshotFiles(const DeleteLiveSnapshotFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLiveSnapshotFilesWithOptions(request, runtime);
}

/**
 * @summary Deletes a live stream snapshot template.
 *
 * @param request DeleteLiveSnapshotTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLiveSnapshotTemplateResponse
 */
DeleteLiveSnapshotTemplateResponse Client::deleteLiveSnapshotTemplateWithOptions(const DeleteLiveSnapshotTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteLiveSnapshotTemplate"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLiveSnapshotTemplateResponse>();
}

/**
 * @summary Deletes a live stream snapshot template.
 *
 * @param request DeleteLiveSnapshotTemplateRequest
 * @return DeleteLiveSnapshotTemplateResponse
 */
DeleteLiveSnapshotTemplateResponse Client::deleteLiveSnapshotTemplate(const DeleteLiveSnapshotTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLiveSnapshotTemplateWithOptions(request, runtime);
}

/**
 * @summary 删除指定转码任务
 *
 * @param request DeleteLiveTranscodeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLiveTranscodeJobResponse
 */
DeleteLiveTranscodeJobResponse Client::deleteLiveTranscodeJobWithOptions(const DeleteLiveTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLiveTranscodeJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLiveTranscodeJobResponse>();
}

/**
 * @summary 删除指定转码任务
 *
 * @param request DeleteLiveTranscodeJobRequest
 * @return DeleteLiveTranscodeJobResponse
 */
DeleteLiveTranscodeJobResponse Client::deleteLiveTranscodeJob(const DeleteLiveTranscodeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLiveTranscodeJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a live stream transcoding template.
 *
 * @param request DeleteLiveTranscodeTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLiveTranscodeTemplateResponse
 */
DeleteLiveTranscodeTemplateResponse Client::deleteLiveTranscodeTemplateWithOptions(const DeleteLiveTranscodeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLiveTranscodeTemplate"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLiveTranscodeTemplateResponse>();
}

/**
 * @summary Deletes a live stream transcoding template.
 *
 * @param request DeleteLiveTranscodeTemplateRequest
 * @return DeleteLiveTranscodeTemplateResponse
 */
DeleteLiveTranscodeTemplateResponse Client::deleteLiveTranscodeTemplate(const DeleteLiveTranscodeTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLiveTranscodeTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a MediaConnect flow.
 *
 * @description *   When the specified flow ID is not available, an error code is returned.
 * *   When a flow is deleted, its source and outputs are also deleted.
 * *   When a flow is in the online state, it cannot be deleted.
 *
 * @param request DeleteMediaConnectFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMediaConnectFlowResponse
 */
DeleteMediaConnectFlowResponse Client::deleteMediaConnectFlowWithOptions(const DeleteMediaConnectFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.flowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMediaConnectFlow"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMediaConnectFlowResponse>();
}

/**
 * @summary Deletes a MediaConnect flow.
 *
 * @description *   When the specified flow ID is not available, an error code is returned.
 * *   When a flow is deleted, its source and outputs are also deleted.
 * *   When a flow is in the online state, it cannot be deleted.
 *
 * @param request DeleteMediaConnectFlowRequest
 * @return DeleteMediaConnectFlowResponse
 */
DeleteMediaConnectFlowResponse Client::deleteMediaConnectFlow(const DeleteMediaConnectFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMediaConnectFlowWithOptions(request, runtime);
}

/**
 * @summary Deletes the source of a MediaConnect flow.
 *
 * @description *   When the specified flow ID is not available, an error code is returned.
 * *   When a flow is in the online state, its source cannot be deleted.
 * *   You can delete the source only after all outputs of the flow have been deleted.
 *
 * @param request DeleteMediaConnectFlowInputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMediaConnectFlowInputResponse
 */
DeleteMediaConnectFlowInputResponse Client::deleteMediaConnectFlowInputWithOptions(const DeleteMediaConnectFlowInputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.flowId();
  }

  if (!!request.hasInputName()) {
    query["InputName"] = request.inputName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMediaConnectFlowInput"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMediaConnectFlowInputResponse>();
}

/**
 * @summary Deletes the source of a MediaConnect flow.
 *
 * @description *   When the specified flow ID is not available, an error code is returned.
 * *   When a flow is in the online state, its source cannot be deleted.
 * *   You can delete the source only after all outputs of the flow have been deleted.
 *
 * @param request DeleteMediaConnectFlowInputRequest
 * @return DeleteMediaConnectFlowInputResponse
 */
DeleteMediaConnectFlowInputResponse Client::deleteMediaConnectFlowInput(const DeleteMediaConnectFlowInputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMediaConnectFlowInputWithOptions(request, runtime);
}

/**
 * @summary Deletes an output of a MediaConnect flow.
 *
 * @description *   When the specified flow ID is not available, an error code is returned.
 * *   When a flow is in the online state, its outputs cannot be deleted.
 *
 * @param request DeleteMediaConnectFlowOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMediaConnectFlowOutputResponse
 */
DeleteMediaConnectFlowOutputResponse Client::deleteMediaConnectFlowOutputWithOptions(const DeleteMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.flowId();
  }

  if (!!request.hasOutputName()) {
    query["OutputName"] = request.outputName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMediaConnectFlowOutput"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMediaConnectFlowOutputResponse>();
}

/**
 * @summary Deletes an output of a MediaConnect flow.
 *
 * @description *   When the specified flow ID is not available, an error code is returned.
 * *   When a flow is in the online state, its outputs cannot be deleted.
 *
 * @param request DeleteMediaConnectFlowOutputRequest
 * @return DeleteMediaConnectFlowOutputResponse
 */
DeleteMediaConnectFlowOutputResponse Client::deleteMediaConnectFlowOutput(const DeleteMediaConnectFlowOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMediaConnectFlowOutputWithOptions(request, runtime);
}

/**
 * @summary Deletes a specific media asset from a search library.
 *
 * @param request DeleteMediaFromSearchLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMediaFromSearchLibResponse
 */
DeleteMediaFromSearchLibResponse Client::deleteMediaFromSearchLibWithOptions(const DeleteMediaFromSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasMsgBody()) {
    query["MsgBody"] = request.msgBody();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMediaFromSearchLib"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMediaFromSearchLibResponse>();
}

/**
 * @summary Deletes a specific media asset from a search library.
 *
 * @param request DeleteMediaFromSearchLibRequest
 * @return DeleteMediaFromSearchLibResponse
 */
DeleteMediaFromSearchLibResponse Client::deleteMediaFromSearchLib(const DeleteMediaFromSearchLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMediaFromSearchLibWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple media assets at a time. You can delete at most 20 media assets at a time. If MediaIds is specified, it is preferentially used. If MediaIds is empty, InputURLs must be specified.
 *
 * @param request DeleteMediaInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMediaInfosResponse
 */
DeleteMediaInfosResponse Client::deleteMediaInfosWithOptions(const DeleteMediaInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeletePhysicalFiles()) {
    query["DeletePhysicalFiles"] = request.deletePhysicalFiles();
  }

  if (!!request.hasInputURLs()) {
    query["InputURLs"] = request.inputURLs();
  }

  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.mediaIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMediaInfos"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMediaInfosResponse>();
}

/**
 * @summary Deletes multiple media assets at a time. You can delete at most 20 media assets at a time. If MediaIds is specified, it is preferentially used. If MediaIds is empty, InputURLs must be specified.
 *
 * @param request DeleteMediaInfosRequest
 * @return DeleteMediaInfosResponse
 */
DeleteMediaInfosResponse Client::deleteMediaInfos(const DeleteMediaInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMediaInfosWithOptions(request, runtime);
}

/**
 * @summary Deletes a MediaLive channel.
 *
 * @description *  You can only delete a channel that is not running.
 * ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request DeleteMediaLiveChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMediaLiveChannelResponse
 */
DeleteMediaLiveChannelResponse Client::deleteMediaLiveChannelWithOptions(const DeleteMediaLiveChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannelId()) {
    body["ChannelId"] = request.channelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteMediaLiveChannel"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMediaLiveChannelResponse>();
}

/**
 * @summary Deletes a MediaLive channel.
 *
 * @description *  You can only delete a channel that is not running.
 * ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request DeleteMediaLiveChannelRequest
 * @return DeleteMediaLiveChannelResponse
 */
DeleteMediaLiveChannelResponse Client::deleteMediaLiveChannel(const DeleteMediaLiveChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMediaLiveChannelWithOptions(request, runtime);
}

/**
 * @summary Deletes a MediaLive input.
 *
 * @description *   You can delete an input only when it is not associated with a MediaLive channel.
 * ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request DeleteMediaLiveInputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMediaLiveInputResponse
 */
DeleteMediaLiveInputResponse Client::deleteMediaLiveInputWithOptions(const DeleteMediaLiveInputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInputId()) {
    body["InputId"] = request.inputId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteMediaLiveInput"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMediaLiveInputResponse>();
}

/**
 * @summary Deletes a MediaLive input.
 *
 * @description *   You can delete an input only when it is not associated with a MediaLive channel.
 * ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request DeleteMediaLiveInputRequest
 * @return DeleteMediaLiveInputResponse
 */
DeleteMediaLiveInputResponse Client::deleteMediaLiveInput(const DeleteMediaLiveInputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMediaLiveInputWithOptions(request, runtime);
}

/**
 * @summary Deletes a security group in MediaLive.
 *
 * @description *   You can only delete a security group not associated with an input.
 * ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request DeleteMediaLiveInputSecurityGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMediaLiveInputSecurityGroupResponse
 */
DeleteMediaLiveInputSecurityGroupResponse Client::deleteMediaLiveInputSecurityGroupWithOptions(const DeleteMediaLiveInputSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSecurityGroupId()) {
    body["SecurityGroupId"] = request.securityGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteMediaLiveInputSecurityGroup"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMediaLiveInputSecurityGroupResponse>();
}

/**
 * @summary Deletes a security group in MediaLive.
 *
 * @description *   You can only delete a security group not associated with an input.
 * ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request DeleteMediaLiveInputSecurityGroupRequest
 * @return DeleteMediaLiveInputSecurityGroupResponse
 */
DeleteMediaLiveInputSecurityGroupResponse Client::deleteMediaLiveInputSecurityGroup(const DeleteMediaLiveInputSecurityGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMediaLiveInputSecurityGroupWithOptions(request, runtime);
}

/**
 * @summary Deletes the marks of a media asset.
 *
 * @param request DeleteMediaMarksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMediaMarksResponse
 */
DeleteMediaMarksResponse Client::deleteMediaMarksWithOptions(const DeleteMediaMarksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasMediaMarkIds()) {
    query["MediaMarkIds"] = request.mediaMarkIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMediaMarks"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMediaMarksResponse>();
}

/**
 * @summary Deletes the marks of a media asset.
 *
 * @param request DeleteMediaMarksRequest
 * @return DeleteMediaMarksResponse
 */
DeleteMediaMarksResponse Client::deleteMediaMarks(const DeleteMediaMarksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMediaMarksWithOptions(request, runtime);
}

/**
 * @summary Deletes an ApsaraVideo Media Processing (MPS) queue.
 *
 * @param request DeletePipelineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePipelineResponse
 */
DeletePipelineResponse Client::deletePipelineWithOptions(const DeletePipelineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePipeline"},
    {"version" , "2020-11-09"},
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
 * @param request DeletePipelineRequest
 * @return DeletePipelineResponse
 */
DeletePipelineResponse Client::deletePipeline(const DeletePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePipelineWithOptions(request, runtime);
}

/**
 * @summary Deletes media streams such as video streams and audio streams.
 *
 * @description You can call this operation to delete multiple media streams at a time.
 *
 * @param request DeletePlayInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePlayInfoResponse
 */
DeletePlayInfoResponse Client::deletePlayInfoWithOptions(const DeletePlayInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeletePhysicalFiles()) {
    query["DeletePhysicalFiles"] = request.deletePhysicalFiles();
  }

  if (!!request.hasFileURLs()) {
    query["FileURLs"] = request.fileURLs();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePlayInfo"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePlayInfoResponse>();
}

/**
 * @summary Deletes media streams such as video streams and audio streams.
 *
 * @description You can call this operation to delete multiple media streams at a time.
 *
 * @param request DeletePlayInfoRequest
 * @return DeletePlayInfoResponse
 */
DeletePlayInfoResponse Client::deletePlayInfo(const DeletePlayInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePlayInfoWithOptions(request, runtime);
}

/**
 * @summary Deletes a program from a channel.
 *
 * @param request DeleteProgramRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProgramResponse
 */
DeleteProgramResponse Client::deleteProgramWithOptions(const DeleteProgramRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.channelName();
  }

  if (!!request.hasProgramName()) {
    query["ProgramName"] = request.programName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProgram"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProgramResponse>();
}

/**
 * @summary Deletes a program from a channel.
 *
 * @param request DeleteProgramRequest
 * @return DeleteProgramResponse
 */
DeleteProgramResponse Client::deleteProgram(const DeleteProgramRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProgramWithOptions(request, runtime);
}

/**
 * @summary Deletes an entity from the specified custom recognition library.
 *
 * @description *   This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * *   You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request DeleteRecognitionEntityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecognitionEntityResponse
 */
DeleteRecognitionEntityResponse Client::deleteRecognitionEntityWithOptions(const DeleteRecognitionEntityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.entityId();
  }

  if (!!request.hasLibId()) {
    query["LibId"] = request.libId();
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
    {"action" , "DeleteRecognitionEntity"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRecognitionEntityResponse>();
}

/**
 * @summary Deletes an entity from the specified custom recognition library.
 *
 * @description *   This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * *   You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request DeleteRecognitionEntityRequest
 * @return DeleteRecognitionEntityResponse
 */
DeleteRecognitionEntityResponse Client::deleteRecognitionEntity(const DeleteRecognitionEntityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRecognitionEntityWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom recognition library, including all entities and samples within it.
 *
 * @description *   This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * *   You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request DeleteRecognitionLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecognitionLibResponse
 */
DeleteRecognitionLibResponse Client::deleteRecognitionLibWithOptions(const DeleteRecognitionLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasLibId()) {
    query["LibId"] = request.libId();
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
    {"action" , "DeleteRecognitionLib"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRecognitionLibResponse>();
}

/**
 * @summary Deletes a custom recognition library, including all entities and samples within it.
 *
 * @description *   This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * *   You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request DeleteRecognitionLibRequest
 * @return DeleteRecognitionLibResponse
 */
DeleteRecognitionLibResponse Client::deleteRecognitionLib(const DeleteRecognitionLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRecognitionLibWithOptions(request, runtime);
}

/**
 * @summary Deletes a sample for a custom entity.
 *
 * @description *   This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * *   You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request DeleteRecognitionSampleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecognitionSampleResponse
 */
DeleteRecognitionSampleResponse Client::deleteRecognitionSampleWithOptions(const DeleteRecognitionSampleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.entityId();
  }

  if (!!request.hasLibId()) {
    query["LibId"] = request.libId();
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

  if (!!request.hasSampleId()) {
    query["SampleId"] = request.sampleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRecognitionSample"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRecognitionSampleResponse>();
}

/**
 * @summary Deletes a sample for a custom entity.
 *
 * @description *   This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * *   You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request DeleteRecognitionSampleRequest
 * @return DeleteRecognitionSampleResponse
 */
DeleteRecognitionSampleResponse Client::deleteRecognitionSample(const DeleteRecognitionSampleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRecognitionSampleWithOptions(request, runtime);
}

/**
 * @summary Deletes intelligent jobs based on job IDs.
 *
 * @param request DeleteSmartJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSmartJobResponse
 */
DeleteSmartJobResponse Client::deleteSmartJobWithOptions(const DeleteSmartJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSmartJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSmartJobResponse>();
}

/**
 * @summary Deletes intelligent jobs based on job IDs.
 *
 * @param request DeleteSmartJobRequest
 * @return DeleteSmartJobResponse
 */
DeleteSmartJobResponse Client::deleteSmartJob(const DeleteSmartJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSmartJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a source from MediaWeaver.
 *
 * @param request DeleteSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSourceResponse
 */
DeleteSourceResponse Client::deleteSourceWithOptions(const DeleteSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSoftDelete()) {
    query["SoftDelete"] = request.softDelete();
  }

  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.sourceLocationName();
  }

  if (!!request.hasSourceName()) {
    query["SourceName"] = request.sourceName();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSource"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSourceResponse>();
}

/**
 * @summary Deletes a source from MediaWeaver.
 *
 * @param request DeleteSourceRequest
 * @return DeleteSourceResponse
 */
DeleteSourceResponse Client::deleteSource(const DeleteSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSourceWithOptions(request, runtime);
}

/**
 * @summary Deletes a source location.
 *
 * @param request DeleteSourceLocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSourceLocationResponse
 */
DeleteSourceLocationResponse Client::deleteSourceLocationWithOptions(const DeleteSourceLocationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSoftDelete()) {
    query["SoftDelete"] = request.softDelete();
  }

  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.sourceLocationName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSourceLocation"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSourceLocationResponse>();
}

/**
 * @summary Deletes a source location.
 *
 * @param request DeleteSourceLocationRequest
 * @return DeleteSourceLocationResponse
 */
DeleteSourceLocationResponse Client::deleteSourceLocation(const DeleteSourceLocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSourceLocationWithOptions(request, runtime);
}

/**
 * @summary Deletes templates.
 *
 * @description A template is an encapsulation of the timeline of a media editing and production job. You can define a common timeline as a template. When you have the same requirements, you need to only specify key parameters and materials to produce videos.
 * *   For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
 * *   For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
 *
 * @param request DeleteTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplateWithOptions(const DeleteTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteTemplate"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteTemplateResponse>();
}

/**
 * @summary Deletes templates.
 *
 * @description A template is an encapsulation of the timeline of a media editing and production job. You can define a common timeline as a template. When you have the same requirements, you need to only specify key parameters and materials to produce videos.
 * *   For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
 * *   For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
 *
 * @param request DeleteTemplateRequest
 * @return DeleteTemplateResponse
 */
DeleteTemplateResponse Client::deleteTemplate(const DeleteTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a VOD packaging asset.
 *
 * @param request DeleteVodPackagingAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVodPackagingAssetResponse
 */
DeleteVodPackagingAssetResponse Client::deleteVodPackagingAssetWithOptions(const DeleteVodPackagingAssetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetName()) {
    query["AssetName"] = request.assetName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVodPackagingAsset"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVodPackagingAssetResponse>();
}

/**
 * @summary Deletes a VOD packaging asset.
 *
 * @param request DeleteVodPackagingAssetRequest
 * @return DeleteVodPackagingAssetResponse
 */
DeleteVodPackagingAssetResponse Client::deleteVodPackagingAsset(const DeleteVodPackagingAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVodPackagingAssetWithOptions(request, runtime);
}

/**
 * @summary Deletes a packaging configuration.
 *
 * @param request DeleteVodPackagingConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVodPackagingConfigurationResponse
 */
DeleteVodPackagingConfigurationResponse Client::deleteVodPackagingConfigurationWithOptions(const DeleteVodPackagingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigurationName()) {
    query["ConfigurationName"] = request.configurationName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVodPackagingConfiguration"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVodPackagingConfigurationResponse>();
}

/**
 * @summary Deletes a packaging configuration.
 *
 * @param request DeleteVodPackagingConfigurationRequest
 * @return DeleteVodPackagingConfigurationResponse
 */
DeleteVodPackagingConfigurationResponse Client::deleteVodPackagingConfiguration(const DeleteVodPackagingConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVodPackagingConfigurationWithOptions(request, runtime);
}

/**
 * @summary Deletes a packaging group.
 *
 * @param request DeleteVodPackagingGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVodPackagingGroupResponse
 */
DeleteVodPackagingGroupResponse Client::deleteVodPackagingGroupWithOptions(const DeleteVodPackagingGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVodPackagingGroup"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVodPackagingGroupResponse>();
}

/**
 * @summary Deletes a packaging group.
 *
 * @param request DeleteVodPackagingGroupRequest
 * @return DeleteVodPackagingGroupResponse
 */
DeleteVodPackagingGroupResponse Client::deleteVodPackagingGroup(const DeleteVodPackagingGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVodPackagingGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an AI agent.
 *
 * @description ## [](#)Request description
 * *   **Feature**: You can call this operation to query the information about an AI agent.
 * *   **Scenario**: If you need to monitor or analyze the performance of an AI agent in a call or debug the agent configurations, you can call this operation to obtain required data.
 *
 * @param request DescribeAIAgentInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAIAgentInstanceResponse
 */
DescribeAIAgentInstanceResponse Client::describeAIAgentInstanceWithOptions(const DescribeAIAgentInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAIAgentInstance"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAIAgentInstanceResponse>();
}

/**
 * @summary Queries the information about an AI agent.
 *
 * @description ## [](#)Request description
 * *   **Feature**: You can call this operation to query the information about an AI agent.
 * *   **Scenario**: If you need to monitor or analyze the performance of an AI agent in a call or debug the agent configurations, you can call this operation to obtain required data.
 *
 * @param request DescribeAIAgentInstanceRequest
 * @return DescribeAIAgentInstanceResponse
 */
DescribeAIAgentInstanceResponse Client::describeAIAgentInstance(const DescribeAIAgentInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAIAgentInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the usage statistics of Intelligent Media Services (IMS) on video-on-demand (VOD) editing. The maximum query range is 31 days. You can query data within the last 90 days.
 *
 * @param request DescribeMeterImsEditUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMeterImsEditUsageResponse
 */
DescribeMeterImsEditUsageResponse Client::describeMeterImsEditUsageWithOptions(const DescribeMeterImsEditUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTs()) {
    query["EndTs"] = request.endTs();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.startTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMeterImsEditUsage"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMeterImsEditUsageResponse>();
}

/**
 * @summary Queries the usage statistics of Intelligent Media Services (IMS) on video-on-demand (VOD) editing. The maximum query range is 31 days. You can query data within the last 90 days.
 *
 * @param request DescribeMeterImsEditUsageRequest
 * @return DescribeMeterImsEditUsageResponse
 */
DescribeMeterImsEditUsageResponse Client::describeMeterImsEditUsage(const DescribeMeterImsEditUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMeterImsEditUsageWithOptions(request, runtime);
}

/**
 * @summary Queries the usage statistics of Intelligent Media Services (IMS) on ultra high definition (UHD) transcoding of ApsaraVideo Media Processing (MPS). The maximum query range is 31 days. You can query data within the last 90 days.
 *
 * @param request DescribeMeterImsMediaConvertUHDUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMeterImsMediaConvertUHDUsageResponse
 */
DescribeMeterImsMediaConvertUHDUsageResponse Client::describeMeterImsMediaConvertUHDUsageWithOptions(const DescribeMeterImsMediaConvertUHDUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTs()) {
    query["EndTs"] = request.endTs();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.startTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMeterImsMediaConvertUHDUsage"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMeterImsMediaConvertUHDUsageResponse>();
}

/**
 * @summary Queries the usage statistics of Intelligent Media Services (IMS) on ultra high definition (UHD) transcoding of ApsaraVideo Media Processing (MPS). The maximum query range is 31 days. You can query data within the last 90 days.
 *
 * @param request DescribeMeterImsMediaConvertUHDUsageRequest
 * @return DescribeMeterImsMediaConvertUHDUsageResponse
 */
DescribeMeterImsMediaConvertUHDUsageResponse Client::describeMeterImsMediaConvertUHDUsage(const DescribeMeterImsMediaConvertUHDUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMeterImsMediaConvertUHDUsageWithOptions(request, runtime);
}

/**
 * @summary Queries the usage statistics of Intelligent Media Services (IMS) on video-on-demand (VOD) transcoding. The maximum query range is 31 days. You can query data within the last 90 days.
 *
 * @param request DescribeMeterImsMediaConvertUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMeterImsMediaConvertUsageResponse
 */
DescribeMeterImsMediaConvertUsageResponse Client::describeMeterImsMediaConvertUsageWithOptions(const DescribeMeterImsMediaConvertUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTs()) {
    query["EndTs"] = request.endTs();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.startTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMeterImsMediaConvertUsage"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMeterImsMediaConvertUsageResponse>();
}

/**
 * @summary Queries the usage statistics of Intelligent Media Services (IMS) on video-on-demand (VOD) transcoding. The maximum query range is 31 days. You can query data within the last 90 days.
 *
 * @param request DescribeMeterImsMediaConvertUsageRequest
 * @return DescribeMeterImsMediaConvertUsageResponse
 */
DescribeMeterImsMediaConvertUsageResponse Client::describeMeterImsMediaConvertUsage(const DescribeMeterImsMediaConvertUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMeterImsMediaConvertUsageWithOptions(request, runtime);
}

/**
 * @summary Queries the usage statistics of Intelligent Media Services (IMS) on AI processing of ApsaraVideo Media Processing (MPS). The maximum query range is 31 days. You can query data within the last 90 days.
 *
 * @param request DescribeMeterImsMpsAiUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMeterImsMpsAiUsageResponse
 */
DescribeMeterImsMpsAiUsageResponse Client::describeMeterImsMpsAiUsageWithOptions(const DescribeMeterImsMpsAiUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTs()) {
    query["EndTs"] = request.endTs();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.startTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMeterImsMpsAiUsage"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMeterImsMpsAiUsageResponse>();
}

/**
 * @summary Queries the usage statistics of Intelligent Media Services (IMS) on AI processing of ApsaraVideo Media Processing (MPS). The maximum query range is 31 days. You can query data within the last 90 days.
 *
 * @param request DescribeMeterImsMpsAiUsageRequest
 * @return DescribeMeterImsMpsAiUsageResponse
 */
DescribeMeterImsMpsAiUsageResponse Client::describeMeterImsMpsAiUsage(const DescribeMeterImsMpsAiUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMeterImsMpsAiUsageWithOptions(request, runtime);
}

/**
 * @summary Queries the usage statistics of Intelligent Media Services (IMS). The maximum query range is 31 days. You can query data within the last 90 days.
 *
 * @param request DescribeMeterImsSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMeterImsSummaryResponse
 */
DescribeMeterImsSummaryResponse Client::describeMeterImsSummaryWithOptions(const DescribeMeterImsSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTs()) {
    query["EndTs"] = request.endTs();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.region();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.startTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMeterImsSummary"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMeterImsSummaryResponse>();
}

/**
 * @summary Queries the usage statistics of Intelligent Media Services (IMS). The maximum query range is 31 days. You can query data within the last 90 days.
 *
 * @param request DescribeMeterImsSummaryRequest
 * @return DescribeMeterImsSummaryResponse
 */
DescribeMeterImsSummaryResponse Client::describeMeterImsSummary(const DescribeMeterImsSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMeterImsSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries the event callback configurations of an AI agent.
 *
 * @description You can call this operation to query the detailed callback configurations of an AI agent.
 *
 * @param request DescribeNotifyConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNotifyConfigResponse
 */
DescribeNotifyConfigResponse Client::describeNotifyConfigWithOptions(const DescribeNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAIAgentId()) {
    query["AIAgentId"] = request.AIAgentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNotifyConfig"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNotifyConfigResponse>();
}

/**
 * @summary Queries the event callback configurations of an AI agent.
 *
 * @description You can call this operation to query the detailed callback configurations of an AI agent.
 *
 * @param request DescribeNotifyConfigRequest
 * @return DescribeNotifyConfigResponse
 */
DescribeNotifyConfigResponse Client::describeNotifyConfig(const DescribeNotifyConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNotifyConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieves playback records based on the player\\"s TraceId. This API supports pagination.
 *
 * @param request DescribePlayListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePlayListResponse
 */
DescribePlayListResponse Client::describePlayListWithOptions(const DescribePlayListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTs()) {
    query["BeginTs"] = request.beginTs();
  }

  if (!!request.hasEndTs()) {
    query["EndTs"] = request.endTs();
  }

  if (!!request.hasOrderName()) {
    query["OrderName"] = request.orderName();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPlayType()) {
    query["PlayType"] = request.playType();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTraceId()) {
    query["TraceId"] = request.traceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePlayList"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePlayListResponse>();
}

/**
 * @summary Retrieves playback records based on the player\\"s TraceId. This API supports pagination.
 *
 * @param request DescribePlayListRequest
 * @return DescribePlayListResponse
 */
DescribePlayListResponse Client::describePlayList(const DescribePlayListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePlayListWithOptions(request, runtime);
}

/**
 * @summary 查询实例
 *
 * @param request DescribeRtcRobotInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRtcRobotInstanceResponse
 */
DescribeRtcRobotInstanceResponse Client::describeRtcRobotInstanceWithOptions(const DescribeRtcRobotInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRtcRobotInstance"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRtcRobotInstanceResponse>();
}

/**
 * @summary 查询实例
 *
 * @param request DescribeRtcRobotInstanceRequest
 * @return DescribeRtcRobotInstanceResponse
 */
DescribeRtcRobotInstanceResponse Client::describeRtcRobotInstance(const DescribeRtcRobotInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRtcRobotInstanceWithOptions(request, runtime);
}

/**
 * @summary Checks whether the reading of users has issues, such as noticeable pronunciation errors or background noise. After the audio is checked on the cloud, the qualified audio is temporarily stored on the cloud for subsequent training. Do not skip this step.
 *
 * @param request DetectAudioForCustomizedVoiceJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DetectAudioForCustomizedVoiceJobResponse
 */
DetectAudioForCustomizedVoiceJobResponse Client::detectAudioForCustomizedVoiceJobWithOptions(const DetectAudioForCustomizedVoiceJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAudioRecordId()) {
    query["AudioRecordId"] = request.audioRecordId();
  }

  if (!!request.hasRecordUrl()) {
    query["RecordUrl"] = request.recordUrl();
  }

  if (!!request.hasVoiceId()) {
    query["VoiceId"] = request.voiceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DetectAudioForCustomizedVoiceJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DetectAudioForCustomizedVoiceJobResponse>();
}

/**
 * @summary Checks whether the reading of users has issues, such as noticeable pronunciation errors or background noise. After the audio is checked on the cloud, the qualified audio is temporarily stored on the cloud for subsequent training. Do not skip this step.
 *
 * @param request DetectAudioForCustomizedVoiceJobRequest
 * @return DetectAudioForCustomizedVoiceJobResponse
 */
DetectAudioForCustomizedVoiceJobResponse Client::detectAudioForCustomizedVoiceJob(const DetectAudioForCustomizedVoiceJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return detectAudioForCustomizedVoiceJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a search index. After you delete a search index, the existing index data is cleared and index-based analysis, storage, and query are not supported for subsequent media assets.
 *
 * @param request DropSearchIndexRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DropSearchIndexResponse
 */
DropSearchIndexResponse Client::dropSearchIndexWithOptions(const DropSearchIndexRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndexType()) {
    query["IndexType"] = request.indexType();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DropSearchIndex"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DropSearchIndexResponse>();
}

/**
 * @summary Deletes a search index. After you delete a search index, the existing index data is cleared and index-based analysis, storage, and query are not supported for subsequent media assets.
 *
 * @param request DropSearchIndexRequest
 * @return DropSearchIndexResponse
 */
DropSearchIndexResponse Client::dropSearchIndex(const DropSearchIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dropSearchIndexWithOptions(request, runtime);
}

/**
 * @summary Deletes a search library and all media assets in the library.
 *
 * @param request DropSearchLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DropSearchLibResponse
 */
DropSearchLibResponse Client::dropSearchLibWithOptions(const DropSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DropSearchLib"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DropSearchLibResponse>();
}

/**
 * @summary Deletes a search library and all media assets in the library.
 *
 * @param request DropSearchLibRequest
 * @return DropSearchLibResponse
 */
DropSearchLibResponse Client::dropSearchLib(const DropSearchLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dropSearchLibWithOptions(request, runtime);
}

/**
 * @summary Disables an output of a MediaConnect flow. When disabled, the output retains its configuration, but no live stream is delivered to the destination.
 *
 * @param request ForbidMediaConnectFlowOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ForbidMediaConnectFlowOutputResponse
 */
ForbidMediaConnectFlowOutputResponse Client::forbidMediaConnectFlowOutputWithOptions(const ForbidMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.flowId();
  }

  if (!!request.hasOutputName()) {
    query["OutputName"] = request.outputName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ForbidMediaConnectFlowOutput"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ForbidMediaConnectFlowOutputResponse>();
}

/**
 * @summary Disables an output of a MediaConnect flow. When disabled, the output retains its configuration, but no live stream is delivered to the destination.
 *
 * @param request ForbidMediaConnectFlowOutputRequest
 * @return ForbidMediaConnectFlowOutputResponse
 */
ForbidMediaConnectFlowOutputResponse Client::forbidMediaConnectFlowOutput(const ForbidMediaConnectFlowOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return forbidMediaConnectFlowOutputWithOptions(request, runtime);
}

/**
 * @summary 转呼通话到目标电话
 *
 * @param request ForwardAIAgentCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ForwardAIAgentCallResponse
 */
ForwardAIAgentCallResponse Client::forwardAIAgentCallWithOptions(const ForwardAIAgentCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ForwardAIAgentCall"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ForwardAIAgentCallResponse>();
}

/**
 * @summary 转呼通话到目标电话
 *
 * @param request ForwardAIAgentCallRequest
 * @return ForwardAIAgentCallResponse
 */
ForwardAIAgentCallResponse Client::forwardAIAgentCall(const ForwardAIAgentCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return forwardAIAgentCallWithOptions(request, runtime);
}

/**
 * @summary Creates an AI agent. This operation returns the channel in which the AI agent resides, the username of the AI agent in the channel, and the token that you can use to join the channel.
 *
 * @description ## [](#)Request description
 * You can call this operation to create an AI agent based on the provided ID. You can join the channel based on the returned information and talk to the agent.
 * **Note:** Make sure that the provided AI agent ID is valid and configure optional parameters based on your business requirements.
 *
 * @param tmpReq GenerateAIAgentCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateAIAgentCallResponse
 */
GenerateAIAgentCallResponse Client::generateAIAgentCallWithOptions(const GenerateAIAgentCallRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GenerateAIAgentCallShrinkRequest request = GenerateAIAgentCallShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentConfig()) {
    request.setAgentConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.agentConfig(), "AgentConfig", "json"));
  }

  if (!!tmpReq.hasChatSyncConfig()) {
    request.setChatSyncConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.chatSyncConfig(), "ChatSyncConfig", "json"));
  }

  if (!!tmpReq.hasTemplateConfig()) {
    request.setTemplateConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.templateConfig(), "TemplateConfig", "json"));
  }

  json query = {};
  if (!!request.hasAIAgentId()) {
    query["AIAgentId"] = request.AIAgentId();
  }

  if (!!request.hasAgentConfigShrink()) {
    query["AgentConfig"] = request.agentConfigShrink();
  }

  if (!!request.hasChatSyncConfigShrink()) {
    query["ChatSyncConfig"] = request.chatSyncConfigShrink();
  }

  if (!!request.hasExpire()) {
    query["Expire"] = request.expire();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasTemplateConfigShrink()) {
    query["TemplateConfig"] = request.templateConfigShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateAIAgentCall"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateAIAgentCallResponse>();
}

/**
 * @summary Creates an AI agent. This operation returns the channel in which the AI agent resides, the username of the AI agent in the channel, and the token that you can use to join the channel.
 *
 * @description ## [](#)Request description
 * You can call this operation to create an AI agent based on the provided ID. You can join the channel based on the returned information and talk to the agent.
 * **Note:** Make sure that the provided AI agent ID is valid and configure optional parameters based on your business requirements.
 *
 * @param request GenerateAIAgentCallRequest
 * @return GenerateAIAgentCallResponse
 */
GenerateAIAgentCallResponse Client::generateAIAgentCall(const GenerateAIAgentCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateAIAgentCallWithOptions(request, runtime);
}

/**
 * @summary Generates a random Key Management Service (KMS) data key used for HTTP Live Streaming (HLS) encryption and transcoding of videos.
 *
 * @param request GenerateKMSDataKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateKMSDataKeyResponse
 */
GenerateKMSDataKeyResponse Client::generateKMSDataKeyWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GenerateKMSDataKey"},
    {"version" , "2020-11-09"},
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
 * @summary Generates a random Key Management Service (KMS) data key used for HTTP Live Streaming (HLS) encryption and transcoding of videos.
 *
 * @return GenerateKMSDataKeyResponse
 */
GenerateKMSDataKeyResponse Client::generateKMSDataKey() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateKMSDataKeyWithOptions(runtime);
}

/**
 * @summary Generates the token required for interactive messaging.
 *
 * @param request GenerateMessageChatTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateMessageChatTokenResponse
 */
GenerateMessageChatTokenResponse Client::generateMessageChatTokenWithOptions(const GenerateMessageChatTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAIAgentId()) {
    query["AIAgentId"] = request.AIAgentId();
  }

  if (!!request.hasExpire()) {
    query["Expire"] = request.expire();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.role();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateMessageChatToken"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateMessageChatTokenResponse>();
}

/**
 * @summary Generates the token required for interactive messaging.
 *
 * @param request GenerateMessageChatTokenRequest
 * @return GenerateMessageChatTokenResponse
 */
GenerateMessageChatTokenResponse Client::generateMessageChatToken(const GenerateMessageChatTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateMessageChatTokenWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a workflow task.
 *
 * @param request GetAIWorkflowTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAIWorkflowTaskResponse
 */
GetAIWorkflowTaskResponse Client::getAIWorkflowTaskWithOptions(const GetAIWorkflowTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAIWorkflowTask"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAIWorkflowTaskResponse>();
}

/**
 * @summary Retrieves the details of a workflow task.
 *
 * @param request GetAIWorkflowTaskRequest
 * @return GetAIWorkflowTaskResponse
 */
GetAIWorkflowTaskResponse Client::getAIWorkflowTask(const GetAIWorkflowTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAIWorkflowTaskWithOptions(request, runtime);
}

/**
 * @summary Obtains details of an ad insertion configuration.
 *
 * @param request GetAdInsertionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAdInsertionResponse
 */
GetAdInsertionResponse Client::getAdInsertionWithOptions(const GetAdInsertionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAdInsertion"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAdInsertionResponse>();
}

/**
 * @summary Obtains details of an ad insertion configuration.
 *
 * @param request GetAdInsertionRequest
 * @return GetAdInsertionResponse
 */
GetAdInsertionResponse Client::getAdInsertion(const GetAdInsertionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAdInsertionWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a trained digital human.
 *
 * @param request GetAvatarRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAvatarResponse
 */
GetAvatarResponse Client::getAvatarWithOptions(const GetAvatarRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAvatarId()) {
    query["AvatarId"] = request.avatarId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAvatar"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAvatarResponse>();
}

/**
 * @summary Queries the information about a trained digital human.
 *
 * @param request GetAvatarRequest
 * @return GetAvatarResponse
 */
GetAvatarResponse Client::getAvatar(const GetAvatarRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAvatarWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a digital human training job.
 *
 * @param request GetAvatarTrainingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAvatarTrainingJobResponse
 */
GetAvatarTrainingJobResponse Client::getAvatarTrainingJobWithOptions(const GetAvatarTrainingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAvatarTrainingJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAvatarTrainingJobResponse>();
}

/**
 * @summary Queries the information about a digital human training job.
 *
 * @param request GetAvatarTrainingJobRequest
 * @return GetAvatarTrainingJobResponse
 */
GetAvatarTrainingJobResponse Client::getAvatarTrainingJob(const GetAvatarTrainingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAvatarTrainingJobWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a quick video production job, including the input parameters, job state, and the IDs and URLs of the output media assets. You can call this operation to query only quick video production jobs created within the past year.
 *
 * @param request GetBatchMediaProducingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBatchMediaProducingJobResponse
 */
GetBatchMediaProducingJobResponse Client::getBatchMediaProducingJobWithOptions(const GetBatchMediaProducingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBatchMediaProducingJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBatchMediaProducingJobResponse>();
}

/**
 * @summary Queries the information about a quick video production job, including the input parameters, job state, and the IDs and URLs of the output media assets. You can call this operation to query only quick video production jobs created within the past year.
 *
 * @param request GetBatchMediaProducingJobRequest
 * @return GetBatchMediaProducingJobResponse
 */
GetBatchMediaProducingJobResponse Client::getBatchMediaProducingJob(const GetBatchMediaProducingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getBatchMediaProducingJobWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a category and its subcategories.
 *
 * @description You can call this operation to query the information about a category and its subcategories based on the category ID and category type.
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
    {"version" , "2020-11-09"},
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
 * @summary Queries the information about a category and its subcategories.
 *
 * @description You can call this operation to query the information about a category and its subcategories based on the category ID and category type.
 *
 * @param request GetCategoriesRequest
 * @return GetCategoriesResponse
 */
GetCategoriesResponse Client::getCategories(const GetCategoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCategoriesWithOptions(request, runtime);
}

/**
 * @summary Queries information about a channel in MediaWeaver.
 *
 * @param request GetChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChannelResponse
 */
GetChannelResponse Client::getChannelWithOptions(const GetChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.channelName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChannel"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChannelResponse>();
}

/**
 * @summary Queries information about a channel in MediaWeaver.
 *
 * @param request GetChannelRequest
 * @return GetChannelResponse
 */
GetChannelResponse Client::getChannel(const GetChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChannelWithOptions(request, runtime);
}

/**
 * @summary 获取内容分析搜索配置
 *
 * @param request GetContentAnalyzeConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContentAnalyzeConfigResponse
 */
GetContentAnalyzeConfigResponse Client::getContentAnalyzeConfigWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetContentAnalyzeConfig"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetContentAnalyzeConfigResponse>();
}

/**
 * @summary 获取内容分析搜索配置
 *
 * @return GetContentAnalyzeConfigResponse
 */
GetContentAnalyzeConfigResponse Client::getContentAnalyzeConfig() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getContentAnalyzeConfigWithOptions(runtime);
}

/**
 * @summary Queries the information about a custom template.
 *
 * @description You can call this operation to query the information about a template with the ID specified by the TemplateId parameter. You can also query the information about the default template. If TemplateId is specified, other parameters are ignored and the template whose ID is specified is queried. If TemplateId is not specified, the default template is queried based on other parameters. In this case, Type is required.
 * Template types:
 * 1.  1: transcoding template.
 * 2.  2: snapshot template.
 * 3.  3: animated image template.
 * 4.  4\\. image watermark template.
 * 5.  5: text watermark template.
 * 6.  6: subtitle template.
 * 7.  7: AI-assisted content moderation template.
 * 8.  8: AI-assisted intelligent thumbnail template.
 * 9.  9: AI-assisted intelligent erasure template.
 * Subtypes of transcoding templates:
 * 1.  1 (Normal): regular template.
 * 2.  2 (AudioTranscode): audio transcoding template.
 * 3.  3 (Remux): container format conversion template.
 * 4.  4 (NarrowBandV1): Narrowband HD 1.0 template.
 * 5.  5 (NarrowBandV2): Narrowband HD 2.0 template.
 * Subtypes of snapshot templates:
 * 1.  1 (Normal): regular template.
 * 2.  2 (Sprite): sprite template.
 * 3.  3 (WebVtt): WebVTT template.
 * Subtypes of AI-assisted content moderation templates:
 * 1.  1 (Video): video moderation template.
 * 2.  2 (Audio): audio moderation template.
 * 3.  3 (Image): image moderation template.
 * Subtypes of AI-assisted intelligent erasure templates:
 * 1.  1 (VideoDelogo): logo erasure template.
 * 2.  2 (VideoDetext): subtitle erasure template.
 *
 * @param request GetCustomTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomTemplateResponse
 */
GetCustomTemplateResponse Client::getCustomTemplateWithOptions(const GetCustomTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSubtype()) {
    query["Subtype"] = request.subtype();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomTemplate"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomTemplateResponse>();
}

/**
 * @summary Queries the information about a custom template.
 *
 * @description You can call this operation to query the information about a template with the ID specified by the TemplateId parameter. You can also query the information about the default template. If TemplateId is specified, other parameters are ignored and the template whose ID is specified is queried. If TemplateId is not specified, the default template is queried based on other parameters. In this case, Type is required.
 * Template types:
 * 1.  1: transcoding template.
 * 2.  2: snapshot template.
 * 3.  3: animated image template.
 * 4.  4\\. image watermark template.
 * 5.  5: text watermark template.
 * 6.  6: subtitle template.
 * 7.  7: AI-assisted content moderation template.
 * 8.  8: AI-assisted intelligent thumbnail template.
 * 9.  9: AI-assisted intelligent erasure template.
 * Subtypes of transcoding templates:
 * 1.  1 (Normal): regular template.
 * 2.  2 (AudioTranscode): audio transcoding template.
 * 3.  3 (Remux): container format conversion template.
 * 4.  4 (NarrowBandV1): Narrowband HD 1.0 template.
 * 5.  5 (NarrowBandV2): Narrowband HD 2.0 template.
 * Subtypes of snapshot templates:
 * 1.  1 (Normal): regular template.
 * 2.  2 (Sprite): sprite template.
 * 3.  3 (WebVtt): WebVTT template.
 * Subtypes of AI-assisted content moderation templates:
 * 1.  1 (Video): video moderation template.
 * 2.  2 (Audio): audio moderation template.
 * 3.  3 (Image): image moderation template.
 * Subtypes of AI-assisted intelligent erasure templates:
 * 1.  1 (VideoDelogo): logo erasure template.
 * 2.  2 (VideoDetext): subtitle erasure template.
 *
 * @param request GetCustomTemplateRequest
 * @return GetCustomTemplateResponse
 */
GetCustomTemplateResponse Client::getCustomTemplate(const GetCustomTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a personalized human voice.
 *
 * @param request GetCustomizedVoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomizedVoiceResponse
 */
GetCustomizedVoiceResponse Client::getCustomizedVoiceWithOptions(const GetCustomizedVoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVoiceId()) {
    query["VoiceId"] = request.voiceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomizedVoice"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomizedVoiceResponse>();
}

/**
 * @summary Queries the information about a personalized human voice.
 *
 * @param request GetCustomizedVoiceRequest
 * @return GetCustomizedVoiceResponse
 */
GetCustomizedVoiceResponse Client::getCustomizedVoice(const GetCustomizedVoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomizedVoiceWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a human voice cloning job.
 *
 * @param request GetCustomizedVoiceJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomizedVoiceJobResponse
 */
GetCustomizedVoiceJobResponse Client::getCustomizedVoiceJobWithOptions(const GetCustomizedVoiceJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomizedVoiceJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomizedVoiceJobResponse>();
}

/**
 * @summary Queries the information about a human voice cloning job.
 *
 * @param request GetCustomizedVoiceJobRequest
 * @return GetCustomizedVoiceJobResponse
 */
GetCustomizedVoiceJobResponse Client::getCustomizedVoiceJob(const GetCustomizedVoiceJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomizedVoiceJobWithOptions(request, runtime);
}

/**
 * @summary 获取用户默认存储地址
 *
 * @param request GetDefaultStorageLocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDefaultStorageLocationResponse
 */
GetDefaultStorageLocationResponse Client::getDefaultStorageLocationWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetDefaultStorageLocation"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDefaultStorageLocationResponse>();
}

/**
 * @summary 获取用户默认存储地址
 *
 * @return GetDefaultStorageLocationResponse
 */
GetDefaultStorageLocationResponse Client::getDefaultStorageLocation() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDefaultStorageLocationWithOptions(runtime);
}

/**
 * @summary Queries the text to be read and sample audio for training a personalized human voice.
 *
 * @param request GetDemonstrationForCustomizedVoiceJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDemonstrationForCustomizedVoiceJobResponse
 */
GetDemonstrationForCustomizedVoiceJobResponse Client::getDemonstrationForCustomizedVoiceJobWithOptions(const GetDemonstrationForCustomizedVoiceJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasScenario()) {
    query["Scenario"] = request.scenario();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDemonstrationForCustomizedVoiceJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDemonstrationForCustomizedVoiceJobResponse>();
}

/**
 * @summary Queries the text to be read and sample audio for training a personalized human voice.
 *
 * @param request GetDemonstrationForCustomizedVoiceJobRequest
 * @return GetDemonstrationForCustomizedVoiceJobResponse
 */
GetDemonstrationForCustomizedVoiceJobResponse Client::getDemonstrationForCustomizedVoiceJob(const GetDemonstrationForCustomizedVoiceJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDemonstrationForCustomizedVoiceJobWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an image animation job.
 *
 * @param request GetDynamicImageJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDynamicImageJobResponse
 */
GetDynamicImageJobResponse Client::getDynamicImageJobWithOptions(const GetDynamicImageJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDynamicImageJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDynamicImageJobResponse>();
}

/**
 * @summary Queries the information about an image animation job.
 *
 * @param request GetDynamicImageJobRequest
 * @return GetDynamicImageJobResponse
 */
GetDynamicImageJobResponse Client::getDynamicImageJob(const GetDynamicImageJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDynamicImageJobWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an online editing project.
 *
 * @param request GetEditingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEditingProjectResponse
 */
GetEditingProjectResponse Client::getEditingProjectWithOptions(const GetEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasRequestSource()) {
    query["RequestSource"] = request.requestSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEditingProject"},
    {"version" , "2020-11-09"},
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
 * @summary Queries the information about an online editing project.
 *
 * @param request GetEditingProjectRequest
 * @return GetEditingProjectResponse
 */
GetEditingProjectResponse Client::getEditingProject(const GetEditingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEditingProjectWithOptions(request, runtime);
}

/**
 * @summary Queries all materials associated with an online editing project.
 *
 * @param request GetEditingProjectMaterialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEditingProjectMaterialsResponse
 */
GetEditingProjectMaterialsResponse Client::getEditingProjectMaterialsWithOptions(const GetEditingProjectMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEditingProjectMaterials"},
    {"version" , "2020-11-09"},
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
 * @summary Queries all materials associated with an online editing project.
 *
 * @param request GetEditingProjectMaterialsRequest
 * @return GetEditingProjectMaterialsResponse
 */
GetEditingProjectMaterialsResponse Client::getEditingProjectMaterials(const GetEditingProjectMaterialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEditingProjectMaterialsWithOptions(request, runtime);
}

/**
 * @summary Queries event callback configurations.
 *
 * @param request GetEventCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEventCallbackResponse
 */
GetEventCallbackResponse Client::getEventCallbackWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetEventCallback"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEventCallbackResponse>();
}

/**
 * @summary Queries event callback configurations.
 *
 * @return GetEventCallbackResponse
 */
GetEventCallbackResponse Client::getEventCallback() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEventCallbackWithOptions(runtime);
}

/**
 * @summary Queries the information about a specified hotword library based on the ID.
 *
 * @description ## [](#)
 * You can call this operation to retrieve details of a specified hotword library based on the ID, including the library name, description, and content and attributes of all hotwords in it.
 *
 * @param request GetHotwordLibraryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHotwordLibraryResponse
 */
GetHotwordLibraryResponse Client::getHotwordLibraryWithOptions(const GetHotwordLibraryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHotwordLibraryId()) {
    query["HotwordLibraryId"] = request.hotwordLibraryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHotwordLibrary"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHotwordLibraryResponse>();
}

/**
 * @summary Queries the information about a specified hotword library based on the ID.
 *
 * @description ## [](#)
 * You can call this operation to retrieve details of a specified hotword library based on the ID, including the library name, description, and content and attributes of all hotwords in it.
 *
 * @param request GetHotwordLibraryRequest
 * @return GetHotwordLibraryResponse
 */
GetHotwordLibraryResponse Client::getHotwordLibrary(const GetHotwordLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getHotwordLibraryWithOptions(request, runtime);
}

/**
 * @summary Queries the index file of a live stream. The index file is used to preview an editing project in the console.
 *
 * @param request GetLiveEditingIndexFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLiveEditingIndexFileResponse
 */
GetLiveEditingIndexFileResponse Client::getLiveEditingIndexFileWithOptions(const GetLiveEditingIndexFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasDomainName()) {
    query["DomainName"] = request.domainName();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasStreamName()) {
    query["StreamName"] = request.streamName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLiveEditingIndexFile"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLiveEditingIndexFileResponse>();
}

/**
 * @summary Queries the index file of a live stream. The index file is used to preview an editing project in the console.
 *
 * @param request GetLiveEditingIndexFileRequest
 * @return GetLiveEditingIndexFileResponse
 */
GetLiveEditingIndexFileResponse Client::getLiveEditingIndexFile(const GetLiveEditingIndexFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLiveEditingIndexFileWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a live editing job. The requested information includes the state, timeline, and template of the job, the ID and URL of the output file, and the configurations of the job. You can call this operation to query only live editing jobs created within the past year.
 *
 * @param request GetLiveEditingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLiveEditingJobResponse
 */
GetLiveEditingJobResponse Client::getLiveEditingJobWithOptions(const GetLiveEditingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLiveEditingJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLiveEditingJobResponse>();
}

/**
 * @summary Queries the information about a live editing job. The requested information includes the state, timeline, and template of the job, the ID and URL of the output file, and the configurations of the job. You can call this operation to query only live editing jobs created within the past year.
 *
 * @param request GetLiveEditingJobRequest
 * @return GetLiveEditingJobResponse
 */
GetLiveEditingJobResponse Client::getLiveEditingJob(const GetLiveEditingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLiveEditingJobWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a live package channel.
 *
 * @description ## [](#)Usage notes
 * This API operation allows you to query the details of a live package channel, including the creation time, description, ingest endpoint, protocol, number of segments, and segment duration.
 *
 * @param request GetLivePackageChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLivePackageChannelResponse
 */
GetLivePackageChannelResponse Client::getLivePackageChannelWithOptions(const GetLivePackageChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.channelName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLivePackageChannel"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLivePackageChannelResponse>();
}

/**
 * @summary Queries the details of a live package channel.
 *
 * @description ## [](#)Usage notes
 * This API operation allows you to query the details of a live package channel, including the creation time, description, ingest endpoint, protocol, number of segments, and segment duration.
 *
 * @param request GetLivePackageChannelRequest
 * @return GetLivePackageChannelResponse
 */
GetLivePackageChannelResponse Client::getLivePackageChannel(const GetLivePackageChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLivePackageChannelWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a live package channel group by name.
 *
 * @description ## [](#)Usage notes
 * You can call this API operation to query the details of a specific channel group, including its name, description, origin domain, and creation and last modification timestamps.
 *
 * @param request GetLivePackageChannelGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLivePackageChannelGroupResponse
 */
GetLivePackageChannelGroupResponse Client::getLivePackageChannelGroupWithOptions(const GetLivePackageChannelGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLivePackageChannelGroup"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLivePackageChannelGroupResponse>();
}

/**
 * @summary Queries the details of a live package channel group by name.
 *
 * @description ## [](#)Usage notes
 * You can call this API operation to query the details of a specific channel group, including its name, description, origin domain, and creation and last modification timestamps.
 *
 * @param request GetLivePackageChannelGroupRequest
 * @return GetLivePackageChannelGroupResponse
 */
GetLivePackageChannelGroupResponse Client::getLivePackageChannelGroup(const GetLivePackageChannelGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLivePackageChannelGroupWithOptions(request, runtime);
}

/**
 * @summary Queries origin endpoints associated with a live package channel.
 *
 * @description ## [](#)Usage notes
 *
 * @param request GetLivePackageOriginEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLivePackageOriginEndpointResponse
 */
GetLivePackageOriginEndpointResponse Client::getLivePackageOriginEndpointWithOptions(const GetLivePackageOriginEndpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.channelName();
  }

  if (!!request.hasEndpointName()) {
    query["EndpointName"] = request.endpointName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLivePackageOriginEndpoint"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLivePackageOriginEndpointResponse>();
}

/**
 * @summary Queries origin endpoints associated with a live package channel.
 *
 * @description ## [](#)Usage notes
 *
 * @param request GetLivePackageOriginEndpointRequest
 * @return GetLivePackageOriginEndpointResponse
 */
GetLivePackageOriginEndpointResponse Client::getLivePackageOriginEndpoint(const GetLivePackageOriginEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLivePackageOriginEndpointWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a live stream recording job.
 *
 * @param request GetLiveRecordJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLiveRecordJobResponse
 */
GetLiveRecordJobResponse Client::getLiveRecordJobWithOptions(const GetLiveRecordJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLiveRecordJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLiveRecordJobResponse>();
}

/**
 * @summary Queries the information about a live stream recording job.
 *
 * @param request GetLiveRecordJobRequest
 * @return GetLiveRecordJobResponse
 */
GetLiveRecordJobResponse Client::getLiveRecordJob(const GetLiveRecordJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLiveRecordJobWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a live stream recording template or a snapshot of the template.
 *
 * @param request GetLiveRecordTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLiveRecordTemplateResponse
 */
GetLiveRecordTemplateResponse Client::getLiveRecordTemplateWithOptions(const GetLiveRecordTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLiveRecordTemplate"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLiveRecordTemplateResponse>();
}

/**
 * @summary Queries the information about a live stream recording template or a snapshot of the template.
 *
 * @param request GetLiveRecordTemplateRequest
 * @return GetLiveRecordTemplateResponse
 */
GetLiveRecordTemplateResponse Client::getLiveRecordTemplate(const GetLiveRecordTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLiveRecordTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the information a live stream snapshot job.
 *
 * @param request GetLiveSnapshotJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLiveSnapshotJobResponse
 */
GetLiveSnapshotJobResponse Client::getLiveSnapshotJobWithOptions(const GetLiveSnapshotJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLiveSnapshotJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLiveSnapshotJobResponse>();
}

/**
 * @summary Queries the information a live stream snapshot job.
 *
 * @param request GetLiveSnapshotJobRequest
 * @return GetLiveSnapshotJobResponse
 */
GetLiveSnapshotJobResponse Client::getLiveSnapshotJob(const GetLiveSnapshotJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLiveSnapshotJobWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a live stream snapshot template.
 *
 * @param request GetLiveSnapshotTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLiveSnapshotTemplateResponse
 */
GetLiveSnapshotTemplateResponse Client::getLiveSnapshotTemplateWithOptions(const GetLiveSnapshotTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLiveSnapshotTemplate"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLiveSnapshotTemplateResponse>();
}

/**
 * @summary Queries the information about a live stream snapshot template.
 *
 * @param request GetLiveSnapshotTemplateRequest
 * @return GetLiveSnapshotTemplateResponse
 */
GetLiveSnapshotTemplateResponse Client::getLiveSnapshotTemplate(const GetLiveSnapshotTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLiveSnapshotTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a live stream transcoding job.
 *
 * @param request GetLiveTranscodeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLiveTranscodeJobResponse
 */
GetLiveTranscodeJobResponse Client::getLiveTranscodeJobWithOptions(const GetLiveTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLiveTranscodeJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLiveTranscodeJobResponse>();
}

/**
 * @summary Queries the information about a live stream transcoding job.
 *
 * @param request GetLiveTranscodeJobRequest
 * @return GetLiveTranscodeJobResponse
 */
GetLiveTranscodeJobResponse Client::getLiveTranscodeJob(const GetLiveTranscodeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLiveTranscodeJobWithOptions(request, runtime);
}

/**
 * @summary Queries the information a live stream transcoding template.
 *
 * @param request GetLiveTranscodeTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLiveTranscodeTemplateResponse
 */
GetLiveTranscodeTemplateResponse Client::getLiveTranscodeTemplateWithOptions(const GetLiveTranscodeTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLiveTranscodeTemplate"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLiveTranscodeTemplateResponse>();
}

/**
 * @summary Queries the information a live stream transcoding template.
 *
 * @param request GetLiveTranscodeTemplateRequest
 * @return GetLiveTranscodeTemplateResponse
 */
GetLiveTranscodeTemplateResponse Client::getLiveTranscodeTemplate(const GetLiveTranscodeTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getLiveTranscodeTemplateWithOptions(request, runtime);
}

/**
 * @summary Retrieves all regions where MediaConnect is available.
 *
 * @param request GetMediaConnectAvailableRegionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaConnectAvailableRegionResponse
 */
GetMediaConnectAvailableRegionResponse Client::getMediaConnectAvailableRegionWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetMediaConnectAvailableRegion"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaConnectAvailableRegionResponse>();
}

/**
 * @summary Retrieves all regions where MediaConnect is available.
 *
 * @return GetMediaConnectAvailableRegionResponse
 */
GetMediaConnectAvailableRegionResponse Client::getMediaConnectAvailableRegion() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaConnectAvailableRegionWithOptions(runtime);
}

/**
 * @summary Obtains information about a specific MediaConnect flow.
 *
 * @description *   When the specified flow ID is not available, an error code is returned.
 * *   The returned StartTime is valid only when the flow is in the online state.
 *
 * @param request GetMediaConnectFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaConnectFlowResponse
 */
GetMediaConnectFlowResponse Client::getMediaConnectFlowWithOptions(const GetMediaConnectFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.flowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMediaConnectFlow"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaConnectFlowResponse>();
}

/**
 * @summary Obtains information about a specific MediaConnect flow.
 *
 * @description *   When the specified flow ID is not available, an error code is returned.
 * *   The returned StartTime is valid only when the flow is in the online state.
 *
 * @param request GetMediaConnectFlowRequest
 * @return GetMediaConnectFlowResponse
 */
GetMediaConnectFlowResponse Client::getMediaConnectFlow(const GetMediaConnectFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaConnectFlowWithOptions(request, runtime);
}

/**
 * @summary Retrieves the names of all outputs for a MediaConnect flow.
 *
 * @param request GetMediaConnectFlowAllOutputNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaConnectFlowAllOutputNameResponse
 */
GetMediaConnectFlowAllOutputNameResponse Client::getMediaConnectFlowAllOutputNameWithOptions(const GetMediaConnectFlowAllOutputNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.flowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMediaConnectFlowAllOutputName"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaConnectFlowAllOutputNameResponse>();
}

/**
 * @summary Retrieves the names of all outputs for a MediaConnect flow.
 *
 * @param request GetMediaConnectFlowAllOutputNameRequest
 * @return GetMediaConnectFlowAllOutputNameResponse
 */
GetMediaConnectFlowAllOutputNameResponse Client::getMediaConnectFlowAllOutputName(const GetMediaConnectFlowAllOutputNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaConnectFlowAllOutputNameWithOptions(request, runtime);
}

/**
 * @summary Obtains information about the source of a MediaConnect flow.
 *
 * @description *   When the specified flow ID is not available, an error code is returned.
 *
 * @param request GetMediaConnectFlowInputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaConnectFlowInputResponse
 */
GetMediaConnectFlowInputResponse Client::getMediaConnectFlowInputWithOptions(const GetMediaConnectFlowInputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.flowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMediaConnectFlowInput"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaConnectFlowInputResponse>();
}

/**
 * @summary Obtains information about the source of a MediaConnect flow.
 *
 * @description *   When the specified flow ID is not available, an error code is returned.
 *
 * @param request GetMediaConnectFlowInputRequest
 * @return GetMediaConnectFlowInputResponse
 */
GetMediaConnectFlowInputResponse Client::getMediaConnectFlowInput(const GetMediaConnectFlowInputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaConnectFlowInputWithOptions(request, runtime);
}

/**
 * @summary Obtains information about an output of a MediaConnect flow.
 *
 * @description *   When the specified flow ID is not available, an error code is returned.
 *
 * @param request GetMediaConnectFlowOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaConnectFlowOutputResponse
 */
GetMediaConnectFlowOutputResponse Client::getMediaConnectFlowOutputWithOptions(const GetMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.flowId();
  }

  if (!!request.hasOutputName()) {
    query["OutputName"] = request.outputName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMediaConnectFlowOutput"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaConnectFlowOutputResponse>();
}

/**
 * @summary Obtains information about an output of a MediaConnect flow.
 *
 * @description *   When the specified flow ID is not available, an error code is returned.
 *
 * @param request GetMediaConnectFlowOutputRequest
 * @return GetMediaConnectFlowOutputResponse
 */
GetMediaConnectFlowOutputResponse Client::getMediaConnectFlowOutput(const GetMediaConnectFlowOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaConnectFlowOutputWithOptions(request, runtime);
}

/**
 * @summary Obtains the details of a transcoding task.
 *
 * @param request GetMediaConvertJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaConvertJobResponse
 */
GetMediaConvertJobResponse Client::getMediaConvertJobWithOptions(const GetMediaConvertJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMediaConvertJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaConvertJobResponse>();
}

/**
 * @summary Obtains the details of a transcoding task.
 *
 * @param request GetMediaConvertJobRequest
 * @return GetMediaConvertJobResponse
 */
GetMediaConvertJobResponse Client::getMediaConvertJob(const GetMediaConvertJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaConvertJobWithOptions(request, runtime);
}

/**
 * @summary Queries information about a media asset based on the ID of the media asset in Intelligent Media Services (IMS) or the input URL of the media asset.
 *
 * @description If the MediaId parameter is specified, the MediaId parameter is preferentially used for the query. If the MediaId parameter is left empty, the InputURL parameter must be specified.
 *
 * @param request GetMediaInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaInfoResponse
 */
GetMediaInfoResponse Client::getMediaInfoWithOptions(const GetMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.authTimeout();
  }

  if (!!request.hasInputURL()) {
    query["InputURL"] = request.inputURL();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasOutputType()) {
    query["OutputType"] = request.outputType();
  }

  if (!!request.hasReturnDetailedInfo()) {
    query["ReturnDetailedInfo"] = request.returnDetailedInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMediaInfo"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaInfoResponse>();
}

/**
 * @summary Queries information about a media asset based on the ID of the media asset in Intelligent Media Services (IMS) or the input URL of the media asset.
 *
 * @description If the MediaId parameter is specified, the MediaId parameter is preferentially used for the query. If the MediaId parameter is left empty, the InputURL parameter must be specified.
 *
 * @param request GetMediaInfoRequest
 * @return GetMediaInfoResponse
 */
GetMediaInfoResponse Client::getMediaInfo(const GetMediaInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a media information analysis job.
 *
 * @param request GetMediaInfoJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaInfoJobResponse
 */
GetMediaInfoJobResponse Client::getMediaInfoJobWithOptions(const GetMediaInfoJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMediaInfoJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaInfoJobResponse>();
}

/**
 * @summary Queries the information about a media information analysis job.
 *
 * @param request GetMediaInfoJobRequest
 * @return GetMediaInfoJobResponse
 */
GetMediaInfoJobResponse Client::getMediaInfoJob(const GetMediaInfoJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaInfoJobWithOptions(request, runtime);
}

/**
 * @summary Queries a MediaLive channel.
 *
 * @description ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request GetMediaLiveChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaLiveChannelResponse
 */
GetMediaLiveChannelResponse Client::getMediaLiveChannelWithOptions(const GetMediaLiveChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannelId()) {
    body["ChannelId"] = request.channelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetMediaLiveChannel"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaLiveChannelResponse>();
}

/**
 * @summary Queries a MediaLive channel.
 *
 * @description ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request GetMediaLiveChannelRequest
 * @return GetMediaLiveChannelResponse
 */
GetMediaLiveChannelResponse Client::getMediaLiveChannel(const GetMediaLiveChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaLiveChannelWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a MediaLive input.
 *
 * @description ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request GetMediaLiveInputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaLiveInputResponse
 */
GetMediaLiveInputResponse Client::getMediaLiveInputWithOptions(const GetMediaLiveInputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInputId()) {
    body["InputId"] = request.inputId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetMediaLiveInput"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaLiveInputResponse>();
}

/**
 * @summary Queries the details of a MediaLive input.
 *
 * @description ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request GetMediaLiveInputRequest
 * @return GetMediaLiveInputResponse
 */
GetMediaLiveInputResponse Client::getMediaLiveInput(const GetMediaLiveInputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaLiveInputWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a security group in MediaLive.
 *
 * @description ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request GetMediaLiveInputSecurityGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaLiveInputSecurityGroupResponse
 */
GetMediaLiveInputSecurityGroupResponse Client::getMediaLiveInputSecurityGroupWithOptions(const GetMediaLiveInputSecurityGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSecurityGroupId()) {
    body["SecurityGroupId"] = request.securityGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetMediaLiveInputSecurityGroup"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaLiveInputSecurityGroupResponse>();
}

/**
 * @summary Queries the details of a security group in MediaLive.
 *
 * @description ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request GetMediaLiveInputSecurityGroupRequest
 * @return GetMediaLiveInputSecurityGroupResponse
 */
GetMediaLiveInputSecurityGroupResponse Client::getMediaLiveInputSecurityGroup(const GetMediaLiveInputSecurityGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaLiveInputSecurityGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the information about marks based on mark IDs.
 *
 * @param request GetMediaMarksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaMarksResponse
 */
GetMediaMarksResponse Client::getMediaMarksWithOptions(const GetMediaMarksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasMediaMarkIds()) {
    query["MediaMarkIds"] = request.mediaMarkIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMediaMarks"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaMarksResponse>();
}

/**
 * @summary Queries the information about marks based on mark IDs.
 *
 * @param request GetMediaMarksRequest
 * @return GetMediaMarksResponse
 */
GetMediaMarksResponse Client::getMediaMarks(const GetMediaMarksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaMarksWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a media editing and production job. The requested information includes the state, timeline, template, and data of the job. You can call this operation to query only media editing and production jobs created within the past year.
 *
 * @param request GetMediaProducingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMediaProducingJobResponse
 */
GetMediaProducingJobResponse Client::getMediaProducingJobWithOptions(const GetMediaProducingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMediaProducingJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaProducingJobResponse>();
}

/**
 * @summary Queries the information about a media editing and production job. The requested information includes the state, timeline, template, and data of the job. You can call this operation to query only media editing and production jobs created within the past year.
 *
 * @param request GetMediaProducingJobRequest
 * @return GetMediaProducingJobResponse
 */
GetMediaProducingJobResponse Client::getMediaProducingJob(const GetMediaProducingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaProducingJobWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a packaging job.
 *
 * @param request GetPackageJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPackageJobResponse
 */
GetPackageJobResponse Client::getPackageJobWithOptions(const GetPackageJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPackageJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPackageJobResponse>();
}

/**
 * @summary Queries the information about a packaging job.
 *
 * @param request GetPackageJobRequest
 * @return GetPackageJobResponse
 */
GetPackageJobResponse Client::getPackageJob(const GetPackageJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPackageJobWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an ApsaraVideo Media Processing (MPS) queue.
 *
 * @param request GetPipelineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPipelineResponse
 */
GetPipelineResponse Client::getPipelineWithOptions(const GetPipelineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPipeline"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPipelineResponse>();
}

/**
 * @summary Queries the information about an ApsaraVideo Media Processing (MPS) queue.
 *
 * @param request GetPipelineRequest
 * @return GetPipelineResponse
 */
GetPipelineResponse Client::getPipeline(const GetPipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPipelineWithOptions(request, runtime);
}

/**
 * @summary Queries the playback URL of a video or audio file based on its ID.
 *
 * @description You use the ID of a video or audio file to query the playback URL of the file. Then, you can use the playback URL to play the audio or video in ApsaraVideo Player SDK (for URL-based playback) or a third-party player.
 *
 * @param request GetPlayInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPlayInfoResponse
 */
GetPlayInfoResponse Client::getPlayInfoWithOptions(const GetPlayInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.authTimeout();
  }

  if (!!request.hasInputURL()) {
    query["InputURL"] = request.inputURL();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPlayInfo"},
    {"version" , "2020-11-09"},
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
 * @summary Queries the playback URL of a video or audio file based on its ID.
 *
 * @description You use the ID of a video or audio file to query the playback URL of the file. Then, you can use the playback URL to play the audio or video in ApsaraVideo Player SDK (for URL-based playback) or a third-party player.
 *
 * @param request GetPlayInfoRequest
 * @return GetPlayInfoResponse
 */
GetPlayInfoResponse Client::getPlayInfo(const GetPlayInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPlayInfoWithOptions(request, runtime);
}

/**
 * @summary Queries a program.
 *
 * @param request GetProgramRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProgramResponse
 */
GetProgramResponse Client::getProgramWithOptions(const GetProgramRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.channelName();
  }

  if (!!request.hasProgramName()) {
    query["ProgramName"] = request.programName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProgram"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProgramResponse>();
}

/**
 * @summary Queries a program.
 *
 * @param request GetProgramRequest
 * @return GetProgramResponse
 */
GetProgramResponse Client::getProgram(const GetProgramRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProgramWithOptions(request, runtime);
}

/**
 * @summary Queries the information of a project export task.
 *
 * @param request GetProjectExportJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectExportJobResponse
 */
GetProjectExportJobResponse Client::getProjectExportJobWithOptions(const GetProjectExportJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProjectExportJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectExportJobResponse>();
}

/**
 * @summary Queries the information of a project export task.
 *
 * @param request GetProjectExportJobRequest
 * @return GetProjectExportJobResponse
 */
GetProjectExportJobResponse Client::getProjectExportJob(const GetProjectExportJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectExportJobWithOptions(request, runtime);
}

/**
 * @summary 获取公共媒资内容信息
 *
 * @param request GetPublicMediaInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPublicMediaInfoResponse
 */
GetPublicMediaInfoResponse Client::getPublicMediaInfoWithOptions(const GetPublicMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPublicMediaInfo"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<GetPublicMediaInfoResponse>();
}

/**
 * @summary 获取公共媒资内容信息
 *
 * @param request GetPublicMediaInfoRequest
 * @return GetPublicMediaInfoResponse
 */
GetPublicMediaInfoResponse Client::getPublicMediaInfo(const GetPublicMediaInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPublicMediaInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an intelligent job and the execution results of the job based the job ID. You can call this operation to query only intelligent jobs created within the past year.
 *
 * @param request GetSmartHandleJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSmartHandleJobResponse
 */
GetSmartHandleJobResponse Client::getSmartHandleJobWithOptions(const GetSmartHandleJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSmartHandleJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSmartHandleJobResponse>();
}

/**
 * @summary Queries the information about an intelligent job and the execution results of the job based the job ID. You can call this operation to query only intelligent jobs created within the past year.
 *
 * @param request GetSmartHandleJobRequest
 * @return GetSmartHandleJobResponse
 */
GetSmartHandleJobResponse Client::getSmartHandleJob(const GetSmartHandleJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSmartHandleJobWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a snapshot job.
 *
 * @param request GetSnapshotJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSnapshotJobResponse
 */
GetSnapshotJobResponse Client::getSnapshotJobWithOptions(const GetSnapshotJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSnapshotJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSnapshotJobResponse>();
}

/**
 * @summary Queries the information about a snapshot job.
 *
 * @param request GetSnapshotJobRequest
 * @return GetSnapshotJobResponse
 */
GetSnapshotJobResponse Client::getSnapshotJob(const GetSnapshotJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSnapshotJobWithOptions(request, runtime);
}

/**
 * @summary Queries the accessible URLs of the output images of a snapshot job.
 *
 * @param request GetSnapshotUrlsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSnapshotUrlsResponse
 */
GetSnapshotUrlsResponse Client::getSnapshotUrlsWithOptions(const GetSnapshotUrlsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
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

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.timeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSnapshotUrls"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSnapshotUrlsResponse>();
}

/**
 * @summary Queries the accessible URLs of the output images of a snapshot job.
 *
 * @param request GetSnapshotUrlsRequest
 * @return GetSnapshotUrlsResponse
 */
GetSnapshotUrlsResponse Client::getSnapshotUrls(const GetSnapshotUrlsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSnapshotUrlsWithOptions(request, runtime);
}

/**
 * @summary Queries a source.
 *
 * @param request GetSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSourceResponse
 */
GetSourceResponse Client::getSourceWithOptions(const GetSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.sourceLocationName();
  }

  if (!!request.hasSourceName()) {
    query["SourceName"] = request.sourceName();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSource"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSourceResponse>();
}

/**
 * @summary Queries a source.
 *
 * @param request GetSourceRequest
 * @return GetSourceResponse
 */
GetSourceResponse Client::getSource(const GetSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSourceWithOptions(request, runtime);
}

/**
 * @summary Queries a source location.
 *
 * @param request GetSourceLocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSourceLocationResponse
 */
GetSourceLocationResponse Client::getSourceLocationWithOptions(const GetSourceLocationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.sourceLocationName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSourceLocation"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSourceLocationResponse>();
}

/**
 * @summary Queries a source location.
 *
 * @param request GetSourceLocationRequest
 * @return GetSourceLocationResponse
 */
GetSourceLocationResponse Client::getSourceLocation(const GetSourceLocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSourceLocationWithOptions(request, runtime);
}

/**
 * @summary Obtains storage configurations.
 *
 * @param request GetStorageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStorageListResponse
 */
GetStorageListResponse Client::getStorageListWithOptions(const GetStorageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.storageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStorageList"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStorageListResponse>();
}

/**
 * @summary Obtains storage configurations.
 *
 * @param request GetStorageListRequest
 * @return GetStorageListResponse
 */
GetStorageListResponse Client::getStorageList(const GetStorageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStorageListWithOptions(request, runtime);
}

/**
 * @summary Retrieves tags of a live stream media asset.
 *
 * @param request GetStreamTagListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStreamTagListResponse
 */
GetStreamTagListResponse Client::getStreamTagListWithOptions(const GetStreamTagListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStreamTagList"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStreamTagListResponse>();
}

/**
 * @summary Retrieves tags of a live stream media asset.
 *
 * @param request GetStreamTagListRequest
 * @return GetStreamTagListResponse
 */
GetStreamTagListResponse Client::getStreamTagList(const GetStreamTagListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStreamTagListWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a system template.
 *
 * @param request GetSystemTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSystemTemplateResponse
 */
GetSystemTemplateResponse Client::getSystemTemplateWithOptions(const GetSystemTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSystemTemplate"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSystemTemplateResponse>();
}

/**
 * @summary Queries the information about a system template.
 *
 * @param request GetSystemTemplateRequest
 * @return GetSystemTemplateResponse
 */
GetSystemTemplateResponse Client::getSystemTemplate(const GetSystemTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSystemTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a template based on the template ID. You can call this operation to query the information about an advanced template if the template is in the Available state.
 *
 * @description A template is an encapsulation of the timeline of a media editing and production job. You can define a common timeline as a template. When you have the same requirements, you need to only specify key parameters and materials to produce videos.
 * *   For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
 * *   For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
 *
 * @param request GetTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplateWithOptions(const GetTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRelatedMediaidFlag()) {
    query["RelatedMediaidFlag"] = request.relatedMediaidFlag();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTemplate"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateResponse>();
}

/**
 * @summary Queries the information about a template based on the template ID. You can call this operation to query the information about an advanced template if the template is in the Available state.
 *
 * @description A template is an encapsulation of the timeline of a media editing and production job. You can define a common timeline as a template. When you have the same requirements, you need to only specify key parameters and materials to produce videos.
 * *   For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
 * *   For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
 *
 * @param request GetTemplateRequest
 * @return GetTemplateResponse
 */
GetTemplateResponse Client::getTemplate(const GetTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the URLs of materials associated with an advanced template for use by the advanced template editor. The URLs expire in 30 minutes. FileList is an array of materials that you want to query. If you do not specify this parameter, the URLs of all materials are returned. A maximum of 400 URLs can be returned.
 *
 * @param request GetTemplateMaterialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateMaterialsResponse
 */
GetTemplateMaterialsResponse Client::getTemplateMaterialsWithOptions(const GetTemplateMaterialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileList()) {
    query["FileList"] = request.fileList();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTemplateMaterials"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateMaterialsResponse>();
}

/**
 * @summary Queries the URLs of materials associated with an advanced template for use by the advanced template editor. The URLs expire in 30 minutes. FileList is an array of materials that you want to query. If you do not specify this parameter, the URLs of all materials are returned. A maximum of 400 URLs can be returned.
 *
 * @param request GetTemplateMaterialsRequest
 * @return GetTemplateMaterialsResponse
 */
GetTemplateMaterialsResponse Client::getTemplateMaterials(const GetTemplateMaterialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTemplateMaterialsWithOptions(request, runtime);
}

/**
 * @summary Queries the parameters for replaceable materials in a template, including the parameter names, default values, and material thumbnails. Only advanced templates are supported.
 *
 * @param request GetTemplateParamsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTemplateParamsResponse
 */
GetTemplateParamsResponse Client::getTemplateParamsWithOptions(const GetTemplateParamsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTemplateParams"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTemplateParamsResponse>();
}

/**
 * @summary Queries the parameters for replaceable materials in a template, including the parameter names, default values, and material thumbnails. Only advanced templates are supported.
 *
 * @param request GetTemplateParamsRequest
 * @return GetTemplateParamsResponse
 */
GetTemplateParamsResponse Client::getTemplateParams(const GetTemplateParamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTemplateParamsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a transcoding job.
 *
 * @param request GetTranscodeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTranscodeJobResponse
 */
GetTranscodeJobResponse Client::getTranscodeJobWithOptions(const GetTranscodeJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasParentJobId()) {
    query["ParentJobId"] = request.parentJobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTranscodeJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTranscodeJobResponse>();
}

/**
 * @summary Queries the information about a transcoding job.
 *
 * @param request GetTranscodeJobRequest
 * @return GetTranscodeJobResponse
 */
GetTranscodeJobResponse Client::getTranscodeJob(const GetTranscodeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTranscodeJobWithOptions(request, runtime);
}

/**
 * @summary Queries the information about URL-based upload jobs.
 *
 * @description You can call this operation to query the information, including the upload status, user data, creation time, and completion time, about URL-based upload jobs based on the returned job IDs or the URLs used during the upload.
 * If an upload job fails, you can view the error code and error message. If an upload job is successful, you can obtain the video ID.
 *
 * @param request GetUrlUploadInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUrlUploadInfosResponse
 */
GetUrlUploadInfosResponse Client::getUrlUploadInfosWithOptions(const GetUrlUploadInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetUrlUploadInfos"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUrlUploadInfosResponse>();
}

/**
 * @summary Queries the information about URL-based upload jobs.
 *
 * @description You can call this operation to query the information, including the upload status, user data, creation time, and completion time, about URL-based upload jobs based on the returned job IDs or the URLs used during the upload.
 * If an upload job fails, you can view the error code and error message. If an upload job is successful, you can obtain the video ID.
 *
 * @param request GetUrlUploadInfosRequest
 * @return GetUrlUploadInfosResponse
 */
GetUrlUploadInfosResponse Client::getUrlUploadInfos(const GetUrlUploadInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUrlUploadInfosWithOptions(request, runtime);
}

/**
 * @summary Queries information about video and audio files.
 *
 * @description You can call this operation to query information about up to the first 5,000 audio and video files based on the filter condition, such as the status or category ID of the file. We recommend that you set the StartTime and EndTime parameters to narrow down the time range and perform multiple queries to obtain data.
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

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
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
    {"action" , "GetVideoList"},
    {"version" , "2020-11-09"},
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
 * @summary Queries information about video and audio files.
 *
 * @description You can call this operation to query information about up to the first 5,000 audio and video files based on the filter condition, such as the status or category ID of the file. We recommend that you set the StartTime and EndTime parameters to narrow down the time range and perform multiple queries to obtain data.
 *
 * @param request GetVideoListRequest
 * @return GetVideoListResponse
 */
GetVideoListResponse Client::getVideoList(const GetVideoListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVideoListWithOptions(request, runtime);
}

/**
 * @summary Queries a VOD packaging asset.
 *
 * @param request GetVodPackagingAssetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVodPackagingAssetResponse
 */
GetVodPackagingAssetResponse Client::getVodPackagingAssetWithOptions(const GetVodPackagingAssetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetName()) {
    query["AssetName"] = request.assetName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVodPackagingAsset"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVodPackagingAssetResponse>();
}

/**
 * @summary Queries a VOD packaging asset.
 *
 * @param request GetVodPackagingAssetRequest
 * @return GetVodPackagingAssetResponse
 */
GetVodPackagingAssetResponse Client::getVodPackagingAsset(const GetVodPackagingAssetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVodPackagingAssetWithOptions(request, runtime);
}

/**
 * @summary Queries a packaging configuration.
 *
 * @param request GetVodPackagingConfigurationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVodPackagingConfigurationResponse
 */
GetVodPackagingConfigurationResponse Client::getVodPackagingConfigurationWithOptions(const GetVodPackagingConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigurationName()) {
    query["ConfigurationName"] = request.configurationName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVodPackagingConfiguration"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVodPackagingConfigurationResponse>();
}

/**
 * @summary Queries a packaging configuration.
 *
 * @param request GetVodPackagingConfigurationRequest
 * @return GetVodPackagingConfigurationResponse
 */
GetVodPackagingConfigurationResponse Client::getVodPackagingConfiguration(const GetVodPackagingConfigurationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVodPackagingConfigurationWithOptions(request, runtime);
}

/**
 * @summary Queries a packaging group.
 *
 * @param request GetVodPackagingGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVodPackagingGroupResponse
 */
GetVodPackagingGroupResponse Client::getVodPackagingGroupWithOptions(const GetVodPackagingGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVodPackagingGroup"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVodPackagingGroupResponse>();
}

/**
 * @summary Queries a packaging group.
 *
 * @param request GetVodPackagingGroupRequest
 * @return GetVodPackagingGroupResponse
 */
GetVodPackagingGroupResponse Client::getVodPackagingGroup(const GetVodPackagingGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVodPackagingGroupWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a workflow task by task ID, including the workflow ID and the status and result of the task. You can query only the workflow task data of the last year.
 *
 * @param request GetWorkflowTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkflowTaskResponse
 */
GetWorkflowTaskResponse Client::getWorkflowTaskWithOptions(const GetWorkflowTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkflowTask"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkflowTaskResponse>();
}

/**
 * @summary Queries the information about a workflow task by task ID, including the workflow ID and the status and result of the task. You can query only the workflow task data of the last year.
 *
 * @param request GetWorkflowTaskRequest
 * @return GetWorkflowTaskResponse
 */
GetWorkflowTaskResponse Client::getWorkflowTask(const GetWorkflowTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getWorkflowTaskWithOptions(request, runtime);
}

/**
 * @summary Adds a media asset in a search library. Before you call this operation, you must create a search library.
 *
 * @param request InsertMediaToSearchLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InsertMediaToSearchLibResponse
 */
InsertMediaToSearchLibResponse Client::insertMediaToSearchLibWithOptions(const InsertMediaToSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasImagesInput()) {
    query["ImagesInput"] = request.imagesInput();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.input();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasMsgBody()) {
    query["MsgBody"] = request.msgBody();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InsertMediaToSearchLib"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InsertMediaToSearchLibResponse>();
}

/**
 * @summary Adds a media asset in a search library. Before you call this operation, you must create a search library.
 *
 * @param request InsertMediaToSearchLibRequest
 * @return InsertMediaToSearchLibResponse
 */
InsertMediaToSearchLibResponse Client::insertMediaToSearchLib(const InsertMediaToSearchLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return insertMediaToSearchLibWithOptions(request, runtime);
}

/**
 * @summary Lists the dialog records of an AI agent.
 *
 * @param request ListAIAgentDialoguesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAIAgentDialoguesResponse
 */
ListAIAgentDialoguesResponse Client::listAIAgentDialoguesWithOptions(const ListAIAgentDialoguesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
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

  if (!!request.hasRoundLimit()) {
    query["RoundLimit"] = request.roundLimit();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAIAgentDialogues"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAIAgentDialoguesResponse>();
}

/**
 * @summary Lists the dialog records of an AI agent.
 *
 * @param request ListAIAgentDialoguesRequest
 * @return ListAIAgentDialoguesResponse
 */
ListAIAgentDialoguesResponse Client::listAIAgentDialogues(const ListAIAgentDialoguesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAIAgentDialoguesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of AI agents.
 *
 * @description ## [](#)Request description
 * You can call this operation to query a list of AI agents based on the `AIAgentId`. The optional parameters include `StartTime`, `EndTime`, `PageSize`, and `PageNumber`. The returned result includes the status, runtime configurations, template configurations, custom information, and the URL of call log file for each AI agent.
 * **Note**:
 * *   The default value of `PageSize` is 10, and the default value of `PageNumber` is 1.
 *
 * @param request ListAIAgentInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAIAgentInstanceResponse
 */
ListAIAgentInstanceResponse Client::listAIAgentInstanceWithOptions(const ListAIAgentInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAIAgentId()) {
    query["AIAgentId"] = request.AIAgentId();
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
    {"action" , "ListAIAgentInstance"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAIAgentInstanceResponse>();
}

/**
 * @summary Queries a list of AI agents.
 *
 * @description ## [](#)Request description
 * You can call this operation to query a list of AI agents based on the `AIAgentId`. The optional parameters include `StartTime`, `EndTime`, `PageSize`, and `PageNumber`. The returned result includes the status, runtime configurations, template configurations, custom information, and the URL of call log file for each AI agent.
 * **Note**:
 * *   The default value of `PageSize` is 10, and the default value of `PageNumber` is 1.
 *
 * @param request ListAIAgentInstanceRequest
 * @return ListAIAgentInstanceResponse
 */
ListAIAgentInstanceResponse Client::listAIAgentInstance(const ListAIAgentInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAIAgentInstanceWithOptions(request, runtime);
}

/**
 * @summary 罗列用户电话资源接口
 *
 * @param request ListAIAgentPhoneNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAIAgentPhoneNumberResponse
 */
ListAIAgentPhoneNumberResponse Client::listAIAgentPhoneNumberWithOptions(const ListAIAgentPhoneNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNumber()) {
    query["Number"] = request.number();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAIAgentPhoneNumber"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAIAgentPhoneNumberResponse>();
}

/**
 * @summary 罗列用户电话资源接口
 *
 * @param request ListAIAgentPhoneNumberRequest
 * @return ListAIAgentPhoneNumberResponse
 */
ListAIAgentPhoneNumberResponse Client::listAIAgentPhoneNumber(const ListAIAgentPhoneNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAIAgentPhoneNumberWithOptions(request, runtime);
}

/**
 * @summary Lists the registered voiceprints.
 *
 * @param request ListAIAgentVoiceprintsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAIAgentVoiceprintsResponse
 */
ListAIAgentVoiceprintsResponse Client::listAIAgentVoiceprintsWithOptions(const ListAIAgentVoiceprintsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasVoiceprintId()) {
    query["VoiceprintId"] = request.voiceprintId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAIAgentVoiceprints"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAIAgentVoiceprintsResponse>();
}

/**
 * @summary Lists the registered voiceprints.
 *
 * @param request ListAIAgentVoiceprintsRequest
 * @return ListAIAgentVoiceprintsResponse
 */
ListAIAgentVoiceprintsResponse Client::listAIAgentVoiceprints(const ListAIAgentVoiceprintsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAIAgentVoiceprintsWithOptions(request, runtime);
}

/**
 * @summary Obtains ad insertion configurations.
 *
 * @param request ListAdInsertionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAdInsertionsResponse
 */
ListAdInsertionsResponse Client::listAdInsertionsWithOptions(const ListAdInsertionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAdInsertions"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAdInsertionsResponse>();
}

/**
 * @summary Obtains ad insertion configurations.
 *
 * @param request ListAdInsertionsRequest
 * @return ListAdInsertionsResponse
 */
ListAdInsertionsResponse Client::listAdInsertions(const ListAdInsertionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAdInsertionsWithOptions(request, runtime);
}

/**
 * @summary Lists alerts received in MediaWeaver.
 *
 * @param request ListAlertsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlertsResponse
 */
ListAlertsResponse Client::listAlertsWithOptions(const ListAlertsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasGmtEnd()) {
    query["GmtEnd"] = request.gmtEnd();
  }

  if (!!request.hasGmtStart()) {
    query["GmtStart"] = request.gmtStart();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceArn()) {
    query["ResourceArn"] = request.resourceArn();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSortByModifiedTime()) {
    query["SortByModifiedTime"] = request.sortByModifiedTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAlerts"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlertsResponse>();
}

/**
 * @summary Lists alerts received in MediaWeaver.
 *
 * @param request ListAlertsRequest
 * @return ListAlertsResponse
 */
ListAlertsResponse Client::listAlerts(const ListAlertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAlertsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tags of media assets in the public media library.
 *
 * @param request ListAllPublicMediaTagsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllPublicMediaTagsResponse
 */
ListAllPublicMediaTagsResponse Client::listAllPublicMediaTagsWithOptions(const ListAllPublicMediaTagsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.businessType();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.entityId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAllPublicMediaTags"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<ListAllPublicMediaTagsResponse>();
}

/**
 * @summary Queries a list of tags of media assets in the public media library.
 *
 * @param request ListAllPublicMediaTagsRequest
 * @return ListAllPublicMediaTagsResponse
 */
ListAllPublicMediaTagsResponse Client::listAllPublicMediaTags(const ListAllPublicMediaTagsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAllPublicMediaTagsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of digital human training jobs.
 *
 * @param request ListAvatarTrainingJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAvatarTrainingJobsResponse
 */
ListAvatarTrainingJobsResponse Client::listAvatarTrainingJobsWithOptions(const ListAvatarTrainingJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAvatarTrainingJobs"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAvatarTrainingJobsResponse>();
}

/**
 * @summary Queries a list of digital human training jobs.
 *
 * @param request ListAvatarTrainingJobsRequest
 * @return ListAvatarTrainingJobsResponse
 */
ListAvatarTrainingJobsResponse Client::listAvatarTrainingJobs(const ListAvatarTrainingJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAvatarTrainingJobsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of trained digital humans.
 *
 * @param request ListAvatarsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAvatarsResponse
 */
ListAvatarsResponse Client::listAvatarsWithOptions(const ListAvatarsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAvatarType()) {
    query["AvatarType"] = request.avatarType();
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
    {"action" , "ListAvatars"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAvatarsResponse>();
}

/**
 * @summary Queries a list of trained digital humans.
 *
 * @param request ListAvatarsRequest
 * @return ListAvatarsResponse
 */
ListAvatarsResponse Client::listAvatars(const ListAvatarsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAvatarsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of quick video production jobs based on conditions such as the job type and state.
 *
 * @param request ListBatchMediaProducingJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBatchMediaProducingJobsResponse
 */
ListBatchMediaProducingJobsResponse Client::listBatchMediaProducingJobsWithOptions(const ListBatchMediaProducingJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.jobType();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBatchMediaProducingJobs"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBatchMediaProducingJobsResponse>();
}

/**
 * @summary Queries a list of quick video production jobs based on conditions such as the job type and state.
 *
 * @param request ListBatchMediaProducingJobsRequest
 * @return ListBatchMediaProducingJobsResponse
 */
ListBatchMediaProducingJobsResponse Client::listBatchMediaProducingJobs(const ListBatchMediaProducingJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBatchMediaProducingJobsWithOptions(request, runtime);
}

/**
 * @summary Lists alerts for resources in a MediaWeaver channel.
 *
 * @param request ListChannelAlertsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChannelAlertsResponse
 */
ListChannelAlertsResponse Client::listChannelAlertsWithOptions(const ListChannelAlertsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasGmtEnd()) {
    query["GmtEnd"] = request.gmtEnd();
  }

  if (!!request.hasGmtStart()) {
    query["GmtStart"] = request.gmtStart();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceArn()) {
    query["ResourceArn"] = request.resourceArn();
  }

  if (!!request.hasSortByModifiedTime()) {
    query["SortByModifiedTime"] = request.sortByModifiedTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChannelAlerts"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChannelAlertsResponse>();
}

/**
 * @summary Lists alerts for resources in a MediaWeaver channel.
 *
 * @param request ListChannelAlertsRequest
 * @return ListChannelAlertsResponse
 */
ListChannelAlertsResponse Client::listChannelAlerts(const ListChannelAlertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listChannelAlertsWithOptions(request, runtime);
}

/**
 * @summary Lists MediaWeaver channels.
 *
 * @param request ListChannelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChannelsResponse
 */
ListChannelsResponse Client::listChannelsWithOptions(const ListChannelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.channelName();
  }

  if (!!request.hasChannelTier()) {
    query["ChannelTier"] = request.channelTier();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPlaybackMode()) {
    query["PlaybackMode"] = request.playbackMode();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSortByModifiedTime()) {
    query["SortByModifiedTime"] = request.sortByModifiedTime();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChannels"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChannelsResponse>();
}

/**
 * @summary Lists MediaWeaver channels.
 *
 * @param request ListChannelsRequest
 * @return ListChannelsResponse
 */
ListChannelsResponse Client::listChannels(const ListChannelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listChannelsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of custom templates.
 *
 * @param request ListCustomTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomTemplatesResponse
 */
ListCustomTemplatesResponse Client::listCustomTemplatesWithOptions(const ListCustomTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
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

  if (!!request.hasSubtype()) {
    query["Subtype"] = request.subtype();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomTemplates"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomTemplatesResponse>();
}

/**
 * @summary Queries a list of custom templates.
 *
 * @param request ListCustomTemplatesRequest
 * @return ListCustomTemplatesResponse
 */
ListCustomTemplatesResponse Client::listCustomTemplates(const ListCustomTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of human voice cloning jobs.
 *
 * @param request ListCustomizedVoiceJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomizedVoiceJobsResponse
 */
ListCustomizedVoiceJobsResponse Client::listCustomizedVoiceJobsWithOptions(const ListCustomizedVoiceJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomizedVoiceJobs"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomizedVoiceJobsResponse>();
}

/**
 * @summary Queries a list of human voice cloning jobs.
 *
 * @param request ListCustomizedVoiceJobsRequest
 * @return ListCustomizedVoiceJobsResponse
 */
ListCustomizedVoiceJobsResponse Client::listCustomizedVoiceJobs(const ListCustomizedVoiceJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomizedVoiceJobsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of personalized human voices.
 *
 * @param request ListCustomizedVoicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomizedVoicesResponse
 */
ListCustomizedVoicesResponse Client::listCustomizedVoicesWithOptions(const ListCustomizedVoicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomizedVoices"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomizedVoicesResponse>();
}

/**
 * @summary Queries a list of personalized human voices.
 *
 * @param request ListCustomizedVoicesRequest
 * @return ListCustomizedVoicesResponse
 */
ListCustomizedVoicesResponse Client::listCustomizedVoices(const ListCustomizedVoicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomizedVoicesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of media fingerprint libraries.
 *
 * @param request ListDNADBRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDNADBResponse
 */
ListDNADBResponse Client::listDNADBWithOptions(const ListDNADBRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBIds()) {
    query["DBIds"] = request.DBIds();
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
    {"action" , "ListDNADB"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDNADBResponse>();
}

/**
 * @summary Queries a list of media fingerprint libraries.
 *
 * @param request ListDNADBRequest
 * @return ListDNADBResponse
 */
ListDNADBResponse Client::listDNADB(const ListDNADBRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDNADBWithOptions(request, runtime);
}

/**
 * @summary Queries a list of files in a media fingerprint library.
 *
 * @description You can call this operation to query files in a media fingerprint library based on the library ID. The queried results can be paginated.
 *
 * @param request ListDNAFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDNAFilesResponse
 */
ListDNAFilesResponse Client::listDNAFilesWithOptions(const ListDNAFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDBId()) {
    query["DBId"] = request.DBId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDNAFiles"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDNAFilesResponse>();
}

/**
 * @summary Queries a list of files in a media fingerprint library.
 *
 * @description You can call this operation to query files in a media fingerprint library based on the library ID. The queried results can be paginated.
 *
 * @param request ListDNAFilesRequest
 * @return ListDNAFilesResponse
 */
ListDNAFilesResponse Client::listDNAFiles(const ListDNAFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDNAFilesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of image animation jobs.
 *
 * @param request ListDynamicImageJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDynamicImageJobsResponse
 */
ListDynamicImageJobsResponse Client::listDynamicImageJobsWithOptions(const ListDynamicImageJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndOfCreateTime()) {
    query["EndOfCreateTime"] = request.endOfCreateTime();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartOfCreateTime()) {
    query["StartOfCreateTime"] = request.startOfCreateTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDynamicImageJobs"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDynamicImageJobsResponse>();
}

/**
 * @summary Queries a list of image animation jobs.
 *
 * @param request ListDynamicImageJobsRequest
 * @return ListDynamicImageJobsResponse
 */
ListDynamicImageJobsResponse Client::listDynamicImageJobs(const ListDynamicImageJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDynamicImageJobsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of projects that meet the specified conditions. You can filter projects by project creation time.
 *
 * @param request ListEditingProjectsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEditingProjectsResponse
 */
ListEditingProjectsResponse Client::listEditingProjectsWithOptions(const ListEditingProjectsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateSource()) {
    query["CreateSource"] = request.createSource();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasProjectType()) {
    query["ProjectType"] = request.projectType();
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

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEditingProjects"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEditingProjectsResponse>();
}

/**
 * @summary Queries a list of projects that meet the specified conditions. You can filter projects by project creation time.
 *
 * @param request ListEditingProjectsRequest
 * @return ListEditingProjectsResponse
 */
ListEditingProjectsResponse Client::listEditingProjects(const ListEditingProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEditingProjectsWithOptions(request, runtime);
}

/**
 * @summary Queries hotword libraries that meet specific search conditions.
 *
 * @description ## [](#)
 * *   You can call this operation to get information about all hotword libraries that you created.
 * *   The API supports fuzzy search by `Name`, filtering by creation time range, and pagination.
 * *   By default, the results are sorted by creation time in descending order. You can set `SortBy` to change the sorting order.
 * *   The maximum number of entries returned for each request is 100. Default value: 10.
 * *   Use `NextToken` for pagination.
 *
 * @param request ListHotwordLibrariesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHotwordLibrariesResponse
 */
ListHotwordLibrariesResponse Client::listHotwordLibrariesWithOptions(const ListHotwordLibrariesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
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

  if (!!request.hasUsageScenario()) {
    query["UsageScenario"] = request.usageScenario();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListHotwordLibraries"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHotwordLibrariesResponse>();
}

/**
 * @summary Queries hotword libraries that meet specific search conditions.
 *
 * @description ## [](#)
 * *   You can call this operation to get information about all hotword libraries that you created.
 * *   The API supports fuzzy search by `Name`, filtering by creation time range, and pagination.
 * *   By default, the results are sorted by creation time in descending order. You can set `SortBy` to change the sorting order.
 * *   The maximum number of entries returned for each request is 100. Default value: 10.
 * *   Use `NextToken` for pagination.
 *
 * @param request ListHotwordLibrariesRequest
 * @return ListHotwordLibrariesResponse
 */
ListHotwordLibrariesResponse Client::listHotwordLibraries(const ListHotwordLibrariesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHotwordLibrariesWithOptions(request, runtime);
}

/**
 * @summary Queries live package channel groups by page. Fuzzy search by name or description and sorting are supported.
 *
 * @description ## [](#)Usage notes
 *
 * @param request ListLivePackageChannelGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLivePackageChannelGroupsResponse
 */
ListLivePackageChannelGroupsResponse Client::listLivePackageChannelGroupsWithOptions(const ListLivePackageChannelGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLivePackageChannelGroups"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLivePackageChannelGroupsResponse>();
}

/**
 * @summary Queries live package channel groups by page. Fuzzy search by name or description and sorting are supported.
 *
 * @description ## [](#)Usage notes
 *
 * @param request ListLivePackageChannelGroupsRequest
 * @return ListLivePackageChannelGroupsResponse
 */
ListLivePackageChannelGroupsResponse Client::listLivePackageChannelGroups(const ListLivePackageChannelGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLivePackageChannelGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries live package channels by channel group and keyword. Paging and sorting are supported.
 *
 * @description ## [](#)Usage notes
 * This API operation allows you to query live package channels by **GroupName** and **Keyword**. Keyword is optional. You can sort the channels by creation time in ascending or descending order and paginate the results. This facilitates the management of channels and retrieval of channel information.
 * *   **GroupName** is required to specify the channel group to which the channel belongs.
 * *   **Keyword** supports fuzzy match of channel names or descriptions, which helps quickly filter desired channels.
 * *   **PageNo** and **PageSize** can help control the paging of returned results to facilitate batch processing of data.
 * *   **SortBy** allows you to customize how the results are sorted. By default, the results are sorted in descending order.
 * **RequestId** in the response is used for subsequent troubleshooting. **TotalCount** indicates the total number of channels that meet the conditions.
 *
 * @param request ListLivePackageChannelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLivePackageChannelsResponse
 */
ListLivePackageChannelsResponse Client::listLivePackageChannelsWithOptions(const ListLivePackageChannelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLivePackageChannels"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLivePackageChannelsResponse>();
}

/**
 * @summary Queries live package channels by channel group and keyword. Paging and sorting are supported.
 *
 * @description ## [](#)Usage notes
 * This API operation allows you to query live package channels by **GroupName** and **Keyword**. Keyword is optional. You can sort the channels by creation time in ascending or descending order and paginate the results. This facilitates the management of channels and retrieval of channel information.
 * *   **GroupName** is required to specify the channel group to which the channel belongs.
 * *   **Keyword** supports fuzzy match of channel names or descriptions, which helps quickly filter desired channels.
 * *   **PageNo** and **PageSize** can help control the paging of returned results to facilitate batch processing of data.
 * *   **SortBy** allows you to customize how the results are sorted. By default, the results are sorted in descending order.
 * **RequestId** in the response is used for subsequent troubleshooting. **TotalCount** indicates the total number of channels that meet the conditions.
 *
 * @param request ListLivePackageChannelsRequest
 * @return ListLivePackageChannelsResponse
 */
ListLivePackageChannelsResponse Client::listLivePackageChannels(const ListLivePackageChannelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLivePackageChannelsWithOptions(request, runtime);
}

/**
 * @summary Queries origin endpoints by channel group and channel name. Paging and sorting are supported.
 *
 * @description ## [](#)Usage notes
 * This API operation allows you to query origin endpoints associated with a live package channel. The results include detailed configurations about the origin endpoints, such as access URL, protocol, and security policies. Paging and sorting by creation time are supported.
 *
 * @param request ListLivePackageOriginEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLivePackageOriginEndpointsResponse
 */
ListLivePackageOriginEndpointsResponse Client::listLivePackageOriginEndpointsWithOptions(const ListLivePackageOriginEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.channelName();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLivePackageOriginEndpoints"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLivePackageOriginEndpointsResponse>();
}

/**
 * @summary Queries origin endpoints by channel group and channel name. Paging and sorting are supported.
 *
 * @description ## [](#)Usage notes
 * This API operation allows you to query origin endpoints associated with a live package channel. The results include detailed configurations about the origin endpoints, such as access URL, protocol, and security policies. Paging and sorting by creation time are supported.
 *
 * @param request ListLivePackageOriginEndpointsRequest
 * @return ListLivePackageOriginEndpointsResponse
 */
ListLivePackageOriginEndpointsResponse Client::listLivePackageOriginEndpoints(const ListLivePackageOriginEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLivePackageOriginEndpointsWithOptions(request, runtime);
}

/**
 * @summary Queries all recording index files in the specified period of time.
 *
 * @param request ListLiveRecordFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLiveRecordFilesResponse
 */
ListLiveRecordFilesResponse Client::listLiveRecordFilesWithOptions(const ListLiveRecordFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLiveRecordFiles"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLiveRecordFilesResponse>();
}

/**
 * @summary Queries all recording index files in the specified period of time.
 *
 * @param request ListLiveRecordFilesRequest
 * @return ListLiveRecordFilesResponse
 */
ListLiveRecordFilesResponse Client::listLiveRecordFiles(const ListLiveRecordFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLiveRecordFilesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of live stream recording jobs by page.
 *
 * @param request ListLiveRecordJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLiveRecordJobsResponse
 */
ListLiveRecordJobsResponse Client::listLiveRecordJobsWithOptions(const ListLiveRecordJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLiveRecordJobs"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLiveRecordJobsResponse>();
}

/**
 * @summary Queries a list of live stream recording jobs by page.
 *
 * @param request ListLiveRecordJobsRequest
 * @return ListLiveRecordJobsResponse
 */
ListLiveRecordJobsResponse Client::listLiveRecordJobs(const ListLiveRecordJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLiveRecordJobsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of live stream recording templates.
 *
 * @param request ListLiveRecordTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLiveRecordTemplatesResponse
 */
ListLiveRecordTemplatesResponse Client::listLiveRecordTemplatesWithOptions(const ListLiveRecordTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLiveRecordTemplates"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLiveRecordTemplatesResponse>();
}

/**
 * @summary Queries a list of live stream recording templates.
 *
 * @param request ListLiveRecordTemplatesRequest
 * @return ListLiveRecordTemplatesResponse
 */
ListLiveRecordTemplatesResponse Client::listLiveRecordTemplates(const ListLiveRecordTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLiveRecordTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of live stream snapshot files by page.
 *
 * @param request ListLiveSnapshotFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLiveSnapshotFilesResponse
 */
ListLiveSnapshotFilesResponse Client::listLiveSnapshotFilesWithOptions(const ListLiveSnapshotFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLiveSnapshotFiles"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLiveSnapshotFilesResponse>();
}

/**
 * @summary Queries a list of live stream snapshot files by page.
 *
 * @param request ListLiveSnapshotFilesRequest
 * @return ListLiveSnapshotFilesResponse
 */
ListLiveSnapshotFilesResponse Client::listLiveSnapshotFiles(const ListLiveSnapshotFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLiveSnapshotFilesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of live stream snapshot jobs by page.
 *
 * @param request ListLiveSnapshotJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLiveSnapshotJobsResponse
 */
ListLiveSnapshotJobsResponse Client::listLiveSnapshotJobsWithOptions(const ListLiveSnapshotJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLiveSnapshotJobs"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLiveSnapshotJobsResponse>();
}

/**
 * @summary Queries a list of live stream snapshot jobs by page.
 *
 * @param request ListLiveSnapshotJobsRequest
 * @return ListLiveSnapshotJobsResponse
 */
ListLiveSnapshotJobsResponse Client::listLiveSnapshotJobs(const ListLiveSnapshotJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLiveSnapshotJobsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of live stream snapshot templates by page.
 *
 * @param request ListLiveSnapshotTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLiveSnapshotTemplatesResponse
 */
ListLiveSnapshotTemplatesResponse Client::listLiveSnapshotTemplatesWithOptions(const ListLiveSnapshotTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLiveSnapshotTemplates"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLiveSnapshotTemplatesResponse>();
}

/**
 * @summary Queries a list of live stream snapshot templates by page.
 *
 * @param request ListLiveSnapshotTemplatesRequest
 * @return ListLiveSnapshotTemplatesResponse
 */
ListLiveSnapshotTemplatesResponse Client::listLiveSnapshotTemplates(const ListLiveSnapshotTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLiveSnapshotTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of live stream transcoding jobs.
 *
 * @param request ListLiveTranscodeJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLiveTranscodeJobsResponse
 */
ListLiveTranscodeJobsResponse Client::listLiveTranscodeJobsWithOptions(const ListLiveTranscodeJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.keyWord();
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

  if (!!request.hasStartMode()) {
    query["StartMode"] = request.startMode();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLiveTranscodeJobs"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLiveTranscodeJobsResponse>();
}

/**
 * @summary Queries a list of live stream transcoding jobs.
 *
 * @param request ListLiveTranscodeJobsRequest
 * @return ListLiveTranscodeJobsResponse
 */
ListLiveTranscodeJobsResponse Client::listLiveTranscodeJobs(const ListLiveTranscodeJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLiveTranscodeJobsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of live stream transcoding templates.
 *
 * @param request ListLiveTranscodeTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLiveTranscodeTemplatesResponse
 */
ListLiveTranscodeTemplatesResponse Client::listLiveTranscodeTemplatesWithOptions(const ListLiveTranscodeTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.keyWord();
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

  if (!!request.hasVideoCodec()) {
    query["VideoCodec"] = request.videoCodec();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLiveTranscodeTemplates"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLiveTranscodeTemplatesResponse>();
}

/**
 * @summary Queries a list of live stream transcoding templates.
 *
 * @param request ListLiveTranscodeTemplatesRequest
 * @return ListLiveTranscodeTemplatesResponse
 */
ListLiveTranscodeTemplatesResponse Client::listLiveTranscodeTemplates(const ListLiveTranscodeTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLiveTranscodeTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information of all media assets that meet the specified conditions.
 *
 * @description If includeFileBasicInfo is set to true, the basic information, such as the duration and file size, of the source file is also returned. At most the first 100 entries that meet the specified conditions are returned. All media assets must exactly match all non-empty fields. The fields that support exact match include MediaType, Source, BusinessType, Category, and Status. If all information cannot be returned at a time, you can use NextToken to initiate a request to retrieve a new page of results.
 *
 * @param request ListMediaBasicInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMediaBasicInfosResponse
 */
ListMediaBasicInfosResponse Client::listMediaBasicInfosWithOptions(const ListMediaBasicInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthTimeout()) {
    query["AuthTimeout"] = request.authTimeout();
  }

  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.businessType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIncludeFileBasicInfo()) {
    query["IncludeFileBasicInfo"] = request.includeFileBasicInfo();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
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
    {"action" , "ListMediaBasicInfos"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMediaBasicInfosResponse>();
}

/**
 * @summary Queries the basic information of all media assets that meet the specified conditions.
 *
 * @description If includeFileBasicInfo is set to true, the basic information, such as the duration and file size, of the source file is also returned. At most the first 100 entries that meet the specified conditions are returned. All media assets must exactly match all non-empty fields. The fields that support exact match include MediaType, Source, BusinessType, Category, and Status. If all information cannot be returned at a time, you can use NextToken to initiate a request to retrieve a new page of results.
 *
 * @param request ListMediaBasicInfosRequest
 * @return ListMediaBasicInfosResponse
 */
ListMediaBasicInfosResponse Client::listMediaBasicInfos(const ListMediaBasicInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMediaBasicInfosWithOptions(request, runtime);
}

/**
 * @summary Retrieves MediaConvert tasks.
 *
 * @param request ListMediaConvertJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMediaConvertJobsResponse
 */
ListMediaConvertJobsResponse Client::listMediaConvertJobsWithOptions(const ListMediaConvertJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndOfCreateTime()) {
    query["EndOfCreateTime"] = request.endOfCreateTime();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartOfCreateTime()) {
    query["StartOfCreateTime"] = request.startOfCreateTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMediaConvertJobs"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMediaConvertJobsResponse>();
}

/**
 * @summary Retrieves MediaConvert tasks.
 *
 * @param request ListMediaConvertJobsRequest
 * @return ListMediaConvertJobsResponse
 */
ListMediaConvertJobsResponse Client::listMediaConvertJobs(const ListMediaConvertJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMediaConvertJobsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of media information analysis jobs.
 *
 * @param request ListMediaInfoJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMediaInfoJobsResponse
 */
ListMediaInfoJobsResponse Client::listMediaInfoJobsWithOptions(const ListMediaInfoJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndOfCreateTime()) {
    query["EndOfCreateTime"] = request.endOfCreateTime();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartOfCreateTime()) {
    query["StartOfCreateTime"] = request.startOfCreateTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMediaInfoJobs"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMediaInfoJobsResponse>();
}

/**
 * @summary Queries a list of media information analysis jobs.
 *
 * @param request ListMediaInfoJobsRequest
 * @return ListMediaInfoJobsResponse
 */
ListMediaInfoJobsResponse Client::listMediaInfoJobs(const ListMediaInfoJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMediaInfoJobsWithOptions(request, runtime);
}

/**
 * @summary Queries MediaLive channels.
 *
 * @description ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request ListMediaLiveChannelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMediaLiveChannelsResponse
 */
ListMediaLiveChannelsResponse Client::listMediaLiveChannelsWithOptions(const ListMediaLiveChannelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasSkip()) {
    body["Skip"] = request.skip();
  }

  if (!!request.hasSortOrder()) {
    body["SortOrder"] = request.sortOrder();
  }

  if (!!request.hasStates()) {
    body["States"] = request.states();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMediaLiveChannels"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMediaLiveChannelsResponse>();
}

/**
 * @summary Queries MediaLive channels.
 *
 * @description ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request ListMediaLiveChannelsRequest
 * @return ListMediaLiveChannelsResponse
 */
ListMediaLiveChannelsResponse Client::listMediaLiveChannels(const ListMediaLiveChannelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMediaLiveChannelsWithOptions(request, runtime);
}

/**
 * @summary Queries the security groups in MediaLive.
 *
 * @description ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request ListMediaLiveInputSecurityGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMediaLiveInputSecurityGroupsResponse
 */
ListMediaLiveInputSecurityGroupsResponse Client::listMediaLiveInputSecurityGroupsWithOptions(const ListMediaLiveInputSecurityGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasSkip()) {
    body["Skip"] = request.skip();
  }

  if (!!request.hasSortOrder()) {
    body["SortOrder"] = request.sortOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMediaLiveInputSecurityGroups"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMediaLiveInputSecurityGroupsResponse>();
}

/**
 * @summary Queries the security groups in MediaLive.
 *
 * @description ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request ListMediaLiveInputSecurityGroupsRequest
 * @return ListMediaLiveInputSecurityGroupsResponse
 */
ListMediaLiveInputSecurityGroupsResponse Client::listMediaLiveInputSecurityGroups(const ListMediaLiveInputSecurityGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMediaLiveInputSecurityGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries MediaLive inputs.
 *
 * @description ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request ListMediaLiveInputsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMediaLiveInputsResponse
 */
ListMediaLiveInputsResponse Client::listMediaLiveInputsWithOptions(const ListMediaLiveInputsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasKeyword()) {
    body["Keyword"] = request.keyword();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasSkip()) {
    body["Skip"] = request.skip();
  }

  if (!!request.hasSortOrder()) {
    body["SortOrder"] = request.sortOrder();
  }

  if (!!request.hasTypes()) {
    body["Types"] = request.types();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListMediaLiveInputs"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMediaLiveInputsResponse>();
}

/**
 * @summary Queries MediaLive inputs.
 *
 * @description ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request ListMediaLiveInputsRequest
 * @return ListMediaLiveInputsResponse
 */
ListMediaLiveInputsResponse Client::listMediaLiveInputs(const ListMediaLiveInputsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMediaLiveInputsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of marks of a media asset.
 *
 * @param request ListMediaMarksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMediaMarksResponse
 */
ListMediaMarksResponse Client::listMediaMarksWithOptions(const ListMediaMarksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasMediaMarkIds()) {
    query["MediaMarkIds"] = request.mediaMarkIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMediaMarks"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMediaMarksResponse>();
}

/**
 * @summary Queries a list of marks of a media asset.
 *
 * @param request ListMediaMarksRequest
 * @return ListMediaMarksResponse
 */
ListMediaMarksResponse Client::listMediaMarks(const ListMediaMarksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMediaMarksWithOptions(request, runtime);
}

/**
 * @summary Queries a list of media editing and production jobs that meet the specified conditions. You can query the jobs based on the job state and type.
 *
 * @param request ListMediaProducingJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMediaProducingJobsResponse
 */
ListMediaProducingJobsResponse Client::listMediaProducingJobsWithOptions(const ListMediaProducingJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.jobType();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasMasterJobId()) {
    query["MasterJobId"] = request.masterJobId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMediaProducingJobs"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMediaProducingJobsResponse>();
}

/**
 * @summary Queries a list of media editing and production jobs that meet the specified conditions. You can query the jobs based on the job state and type.
 *
 * @param request ListMediaProducingJobsRequest
 * @return ListMediaProducingJobsResponse
 */
ListMediaProducingJobsResponse Client::listMediaProducingJobs(const ListMediaProducingJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listMediaProducingJobsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of packaging jobs.
 *
 * @param request ListPackageJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPackageJobsResponse
 */
ListPackageJobsResponse Client::listPackageJobsWithOptions(const ListPackageJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndOfCreateTime()) {
    query["EndOfCreateTime"] = request.endOfCreateTime();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartOfCreateTime()) {
    query["StartOfCreateTime"] = request.startOfCreateTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPackageJobs"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPackageJobsResponse>();
}

/**
 * @summary Queries a list of packaging jobs.
 *
 * @param request ListPackageJobsRequest
 * @return ListPackageJobsResponse
 */
ListPackageJobsResponse Client::listPackageJobs(const ListPackageJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPackageJobsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of ApsaraVideo Media Processing (MPS) queues.
 *
 * @param request ListPipelinesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPipelinesResponse
 */
ListPipelinesResponse Client::listPipelinesWithOptions(const ListPipelinesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSpeed()) {
    query["Speed"] = request.speed();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPipelines"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPipelinesResponse>();
}

/**
 * @summary Queries a list of ApsaraVideo Media Processing (MPS) queues.
 *
 * @param request ListPipelinesRequest
 * @return ListPipelinesResponse
 */
ListPipelinesResponse Client::listPipelines(const ListPipelinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPipelinesWithOptions(request, runtime);
}

/**
 * @summary Lists programs.
 *
 * @param request ListProgramsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProgramsResponse
 */
ListProgramsResponse Client::listProgramsWithOptions(const ListProgramsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.channelName();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProgramName()) {
    query["ProgramName"] = request.programName();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrograms"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProgramsResponse>();
}

/**
 * @summary Lists programs.
 *
 * @param request ListProgramsRequest
 * @return ListProgramsResponse
 */
ListProgramsResponse Client::listPrograms(const ListProgramsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProgramsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of media assets in the public media library that meet the specified conditions. A maximum of 100 media assets can be returned.
 *
 * @param request ListPublicMediaBasicInfosRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPublicMediaBasicInfosResponse
 */
ListPublicMediaBasicInfosResponse Client::listPublicMediaBasicInfosWithOptions(const ListPublicMediaBasicInfosRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.businessType();
  }

  if (!!request.hasIncludeFileBasicInfo()) {
    query["IncludeFileBasicInfo"] = request.includeFileBasicInfo();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasMediaTagId()) {
    query["MediaTagId"] = request.mediaTagId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
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
    {"action" , "ListPublicMediaBasicInfos"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.action(), params.version(), params.protocol(), params.method(), params.authType(), params.bodyType(), req, runtime)).get<ListPublicMediaBasicInfosResponse>();
}

/**
 * @summary Queries a list of media assets in the public media library that meet the specified conditions. A maximum of 100 media assets can be returned.
 *
 * @param request ListPublicMediaBasicInfosRequest
 * @return ListPublicMediaBasicInfosResponse
 */
ListPublicMediaBasicInfosResponse Client::listPublicMediaBasicInfos(const ListPublicMediaBasicInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPublicMediaBasicInfosWithOptions(request, runtime);
}

/**
 * @summary Retrieves all entities in a specified recognition library. Pagination is supported.
 *
 * @description *   This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * *   You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request ListRecognitionEntitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecognitionEntitiesResponse
 */
ListRecognitionEntitiesResponse Client::listRecognitionEntitiesWithOptions(const ListRecognitionEntitiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasLibId()) {
    query["LibId"] = request.libId();
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
    {"action" , "ListRecognitionEntities"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecognitionEntitiesResponse>();
}

/**
 * @summary Retrieves all entities in a specified recognition library. Pagination is supported.
 *
 * @description *   This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * *   You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request ListRecognitionEntitiesRequest
 * @return ListRecognitionEntitiesResponse
 */
ListRecognitionEntitiesResponse Client::listRecognitionEntities(const ListRecognitionEntitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRecognitionEntitiesWithOptions(request, runtime);
}

/**
 * @summary Retrieves all custom recognition libraries. Pagination is supported.
 *
 * @description *   This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * *   You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request ListRecognitionLibsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecognitionLibsResponse
 */
ListRecognitionLibsResponse Client::listRecognitionLibsWithOptions(const ListRecognitionLibsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ListRecognitionLibs"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecognitionLibsResponse>();
}

/**
 * @summary Retrieves all custom recognition libraries. Pagination is supported.
 *
 * @description *   This operation is supported only in the China (Beijing), China (Shanghai), China (Hangzhou), and China (Shenzhen) regions.
 * *   You can call this operation up to 50 times per second per account. Requests that exceed this limit are dropped and you may experience service interruptions. For more information, see [QPS limits](https://help.aliyun.com/zh/mps/developer-reference/qps-limits?spm=a2c4g.11186623.0.0.647e1081YGcerb).
 *
 * @param request ListRecognitionLibsRequest
 * @return ListRecognitionLibsResponse
 */
ListRecognitionLibsResponse Client::listRecognitionLibs(const ListRecognitionLibsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRecognitionLibsWithOptions(request, runtime);
}

/**
 * @summary Retrieves all samples of a custom entity. Pagination is supported.
 *
 * @param request ListRecognitionSamplesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRecognitionSamplesResponse
 */
ListRecognitionSamplesResponse Client::listRecognitionSamplesWithOptions(const ListRecognitionSamplesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.entityId();
  }

  if (!!request.hasLibId()) {
    query["LibId"] = request.libId();
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
    {"action" , "ListRecognitionSamples"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRecognitionSamplesResponse>();
}

/**
 * @summary Retrieves all samples of a custom entity. Pagination is supported.
 *
 * @param request ListRecognitionSamplesRequest
 * @return ListRecognitionSamplesResponse
 */
ListRecognitionSamplesResponse Client::listRecognitionSamples(const ListRecognitionSamplesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRecognitionSamplesWithOptions(request, runtime);
}

/**
 * @summary Lists the program schedule of a MediaWeaver channel.
 *
 * @param request ListSchedulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSchedulesResponse
 */
ListSchedulesResponse Client::listSchedulesWithOptions(const ListSchedulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.channelName();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasWindowDurationSeconds()) {
    query["WindowDurationSeconds"] = request.windowDurationSeconds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSchedules"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSchedulesResponse>();
}

/**
 * @summary Lists the program schedule of a MediaWeaver channel.
 *
 * @param request ListSchedulesRequest
 * @return ListSchedulesResponse
 */
ListSchedulesResponse Client::listSchedules(const ListSchedulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSchedulesWithOptions(request, runtime);
}

/**
 * @summary Queries the information about search libraries.
 *
 * @param request ListSearchLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSearchLibResponse
 */
ListSearchLibResponse Client::listSearchLibWithOptions(const ListSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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
    {"action" , "ListSearchLib"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSearchLibResponse>();
}

/**
 * @summary Queries the information about search libraries.
 *
 * @param request ListSearchLibRequest
 * @return ListSearchLibResponse
 */
ListSearchLibResponse Client::listSearchLib(const ListSearchLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSearchLibWithOptions(request, runtime);
}

/**
 * @summary Queries a list of intelligent jobs based on specified parameters.
 *
 * @param request ListSmartJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSmartJobsResponse
 */
ListSmartJobsResponse Client::listSmartJobsWithOptions(const ListSmartJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSmartJobs"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSmartJobsResponse>();
}

/**
 * @summary Queries a list of intelligent jobs based on specified parameters.
 *
 * @param request ListSmartJobsRequest
 * @return ListSmartJobsResponse
 */
ListSmartJobsResponse Client::listSmartJobs(const ListSmartJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSmartJobsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of system digital humans. This operation supports paged queries.
 *
 * @param request ListSmartSysAvatarModelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSmartSysAvatarModelsResponse
 */
ListSmartSysAvatarModelsResponse Client::listSmartSysAvatarModelsWithOptions(const ListSmartSysAvatarModelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSdkVersion()) {
    query["SdkVersion"] = request.sdkVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSmartSysAvatarModels"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSmartSysAvatarModelsResponse>();
}

/**
 * @summary Queries a list of system digital humans. This operation supports paged queries.
 *
 * @param request ListSmartSysAvatarModelsRequest
 * @return ListSmartSysAvatarModelsResponse
 */
ListSmartSysAvatarModelsResponse Client::listSmartSysAvatarModels(const ListSmartSysAvatarModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSmartSysAvatarModelsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of speaker groups, including the name, gender, and sample audio of each speaker. The list is grouped by scenario.
 *
 * @param request ListSmartVoiceGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSmartVoiceGroupsResponse
 */
ListSmartVoiceGroupsResponse Client::listSmartVoiceGroupsWithOptions(const ListSmartVoiceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSmartVoiceGroups"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSmartVoiceGroupsResponse>();
}

/**
 * @summary Queries a list of speaker groups, including the name, gender, and sample audio of each speaker. The list is grouped by scenario.
 *
 * @param request ListSmartVoiceGroupsRequest
 * @return ListSmartVoiceGroupsResponse
 */
ListSmartVoiceGroupsResponse Client::listSmartVoiceGroups(const ListSmartVoiceGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSmartVoiceGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of snapshot jobs.
 *
 * @param request ListSnapshotJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSnapshotJobsResponse
 */
ListSnapshotJobsResponse Client::listSnapshotJobsWithOptions(const ListSnapshotJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndOfCreateTime()) {
    query["EndOfCreateTime"] = request.endOfCreateTime();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartOfCreateTime()) {
    query["StartOfCreateTime"] = request.startOfCreateTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSnapshotJobs"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSnapshotJobsResponse>();
}

/**
 * @summary Queries a list of snapshot jobs.
 *
 * @param request ListSnapshotJobsRequest
 * @return ListSnapshotJobsResponse
 */
ListSnapshotJobsResponse Client::listSnapshotJobs(const ListSnapshotJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSnapshotJobsWithOptions(request, runtime);
}

/**
 * @summary Lists source locations.
 *
 * @param request ListSourceLocationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSourceLocationsResponse
 */
ListSourceLocationsResponse Client::listSourceLocationsWithOptions(const ListSourceLocationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilterState()) {
    query["FilterState"] = request.filterState();
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

  if (!!request.hasSortByModifiedTime()) {
    query["SortByModifiedTime"] = request.sortByModifiedTime();
  }

  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.sourceLocationName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSourceLocations"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSourceLocationsResponse>();
}

/**
 * @summary Lists source locations.
 *
 * @param request ListSourceLocationsRequest
 * @return ListSourceLocationsResponse
 */
ListSourceLocationsResponse Client::listSourceLocations(const ListSourceLocationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSourceLocationsWithOptions(request, runtime);
}

/**
 * @summary Lists sources in MediaWeaver.
 *
 * @param request ListSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSourcesResponse
 */
ListSourcesResponse Client::listSourcesWithOptions(const ListSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFilterState()) {
    query["FilterState"] = request.filterState();
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

  if (!!request.hasSortByModifiedTime()) {
    query["SortByModifiedTime"] = request.sortByModifiedTime();
  }

  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.sourceLocationName();
  }

  if (!!request.hasSourceName()) {
    query["SourceName"] = request.sourceName();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSources"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSourcesResponse>();
}

/**
 * @summary Lists sources in MediaWeaver.
 *
 * @param request ListSourcesRequest
 * @return ListSourcesResponse
 */
ListSourcesResponse Client::listSources(const ListSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSourcesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of system templates.
 *
 * @description Template types:
 * 1.  1: transcoding template.
 * 2.  2: snapshot template.
 * 3.  3: animated image template.
 * 4.  4\\. image watermark template.
 * 5.  5: text watermark template.
 * 6.  6: subtitle template.
 * 7.  7: AI-assisted content moderation template.
 * 8.  8: AI-assisted intelligent thumbnail template.
 * 9.  9: AI-assisted intelligent erasure template.
 * Subtypes of transcoding templates:
 * 1.  1 (Normal): regular template.
 * 2.  2 (AudioTranscode): audio transcoding template.
 * 3.  3 (Remux): container format conversion template.
 * 4.  4 (NarrowBandV1): Narrowband HD 1.0 template.
 * 5.  5 (NarrowBandV2): Narrowband HD 2.0 template.
 * Subtypes of snapshot templates:
 * 1.  1 (Normal): regular template.
 * 2.  2 (Sprite): sprite template.
 * 3.  3 (WebVtt): WebVTT template.
 * Subtypes of AI-assisted content moderation templates:
 * 1.  1 (Video): video moderation template.
 * 2.  2 (Audio): audio moderation template.
 * 3.  3 (Image): image moderation template.
 * Subtypes of AI-assisted intelligent erasure templates:
 * 1.  1 (VideoDelogo): logo erasure template.
 * 2.  2 (VideoDetext): subtitle erasure template.
 *
 * @param request ListSystemTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSystemTemplatesResponse
 */
ListSystemTemplatesResponse Client::listSystemTemplatesWithOptions(const ListSystemTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasSubtype()) {
    query["Subtype"] = request.subtype();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSystemTemplates"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSystemTemplatesResponse>();
}

/**
 * @summary Queries a list of system templates.
 *
 * @description Template types:
 * 1.  1: transcoding template.
 * 2.  2: snapshot template.
 * 3.  3: animated image template.
 * 4.  4\\. image watermark template.
 * 5.  5: text watermark template.
 * 6.  6: subtitle template.
 * 7.  7: AI-assisted content moderation template.
 * 8.  8: AI-assisted intelligent thumbnail template.
 * 9.  9: AI-assisted intelligent erasure template.
 * Subtypes of transcoding templates:
 * 1.  1 (Normal): regular template.
 * 2.  2 (AudioTranscode): audio transcoding template.
 * 3.  3 (Remux): container format conversion template.
 * 4.  4 (NarrowBandV1): Narrowband HD 1.0 template.
 * 5.  5 (NarrowBandV2): Narrowband HD 2.0 template.
 * Subtypes of snapshot templates:
 * 1.  1 (Normal): regular template.
 * 2.  2 (Sprite): sprite template.
 * 3.  3 (WebVtt): WebVTT template.
 * Subtypes of AI-assisted content moderation templates:
 * 1.  1 (Video): video moderation template.
 * 2.  2 (Audio): audio moderation template.
 * 3.  3 (Image): image moderation template.
 * Subtypes of AI-assisted intelligent erasure templates:
 * 1.  1 (VideoDelogo): logo erasure template.
 * 2.  2 (VideoDetext): subtitle erasure template.
 *
 * @param request ListSystemTemplatesRequest
 * @return ListSystemTemplatesResponse
 */
ListSystemTemplatesResponse Client::listSystemTemplates(const ListSystemTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSystemTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of templates that meet the specified conditions. You can query templates based on information such as the template status and creation source.
 *
 * @description A template is an encapsulation of the timeline of a media editing and production job. You can define a common timeline as a template. When you have the same requirements, you need to only specify key parameters and materials to produce videos.
 * *   For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
 * *   For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
 *
 * @param request ListTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTemplatesResponse
 */
ListTemplatesResponse Client::listTemplatesWithOptions(const ListTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateSource()) {
    query["CreateSource"] = request.createSource();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSortType()) {
    query["SortType"] = request.sortType();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTemplates"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTemplatesResponse>();
}

/**
 * @summary Queries a list of templates that meet the specified conditions. You can query templates based on information such as the template status and creation source.
 *
 * @description A template is an encapsulation of the timeline of a media editing and production job. You can define a common timeline as a template. When you have the same requirements, you need to only specify key parameters and materials to produce videos.
 * *   For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
 * *   For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
 *
 * @param request ListTemplatesRequest
 * @return ListTemplatesResponse
 */
ListTemplatesResponse Client::listTemplates(const ListTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of transcoding jobs.
 *
 * @param request ListTranscodeJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTranscodeJobsResponse
 */
ListTranscodeJobsResponse Client::listTranscodeJobsWithOptions(const ListTranscodeJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndOfCreateTime()) {
    query["EndOfCreateTime"] = request.endOfCreateTime();
  }

  if (!!request.hasNextPageToken()) {
    query["NextPageToken"] = request.nextPageToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasParentJobId()) {
    query["ParentJobId"] = request.parentJobId();
  }

  if (!!request.hasStartOfCreateTime()) {
    query["StartOfCreateTime"] = request.startOfCreateTime();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTranscodeJobs"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTranscodeJobsResponse>();
}

/**
 * @summary Queries a list of transcoding jobs.
 *
 * @param request ListTranscodeJobsRequest
 * @return ListTranscodeJobsResponse
 */
ListTranscodeJobsResponse Client::listTranscodeJobs(const ListTranscodeJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTranscodeJobsWithOptions(request, runtime);
}

/**
 * @summary Lists VOD packaging assets.
 *
 * @param request ListVodPackagingAssetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVodPackagingAssetsResponse
 */
ListVodPackagingAssetsResponse Client::listVodPackagingAssetsWithOptions(const ListVodPackagingAssetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVodPackagingAssets"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVodPackagingAssetsResponse>();
}

/**
 * @summary Lists VOD packaging assets.
 *
 * @param request ListVodPackagingAssetsRequest
 * @return ListVodPackagingAssetsResponse
 */
ListVodPackagingAssetsResponse Client::listVodPackagingAssets(const ListVodPackagingAssetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVodPackagingAssetsWithOptions(request, runtime);
}

/**
 * @summary Lists packaging configurations.
 *
 * @param request ListVodPackagingConfigurationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVodPackagingConfigurationsResponse
 */
ListVodPackagingConfigurationsResponse Client::listVodPackagingConfigurationsWithOptions(const ListVodPackagingConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVodPackagingConfigurations"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVodPackagingConfigurationsResponse>();
}

/**
 * @summary Lists packaging configurations.
 *
 * @param request ListVodPackagingConfigurationsRequest
 * @return ListVodPackagingConfigurationsResponse
 */
ListVodPackagingConfigurationsResponse Client::listVodPackagingConfigurations(const ListVodPackagingConfigurationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVodPackagingConfigurationsWithOptions(request, runtime);
}

/**
 * @summary Lists packaging groups.
 *
 * @param request ListVodPackagingGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVodPackagingGroupsResponse
 */
ListVodPackagingGroupsResponse Client::listVodPackagingGroupsWithOptions(const ListVodPackagingGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListVodPackagingGroups"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVodPackagingGroupsResponse>();
}

/**
 * @summary Lists packaging groups.
 *
 * @param request ListVodPackagingGroupsRequest
 * @return ListVodPackagingGroupsResponse
 */
ListVodPackagingGroupsResponse Client::listVodPackagingGroups(const ListVodPackagingGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVodPackagingGroupsWithOptions(request, runtime);
}

/**
 * @summary Retrieves workflow tasks.
 *
 * @description This API only returns data from the last 90 days.
 *
 * @param request ListWorkflowTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkflowTasksResponse
 */
ListWorkflowTasksResponse Client::listWorkflowTasksWithOptions(const ListWorkflowTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndOfCreateTime()) {
    query["EndOfCreateTime"] = request.endOfCreateTime();
  }

  if (!!request.hasKeyText()) {
    query["KeyText"] = request.keyText();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasStartOfCreateTime()) {
    query["StartOfCreateTime"] = request.startOfCreateTime();
  }

  if (!!request.hasWorkflowId()) {
    query["WorkflowId"] = request.workflowId();
  }

  if (!!request.hasWorkflowName()) {
    query["WorkflowName"] = request.workflowName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkflowTasks"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkflowTasksResponse>();
}

/**
 * @summary Retrieves workflow tasks.
 *
 * @description This API only returns data from the last 90 days.
 *
 * @param request ListWorkflowTasksRequest
 * @return ListWorkflowTasksResponse
 */
ListWorkflowTasksResponse Client::listWorkflowTasks(const ListWorkflowTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkflowTasksWithOptions(request, runtime);
}

/**
 * @summary Enables Source Failover for a MediaConnect flow.
 *
 * @description *   Before this operation, you must add a source to the flow.
 * *   After Source Failover is enabled, you can add an additional source. The input type of the two sources must be identical.
 *
 * @param request OpenMediaConnectFlowFailoverRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenMediaConnectFlowFailoverResponse
 */
OpenMediaConnectFlowFailoverResponse Client::openMediaConnectFlowFailoverWithOptions(const OpenMediaConnectFlowFailoverRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.flowId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenMediaConnectFlowFailover"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenMediaConnectFlowFailoverResponse>();
}

/**
 * @summary Enables Source Failover for a MediaConnect flow.
 *
 * @description *   Before this operation, you must add a source to the flow.
 * *   After Source Failover is enabled, you can add an additional source. The input type of the two sources must be identical.
 *
 * @param request OpenMediaConnectFlowFailoverRequest
 * @return OpenMediaConnectFlowFailoverResponse
 */
OpenMediaConnectFlowFailoverResponse Client::openMediaConnectFlowFailover(const OpenMediaConnectFlowFailoverRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openMediaConnectFlowFailoverWithOptions(request, runtime);
}

/**
 * @summary Queries a job for extracting a copyright watermark.
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
    {"version" , "2020-11-09"},
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
 * @summary Queries a job for extracting a copyright watermark.
 *
 * @param request QueryCopyrightExtractJobRequest
 * @return QueryCopyrightExtractJobResponse
 */
QueryCopyrightExtractJobResponse Client::queryCopyrightExtractJob(const QueryCopyrightExtractJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCopyrightExtractJobWithOptions(request, runtime);
}

/**
 * @summary Queries copyright watermarking jobs.
 *
 * @description *   This operation is supported only in the China (Shanghai) and China (Beijing) regions.
 *
 * @param request QueryCopyrightJobListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCopyrightJobListResponse
 */
QueryCopyrightJobListResponse Client::queryCopyrightJobListWithOptions(const QueryCopyrightJobListRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "QueryCopyrightJobList"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCopyrightJobListResponse>();
}

/**
 * @summary Queries copyright watermarking jobs.
 *
 * @description *   This operation is supported only in the China (Shanghai) and China (Beijing) regions.
 *
 * @param request QueryCopyrightJobListRequest
 * @return QueryCopyrightJobListResponse
 */
QueryCopyrightJobListResponse Client::queryCopyrightJobList(const QueryCopyrightJobListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCopyrightJobListWithOptions(request, runtime);
}

/**
 * @summary Queries a list of media fingerprint analysis jobs.
 *
 * @param request QueryDNAJobListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDNAJobListResponse
 */
QueryDNAJobListResponse Client::queryDNAJobListWithOptions(const QueryDNAJobListRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "QueryDNAJobList"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDNAJobListResponse>();
}

/**
 * @summary Queries a list of media fingerprint analysis jobs.
 *
 * @param request QueryDNAJobListRequest
 * @return QueryDNAJobListResponse
 */
QueryDNAJobListResponse Client::queryDNAJobList(const QueryDNAJobListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDNAJobListWithOptions(request, runtime);
}

/**
 * @summary Queries the status and result of an intelligent production job.
 *
 * @param request QueryIProductionJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryIProductionJobResponse
 */
QueryIProductionJobResponse Client::queryIProductionJobWithOptions(const QueryIProductionJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryIProductionJob"},
    {"version" , "2020-11-09"},
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
 * @summary Queries the status and result of an intelligent production job.
 *
 * @param request QueryIProductionJobRequest
 * @return QueryIProductionJobResponse
 */
QueryIProductionJobResponse Client::queryIProductionJob(const QueryIProductionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryIProductionJobWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a content moderation job.
 *
 * @description In the content moderation results, the moderation results of the video are sorted in ascending order by time into a timeline. If the video is long, the content moderation results are paginated, and the first page is returned. You can call this operation again to query the remaining moderation results of the video.
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
    {"version" , "2020-11-09"},
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
 *
 * @param request QueryMediaCensorJobDetailRequest
 * @return QueryMediaCensorJobDetailResponse
 */
QueryMediaCensorJobDetailResponse Client::queryMediaCensorJobDetail(const QueryMediaCensorJobDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMediaCensorJobDetailWithOptions(request, runtime);
}

/**
 * @summary Queries a list of content moderation jobs.
 *
 * @description You can call this operation to query only the content moderation jobs within the most recent three months.
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
    {"version" , "2020-11-09"},
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
 * @summary Queries a list of content moderation jobs.
 *
 * @description You can call this operation to query only the content moderation jobs within the most recent three months.
 *
 * @param request QueryMediaCensorJobListRequest
 * @return QueryMediaCensorJobListResponse
 */
QueryMediaCensorJobListResponse Client::queryMediaCensorJobList(const QueryMediaCensorJobListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMediaCensorJobListWithOptions(request, runtime);
}

/**
 * @summary Queries the indexing jobs enabled for a media asset.
 *
 * @param request QueryMediaIndexJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMediaIndexJobResponse
 */
QueryMediaIndexJobResponse Client::queryMediaIndexJobWithOptions(const QueryMediaIndexJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMediaIndexJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMediaIndexJobResponse>();
}

/**
 * @summary Queries the indexing jobs enabled for a media asset.
 *
 * @param request QueryMediaIndexJobRequest
 * @return QueryMediaIndexJobResponse
 */
QueryMediaIndexJobResponse Client::queryMediaIndexJob(const QueryMediaIndexJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMediaIndexJobWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a search index.
 *
 * @param request QuerySearchIndexRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySearchIndexResponse
 */
QuerySearchIndexResponse Client::querySearchIndexWithOptions(const QuerySearchIndexRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndexType()) {
    query["IndexType"] = request.indexType();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySearchIndex"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySearchIndexResponse>();
}

/**
 * @summary Queries the details of a search index.
 *
 * @param request QuerySearchIndexRequest
 * @return QuerySearchIndexResponse
 */
QuerySearchIndexResponse Client::querySearchIndex(const QuerySearchIndexRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySearchIndexWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a search library.
 *
 * @param request QuerySearchLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySearchLibResponse
 */
QuerySearchLibResponse Client::querySearchLibWithOptions(const QuerySearchLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySearchLib"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySearchLibResponse>();
}

/**
 * @summary Queries the information about a search library.
 *
 * @param request QuerySearchLibRequest
 * @return QuerySearchLibResponse
 */
QuerySearchLibResponse Client::querySearchLib(const QuerySearchLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySearchLibWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a smart tagging job.
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

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySmarttagJob"},
    {"version" , "2020-11-09"},
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
 * @summary Queries the information about a smart tagging job.
 *
 * @param request QuerySmarttagJobRequest
 * @return QuerySmarttagJobResponse
 */
QuerySmarttagJobResponse Client::querySmarttagJob(const QuerySmarttagJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySmarttagJobWithOptions(request, runtime);
}

/**
 * @summary Queries A/B watermarking jobs.
 *
 * @description *   This operation is supported only in the China (Shanghai) and China (Beijing) regions.
 *
 * @param request QueryTraceAbJobListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTraceAbJobListResponse
 */
QueryTraceAbJobListResponse Client::queryTraceAbJobListWithOptions(const QueryTraceAbJobListRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasTraceMediaId()) {
    query["TraceMediaId"] = request.traceMediaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTraceAbJobList"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTraceAbJobListResponse>();
}

/**
 * @summary Queries A/B watermarking jobs.
 *
 * @description *   This operation is supported only in the China (Shanghai) and China (Beijing) regions.
 *
 * @param request QueryTraceAbJobListRequest
 * @return QueryTraceAbJobListResponse
 */
QueryTraceAbJobListResponse Client::queryTraceAbJobList(const QueryTraceAbJobListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTraceAbJobListWithOptions(request, runtime);
}

/**
 * @summary Queries a job for extracting a trace watermark.
 *
 * @description This operation is supported only in the China (Shanghai) and China (Beijing) regions.
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
    {"version" , "2020-11-09"},
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
 * @summary Queries a job for extracting a trace watermark.
 *
 * @description This operation is supported only in the China (Shanghai) and China (Beijing) regions.
 *
 * @param request QueryTraceExtractJobRequest
 * @return QueryTraceExtractJobResponse
 */
QueryTraceExtractJobResponse Client::queryTraceExtractJob(const QueryTraceExtractJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTraceExtractJobWithOptions(request, runtime);
}

/**
 * @summary Queries jobs for generating M3U8 files containing specific trace watermark information.
 *
 * @description *   This operation is supported only in the China (Shanghai) and China (Beijing) regions.
 * *   The M3U8 file with absolute paths generated by the SubmitTraceM3u8Job API has a signed URL with an authentication validity period of 24 hours, starting from the moment the job is completed. After the signature expires, the M3U8 file will become inaccessible. You must submit a new M3U8 generation job.
 *
 * @param request QueryTraceM3u8JobListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTraceM3u8JobListResponse
 */
QueryTraceM3u8JobListResponse Client::queryTraceM3u8JobListWithOptions(const QueryTraceM3u8JobListRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "QueryTraceM3u8JobList"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTraceM3u8JobListResponse>();
}

/**
 * @summary Queries jobs for generating M3U8 files containing specific trace watermark information.
 *
 * @description *   This operation is supported only in the China (Shanghai) and China (Beijing) regions.
 * *   The M3U8 file with absolute paths generated by the SubmitTraceM3u8Job API has a signed URL with an authentication validity period of 24 hours, starting from the moment the job is completed. After the signature expires, the M3U8 file will become inaccessible. You must submit a new M3U8 generation job.
 *
 * @param request QueryTraceM3u8JobListRequest
 * @return QueryTraceM3u8JobListResponse
 */
QueryTraceM3u8JobListResponse Client::queryTraceM3u8JobList(const QueryTraceM3u8JobListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTraceM3u8JobListWithOptions(request, runtime);
}

/**
 * @summary Retrieves the results of an AI analysis and processing task.
 *
 * @param tmpReq QueryVideoCognitionJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryVideoCognitionJobResponse
 */
QueryVideoCognitionJobResponse Client::queryVideoCognitionJobWithOptions(const QueryVideoCognitionJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryVideoCognitionJobShrinkRequest request = QueryVideoCognitionJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIncludeResults()) {
    request.setIncludeResultsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.includeResults(), "IncludeResults", "json"));
  }

  json query = {};
  if (!!request.hasIncludeResultsShrink()) {
    query["IncludeResults"] = request.includeResultsShrink();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryVideoCognitionJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryVideoCognitionJobResponse>();
}

/**
 * @summary Retrieves the results of an AI analysis and processing task.
 *
 * @param request QueryVideoCognitionJobRequest
 * @return QueryVideoCognitionJobResponse
 */
QueryVideoCognitionJobResponse Client::queryVideoCognitionJob(const QueryVideoCognitionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryVideoCognitionJobWithOptions(request, runtime);
}

/**
 * @summary Obtain a new upload credential for a media asset after its upload credential expires.
 *
 * @description You can also call this operation to overwrite media files. After you obtain the upload URL of a media file, you can upload the media file again without changing the audio or video ID.
 *
 * @param request RefreshUploadMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RefreshUploadMediaResponse
 */
RefreshUploadMediaResponse Client::refreshUploadMediaWithOptions(const RefreshUploadMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RefreshUploadMedia"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RefreshUploadMediaResponse>();
}

/**
 * @summary Obtain a new upload credential for a media asset after its upload credential expires.
 *
 * @description You can also call this operation to overwrite media files. After you obtain the upload URL of a media file, you can upload the media file again without changing the audio or video ID.
 *
 * @param request RefreshUploadMediaRequest
 * @return RefreshUploadMediaResponse
 */
RefreshUploadMediaResponse Client::refreshUploadMedia(const RefreshUploadMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return refreshUploadMediaWithOptions(request, runtime);
}

/**
 * @summary Registers a media asset with Intelligent Media Services (IMS). IMS assigns an ID to the media asset. This operation asynchronously accesses the media asset service in which the media asset is stored to obtain the file information of the media asset based on the input URL. You can also specify basic information, such as the title, tags, and description, for the media asset. This operation returns the ID of the media asset. You can call the GetMediaInfo operation based on the ID to query the details of the media asset. You can set InputURL only to the URL of an Object Storage Service (OSS) file or an ApsaraVideo VOD media asset.
 *
 * @description Registering a media asset is an asynchronous job that takes 2 to 3 seconds. When the operation returns the ID of the media asset, the registration may have not be completed. If you call the GetMediaInfo operation at this time, you may fail to obtain the information about the media asset.
 *
 * @param request RegisterMediaInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterMediaInfoResponse
 */
RegisterMediaInfoResponse Client::registerMediaInfoWithOptions(const RegisterMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.businessType();
  }

  if (!!request.hasCateId()) {
    query["CateId"] = request.cateId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.coverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInputURL()) {
    query["InputURL"] = request.inputURL();
  }

  if (!!request.hasMediaTags()) {
    query["MediaTags"] = request.mediaTags();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasOverwrite()) {
    query["Overwrite"] = request.overwrite();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.referenceId();
  }

  if (!!request.hasRegisterConfig()) {
    query["RegisterConfig"] = request.registerConfig();
  }

  if (!!request.hasSmartTagTemplateId()) {
    query["SmartTagTemplateId"] = request.smartTagTemplateId();
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
    {"action" , "RegisterMediaInfo"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterMediaInfoResponse>();
}

/**
 * @summary Registers a media asset with Intelligent Media Services (IMS). IMS assigns an ID to the media asset. This operation asynchronously accesses the media asset service in which the media asset is stored to obtain the file information of the media asset based on the input URL. You can also specify basic information, such as the title, tags, and description, for the media asset. This operation returns the ID of the media asset. You can call the GetMediaInfo operation based on the ID to query the details of the media asset. You can set InputURL only to the URL of an Object Storage Service (OSS) file or an ApsaraVideo VOD media asset.
 *
 * @description Registering a media asset is an asynchronous job that takes 2 to 3 seconds. When the operation returns the ID of the media asset, the registration may have not be completed. If you call the GetMediaInfo operation at this time, you may fail to obtain the information about the media asset.
 *
 * @param request RegisterMediaInfoRequest
 * @return RegisterMediaInfoResponse
 */
RegisterMediaInfoResponse Client::registerMediaInfo(const RegisterMediaInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerMediaInfoWithOptions(request, runtime);
}

/**
 * @summary Registers a media stream.
 *
 * @description You can call this operation to register a media stream file in an Object Storage Service (OSS) bucket with Intelligent Media Services (IMS) and associate the media stream with the specified media asset ID.
 *
 * @param request RegisterMediaStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterMediaStreamResponse
 */
RegisterMediaStreamResponse Client::registerMediaStreamWithOptions(const RegisterMediaStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInputURL()) {
    query["InputURL"] = request.inputURL();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasStreamTags()) {
    query["StreamTags"] = request.streamTags();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RegisterMediaStream"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterMediaStreamResponse>();
}

/**
 * @summary Registers a media stream.
 *
 * @description You can call this operation to register a media stream file in an Object Storage Service (OSS) bucket with Intelligent Media Services (IMS) and associate the media stream with the specified media asset ID.
 *
 * @param request RegisterMediaStreamRequest
 * @return RegisterMediaStreamResponse
 */
RegisterMediaStreamResponse Client::registerMediaStream(const RegisterMediaStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerMediaStreamWithOptions(request, runtime);
}

/**
 * @summary Resumes an output of a MediaConnect flow. When resumed, the output can deliver the live stream to the destination.
 *
 * @param request ResumeMediaConnectFlowOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeMediaConnectFlowOutputResponse
 */
ResumeMediaConnectFlowOutputResponse Client::resumeMediaConnectFlowOutputWithOptions(const ResumeMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.flowId();
  }

  if (!!request.hasOutputName()) {
    query["OutputName"] = request.outputName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResumeMediaConnectFlowOutput"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeMediaConnectFlowOutputResponse>();
}

/**
 * @summary Resumes an output of a MediaConnect flow. When resumed, the output can deliver the live stream to the destination.
 *
 * @param request ResumeMediaConnectFlowOutputRequest
 * @return ResumeMediaConnectFlowOutputResponse
 */
ResumeMediaConnectFlowOutputResponse Client::resumeMediaConnectFlowOutput(const ResumeMediaConnectFlowOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeMediaConnectFlowOutputWithOptions(request, runtime);
}

/**
 * @summary Queries online editing projects by creation time and status.
 *
 * @param request SearchEditingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchEditingProjectResponse
 */
SearchEditingProjectResponse Client::searchEditingProjectWithOptions(const SearchEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateSource()) {
    query["CreateSource"] = request.createSource();
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

  if (!!request.hasProjectType()) {
    query["ProjectType"] = request.projectType();
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

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchEditingProject"},
    {"version" , "2020-11-09"},
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
 * @summary Queries online editing projects by creation time and status.
 *
 * @param request SearchEditingProjectRequest
 * @return SearchEditingProjectResponse
 */
SearchEditingProjectResponse Client::searchEditingProject(const SearchEditingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchEditingProjectWithOptions(request, runtime);
}

/**
 * @summary Re-analyzes the search index jobs of media assets. You can re-run the search index jobs of up to 20 media assets in each request.
 *
 * @param request SearchIndexJobRerunRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchIndexJobRerunResponse
 */
SearchIndexJobRerunResponse Client::searchIndexJobRerunWithOptions(const SearchIndexJobRerunRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.mediaIds();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  if (!!request.hasTask()) {
    query["Task"] = request.task();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchIndexJobRerun"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchIndexJobRerunResponse>();
}

/**
 * @summary Re-analyzes the search index jobs of media assets. You can re-run the search index jobs of up to 20 media assets in each request.
 *
 * @param request SearchIndexJobRerunRequest
 * @return SearchIndexJobRerunResponse
 */
SearchIndexJobRerunResponse Client::searchIndexJobRerun(const SearchIndexJobRerunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchIndexJobRerunWithOptions(request, runtime);
}

/**
 * @summary Queries information about media assets based on the request parameters.
 *
 * @description If you have questions about how to use the media asset search feature in Intelligent Media Services (IMS), contact technical support in the DingTalk group (ID 30415005038).
 *
 * @param request SearchMediaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMediaResponse
 */
SearchMediaResponse Client::searchMediaWithOptions(const SearchMediaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomFilters()) {
    query["CustomFilters"] = request.customFilters();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.entityId();
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

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchMedia"},
    {"version" , "2020-11-09"},
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
 * @summary Queries information about media assets based on the request parameters.
 *
 * @description If you have questions about how to use the media asset search feature in Intelligent Media Services (IMS), contact technical support in the DingTalk group (ID 30415005038).
 *
 * @param request SearchMediaRequest
 * @return SearchMediaResponse
 */
SearchMediaResponse Client::searchMedia(const SearchMediaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMediaWithOptions(request, runtime);
}

/**
 * @summary Queries media assets based on character names, subtitles, or AI categories.
 *
 * @description You can call this operation to query media assets or media asset clips based on character names, subtitles, or AI categories.
 *
 * @param request SearchMediaByAILabelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMediaByAILabelResponse
 */
SearchMediaByAILabelResponse Client::searchMediaByAILabelWithOptions(const SearchMediaByAILabelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomFilters()) {
    query["CustomFilters"] = request.customFilters();
  }

  if (!!request.hasMatchingMode()) {
    query["MatchingMode"] = request.matchingMode();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasMultimodalSearchType()) {
    query["MultimodalSearchType"] = request.multimodalSearchType();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  if (!!request.hasSpecificSearch()) {
    query["SpecificSearch"] = request.specificSearch();
  }

  if (!!request.hasText()) {
    query["Text"] = request.text();
  }

  if (!!request.hasUtcCreate()) {
    query["UtcCreate"] = request.utcCreate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchMediaByAILabel"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchMediaByAILabelResponse>();
}

/**
 * @summary Queries media assets based on character names, subtitles, or AI categories.
 *
 * @description You can call this operation to query media assets or media asset clips based on character names, subtitles, or AI categories.
 *
 * @param request SearchMediaByAILabelRequest
 * @return SearchMediaByAILabelResponse
 */
SearchMediaByAILabelResponse Client::searchMediaByAILabel(const SearchMediaByAILabelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMediaByAILabelWithOptions(request, runtime);
}

/**
 * @summary Queries the information about media assets that are related to a specific face.
 *
 * @description If you have questions about how to use the media asset search feature in Intelligent Media Services (IMS), contact technical support in the DingTalk group (ID 30415005038).
 *
 * @param request SearchMediaByFaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMediaByFaceResponse
 */
SearchMediaByFaceResponse Client::searchMediaByFaceWithOptions(const SearchMediaByFaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomFilters()) {
    query["CustomFilters"] = request.customFilters();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.entityId();
  }

  if (!!request.hasFaceSearchToken()) {
    query["FaceSearchToken"] = request.faceSearchToken();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPersonImageUrl()) {
    query["PersonImageUrl"] = request.personImageUrl();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  if (!!request.hasUtcCreate()) {
    query["UtcCreate"] = request.utcCreate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchMediaByFace"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchMediaByFaceResponse>();
}

/**
 * @summary Queries the information about media assets that are related to a specific face.
 *
 * @description If you have questions about how to use the media asset search feature in Intelligent Media Services (IMS), contact technical support in the DingTalk group (ID 30415005038).
 *
 * @param request SearchMediaByFaceRequest
 * @return SearchMediaByFaceResponse
 */
SearchMediaByFaceResponse Client::searchMediaByFace(const SearchMediaByFaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMediaByFaceWithOptions(request, runtime);
}

/**
 * @summary Performs a hybrid search for media assets. This API combines multiple recall strategies, including tag-based text search and large language model (LLM) search. You can locate media assets using natural language descriptions.
 *
 * @param request SearchMediaByHybridRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMediaByHybridResponse
 */
SearchMediaByHybridResponse Client::searchMediaByHybridWithOptions(const SearchMediaByHybridRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomFilters()) {
    query["CustomFilters"] = request.customFilters();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  if (!!request.hasText()) {
    query["Text"] = request.text();
  }

  if (!!request.hasUtcCreate()) {
    query["UtcCreate"] = request.utcCreate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchMediaByHybrid"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchMediaByHybridResponse>();
}

/**
 * @summary Performs a hybrid search for media assets. This API combines multiple recall strategies, including tag-based text search and large language model (LLM) search. You can locate media assets using natural language descriptions.
 *
 * @param request SearchMediaByHybridRequest
 * @return SearchMediaByHybridResponse
 */
SearchMediaByHybridResponse Client::searchMediaByHybrid(const SearchMediaByHybridRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMediaByHybridWithOptions(request, runtime);
}

/**
 * @summary Queries media assets by using the large visual model. You can use natural language for the query.
 *
 * @description If you have questions about how to use the media asset search feature in Intelligent Media Services (IMS), contact technical support in the DingTalk group (ID 30415005038).
 *
 * @param request SearchMediaByMultimodalRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMediaByMultimodalResponse
 */
SearchMediaByMultimodalResponse Client::searchMediaByMultimodalWithOptions(const SearchMediaByMultimodalRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomFilters()) {
    query["CustomFilters"] = request.customFilters();
  }

  if (!!request.hasMediaType()) {
    query["MediaType"] = request.mediaType();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  if (!!request.hasText()) {
    query["Text"] = request.text();
  }

  if (!!request.hasUtcCreate()) {
    query["UtcCreate"] = request.utcCreate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchMediaByMultimodal"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchMediaByMultimodalResponse>();
}

/**
 * @summary Queries media assets by using the large visual model. You can use natural language for the query.
 *
 * @description If you have questions about how to use the media asset search feature in Intelligent Media Services (IMS), contact technical support in the DingTalk group (ID 30415005038).
 *
 * @param request SearchMediaByMultimodalRequest
 * @return SearchMediaByMultimodalResponse
 */
SearchMediaByMultimodalResponse Client::searchMediaByMultimodal(const SearchMediaByMultimodalRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMediaByMultimodalWithOptions(request, runtime);
}

/**
 * @summary Queries the information about media asset clips that are related to a specific face based on the response to the SearchMediaByFace operation.
 *
 * @description If you have questions about how to use the media asset search feature in Intelligent Media Services (IMS), contact technical support in the DingTalk group (ID 30415005038).
 *
 * @param request SearchMediaClipByFaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMediaClipByFaceResponse
 */
SearchMediaClipByFaceResponse Client::searchMediaClipByFaceWithOptions(const SearchMediaClipByFaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEntityId()) {
    query["EntityId"] = request.entityId();
  }

  if (!!request.hasFaceSearchToken()) {
    query["FaceSearchToken"] = request.faceSearchToken();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchMediaClipByFace"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchMediaClipByFaceResponse>();
}

/**
 * @summary Queries the information about media asset clips that are related to a specific face based on the response to the SearchMediaByFace operation.
 *
 * @description If you have questions about how to use the media asset search feature in Intelligent Media Services (IMS), contact technical support in the DingTalk group (ID 30415005038).
 *
 * @param request SearchMediaClipByFaceRequest
 * @return SearchMediaClipByFaceResponse
 */
SearchMediaClipByFaceResponse Client::searchMediaClipByFace(const SearchMediaClipByFaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchMediaClipByFaceWithOptions(request, runtime);
}

/**
 * @summary 搜索公共媒资信息
 *
 * @param request SearchPublicMediaInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchPublicMediaInfoResponse
 */
SearchPublicMediaInfoResponse Client::searchPublicMediaInfoWithOptions(const SearchPublicMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorized()) {
    query["Authorized"] = request.authorized();
  }

  if (!!request.hasDynamicMetaDataMatchFields()) {
    query["DynamicMetaDataMatchFields"] = request.dynamicMetaDataMatchFields();
  }

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.entityId();
  }

  if (!!request.hasFavorite()) {
    query["Favorite"] = request.favorite();
  }

  if (!!request.hasMediaIds()) {
    query["MediaIds"] = request.mediaIds();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchPublicMediaInfo"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchPublicMediaInfoResponse>();
}

/**
 * @summary 搜索公共媒资信息
 *
 * @param request SearchPublicMediaInfoRequest
 * @return SearchPublicMediaInfoResponse
 */
SearchPublicMediaInfoResponse Client::searchPublicMediaInfo(const SearchPublicMediaInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return searchPublicMediaInfoWithOptions(request, runtime);
}

/**
 * @summary Sends a DataChannel message to an AI agent.
 *
 * @param request SendAIAgentDataChannelMessageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendAIAgentDataChannelMessageResponse
 */
SendAIAgentDataChannelMessageResponse Client::sendAIAgentDataChannelMessageWithOptions(const SendAIAgentDataChannelMessageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.message();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendAIAgentDataChannelMessage"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendAIAgentDataChannelMessageResponse>();
}

/**
 * @summary Sends a DataChannel message to an AI agent.
 *
 * @param request SendAIAgentDataChannelMessageRequest
 * @return SendAIAgentDataChannelMessageResponse
 */
SendAIAgentDataChannelMessageResponse Client::sendAIAgentDataChannelMessage(const SendAIAgentDataChannelMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendAIAgentDataChannelMessageWithOptions(request, runtime);
}

/**
 * @summary Instructs an AI agent to immediately broadcast a text message and supports interruption settings.
 *
 * @description You can call this operation to instruct an AI agent to broadcast the content that you specify. You can determine whether this broadcast can immediately interrupt the ongoing speech. The interruption is allowed by default.
 * **Note**
 * *   Make sure that the `InstanceId` is valid and corresponds to an existing AI agent.
 * *   The content of `Text` must comply with the specifications and does not contain sensitive or inappropriate information.
 * *   If you do not want the new broadcast to interrupt the ongoing speech, you must set `EnableInterrupt` to `false`.
 *
 * @param request SendAIAgentSpeechRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendAIAgentSpeechResponse
 */
SendAIAgentSpeechResponse Client::sendAIAgentSpeechWithOptions(const SendAIAgentSpeechRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnableInterrupt()) {
    query["EnableInterrupt"] = request.enableInterrupt();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasText()) {
    query["Text"] = request.text();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendAIAgentSpeech"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendAIAgentSpeechResponse>();
}

/**
 * @summary Instructs an AI agent to immediately broadcast a text message and supports interruption settings.
 *
 * @description You can call this operation to instruct an AI agent to broadcast the content that you specify. You can determine whether this broadcast can immediately interrupt the ongoing speech. The interruption is allowed by default.
 * **Note**
 * *   Make sure that the `InstanceId` is valid and corresponds to an existing AI agent.
 * *   The content of `Text` must comply with the specifications and does not contain sensitive or inappropriate information.
 * *   If you do not want the new broadcast to interrupt the ongoing speech, you must set `EnableInterrupt` to `false`.
 *
 * @param request SendAIAgentSpeechRequest
 * @return SendAIAgentSpeechResponse
 */
SendAIAgentSpeechResponse Client::sendAIAgentSpeech(const SendAIAgentSpeechRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendAIAgentSpeechWithOptions(request, runtime);
}

/**
 * @summary Sends a message as input to the large language model (LLM).
 *
 * @param request SendAIAgentTextRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendAIAgentTextResponse
 */
SendAIAgentTextResponse Client::sendAIAgentTextWithOptions(const SendAIAgentTextRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasText()) {
    query["Text"] = request.text();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendAIAgentText"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendAIAgentTextResponse>();
}

/**
 * @summary Sends a message as input to the large language model (LLM).
 *
 * @param request SendAIAgentTextRequest
 * @return SendAIAgentTextResponse
 */
SendAIAgentTextResponse Client::sendAIAgentText(const SendAIAgentTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendAIAgentTextWithOptions(request, runtime);
}

/**
 * @summary Sends a command to process a live stream snapshot job.
 *
 * @param request SendLiveSnapshotJobCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendLiveSnapshotJobCommandResponse
 */
SendLiveSnapshotJobCommandResponse Client::sendLiveSnapshotJobCommandWithOptions(const SendLiveSnapshotJobCommandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCommand()) {
    body["Command"] = request.command();
  }

  if (!!request.hasJobId()) {
    body["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SendLiveSnapshotJobCommand"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendLiveSnapshotJobCommandResponse>();
}

/**
 * @summary Sends a command to process a live stream snapshot job.
 *
 * @param request SendLiveSnapshotJobCommandRequest
 * @return SendLiveSnapshotJobCommandResponse
 */
SendLiveSnapshotJobCommandResponse Client::sendLiveSnapshotJobCommand(const SendLiveSnapshotJobCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendLiveSnapshotJobCommandWithOptions(request, runtime);
}

/**
 * @summary Sends a command to process a live stream transcoding job.
 *
 * @param request SendLiveTranscodeJobCommandRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendLiveTranscodeJobCommandResponse
 */
SendLiveTranscodeJobCommandResponse Client::sendLiveTranscodeJobCommandWithOptions(const SendLiveTranscodeJobCommandRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCommand()) {
    query["Command"] = request.command();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendLiveTranscodeJobCommand"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendLiveTranscodeJobCommandResponse>();
}

/**
 * @summary Sends a command to process a live stream transcoding job.
 *
 * @param request SendLiveTranscodeJobCommandRequest
 * @return SendLiveTranscodeJobCommandResponse
 */
SendLiveTranscodeJobCommandResponse Client::sendLiveTranscodeJobCommand(const SendLiveTranscodeJobCommandRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendLiveTranscodeJobCommandWithOptions(request, runtime);
}

/**
 * @summary Sends a message to the client.
 *
 * @param request SendMessageChatTextRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendMessageChatTextResponse
 */
SendMessageChatTextResponse Client::sendMessageChatTextWithOptions(const SendMessageChatTextRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAIAgentId()) {
    query["AIAgentId"] = request.AIAgentId();
  }

  if (!!request.hasMode()) {
    query["Mode"] = request.mode();
  }

  if (!!request.hasNeedArchiving()) {
    query["NeedArchiving"] = request.needArchiving();
  }

  if (!!request.hasReceiverId()) {
    query["ReceiverId"] = request.receiverId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasText()) {
    query["Text"] = request.text();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendMessageChatText"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendMessageChatTextResponse>();
}

/**
 * @summary Sends a message to the client.
 *
 * @param request SendMessageChatTextRequest
 * @return SendMessageChatTextResponse
 */
SendMessageChatTextResponse Client::sendMessageChatText(const SendMessageChatTextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendMessageChatTextWithOptions(request, runtime);
}

/**
 * @summary Registers a voiceprint.
 *
 * @param tmpReq SetAIAgentVoiceprintRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetAIAgentVoiceprintResponse
 */
SetAIAgentVoiceprintResponse Client::setAIAgentVoiceprintWithOptions(const SetAIAgentVoiceprintRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SetAIAgentVoiceprintShrinkRequest request = SetAIAgentVoiceprintShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  json query = {};
  if (!!request.hasInputShrink()) {
    query["Input"] = request.inputShrink();
  }

  if (!!request.hasVoiceprintId()) {
    query["VoiceprintId"] = request.voiceprintId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetAIAgentVoiceprint"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetAIAgentVoiceprintResponse>();
}

/**
 * @summary Registers a voiceprint.
 *
 * @param request SetAIAgentVoiceprintRequest
 * @return SetAIAgentVoiceprintResponse
 */
SetAIAgentVoiceprintResponse Client::setAIAgentVoiceprint(const SetAIAgentVoiceprintRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setAIAgentVoiceprintWithOptions(request, runtime);
}

/**
 * @summary 设置内容分析搜索配置
 *
 * @param request SetContentAnalyzeConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetContentAnalyzeConfigResponse
 */
SetContentAnalyzeConfigResponse Client::setContentAnalyzeConfigWithOptions(const SetContentAnalyzeConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuto()) {
    query["Auto"] = request._auto();
  }

  if (!!request.hasSaveType()) {
    query["SaveType"] = request.saveType();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetContentAnalyzeConfig"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetContentAnalyzeConfigResponse>();
}

/**
 * @summary 设置内容分析搜索配置
 *
 * @param request SetContentAnalyzeConfigRequest
 * @return SetContentAnalyzeConfigResponse
 */
SetContentAnalyzeConfigResponse Client::setContentAnalyzeConfig(const SetContentAnalyzeConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setContentAnalyzeConfigWithOptions(request, runtime);
}

/**
 * @summary Sets a custom template as the default template.
 *
 * @param request SetDefaultCustomTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDefaultCustomTemplateResponse
 */
SetDefaultCustomTemplateResponse Client::setDefaultCustomTemplateWithOptions(const SetDefaultCustomTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDefaultCustomTemplate"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDefaultCustomTemplateResponse>();
}

/**
 * @summary Sets a custom template as the default template.
 *
 * @param request SetDefaultCustomTemplateRequest
 * @return SetDefaultCustomTemplateResponse
 */
SetDefaultCustomTemplateResponse Client::setDefaultCustomTemplate(const SetDefaultCustomTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDefaultCustomTemplateWithOptions(request, runtime);
}

/**
 * @summary 设置默认存储路径
 *
 * @param request SetDefaultStorageLocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetDefaultStorageLocationResponse
 */
SetDefaultStorageLocationResponse Client::setDefaultStorageLocationWithOptions(const SetDefaultStorageLocationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBucket()) {
    query["Bucket"] = request.bucket();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.path();
  }

  if (!!request.hasStorageType()) {
    query["StorageType"] = request.storageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetDefaultStorageLocation"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetDefaultStorageLocationResponse>();
}

/**
 * @summary 设置默认存储路径
 *
 * @param request SetDefaultStorageLocationRequest
 * @return SetDefaultStorageLocationResponse
 */
SetDefaultStorageLocationResponse Client::setDefaultStorageLocation(const SetDefaultStorageLocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setDefaultStorageLocationWithOptions(request, runtime);
}

/**
 * @summary Configures a callback method for one or more events.
 *
 * @param request SetEventCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetEventCallbackResponse
 */
SetEventCallbackResponse Client::setEventCallbackWithOptions(const SetEventCallbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthKey()) {
    query["AuthKey"] = request.authKey();
  }

  if (!!request.hasAuthSwitch()) {
    query["AuthSwitch"] = request.authSwitch();
  }

  if (!!request.hasCallbackQueueName()) {
    query["CallbackQueueName"] = request.callbackQueueName();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetEventCallback"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetEventCallbackResponse>();
}

/**
 * @summary Configures a callback method for one or more events.
 *
 * @param request SetEventCallbackRequest
 * @return SetEventCallbackResponse
 */
SetEventCallbackResponse Client::setEventCallback(const SetEventCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setEventCallbackWithOptions(request, runtime);
}

/**
 * @summary Enables or disables event notifications for an AI agent and configures the callback URL and event types.
 *
 * @description ## [](#)Request description
 * You can call this operation to configure event notifications for an AI agent. You can configure `EnableNotify` to enable or disable event notifications, configure `CallbackUrl` to specify a callback URL, and configure `EventTypes` to specify event types. You can also configure `Token` to specify an authentication token for enhanced security. The system returns a unique `RequestId` for subsequent tracing after a successful request.
 *
 * @param request SetNotifyConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SetNotifyConfigResponse
 */
SetNotifyConfigResponse Client::setNotifyConfigWithOptions(const SetNotifyConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAIAgentId()) {
    query["AIAgentId"] = request.AIAgentId();
  }

  if (!!request.hasAudioOssPath()) {
    query["AudioOssPath"] = request.audioOssPath();
  }

  if (!!request.hasCallbackUrl()) {
    query["CallbackUrl"] = request.callbackUrl();
  }

  if (!!request.hasEnableAudioRecording()) {
    query["EnableAudioRecording"] = request.enableAudioRecording();
  }

  if (!!request.hasEnableNotify()) {
    query["EnableNotify"] = request.enableNotify();
  }

  if (!!request.hasEventTypes()) {
    query["EventTypes"] = request.eventTypes();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.token();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SetNotifyConfig"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SetNotifyConfigResponse>();
}

/**
 * @summary Enables or disables event notifications for an AI agent and configures the callback URL and event types.
 *
 * @description ## [](#)Request description
 * You can call this operation to configure event notifications for an AI agent. You can configure `EnableNotify` to enable or disable event notifications, configure `CallbackUrl` to specify a callback URL, and configure `EventTypes` to specify event types. You can also configure `Token` to specify an authentication token for enhanced security. The system returns a unique `RequestId` for subsequent tracing after a successful request.
 *
 * @param request SetNotifyConfigRequest
 * @return SetNotifyConfigResponse
 */
SetNotifyConfigResponse Client::setNotifyConfig(const SetNotifyConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return setNotifyConfigWithOptions(request, runtime);
}

/**
 * @summary Starts an AI agent that is configured in the Intelligent Media Services (IMS) console.
 *
 * @description You can call this operation to start an AI agent instance for a conversation. ````````When the AI agent is started, the system returns a unique `InstanceId` for subsequent tracking and operations.
 *
 * @param tmpReq StartAIAgentInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartAIAgentInstanceResponse
 */
StartAIAgentInstanceResponse Client::startAIAgentInstanceWithOptions(const StartAIAgentInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartAIAgentInstanceShrinkRequest request = StartAIAgentInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentConfig()) {
    request.setAgentConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.agentConfig(), "AgentConfig", "json"));
  }

  if (!!tmpReq.hasChatSyncConfig()) {
    request.setChatSyncConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.chatSyncConfig(), "ChatSyncConfig", "json"));
  }

  if (!!tmpReq.hasRuntimeConfig()) {
    request.setRuntimeConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.runtimeConfig(), "RuntimeConfig", "json"));
  }

  if (!!tmpReq.hasTemplateConfig()) {
    request.setTemplateConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.templateConfig(), "TemplateConfig", "json"));
  }

  json query = {};
  if (!!request.hasAIAgentId()) {
    query["AIAgentId"] = request.AIAgentId();
  }

  if (!!request.hasAgentConfigShrink()) {
    query["AgentConfig"] = request.agentConfigShrink();
  }

  if (!!request.hasChatSyncConfigShrink()) {
    query["ChatSyncConfig"] = request.chatSyncConfigShrink();
  }

  if (!!request.hasRuntimeConfigShrink()) {
    query["RuntimeConfig"] = request.runtimeConfigShrink();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasTemplateConfigShrink()) {
    query["TemplateConfig"] = request.templateConfigShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartAIAgentInstance"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartAIAgentInstanceResponse>();
}

/**
 * @summary Starts an AI agent that is configured in the Intelligent Media Services (IMS) console.
 *
 * @description You can call this operation to start an AI agent instance for a conversation. ````````When the AI agent is started, the system returns a unique `InstanceId` for subsequent tracking and operations.
 *
 * @param request StartAIAgentInstanceRequest
 * @return StartAIAgentInstanceResponse
 */
StartAIAgentInstanceResponse Client::startAIAgentInstance(const StartAIAgentInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startAIAgentInstanceWithOptions(request, runtime);
}

/**
 * @summary 创建一个智能体实例，返回智能体所在的频道、频道内名称以及进入频道所需的token。
 *
 * @param tmpReq StartAIAgentOutboundCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartAIAgentOutboundCallResponse
 */
StartAIAgentOutboundCallResponse Client::startAIAgentOutboundCallWithOptions(const StartAIAgentOutboundCallRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartAIAgentOutboundCallShrinkRequest request = StartAIAgentOutboundCallShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfig()) {
    request.setConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.config(), "Config", "json"));
  }

  json query = {};
  if (!!request.hasAIAgentId()) {
    query["AIAgentId"] = request.AIAgentId();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.calledNumber();
  }

  if (!!request.hasCallerNumber()) {
    query["CallerNumber"] = request.callerNumber();
  }

  if (!!request.hasConfigShrink()) {
    query["Config"] = request.configShrink();
  }

  if (!!request.hasImsAIAgentFreeObCall()) {
    query["ImsAIAgentFreeObCall"] = request.imsAIAgentFreeObCall();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartAIAgentOutboundCall"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartAIAgentOutboundCallResponse>();
}

/**
 * @summary 创建一个智能体实例，返回智能体所在的频道、频道内名称以及进入频道所需的token。
 *
 * @param request StartAIAgentOutboundCallRequest
 * @return StartAIAgentOutboundCallResponse
 */
StartAIAgentOutboundCallResponse Client::startAIAgentOutboundCall(const StartAIAgentOutboundCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startAIAgentOutboundCallWithOptions(request, runtime);
}

/**
 * @summary Initiates a workflow task for automated media processing based on a workflow template.
 *
 * @description *   You must specify a workflow template. To create one, go to the [Intelligent Media Services (IMS)](https://ims.console.aliyun.com/ai-workflow/template) console.
 *
 * @param request StartAIWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartAIWorkflowResponse
 */
StartAIWorkflowResponse Client::startAIWorkflowWithOptions(const StartAIWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDispatchTag()) {
    query["DispatchTag"] = request.dispatchTag();
  }

  if (!!request.hasInputs()) {
    query["Inputs"] = request.inputs();
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
    {"action" , "StartAIWorkflow"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartAIWorkflowResponse>();
}

/**
 * @summary Initiates a workflow task for automated media processing based on a workflow template.
 *
 * @description *   You must specify a workflow template. To create one, go to the [Intelligent Media Services (IMS)](https://ims.console.aliyun.com/ai-workflow/template) console.
 *
 * @param request StartAIWorkflowRequest
 * @return StartAIWorkflowResponse
 */
StartAIWorkflowResponse Client::startAIWorkflow(const StartAIWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startAIWorkflowWithOptions(request, runtime);
}

/**
 * @summary Starts a channel.
 *
 * @param request StartChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartChannelResponse
 */
StartChannelResponse Client::startChannelWithOptions(const StartChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.channelName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartChannel"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartChannelResponse>();
}

/**
 * @summary Starts a channel.
 *
 * @param request StartChannelRequest
 * @return StartChannelResponse
 */
StartChannelResponse Client::startChannel(const StartChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startChannelWithOptions(request, runtime);
}

/**
 * @summary Starts a MediaLive channel.
 *
 * @description *   You can call this operation only when the channel is idle. You cannot start a channel repeatedly.
 * ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request StartMediaLiveChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartMediaLiveChannelResponse
 */
StartMediaLiveChannelResponse Client::startMediaLiveChannelWithOptions(const StartMediaLiveChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannelId()) {
    body["ChannelId"] = request.channelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StartMediaLiveChannel"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartMediaLiveChannelResponse>();
}

/**
 * @summary Starts a MediaLive channel.
 *
 * @description *   You can call this operation only when the channel is idle. You cannot start a channel repeatedly.
 * ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you will experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request StartMediaLiveChannelRequest
 * @return StartMediaLiveChannelResponse
 */
StartMediaLiveChannelResponse Client::startMediaLiveChannel(const StartMediaLiveChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startMediaLiveChannelWithOptions(request, runtime);
}

/**
 * @summary 开启一个机器人实例
 *
 * @param tmpReq StartRtcRobotInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartRtcRobotInstanceResponse
 */
StartRtcRobotInstanceResponse Client::startRtcRobotInstanceWithOptions(const StartRtcRobotInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartRtcRobotInstanceShrinkRequest request = StartRtcRobotInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfig()) {
    request.setConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.config(), "Config", "json"));
  }

  json query = {};
  if (!!request.hasAuthToken()) {
    query["AuthToken"] = request.authToken();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasConfigShrink()) {
    query["Config"] = request.configShrink();
  }

  if (!!request.hasRobotId()) {
    query["RobotId"] = request.robotId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartRtcRobotInstance"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartRtcRobotInstanceResponse>();
}

/**
 * @summary 开启一个机器人实例
 *
 * @param request StartRtcRobotInstanceRequest
 * @return StartRtcRobotInstanceResponse
 */
StartRtcRobotInstanceResponse Client::startRtcRobotInstance(const StartRtcRobotInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startRtcRobotInstanceWithOptions(request, runtime);
}

/**
 * @summary Submits a workflow task. You can submit a workflow task to implement automated media processing based on a workflow template.
 *
 * @description *   Only media assets from Intelligent Media Services (IMS) or ApsaraVideo VOD can be used as the input of a workflow.
 * *   When you submit a workflow task, you must specify a workflow template. You can create a workflow template in the [IMS console](https://ims.console.aliyun.com/settings/workflow/list) or use a preset workflow template.
 *
 * @param request StartWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartWorkflowResponse
 */
StartWorkflowResponse Client::startWorkflowWithOptions(const StartWorkflowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSkipInputVerification()) {
    query["SkipInputVerification"] = request.skipInputVerification();
  }

  if (!!request.hasTaskInput()) {
    query["TaskInput"] = request.taskInput();
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
    {"action" , "StartWorkflow"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartWorkflowResponse>();
}

/**
 * @summary Submits a workflow task. You can submit a workflow task to implement automated media processing based on a workflow template.
 *
 * @description *   Only media assets from Intelligent Media Services (IMS) or ApsaraVideo VOD can be used as the input of a workflow.
 * *   When you submit a workflow task, you must specify a workflow template. You can create a workflow template in the [IMS console](https://ims.console.aliyun.com/settings/workflow/list) or use a preset workflow template.
 *
 * @param request StartWorkflowRequest
 * @return StartWorkflowResponse
 */
StartWorkflowResponse Client::startWorkflow(const StartWorkflowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startWorkflowWithOptions(request, runtime);
}

/**
 * @summary Stops an AI agent instance.
 *
 * @description *   When you no longer need an AI agent to participate in a conversation or task, you can call this operation to stop the running agent and release relevant resources.****
 * *   You must specify the unique ID of the AI agent that you want to stop by using InstanceId.****
 * *   ****
 *
 * @param request StopAIAgentInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAIAgentInstanceResponse
 */
StopAIAgentInstanceResponse Client::stopAIAgentInstanceWithOptions(const StopAIAgentInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopAIAgentInstance"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopAIAgentInstanceResponse>();
}

/**
 * @summary Stops an AI agent instance.
 *
 * @description *   When you no longer need an AI agent to participate in a conversation or task, you can call this operation to stop the running agent and release relevant resources.****
 * *   You must specify the unique ID of the AI agent that you want to stop by using InstanceId.****
 * *   ****
 *
 * @param request StopAIAgentInstanceRequest
 * @return StopAIAgentInstanceResponse
 */
StopAIAgentInstanceResponse Client::stopAIAgentInstance(const StopAIAgentInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAIAgentInstanceWithOptions(request, runtime);
}

/**
 * @summary Manually stops a workflow task.
 *
 * @description This operation is only used to stop workflow tasks in real-time scenarios such as live streaming and RTC. It cannot be used to stop tasks in offline scenarios.
 *
 * @param request StopAIWorkflowTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAIWorkflowTaskResponse
 */
StopAIWorkflowTaskResponse Client::stopAIWorkflowTaskWithOptions(const StopAIWorkflowTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopAIWorkflowTask"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopAIWorkflowTaskResponse>();
}

/**
 * @summary Manually stops a workflow task.
 *
 * @description This operation is only used to stop workflow tasks in real-time scenarios such as live streaming and RTC. It cannot be used to stop tasks in offline scenarios.
 *
 * @param request StopAIWorkflowTaskRequest
 * @return StopAIWorkflowTaskResponse
 */
StopAIWorkflowTaskResponse Client::stopAIWorkflowTask(const StopAIWorkflowTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAIWorkflowTaskWithOptions(request, runtime);
}

/**
 * @summary Stops a MediaWeaver channel.
 *
 * @param request StopChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopChannelResponse
 */
StopChannelResponse Client::stopChannelWithOptions(const StopChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.channelName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopChannel"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopChannelResponse>();
}

/**
 * @summary Stops a MediaWeaver channel.
 *
 * @param request StopChannelRequest
 * @return StopChannelResponse
 */
StopChannelResponse Client::stopChannel(const StopChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopChannelWithOptions(request, runtime);
}

/**
 * @summary Stops a MediaLive channel.
 *
 * @description ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request StopMediaLiveChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopMediaLiveChannelResponse
 */
StopMediaLiveChannelResponse Client::stopMediaLiveChannelWithOptions(const StopMediaLiveChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannelId()) {
    body["ChannelId"] = request.channelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "StopMediaLiveChannel"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopMediaLiveChannelResponse>();
}

/**
 * @summary Stops a MediaLive channel.
 *
 * @description ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request StopMediaLiveChannelRequest
 * @return StopMediaLiveChannelResponse
 */
StopMediaLiveChannelResponse Client::stopMediaLiveChannel(const StopMediaLiveChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopMediaLiveChannelWithOptions(request, runtime);
}

/**
 * @summary 停止一个机器人实例
 *
 * @param request StopRtcRobotInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopRtcRobotInstanceResponse
 */
StopRtcRobotInstanceResponse Client::stopRtcRobotInstanceWithOptions(const StopRtcRobotInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopRtcRobotInstance"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopRtcRobotInstanceResponse>();
}

/**
 * @summary 停止一个机器人实例
 *
 * @param request StopRtcRobotInstanceRequest
 * @return StopRtcRobotInstanceResponse
 */
StopRtcRobotInstanceResponse Client::stopRtcRobotInstance(const StopRtcRobotInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopRtcRobotInstanceWithOptions(request, runtime);
}

/**
 * @summary Submits a video to a specified AI agent for content moderation. This operation supports video input from OSS and delivers the results asynchronously via callbacks. You can define custom frame-capturing policies and moderation prompts.
 *
 * @description Call SubmitAIAgentVideoAuditTask to submit a video moderation task with configurations such as a video URL, frame-capturing policies, and review interval. The system returns a unique JobId for tracking. When the task is complete, the service will push the results, including the moderation status and AI-generated analysis, to the configured callback URL. Only OSS URLs are supported as input. The underlying multi-modal large language model (MLLM) only supports interaction via the non-streaming OpenAI protocol.
 *
 * @param tmpReq SubmitAIAgentVideoAuditTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAIAgentVideoAuditTaskResponse
 */
SubmitAIAgentVideoAuditTaskResponse Client::submitAIAgentVideoAuditTaskWithOptions(const SubmitAIAgentVideoAuditTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitAIAgentVideoAuditTaskShrinkRequest request = SubmitAIAgentVideoAuditTaskShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCallbackConfig()) {
    request.setCallbackConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.callbackConfig(), "CallbackConfig", "json"));
  }

  if (!!tmpReq.hasCapturePolicies()) {
    request.setCapturePoliciesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.capturePolicies(), "CapturePolicies", "json"));
  }

  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  json query = {};
  if (!!request.hasAIAgentId()) {
    query["AIAgentId"] = request.AIAgentId();
  }

  if (!!request.hasAuditInterval()) {
    query["AuditInterval"] = request.auditInterval();
  }

  if (!!request.hasCallbackConfigShrink()) {
    query["CallbackConfig"] = request.callbackConfigShrink();
  }

  if (!!request.hasCapturePoliciesShrink()) {
    query["CapturePolicies"] = request.capturePoliciesShrink();
  }

  if (!!request.hasInputShrink()) {
    query["Input"] = request.inputShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitAIAgentVideoAuditTask"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAIAgentVideoAuditTaskResponse>();
}

/**
 * @summary Submits a video to a specified AI agent for content moderation. This operation supports video input from OSS and delivers the results asynchronously via callbacks. You can define custom frame-capturing policies and moderation prompts.
 *
 * @description Call SubmitAIAgentVideoAuditTask to submit a video moderation task with configurations such as a video URL, frame-capturing policies, and review interval. The system returns a unique JobId for tracking. When the task is complete, the service will push the results, including the moderation status and AI-generated analysis, to the configured callback URL. Only OSS URLs are supported as input. The underlying multi-modal large language model (MLLM) only supports interaction via the non-streaming OpenAI protocol.
 *
 * @param request SubmitAIAgentVideoAuditTaskRequest
 * @return SubmitAIAgentVideoAuditTaskResponse
 */
SubmitAIAgentVideoAuditTaskResponse Client::submitAIAgentVideoAuditTask(const SubmitAIAgentVideoAuditTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAIAgentVideoAuditTaskWithOptions(request, runtime);
}

/**
 * @summary Submits an automatic speech recognition (ASR) job to extract the start and end time and the corresponding text information of a speech in a video.
 *
 * @param request SubmitASRJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitASRJobResponse
 */
SubmitASRJobResponse Client::submitASRJobWithOptions(const SubmitASRJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.duration();
  }

  if (!!request.hasEditingConfig()) {
    query["EditingConfig"] = request.editingConfig();
  }

  if (!!request.hasInputFile()) {
    query["InputFile"] = request.inputFile();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
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
    {"action" , "SubmitASRJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitASRJobResponse>();
}

/**
 * @summary Submits an automatic speech recognition (ASR) job to extract the start and end time and the corresponding text information of a speech in a video.
 *
 * @param request SubmitASRJobRequest
 * @return SubmitASRJobResponse
 */
SubmitASRJobResponse Client::submitASRJob(const SubmitASRJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitASRJobWithOptions(request, runtime);
}

/**
 * @summary Submits an audio production job that converts text into an audio file.
 *
 * @param request SubmitAudioProduceJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAudioProduceJobResponse
 */
SubmitAudioProduceJobResponse Client::submitAudioProduceJobWithOptions(const SubmitAudioProduceJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEditingConfig()) {
    query["EditingConfig"] = request.editingConfig();
  }

  if (!!request.hasInputConfig()) {
    query["InputConfig"] = request.inputConfig();
  }

  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.outputConfig();
  }

  if (!!request.hasOverwrite()) {
    query["Overwrite"] = request.overwrite();
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
    {"action" , "SubmitAudioProduceJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAudioProduceJobResponse>();
}

/**
 * @summary Submits an audio production job that converts text into an audio file.
 *
 * @param request SubmitAudioProduceJobRequest
 * @return SubmitAudioProduceJobResponse
 */
SubmitAudioProduceJobResponse Client::submitAudioProduceJob(const SubmitAudioProduceJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAudioProduceJobWithOptions(request, runtime);
}

/**
 * @summary Submits a digital human training job. You can call this operation to submit a job the first time or submit a job again with updated parameters if the training failed.
 *
 * @param request SubmitAvatarTrainingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAvatarTrainingJobResponse
 */
SubmitAvatarTrainingJobResponse Client::submitAvatarTrainingJobWithOptions(const SubmitAvatarTrainingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitAvatarTrainingJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAvatarTrainingJobResponse>();
}

/**
 * @summary Submits a digital human training job. You can call this operation to submit a job the first time or submit a job again with updated parameters if the training failed.
 *
 * @param request SubmitAvatarTrainingJobRequest
 * @return SubmitAvatarTrainingJobResponse
 */
SubmitAvatarTrainingJobResponse Client::submitAvatarTrainingJob(const SubmitAvatarTrainingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAvatarTrainingJobWithOptions(request, runtime);
}

/**
 * @summary Submits a task to render a video of an avatar speaking the content of the specified text or a human voice audio file.
 *
 * @description - The input supports only text or a human voice audio file in MP3 or WAV format.
 * - The output supports MP4 and WebM formats. For the MP4 format, the task produces two videos: one with the avatar on a green screen background and a separate alpha mask video. This is ideal for post-production. For the WebM format, the task produces a single video with a transparent alpha channel, suitable for direct web front-end display. Rendering WebM is slower due to encoding complexity.
 * - The final output includes sentence-level timestamps, which are useful for subsequent video editing.
 *
 * @param request SubmitAvatarVideoJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitAvatarVideoJobResponse
 */
SubmitAvatarVideoJobResponse Client::submitAvatarVideoJobWithOptions(const SubmitAvatarVideoJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEditingConfig()) {
    query["EditingConfig"] = request.editingConfig();
  }

  if (!!request.hasInputConfig()) {
    query["InputConfig"] = request.inputConfig();
  }

  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.outputConfig();
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
    {"action" , "SubmitAvatarVideoJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitAvatarVideoJobResponse>();
}

/**
 * @summary Submits a task to render a video of an avatar speaking the content of the specified text or a human voice audio file.
 *
 * @description - The input supports only text or a human voice audio file in MP3 or WAV format.
 * - The output supports MP4 and WebM formats. For the MP4 format, the task produces two videos: one with the avatar on a green screen background and a separate alpha mask video. This is ideal for post-production. For the WebM format, the task produces a single video with a transparent alpha channel, suitable for direct web front-end display. Rendering WebM is slower due to encoding complexity.
 * - The final output includes sentence-level timestamps, which are useful for subsequent video editing.
 *
 * @param request SubmitAvatarVideoJobRequest
 * @return SubmitAvatarVideoJobResponse
 */
SubmitAvatarVideoJobResponse Client::submitAvatarVideoJob(const SubmitAvatarVideoJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitAvatarVideoJobWithOptions(request, runtime);
}

/**
 * @summary Submits a quick video production job that intelligently edits multiple video, audio, and image assets to generate multiple videos at a time.
 *
 * @param request SubmitBatchMediaProducingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitBatchMediaProducingJobResponse
 */
SubmitBatchMediaProducingJobResponse Client::submitBatchMediaProducingJobWithOptions(const SubmitBatchMediaProducingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.outputConfig();
  }

  if (!!request.hasTemplateConfig()) {
    query["TemplateConfig"] = request.templateConfig();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  json body = {};
  if (!!request.hasEditingConfig()) {
    body["EditingConfig"] = request.editingConfig();
  }

  if (!!request.hasInputConfig()) {
    body["InputConfig"] = request.inputConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitBatchMediaProducingJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitBatchMediaProducingJobResponse>();
}

/**
 * @summary Submits a quick video production job that intelligently edits multiple video, audio, and image assets to generate multiple videos at a time.
 *
 * @param request SubmitBatchMediaProducingJobRequest
 * @return SubmitBatchMediaProducingJobResponse
 */
SubmitBatchMediaProducingJobResponse Client::submitBatchMediaProducingJob(const SubmitBatchMediaProducingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitBatchMediaProducingJobWithOptions(request, runtime);
}

/**
 * @summary Submits a job that extracts a copyright watermark.
 *
 * @description *   This operation is supported only in the China (Shanghai) and China (Beijing) regions.
 *
 * @param tmpReq SubmitCopyrightExtractJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitCopyrightExtractJobResponse
 */
SubmitCopyrightExtractJobResponse Client::submitCopyrightExtractJobWithOptions(const SubmitCopyrightExtractJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitCopyrightExtractJobShrinkRequest request = SubmitCopyrightExtractJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  json query = {};
  if (!!request.hasInputShrink()) {
    query["Input"] = request.inputShrink();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitCopyrightExtractJob"},
    {"version" , "2020-11-09"},
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
 * @summary Submits a job that extracts a copyright watermark.
 *
 * @description *   This operation is supported only in the China (Shanghai) and China (Beijing) regions.
 *
 * @param request SubmitCopyrightExtractJobRequest
 * @return SubmitCopyrightExtractJobResponse
 */
SubmitCopyrightExtractJobResponse Client::submitCopyrightExtractJob(const SubmitCopyrightExtractJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitCopyrightExtractJobWithOptions(request, runtime);
}

/**
 * @summary Submits a job for adding a copyright watermark to a video.
 *
 * @description *   You can call this operation to add a copyright watermark to a video that lasts at least 3 minutes. If the video is too short, the call may fail, or no output may be returned. To add a copyright watermark to a video shorter than 3 minutes, specify the Params parameter to change the algorithm.
 * *   Each API call supports processing only one video.
 * *   This API is supported only in the China (Shanghai) and China (Beijing) regions.
 *
 * @param tmpReq SubmitCopyrightJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitCopyrightJobResponse
 */
SubmitCopyrightJobResponse Client::submitCopyrightJobWithOptions(const SubmitCopyrightJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitCopyrightJobShrinkRequest request = SubmitCopyrightJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  if (!!tmpReq.hasOutput()) {
    request.setOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.output(), "Output", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInputShrink()) {
    query["Input"] = request.inputShrink();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.level();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.message();
  }

  if (!!request.hasOutputShrink()) {
    query["Output"] = request.outputShrink();
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

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitCopyrightJob"},
    {"version" , "2020-11-09"},
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
 * @summary Submits a job for adding a copyright watermark to a video.
 *
 * @description *   You can call this operation to add a copyright watermark to a video that lasts at least 3 minutes. If the video is too short, the call may fail, or no output may be returned. To add a copyright watermark to a video shorter than 3 minutes, specify the Params parameter to change the algorithm.
 * *   Each API call supports processing only one video.
 * *   This API is supported only in the China (Shanghai) and China (Beijing) regions.
 *
 * @param request SubmitCopyrightJobRequest
 * @return SubmitCopyrightJobResponse
 */
SubmitCopyrightJobResponse Client::submitCopyrightJob(const SubmitCopyrightJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitCopyrightJobWithOptions(request, runtime);
}

/**
 * @summary Submits a human voice cloning job. The value of VoiceId must be the one used during audio check. The system uses this ID to find the cached audio file for training. After you call this operation, the JobId is returned. The training process is asynchronous. During training, you can call the GetCustomizedVoiceJob operation to query information such as the job state.
 *
 * @param request SubmitCustomizedVoiceJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitCustomizedVoiceJobResponse
 */
SubmitCustomizedVoiceJobResponse Client::submitCustomizedVoiceJobWithOptions(const SubmitCustomizedVoiceJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDemoAudioMediaURL()) {
    query["DemoAudioMediaURL"] = request.demoAudioMediaURL();
  }

  if (!!request.hasVoiceId()) {
    query["VoiceId"] = request.voiceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitCustomizedVoiceJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitCustomizedVoiceJobResponse>();
}

/**
 * @summary Submits a human voice cloning job. The value of VoiceId must be the one used during audio check. The system uses this ID to find the cached audio file for training. After you call this operation, the JobId is returned. The training process is asynchronous. During training, you can call the GetCustomizedVoiceJob operation to query information such as the job state.
 *
 * @param request SubmitCustomizedVoiceJobRequest
 * @return SubmitCustomizedVoiceJobResponse
 */
SubmitCustomizedVoiceJobResponse Client::submitCustomizedVoiceJob(const SubmitCustomizedVoiceJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitCustomizedVoiceJobWithOptions(request, runtime);
}

/**
 * @summary Submits a media fingerprint analysis job.
 *
 * @description *   SubmitDNAJob is an asynchronous operation. After a request is sent, the system returns a request ID and a job ID and runs the task in the background.
 * *   You can call this operation only in the China (Beijing), China (Hangzhou), and China (Shanghai) regions.
 * *   You can submit a text fingerprint analysis job only in the China (Shanghai) region.
 *
 * @param tmpReq SubmitDNAJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDNAJobResponse
 */
SubmitDNAJobResponse Client::submitDNAJobWithOptions(const SubmitDNAJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitDNAJobShrinkRequest request = SubmitDNAJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  json query = {};
  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasDBId()) {
    query["DBId"] = request.DBId();
  }

  if (!!request.hasInputShrink()) {
    query["Input"] = request.inputShrink();
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

  if (!!request.hasPrimaryKey()) {
    query["PrimaryKey"] = request.primaryKey();
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

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitDNAJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitDNAJobResponse>();
}

/**
 * @summary Submits a media fingerprint analysis job.
 *
 * @description *   SubmitDNAJob is an asynchronous operation. After a request is sent, the system returns a request ID and a job ID and runs the task in the background.
 * *   You can call this operation only in the China (Beijing), China (Hangzhou), and China (Shanghai) regions.
 * *   You can submit a text fingerprint analysis job only in the China (Shanghai) region.
 *
 * @param request SubmitDNAJobRequest
 * @return SubmitDNAJobResponse
 */
SubmitDNAJobResponse Client::submitDNAJob(const SubmitDNAJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDNAJobWithOptions(request, runtime);
}

/**
 * @summary Generates animated charts based on Excel datasheets, such as line, pie, and bar charts. You can modify the line color and font.
 *
 * @description This feature is available only in the China (Shanghai) region.
 * *   You can add a title, subtitle, data source, and unit to a chart and specify the font and font size. For supported fonts, see [Fonts](https://help.aliyun.com/document_detail/449567.html).
 * *   This feature provides five styles of animated charts: normal, mystery, lively, business, and green.
 * *   You can set the background color or image.
 * *   You can set the animation duration, size, and bitrate.
 * Examples
 * *   Line chart: [Sample datasheet](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/line.xlsx), [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/line.mp4)
 * *   Bar chart: [Sample datasheet](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/histgram.xlsx), [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/histgram.mp4)
 * *   Pie chart: [Sample datasheet](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/pie.xlsx), [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/pie.mp4)
 * *   Normal: [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Normal.mp4)
 * *   Mystery: [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Mystery.mp4)
 * *   Lively: [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Lively.mp4)
 * *   Business: [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Business.mp4)
 * *   Green: [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Green.mp4)
 *
 * @param request SubmitDynamicChartJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDynamicChartJobResponse
 */
SubmitDynamicChartJobResponse Client::submitDynamicChartJobWithOptions(const SubmitDynamicChartJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAxisParams()) {
    query["AxisParams"] = request.axisParams();
  }

  if (!!request.hasBackground()) {
    query["Background"] = request.background();
  }

  if (!!request.hasChartConfig()) {
    query["ChartConfig"] = request.chartConfig();
  }

  if (!!request.hasChartTitle()) {
    query["ChartTitle"] = request.chartTitle();
  }

  if (!!request.hasChartType()) {
    query["ChartType"] = request.chartType();
  }

  if (!!request.hasDataSource()) {
    query["DataSource"] = request.dataSource();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.input();
  }

  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.outputConfig();
  }

  if (!!request.hasSubtitle()) {
    query["Subtitle"] = request.subtitle();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  if (!!request.hasUnit()) {
    query["Unit"] = request.unit();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitDynamicChartJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitDynamicChartJobResponse>();
}

/**
 * @summary Generates animated charts based on Excel datasheets, such as line, pie, and bar charts. You can modify the line color and font.
 *
 * @description This feature is available only in the China (Shanghai) region.
 * *   You can add a title, subtitle, data source, and unit to a chart and specify the font and font size. For supported fonts, see [Fonts](https://help.aliyun.com/document_detail/449567.html).
 * *   This feature provides five styles of animated charts: normal, mystery, lively, business, and green.
 * *   You can set the background color or image.
 * *   You can set the animation duration, size, and bitrate.
 * Examples
 * *   Line chart: [Sample datasheet](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/line.xlsx), [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/line.mp4)
 * *   Bar chart: [Sample datasheet](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/histgram.xlsx), [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/histgram.mp4)
 * *   Pie chart: [Sample datasheet](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/pie.xlsx), [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/pie.mp4)
 * *   Normal: [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Normal.mp4)
 * *   Mystery: [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Mystery.mp4)
 * *   Lively: [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Lively.mp4)
 * *   Business: [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Business.mp4)
 * *   Green: [Effect](https://ice-public-media.oss-cn-shanghai.aliyuncs.com/smart/dynamicChart/Green.mp4)
 *
 * @param request SubmitDynamicChartJobRequest
 * @return SubmitDynamicChartJobResponse
 */
SubmitDynamicChartJobResponse Client::submitDynamicChartJob(const SubmitDynamicChartJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDynamicChartJobWithOptions(request, runtime);
}

/**
 * @summary Submits an image animation job.
 *
 * @param tmpReq SubmitDynamicImageJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitDynamicImageJobResponse
 */
SubmitDynamicImageJobResponse Client::submitDynamicImageJobWithOptions(const SubmitDynamicImageJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitDynamicImageJobShrinkRequest request = SubmitDynamicImageJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  if (!!tmpReq.hasOutput()) {
    request.setOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.output(), "Output", "json"));
  }

  if (!!tmpReq.hasScheduleConfig()) {
    request.setScheduleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.scheduleConfig(), "ScheduleConfig", "json"));
  }

  if (!!tmpReq.hasTemplateConfig()) {
    request.setTemplateConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.templateConfig(), "TemplateConfig", "json"));
  }

  json query = {};
  if (!!request.hasInputShrink()) {
    query["Input"] = request.inputShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOutputShrink()) {
    query["Output"] = request.outputShrink();
  }

  if (!!request.hasScheduleConfigShrink()) {
    query["ScheduleConfig"] = request.scheduleConfigShrink();
  }

  if (!!request.hasTemplateConfigShrink()) {
    query["TemplateConfig"] = request.templateConfigShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitDynamicImageJob"},
    {"version" , "2020-11-09"},
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
 * @summary Submits an image animation job.
 *
 * @param request SubmitDynamicImageJobRequest
 * @return SubmitDynamicImageJobResponse
 */
SubmitDynamicImageJobResponse Client::submitDynamicImageJob(const SubmitDynamicImageJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitDynamicImageJobWithOptions(request, runtime);
}

/**
 * @summary Submits a highlight extraction task.
 *
 * @param request SubmitHighlightExtractionJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitHighlightExtractionJobResponse
 */
SubmitHighlightExtractionJobResponse Client::submitHighlightExtractionJobWithOptions(const SubmitHighlightExtractionJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.outputConfig();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  json body = {};
  if (!!request.hasInputConfig()) {
    body["InputConfig"] = request.inputConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitHighlightExtractionJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitHighlightExtractionJobResponse>();
}

/**
 * @summary Submits a highlight extraction task.
 *
 * @param request SubmitHighlightExtractionJobRequest
 * @return SubmitHighlightExtractionJobResponse
 */
SubmitHighlightExtractionJobResponse Client::submitHighlightExtractionJob(const SubmitHighlightExtractionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitHighlightExtractionJobWithOptions(request, runtime);
}

/**
 * @summary Submits an intelligent production job.
 *
 * @param tmpReq SubmitIProductionJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitIProductionJobResponse
 */
SubmitIProductionJobResponse Client::submitIProductionJobWithOptions(const SubmitIProductionJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitIProductionJobShrinkRequest request = SubmitIProductionJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  if (!!tmpReq.hasOutput()) {
    request.setOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.output(), "Output", "json"));
  }

  if (!!tmpReq.hasScheduleConfig()) {
    request.setScheduleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.scheduleConfig(), "ScheduleConfig", "json"));
  }

  json query = {};
  if (!!request.hasFunctionName()) {
    query["FunctionName"] = request.functionName();
  }

  if (!!request.hasInputShrink()) {
    query["Input"] = request.inputShrink();
  }

  if (!!request.hasJobParams()) {
    query["JobParams"] = request.jobParams();
  }

  if (!!request.hasModelId()) {
    query["ModelId"] = request.modelId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOutputShrink()) {
    query["Output"] = request.outputShrink();
  }

  if (!!request.hasScheduleConfigShrink()) {
    query["ScheduleConfig"] = request.scheduleConfigShrink();
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
    {"action" , "SubmitIProductionJob"},
    {"version" , "2020-11-09"},
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
 * @summary Submits an intelligent production job.
 *
 * @param request SubmitIProductionJobRequest
 * @return SubmitIProductionJobResponse
 */
SubmitIProductionJobResponse Client::submitIProductionJob(const SubmitIProductionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitIProductionJobWithOptions(request, runtime);
}

/**
 * @summary Submits a live editing job to merge one or more live stream clips into one video. After a live editing job is submitted, the job is queued in the background for asynchronous processing. You can call the GeLiveEditingJob operation to query the state of the job based on the job ID. You can also call the GetMediaInfo operation to query the information about the generated media asset based on the media asset ID.
 *
 * @description Live editing is supported for live streams that are recorded and stored in Object Storage Service (OSS) and ApsaraVideo VOD. If multiple live streams are involved in a single job, only those recorded within the same application are supported for mixed editing. The streams must all be recorded either in OSS or ApsaraVideo VOD.
 *
 * @param request SubmitLiveEditingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitLiveEditingJobResponse
 */
SubmitLiveEditingJobResponse Client::submitLiveEditingJobWithOptions(const SubmitLiveEditingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClips()) {
    query["Clips"] = request.clips();
  }

  if (!!request.hasLiveStreamConfig()) {
    query["LiveStreamConfig"] = request.liveStreamConfig();
  }

  if (!!request.hasMediaProduceConfig()) {
    query["MediaProduceConfig"] = request.mediaProduceConfig();
  }

  if (!!request.hasOutputMediaConfig()) {
    query["OutputMediaConfig"] = request.outputMediaConfig();
  }

  if (!!request.hasOutputMediaTarget()) {
    query["OutputMediaTarget"] = request.outputMediaTarget();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitLiveEditingJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitLiveEditingJobResponse>();
}

/**
 * @summary Submits a live editing job to merge one or more live stream clips into one video. After a live editing job is submitted, the job is queued in the background for asynchronous processing. You can call the GeLiveEditingJob operation to query the state of the job based on the job ID. You can also call the GetMediaInfo operation to query the information about the generated media asset based on the media asset ID.
 *
 * @description Live editing is supported for live streams that are recorded and stored in Object Storage Service (OSS) and ApsaraVideo VOD. If multiple live streams are involved in a single job, only those recorded within the same application are supported for mixed editing. The streams must all be recorded either in OSS or ApsaraVideo VOD.
 *
 * @param request SubmitLiveEditingJobRequest
 * @return SubmitLiveEditingJobResponse
 */
SubmitLiveEditingJobResponse Client::submitLiveEditingJob(const SubmitLiveEditingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitLiveEditingJobWithOptions(request, runtime);
}

/**
 * @summary Submits a live stream recording job.
 *
 * @description You can call this operation to record live streams of ApsaraVideo Live or third-party Real-Time Messaging Protocol (RTMP) live streams. We recommend that you ingest a stream before you call this operation to submit a recording job. If no stream is pulled from the streaming URL, the job attempts to pull a stream for 3 minutes. If the attempt times out, the recording service stops.
 * Before you submit a recording job, you must prepare an Object Storage Service (OSS) or ApsaraVideo VOD bucket. We recommend that you use a storage address configured in Intelligent Media Services (IMS) to facilitate the management and processing of generated recording files.
 * If the preset recording template does not meet your requirements, you can create a custom recording template.
 *
 * @param tmpReq SubmitLiveRecordJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitLiveRecordJobResponse
 */
SubmitLiveRecordJobResponse Client::submitLiveRecordJobWithOptions(const SubmitLiveRecordJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitLiveRecordJobShrinkRequest request = SubmitLiveRecordJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRecordOutput()) {
    request.setRecordOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.recordOutput(), "RecordOutput", "json"));
  }

  if (!!tmpReq.hasStreamInput()) {
    request.setStreamInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.streamInput(), "StreamInput", "json"));
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasNotifyUrl()) {
    body["NotifyUrl"] = request.notifyUrl();
  }

  if (!!request.hasRecordOutputShrink()) {
    body["RecordOutput"] = request.recordOutputShrink();
  }

  if (!!request.hasStreamInputShrink()) {
    body["StreamInput"] = request.streamInputShrink();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitLiveRecordJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitLiveRecordJobResponse>();
}

/**
 * @summary Submits a live stream recording job.
 *
 * @description You can call this operation to record live streams of ApsaraVideo Live or third-party Real-Time Messaging Protocol (RTMP) live streams. We recommend that you ingest a stream before you call this operation to submit a recording job. If no stream is pulled from the streaming URL, the job attempts to pull a stream for 3 minutes. If the attempt times out, the recording service stops.
 * Before you submit a recording job, you must prepare an Object Storage Service (OSS) or ApsaraVideo VOD bucket. We recommend that you use a storage address configured in Intelligent Media Services (IMS) to facilitate the management and processing of generated recording files.
 * If the preset recording template does not meet your requirements, you can create a custom recording template.
 *
 * @param request SubmitLiveRecordJobRequest
 * @return SubmitLiveRecordJobResponse
 */
SubmitLiveRecordJobResponse Client::submitLiveRecordJob(const SubmitLiveRecordJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitLiveRecordJobWithOptions(request, runtime);
}

/**
 * @summary Submits a live stream snapshot job. If the job is submitted during stream ingest, it automatically starts in asynchronous mode. Otherwise, it does not start.
 *
 * @param tmpReq SubmitLiveSnapshotJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitLiveSnapshotJobResponse
 */
SubmitLiveSnapshotJobResponse Client::submitLiveSnapshotJobWithOptions(const SubmitLiveSnapshotJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitLiveSnapshotJobShrinkRequest request = SubmitLiveSnapshotJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSnapshotOutput()) {
    request.setSnapshotOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.snapshotOutput(), "SnapshotOutput", "json"));
  }

  if (!!tmpReq.hasStreamInput()) {
    request.setStreamInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.streamInput(), "StreamInput", "json"));
  }

  json body = {};
  if (!!request.hasCallbackUrl()) {
    body["CallbackUrl"] = request.callbackUrl();
  }

  if (!!request.hasJobName()) {
    body["JobName"] = request.jobName();
  }

  if (!!request.hasSnapshotOutputShrink()) {
    body["SnapshotOutput"] = request.snapshotOutputShrink();
  }

  if (!!request.hasStreamInputShrink()) {
    body["StreamInput"] = request.streamInputShrink();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SubmitLiveSnapshotJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitLiveSnapshotJobResponse>();
}

/**
 * @summary Submits a live stream snapshot job. If the job is submitted during stream ingest, it automatically starts in asynchronous mode. Otherwise, it does not start.
 *
 * @param request SubmitLiveSnapshotJobRequest
 * @return SubmitLiveSnapshotJobResponse
 */
SubmitLiveSnapshotJobResponse Client::submitLiveSnapshotJob(const SubmitLiveSnapshotJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitLiveSnapshotJobWithOptions(request, runtime);
}

/**
 * @summary Submits a live stream transcoding job.
 *
 * @description *   When you submit a transcoding job that immediately takes effect, make sure that the input stream can be streamed.
 * *   When you submit a timed transcoding job, make sure that the input stream can be streamed before the specified time.
 *
 * @param tmpReq SubmitLiveTranscodeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitLiveTranscodeJobResponse
 */
SubmitLiveTranscodeJobResponse Client::submitLiveTranscodeJobWithOptions(const SubmitLiveTranscodeJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitLiveTranscodeJobShrinkRequest request = SubmitLiveTranscodeJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStreamInput()) {
    request.setStreamInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.streamInput(), "StreamInput", "json"));
  }

  if (!!tmpReq.hasTimedConfig()) {
    request.setTimedConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.timedConfig(), "TimedConfig", "json"));
  }

  if (!!tmpReq.hasTranscodeOutput()) {
    request.setTranscodeOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.transcodeOutput(), "TranscodeOutput", "json"));
  }

  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasStartMode()) {
    query["StartMode"] = request.startMode();
  }

  if (!!request.hasStreamInputShrink()) {
    query["StreamInput"] = request.streamInputShrink();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTimedConfigShrink()) {
    query["TimedConfig"] = request.timedConfigShrink();
  }

  if (!!request.hasTranscodeOutputShrink()) {
    query["TranscodeOutput"] = request.transcodeOutputShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitLiveTranscodeJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitLiveTranscodeJobResponse>();
}

/**
 * @summary Submits a live stream transcoding job.
 *
 * @description *   When you submit a transcoding job that immediately takes effect, make sure that the input stream can be streamed.
 * *   When you submit a timed transcoding job, make sure that the input stream can be streamed before the specified time.
 *
 * @param request SubmitLiveTranscodeJobRequest
 * @return SubmitLiveTranscodeJobResponse
 */
SubmitLiveTranscodeJobResponse Client::submitLiveTranscodeJob(const SubmitLiveTranscodeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitLiveTranscodeJobWithOptions(request, runtime);
}

/**
 * @summary Submits a structural analysis job for a media asset. For example, you can submit a job to analyze the speaker, translate the video, and obtain the paragraph summary.
 *
 * @param request SubmitMediaAiAnalysisJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitMediaAiAnalysisJobResponse
 */
SubmitMediaAiAnalysisJobResponse Client::submitMediaAiAnalysisJobWithOptions(const SubmitMediaAiAnalysisJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAnalysisParams()) {
    query["AnalysisParams"] = request.analysisParams();
  }

  if (!!request.hasInput()) {
    query["Input"] = request.input();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitMediaAiAnalysisJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitMediaAiAnalysisJobResponse>();
}

/**
 * @summary Submits a structural analysis job for a media asset. For example, you can submit a job to analyze the speaker, translate the video, and obtain the paragraph summary.
 *
 * @param request SubmitMediaAiAnalysisJobRequest
 * @return SubmitMediaAiAnalysisJobResponse
 */
SubmitMediaAiAnalysisJobResponse Client::submitMediaAiAnalysisJob(const SubmitMediaAiAnalysisJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitMediaAiAnalysisJobWithOptions(request, runtime);
}

/**
 * @summary Submits a content moderation job.
 *
 * @description The job that you submit by calling this operation is run in asynchronous mode. The job is added to an ApsaraVideo Media Processing (MPS) queue to be scheduled and run. You can call the [QueryMediaCensorJobDetail](https://help.aliyun.com/document_detail/444847.html) operation or configure an asynchronous notification to obtain the job results.
 *
 * @param tmpReq SubmitMediaCensorJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitMediaCensorJobResponse
 */
SubmitMediaCensorJobResponse Client::submitMediaCensorJobWithOptions(const SubmitMediaCensorJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitMediaCensorJobShrinkRequest request = SubmitMediaCensorJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  if (!!tmpReq.hasScheduleConfig()) {
    request.setScheduleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.scheduleConfig(), "ScheduleConfig", "json"));
  }

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

  if (!!request.hasInputShrink()) {
    query["Input"] = request.inputShrink();
  }

  if (!!request.hasNotifyUrl()) {
    query["NotifyUrl"] = request.notifyUrl();
  }

  if (!!request.hasOutput()) {
    query["Output"] = request.output();
  }

  if (!!request.hasScheduleConfigShrink()) {
    query["ScheduleConfig"] = request.scheduleConfigShrink();
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
    {"action" , "SubmitMediaCensorJob"},
    {"version" , "2020-11-09"},
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
 * @description The job that you submit by calling this operation is run in asynchronous mode. The job is added to an ApsaraVideo Media Processing (MPS) queue to be scheduled and run. You can call the [QueryMediaCensorJobDetail](https://help.aliyun.com/document_detail/444847.html) operation or configure an asynchronous notification to obtain the job results.
 *
 * @param request SubmitMediaCensorJobRequest
 * @return SubmitMediaCensorJobResponse
 */
SubmitMediaCensorJobResponse Client::submitMediaCensorJob(const SubmitMediaCensorJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitMediaCensorJobWithOptions(request, runtime);
}

/**
 * @summary Submits a transcoding task.
 *
 * @param request SubmitMediaConvertJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitMediaConvertJobResponse
 */
SubmitMediaConvertJobResponse Client::submitMediaConvertJobWithOptions(const SubmitMediaConvertJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConfig()) {
    query["Config"] = request.config();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitMediaConvertJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitMediaConvertJobResponse>();
}

/**
 * @summary Submits a transcoding task.
 *
 * @param request SubmitMediaConvertJobRequest
 * @return SubmitMediaConvertJobResponse
 */
SubmitMediaConvertJobResponse Client::submitMediaConvertJob(const SubmitMediaConvertJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitMediaConvertJobWithOptions(request, runtime);
}

/**
 * @summary Submits a media information analysis job in asynchronous mode.
 *
 * @description You can call this operation to analyze an input media file by using a callback mechanism or initiating subsequent queries. This operation is suitable for scenarios in which real-time performance is less critical and high concurrency is expected.
 *
 * @param tmpReq SubmitMediaInfoJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitMediaInfoJobResponse
 */
SubmitMediaInfoJobResponse Client::submitMediaInfoJobWithOptions(const SubmitMediaInfoJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitMediaInfoJobShrinkRequest request = SubmitMediaInfoJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  if (!!tmpReq.hasScheduleConfig()) {
    request.setScheduleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.scheduleConfig(), "ScheduleConfig", "json"));
  }

  json query = {};
  if (!!request.hasInputShrink()) {
    query["Input"] = request.inputShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasScheduleConfigShrink()) {
    query["ScheduleConfig"] = request.scheduleConfigShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitMediaInfoJob"},
    {"version" , "2020-11-09"},
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
 * @summary Submits a media information analysis job in asynchronous mode.
 *
 * @description You can call this operation to analyze an input media file by using a callback mechanism or initiating subsequent queries. This operation is suitable for scenarios in which real-time performance is less critical and high concurrency is expected.
 *
 * @param request SubmitMediaInfoJobRequest
 * @return SubmitMediaInfoJobResponse
 */
SubmitMediaInfoJobResponse Client::submitMediaInfoJob(const SubmitMediaInfoJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitMediaInfoJobWithOptions(request, runtime);
}

/**
 * @summary Submits a media editing and production job. If you need to perform any form of post-production such as editing and production on video or audio materials, you can call this operation to automate the process.
 *
 * @description *   This operation returns only the submission result of a media editing and production job. When the submission result is returned, the job may still be in progress. After a media editing and production job is submitted, the job is queued in the background for asynchronous processing.
 * *   The materials referenced in the timeline of an online editing project can be media assets in the media asset library or Object Storage Service (OSS) objects. External URLs or Alibaba Cloud Content Delivery Network (CDN) URLs are not supported. To use an OSS object as a material, you must set MediaUrl to an OSS URL, such as https://your-bucket.oss-region-name.aliyuncs.com/your-object.ext.
 * *   After the production is complete, the output file is automatically registered as a media asset. The media asset first needs to be analyzed. After the media asset is analyzed, you can query the duration and resolution information based on the media asset ID.
 * ## [](#)Limits
 * *   The throttling threshold of this operation is 30 queries per second (QPS).
 *     **
 *     **Note** If the threshold is exceeded, a "Throttling.User" error is returned when you submit an editing job. For more information about how to resolve this issue, see the [FAQ](https://help.aliyun.com/document_detail/453484.html).
 * *   You can create up to 100 video tracks, 100 image tracks, and 100 subtitle tracks in a project.
 * *   The total size of material files cannot exceed 1 TB.
 * *   The OSS buckets in which the materials reside and where the output media assets are stored must be in the same region as the region in which Intelligent Media Services (IMS) is activated.
 * *   An output video must meet the following requirements:
 *     *   Both the width and height must be at least 128 pixels.
 *     *   Both the width and height cannot exceed 4,096 pixels.
 *     *   The shorter side of the video cannot exceed 2,160 pixels.
 *
 * @param request SubmitMediaProducingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitMediaProducingJobResponse
 */
SubmitMediaProducingJobResponse Client::submitMediaProducingJobWithOptions(const SubmitMediaProducingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasClipsParam()) {
    query["ClipsParam"] = request.clipsParam();
  }

  if (!!request.hasEditingProduceConfig()) {
    query["EditingProduceConfig"] = request.editingProduceConfig();
  }

  if (!!request.hasMediaMetadata()) {
    query["MediaMetadata"] = request.mediaMetadata();
  }

  if (!!request.hasOutputMediaConfig()) {
    query["OutputMediaConfig"] = request.outputMediaConfig();
  }

  if (!!request.hasOutputMediaTarget()) {
    query["OutputMediaTarget"] = request.outputMediaTarget();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasProjectMetadata()) {
    query["ProjectMetadata"] = request.projectMetadata();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  json body = {};
  if (!!request.hasTimeline()) {
    body["Timeline"] = request.timeline();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitMediaProducingJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitMediaProducingJobResponse>();
}

/**
 * @summary Submits a media editing and production job. If you need to perform any form of post-production such as editing and production on video or audio materials, you can call this operation to automate the process.
 *
 * @description *   This operation returns only the submission result of a media editing and production job. When the submission result is returned, the job may still be in progress. After a media editing and production job is submitted, the job is queued in the background for asynchronous processing.
 * *   The materials referenced in the timeline of an online editing project can be media assets in the media asset library or Object Storage Service (OSS) objects. External URLs or Alibaba Cloud Content Delivery Network (CDN) URLs are not supported. To use an OSS object as a material, you must set MediaUrl to an OSS URL, such as https://your-bucket.oss-region-name.aliyuncs.com/your-object.ext.
 * *   After the production is complete, the output file is automatically registered as a media asset. The media asset first needs to be analyzed. After the media asset is analyzed, you can query the duration and resolution information based on the media asset ID.
 * ## [](#)Limits
 * *   The throttling threshold of this operation is 30 queries per second (QPS).
 *     **
 *     **Note** If the threshold is exceeded, a "Throttling.User" error is returned when you submit an editing job. For more information about how to resolve this issue, see the [FAQ](https://help.aliyun.com/document_detail/453484.html).
 * *   You can create up to 100 video tracks, 100 image tracks, and 100 subtitle tracks in a project.
 * *   The total size of material files cannot exceed 1 TB.
 * *   The OSS buckets in which the materials reside and where the output media assets are stored must be in the same region as the region in which Intelligent Media Services (IMS) is activated.
 * *   An output video must meet the following requirements:
 *     *   Both the width and height must be at least 128 pixels.
 *     *   Both the width and height cannot exceed 4,096 pixels.
 *     *   The shorter side of the video cannot exceed 2,160 pixels.
 *
 * @param request SubmitMediaProducingJobRequest
 * @return SubmitMediaProducingJobResponse
 */
SubmitMediaProducingJobResponse Client::submitMediaProducingJob(const SubmitMediaProducingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitMediaProducingJobWithOptions(request, runtime);
}

/**
 * @summary Submits a packaging job.
 *
 * @param tmpReq SubmitPackageJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitPackageJobResponse
 */
SubmitPackageJobResponse Client::submitPackageJobWithOptions(const SubmitPackageJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitPackageJobShrinkRequest request = SubmitPackageJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInputs()) {
    request.setInputsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.inputs(), "Inputs", "json"));
  }

  if (!!tmpReq.hasOutput()) {
    request.setOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.output(), "Output", "json"));
  }

  if (!!tmpReq.hasScheduleConfig()) {
    request.setScheduleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.scheduleConfig(), "ScheduleConfig", "json"));
  }

  json query = {};
  if (!!request.hasInputsShrink()) {
    query["Inputs"] = request.inputsShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOutputShrink()) {
    query["Output"] = request.outputShrink();
  }

  if (!!request.hasScheduleConfigShrink()) {
    query["ScheduleConfig"] = request.scheduleConfigShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitPackageJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitPackageJobResponse>();
}

/**
 * @summary Submits a packaging job.
 *
 * @param request SubmitPackageJobRequest
 * @return SubmitPackageJobResponse
 */
SubmitPackageJobResponse Client::submitPackageJob(const SubmitPackageJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitPackageJobWithOptions(request, runtime);
}

/**
 * @summary Submits a project export task.
 *
 * @param request SubmitProjectExportJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitProjectExportJobResponse
 */
SubmitProjectExportJobResponse Client::submitProjectExportJobWithOptions(const SubmitProjectExportJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExportType()) {
    query["ExportType"] = request.exportType();
  }

  if (!!request.hasOutputMediaConfig()) {
    query["OutputMediaConfig"] = request.outputMediaConfig();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  json body = {};
  if (!!request.hasTimeline()) {
    body["Timeline"] = request.timeline();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitProjectExportJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitProjectExportJobResponse>();
}

/**
 * @summary Submits a project export task.
 *
 * @param request SubmitProjectExportJobRequest
 * @return SubmitProjectExportJobResponse
 */
SubmitProjectExportJobResponse Client::submitProjectExportJob(const SubmitProjectExportJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitProjectExportJobWithOptions(request, runtime);
}

/**
 * @summary Selects suitable clips based on the submitted videos, images, and voiceovers, and returns the selection results. Two scenarios are supported: image-text matching and highlight mashup.
 *
 * @description *   After a job is submitted, you can call [ListBatchMediaProducingJob](https://help.aliyun.com/document_detail/2803751.html) to query submitted jobs, or [GetBatchMediaProducingJob](https://help.aliyun.com/document_detail/2693269.html) to query the job status and results.
 * - The feature is in public preview and charges no fees.
 *
 * @param request SubmitSceneMediaSelectionJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSceneMediaSelectionJobResponse
 */
SubmitSceneMediaSelectionJobResponse Client::submitSceneMediaSelectionJobWithOptions(const SubmitSceneMediaSelectionJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobType()) {
    query["JobType"] = request.jobType();
  }

  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.outputConfig();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  json body = {};
  if (!!request.hasEditingConfig()) {
    body["EditingConfig"] = request.editingConfig();
  }

  if (!!request.hasInputConfig()) {
    body["InputConfig"] = request.inputConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitSceneMediaSelectionJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSceneMediaSelectionJobResponse>();
}

/**
 * @summary Selects suitable clips based on the submitted videos, images, and voiceovers, and returns the selection results. Two scenarios are supported: image-text matching and highlight mashup.
 *
 * @description *   After a job is submitted, you can call [ListBatchMediaProducingJob](https://help.aliyun.com/document_detail/2803751.html) to query submitted jobs, or [GetBatchMediaProducingJob](https://help.aliyun.com/document_detail/2693269.html) to query the job status and results.
 * - The feature is in public preview and charges no fees.
 *
 * @param request SubmitSceneMediaSelectionJobRequest
 * @return SubmitSceneMediaSelectionJobResponse
 */
SubmitSceneMediaSelectionJobResponse Client::submitSceneMediaSelectionJob(const SubmitSceneMediaSelectionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSceneMediaSelectionJobWithOptions(request, runtime);
}

/**
 * @summary Submits a task to automatically recognize the highlight segments in the video input and compile them into a dramatic and engaging clip.
 *
 * @param request SubmitScreenMediaHighlightsJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitScreenMediaHighlightsJobResponse
 */
SubmitScreenMediaHighlightsJobResponse Client::submitScreenMediaHighlightsJobWithOptions(const SubmitScreenMediaHighlightsJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.outputConfig();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  json body = {};
  if (!!request.hasEditingConfig()) {
    body["EditingConfig"] = request.editingConfig();
  }

  if (!!request.hasInputConfig()) {
    body["InputConfig"] = request.inputConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitScreenMediaHighlightsJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitScreenMediaHighlightsJobResponse>();
}

/**
 * @summary Submits a task to automatically recognize the highlight segments in the video input and compile them into a dramatic and engaging clip.
 *
 * @param request SubmitScreenMediaHighlightsJobRequest
 * @return SubmitScreenMediaHighlightsJobResponse
 */
SubmitScreenMediaHighlightsJobResponse Client::submitScreenMediaHighlightsJob(const SubmitScreenMediaHighlightsJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitScreenMediaHighlightsJobWithOptions(request, runtime);
}

/**
 * @summary Splits a long video into multiple video clips and outputs as video files or media assets.
 *
 * @param request SubmitSegmentationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSegmentationJobResponse
 */
SubmitSegmentationJobResponse Client::submitSegmentationJobWithOptions(const SubmitSegmentationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasJobParams()) {
    query["JobParams"] = request.jobParams();
  }

  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.outputConfig();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  json body = {};
  if (!!request.hasInputConfig()) {
    body["InputConfig"] = request.inputConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitSegmentationJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSegmentationJobResponse>();
}

/**
 * @summary Splits a long video into multiple video clips and outputs as video files or media assets.
 *
 * @param request SubmitSegmentationJobRequest
 * @return SubmitSegmentationJobResponse
 */
SubmitSegmentationJobResponse Client::submitSegmentationJob(const SubmitSegmentationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSegmentationJobWithOptions(request, runtime);
}

/**
 * @summary Submits a smart tagging job.
 *
 * @description Before you call this operation to submit a smart tagging job, you must add a smart tagging template and specify the analysis types that you want to use in the template. For more information, see CreateCustomTemplate. You can use the smart tagging feature only in the China (Beijing), China (Shanghai), and China (Hangzhou) regions. By default, an ApsaraVideo Media Processing (MPS) queue can process a maximum of two concurrent smart tagging jobs. If you need to process more concurrent smart tagging jobs, submit a ticket to contact Alibaba Cloud Technical Support for evaluation and configuration.
 *
 * @param tmpReq SubmitSmarttagJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSmarttagJobResponse
 */
SubmitSmarttagJobResponse Client::submitSmarttagJobWithOptions(const SubmitSmarttagJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitSmarttagJobShrinkRequest request = SubmitSmarttagJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  if (!!tmpReq.hasScheduleConfig()) {
    request.setScheduleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.scheduleConfig(), "ScheduleConfig", "json"));
  }

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

  if (!!request.hasInputShrink()) {
    query["Input"] = request.inputShrink();
  }

  if (!!request.hasNotifyUrl()) {
    query["NotifyUrl"] = request.notifyUrl();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  if (!!request.hasScheduleConfigShrink()) {
    query["ScheduleConfig"] = request.scheduleConfigShrink();
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
    {"version" , "2020-11-09"},
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
 * @summary Submits a smart tagging job.
 *
 * @description Before you call this operation to submit a smart tagging job, you must add a smart tagging template and specify the analysis types that you want to use in the template. For more information, see CreateCustomTemplate. You can use the smart tagging feature only in the China (Beijing), China (Shanghai), and China (Hangzhou) regions. By default, an ApsaraVideo Media Processing (MPS) queue can process a maximum of two concurrent smart tagging jobs. If you need to process more concurrent smart tagging jobs, submit a ticket to contact Alibaba Cloud Technical Support for evaluation and configuration.
 *
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
 * @param tmpReq SubmitSnapshotJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSnapshotJobResponse
 */
SubmitSnapshotJobResponse Client::submitSnapshotJobWithOptions(const SubmitSnapshotJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitSnapshotJobShrinkRequest request = SubmitSnapshotJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  if (!!tmpReq.hasOutput()) {
    request.setOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.output(), "Output", "json"));
  }

  if (!!tmpReq.hasScheduleConfig()) {
    request.setScheduleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.scheduleConfig(), "ScheduleConfig", "json"));
  }

  if (!!tmpReq.hasTemplateConfig()) {
    request.setTemplateConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.templateConfig(), "TemplateConfig", "json"));
  }

  json query = {};
  if (!!request.hasInputShrink()) {
    query["Input"] = request.inputShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOutputShrink()) {
    query["Output"] = request.outputShrink();
  }

  if (!!request.hasScheduleConfigShrink()) {
    query["ScheduleConfig"] = request.scheduleConfigShrink();
  }

  if (!!request.hasTemplateConfigShrink()) {
    query["TemplateConfig"] = request.templateConfigShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitSnapshotJob"},
    {"version" , "2020-11-09"},
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
 * @param request SubmitSnapshotJobRequest
 * @return SubmitSnapshotJobResponse
 */
SubmitSnapshotJobResponse Client::submitSnapshotJob(const SubmitSnapshotJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSnapshotJobWithOptions(request, runtime);
}

/**
 * @summary Submits a sports highlights job to generate a highlights video of an event based on event materials that contain commentary.
 *
 * @param request SubmitSportsHighlightsJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSportsHighlightsJobResponse
 */
SubmitSportsHighlightsJobResponse Client::submitSportsHighlightsJobWithOptions(const SubmitSportsHighlightsJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.outputConfig();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  json body = {};
  if (!!request.hasInputConfig()) {
    body["InputConfig"] = request.inputConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SubmitSportsHighlightsJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSportsHighlightsJobResponse>();
}

/**
 * @summary Submits a sports highlights job to generate a highlights video of an event based on event materials that contain commentary.
 *
 * @param request SubmitSportsHighlightsJobRequest
 * @return SubmitSportsHighlightsJobResponse
 */
SubmitSportsHighlightsJobResponse Client::submitSportsHighlightsJob(const SubmitSportsHighlightsJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSportsHighlightsJobWithOptions(request, runtime);
}

/**
 * @summary Submits a standard human voice cloning job. After you call this operation, the JobId is returned. The training process is asynchronous. During training, you can call the GetCustomizedVoiceJob operation to query information such as the job state.
 *
 * @param request SubmitStandardCustomizedVoiceJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitStandardCustomizedVoiceJobResponse
 */
SubmitStandardCustomizedVoiceJobResponse Client::submitStandardCustomizedVoiceJobWithOptions(const SubmitStandardCustomizedVoiceJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAudios()) {
    query["Audios"] = request.audios();
  }

  if (!!request.hasAuthentication()) {
    query["Authentication"] = request.authentication();
  }

  if (!!request.hasDemoAudioMediaURL()) {
    query["DemoAudioMediaURL"] = request.demoAudioMediaURL();
  }

  if (!!request.hasGender()) {
    query["Gender"] = request.gender();
  }

  if (!!request.hasVoiceName()) {
    query["VoiceName"] = request.voiceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitStandardCustomizedVoiceJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitStandardCustomizedVoiceJobResponse>();
}

/**
 * @summary Submits a standard human voice cloning job. After you call this operation, the JobId is returned. The training process is asynchronous. During training, you can call the GetCustomizedVoiceJob operation to query information such as the job state.
 *
 * @param request SubmitStandardCustomizedVoiceJobRequest
 * @return SubmitStandardCustomizedVoiceJobResponse
 */
SubmitStandardCustomizedVoiceJobResponse Client::submitStandardCustomizedVoiceJob(const SubmitStandardCustomizedVoiceJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitStandardCustomizedVoiceJobWithOptions(request, runtime);
}

/**
 * @summary Submits a media file in synchronous mode for media information analysis.
 *
 * @description You can call this operation to analyze an input media file in synchronous mode. This operation is suitable for scenarios that require high real-time performance and low concurrency. If it takes an extended period of time to obtain the media information about the input media file, the request may time out or the obtained information may be inaccurate. We recommend that you call the [SubmitMediaInfoJob](https://help.aliyun.com/document_detail/441222.html) operation to obtain media information.
 *
 * @param tmpReq SubmitSyncMediaInfoJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSyncMediaInfoJobResponse
 */
SubmitSyncMediaInfoJobResponse Client::submitSyncMediaInfoJobWithOptions(const SubmitSyncMediaInfoJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitSyncMediaInfoJobShrinkRequest request = SubmitSyncMediaInfoJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  if (!!tmpReq.hasScheduleConfig()) {
    request.setScheduleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.scheduleConfig(), "ScheduleConfig", "json"));
  }

  json query = {};
  if (!!request.hasInputShrink()) {
    query["Input"] = request.inputShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasScheduleConfigShrink()) {
    query["ScheduleConfig"] = request.scheduleConfigShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitSyncMediaInfoJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSyncMediaInfoJobResponse>();
}

/**
 * @summary Submits a media file in synchronous mode for media information analysis.
 *
 * @description You can call this operation to analyze an input media file in synchronous mode. This operation is suitable for scenarios that require high real-time performance and low concurrency. If it takes an extended period of time to obtain the media information about the input media file, the request may time out or the obtained information may be inaccurate. We recommend that you call the [SubmitMediaInfoJob](https://help.aliyun.com/document_detail/441222.html) operation to obtain media information.
 *
 * @param request SubmitSyncMediaInfoJobRequest
 * @return SubmitSyncMediaInfoJobResponse
 */
SubmitSyncMediaInfoJobResponse Client::submitSyncMediaInfoJob(const SubmitSyncMediaInfoJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSyncMediaInfoJobWithOptions(request, runtime);
}

/**
 * @summary Submits a text generation job to generate marketing copies based on keywords and the requirements for the word count and number of output copies. The word count of the output copies may differ from the specified word count. After the job is submitted, you can call the GetSmartHandleJob operation to obtain the job state and result based on the job ID.
 *
 * @param request SubmitTextGenerateJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitTextGenerateJobResponse
 */
SubmitTextGenerateJobResponse Client::submitTextGenerateJobWithOptions(const SubmitTextGenerateJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasGenerateConfig()) {
    query["GenerateConfig"] = request.generateConfig();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitTextGenerateJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitTextGenerateJobResponse>();
}

/**
 * @summary Submits a text generation job to generate marketing copies based on keywords and the requirements for the word count and number of output copies. The word count of the output copies may differ from the specified word count. After the job is submitted, you can call the GetSmartHandleJob operation to obtain the job state and result based on the job ID.
 *
 * @param request SubmitTextGenerateJobRequest
 * @return SubmitTextGenerateJobResponse
 */
SubmitTextGenerateJobResponse Client::submitTextGenerateJob(const SubmitTextGenerateJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitTextGenerateJobWithOptions(request, runtime);
}

/**
 * @summary Submits an A/B watermarking job.
 *
 * @description *   This API supports only videos that last at least 3 minutes. If the video is too short, the call may fail, or no output may be returned.
 *
 * @param tmpReq SubmitTraceAbJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitTraceAbJobResponse
 */
SubmitTraceAbJobResponse Client::submitTraceAbJobWithOptions(const SubmitTraceAbJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitTraceAbJobShrinkRequest request = SubmitTraceAbJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  if (!!tmpReq.hasOutput()) {
    request.setOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.output(), "Output", "json"));
  }

  json query = {};
  if (!!request.hasCipherBase64ed()) {
    query["CipherBase64ed"] = request.cipherBase64ed();
  }

  if (!!request.hasInputShrink()) {
    query["Input"] = request.inputShrink();
  }

  if (!!request.hasLevel()) {
    query["Level"] = request.level();
  }

  if (!!request.hasOutputShrink()) {
    query["Output"] = request.outputShrink();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTotalTime()) {
    query["TotalTime"] = request.totalTime();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitTraceAbJob"},
    {"version" , "2020-11-09"},
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
 * @summary Submits an A/B watermarking job.
 *
 * @description *   This API supports only videos that last at least 3 minutes. If the video is too short, the call may fail, or no output may be returned.
 *
 * @param request SubmitTraceAbJobRequest
 * @return SubmitTraceAbJobResponse
 */
SubmitTraceAbJobResponse Client::submitTraceAbJob(const SubmitTraceAbJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitTraceAbJobWithOptions(request, runtime);
}

/**
 * @summary Submits a job to extract the trace watermark.
 *
 * @description *   This operation is supported only in the China (Shanghai) and China (Beijing) regions.
 * *   The input video must be 3 minutes or longer. Jobs submitted with shorter videos will fail.
 *
 * @param tmpReq SubmitTraceExtractJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitTraceExtractJobResponse
 */
SubmitTraceExtractJobResponse Client::submitTraceExtractJobWithOptions(const SubmitTraceExtractJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitTraceExtractJobShrinkRequest request = SubmitTraceExtractJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  json query = {};
  if (!!request.hasInputShrink()) {
    query["Input"] = request.inputShrink();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitTraceExtractJob"},
    {"version" , "2020-11-09"},
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
 * @summary Submits a job to extract the trace watermark.
 *
 * @description *   This operation is supported only in the China (Shanghai) and China (Beijing) regions.
 * *   The input video must be 3 minutes or longer. Jobs submitted with shorter videos will fail.
 *
 * @param request SubmitTraceExtractJobRequest
 * @return SubmitTraceExtractJobResponse
 */
SubmitTraceExtractJobResponse Client::submitTraceExtractJob(const SubmitTraceExtractJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitTraceExtractJobWithOptions(request, runtime);
}

/**
 * @summary Submits a job that generates an M3U8 file containing specific trace watermark information.
 *
 * @description *   Before you call this operation, you must call SubmitTraceAbJob to get the TraceMediaId from its response.
 * *   This operation is supported only in the China (Shanghai) and China (Beijing) regions.
 * *   The M3U8 file generated by this job has a signed URL with an authentication validity period of 24 hours, starting from the moment the job is completed. Once the signature expires, you will no longer be able to trace the watermark information using that specific M3U8 file. If you need to use it after expiration, you must call this API again to generate a new M3U8 file.
 *
 * @param tmpReq SubmitTraceM3u8JobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitTraceM3u8JobResponse
 */
SubmitTraceM3u8JobResponse Client::submitTraceM3u8JobWithOptions(const SubmitTraceM3u8JobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitTraceM3u8JobShrinkRequest request = SubmitTraceM3u8JobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOutput()) {
    request.setOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.output(), "Output", "json"));
  }

  json query = {};
  if (!!request.hasKeyUri()) {
    query["KeyUri"] = request.keyUri();
  }

  if (!!request.hasOutputShrink()) {
    query["Output"] = request.outputShrink();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
  }

  if (!!request.hasTrace()) {
    query["Trace"] = request.trace();
  }

  if (!!request.hasTraceMediaId()) {
    query["TraceMediaId"] = request.traceMediaId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitTraceM3u8Job"},
    {"version" , "2020-11-09"},
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
 * @summary Submits a job that generates an M3U8 file containing specific trace watermark information.
 *
 * @description *   Before you call this operation, you must call SubmitTraceAbJob to get the TraceMediaId from its response.
 * *   This operation is supported only in the China (Shanghai) and China (Beijing) regions.
 * *   The M3U8 file generated by this job has a signed URL with an authentication validity period of 24 hours, starting from the moment the job is completed. Once the signature expires, you will no longer be able to trace the watermark information using that specific M3U8 file. If you need to use it after expiration, you must call this API again to generate a new M3U8 file.
 *
 * @param request SubmitTraceM3u8JobRequest
 * @return SubmitTraceM3u8JobResponse
 */
SubmitTraceM3u8JobResponse Client::submitTraceM3u8Job(const SubmitTraceM3u8JobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitTraceM3u8JobWithOptions(request, runtime);
}

/**
 * @summary Submits a transcoding job.
 *
 * @param tmpReq SubmitTranscodeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitTranscodeJobResponse
 */
SubmitTranscodeJobResponse Client::submitTranscodeJobWithOptions(const SubmitTranscodeJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitTranscodeJobShrinkRequest request = SubmitTranscodeJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInputGroup()) {
    request.setInputGroupShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.inputGroup(), "InputGroup", "json"));
  }

  if (!!tmpReq.hasOutputGroup()) {
    request.setOutputGroupShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.outputGroup(), "OutputGroup", "json"));
  }

  if (!!tmpReq.hasScheduleConfig()) {
    request.setScheduleConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.scheduleConfig(), "ScheduleConfig", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInputGroupShrink()) {
    query["InputGroup"] = request.inputGroupShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOutputGroupShrink()) {
    query["OutputGroup"] = request.outputGroupShrink();
  }

  if (!!request.hasScheduleConfigShrink()) {
    query["ScheduleConfig"] = request.scheduleConfigShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitTranscodeJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitTranscodeJobResponse>();
}

/**
 * @summary Submits a transcoding job.
 *
 * @param request SubmitTranscodeJobRequest
 * @return SubmitTranscodeJobResponse
 */
SubmitTranscodeJobResponse Client::submitTranscodeJob(const SubmitTranscodeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitTranscodeJobWithOptions(request, runtime);
}

/**
 * @summary Submits a video for AI analysis and processing.
 *
 * @param tmpReq SubmitVideoCognitionJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitVideoCognitionJobResponse
 */
SubmitVideoCognitionJobResponse Client::submitVideoCognitionJobWithOptions(const SubmitVideoCognitionJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitVideoCognitionJobShrinkRequest request = SubmitVideoCognitionJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.input(), "Input", "json"));
  }

  json query = {};
  if (!!request.hasInputShrink()) {
    query["Input"] = request.inputShrink();
  }

  if (!!request.hasParams()) {
    query["Params"] = request.params();
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
    {"action" , "SubmitVideoCognitionJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitVideoCognitionJobResponse>();
}

/**
 * @summary Submits a video for AI analysis and processing.
 *
 * @param request SubmitVideoCognitionJobRequest
 * @return SubmitVideoCognitionJobResponse
 */
SubmitVideoCognitionJobResponse Client::submitVideoCognitionJob(const SubmitVideoCognitionJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitVideoCognitionJobWithOptions(request, runtime);
}

/**
 * @summary Submits a video translation job. You can call this operation to translate subtitles in a video and audio to a specific language. Lip-sync adaptation will be supported in the future.
 *
 * @description After you call this operation to submit a video translation job, the system returns a job ID. You can call the GetSmartHandleJob operation based on the job ID to obtain the status and result information of the job.
 *
 * @param request SubmitVideoTranslationJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitVideoTranslationJobResponse
 */
SubmitVideoTranslationJobResponse Client::submitVideoTranslationJobWithOptions(const SubmitVideoTranslationJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEditingConfig()) {
    query["EditingConfig"] = request.editingConfig();
  }

  if (!!request.hasInputConfig()) {
    query["InputConfig"] = request.inputConfig();
  }

  if (!!request.hasOutputConfig()) {
    query["OutputConfig"] = request.outputConfig();
  }

  if (!!request.hasSignature()) {
    query["Signature"] = request.signature();
  }

  if (!!request.hasSignatureMehtod()) {
    query["SignatureMehtod"] = request.signatureMehtod();
  }

  if (!!request.hasSignatureNonce()) {
    query["SignatureNonce"] = request.signatureNonce();
  }

  if (!!request.hasSignatureType()) {
    query["SignatureType"] = request.signatureType();
  }

  if (!!request.hasSignatureVersion()) {
    query["SignatureVersion"] = request.signatureVersion();
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
    {"action" , "SubmitVideoTranslationJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitVideoTranslationJobResponse>();
}

/**
 * @summary Submits a video translation job. You can call this operation to translate subtitles in a video and audio to a specific language. Lip-sync adaptation will be supported in the future.
 *
 * @description After you call this operation to submit a video translation job, the system returns a job ID. You can call the GetSmartHandleJob operation based on the job ID to obtain the status and result information of the job.
 *
 * @param request SubmitVideoTranslationJobRequest
 * @return SubmitVideoTranslationJobResponse
 */
SubmitVideoTranslationJobResponse Client::submitVideoTranslationJob(const SubmitVideoTranslationJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitVideoTranslationJobWithOptions(request, runtime);
}

/**
 * @summary Hands off a conversation to a human agent.
 *
 * @param request TakeoverAIAgentCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TakeoverAIAgentCallResponse
 */
TakeoverAIAgentCallResponse Client::takeoverAIAgentCallWithOptions(const TakeoverAIAgentCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHumanAgentUserId()) {
    query["HumanAgentUserId"] = request.humanAgentUserId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasRequireToken()) {
    query["RequireToken"] = request.requireToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TakeoverAIAgentCall"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TakeoverAIAgentCallResponse>();
}

/**
 * @summary Hands off a conversation to a human agent.
 *
 * @param request TakeoverAIAgentCallRequest
 * @return TakeoverAIAgentCallResponse
 */
TakeoverAIAgentCallResponse Client::takeoverAIAgentCall(const TakeoverAIAgentCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return takeoverAIAgentCallWithOptions(request, runtime);
}

/**
 * @summary Updates the configurations of an AI agent.
 *
 * @description ## [](#)Request description
 * You can call this operation to update the configurations of an AI agent, such as the tone, by specifying the agent ID and configurations.
 *
 * @param tmpReq UpdateAIAgentInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAIAgentInstanceResponse
 */
UpdateAIAgentInstanceResponse Client::updateAIAgentInstanceWithOptions(const UpdateAIAgentInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAIAgentInstanceShrinkRequest request = UpdateAIAgentInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentConfig()) {
    request.setAgentConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.agentConfig(), "AgentConfig", "json"));
  }

  if (!!tmpReq.hasTemplateConfig()) {
    request.setTemplateConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.templateConfig(), "TemplateConfig", "json"));
  }

  json query = {};
  if (!!request.hasAgentConfigShrink()) {
    query["AgentConfig"] = request.agentConfigShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasTemplateConfigShrink()) {
    query["TemplateConfig"] = request.templateConfigShrink();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAIAgentInstance"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAIAgentInstanceResponse>();
}

/**
 * @summary Updates the configurations of an AI agent.
 *
 * @description ## [](#)Request description
 * You can call this operation to update the configurations of an AI agent, such as the tone, by specifying the agent ID and configurations.
 *
 * @param request UpdateAIAgentInstanceRequest
 * @return UpdateAIAgentInstanceResponse
 */
UpdateAIAgentInstanceResponse Client::updateAIAgentInstance(const UpdateAIAgentInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAIAgentInstanceWithOptions(request, runtime);
}

/**
 * @summary Modifies an ad insertion configuration.
 *
 * @param request UpdateAdInsertionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAdInsertionResponse
 */
UpdateAdInsertionResponse Client::updateAdInsertionWithOptions(const UpdateAdInsertionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAdMarkerPassthrough()) {
    body["AdMarkerPassthrough"] = request.adMarkerPassthrough();
  }

  if (!!request.hasAdsUrl()) {
    body["AdsUrl"] = request.adsUrl();
  }

  if (!!request.hasCdnAdSegmentUrlPrefix()) {
    body["CdnAdSegmentUrlPrefix"] = request.cdnAdSegmentUrlPrefix();
  }

  if (!!request.hasCdnContentSegmentUrlPrefix()) {
    body["CdnContentSegmentUrlPrefix"] = request.cdnContentSegmentUrlPrefix();
  }

  if (!!request.hasConfigAliases()) {
    body["ConfigAliases"] = request.configAliases();
  }

  if (!!request.hasContentUrlPrefix()) {
    body["ContentUrlPrefix"] = request.contentUrlPrefix();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasPersonalizationThreshold()) {
    body["PersonalizationThreshold"] = request.personalizationThreshold();
  }

  if (!!request.hasSlateAdUrl()) {
    body["SlateAdUrl"] = request.slateAdUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateAdInsertion"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAdInsertionResponse>();
}

/**
 * @summary Modifies an ad insertion configuration.
 *
 * @param request UpdateAdInsertionRequest
 * @return UpdateAdInsertionResponse
 */
UpdateAdInsertionResponse Client::updateAdInsertion(const UpdateAdInsertionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAdInsertionWithOptions(request, runtime);
}

/**
 * @summary Modifies a digital human training job. You can modify the basic information or update parameters such as Video and Transparent for retraining if the training failed.
 *
 * @param request UpdateAvatarTrainingJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAvatarTrainingJobResponse
 */
UpdateAvatarTrainingJobResponse Client::updateAvatarTrainingJobWithOptions(const UpdateAvatarTrainingJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAvatarDescription()) {
    query["AvatarDescription"] = request.avatarDescription();
  }

  if (!!request.hasAvatarName()) {
    query["AvatarName"] = request.avatarName();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasPortrait()) {
    query["Portrait"] = request.portrait();
  }

  if (!!request.hasThumbnail()) {
    query["Thumbnail"] = request.thumbnail();
  }

  if (!!request.hasTransparent()) {
    query["Transparent"] = request.transparent();
  }

  if (!!request.hasVideo()) {
    query["Video"] = request.video();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAvatarTrainingJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAvatarTrainingJobResponse>();
}

/**
 * @summary Modifies a digital human training job. You can modify the basic information or update parameters such as Video and Transparent for retraining if the training failed.
 *
 * @param request UpdateAvatarTrainingJobRequest
 * @return UpdateAvatarTrainingJobResponse
 */
UpdateAvatarTrainingJobResponse Client::updateAvatarTrainingJob(const UpdateAvatarTrainingJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAvatarTrainingJobWithOptions(request, runtime);
}

/**
 * @summary Updates a category.
 *
 * @description After you create a media asset category, you can call this operation to find the category based on the category ID and change the name of the category.
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
    {"version" , "2020-11-09"},
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
 * @summary Updates a category.
 *
 * @description After you create a media asset category, you can call this operation to find the category based on the category ID and change the name of the category.
 *
 * @param request UpdateCategoryRequest
 * @return UpdateCategoryResponse
 */
UpdateCategoryResponse Client::updateCategory(const UpdateCategoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCategoryWithOptions(request, runtime);
}

/**
 * @summary Modifies a MediaWeaver channel.
 *
 * @param request UpdateChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateChannelResponse
 */
UpdateChannelResponse Client::updateChannelWithOptions(const UpdateChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessPolicy()) {
    query["AccessPolicy"] = request.accessPolicy();
  }

  if (!!request.hasAccessToken()) {
    query["AccessToken"] = request.accessToken();
  }

  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.channelName();
  }

  if (!!request.hasFillerSourceLocationName()) {
    query["FillerSourceLocationName"] = request.fillerSourceLocationName();
  }

  if (!!request.hasFillerSourceName()) {
    query["FillerSourceName"] = request.fillerSourceName();
  }

  if (!!request.hasOutPutConfigList()) {
    query["OutPutConfigList"] = request.outPutConfigList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateChannel"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateChannelResponse>();
}

/**
 * @summary Modifies a MediaWeaver channel.
 *
 * @param request UpdateChannelRequest
 * @return UpdateChannelResponse
 */
UpdateChannelResponse Client::updateChannel(const UpdateChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateChannelWithOptions(request, runtime);
}

/**
 * @summary Updates a custom template.
 *
 * @param request UpdateCustomTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomTemplateResponse
 */
UpdateCustomTemplateResponse Client::updateCustomTemplateWithOptions(const UpdateCustomTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasTemplateConfig()) {
    query["TemplateConfig"] = request.templateConfig();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCustomTemplate"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomTemplateResponse>();
}

/**
 * @summary Updates a custom template.
 *
 * @param request UpdateCustomTemplateRequest
 * @return UpdateCustomTemplateResponse
 */
UpdateCustomTemplateResponse Client::updateCustomTemplate(const UpdateCustomTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomTemplateWithOptions(request, runtime);
}

/**
 * @summary Updates a personalized human voice. Only the media asset ID of the sample audio file can be modified.
 *
 * @param request UpdateCustomizedVoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomizedVoiceResponse
 */
UpdateCustomizedVoiceResponse Client::updateCustomizedVoiceWithOptions(const UpdateCustomizedVoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDemoAudioMediaId()) {
    query["DemoAudioMediaId"] = request.demoAudioMediaId();
  }

  if (!!request.hasVoiceId()) {
    query["VoiceId"] = request.voiceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCustomizedVoice"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomizedVoiceResponse>();
}

/**
 * @summary Updates a personalized human voice. Only the media asset ID of the sample audio file can be modified.
 *
 * @param request UpdateCustomizedVoiceRequest
 * @return UpdateCustomizedVoiceResponse
 */
UpdateCustomizedVoiceResponse Client::updateCustomizedVoice(const UpdateCustomizedVoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomizedVoiceWithOptions(request, runtime);
}

/**
 * @summary Modifies an online editing project. You can call this operation to modify the configurations such as the title, timeline, and thumbnail of an online editing project.
 *
 * @param request UpdateEditingProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEditingProjectResponse
 */
UpdateEditingProjectResponse Client::updateEditingProjectWithOptions(const UpdateEditingProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessStatus()) {
    query["BusinessStatus"] = request.businessStatus();
  }

  if (!!request.hasClipsParam()) {
    query["ClipsParam"] = request.clipsParam();
  }

  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.coverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.projectId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.title();
  }

  json body = {};
  if (!!request.hasTimeline()) {
    body["Timeline"] = request.timeline();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateEditingProject"},
    {"version" , "2020-11-09"},
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
 * @summary Modifies an online editing project. You can call this operation to modify the configurations such as the title, timeline, and thumbnail of an online editing project.
 *
 * @param request UpdateEditingProjectRequest
 * @return UpdateEditingProjectResponse
 */
UpdateEditingProjectResponse Client::updateEditingProject(const UpdateEditingProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEditingProjectWithOptions(request, runtime);
}

/**
 * @summary Modifies a specified hotword library, including its name, description, and hotword list.
 *
 * @description ## [](#)
 * *   You can call this operation to modify a specified hotword library.
 * *   The hotword library ID (`HotwordLibraryId`) is required to identify the library that requires modification.
 * *   You can modify its name (`Name` ), description (`Description` ), and hotword list (`HotWords`).
 * *   Each hotword in the list can also be modified, including its content (`Text`), weight (`Weight`), language (`Language`), and translation results (`TranspositionResultList`).
 * *   A single account supports up to 100 hotword libraries, each containing a maximum of 300 hotword entries. In a library, the combination of `language` and `text` of an entry must be unique. The combination of `TranslatedText` and `TargetLanguage` in `TranspositionResultList` must also be unique.
 *
 * @param tmpReq UpdateHotwordLibraryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateHotwordLibraryResponse
 */
UpdateHotwordLibraryResponse Client::updateHotwordLibraryWithOptions(const UpdateHotwordLibraryRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateHotwordLibraryShrinkRequest request = UpdateHotwordLibraryShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHotwords()) {
    request.setHotwordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.hotwords(), "Hotwords", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasHotwordLibraryId()) {
    query["HotwordLibraryId"] = request.hotwordLibraryId();
  }

  if (!!request.hasHotwordsShrink()) {
    query["Hotwords"] = request.hotwordsShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateHotwordLibrary"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateHotwordLibraryResponse>();
}

/**
 * @summary Modifies a specified hotword library, including its name, description, and hotword list.
 *
 * @description ## [](#)
 * *   You can call this operation to modify a specified hotword library.
 * *   The hotword library ID (`HotwordLibraryId`) is required to identify the library that requires modification.
 * *   You can modify its name (`Name` ), description (`Description` ), and hotword list (`HotWords`).
 * *   Each hotword in the list can also be modified, including its content (`Text`), weight (`Weight`), language (`Language`), and translation results (`TranspositionResultList`).
 * *   A single account supports up to 100 hotword libraries, each containing a maximum of 300 hotword entries. In a library, the combination of `language` and `text` of an entry must be unique. The combination of `TranslatedText` and `TargetLanguage` in `TranspositionResultList` must also be unique.
 *
 * @param request UpdateHotwordLibraryRequest
 * @return UpdateHotwordLibraryResponse
 */
UpdateHotwordLibraryResponse Client::updateHotwordLibrary(const UpdateHotwordLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateHotwordLibraryWithOptions(request, runtime);
}

/**
 * @summary Updates the configuration of a live package channel, including the protocol, segment duration, and number of segments.
 *
 * @description ## [](#)Usage notes
 * You need to provide the name of the channel group to which the channel belongs, channel name, protocol, segment duration, and number of segments to update. In addition, you can choose to add or modify the description of the channel. Make sure that the provided channel group name and channel name conform to the naming conventions.
 *
 * @param request UpdateLivePackageChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLivePackageChannelResponse
 */
UpdateLivePackageChannelResponse Client::updateLivePackageChannelWithOptions(const UpdateLivePackageChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannelName()) {
    body["ChannelName"] = request.channelName();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasGroupName()) {
    body["GroupName"] = request.groupName();
  }

  if (!!request.hasProtocol()) {
    body["Protocol"] = request.protocol();
  }

  if (!!request.hasSegmentCount()) {
    body["SegmentCount"] = request.segmentCount();
  }

  if (!!request.hasSegmentDuration()) {
    body["SegmentDuration"] = request.segmentDuration();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateLivePackageChannel"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLivePackageChannelResponse>();
}

/**
 * @summary Updates the configuration of a live package channel, including the protocol, segment duration, and number of segments.
 *
 * @description ## [](#)Usage notes
 * You need to provide the name of the channel group to which the channel belongs, channel name, protocol, segment duration, and number of segments to update. In addition, you can choose to add or modify the description of the channel. Make sure that the provided channel group name and channel name conform to the naming conventions.
 *
 * @param request UpdateLivePackageChannelRequest
 * @return UpdateLivePackageChannelResponse
 */
UpdateLivePackageChannelResponse Client::updateLivePackageChannel(const UpdateLivePackageChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLivePackageChannelWithOptions(request, runtime);
}

/**
 * @summary Updates the credentials of ingest endpoints associated with a live package channel.
 *
 * @description ## [](#)Usage notes
 * You can choose to update the primary endpoint, secondary endpoint, or both. The response includes the updated ingest endpoint URL, username, and password for the ingest device to reconfigure.
 *
 * @param request UpdateLivePackageChannelCredentialsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLivePackageChannelCredentialsResponse
 */
UpdateLivePackageChannelCredentialsResponse Client::updateLivePackageChannelCredentialsWithOptions(const UpdateLivePackageChannelCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasChannelName()) {
    body["ChannelName"] = request.channelName();
  }

  if (!!request.hasGroupName()) {
    body["GroupName"] = request.groupName();
  }

  if (!!request.hasRotateCredentials()) {
    body["RotateCredentials"] = request.rotateCredentials();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateLivePackageChannelCredentials"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLivePackageChannelCredentialsResponse>();
}

/**
 * @summary Updates the credentials of ingest endpoints associated with a live package channel.
 *
 * @description ## [](#)Usage notes
 * You can choose to update the primary endpoint, secondary endpoint, or both. The response includes the updated ingest endpoint URL, username, and password for the ingest device to reconfigure.
 *
 * @param request UpdateLivePackageChannelCredentialsRequest
 * @return UpdateLivePackageChannelCredentialsResponse
 */
UpdateLivePackageChannelCredentialsResponse Client::updateLivePackageChannelCredentials(const UpdateLivePackageChannelCredentialsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLivePackageChannelCredentialsWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a live package channel group including its description.
 *
 * @description ## [](#)Usage notes
 * This API operation allows you to modify the name and description of a live package channel group. The channel group name must conform to the naming conventions and can be up to 1,000 characters. The API response includes the updated channel group details and unique identifier of the request.
 *
 * @param request UpdateLivePackageChannelGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLivePackageChannelGroupResponse
 */
UpdateLivePackageChannelGroupResponse Client::updateLivePackageChannelGroupWithOptions(const UpdateLivePackageChannelGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasGroupName()) {
    body["GroupName"] = request.groupName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateLivePackageChannelGroup"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLivePackageChannelGroupResponse>();
}

/**
 * @summary Updates the information about a live package channel group including its description.
 *
 * @description ## [](#)Usage notes
 * This API operation allows you to modify the name and description of a live package channel group. The channel group name must conform to the naming conventions and can be up to 1,000 characters. The API response includes the updated channel group details and unique identifier of the request.
 *
 * @param request UpdateLivePackageChannelGroupRequest
 * @return UpdateLivePackageChannelGroupResponse
 */
UpdateLivePackageChannelGroupResponse Client::updateLivePackageChannelGroup(const UpdateLivePackageChannelGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLivePackageChannelGroupWithOptions(request, runtime);
}

/**
 * @summary Updates the origin endpoint settings including the protocol, time shifting, and access control settings.
 *
 * @description ## [](#)Usage notes
 * You can call this operation to modify the origin protocol, set the number of days that time-shifted content is available, define playlist names, and configure the IP address blacklist and whitelist, allowing for fine-grained control over streaming media distribution. Some parameters are required. You must configure IpWhitelist, AuthorizationCode, or both.
 *
 * @param tmpReq UpdateLivePackageOriginEndpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLivePackageOriginEndpointResponse
 */
UpdateLivePackageOriginEndpointResponse Client::updateLivePackageOriginEndpointWithOptions(const UpdateLivePackageOriginEndpointRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateLivePackageOriginEndpointShrinkRequest request = UpdateLivePackageOriginEndpointShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLivePackagingConfig()) {
    request.setLivePackagingConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.livePackagingConfig(), "LivePackagingConfig", "json"));
  }

  json body = {};
  if (!!request.hasAuthorizationCode()) {
    body["AuthorizationCode"] = request.authorizationCode();
  }

  if (!!request.hasChannelName()) {
    body["ChannelName"] = request.channelName();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEndpointName()) {
    body["EndpointName"] = request.endpointName();
  }

  if (!!request.hasGroupName()) {
    body["GroupName"] = request.groupName();
  }

  if (!!request.hasIpBlacklist()) {
    body["IpBlacklist"] = request.ipBlacklist();
  }

  if (!!request.hasIpWhitelist()) {
    body["IpWhitelist"] = request.ipWhitelist();
  }

  if (!!request.hasLivePackagingConfigShrink()) {
    body["LivePackagingConfig"] = request.livePackagingConfigShrink();
  }

  if (!!request.hasManifestName()) {
    body["ManifestName"] = request.manifestName();
  }

  if (!!request.hasProtocol()) {
    body["Protocol"] = request.protocol();
  }

  if (!!request.hasTimeshiftVision()) {
    body["TimeshiftVision"] = request.timeshiftVision();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateLivePackageOriginEndpoint"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLivePackageOriginEndpointResponse>();
}

/**
 * @summary Updates the origin endpoint settings including the protocol, time shifting, and access control settings.
 *
 * @description ## [](#)Usage notes
 * You can call this operation to modify the origin protocol, set the number of days that time-shifted content is available, define playlist names, and configure the IP address blacklist and whitelist, allowing for fine-grained control over streaming media distribution. Some parameters are required. You must configure IpWhitelist, AuthorizationCode, or both.
 *
 * @param request UpdateLivePackageOriginEndpointRequest
 * @return UpdateLivePackageOriginEndpointResponse
 */
UpdateLivePackageOriginEndpointResponse Client::updateLivePackageOriginEndpoint(const UpdateLivePackageOriginEndpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLivePackageOriginEndpointWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a live stream recording template.
 *
 * @description Only user-created templates can be updated. The preset template cannot be updated.
 *
 * @param tmpReq UpdateLiveRecordTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLiveRecordTemplateResponse
 */
UpdateLiveRecordTemplateResponse Client::updateLiveRecordTemplateWithOptions(const UpdateLiveRecordTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateLiveRecordTemplateShrinkRequest request = UpdateLiveRecordTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRecordFormat()) {
    request.setRecordFormatShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.recordFormat(), "RecordFormat", "json"));
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasRecordFormatShrink()) {
    body["RecordFormat"] = request.recordFormatShrink();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateLiveRecordTemplate"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLiveRecordTemplateResponse>();
}

/**
 * @summary Updates the information about a live stream recording template.
 *
 * @description Only user-created templates can be updated. The preset template cannot be updated.
 *
 * @param request UpdateLiveRecordTemplateRequest
 * @return UpdateLiveRecordTemplateResponse
 */
UpdateLiveRecordTemplateResponse Client::updateLiveRecordTemplate(const UpdateLiveRecordTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLiveRecordTemplateWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a live stream snapshot template.
 *
 * @param request UpdateLiveSnapshotTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLiveSnapshotTemplateResponse
 */
UpdateLiveSnapshotTemplateResponse Client::updateLiveSnapshotTemplateWithOptions(const UpdateLiveSnapshotTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasOverwriteFormat()) {
    body["OverwriteFormat"] = request.overwriteFormat();
  }

  if (!!request.hasSequenceFormat()) {
    body["SequenceFormat"] = request.sequenceFormat();
  }

  if (!!request.hasTemplateId()) {
    body["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateName()) {
    body["TemplateName"] = request.templateName();
  }

  if (!!request.hasTimeInterval()) {
    body["TimeInterval"] = request.timeInterval();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateLiveSnapshotTemplate"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLiveSnapshotTemplateResponse>();
}

/**
 * @summary Updates the information about a live stream snapshot template.
 *
 * @param request UpdateLiveSnapshotTemplateRequest
 * @return UpdateLiveSnapshotTemplateResponse
 */
UpdateLiveSnapshotTemplateResponse Client::updateLiveSnapshotTemplate(const UpdateLiveSnapshotTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLiveSnapshotTemplateWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a live stream transcoding job.
 *
 * @description *   For a non-timed transcoding job, you can modify the Name parameter of the job, regardless of the job state.
 * *   For a timed job, you can modify the Name, StreamInput, TranscodeOutput, and TimedConfig parameters. However, the StreamInput, TranscodeOutput, and TimedConfig parameters can be modified only when the job is not started.
 *
 * @param tmpReq UpdateLiveTranscodeJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLiveTranscodeJobResponse
 */
UpdateLiveTranscodeJobResponse Client::updateLiveTranscodeJobWithOptions(const UpdateLiveTranscodeJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateLiveTranscodeJobShrinkRequest request = UpdateLiveTranscodeJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStreamInput()) {
    request.setStreamInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.streamInput(), "StreamInput", "json"));
  }

  if (!!tmpReq.hasTimedConfig()) {
    request.setTimedConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.timedConfig(), "TimedConfig", "json"));
  }

  if (!!tmpReq.hasTranscodeOutput()) {
    request.setTranscodeOutputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.transcodeOutput(), "TranscodeOutput", "json"));
  }

  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasStreamInputShrink()) {
    query["StreamInput"] = request.streamInputShrink();
  }

  if (!!request.hasTimedConfigShrink()) {
    query["TimedConfig"] = request.timedConfigShrink();
  }

  if (!!request.hasTranscodeOutputShrink()) {
    query["TranscodeOutput"] = request.transcodeOutputShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLiveTranscodeJob"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLiveTranscodeJobResponse>();
}

/**
 * @summary Updates the information about a live stream transcoding job.
 *
 * @description *   For a non-timed transcoding job, you can modify the Name parameter of the job, regardless of the job state.
 * *   For a timed job, you can modify the Name, StreamInput, TranscodeOutput, and TimedConfig parameters. However, the StreamInput, TranscodeOutput, and TimedConfig parameters can be modified only when the job is not started.
 *
 * @param request UpdateLiveTranscodeJobRequest
 * @return UpdateLiveTranscodeJobResponse
 */
UpdateLiveTranscodeJobResponse Client::updateLiveTranscodeJob(const UpdateLiveTranscodeJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLiveTranscodeJobWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a live stream transcoding template.
 *
 * @param tmpReq UpdateLiveTranscodeTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLiveTranscodeTemplateResponse
 */
UpdateLiveTranscodeTemplateResponse Client::updateLiveTranscodeTemplateWithOptions(const UpdateLiveTranscodeTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateLiveTranscodeTemplateShrinkRequest request = UpdateLiveTranscodeTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTemplateConfig()) {
    request.setTemplateConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.templateConfig(), "TemplateConfig", "json"));
  }

  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasTemplateConfigShrink()) {
    query["TemplateConfig"] = request.templateConfigShrink();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateLiveTranscodeTemplate"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLiveTranscodeTemplateResponse>();
}

/**
 * @summary Updates the information about a live stream transcoding template.
 *
 * @param request UpdateLiveTranscodeTemplateRequest
 * @return UpdateLiveTranscodeTemplateResponse
 */
UpdateLiveTranscodeTemplateResponse Client::updateLiveTranscodeTemplate(const UpdateLiveTranscodeTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLiveTranscodeTemplateWithOptions(request, runtime);
}

/**
 * @summary Modifies the source of a MediaConnect flow.
 *
 * @description *   You can modify the source only when the flow is in the offline state.
 * *   The source type cannot be modified.
 *
 * @param request UpdateMediaConnectFlowInputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaConnectFlowInputResponse
 */
UpdateMediaConnectFlowInputResponse Client::updateMediaConnectFlowInputWithOptions(const UpdateMediaConnectFlowInputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidrs()) {
    query["Cidrs"] = request.cidrs();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.flowId();
  }

  if (!!request.hasInputFromUrl()) {
    query["InputFromUrl"] = request.inputFromUrl();
  }

  if (!!request.hasInputName()) {
    query["InputName"] = request.inputName();
  }

  if (!!request.hasMaxBitrate()) {
    query["MaxBitrate"] = request.maxBitrate();
  }

  if (!!request.hasSrtLatency()) {
    query["SrtLatency"] = request.srtLatency();
  }

  if (!!request.hasSrtPassphrase()) {
    query["SrtPassphrase"] = request.srtPassphrase();
  }

  if (!!request.hasSrtPbkeyLen()) {
    query["SrtPbkeyLen"] = request.srtPbkeyLen();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMediaConnectFlowInput"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMediaConnectFlowInputResponse>();
}

/**
 * @summary Modifies the source of a MediaConnect flow.
 *
 * @description *   You can modify the source only when the flow is in the offline state.
 * *   The source type cannot be modified.
 *
 * @param request UpdateMediaConnectFlowInputRequest
 * @return UpdateMediaConnectFlowInputResponse
 */
UpdateMediaConnectFlowInputResponse Client::updateMediaConnectFlowInput(const UpdateMediaConnectFlowInputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMediaConnectFlowInputWithOptions(request, runtime);
}

/**
 * @summary Modifies an output of a MediaConnect flow.
 *
 * @description *   You can modify an output only when the flow is in the offline state.
 * *   The output type cannot be modified.
 *
 * @param request UpdateMediaConnectFlowOutputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaConnectFlowOutputResponse
 */
UpdateMediaConnectFlowOutputResponse Client::updateMediaConnectFlowOutputWithOptions(const UpdateMediaConnectFlowOutputRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCidrs()) {
    query["Cidrs"] = request.cidrs();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.flowId();
  }

  if (!!request.hasOutputName()) {
    query["OutputName"] = request.outputName();
  }

  if (!!request.hasOutputToUrl()) {
    query["OutputToUrl"] = request.outputToUrl();
  }

  if (!!request.hasPlayerLimit()) {
    query["PlayerLimit"] = request.playerLimit();
  }

  if (!!request.hasSrtLatency()) {
    query["SrtLatency"] = request.srtLatency();
  }

  if (!!request.hasSrtPassphrase()) {
    query["SrtPassphrase"] = request.srtPassphrase();
  }

  if (!!request.hasSrtPbkeyLen()) {
    query["SrtPbkeyLen"] = request.srtPbkeyLen();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMediaConnectFlowOutput"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMediaConnectFlowOutputResponse>();
}

/**
 * @summary Modifies an output of a MediaConnect flow.
 *
 * @description *   You can modify an output only when the flow is in the offline state.
 * *   The output type cannot be modified.
 *
 * @param request UpdateMediaConnectFlowOutputRequest
 * @return UpdateMediaConnectFlowOutputResponse
 */
UpdateMediaConnectFlowOutputResponse Client::updateMediaConnectFlowOutput(const UpdateMediaConnectFlowOutputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMediaConnectFlowOutputWithOptions(request, runtime);
}

/**
 * @summary Modifies the state of a MediaConnect flow.
 *
 * @param request UpdateMediaConnectFlowStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaConnectFlowStatusResponse
 */
UpdateMediaConnectFlowStatusResponse Client::updateMediaConnectFlowStatusWithOptions(const UpdateMediaConnectFlowStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.flowId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMediaConnectFlowStatus"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMediaConnectFlowStatusResponse>();
}

/**
 * @summary Modifies the state of a MediaConnect flow.
 *
 * @param request UpdateMediaConnectFlowStatusRequest
 * @return UpdateMediaConnectFlowStatusResponse
 */
UpdateMediaConnectFlowStatusResponse Client::updateMediaConnectFlowStatus(const UpdateMediaConnectFlowStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMediaConnectFlowStatusWithOptions(request, runtime);
}

/**
 * @summary Updates information about a media asset based on the ID of the media asset in Intelligent Media Services (IMS) or the input URL of the media asset.
 *
 * @description If the MediaId parameter is specified, the MediaId parameter is preferentially used for the query. If the MediaId parameter is left empty, the InputURL parameter must be specified. The request ID and media asset ID are returned. You cannot modify the input URL of a media asset by specifying the ID of the media asset.
 *
 * @param request UpdateMediaInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaInfoResponse
 */
UpdateMediaInfoResponse Client::updateMediaInfoWithOptions(const UpdateMediaInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppendTags()) {
    query["AppendTags"] = request.appendTags();
  }

  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.businessType();
  }

  if (!!request.hasCateId()) {
    query["CateId"] = request.cateId();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.category();
  }

  if (!!request.hasCoverURL()) {
    query["CoverURL"] = request.coverURL();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasInputURL()) {
    query["InputURL"] = request.inputURL();
  }

  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasMediaTags()) {
    query["MediaTags"] = request.mediaTags();
  }

  if (!!request.hasReferenceId()) {
    query["ReferenceId"] = request.referenceId();
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
    {"action" , "UpdateMediaInfo"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMediaInfoResponse>();
}

/**
 * @summary Updates information about a media asset based on the ID of the media asset in Intelligent Media Services (IMS) or the input URL of the media asset.
 *
 * @description If the MediaId parameter is specified, the MediaId parameter is preferentially used for the query. If the MediaId parameter is left empty, the InputURL parameter must be specified. The request ID and media asset ID are returned. You cannot modify the input URL of a media asset by specifying the ID of the media asset.
 *
 * @param request UpdateMediaInfoRequest
 * @return UpdateMediaInfoResponse
 */
UpdateMediaInfoResponse Client::updateMediaInfo(const UpdateMediaInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMediaInfoWithOptions(request, runtime);
}

/**
 * @summary Modifies a MediaLive channel.
 *
 * @description *   You can modify a MediaLive channel only when it is not running.
 * ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param tmpReq UpdateMediaLiveChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaLiveChannelResponse
 */
UpdateMediaLiveChannelResponse Client::updateMediaLiveChannelWithOptions(const UpdateMediaLiveChannelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMediaLiveChannelShrinkRequest request = UpdateMediaLiveChannelShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAudioSettings()) {
    request.setAudioSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.audioSettings(), "AudioSettings", "json"));
  }

  if (!!tmpReq.hasInputAttachments()) {
    request.setInputAttachmentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.inputAttachments(), "InputAttachments", "json"));
  }

  if (!!tmpReq.hasOutputGroups()) {
    request.setOutputGroupsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.outputGroups(), "OutputGroups", "json"));
  }

  if (!!tmpReq.hasVideoSettings()) {
    request.setVideoSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.videoSettings(), "VideoSettings", "json"));
  }

  json body = {};
  if (!!request.hasAudioSettingsShrink()) {
    body["AudioSettings"] = request.audioSettingsShrink();
  }

  if (!!request.hasChannelId()) {
    body["ChannelId"] = request.channelId();
  }

  if (!!request.hasInputAttachmentsShrink()) {
    body["InputAttachments"] = request.inputAttachmentsShrink();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasOutputGroupsShrink()) {
    body["OutputGroups"] = request.outputGroupsShrink();
  }

  if (!!request.hasVideoSettingsShrink()) {
    body["VideoSettings"] = request.videoSettingsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateMediaLiveChannel"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMediaLiveChannelResponse>();
}

/**
 * @summary Modifies a MediaLive channel.
 *
 * @description *   You can modify a MediaLive channel only when it is not running.
 * ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request UpdateMediaLiveChannelRequest
 * @return UpdateMediaLiveChannelResponse
 */
UpdateMediaLiveChannelResponse Client::updateMediaLiveChannel(const UpdateMediaLiveChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMediaLiveChannelWithOptions(request, runtime);
}

/**
 * @summary Modifies an input of MediaLive.
 *
 * @description *   You can modify an input only when it is not associated with a MediaLive channel.
 * ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param tmpReq UpdateMediaLiveInputRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaLiveInputResponse
 */
UpdateMediaLiveInputResponse Client::updateMediaLiveInputWithOptions(const UpdateMediaLiveInputRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMediaLiveInputShrinkRequest request = UpdateMediaLiveInputShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInputSettings()) {
    request.setInputSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.inputSettings(), "InputSettings", "json"));
  }

  if (!!tmpReq.hasSecurityGroupIds()) {
    request.setSecurityGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.securityGroupIds(), "SecurityGroupIds", "json"));
  }

  json query = {};
  if (!!request.hasInputSettingsShrink()) {
    query["InputSettings"] = request.inputSettingsShrink();
  }

  if (!!request.hasSecurityGroupIdsShrink()) {
    query["SecurityGroupIds"] = request.securityGroupIdsShrink();
  }

  json body = {};
  if (!!request.hasInputId()) {
    body["InputId"] = request.inputId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMediaLiveInput"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMediaLiveInputResponse>();
}

/**
 * @summary Modifies an input of MediaLive.
 *
 * @description *   You can modify an input only when it is not associated with a MediaLive channel.
 * ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request UpdateMediaLiveInputRequest
 * @return UpdateMediaLiveInputResponse
 */
UpdateMediaLiveInputResponse Client::updateMediaLiveInput(const UpdateMediaLiveInputRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMediaLiveInputWithOptions(request, runtime);
}

/**
 * @summary Modifies a security group created in MediaLive.
 *
 * @description *   You can modify a security group only when it is not associated with a MediaLive input.
 * ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param tmpReq UpdateMediaLiveInputSecurityGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaLiveInputSecurityGroupResponse
 */
UpdateMediaLiveInputSecurityGroupResponse Client::updateMediaLiveInputSecurityGroupWithOptions(const UpdateMediaLiveInputSecurityGroupRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMediaLiveInputSecurityGroupShrinkRequest request = UpdateMediaLiveInputSecurityGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWhitelistRules()) {
    request.setWhitelistRulesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.whitelistRules(), "WhitelistRules", "json"));
  }

  json body = {};
  if (!!request.hasName()) {
    body["Name"] = request.name();
  }

  if (!!request.hasSecurityGroupId()) {
    body["SecurityGroupId"] = request.securityGroupId();
  }

  if (!!request.hasWhitelistRulesShrink()) {
    body["WhitelistRules"] = request.whitelistRulesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateMediaLiveInputSecurityGroup"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMediaLiveInputSecurityGroupResponse>();
}

/**
 * @summary Modifies a security group created in MediaLive.
 *
 * @description *   You can modify a security group only when it is not associated with a MediaLive input.
 * ## QPS limit
 * This operation can be called up to 50 times per second for each Alibaba Cloud account. Requests that exceed this limit are dropped and you may experience service interruptions. We recommend that you take note of this limit when you call this operation.
 *
 * @param request UpdateMediaLiveInputSecurityGroupRequest
 * @return UpdateMediaLiveInputSecurityGroupResponse
 */
UpdateMediaLiveInputSecurityGroupResponse Client::updateMediaLiveInputSecurityGroup(const UpdateMediaLiveInputSecurityGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMediaLiveInputSecurityGroupWithOptions(request, runtime);
}

/**
 * @summary Modifies the marks of a media asset.
 *
 * @param request UpdateMediaMarksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaMarksResponse
 */
UpdateMediaMarksResponse Client::updateMediaMarksWithOptions(const UpdateMediaMarksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasMediaMarks()) {
    query["MediaMarks"] = request.mediaMarks();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMediaMarks"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMediaMarksResponse>();
}

/**
 * @summary Modifies the marks of a media asset.
 *
 * @param request UpdateMediaMarksRequest
 * @return UpdateMediaMarksResponse
 */
UpdateMediaMarksResponse Client::updateMediaMarks(const UpdateMediaMarksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMediaMarksWithOptions(request, runtime);
}

/**
 * @summary Updates the media asset information in a search library.
 *
 * @param request UpdateMediaToSearchLibRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMediaToSearchLibResponse
 */
UpdateMediaToSearchLibResponse Client::updateMediaToSearchLibWithOptions(const UpdateMediaToSearchLibRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMediaId()) {
    query["MediaId"] = request.mediaId();
  }

  if (!!request.hasMsgBody()) {
    query["MsgBody"] = request.msgBody();
  }

  if (!!request.hasNamespace()) {
    query["Namespace"] = request._namespace();
  }

  if (!!request.hasSearchLibName()) {
    query["SearchLibName"] = request.searchLibName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMediaToSearchLib"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMediaToSearchLibResponse>();
}

/**
 * @summary Updates the media asset information in a search library.
 *
 * @param request UpdateMediaToSearchLibRequest
 * @return UpdateMediaToSearchLibResponse
 */
UpdateMediaToSearchLibResponse Client::updateMediaToSearchLib(const UpdateMediaToSearchLibRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMediaToSearchLibWithOptions(request, runtime);
}

/**
 * @summary Updates the information about an ApsaraVideo Media Processing (MPS) queue.
 *
 * @param request UpdatePipelineRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePipelineResponse
 */
UpdatePipelineResponse Client::updatePipelineWithOptions(const UpdatePipelineRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPipelineId()) {
    query["PipelineId"] = request.pipelineId();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePipeline"},
    {"version" , "2020-11-09"},
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
 * @summary Updates the information about an ApsaraVideo Media Processing (MPS) queue.
 *
 * @param request UpdatePipelineRequest
 * @return UpdatePipelineResponse
 */
UpdatePipelineResponse Client::updatePipeline(const UpdatePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePipelineWithOptions(request, runtime);
}

/**
 * @summary Modifies a program in a MediaWeaver channel.
 *
 * @param request UpdateProgramRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProgramResponse
 */
UpdateProgramResponse Client::updateProgramWithOptions(const UpdateProgramRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdBreaks()) {
    query["AdBreaks"] = request.adBreaks();
  }

  if (!!request.hasChannelName()) {
    query["ChannelName"] = request.channelName();
  }

  if (!!request.hasClipRange()) {
    query["ClipRange"] = request.clipRange();
  }

  if (!!request.hasProgramName()) {
    query["ProgramName"] = request.programName();
  }

  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.sourceLocationName();
  }

  if (!!request.hasSourceName()) {
    query["SourceName"] = request.sourceName();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasTransition()) {
    query["Transition"] = request.transition();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateProgram"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProgramResponse>();
}

/**
 * @summary Modifies a program in a MediaWeaver channel.
 *
 * @param request UpdateProgramRequest
 * @return UpdateProgramResponse
 */
UpdateProgramResponse Client::updateProgram(const UpdateProgramRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProgramWithOptions(request, runtime);
}

/**
 * @summary 修改实例的配置
 *
 * @param tmpReq UpdateRtcRobotInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRtcRobotInstanceResponse
 */
UpdateRtcRobotInstanceResponse Client::updateRtcRobotInstanceWithOptions(const UpdateRtcRobotInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateRtcRobotInstanceShrinkRequest request = UpdateRtcRobotInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfig()) {
    request.setConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.config(), "Config", "json"));
  }

  json query = {};
  if (!!request.hasConfigShrink()) {
    query["Config"] = request.configShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRtcRobotInstance"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRtcRobotInstanceResponse>();
}

/**
 * @summary 修改实例的配置
 *
 * @param request UpdateRtcRobotInstanceRequest
 * @return UpdateRtcRobotInstanceResponse
 */
UpdateRtcRobotInstanceResponse Client::updateRtcRobotInstance(const UpdateRtcRobotInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRtcRobotInstanceWithOptions(request, runtime);
}

/**
 * @summary Modifies a source in MediaWeaver.
 *
 * @param request UpdateSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSourceResponse
 */
UpdateSourceResponse Client::updateSourceWithOptions(const UpdateSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasHttpPackageConfigurations()) {
    query["HttpPackageConfigurations"] = request.httpPackageConfigurations();
  }

  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.sourceLocationName();
  }

  if (!!request.hasSourceName()) {
    query["SourceName"] = request.sourceName();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSource"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSourceResponse>();
}

/**
 * @summary Modifies a source in MediaWeaver.
 *
 * @param request UpdateSourceRequest
 * @return UpdateSourceResponse
 */
UpdateSourceResponse Client::updateSource(const UpdateSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSourceWithOptions(request, runtime);
}

/**
 * @summary Modifies a source location.
 *
 * @param request UpdateSourceLocationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSourceLocationResponse
 */
UpdateSourceLocationResponse Client::updateSourceLocationWithOptions(const UpdateSourceLocationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaseUrl()) {
    query["BaseUrl"] = request.baseUrl();
  }

  if (!!request.hasEnableSegmentDelivery()) {
    query["EnableSegmentDelivery"] = request.enableSegmentDelivery();
  }

  if (!!request.hasSegmentDeliveryUrl()) {
    query["SegmentDeliveryUrl"] = request.segmentDeliveryUrl();
  }

  if (!!request.hasSourceLocationName()) {
    query["SourceLocationName"] = request.sourceLocationName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSourceLocation"},
    {"version" , "2020-11-09"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSourceLocationResponse>();
}

/**
 * @summary Modifies a source location.
 *
 * @param request UpdateSourceLocationRequest
 * @return UpdateSourceLocationResponse
 */
UpdateSourceLocationResponse Client::updateSourceLocation(const UpdateSourceLocationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSourceLocationWithOptions(request, runtime);
}

/**
 * @summary Modifies an online editing template. You can modify the template title and template configurations.
 *
 * @description *   For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
 * *   For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
 *
 * @param request UpdateTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplateWithOptions(const UpdateTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCoverUrl()) {
    query["CoverUrl"] = request.coverUrl();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPreviewMedia()) {
    query["PreviewMedia"] = request.previewMedia();
  }

  if (!!request.hasRelatedMediaids()) {
    query["RelatedMediaids"] = request.relatedMediaids();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.source();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  json body = {};
  if (!!request.hasConfig()) {
    body["Config"] = request.config();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateTemplate"},
    {"version" , "2020-11-09"},
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
 * @summary Modifies an online editing template. You can modify the template title and template configurations.
 *
 * @description *   For more information about how to use a regular template, see [Create and use a regular template](https://help.aliyun.com/document_detail/445399.html).
 * *   For more information about how to use an advanced template, see [Create and use advanced templates](https://help.aliyun.com/document_detail/445389.html).
 *
 * @param request UpdateTemplateRequest
 * @return UpdateTemplateResponse
 */
UpdateTemplateResponse Client::updateTemplate(const UpdateTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateTemplateWithOptions(request, runtime);
}

/**
 * @summary Uploads an audio or video file based on the URL of the source file. You can upload multiple media files at a time.
 *
 * @description *   If a callback is configured, you will receive an UploadByURLComplete event notification after the file is uploaded. You can query the upload status by calling the GetURLUploadInfos operation.
 * *   After a request is submitted, the upload job is queued as an asynchronous job in the cloud. You can query the status of the upload job based on information such as the URL and media asset ID that are returned in the event notification.
 * *   You can call this operation to upload media files that are not stored on a local server or device and must be uploaded by using URLs that are accessible over the Internet.
 * *   You can call this operation to upload media files only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media file to an OSS bucket, pull the file to a local directory, use [OSS SDK](https://help.aliyun.com/document_detail/32006.html) to upload the file to an OSS bucket, and then call the [RegisterMediaInfo](https://help.aliyun.com/document_detail/441152.html) operation to register the file in the OSS bucket with the media asset library.
 * *   This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
 * *   You can call this operation to upload only audio and video files.
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

  if (!!request.hasEntityId()) {
    query["EntityId"] = request.entityId();
  }

  if (!!request.hasMediaMetaData()) {
    query["MediaMetaData"] = request.mediaMetaData();
  }

  if (!!request.hasPostProcessConfig()) {
    query["PostProcessConfig"] = request.postProcessConfig();
  }

  if (!!request.hasUploadTargetConfig()) {
    query["UploadTargetConfig"] = request.uploadTargetConfig();
  }

  if (!!request.hasUploadURLs()) {
    query["UploadURLs"] = request.uploadURLs();
  }

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadMediaByURL"},
    {"version" , "2020-11-09"},
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
 * @summary Uploads an audio or video file based on the URL of the source file. You can upload multiple media files at a time.
 *
 * @description *   If a callback is configured, you will receive an UploadByURLComplete event notification after the file is uploaded. You can query the upload status by calling the GetURLUploadInfos operation.
 * *   After a request is submitted, the upload job is queued as an asynchronous job in the cloud. You can query the status of the upload job based on information such as the URL and media asset ID that are returned in the event notification.
 * *   You can call this operation to upload media files that are not stored on a local server or device and must be uploaded by using URLs that are accessible over the Internet.
 * *   You can call this operation to upload media files only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media file to an OSS bucket, pull the file to a local directory, use [OSS SDK](https://help.aliyun.com/document_detail/32006.html) to upload the file to an OSS bucket, and then call the [RegisterMediaInfo](https://help.aliyun.com/document_detail/441152.html) operation to register the file in the OSS bucket with the media asset library.
 * *   This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
 * *   You can call this operation to upload only audio and video files.
 *
 * @param request UploadMediaByURLRequest
 * @return UploadMediaByURLResponse
 */
UploadMediaByURLResponse Client::uploadMediaByURL(const UploadMediaByURLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadMediaByURLWithOptions(request, runtime);
}

/**
 * @summary Uploads a media stream file based on the URL of the source file.
 *
 * @description *   You can call this operation to pull a media stream file based on a URL and upload the file. After the media stream file is uploaded, the media stream is associated with the specified media asset ID.
 * *   You can call this operation to upload media stream files only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media stream file to an OSS bucket, pull the file to a local directory, use [OSS SDK](https://help.aliyun.com/document_detail/32006.html) to upload the file to an OSS bucket, and then call the [RegisterMediaStream](https://help.aliyun.com/document_detail/440765.html) operation to associate the media stream with the specified media asset ID.
 * *   This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
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

  if (!!request.hasUserData()) {
    query["UserData"] = request.userData();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadStreamByURL"},
    {"version" , "2020-11-09"},
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
 * @summary Uploads a media stream file based on the URL of the source file.
 *
 * @description *   You can call this operation to pull a media stream file based on a URL and upload the file. After the media stream file is uploaded, the media stream is associated with the specified media asset ID.
 * *   You can call this operation to upload media stream files only to ApsaraVideo VOD, but not to your own Object Storage Service (OSS) buckets. To upload a media stream file to an OSS bucket, pull the file to a local directory, use [OSS SDK](https://help.aliyun.com/document_detail/32006.html) to upload the file to an OSS bucket, and then call the [RegisterMediaStream](https://help.aliyun.com/document_detail/440765.html) operation to associate the media stream with the specified media asset ID.
 * *   This operation is available only in the China (Shanghai), China (Beijing), and China (Shenzhen) regions.
 *
 * @param request UploadStreamByURLRequest
 * @return UploadStreamByURLResponse
 */
UploadStreamByURLResponse Client::uploadStreamByURL(const UploadStreamByURLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadStreamByURLWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace ICE20201109